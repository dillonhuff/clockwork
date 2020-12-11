#include "clockwork_standard_compute_units.h"

hw_uint<32> stencil_05_cu1808(hw_uint<32*9>& in) {
  hw_uint<32> in_lane_0;
  set_at<0, 32, 32>(in_lane_0, in.extract<0, 31>());
  hw_uint<32> in_lane_1;
  set_at<0, 32, 32>(in_lane_1, in.extract<32, 63>());
  hw_uint<32> in_lane_2;
  set_at<0, 32, 32>(in_lane_2, in.extract<64, 95>());
  hw_uint<32> in_lane_3;
  set_at<0, 32, 32>(in_lane_3, in.extract<96, 127>());
  hw_uint<32> in_lane_4;
  set_at<0, 32, 32>(in_lane_4, in.extract<128, 159>());
  hw_uint<32> in_lane_5;
  set_at<0, 32, 32>(in_lane_5, in.extract<160, 191>());
  hw_uint<32> in_lane_6;
  set_at<0, 32, 32>(in_lane_6, in.extract<192, 223>());
  hw_uint<32> in_lane_7;
  set_at<0, 32, 32>(in_lane_7, in.extract<224, 255>());
  hw_uint<32> in_lane_8;
  set_at<0, 32, 32>(in_lane_8, in.extract<256, 287>());

	
auto res_init8 = set_zero_32();

	  hw_uint<32 > in_lane_0_pack;
  set_at<0, 32, 32>(in_lane_0_pack, in_lane_0);
  hw_uint<32 > res_init8_pack;
  set_at<0, 32, 32>(res_init8_pack, res_init8);
auto res_update9_stencil_07__m_1374_stencil_06_1744 = add(in_lane_0_pack, res_init8_pack);

	  hw_uint<32 > in_lane_1_pack;
  set_at<0, 32, 32>(in_lane_1_pack, in_lane_1);
  hw_uint<32 > res_update9_stencil_07__m_1374_stencil_06_1744_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_1374_stencil_06_1744_pack, res_update9_stencil_07__m_1374_stencil_06_1744);
auto res_update9_stencil_07_0376_stencil_06_1742 = add(in_lane_1_pack, res_update9_stencil_07__m_1374_stencil_06_1744_pack);

	  hw_uint<32 > in_lane_2_pack;
  set_at<0, 32, 32>(in_lane_2_pack, in_lane_2);
  hw_uint<32 > res_update9_stencil_07_0376_stencil_06_1742_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_0376_stencil_06_1742_pack, res_update9_stencil_07_0376_stencil_06_1742);
auto res_update9_stencil_07_1378_stencil_06_1740 = add(in_lane_2_pack, res_update9_stencil_07_0376_stencil_06_1742_pack);

	  hw_uint<32 > in_lane_3_pack;
  set_at<0, 32, 32>(in_lane_3_pack, in_lane_3);
  hw_uint<32 > res_update9_stencil_07_1378_stencil_06_1740_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_1378_stencil_06_1740_pack, res_update9_stencil_07_1378_stencil_06_1740);
auto res_update9_stencil_07__m_1374_stencil_06_0738 = add(in_lane_3_pack, res_update9_stencil_07_1378_stencil_06_1740_pack);

	  hw_uint<32 > in_lane_4_pack;
  set_at<0, 32, 32>(in_lane_4_pack, in_lane_4);
  hw_uint<32 > res_update9_stencil_07__m_1374_stencil_06_0738_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_1374_stencil_06_0738_pack, res_update9_stencil_07__m_1374_stencil_06_0738);
auto res_update9_stencil_07_0376_stencil_06_0736 = add(in_lane_4_pack, res_update9_stencil_07__m_1374_stencil_06_0738_pack);

	  hw_uint<32 > in_lane_5_pack;
  set_at<0, 32, 32>(in_lane_5_pack, in_lane_5);
  hw_uint<32 > res_update9_stencil_07_0376_stencil_06_0736_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_0376_stencil_06_0736_pack, res_update9_stencil_07_0376_stencil_06_0736);
auto res_update9_stencil_07_1378_stencil_06_0734 = add(in_lane_5_pack, res_update9_stencil_07_0376_stencil_06_0736_pack);

	  hw_uint<32 > in_lane_6_pack;
  set_at<0, 32, 32>(in_lane_6_pack, in_lane_6);
  hw_uint<32 > res_update9_stencil_07_1378_stencil_06_0734_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_1378_stencil_06_0734_pack, res_update9_stencil_07_1378_stencil_06_0734);
auto res_update9_stencil_07__m_1374_stencil_06__m_1732 = add(in_lane_6_pack, res_update9_stencil_07_1378_stencil_06_0734_pack);

	  hw_uint<32 > in_lane_7_pack;
  set_at<0, 32, 32>(in_lane_7_pack, in_lane_7);
  hw_uint<32 > res_update9_stencil_07__m_1374_stencil_06__m_1732_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_1374_stencil_06__m_1732_pack, res_update9_stencil_07__m_1374_stencil_06__m_1732);
auto res_update9_stencil_07_0376_stencil_06__m_1730 = add(in_lane_7_pack, res_update9_stencil_07__m_1374_stencil_06__m_1732_pack);

	  hw_uint<32 > in_lane_8_pack;
  set_at<0, 32, 32>(in_lane_8_pack, in_lane_8);
  hw_uint<32 > res_update9_stencil_07_0376_stencil_06__m_1730_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_0376_stencil_06__m_1730_pack, res_update9_stencil_07_0376_stencil_06__m_1730);
auto res_update9_stencil_07_1378_stencil_06__m_1728 = add(in_lane_8_pack, res_update9_stencil_07_0376_stencil_06__m_1730_pack);
  hw_uint<32 > return_value1809;
  set_at<0, 32, 32>(return_value1809, res_update9_stencil_07_1378_stencil_06__m_1728);
  return return_value1809;

}

hw_uint<32> stencil_111_cu1811(hw_uint<32*9>& stencil_0) {
  hw_uint<32> stencil_0_lane_0;
  set_at<0, 32, 32>(stencil_0_lane_0, stencil_0.extract<0, 31>());
  hw_uint<32> stencil_0_lane_1;
  set_at<0, 32, 32>(stencil_0_lane_1, stencil_0.extract<32, 63>());
  hw_uint<32> stencil_0_lane_2;
  set_at<0, 32, 32>(stencil_0_lane_2, stencil_0.extract<64, 95>());
  hw_uint<32> stencil_0_lane_3;
  set_at<0, 32, 32>(stencil_0_lane_3, stencil_0.extract<96, 127>());
  hw_uint<32> stencil_0_lane_4;
  set_at<0, 32, 32>(stencil_0_lane_4, stencil_0.extract<128, 159>());
  hw_uint<32> stencil_0_lane_5;
  set_at<0, 32, 32>(stencil_0_lane_5, stencil_0.extract<160, 191>());
  hw_uint<32> stencil_0_lane_6;
  set_at<0, 32, 32>(stencil_0_lane_6, stencil_0.extract<192, 223>());
  hw_uint<32> stencil_0_lane_7;
  set_at<0, 32, 32>(stencil_0_lane_7, stencil_0.extract<224, 255>());
  hw_uint<32> stencil_0_lane_8;
  set_at<0, 32, 32>(stencil_0_lane_8, stencil_0.extract<256, 287>());

	
auto res_init14 = set_zero_32();

	  hw_uint<32 > stencil_0_lane_0_pack;
  set_at<0, 32, 32>(stencil_0_lane_0_pack, stencil_0_lane_0);
  hw_uint<32 > res_init14_pack;
  set_at<0, 32, 32>(res_init14_pack, res_init14);
auto res_update15_stencil_113__m_1398_stencil_112_11734 = add(stencil_0_lane_0_pack, res_init14_pack);

	  hw_uint<32 > stencil_0_lane_1_pack;
  set_at<0, 32, 32>(stencil_0_lane_1_pack, stencil_0_lane_1);
  hw_uint<32 > res_update15_stencil_113__m_1398_stencil_112_11734_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_1398_stencil_112_11734_pack, res_update15_stencil_113__m_1398_stencil_112_11734);
auto res_update15_stencil_113_0400_stencil_112_11732 = add(stencil_0_lane_1_pack, res_update15_stencil_113__m_1398_stencil_112_11734_pack);

	  hw_uint<32 > stencil_0_lane_2_pack;
  set_at<0, 32, 32>(stencil_0_lane_2_pack, stencil_0_lane_2);
  hw_uint<32 > res_update15_stencil_113_0400_stencil_112_11732_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_0400_stencil_112_11732_pack, res_update15_stencil_113_0400_stencil_112_11732);
auto res_update15_stencil_113_1402_stencil_112_11730 = add(stencil_0_lane_2_pack, res_update15_stencil_113_0400_stencil_112_11732_pack);

	  hw_uint<32 > stencil_0_lane_3_pack;
  set_at<0, 32, 32>(stencil_0_lane_3_pack, stencil_0_lane_3);
  hw_uint<32 > res_update15_stencil_113_1402_stencil_112_11730_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_1402_stencil_112_11730_pack, res_update15_stencil_113_1402_stencil_112_11730);
auto res_update15_stencil_113__m_1398_stencil_112_01728 = add(stencil_0_lane_3_pack, res_update15_stencil_113_1402_stencil_112_11730_pack);

	  hw_uint<32 > stencil_0_lane_4_pack;
  set_at<0, 32, 32>(stencil_0_lane_4_pack, stencil_0_lane_4);
  hw_uint<32 > res_update15_stencil_113__m_1398_stencil_112_01728_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_1398_stencil_112_01728_pack, res_update15_stencil_113__m_1398_stencil_112_01728);
auto res_update15_stencil_113_0400_stencil_112_01726 = add(stencil_0_lane_4_pack, res_update15_stencil_113__m_1398_stencil_112_01728_pack);

	  hw_uint<32 > stencil_0_lane_5_pack;
  set_at<0, 32, 32>(stencil_0_lane_5_pack, stencil_0_lane_5);
  hw_uint<32 > res_update15_stencil_113_0400_stencil_112_01726_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_0400_stencil_112_01726_pack, res_update15_stencil_113_0400_stencil_112_01726);
auto res_update15_stencil_113_1402_stencil_112_01724 = add(stencil_0_lane_5_pack, res_update15_stencil_113_0400_stencil_112_01726_pack);

	  hw_uint<32 > stencil_0_lane_6_pack;
  set_at<0, 32, 32>(stencil_0_lane_6_pack, stencil_0_lane_6);
  hw_uint<32 > res_update15_stencil_113_1402_stencil_112_01724_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_1402_stencil_112_01724_pack, res_update15_stencil_113_1402_stencil_112_01724);
auto res_update15_stencil_113__m_1398_stencil_112__m_11722 = add(stencil_0_lane_6_pack, res_update15_stencil_113_1402_stencil_112_01724_pack);

	  hw_uint<32 > stencil_0_lane_7_pack;
  set_at<0, 32, 32>(stencil_0_lane_7_pack, stencil_0_lane_7);
  hw_uint<32 > res_update15_stencil_113__m_1398_stencil_112__m_11722_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_1398_stencil_112__m_11722_pack, res_update15_stencil_113__m_1398_stencil_112__m_11722);
auto res_update15_stencil_113_0400_stencil_112__m_11720 = add(stencil_0_lane_7_pack, res_update15_stencil_113__m_1398_stencil_112__m_11722_pack);

	  hw_uint<32 > stencil_0_lane_8_pack;
  set_at<0, 32, 32>(stencil_0_lane_8_pack, stencil_0_lane_8);
  hw_uint<32 > res_update15_stencil_113_0400_stencil_112__m_11720_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_0400_stencil_112__m_11720_pack, res_update15_stencil_113_0400_stencil_112__m_11720);
auto res_update15_stencil_113_1402_stencil_112__m_11718 = add(stencil_0_lane_8_pack, res_update15_stencil_113_0400_stencil_112__m_11720_pack);
  hw_uint<32 > return_value1812;
  set_at<0, 32, 32>(return_value1812, res_update15_stencil_113_1402_stencil_112__m_11718);
  return return_value1812;

}

hw_uint<32> stencil_217_cu1814(hw_uint<32*9>& stencil_1) {
  hw_uint<32> stencil_1_lane_0;
  set_at<0, 32, 32>(stencil_1_lane_0, stencil_1.extract<0, 31>());
  hw_uint<32> stencil_1_lane_1;
  set_at<0, 32, 32>(stencil_1_lane_1, stencil_1.extract<32, 63>());
  hw_uint<32> stencil_1_lane_2;
  set_at<0, 32, 32>(stencil_1_lane_2, stencil_1.extract<64, 95>());
  hw_uint<32> stencil_1_lane_3;
  set_at<0, 32, 32>(stencil_1_lane_3, stencil_1.extract<96, 127>());
  hw_uint<32> stencil_1_lane_4;
  set_at<0, 32, 32>(stencil_1_lane_4, stencil_1.extract<128, 159>());
  hw_uint<32> stencil_1_lane_5;
  set_at<0, 32, 32>(stencil_1_lane_5, stencil_1.extract<160, 191>());
  hw_uint<32> stencil_1_lane_6;
  set_at<0, 32, 32>(stencil_1_lane_6, stencil_1.extract<192, 223>());
  hw_uint<32> stencil_1_lane_7;
  set_at<0, 32, 32>(stencil_1_lane_7, stencil_1.extract<224, 255>());
  hw_uint<32> stencil_1_lane_8;
  set_at<0, 32, 32>(stencil_1_lane_8, stencil_1.extract<256, 287>());

	
auto res_init20 = set_zero_32();

	  hw_uint<32 > stencil_1_lane_0_pack;
  set_at<0, 32, 32>(stencil_1_lane_0_pack, stencil_1_lane_0);
  hw_uint<32 > res_init20_pack;
  set_at<0, 32, 32>(res_init20_pack, res_init20);
auto res_update21_stencil_219__m_1542_stencil_218_11302 = add(stencil_1_lane_0_pack, res_init20_pack);

	  hw_uint<32 > stencil_1_lane_1_pack;
  set_at<0, 32, 32>(stencil_1_lane_1_pack, stencil_1_lane_1);
  hw_uint<32 > res_update21_stencil_219__m_1542_stencil_218_11302_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_1542_stencil_218_11302_pack, res_update21_stencil_219__m_1542_stencil_218_11302);
auto res_update21_stencil_219_0544_stencil_218_11300 = add(stencil_1_lane_1_pack, res_update21_stencil_219__m_1542_stencil_218_11302_pack);

	  hw_uint<32 > stencil_1_lane_2_pack;
  set_at<0, 32, 32>(stencil_1_lane_2_pack, stencil_1_lane_2);
  hw_uint<32 > res_update21_stencil_219_0544_stencil_218_11300_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_0544_stencil_218_11300_pack, res_update21_stencil_219_0544_stencil_218_11300);
auto res_update21_stencil_219_1546_stencil_218_11298 = add(stencil_1_lane_2_pack, res_update21_stencil_219_0544_stencil_218_11300_pack);

	  hw_uint<32 > stencil_1_lane_3_pack;
  set_at<0, 32, 32>(stencil_1_lane_3_pack, stencil_1_lane_3);
  hw_uint<32 > res_update21_stencil_219_1546_stencil_218_11298_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_1546_stencil_218_11298_pack, res_update21_stencil_219_1546_stencil_218_11298);
auto res_update21_stencil_219__m_1542_stencil_218_01296 = add(stencil_1_lane_3_pack, res_update21_stencil_219_1546_stencil_218_11298_pack);

	  hw_uint<32 > stencil_1_lane_4_pack;
  set_at<0, 32, 32>(stencil_1_lane_4_pack, stencil_1_lane_4);
  hw_uint<32 > res_update21_stencil_219__m_1542_stencil_218_01296_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_1542_stencil_218_01296_pack, res_update21_stencil_219__m_1542_stencil_218_01296);
auto res_update21_stencil_219_0544_stencil_218_01294 = add(stencil_1_lane_4_pack, res_update21_stencil_219__m_1542_stencil_218_01296_pack);

	  hw_uint<32 > stencil_1_lane_5_pack;
  set_at<0, 32, 32>(stencil_1_lane_5_pack, stencil_1_lane_5);
  hw_uint<32 > res_update21_stencil_219_0544_stencil_218_01294_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_0544_stencil_218_01294_pack, res_update21_stencil_219_0544_stencil_218_01294);
auto res_update21_stencil_219_1546_stencil_218_01292 = add(stencil_1_lane_5_pack, res_update21_stencil_219_0544_stencil_218_01294_pack);

	  hw_uint<32 > stencil_1_lane_6_pack;
  set_at<0, 32, 32>(stencil_1_lane_6_pack, stencil_1_lane_6);
  hw_uint<32 > res_update21_stencil_219_1546_stencil_218_01292_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_1546_stencil_218_01292_pack, res_update21_stencil_219_1546_stencil_218_01292);
auto res_update21_stencil_219__m_1542_stencil_218__m_11290 = add(stencil_1_lane_6_pack, res_update21_stencil_219_1546_stencil_218_01292_pack);

	  hw_uint<32 > stencil_1_lane_7_pack;
  set_at<0, 32, 32>(stencil_1_lane_7_pack, stencil_1_lane_7);
  hw_uint<32 > res_update21_stencil_219__m_1542_stencil_218__m_11290_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_1542_stencil_218__m_11290_pack, res_update21_stencil_219__m_1542_stencil_218__m_11290);
auto res_update21_stencil_219_0544_stencil_218__m_11288 = add(stencil_1_lane_7_pack, res_update21_stencil_219__m_1542_stencil_218__m_11290_pack);

	  hw_uint<32 > stencil_1_lane_8_pack;
  set_at<0, 32, 32>(stencil_1_lane_8_pack, stencil_1_lane_8);
  hw_uint<32 > res_update21_stencil_219_0544_stencil_218__m_11288_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_0544_stencil_218__m_11288_pack, res_update21_stencil_219_0544_stencil_218__m_11288);
auto res_update21_stencil_219_1546_stencil_218__m_11286 = add(stencil_1_lane_8_pack, res_update21_stencil_219_0544_stencil_218__m_11288_pack);
  hw_uint<32 > return_value1815;
  set_at<0, 32, 32>(return_value1815, res_update21_stencil_219_1546_stencil_218__m_11286);
  return return_value1815;

}

hw_uint<32> stencil_323_cu1817(hw_uint<32*9>& stencil_2) {
  hw_uint<32> stencil_2_lane_0;
  set_at<0, 32, 32>(stencil_2_lane_0, stencil_2.extract<0, 31>());
  hw_uint<32> stencil_2_lane_1;
  set_at<0, 32, 32>(stencil_2_lane_1, stencil_2.extract<32, 63>());
  hw_uint<32> stencil_2_lane_2;
  set_at<0, 32, 32>(stencil_2_lane_2, stencil_2.extract<64, 95>());
  hw_uint<32> stencil_2_lane_3;
  set_at<0, 32, 32>(stencil_2_lane_3, stencil_2.extract<96, 127>());
  hw_uint<32> stencil_2_lane_4;
  set_at<0, 32, 32>(stencil_2_lane_4, stencil_2.extract<128, 159>());
  hw_uint<32> stencil_2_lane_5;
  set_at<0, 32, 32>(stencil_2_lane_5, stencil_2.extract<160, 191>());
  hw_uint<32> stencil_2_lane_6;
  set_at<0, 32, 32>(stencil_2_lane_6, stencil_2.extract<192, 223>());
  hw_uint<32> stencil_2_lane_7;
  set_at<0, 32, 32>(stencil_2_lane_7, stencil_2.extract<224, 255>());
  hw_uint<32> stencil_2_lane_8;
  set_at<0, 32, 32>(stencil_2_lane_8, stencil_2.extract<256, 287>());

	
auto res_init26 = set_zero_32();

	  hw_uint<32 > stencil_2_lane_0_pack;
  set_at<0, 32, 32>(stencil_2_lane_0_pack, stencil_2_lane_0);
  hw_uint<32 > res_init26_pack;
  set_at<0, 32, 32>(res_init26_pack, res_init26);
auto res_update27_stencil_325__m_1686_stencil_324_1870 = add(stencil_2_lane_0_pack, res_init26_pack);

	  hw_uint<32 > stencil_2_lane_1_pack;
  set_at<0, 32, 32>(stencil_2_lane_1_pack, stencil_2_lane_1);
  hw_uint<32 > res_update27_stencil_325__m_1686_stencil_324_1870_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_1686_stencil_324_1870_pack, res_update27_stencil_325__m_1686_stencil_324_1870);
auto res_update27_stencil_325_0688_stencil_324_1868 = add(stencil_2_lane_1_pack, res_update27_stencil_325__m_1686_stencil_324_1870_pack);

	  hw_uint<32 > stencil_2_lane_2_pack;
  set_at<0, 32, 32>(stencil_2_lane_2_pack, stencil_2_lane_2);
  hw_uint<32 > res_update27_stencil_325_0688_stencil_324_1868_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_0688_stencil_324_1868_pack, res_update27_stencil_325_0688_stencil_324_1868);
auto res_update27_stencil_325_1690_stencil_324_1866 = add(stencil_2_lane_2_pack, res_update27_stencil_325_0688_stencil_324_1868_pack);

	  hw_uint<32 > stencil_2_lane_3_pack;
  set_at<0, 32, 32>(stencil_2_lane_3_pack, stencil_2_lane_3);
  hw_uint<32 > res_update27_stencil_325_1690_stencil_324_1866_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_1690_stencil_324_1866_pack, res_update27_stencil_325_1690_stencil_324_1866);
auto res_update27_stencil_325__m_1686_stencil_324_0864 = add(stencil_2_lane_3_pack, res_update27_stencil_325_1690_stencil_324_1866_pack);

	  hw_uint<32 > stencil_2_lane_4_pack;
  set_at<0, 32, 32>(stencil_2_lane_4_pack, stencil_2_lane_4);
  hw_uint<32 > res_update27_stencil_325__m_1686_stencil_324_0864_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_1686_stencil_324_0864_pack, res_update27_stencil_325__m_1686_stencil_324_0864);
auto res_update27_stencil_325_0688_stencil_324_0862 = add(stencil_2_lane_4_pack, res_update27_stencil_325__m_1686_stencil_324_0864_pack);

	  hw_uint<32 > stencil_2_lane_5_pack;
  set_at<0, 32, 32>(stencil_2_lane_5_pack, stencil_2_lane_5);
  hw_uint<32 > res_update27_stencil_325_0688_stencil_324_0862_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_0688_stencil_324_0862_pack, res_update27_stencil_325_0688_stencil_324_0862);
auto res_update27_stencil_325_1690_stencil_324_0860 = add(stencil_2_lane_5_pack, res_update27_stencil_325_0688_stencil_324_0862_pack);

	  hw_uint<32 > stencil_2_lane_6_pack;
  set_at<0, 32, 32>(stencil_2_lane_6_pack, stencil_2_lane_6);
  hw_uint<32 > res_update27_stencil_325_1690_stencil_324_0860_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_1690_stencil_324_0860_pack, res_update27_stencil_325_1690_stencil_324_0860);
auto res_update27_stencil_325__m_1686_stencil_324__m_1858 = add(stencil_2_lane_6_pack, res_update27_stencil_325_1690_stencil_324_0860_pack);

	  hw_uint<32 > stencil_2_lane_7_pack;
  set_at<0, 32, 32>(stencil_2_lane_7_pack, stencil_2_lane_7);
  hw_uint<32 > res_update27_stencil_325__m_1686_stencil_324__m_1858_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_1686_stencil_324__m_1858_pack, res_update27_stencil_325__m_1686_stencil_324__m_1858);
auto res_update27_stencil_325_0688_stencil_324__m_1856 = add(stencil_2_lane_7_pack, res_update27_stencil_325__m_1686_stencil_324__m_1858_pack);

	  hw_uint<32 > stencil_2_lane_8_pack;
  set_at<0, 32, 32>(stencil_2_lane_8_pack, stencil_2_lane_8);
  hw_uint<32 > res_update27_stencil_325_0688_stencil_324__m_1856_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_0688_stencil_324__m_1856_pack, res_update27_stencil_325_0688_stencil_324__m_1856);
auto res_update27_stencil_325_1690_stencil_324__m_1854 = add(stencil_2_lane_8_pack, res_update27_stencil_325_0688_stencil_324__m_1856_pack);
  hw_uint<32 > return_value1818;
  set_at<0, 32, 32>(return_value1818, res_update27_stencil_325_1690_stencil_324__m_1854);
  return return_value1818;

}

hw_uint<32> stencil_429_cu1820(hw_uint<32*9>& stencil_3) {
  hw_uint<32> stencil_3_lane_0;
  set_at<0, 32, 32>(stencil_3_lane_0, stencil_3.extract<0, 31>());
  hw_uint<32> stencil_3_lane_1;
  set_at<0, 32, 32>(stencil_3_lane_1, stencil_3.extract<32, 63>());
  hw_uint<32> stencil_3_lane_2;
  set_at<0, 32, 32>(stencil_3_lane_2, stencil_3.extract<64, 95>());
  hw_uint<32> stencil_3_lane_3;
  set_at<0, 32, 32>(stencil_3_lane_3, stencil_3.extract<96, 127>());
  hw_uint<32> stencil_3_lane_4;
  set_at<0, 32, 32>(stencil_3_lane_4, stencil_3.extract<128, 159>());
  hw_uint<32> stencil_3_lane_5;
  set_at<0, 32, 32>(stencil_3_lane_5, stencil_3.extract<160, 191>());
  hw_uint<32> stencil_3_lane_6;
  set_at<0, 32, 32>(stencil_3_lane_6, stencil_3.extract<192, 223>());
  hw_uint<32> stencil_3_lane_7;
  set_at<0, 32, 32>(stencil_3_lane_7, stencil_3.extract<224, 255>());
  hw_uint<32> stencil_3_lane_8;
  set_at<0, 32, 32>(stencil_3_lane_8, stencil_3.extract<256, 287>());

	
auto res_init32 = set_zero_32();

	  hw_uint<32 > stencil_3_lane_0_pack;
  set_at<0, 32, 32>(stencil_3_lane_0_pack, stencil_3_lane_0);
  hw_uint<32 > res_init32_pack;
  set_at<0, 32, 32>(res_init32_pack, res_init32);
auto res_update33_stencil_431__m_1632_stencil_430_1996 = add(stencil_3_lane_0_pack, res_init32_pack);

	  hw_uint<32 > stencil_3_lane_1_pack;
  set_at<0, 32, 32>(stencil_3_lane_1_pack, stencil_3_lane_1);
  hw_uint<32 > res_update33_stencil_431__m_1632_stencil_430_1996_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_1632_stencil_430_1996_pack, res_update33_stencil_431__m_1632_stencil_430_1996);
auto res_update33_stencil_431_0634_stencil_430_1994 = add(stencil_3_lane_1_pack, res_update33_stencil_431__m_1632_stencil_430_1996_pack);

	  hw_uint<32 > stencil_3_lane_2_pack;
  set_at<0, 32, 32>(stencil_3_lane_2_pack, stencil_3_lane_2);
  hw_uint<32 > res_update33_stencil_431_0634_stencil_430_1994_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_0634_stencil_430_1994_pack, res_update33_stencil_431_0634_stencil_430_1994);
auto res_update33_stencil_431_1636_stencil_430_1992 = add(stencil_3_lane_2_pack, res_update33_stencil_431_0634_stencil_430_1994_pack);

	  hw_uint<32 > stencil_3_lane_3_pack;
  set_at<0, 32, 32>(stencil_3_lane_3_pack, stencil_3_lane_3);
  hw_uint<32 > res_update33_stencil_431_1636_stencil_430_1992_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_1636_stencil_430_1992_pack, res_update33_stencil_431_1636_stencil_430_1992);
auto res_update33_stencil_431__m_1632_stencil_430_0990 = add(stencil_3_lane_3_pack, res_update33_stencil_431_1636_stencil_430_1992_pack);

	  hw_uint<32 > stencil_3_lane_4_pack;
  set_at<0, 32, 32>(stencil_3_lane_4_pack, stencil_3_lane_4);
  hw_uint<32 > res_update33_stencil_431__m_1632_stencil_430_0990_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_1632_stencil_430_0990_pack, res_update33_stencil_431__m_1632_stencil_430_0990);
auto res_update33_stencil_431_0634_stencil_430_0988 = add(stencil_3_lane_4_pack, res_update33_stencil_431__m_1632_stencil_430_0990_pack);

	  hw_uint<32 > stencil_3_lane_5_pack;
  set_at<0, 32, 32>(stencil_3_lane_5_pack, stencil_3_lane_5);
  hw_uint<32 > res_update33_stencil_431_0634_stencil_430_0988_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_0634_stencil_430_0988_pack, res_update33_stencil_431_0634_stencil_430_0988);
auto res_update33_stencil_431_1636_stencil_430_0986 = add(stencil_3_lane_5_pack, res_update33_stencil_431_0634_stencil_430_0988_pack);

	  hw_uint<32 > stencil_3_lane_6_pack;
  set_at<0, 32, 32>(stencil_3_lane_6_pack, stencil_3_lane_6);
  hw_uint<32 > res_update33_stencil_431_1636_stencil_430_0986_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_1636_stencil_430_0986_pack, res_update33_stencil_431_1636_stencil_430_0986);
auto res_update33_stencil_431__m_1632_stencil_430__m_1984 = add(stencil_3_lane_6_pack, res_update33_stencil_431_1636_stencil_430_0986_pack);

	  hw_uint<32 > stencil_3_lane_7_pack;
  set_at<0, 32, 32>(stencil_3_lane_7_pack, stencil_3_lane_7);
  hw_uint<32 > res_update33_stencil_431__m_1632_stencil_430__m_1984_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_1632_stencil_430__m_1984_pack, res_update33_stencil_431__m_1632_stencil_430__m_1984);
auto res_update33_stencil_431_0634_stencil_430__m_1982 = add(stencil_3_lane_7_pack, res_update33_stencil_431__m_1632_stencil_430__m_1984_pack);

	  hw_uint<32 > stencil_3_lane_8_pack;
  set_at<0, 32, 32>(stencil_3_lane_8_pack, stencil_3_lane_8);
  hw_uint<32 > res_update33_stencil_431_0634_stencil_430__m_1982_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_0634_stencil_430__m_1982_pack, res_update33_stencil_431_0634_stencil_430__m_1982);
auto res_update33_stencil_431_1636_stencil_430__m_1980 = add(stencil_3_lane_8_pack, res_update33_stencil_431_0634_stencil_430__m_1982_pack);
  hw_uint<32 > return_value1821;
  set_at<0, 32, 32>(return_value1821, res_update33_stencil_431_1636_stencil_430__m_1980);
  return return_value1821;

}

hw_uint<32> stencil_535_cu1823(hw_uint<32*9>& stencil_4) {
  hw_uint<32> stencil_4_lane_0;
  set_at<0, 32, 32>(stencil_4_lane_0, stencil_4.extract<0, 31>());
  hw_uint<32> stencil_4_lane_1;
  set_at<0, 32, 32>(stencil_4_lane_1, stencil_4.extract<32, 63>());
  hw_uint<32> stencil_4_lane_2;
  set_at<0, 32, 32>(stencil_4_lane_2, stencil_4.extract<64, 95>());
  hw_uint<32> stencil_4_lane_3;
  set_at<0, 32, 32>(stencil_4_lane_3, stencil_4.extract<96, 127>());
  hw_uint<32> stencil_4_lane_4;
  set_at<0, 32, 32>(stencil_4_lane_4, stencil_4.extract<128, 159>());
  hw_uint<32> stencil_4_lane_5;
  set_at<0, 32, 32>(stencil_4_lane_5, stencil_4.extract<160, 191>());
  hw_uint<32> stencil_4_lane_6;
  set_at<0, 32, 32>(stencil_4_lane_6, stencil_4.extract<192, 223>());
  hw_uint<32> stencil_4_lane_7;
  set_at<0, 32, 32>(stencil_4_lane_7, stencil_4.extract<224, 255>());
  hw_uint<32> stencil_4_lane_8;
  set_at<0, 32, 32>(stencil_4_lane_8, stencil_4.extract<256, 287>());

	
auto res_init38 = set_zero_32();

	  hw_uint<32 > stencil_4_lane_0_pack;
  set_at<0, 32, 32>(stencil_4_lane_0_pack, stencil_4_lane_0);
  hw_uint<32 > res_init38_pack;
  set_at<0, 32, 32>(res_init38_pack, res_init38);
auto res_update39_stencil_537__m_1488_stencil_536_11428 = add(stencil_4_lane_0_pack, res_init38_pack);

	  hw_uint<32 > stencil_4_lane_1_pack;
  set_at<0, 32, 32>(stencil_4_lane_1_pack, stencil_4_lane_1);
  hw_uint<32 > res_update39_stencil_537__m_1488_stencil_536_11428_pack;
  set_at<0, 32, 32>(res_update39_stencil_537__m_1488_stencil_536_11428_pack, res_update39_stencil_537__m_1488_stencil_536_11428);
auto res_update39_stencil_537_0490_stencil_536_11426 = add(stencil_4_lane_1_pack, res_update39_stencil_537__m_1488_stencil_536_11428_pack);

	  hw_uint<32 > stencil_4_lane_2_pack;
  set_at<0, 32, 32>(stencil_4_lane_2_pack, stencil_4_lane_2);
  hw_uint<32 > res_update39_stencil_537_0490_stencil_536_11426_pack;
  set_at<0, 32, 32>(res_update39_stencil_537_0490_stencil_536_11426_pack, res_update39_stencil_537_0490_stencil_536_11426);
auto res_update39_stencil_537_1492_stencil_536_11424 = add(stencil_4_lane_2_pack, res_update39_stencil_537_0490_stencil_536_11426_pack);

	  hw_uint<32 > stencil_4_lane_3_pack;
  set_at<0, 32, 32>(stencil_4_lane_3_pack, stencil_4_lane_3);
  hw_uint<32 > res_update39_stencil_537_1492_stencil_536_11424_pack;
  set_at<0, 32, 32>(res_update39_stencil_537_1492_stencil_536_11424_pack, res_update39_stencil_537_1492_stencil_536_11424);
auto res_update39_stencil_537__m_1488_stencil_536_01422 = add(stencil_4_lane_3_pack, res_update39_stencil_537_1492_stencil_536_11424_pack);

	  hw_uint<32 > stencil_4_lane_4_pack;
  set_at<0, 32, 32>(stencil_4_lane_4_pack, stencil_4_lane_4);
  hw_uint<32 > res_update39_stencil_537__m_1488_stencil_536_01422_pack;
  set_at<0, 32, 32>(res_update39_stencil_537__m_1488_stencil_536_01422_pack, res_update39_stencil_537__m_1488_stencil_536_01422);
auto res_update39_stencil_537_0490_stencil_536_01420 = add(stencil_4_lane_4_pack, res_update39_stencil_537__m_1488_stencil_536_01422_pack);

	  hw_uint<32 > stencil_4_lane_5_pack;
  set_at<0, 32, 32>(stencil_4_lane_5_pack, stencil_4_lane_5);
  hw_uint<32 > res_update39_stencil_537_0490_stencil_536_01420_pack;
  set_at<0, 32, 32>(res_update39_stencil_537_0490_stencil_536_01420_pack, res_update39_stencil_537_0490_stencil_536_01420);
auto res_update39_stencil_537_1492_stencil_536_01418 = add(stencil_4_lane_5_pack, res_update39_stencil_537_0490_stencil_536_01420_pack);

	  hw_uint<32 > stencil_4_lane_6_pack;
  set_at<0, 32, 32>(stencil_4_lane_6_pack, stencil_4_lane_6);
  hw_uint<32 > res_update39_stencil_537_1492_stencil_536_01418_pack;
  set_at<0, 32, 32>(res_update39_stencil_537_1492_stencil_536_01418_pack, res_update39_stencil_537_1492_stencil_536_01418);
auto res_update39_stencil_537__m_1488_stencil_536__m_11416 = add(stencil_4_lane_6_pack, res_update39_stencil_537_1492_stencil_536_01418_pack);

	  hw_uint<32 > stencil_4_lane_7_pack;
  set_at<0, 32, 32>(stencil_4_lane_7_pack, stencil_4_lane_7);
  hw_uint<32 > res_update39_stencil_537__m_1488_stencil_536__m_11416_pack;
  set_at<0, 32, 32>(res_update39_stencil_537__m_1488_stencil_536__m_11416_pack, res_update39_stencil_537__m_1488_stencil_536__m_11416);
auto res_update39_stencil_537_0490_stencil_536__m_11414 = add(stencil_4_lane_7_pack, res_update39_stencil_537__m_1488_stencil_536__m_11416_pack);

	  hw_uint<32 > stencil_4_lane_8_pack;
  set_at<0, 32, 32>(stencil_4_lane_8_pack, stencil_4_lane_8);
  hw_uint<32 > res_update39_stencil_537_0490_stencil_536__m_11414_pack;
  set_at<0, 32, 32>(res_update39_stencil_537_0490_stencil_536__m_11414_pack, res_update39_stencil_537_0490_stencil_536__m_11414);
auto res_update39_stencil_537_1492_stencil_536__m_11412 = add(stencil_4_lane_8_pack, res_update39_stencil_537_0490_stencil_536__m_11414_pack);
  hw_uint<32 > return_value1824;
  set_at<0, 32, 32>(return_value1824, res_update39_stencil_537_1492_stencil_536__m_11412);
  return return_value1824;

}

hw_uint<32> stencil_641_cu1826(hw_uint<32*9>& stencil_5) {
  hw_uint<32> stencil_5_lane_0;
  set_at<0, 32, 32>(stencil_5_lane_0, stencil_5.extract<0, 31>());
  hw_uint<32> stencil_5_lane_1;
  set_at<0, 32, 32>(stencil_5_lane_1, stencil_5.extract<32, 63>());
  hw_uint<32> stencil_5_lane_2;
  set_at<0, 32, 32>(stencil_5_lane_2, stencil_5.extract<64, 95>());
  hw_uint<32> stencil_5_lane_3;
  set_at<0, 32, 32>(stencil_5_lane_3, stencil_5.extract<96, 127>());
  hw_uint<32> stencil_5_lane_4;
  set_at<0, 32, 32>(stencil_5_lane_4, stencil_5.extract<128, 159>());
  hw_uint<32> stencil_5_lane_5;
  set_at<0, 32, 32>(stencil_5_lane_5, stencil_5.extract<160, 191>());
  hw_uint<32> stencil_5_lane_6;
  set_at<0, 32, 32>(stencil_5_lane_6, stencil_5.extract<192, 223>());
  hw_uint<32> stencil_5_lane_7;
  set_at<0, 32, 32>(stencil_5_lane_7, stencil_5.extract<224, 255>());
  hw_uint<32> stencil_5_lane_8;
  set_at<0, 32, 32>(stencil_5_lane_8, stencil_5.extract<256, 287>());

	
auto res_init44 = set_zero_32();

	  hw_uint<32 > stencil_5_lane_0_pack;
  set_at<0, 32, 32>(stencil_5_lane_0_pack, stencil_5_lane_0);
  hw_uint<32 > res_init44_pack;
  set_at<0, 32, 32>(res_init44_pack, res_init44);
auto res_update45_stencil_643__m_1404_stencil_642_11680 = add(stencil_5_lane_0_pack, res_init44_pack);

	  hw_uint<32 > stencil_5_lane_1_pack;
  set_at<0, 32, 32>(stencil_5_lane_1_pack, stencil_5_lane_1);
  hw_uint<32 > res_update45_stencil_643__m_1404_stencil_642_11680_pack;
  set_at<0, 32, 32>(res_update45_stencil_643__m_1404_stencil_642_11680_pack, res_update45_stencil_643__m_1404_stencil_642_11680);
auto res_update45_stencil_643_0406_stencil_642_11678 = add(stencil_5_lane_1_pack, res_update45_stencil_643__m_1404_stencil_642_11680_pack);

	  hw_uint<32 > stencil_5_lane_2_pack;
  set_at<0, 32, 32>(stencil_5_lane_2_pack, stencil_5_lane_2);
  hw_uint<32 > res_update45_stencil_643_0406_stencil_642_11678_pack;
  set_at<0, 32, 32>(res_update45_stencil_643_0406_stencil_642_11678_pack, res_update45_stencil_643_0406_stencil_642_11678);
auto res_update45_stencil_643_1408_stencil_642_11676 = add(stencil_5_lane_2_pack, res_update45_stencil_643_0406_stencil_642_11678_pack);

	  hw_uint<32 > stencil_5_lane_3_pack;
  set_at<0, 32, 32>(stencil_5_lane_3_pack, stencil_5_lane_3);
  hw_uint<32 > res_update45_stencil_643_1408_stencil_642_11676_pack;
  set_at<0, 32, 32>(res_update45_stencil_643_1408_stencil_642_11676_pack, res_update45_stencil_643_1408_stencil_642_11676);
auto res_update45_stencil_643__m_1404_stencil_642_01674 = add(stencil_5_lane_3_pack, res_update45_stencil_643_1408_stencil_642_11676_pack);

	  hw_uint<32 > stencil_5_lane_4_pack;
  set_at<0, 32, 32>(stencil_5_lane_4_pack, stencil_5_lane_4);
  hw_uint<32 > res_update45_stencil_643__m_1404_stencil_642_01674_pack;
  set_at<0, 32, 32>(res_update45_stencil_643__m_1404_stencil_642_01674_pack, res_update45_stencil_643__m_1404_stencil_642_01674);
auto res_update45_stencil_643_0406_stencil_642_01672 = add(stencil_5_lane_4_pack, res_update45_stencil_643__m_1404_stencil_642_01674_pack);

	  hw_uint<32 > stencil_5_lane_5_pack;
  set_at<0, 32, 32>(stencil_5_lane_5_pack, stencil_5_lane_5);
  hw_uint<32 > res_update45_stencil_643_0406_stencil_642_01672_pack;
  set_at<0, 32, 32>(res_update45_stencil_643_0406_stencil_642_01672_pack, res_update45_stencil_643_0406_stencil_642_01672);
auto res_update45_stencil_643_1408_stencil_642_01670 = add(stencil_5_lane_5_pack, res_update45_stencil_643_0406_stencil_642_01672_pack);

	  hw_uint<32 > stencil_5_lane_6_pack;
  set_at<0, 32, 32>(stencil_5_lane_6_pack, stencil_5_lane_6);
  hw_uint<32 > res_update45_stencil_643_1408_stencil_642_01670_pack;
  set_at<0, 32, 32>(res_update45_stencil_643_1408_stencil_642_01670_pack, res_update45_stencil_643_1408_stencil_642_01670);
auto res_update45_stencil_643__m_1404_stencil_642__m_11668 = add(stencil_5_lane_6_pack, res_update45_stencil_643_1408_stencil_642_01670_pack);

	  hw_uint<32 > stencil_5_lane_7_pack;
  set_at<0, 32, 32>(stencil_5_lane_7_pack, stencil_5_lane_7);
  hw_uint<32 > res_update45_stencil_643__m_1404_stencil_642__m_11668_pack;
  set_at<0, 32, 32>(res_update45_stencil_643__m_1404_stencil_642__m_11668_pack, res_update45_stencil_643__m_1404_stencil_642__m_11668);
auto res_update45_stencil_643_0406_stencil_642__m_11666 = add(stencil_5_lane_7_pack, res_update45_stencil_643__m_1404_stencil_642__m_11668_pack);

	  hw_uint<32 > stencil_5_lane_8_pack;
  set_at<0, 32, 32>(stencil_5_lane_8_pack, stencil_5_lane_8);
  hw_uint<32 > res_update45_stencil_643_0406_stencil_642__m_11666_pack;
  set_at<0, 32, 32>(res_update45_stencil_643_0406_stencil_642__m_11666_pack, res_update45_stencil_643_0406_stencil_642__m_11666);
auto res_update45_stencil_643_1408_stencil_642__m_11664 = add(stencil_5_lane_8_pack, res_update45_stencil_643_0406_stencil_642__m_11666_pack);
  hw_uint<32 > return_value1827;
  set_at<0, 32, 32>(return_value1827, res_update45_stencil_643_1408_stencil_642__m_11664);
  return return_value1827;

}

hw_uint<32> stencil_747_cu1829(hw_uint<32*9>& stencil_6) {
  hw_uint<32> stencil_6_lane_0;
  set_at<0, 32, 32>(stencil_6_lane_0, stencil_6.extract<0, 31>());
  hw_uint<32> stencil_6_lane_1;
  set_at<0, 32, 32>(stencil_6_lane_1, stencil_6.extract<32, 63>());
  hw_uint<32> stencil_6_lane_2;
  set_at<0, 32, 32>(stencil_6_lane_2, stencil_6.extract<64, 95>());
  hw_uint<32> stencil_6_lane_3;
  set_at<0, 32, 32>(stencil_6_lane_3, stencil_6.extract<96, 127>());
  hw_uint<32> stencil_6_lane_4;
  set_at<0, 32, 32>(stencil_6_lane_4, stencil_6.extract<128, 159>());
  hw_uint<32> stencil_6_lane_5;
  set_at<0, 32, 32>(stencil_6_lane_5, stencil_6.extract<160, 191>());
  hw_uint<32> stencil_6_lane_6;
  set_at<0, 32, 32>(stencil_6_lane_6, stencil_6.extract<192, 223>());
  hw_uint<32> stencil_6_lane_7;
  set_at<0, 32, 32>(stencil_6_lane_7, stencil_6.extract<224, 255>());
  hw_uint<32> stencil_6_lane_8;
  set_at<0, 32, 32>(stencil_6_lane_8, stencil_6.extract<256, 287>());

	
auto res_init50 = set_zero_32();

	  hw_uint<32 > stencil_6_lane_0_pack;
  set_at<0, 32, 32>(stencil_6_lane_0_pack, stencil_6_lane_0);
  hw_uint<32 > res_init50_pack;
  set_at<0, 32, 32>(res_init50_pack, res_init50);
auto res_update51_stencil_749__m_1392_stencil_748_11716 = add(stencil_6_lane_0_pack, res_init50_pack);

	  hw_uint<32 > stencil_6_lane_1_pack;
  set_at<0, 32, 32>(stencil_6_lane_1_pack, stencil_6_lane_1);
  hw_uint<32 > res_update51_stencil_749__m_1392_stencil_748_11716_pack;
  set_at<0, 32, 32>(res_update51_stencil_749__m_1392_stencil_748_11716_pack, res_update51_stencil_749__m_1392_stencil_748_11716);
auto res_update51_stencil_749_0394_stencil_748_11714 = add(stencil_6_lane_1_pack, res_update51_stencil_749__m_1392_stencil_748_11716_pack);

	  hw_uint<32 > stencil_6_lane_2_pack;
  set_at<0, 32, 32>(stencil_6_lane_2_pack, stencil_6_lane_2);
  hw_uint<32 > res_update51_stencil_749_0394_stencil_748_11714_pack;
  set_at<0, 32, 32>(res_update51_stencil_749_0394_stencil_748_11714_pack, res_update51_stencil_749_0394_stencil_748_11714);
auto res_update51_stencil_749_1396_stencil_748_11712 = add(stencil_6_lane_2_pack, res_update51_stencil_749_0394_stencil_748_11714_pack);

	  hw_uint<32 > stencil_6_lane_3_pack;
  set_at<0, 32, 32>(stencil_6_lane_3_pack, stencil_6_lane_3);
  hw_uint<32 > res_update51_stencil_749_1396_stencil_748_11712_pack;
  set_at<0, 32, 32>(res_update51_stencil_749_1396_stencil_748_11712_pack, res_update51_stencil_749_1396_stencil_748_11712);
auto res_update51_stencil_749__m_1392_stencil_748_01710 = add(stencil_6_lane_3_pack, res_update51_stencil_749_1396_stencil_748_11712_pack);

	  hw_uint<32 > stencil_6_lane_4_pack;
  set_at<0, 32, 32>(stencil_6_lane_4_pack, stencil_6_lane_4);
  hw_uint<32 > res_update51_stencil_749__m_1392_stencil_748_01710_pack;
  set_at<0, 32, 32>(res_update51_stencil_749__m_1392_stencil_748_01710_pack, res_update51_stencil_749__m_1392_stencil_748_01710);
auto res_update51_stencil_749_0394_stencil_748_01708 = add(stencil_6_lane_4_pack, res_update51_stencil_749__m_1392_stencil_748_01710_pack);

	  hw_uint<32 > stencil_6_lane_5_pack;
  set_at<0, 32, 32>(stencil_6_lane_5_pack, stencil_6_lane_5);
  hw_uint<32 > res_update51_stencil_749_0394_stencil_748_01708_pack;
  set_at<0, 32, 32>(res_update51_stencil_749_0394_stencil_748_01708_pack, res_update51_stencil_749_0394_stencil_748_01708);
auto res_update51_stencil_749_1396_stencil_748_01706 = add(stencil_6_lane_5_pack, res_update51_stencil_749_0394_stencil_748_01708_pack);

	  hw_uint<32 > stencil_6_lane_6_pack;
  set_at<0, 32, 32>(stencil_6_lane_6_pack, stencil_6_lane_6);
  hw_uint<32 > res_update51_stencil_749_1396_stencil_748_01706_pack;
  set_at<0, 32, 32>(res_update51_stencil_749_1396_stencil_748_01706_pack, res_update51_stencil_749_1396_stencil_748_01706);
auto res_update51_stencil_749__m_1392_stencil_748__m_11704 = add(stencil_6_lane_6_pack, res_update51_stencil_749_1396_stencil_748_01706_pack);

	  hw_uint<32 > stencil_6_lane_7_pack;
  set_at<0, 32, 32>(stencil_6_lane_7_pack, stencil_6_lane_7);
  hw_uint<32 > res_update51_stencil_749__m_1392_stencil_748__m_11704_pack;
  set_at<0, 32, 32>(res_update51_stencil_749__m_1392_stencil_748__m_11704_pack, res_update51_stencil_749__m_1392_stencil_748__m_11704);
auto res_update51_stencil_749_0394_stencil_748__m_11702 = add(stencil_6_lane_7_pack, res_update51_stencil_749__m_1392_stencil_748__m_11704_pack);

	  hw_uint<32 > stencil_6_lane_8_pack;
  set_at<0, 32, 32>(stencil_6_lane_8_pack, stencil_6_lane_8);
  hw_uint<32 > res_update51_stencil_749_0394_stencil_748__m_11702_pack;
  set_at<0, 32, 32>(res_update51_stencil_749_0394_stencil_748__m_11702_pack, res_update51_stencil_749_0394_stencil_748__m_11702);
auto res_update51_stencil_749_1396_stencil_748__m_11700 = add(stencil_6_lane_8_pack, res_update51_stencil_749_0394_stencil_748__m_11702_pack);
  hw_uint<32 > return_value1830;
  set_at<0, 32, 32>(return_value1830, res_update51_stencil_749_1396_stencil_748__m_11700);
  return return_value1830;

}

hw_uint<32> stencil_853_cu1832(hw_uint<32*9>& stencil_7) {
  hw_uint<32> stencil_7_lane_0;
  set_at<0, 32, 32>(stencil_7_lane_0, stencil_7.extract<0, 31>());
  hw_uint<32> stencil_7_lane_1;
  set_at<0, 32, 32>(stencil_7_lane_1, stencil_7.extract<32, 63>());
  hw_uint<32> stencil_7_lane_2;
  set_at<0, 32, 32>(stencil_7_lane_2, stencil_7.extract<64, 95>());
  hw_uint<32> stencil_7_lane_3;
  set_at<0, 32, 32>(stencil_7_lane_3, stencil_7.extract<96, 127>());
  hw_uint<32> stencil_7_lane_4;
  set_at<0, 32, 32>(stencil_7_lane_4, stencil_7.extract<128, 159>());
  hw_uint<32> stencil_7_lane_5;
  set_at<0, 32, 32>(stencil_7_lane_5, stencil_7.extract<160, 191>());
  hw_uint<32> stencil_7_lane_6;
  set_at<0, 32, 32>(stencil_7_lane_6, stencil_7.extract<192, 223>());
  hw_uint<32> stencil_7_lane_7;
  set_at<0, 32, 32>(stencil_7_lane_7, stencil_7.extract<224, 255>());
  hw_uint<32> stencil_7_lane_8;
  set_at<0, 32, 32>(stencil_7_lane_8, stencil_7.extract<256, 287>());

	
auto res_init56 = set_zero_32();

	  hw_uint<32 > stencil_7_lane_0_pack;
  set_at<0, 32, 32>(stencil_7_lane_0_pack, stencil_7_lane_0);
  hw_uint<32 > res_init56_pack;
  set_at<0, 32, 32>(res_init56_pack, res_init56);
auto res_update57_stencil_855__m_1380_stencil_854_11752 = add(stencil_7_lane_0_pack, res_init56_pack);

	  hw_uint<32 > stencil_7_lane_1_pack;
  set_at<0, 32, 32>(stencil_7_lane_1_pack, stencil_7_lane_1);
  hw_uint<32 > res_update57_stencil_855__m_1380_stencil_854_11752_pack;
  set_at<0, 32, 32>(res_update57_stencil_855__m_1380_stencil_854_11752_pack, res_update57_stencil_855__m_1380_stencil_854_11752);
auto res_update57_stencil_855_0382_stencil_854_11750 = add(stencil_7_lane_1_pack, res_update57_stencil_855__m_1380_stencil_854_11752_pack);

	  hw_uint<32 > stencil_7_lane_2_pack;
  set_at<0, 32, 32>(stencil_7_lane_2_pack, stencil_7_lane_2);
  hw_uint<32 > res_update57_stencil_855_0382_stencil_854_11750_pack;
  set_at<0, 32, 32>(res_update57_stencil_855_0382_stencil_854_11750_pack, res_update57_stencil_855_0382_stencil_854_11750);
auto res_update57_stencil_855_1384_stencil_854_11748 = add(stencil_7_lane_2_pack, res_update57_stencil_855_0382_stencil_854_11750_pack);

	  hw_uint<32 > stencil_7_lane_3_pack;
  set_at<0, 32, 32>(stencil_7_lane_3_pack, stencil_7_lane_3);
  hw_uint<32 > res_update57_stencil_855_1384_stencil_854_11748_pack;
  set_at<0, 32, 32>(res_update57_stencil_855_1384_stencil_854_11748_pack, res_update57_stencil_855_1384_stencil_854_11748);
auto res_update57_stencil_855__m_1380_stencil_854_01746 = add(stencil_7_lane_3_pack, res_update57_stencil_855_1384_stencil_854_11748_pack);

	  hw_uint<32 > stencil_7_lane_4_pack;
  set_at<0, 32, 32>(stencil_7_lane_4_pack, stencil_7_lane_4);
  hw_uint<32 > res_update57_stencil_855__m_1380_stencil_854_01746_pack;
  set_at<0, 32, 32>(res_update57_stencil_855__m_1380_stencil_854_01746_pack, res_update57_stencil_855__m_1380_stencil_854_01746);
auto res_update57_stencil_855_0382_stencil_854_01744 = add(stencil_7_lane_4_pack, res_update57_stencil_855__m_1380_stencil_854_01746_pack);

	  hw_uint<32 > stencil_7_lane_5_pack;
  set_at<0, 32, 32>(stencil_7_lane_5_pack, stencil_7_lane_5);
  hw_uint<32 > res_update57_stencil_855_0382_stencil_854_01744_pack;
  set_at<0, 32, 32>(res_update57_stencil_855_0382_stencil_854_01744_pack, res_update57_stencil_855_0382_stencil_854_01744);
auto res_update57_stencil_855_1384_stencil_854_01742 = add(stencil_7_lane_5_pack, res_update57_stencil_855_0382_stencil_854_01744_pack);

	  hw_uint<32 > stencil_7_lane_6_pack;
  set_at<0, 32, 32>(stencil_7_lane_6_pack, stencil_7_lane_6);
  hw_uint<32 > res_update57_stencil_855_1384_stencil_854_01742_pack;
  set_at<0, 32, 32>(res_update57_stencil_855_1384_stencil_854_01742_pack, res_update57_stencil_855_1384_stencil_854_01742);
auto res_update57_stencil_855__m_1380_stencil_854__m_11740 = add(stencil_7_lane_6_pack, res_update57_stencil_855_1384_stencil_854_01742_pack);

	  hw_uint<32 > stencil_7_lane_7_pack;
  set_at<0, 32, 32>(stencil_7_lane_7_pack, stencil_7_lane_7);
  hw_uint<32 > res_update57_stencil_855__m_1380_stencil_854__m_11740_pack;
  set_at<0, 32, 32>(res_update57_stencil_855__m_1380_stencil_854__m_11740_pack, res_update57_stencil_855__m_1380_stencil_854__m_11740);
auto res_update57_stencil_855_0382_stencil_854__m_11738 = add(stencil_7_lane_7_pack, res_update57_stencil_855__m_1380_stencil_854__m_11740_pack);

	  hw_uint<32 > stencil_7_lane_8_pack;
  set_at<0, 32, 32>(stencil_7_lane_8_pack, stencil_7_lane_8);
  hw_uint<32 > res_update57_stencil_855_0382_stencil_854__m_11738_pack;
  set_at<0, 32, 32>(res_update57_stencil_855_0382_stencil_854__m_11738_pack, res_update57_stencil_855_0382_stencil_854__m_11738);
auto res_update57_stencil_855_1384_stencil_854__m_11736 = add(stencil_7_lane_8_pack, res_update57_stencil_855_0382_stencil_854__m_11738_pack);
  hw_uint<32 > return_value1833;
  set_at<0, 32, 32>(return_value1833, res_update57_stencil_855_1384_stencil_854__m_11736);
  return return_value1833;

}

hw_uint<32> stencil_959_cu1835(hw_uint<32*9>& stencil_8) {
  hw_uint<32> stencil_8_lane_0;
  set_at<0, 32, 32>(stencil_8_lane_0, stencil_8.extract<0, 31>());
  hw_uint<32> stencil_8_lane_1;
  set_at<0, 32, 32>(stencil_8_lane_1, stencil_8.extract<32, 63>());
  hw_uint<32> stencil_8_lane_2;
  set_at<0, 32, 32>(stencil_8_lane_2, stencil_8.extract<64, 95>());
  hw_uint<32> stencil_8_lane_3;
  set_at<0, 32, 32>(stencil_8_lane_3, stencil_8.extract<96, 127>());
  hw_uint<32> stencil_8_lane_4;
  set_at<0, 32, 32>(stencil_8_lane_4, stencil_8.extract<128, 159>());
  hw_uint<32> stencil_8_lane_5;
  set_at<0, 32, 32>(stencil_8_lane_5, stencil_8.extract<160, 191>());
  hw_uint<32> stencil_8_lane_6;
  set_at<0, 32, 32>(stencil_8_lane_6, stencil_8.extract<192, 223>());
  hw_uint<32> stencil_8_lane_7;
  set_at<0, 32, 32>(stencil_8_lane_7, stencil_8.extract<224, 255>());
  hw_uint<32> stencil_8_lane_8;
  set_at<0, 32, 32>(stencil_8_lane_8, stencil_8.extract<256, 287>());

	
auto res_init62 = set_zero_32();

	  hw_uint<32 > stencil_8_lane_0_pack;
  set_at<0, 32, 32>(stencil_8_lane_0_pack, stencil_8_lane_0);
  hw_uint<32 > res_init62_pack;
  set_at<0, 32, 32>(res_init62_pack, res_init62);
auto res_update63_stencil_961__m_1368_stencil_960_11788 = add(stencil_8_lane_0_pack, res_init62_pack);

	  hw_uint<32 > stencil_8_lane_1_pack;
  set_at<0, 32, 32>(stencil_8_lane_1_pack, stencil_8_lane_1);
  hw_uint<32 > res_update63_stencil_961__m_1368_stencil_960_11788_pack;
  set_at<0, 32, 32>(res_update63_stencil_961__m_1368_stencil_960_11788_pack, res_update63_stencil_961__m_1368_stencil_960_11788);
auto res_update63_stencil_961_0370_stencil_960_11786 = add(stencil_8_lane_1_pack, res_update63_stencil_961__m_1368_stencil_960_11788_pack);

	  hw_uint<32 > stencil_8_lane_2_pack;
  set_at<0, 32, 32>(stencil_8_lane_2_pack, stencil_8_lane_2);
  hw_uint<32 > res_update63_stencil_961_0370_stencil_960_11786_pack;
  set_at<0, 32, 32>(res_update63_stencil_961_0370_stencil_960_11786_pack, res_update63_stencil_961_0370_stencil_960_11786);
auto res_update63_stencil_961_1372_stencil_960_11784 = add(stencil_8_lane_2_pack, res_update63_stencil_961_0370_stencil_960_11786_pack);

	  hw_uint<32 > stencil_8_lane_3_pack;
  set_at<0, 32, 32>(stencil_8_lane_3_pack, stencil_8_lane_3);
  hw_uint<32 > res_update63_stencil_961_1372_stencil_960_11784_pack;
  set_at<0, 32, 32>(res_update63_stencil_961_1372_stencil_960_11784_pack, res_update63_stencil_961_1372_stencil_960_11784);
auto res_update63_stencil_961__m_1368_stencil_960_01782 = add(stencil_8_lane_3_pack, res_update63_stencil_961_1372_stencil_960_11784_pack);

	  hw_uint<32 > stencil_8_lane_4_pack;
  set_at<0, 32, 32>(stencil_8_lane_4_pack, stencil_8_lane_4);
  hw_uint<32 > res_update63_stencil_961__m_1368_stencil_960_01782_pack;
  set_at<0, 32, 32>(res_update63_stencil_961__m_1368_stencil_960_01782_pack, res_update63_stencil_961__m_1368_stencil_960_01782);
auto res_update63_stencil_961_0370_stencil_960_01780 = add(stencil_8_lane_4_pack, res_update63_stencil_961__m_1368_stencil_960_01782_pack);

	  hw_uint<32 > stencil_8_lane_5_pack;
  set_at<0, 32, 32>(stencil_8_lane_5_pack, stencil_8_lane_5);
  hw_uint<32 > res_update63_stencil_961_0370_stencil_960_01780_pack;
  set_at<0, 32, 32>(res_update63_stencil_961_0370_stencil_960_01780_pack, res_update63_stencil_961_0370_stencil_960_01780);
auto res_update63_stencil_961_1372_stencil_960_01778 = add(stencil_8_lane_5_pack, res_update63_stencil_961_0370_stencil_960_01780_pack);

	  hw_uint<32 > stencil_8_lane_6_pack;
  set_at<0, 32, 32>(stencil_8_lane_6_pack, stencil_8_lane_6);
  hw_uint<32 > res_update63_stencil_961_1372_stencil_960_01778_pack;
  set_at<0, 32, 32>(res_update63_stencil_961_1372_stencil_960_01778_pack, res_update63_stencil_961_1372_stencil_960_01778);
auto res_update63_stencil_961__m_1368_stencil_960__m_11776 = add(stencil_8_lane_6_pack, res_update63_stencil_961_1372_stencil_960_01778_pack);

	  hw_uint<32 > stencil_8_lane_7_pack;
  set_at<0, 32, 32>(stencil_8_lane_7_pack, stencil_8_lane_7);
  hw_uint<32 > res_update63_stencil_961__m_1368_stencil_960__m_11776_pack;
  set_at<0, 32, 32>(res_update63_stencil_961__m_1368_stencil_960__m_11776_pack, res_update63_stencil_961__m_1368_stencil_960__m_11776);
auto res_update63_stencil_961_0370_stencil_960__m_11774 = add(stencil_8_lane_7_pack, res_update63_stencil_961__m_1368_stencil_960__m_11776_pack);

	  hw_uint<32 > stencil_8_lane_8_pack;
  set_at<0, 32, 32>(stencil_8_lane_8_pack, stencil_8_lane_8);
  hw_uint<32 > res_update63_stencil_961_0370_stencil_960__m_11774_pack;
  set_at<0, 32, 32>(res_update63_stencil_961_0370_stencil_960__m_11774_pack, res_update63_stencil_961_0370_stencil_960__m_11774);
auto res_update63_stencil_961_1372_stencil_960__m_11772 = add(stencil_8_lane_8_pack, res_update63_stencil_961_0370_stencil_960__m_11774_pack);
  hw_uint<32 > return_value1836;
  set_at<0, 32, 32>(return_value1836, res_update63_stencil_961_1372_stencil_960__m_11772);
  return return_value1836;

}

hw_uint<32> stencil_1065_cu1838(hw_uint<32*9>& stencil_9) {
  hw_uint<32> stencil_9_lane_0;
  set_at<0, 32, 32>(stencil_9_lane_0, stencil_9.extract<0, 31>());
  hw_uint<32> stencil_9_lane_1;
  set_at<0, 32, 32>(stencil_9_lane_1, stencil_9.extract<32, 63>());
  hw_uint<32> stencil_9_lane_2;
  set_at<0, 32, 32>(stencil_9_lane_2, stencil_9.extract<64, 95>());
  hw_uint<32> stencil_9_lane_3;
  set_at<0, 32, 32>(stencil_9_lane_3, stencil_9.extract<96, 127>());
  hw_uint<32> stencil_9_lane_4;
  set_at<0, 32, 32>(stencil_9_lane_4, stencil_9.extract<128, 159>());
  hw_uint<32> stencil_9_lane_5;
  set_at<0, 32, 32>(stencil_9_lane_5, stencil_9.extract<160, 191>());
  hw_uint<32> stencil_9_lane_6;
  set_at<0, 32, 32>(stencil_9_lane_6, stencil_9.extract<192, 223>());
  hw_uint<32> stencil_9_lane_7;
  set_at<0, 32, 32>(stencil_9_lane_7, stencil_9.extract<224, 255>());
  hw_uint<32> stencil_9_lane_8;
  set_at<0, 32, 32>(stencil_9_lane_8, stencil_9.extract<256, 287>());

	
auto res_init68 = set_zero_32();

	  hw_uint<32 > res_init68_pack;
  set_at<0, 32, 32>(res_init68_pack, res_init68);
  hw_uint<32 > stencil_9_lane_0_pack;
  set_at<0, 32, 32>(stencil_9_lane_0_pack, stencil_9_lane_0);
auto res_update69_stencil_1067__m_1386_stencil_1066_11770 = add(res_init68_pack, stencil_9_lane_0_pack);

	  hw_uint<32 > res_update69_stencil_1067__m_1386_stencil_1066_11770_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067__m_1386_stencil_1066_11770_pack, res_update69_stencil_1067__m_1386_stencil_1066_11770);
  hw_uint<32 > stencil_9_lane_1_pack;
  set_at<0, 32, 32>(stencil_9_lane_1_pack, stencil_9_lane_1);
auto res_update69_stencil_1067_0388_stencil_1066_11768 = add(res_update69_stencil_1067__m_1386_stencil_1066_11770_pack, stencil_9_lane_1_pack);

	  hw_uint<32 > res_update69_stencil_1067_0388_stencil_1066_11768_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067_0388_stencil_1066_11768_pack, res_update69_stencil_1067_0388_stencil_1066_11768);
  hw_uint<32 > stencil_9_lane_2_pack;
  set_at<0, 32, 32>(stencil_9_lane_2_pack, stencil_9_lane_2);
auto res_update69_stencil_1067_1390_stencil_1066_11766 = add(res_update69_stencil_1067_0388_stencil_1066_11768_pack, stencil_9_lane_2_pack);

	  hw_uint<32 > res_update69_stencil_1067_1390_stencil_1066_11766_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067_1390_stencil_1066_11766_pack, res_update69_stencil_1067_1390_stencil_1066_11766);
  hw_uint<32 > stencil_9_lane_3_pack;
  set_at<0, 32, 32>(stencil_9_lane_3_pack, stencil_9_lane_3);
auto res_update69_stencil_1067__m_1386_stencil_1066_01764 = add(res_update69_stencil_1067_1390_stencil_1066_11766_pack, stencil_9_lane_3_pack);

	  hw_uint<32 > res_update69_stencil_1067__m_1386_stencil_1066_01764_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067__m_1386_stencil_1066_01764_pack, res_update69_stencil_1067__m_1386_stencil_1066_01764);
  hw_uint<32 > stencil_9_lane_4_pack;
  set_at<0, 32, 32>(stencil_9_lane_4_pack, stencil_9_lane_4);
auto res_update69_stencil_1067_0388_stencil_1066_01762 = add(res_update69_stencil_1067__m_1386_stencil_1066_01764_pack, stencil_9_lane_4_pack);

	  hw_uint<32 > res_update69_stencil_1067_0388_stencil_1066_01762_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067_0388_stencil_1066_01762_pack, res_update69_stencil_1067_0388_stencil_1066_01762);
  hw_uint<32 > stencil_9_lane_5_pack;
  set_at<0, 32, 32>(stencil_9_lane_5_pack, stencil_9_lane_5);
auto res_update69_stencil_1067_1390_stencil_1066_01760 = add(res_update69_stencil_1067_0388_stencil_1066_01762_pack, stencil_9_lane_5_pack);

	  hw_uint<32 > res_update69_stencil_1067_1390_stencil_1066_01760_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067_1390_stencil_1066_01760_pack, res_update69_stencil_1067_1390_stencil_1066_01760);
  hw_uint<32 > stencil_9_lane_6_pack;
  set_at<0, 32, 32>(stencil_9_lane_6_pack, stencil_9_lane_6);
auto res_update69_stencil_1067__m_1386_stencil_1066__m_11758 = add(res_update69_stencil_1067_1390_stencil_1066_01760_pack, stencil_9_lane_6_pack);

	  hw_uint<32 > res_update69_stencil_1067__m_1386_stencil_1066__m_11758_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067__m_1386_stencil_1066__m_11758_pack, res_update69_stencil_1067__m_1386_stencil_1066__m_11758);
  hw_uint<32 > stencil_9_lane_7_pack;
  set_at<0, 32, 32>(stencil_9_lane_7_pack, stencil_9_lane_7);
auto res_update69_stencil_1067_0388_stencil_1066__m_11756 = add(res_update69_stencil_1067__m_1386_stencil_1066__m_11758_pack, stencil_9_lane_7_pack);

	  hw_uint<32 > res_update69_stencil_1067_0388_stencil_1066__m_11756_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067_0388_stencil_1066__m_11756_pack, res_update69_stencil_1067_0388_stencil_1066__m_11756);
  hw_uint<32 > stencil_9_lane_8_pack;
  set_at<0, 32, 32>(stencil_9_lane_8_pack, stencil_9_lane_8);
auto res_update69_stencil_1067_1390_stencil_1066__m_11754 = add(res_update69_stencil_1067_0388_stencil_1066__m_11756_pack, stencil_9_lane_8_pack);
  hw_uint<32 > return_value1839;
  set_at<0, 32, 32>(return_value1839, res_update69_stencil_1067_1390_stencil_1066__m_11754);
  return return_value1839;

}

hw_uint<32> stencil_1171_cu1841(hw_uint<32*9>& stencil_10) {
  hw_uint<32> stencil_10_lane_0;
  set_at<0, 32, 32>(stencil_10_lane_0, stencil_10.extract<0, 31>());
  hw_uint<32> stencil_10_lane_1;
  set_at<0, 32, 32>(stencil_10_lane_1, stencil_10.extract<32, 63>());
  hw_uint<32> stencil_10_lane_2;
  set_at<0, 32, 32>(stencil_10_lane_2, stencil_10.extract<64, 95>());
  hw_uint<32> stencil_10_lane_3;
  set_at<0, 32, 32>(stencil_10_lane_3, stencil_10.extract<96, 127>());
  hw_uint<32> stencil_10_lane_4;
  set_at<0, 32, 32>(stencil_10_lane_4, stencil_10.extract<128, 159>());
  hw_uint<32> stencil_10_lane_5;
  set_at<0, 32, 32>(stencil_10_lane_5, stencil_10.extract<160, 191>());
  hw_uint<32> stencil_10_lane_6;
  set_at<0, 32, 32>(stencil_10_lane_6, stencil_10.extract<192, 223>());
  hw_uint<32> stencil_10_lane_7;
  set_at<0, 32, 32>(stencil_10_lane_7, stencil_10.extract<224, 255>());
  hw_uint<32> stencil_10_lane_8;
  set_at<0, 32, 32>(stencil_10_lane_8, stencil_10.extract<256, 287>());

	
auto res_init74 = set_zero_32();

	  hw_uint<32 > stencil_10_lane_0_pack;
  set_at<0, 32, 32>(stencil_10_lane_0_pack, stencil_10_lane_0);
  hw_uint<32 > res_init74_pack;
  set_at<0, 32, 32>(res_init74_pack, res_init74);
auto res_update75_stencil_1173__m_1410_stencil_1172_11698 = add(stencil_10_lane_0_pack, res_init74_pack);

	  hw_uint<32 > stencil_10_lane_1_pack;
  set_at<0, 32, 32>(stencil_10_lane_1_pack, stencil_10_lane_1);
  hw_uint<32 > res_update75_stencil_1173__m_1410_stencil_1172_11698_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173__m_1410_stencil_1172_11698_pack, res_update75_stencil_1173__m_1410_stencil_1172_11698);
auto res_update75_stencil_1173_0412_stencil_1172_11696 = add(stencil_10_lane_1_pack, res_update75_stencil_1173__m_1410_stencil_1172_11698_pack);

	  hw_uint<32 > stencil_10_lane_2_pack;
  set_at<0, 32, 32>(stencil_10_lane_2_pack, stencil_10_lane_2);
  hw_uint<32 > res_update75_stencil_1173_0412_stencil_1172_11696_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173_0412_stencil_1172_11696_pack, res_update75_stencil_1173_0412_stencil_1172_11696);
auto res_update75_stencil_1173_1414_stencil_1172_11694 = add(stencil_10_lane_2_pack, res_update75_stencil_1173_0412_stencil_1172_11696_pack);

	  hw_uint<32 > stencil_10_lane_3_pack;
  set_at<0, 32, 32>(stencil_10_lane_3_pack, stencil_10_lane_3);
  hw_uint<32 > res_update75_stencil_1173_1414_stencil_1172_11694_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173_1414_stencil_1172_11694_pack, res_update75_stencil_1173_1414_stencil_1172_11694);
auto res_update75_stencil_1173__m_1410_stencil_1172_01692 = add(stencil_10_lane_3_pack, res_update75_stencil_1173_1414_stencil_1172_11694_pack);

	  hw_uint<32 > stencil_10_lane_4_pack;
  set_at<0, 32, 32>(stencil_10_lane_4_pack, stencil_10_lane_4);
  hw_uint<32 > res_update75_stencil_1173__m_1410_stencil_1172_01692_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173__m_1410_stencil_1172_01692_pack, res_update75_stencil_1173__m_1410_stencil_1172_01692);
auto res_update75_stencil_1173_0412_stencil_1172_01690 = add(stencil_10_lane_4_pack, res_update75_stencil_1173__m_1410_stencil_1172_01692_pack);

	  hw_uint<32 > stencil_10_lane_5_pack;
  set_at<0, 32, 32>(stencil_10_lane_5_pack, stencil_10_lane_5);
  hw_uint<32 > res_update75_stencil_1173_0412_stencil_1172_01690_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173_0412_stencil_1172_01690_pack, res_update75_stencil_1173_0412_stencil_1172_01690);
auto res_update75_stencil_1173_1414_stencil_1172_01688 = add(stencil_10_lane_5_pack, res_update75_stencil_1173_0412_stencil_1172_01690_pack);

	  hw_uint<32 > stencil_10_lane_6_pack;
  set_at<0, 32, 32>(stencil_10_lane_6_pack, stencil_10_lane_6);
  hw_uint<32 > res_update75_stencil_1173_1414_stencil_1172_01688_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173_1414_stencil_1172_01688_pack, res_update75_stencil_1173_1414_stencil_1172_01688);
auto res_update75_stencil_1173__m_1410_stencil_1172__m_11686 = add(stencil_10_lane_6_pack, res_update75_stencil_1173_1414_stencil_1172_01688_pack);

	  hw_uint<32 > stencil_10_lane_7_pack;
  set_at<0, 32, 32>(stencil_10_lane_7_pack, stencil_10_lane_7);
  hw_uint<32 > res_update75_stencil_1173__m_1410_stencil_1172__m_11686_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173__m_1410_stencil_1172__m_11686_pack, res_update75_stencil_1173__m_1410_stencil_1172__m_11686);
auto res_update75_stencil_1173_0412_stencil_1172__m_11684 = add(stencil_10_lane_7_pack, res_update75_stencil_1173__m_1410_stencil_1172__m_11686_pack);

	  hw_uint<32 > stencil_10_lane_8_pack;
  set_at<0, 32, 32>(stencil_10_lane_8_pack, stencil_10_lane_8);
  hw_uint<32 > res_update75_stencil_1173_0412_stencil_1172__m_11684_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173_0412_stencil_1172__m_11684_pack, res_update75_stencil_1173_0412_stencil_1172__m_11684);
auto res_update75_stencil_1173_1414_stencil_1172__m_11682 = add(stencil_10_lane_8_pack, res_update75_stencil_1173_0412_stencil_1172__m_11684_pack);
  hw_uint<32 > return_value1842;
  set_at<0, 32, 32>(return_value1842, res_update75_stencil_1173_1414_stencil_1172__m_11682);
  return return_value1842;

}

hw_uint<32> stencil_1277_cu1844(hw_uint<32*9>& stencil_11) {
  hw_uint<32> stencil_11_lane_0;
  set_at<0, 32, 32>(stencil_11_lane_0, stencil_11.extract<0, 31>());
  hw_uint<32> stencil_11_lane_1;
  set_at<0, 32, 32>(stencil_11_lane_1, stencil_11.extract<32, 63>());
  hw_uint<32> stencil_11_lane_2;
  set_at<0, 32, 32>(stencil_11_lane_2, stencil_11.extract<64, 95>());
  hw_uint<32> stencil_11_lane_3;
  set_at<0, 32, 32>(stencil_11_lane_3, stencil_11.extract<96, 127>());
  hw_uint<32> stencil_11_lane_4;
  set_at<0, 32, 32>(stencil_11_lane_4, stencil_11.extract<128, 159>());
  hw_uint<32> stencil_11_lane_5;
  set_at<0, 32, 32>(stencil_11_lane_5, stencil_11.extract<160, 191>());
  hw_uint<32> stencil_11_lane_6;
  set_at<0, 32, 32>(stencil_11_lane_6, stencil_11.extract<192, 223>());
  hw_uint<32> stencil_11_lane_7;
  set_at<0, 32, 32>(stencil_11_lane_7, stencil_11.extract<224, 255>());
  hw_uint<32> stencil_11_lane_8;
  set_at<0, 32, 32>(stencil_11_lane_8, stencil_11.extract<256, 287>());

	
auto res_init80 = set_zero_32();

	  hw_uint<32 > stencil_11_lane_0_pack;
  set_at<0, 32, 32>(stencil_11_lane_0_pack, stencil_11_lane_0);
  hw_uint<32 > res_init80_pack;
  set_at<0, 32, 32>(res_init80_pack, res_init80);
auto res_update81_stencil_1279__m_1422_stencil_1278_11662 = add(stencil_11_lane_0_pack, res_init80_pack);

	  hw_uint<32 > stencil_11_lane_1_pack;
  set_at<0, 32, 32>(stencil_11_lane_1_pack, stencil_11_lane_1);
  hw_uint<32 > res_update81_stencil_1279__m_1422_stencil_1278_11662_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279__m_1422_stencil_1278_11662_pack, res_update81_stencil_1279__m_1422_stencil_1278_11662);
auto res_update81_stencil_1279_0424_stencil_1278_11660 = add(stencil_11_lane_1_pack, res_update81_stencil_1279__m_1422_stencil_1278_11662_pack);

	  hw_uint<32 > stencil_11_lane_2_pack;
  set_at<0, 32, 32>(stencil_11_lane_2_pack, stencil_11_lane_2);
  hw_uint<32 > res_update81_stencil_1279_0424_stencil_1278_11660_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279_0424_stencil_1278_11660_pack, res_update81_stencil_1279_0424_stencil_1278_11660);
auto res_update81_stencil_1279_1426_stencil_1278_11658 = add(stencil_11_lane_2_pack, res_update81_stencil_1279_0424_stencil_1278_11660_pack);

	  hw_uint<32 > stencil_11_lane_3_pack;
  set_at<0, 32, 32>(stencil_11_lane_3_pack, stencil_11_lane_3);
  hw_uint<32 > res_update81_stencil_1279_1426_stencil_1278_11658_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279_1426_stencil_1278_11658_pack, res_update81_stencil_1279_1426_stencil_1278_11658);
auto res_update81_stencil_1279__m_1422_stencil_1278_01656 = add(stencil_11_lane_3_pack, res_update81_stencil_1279_1426_stencil_1278_11658_pack);

	  hw_uint<32 > stencil_11_lane_4_pack;
  set_at<0, 32, 32>(stencil_11_lane_4_pack, stencil_11_lane_4);
  hw_uint<32 > res_update81_stencil_1279__m_1422_stencil_1278_01656_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279__m_1422_stencil_1278_01656_pack, res_update81_stencil_1279__m_1422_stencil_1278_01656);
auto res_update81_stencil_1279_0424_stencil_1278_01654 = add(stencil_11_lane_4_pack, res_update81_stencil_1279__m_1422_stencil_1278_01656_pack);

	  hw_uint<32 > stencil_11_lane_5_pack;
  set_at<0, 32, 32>(stencil_11_lane_5_pack, stencil_11_lane_5);
  hw_uint<32 > res_update81_stencil_1279_0424_stencil_1278_01654_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279_0424_stencil_1278_01654_pack, res_update81_stencil_1279_0424_stencil_1278_01654);
auto res_update81_stencil_1279_1426_stencil_1278_01652 = add(stencil_11_lane_5_pack, res_update81_stencil_1279_0424_stencil_1278_01654_pack);

	  hw_uint<32 > stencil_11_lane_6_pack;
  set_at<0, 32, 32>(stencil_11_lane_6_pack, stencil_11_lane_6);
  hw_uint<32 > res_update81_stencil_1279_1426_stencil_1278_01652_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279_1426_stencil_1278_01652_pack, res_update81_stencil_1279_1426_stencil_1278_01652);
auto res_update81_stencil_1279__m_1422_stencil_1278__m_11650 = add(stencil_11_lane_6_pack, res_update81_stencil_1279_1426_stencil_1278_01652_pack);

	  hw_uint<32 > stencil_11_lane_7_pack;
  set_at<0, 32, 32>(stencil_11_lane_7_pack, stencil_11_lane_7);
  hw_uint<32 > res_update81_stencil_1279__m_1422_stencil_1278__m_11650_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279__m_1422_stencil_1278__m_11650_pack, res_update81_stencil_1279__m_1422_stencil_1278__m_11650);
auto res_update81_stencil_1279_0424_stencil_1278__m_11648 = add(stencil_11_lane_7_pack, res_update81_stencil_1279__m_1422_stencil_1278__m_11650_pack);

	  hw_uint<32 > stencil_11_lane_8_pack;
  set_at<0, 32, 32>(stencil_11_lane_8_pack, stencil_11_lane_8);
  hw_uint<32 > res_update81_stencil_1279_0424_stencil_1278__m_11648_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279_0424_stencil_1278__m_11648_pack, res_update81_stencil_1279_0424_stencil_1278__m_11648);
auto res_update81_stencil_1279_1426_stencil_1278__m_11646 = add(stencil_11_lane_8_pack, res_update81_stencil_1279_0424_stencil_1278__m_11648_pack);
  hw_uint<32 > return_value1845;
  set_at<0, 32, 32>(return_value1845, res_update81_stencil_1279_1426_stencil_1278__m_11646);
  return return_value1845;

}

hw_uint<32> stencil_1383_cu1847(hw_uint<32*9>& stencil_12) {
  hw_uint<32> stencil_12_lane_0;
  set_at<0, 32, 32>(stencil_12_lane_0, stencil_12.extract<0, 31>());
  hw_uint<32> stencil_12_lane_1;
  set_at<0, 32, 32>(stencil_12_lane_1, stencil_12.extract<32, 63>());
  hw_uint<32> stencil_12_lane_2;
  set_at<0, 32, 32>(stencil_12_lane_2, stencil_12.extract<64, 95>());
  hw_uint<32> stencil_12_lane_3;
  set_at<0, 32, 32>(stencil_12_lane_3, stencil_12.extract<96, 127>());
  hw_uint<32> stencil_12_lane_4;
  set_at<0, 32, 32>(stencil_12_lane_4, stencil_12.extract<128, 159>());
  hw_uint<32> stencil_12_lane_5;
  set_at<0, 32, 32>(stencil_12_lane_5, stencil_12.extract<160, 191>());
  hw_uint<32> stencil_12_lane_6;
  set_at<0, 32, 32>(stencil_12_lane_6, stencil_12.extract<192, 223>());
  hw_uint<32> stencil_12_lane_7;
  set_at<0, 32, 32>(stencil_12_lane_7, stencil_12.extract<224, 255>());
  hw_uint<32> stencil_12_lane_8;
  set_at<0, 32, 32>(stencil_12_lane_8, stencil_12.extract<256, 287>());

	
auto res_init86 = set_zero_32();

	  hw_uint<32 > stencil_12_lane_0_pack;
  set_at<0, 32, 32>(stencil_12_lane_0_pack, stencil_12_lane_0);
  hw_uint<32 > res_init86_pack;
  set_at<0, 32, 32>(res_init86_pack, res_init86);
auto res_update87_stencil_1385__m_1434_stencil_1384_11626 = add(stencil_12_lane_0_pack, res_init86_pack);

	  hw_uint<32 > stencil_12_lane_1_pack;
  set_at<0, 32, 32>(stencil_12_lane_1_pack, stencil_12_lane_1);
  hw_uint<32 > res_update87_stencil_1385__m_1434_stencil_1384_11626_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385__m_1434_stencil_1384_11626_pack, res_update87_stencil_1385__m_1434_stencil_1384_11626);
auto res_update87_stencil_1385_0436_stencil_1384_11624 = add(stencil_12_lane_1_pack, res_update87_stencil_1385__m_1434_stencil_1384_11626_pack);

	  hw_uint<32 > stencil_12_lane_2_pack;
  set_at<0, 32, 32>(stencil_12_lane_2_pack, stencil_12_lane_2);
  hw_uint<32 > res_update87_stencil_1385_0436_stencil_1384_11624_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385_0436_stencil_1384_11624_pack, res_update87_stencil_1385_0436_stencil_1384_11624);
auto res_update87_stencil_1385_1438_stencil_1384_11622 = add(stencil_12_lane_2_pack, res_update87_stencil_1385_0436_stencil_1384_11624_pack);

	  hw_uint<32 > stencil_12_lane_3_pack;
  set_at<0, 32, 32>(stencil_12_lane_3_pack, stencil_12_lane_3);
  hw_uint<32 > res_update87_stencil_1385_1438_stencil_1384_11622_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385_1438_stencil_1384_11622_pack, res_update87_stencil_1385_1438_stencil_1384_11622);
auto res_update87_stencil_1385__m_1434_stencil_1384_01620 = add(stencil_12_lane_3_pack, res_update87_stencil_1385_1438_stencil_1384_11622_pack);

	  hw_uint<32 > stencil_12_lane_4_pack;
  set_at<0, 32, 32>(stencil_12_lane_4_pack, stencil_12_lane_4);
  hw_uint<32 > res_update87_stencil_1385__m_1434_stencil_1384_01620_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385__m_1434_stencil_1384_01620_pack, res_update87_stencil_1385__m_1434_stencil_1384_01620);
auto res_update87_stencil_1385_0436_stencil_1384_01618 = add(stencil_12_lane_4_pack, res_update87_stencil_1385__m_1434_stencil_1384_01620_pack);

	  hw_uint<32 > stencil_12_lane_5_pack;
  set_at<0, 32, 32>(stencil_12_lane_5_pack, stencil_12_lane_5);
  hw_uint<32 > res_update87_stencil_1385_0436_stencil_1384_01618_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385_0436_stencil_1384_01618_pack, res_update87_stencil_1385_0436_stencil_1384_01618);
auto res_update87_stencil_1385_1438_stencil_1384_01616 = add(stencil_12_lane_5_pack, res_update87_stencil_1385_0436_stencil_1384_01618_pack);

	  hw_uint<32 > stencil_12_lane_6_pack;
  set_at<0, 32, 32>(stencil_12_lane_6_pack, stencil_12_lane_6);
  hw_uint<32 > res_update87_stencil_1385_1438_stencil_1384_01616_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385_1438_stencil_1384_01616_pack, res_update87_stencil_1385_1438_stencil_1384_01616);
auto res_update87_stencil_1385__m_1434_stencil_1384__m_11614 = add(stencil_12_lane_6_pack, res_update87_stencil_1385_1438_stencil_1384_01616_pack);

	  hw_uint<32 > stencil_12_lane_7_pack;
  set_at<0, 32, 32>(stencil_12_lane_7_pack, stencil_12_lane_7);
  hw_uint<32 > res_update87_stencil_1385__m_1434_stencil_1384__m_11614_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385__m_1434_stencil_1384__m_11614_pack, res_update87_stencil_1385__m_1434_stencil_1384__m_11614);
auto res_update87_stencil_1385_0436_stencil_1384__m_11612 = add(stencil_12_lane_7_pack, res_update87_stencil_1385__m_1434_stencil_1384__m_11614_pack);

	  hw_uint<32 > stencil_12_lane_8_pack;
  set_at<0, 32, 32>(stencil_12_lane_8_pack, stencil_12_lane_8);
  hw_uint<32 > res_update87_stencil_1385_0436_stencil_1384__m_11612_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385_0436_stencil_1384__m_11612_pack, res_update87_stencil_1385_0436_stencil_1384__m_11612);
auto res_update87_stencil_1385_1438_stencil_1384__m_11610 = add(stencil_12_lane_8_pack, res_update87_stencil_1385_0436_stencil_1384__m_11612_pack);
  hw_uint<32 > return_value1848;
  set_at<0, 32, 32>(return_value1848, res_update87_stencil_1385_1438_stencil_1384__m_11610);
  return return_value1848;

}

hw_uint<32> stencil_1489_cu1850(hw_uint<32*9>& stencil_13) {
  hw_uint<32> stencil_13_lane_0;
  set_at<0, 32, 32>(stencil_13_lane_0, stencil_13.extract<0, 31>());
  hw_uint<32> stencil_13_lane_1;
  set_at<0, 32, 32>(stencil_13_lane_1, stencil_13.extract<32, 63>());
  hw_uint<32> stencil_13_lane_2;
  set_at<0, 32, 32>(stencil_13_lane_2, stencil_13.extract<64, 95>());
  hw_uint<32> stencil_13_lane_3;
  set_at<0, 32, 32>(stencil_13_lane_3, stencil_13.extract<96, 127>());
  hw_uint<32> stencil_13_lane_4;
  set_at<0, 32, 32>(stencil_13_lane_4, stencil_13.extract<128, 159>());
  hw_uint<32> stencil_13_lane_5;
  set_at<0, 32, 32>(stencil_13_lane_5, stencil_13.extract<160, 191>());
  hw_uint<32> stencil_13_lane_6;
  set_at<0, 32, 32>(stencil_13_lane_6, stencil_13.extract<192, 223>());
  hw_uint<32> stencil_13_lane_7;
  set_at<0, 32, 32>(stencil_13_lane_7, stencil_13.extract<224, 255>());
  hw_uint<32> stencil_13_lane_8;
  set_at<0, 32, 32>(stencil_13_lane_8, stencil_13.extract<256, 287>());

	
auto res_init92 = set_zero_32();

	  hw_uint<32 > stencil_13_lane_0_pack;
  set_at<0, 32, 32>(stencil_13_lane_0_pack, stencil_13_lane_0);
  hw_uint<32 > res_init92_pack;
  set_at<0, 32, 32>(res_init92_pack, res_init92);
auto res_update93_stencil_1491__m_1446_stencil_1490_11590 = add(stencil_13_lane_0_pack, res_init92_pack);

	  hw_uint<32 > stencil_13_lane_1_pack;
  set_at<0, 32, 32>(stencil_13_lane_1_pack, stencil_13_lane_1);
  hw_uint<32 > res_update93_stencil_1491__m_1446_stencil_1490_11590_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491__m_1446_stencil_1490_11590_pack, res_update93_stencil_1491__m_1446_stencil_1490_11590);
auto res_update93_stencil_1491_0448_stencil_1490_11588 = add(stencil_13_lane_1_pack, res_update93_stencil_1491__m_1446_stencil_1490_11590_pack);

	  hw_uint<32 > stencil_13_lane_2_pack;
  set_at<0, 32, 32>(stencil_13_lane_2_pack, stencil_13_lane_2);
  hw_uint<32 > res_update93_stencil_1491_0448_stencil_1490_11588_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491_0448_stencil_1490_11588_pack, res_update93_stencil_1491_0448_stencil_1490_11588);
auto res_update93_stencil_1491_1450_stencil_1490_11586 = add(stencil_13_lane_2_pack, res_update93_stencil_1491_0448_stencil_1490_11588_pack);

	  hw_uint<32 > stencil_13_lane_3_pack;
  set_at<0, 32, 32>(stencil_13_lane_3_pack, stencil_13_lane_3);
  hw_uint<32 > res_update93_stencil_1491_1450_stencil_1490_11586_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491_1450_stencil_1490_11586_pack, res_update93_stencil_1491_1450_stencil_1490_11586);
auto res_update93_stencil_1491__m_1446_stencil_1490_01584 = add(stencil_13_lane_3_pack, res_update93_stencil_1491_1450_stencil_1490_11586_pack);

	  hw_uint<32 > stencil_13_lane_4_pack;
  set_at<0, 32, 32>(stencil_13_lane_4_pack, stencil_13_lane_4);
  hw_uint<32 > res_update93_stencil_1491__m_1446_stencil_1490_01584_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491__m_1446_stencil_1490_01584_pack, res_update93_stencil_1491__m_1446_stencil_1490_01584);
auto res_update93_stencil_1491_0448_stencil_1490_01582 = add(stencil_13_lane_4_pack, res_update93_stencil_1491__m_1446_stencil_1490_01584_pack);

	  hw_uint<32 > stencil_13_lane_5_pack;
  set_at<0, 32, 32>(stencil_13_lane_5_pack, stencil_13_lane_5);
  hw_uint<32 > res_update93_stencil_1491_0448_stencil_1490_01582_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491_0448_stencil_1490_01582_pack, res_update93_stencil_1491_0448_stencil_1490_01582);
auto res_update93_stencil_1491_1450_stencil_1490_01580 = add(stencil_13_lane_5_pack, res_update93_stencil_1491_0448_stencil_1490_01582_pack);

	  hw_uint<32 > stencil_13_lane_6_pack;
  set_at<0, 32, 32>(stencil_13_lane_6_pack, stencil_13_lane_6);
  hw_uint<32 > res_update93_stencil_1491_1450_stencil_1490_01580_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491_1450_stencil_1490_01580_pack, res_update93_stencil_1491_1450_stencil_1490_01580);
auto res_update93_stencil_1491__m_1446_stencil_1490__m_11578 = add(stencil_13_lane_6_pack, res_update93_stencil_1491_1450_stencil_1490_01580_pack);

	  hw_uint<32 > stencil_13_lane_7_pack;
  set_at<0, 32, 32>(stencil_13_lane_7_pack, stencil_13_lane_7);
  hw_uint<32 > res_update93_stencil_1491__m_1446_stencil_1490__m_11578_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491__m_1446_stencil_1490__m_11578_pack, res_update93_stencil_1491__m_1446_stencil_1490__m_11578);
auto res_update93_stencil_1491_0448_stencil_1490__m_11576 = add(stencil_13_lane_7_pack, res_update93_stencil_1491__m_1446_stencil_1490__m_11578_pack);

	  hw_uint<32 > stencil_13_lane_8_pack;
  set_at<0, 32, 32>(stencil_13_lane_8_pack, stencil_13_lane_8);
  hw_uint<32 > res_update93_stencil_1491_0448_stencil_1490__m_11576_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491_0448_stencil_1490__m_11576_pack, res_update93_stencil_1491_0448_stencil_1490__m_11576);
auto res_update93_stencil_1491_1450_stencil_1490__m_11574 = add(stencil_13_lane_8_pack, res_update93_stencil_1491_0448_stencil_1490__m_11576_pack);
  hw_uint<32 > return_value1851;
  set_at<0, 32, 32>(return_value1851, res_update93_stencil_1491_1450_stencil_1490__m_11574);
  return return_value1851;

}

hw_uint<32> stencil_31191_cu1853(hw_uint<32*9>& stencil_30) {
  hw_uint<32> stencil_30_lane_0;
  set_at<0, 32, 32>(stencil_30_lane_0, stencil_30.extract<0, 31>());
  hw_uint<32> stencil_30_lane_1;
  set_at<0, 32, 32>(stencil_30_lane_1, stencil_30.extract<32, 63>());
  hw_uint<32> stencil_30_lane_2;
  set_at<0, 32, 32>(stencil_30_lane_2, stencil_30.extract<64, 95>());
  hw_uint<32> stencil_30_lane_3;
  set_at<0, 32, 32>(stencil_30_lane_3, stencil_30.extract<96, 127>());
  hw_uint<32> stencil_30_lane_4;
  set_at<0, 32, 32>(stencil_30_lane_4, stencil_30.extract<128, 159>());
  hw_uint<32> stencil_30_lane_5;
  set_at<0, 32, 32>(stencil_30_lane_5, stencil_30.extract<160, 191>());
  hw_uint<32> stencil_30_lane_6;
  set_at<0, 32, 32>(stencil_30_lane_6, stencil_30.extract<192, 223>());
  hw_uint<32> stencil_30_lane_7;
  set_at<0, 32, 32>(stencil_30_lane_7, stencil_30.extract<224, 255>());
  hw_uint<32> stencil_30_lane_8;
  set_at<0, 32, 32>(stencil_30_lane_8, stencil_30.extract<256, 287>());

	
auto res_init194 = set_zero_32();

	  hw_uint<32 > stencil_30_lane_0_pack;
  set_at<0, 32, 32>(stencil_30_lane_0_pack, stencil_30_lane_0);
  hw_uint<32 > res_init194_pack;
  set_at<0, 32, 32>(res_init194_pack, res_init194);
auto res_update195_stencil_31193__m_1662_stencil_31192_1942 = add(stencil_30_lane_0_pack, res_init194_pack);

	  hw_uint<32 > stencil_30_lane_1_pack;
  set_at<0, 32, 32>(stencil_30_lane_1_pack, stencil_30_lane_1);
  hw_uint<32 > res_update195_stencil_31193__m_1662_stencil_31192_1942_pack;
  set_at<0, 32, 32>(res_update195_stencil_31193__m_1662_stencil_31192_1942_pack, res_update195_stencil_31193__m_1662_stencil_31192_1942);
auto res_update195_stencil_31193_0664_stencil_31192_1940 = add(stencil_30_lane_1_pack, res_update195_stencil_31193__m_1662_stencil_31192_1942_pack);

	  hw_uint<32 > stencil_30_lane_2_pack;
  set_at<0, 32, 32>(stencil_30_lane_2_pack, stencil_30_lane_2);
  hw_uint<32 > res_update195_stencil_31193_0664_stencil_31192_1940_pack;
  set_at<0, 32, 32>(res_update195_stencil_31193_0664_stencil_31192_1940_pack, res_update195_stencil_31193_0664_stencil_31192_1940);
auto res_update195_stencil_31193_1666_stencil_31192_1938 = add(stencil_30_lane_2_pack, res_update195_stencil_31193_0664_stencil_31192_1940_pack);

	  hw_uint<32 > stencil_30_lane_3_pack;
  set_at<0, 32, 32>(stencil_30_lane_3_pack, stencil_30_lane_3);
  hw_uint<32 > res_update195_stencil_31193_1666_stencil_31192_1938_pack;
  set_at<0, 32, 32>(res_update195_stencil_31193_1666_stencil_31192_1938_pack, res_update195_stencil_31193_1666_stencil_31192_1938);
auto res_update195_stencil_31193__m_1662_stencil_31192_0936 = add(stencil_30_lane_3_pack, res_update195_stencil_31193_1666_stencil_31192_1938_pack);

	  hw_uint<32 > stencil_30_lane_4_pack;
  set_at<0, 32, 32>(stencil_30_lane_4_pack, stencil_30_lane_4);
  hw_uint<32 > res_update195_stencil_31193__m_1662_stencil_31192_0936_pack;
  set_at<0, 32, 32>(res_update195_stencil_31193__m_1662_stencil_31192_0936_pack, res_update195_stencil_31193__m_1662_stencil_31192_0936);
auto res_update195_stencil_31193_0664_stencil_31192_0934 = add(stencil_30_lane_4_pack, res_update195_stencil_31193__m_1662_stencil_31192_0936_pack);

	  hw_uint<32 > stencil_30_lane_5_pack;
  set_at<0, 32, 32>(stencil_30_lane_5_pack, stencil_30_lane_5);
  hw_uint<32 > res_update195_stencil_31193_0664_stencil_31192_0934_pack;
  set_at<0, 32, 32>(res_update195_stencil_31193_0664_stencil_31192_0934_pack, res_update195_stencil_31193_0664_stencil_31192_0934);
auto res_update195_stencil_31193_1666_stencil_31192_0932 = add(stencil_30_lane_5_pack, res_update195_stencil_31193_0664_stencil_31192_0934_pack);

	  hw_uint<32 > stencil_30_lane_6_pack;
  set_at<0, 32, 32>(stencil_30_lane_6_pack, stencil_30_lane_6);
  hw_uint<32 > res_update195_stencil_31193_1666_stencil_31192_0932_pack;
  set_at<0, 32, 32>(res_update195_stencil_31193_1666_stencil_31192_0932_pack, res_update195_stencil_31193_1666_stencil_31192_0932);
auto res_update195_stencil_31193__m_1662_stencil_31192__m_1930 = add(stencil_30_lane_6_pack, res_update195_stencil_31193_1666_stencil_31192_0932_pack);

	  hw_uint<32 > stencil_30_lane_7_pack;
  set_at<0, 32, 32>(stencil_30_lane_7_pack, stencil_30_lane_7);
  hw_uint<32 > res_update195_stencil_31193__m_1662_stencil_31192__m_1930_pack;
  set_at<0, 32, 32>(res_update195_stencil_31193__m_1662_stencil_31192__m_1930_pack, res_update195_stencil_31193__m_1662_stencil_31192__m_1930);
auto res_update195_stencil_31193_0664_stencil_31192__m_1928 = add(stencil_30_lane_7_pack, res_update195_stencil_31193__m_1662_stencil_31192__m_1930_pack);

	  hw_uint<32 > stencil_30_lane_8_pack;
  set_at<0, 32, 32>(stencil_30_lane_8_pack, stencil_30_lane_8);
  hw_uint<32 > res_update195_stencil_31193_0664_stencil_31192__m_1928_pack;
  set_at<0, 32, 32>(res_update195_stencil_31193_0664_stencil_31192__m_1928_pack, res_update195_stencil_31193_0664_stencil_31192__m_1928);
auto res_update195_stencil_31193_1666_stencil_31192__m_1926 = add(stencil_30_lane_8_pack, res_update195_stencil_31193_0664_stencil_31192__m_1928_pack);
  hw_uint<32 > return_value1854;
  set_at<0, 32, 32>(return_value1854, res_update195_stencil_31193_1666_stencil_31192__m_1926);
  return return_value1854;

}

hw_uint<32> stencil_1595_cu1856(hw_uint<32*9>& stencil_14) {
  hw_uint<32> stencil_14_lane_0;
  set_at<0, 32, 32>(stencil_14_lane_0, stencil_14.extract<0, 31>());
  hw_uint<32> stencil_14_lane_1;
  set_at<0, 32, 32>(stencil_14_lane_1, stencil_14.extract<32, 63>());
  hw_uint<32> stencil_14_lane_2;
  set_at<0, 32, 32>(stencil_14_lane_2, stencil_14.extract<64, 95>());
  hw_uint<32> stencil_14_lane_3;
  set_at<0, 32, 32>(stencil_14_lane_3, stencil_14.extract<96, 127>());
  hw_uint<32> stencil_14_lane_4;
  set_at<0, 32, 32>(stencil_14_lane_4, stencil_14.extract<128, 159>());
  hw_uint<32> stencil_14_lane_5;
  set_at<0, 32, 32>(stencil_14_lane_5, stencil_14.extract<160, 191>());
  hw_uint<32> stencil_14_lane_6;
  set_at<0, 32, 32>(stencil_14_lane_6, stencil_14.extract<192, 223>());
  hw_uint<32> stencil_14_lane_7;
  set_at<0, 32, 32>(stencil_14_lane_7, stencil_14.extract<224, 255>());
  hw_uint<32> stencil_14_lane_8;
  set_at<0, 32, 32>(stencil_14_lane_8, stencil_14.extract<256, 287>());

	
auto res_init98 = set_zero_32();

	  hw_uint<32 > stencil_14_lane_0_pack;
  set_at<0, 32, 32>(stencil_14_lane_0_pack, stencil_14_lane_0);
  hw_uint<32 > res_init98_pack;
  set_at<0, 32, 32>(res_init98_pack, res_init98);
auto res_update99_stencil_1597__m_1458_stencil_1596_11554 = add(stencil_14_lane_0_pack, res_init98_pack);

	  hw_uint<32 > stencil_14_lane_1_pack;
  set_at<0, 32, 32>(stencil_14_lane_1_pack, stencil_14_lane_1);
  hw_uint<32 > res_update99_stencil_1597__m_1458_stencil_1596_11554_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597__m_1458_stencil_1596_11554_pack, res_update99_stencil_1597__m_1458_stencil_1596_11554);
auto res_update99_stencil_1597_0460_stencil_1596_11552 = add(stencil_14_lane_1_pack, res_update99_stencil_1597__m_1458_stencil_1596_11554_pack);

	  hw_uint<32 > stencil_14_lane_2_pack;
  set_at<0, 32, 32>(stencil_14_lane_2_pack, stencil_14_lane_2);
  hw_uint<32 > res_update99_stencil_1597_0460_stencil_1596_11552_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597_0460_stencil_1596_11552_pack, res_update99_stencil_1597_0460_stencil_1596_11552);
auto res_update99_stencil_1597_1462_stencil_1596_11550 = add(stencil_14_lane_2_pack, res_update99_stencil_1597_0460_stencil_1596_11552_pack);

	  hw_uint<32 > stencil_14_lane_3_pack;
  set_at<0, 32, 32>(stencil_14_lane_3_pack, stencil_14_lane_3);
  hw_uint<32 > res_update99_stencil_1597_1462_stencil_1596_11550_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597_1462_stencil_1596_11550_pack, res_update99_stencil_1597_1462_stencil_1596_11550);
auto res_update99_stencil_1597__m_1458_stencil_1596_01548 = add(stencil_14_lane_3_pack, res_update99_stencil_1597_1462_stencil_1596_11550_pack);

	  hw_uint<32 > stencil_14_lane_4_pack;
  set_at<0, 32, 32>(stencil_14_lane_4_pack, stencil_14_lane_4);
  hw_uint<32 > res_update99_stencil_1597__m_1458_stencil_1596_01548_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597__m_1458_stencil_1596_01548_pack, res_update99_stencil_1597__m_1458_stencil_1596_01548);
auto res_update99_stencil_1597_0460_stencil_1596_01546 = add(stencil_14_lane_4_pack, res_update99_stencil_1597__m_1458_stencil_1596_01548_pack);

	  hw_uint<32 > stencil_14_lane_5_pack;
  set_at<0, 32, 32>(stencil_14_lane_5_pack, stencil_14_lane_5);
  hw_uint<32 > res_update99_stencil_1597_0460_stencil_1596_01546_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597_0460_stencil_1596_01546_pack, res_update99_stencil_1597_0460_stencil_1596_01546);
auto res_update99_stencil_1597_1462_stencil_1596_01544 = add(stencil_14_lane_5_pack, res_update99_stencil_1597_0460_stencil_1596_01546_pack);

	  hw_uint<32 > stencil_14_lane_6_pack;
  set_at<0, 32, 32>(stencil_14_lane_6_pack, stencil_14_lane_6);
  hw_uint<32 > res_update99_stencil_1597_1462_stencil_1596_01544_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597_1462_stencil_1596_01544_pack, res_update99_stencil_1597_1462_stencil_1596_01544);
auto res_update99_stencil_1597__m_1458_stencil_1596__m_11542 = add(stencil_14_lane_6_pack, res_update99_stencil_1597_1462_stencil_1596_01544_pack);

	  hw_uint<32 > stencil_14_lane_7_pack;
  set_at<0, 32, 32>(stencil_14_lane_7_pack, stencil_14_lane_7);
  hw_uint<32 > res_update99_stencil_1597__m_1458_stencil_1596__m_11542_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597__m_1458_stencil_1596__m_11542_pack, res_update99_stencil_1597__m_1458_stencil_1596__m_11542);
auto res_update99_stencil_1597_0460_stencil_1596__m_11540 = add(stencil_14_lane_7_pack, res_update99_stencil_1597__m_1458_stencil_1596__m_11542_pack);

	  hw_uint<32 > stencil_14_lane_8_pack;
  set_at<0, 32, 32>(stencil_14_lane_8_pack, stencil_14_lane_8);
  hw_uint<32 > res_update99_stencil_1597_0460_stencil_1596__m_11540_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597_0460_stencil_1596__m_11540_pack, res_update99_stencil_1597_0460_stencil_1596__m_11540);
auto res_update99_stencil_1597_1462_stencil_1596__m_11538 = add(stencil_14_lane_8_pack, res_update99_stencil_1597_0460_stencil_1596__m_11540_pack);
  hw_uint<32 > return_value1857;
  set_at<0, 32, 32>(return_value1857, res_update99_stencil_1597_1462_stencil_1596__m_11538);
  return return_value1857;

}

hw_uint<32> stencil_16101_cu1859(hw_uint<32*9>& stencil_15) {
  hw_uint<32> stencil_15_lane_0;
  set_at<0, 32, 32>(stencil_15_lane_0, stencil_15.extract<0, 31>());
  hw_uint<32> stencil_15_lane_1;
  set_at<0, 32, 32>(stencil_15_lane_1, stencil_15.extract<32, 63>());
  hw_uint<32> stencil_15_lane_2;
  set_at<0, 32, 32>(stencil_15_lane_2, stencil_15.extract<64, 95>());
  hw_uint<32> stencil_15_lane_3;
  set_at<0, 32, 32>(stencil_15_lane_3, stencil_15.extract<96, 127>());
  hw_uint<32> stencil_15_lane_4;
  set_at<0, 32, 32>(stencil_15_lane_4, stencil_15.extract<128, 159>());
  hw_uint<32> stencil_15_lane_5;
  set_at<0, 32, 32>(stencil_15_lane_5, stencil_15.extract<160, 191>());
  hw_uint<32> stencil_15_lane_6;
  set_at<0, 32, 32>(stencil_15_lane_6, stencil_15.extract<192, 223>());
  hw_uint<32> stencil_15_lane_7;
  set_at<0, 32, 32>(stencil_15_lane_7, stencil_15.extract<224, 255>());
  hw_uint<32> stencil_15_lane_8;
  set_at<0, 32, 32>(stencil_15_lane_8, stencil_15.extract<256, 287>());

	
auto res_init104 = set_zero_32();

	  hw_uint<32 > stencil_15_lane_0_pack;
  set_at<0, 32, 32>(stencil_15_lane_0_pack, stencil_15_lane_0);
  hw_uint<32 > res_init104_pack;
  set_at<0, 32, 32>(res_init104_pack, res_init104);
auto res_update105_stencil_16103__m_1470_stencil_16102_11518 = add(stencil_15_lane_0_pack, res_init104_pack);

	  hw_uint<32 > stencil_15_lane_1_pack;
  set_at<0, 32, 32>(stencil_15_lane_1_pack, stencil_15_lane_1);
  hw_uint<32 > res_update105_stencil_16103__m_1470_stencil_16102_11518_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103__m_1470_stencil_16102_11518_pack, res_update105_stencil_16103__m_1470_stencil_16102_11518);
auto res_update105_stencil_16103_0472_stencil_16102_11516 = add(stencil_15_lane_1_pack, res_update105_stencil_16103__m_1470_stencil_16102_11518_pack);

	  hw_uint<32 > stencil_15_lane_2_pack;
  set_at<0, 32, 32>(stencil_15_lane_2_pack, stencil_15_lane_2);
  hw_uint<32 > res_update105_stencil_16103_0472_stencil_16102_11516_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103_0472_stencil_16102_11516_pack, res_update105_stencil_16103_0472_stencil_16102_11516);
auto res_update105_stencil_16103_1474_stencil_16102_11514 = add(stencil_15_lane_2_pack, res_update105_stencil_16103_0472_stencil_16102_11516_pack);

	  hw_uint<32 > stencil_15_lane_3_pack;
  set_at<0, 32, 32>(stencil_15_lane_3_pack, stencil_15_lane_3);
  hw_uint<32 > res_update105_stencil_16103_1474_stencil_16102_11514_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103_1474_stencil_16102_11514_pack, res_update105_stencil_16103_1474_stencil_16102_11514);
auto res_update105_stencil_16103__m_1470_stencil_16102_01512 = add(stencil_15_lane_3_pack, res_update105_stencil_16103_1474_stencil_16102_11514_pack);

	  hw_uint<32 > stencil_15_lane_4_pack;
  set_at<0, 32, 32>(stencil_15_lane_4_pack, stencil_15_lane_4);
  hw_uint<32 > res_update105_stencil_16103__m_1470_stencil_16102_01512_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103__m_1470_stencil_16102_01512_pack, res_update105_stencil_16103__m_1470_stencil_16102_01512);
auto res_update105_stencil_16103_0472_stencil_16102_01510 = add(stencil_15_lane_4_pack, res_update105_stencil_16103__m_1470_stencil_16102_01512_pack);

	  hw_uint<32 > stencil_15_lane_5_pack;
  set_at<0, 32, 32>(stencil_15_lane_5_pack, stencil_15_lane_5);
  hw_uint<32 > res_update105_stencil_16103_0472_stencil_16102_01510_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103_0472_stencil_16102_01510_pack, res_update105_stencil_16103_0472_stencil_16102_01510);
auto res_update105_stencil_16103_1474_stencil_16102_01508 = add(stencil_15_lane_5_pack, res_update105_stencil_16103_0472_stencil_16102_01510_pack);

	  hw_uint<32 > stencil_15_lane_6_pack;
  set_at<0, 32, 32>(stencil_15_lane_6_pack, stencil_15_lane_6);
  hw_uint<32 > res_update105_stencil_16103_1474_stencil_16102_01508_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103_1474_stencil_16102_01508_pack, res_update105_stencil_16103_1474_stencil_16102_01508);
auto res_update105_stencil_16103__m_1470_stencil_16102__m_11506 = add(stencil_15_lane_6_pack, res_update105_stencil_16103_1474_stencil_16102_01508_pack);

	  hw_uint<32 > stencil_15_lane_7_pack;
  set_at<0, 32, 32>(stencil_15_lane_7_pack, stencil_15_lane_7);
  hw_uint<32 > res_update105_stencil_16103__m_1470_stencil_16102__m_11506_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103__m_1470_stencil_16102__m_11506_pack, res_update105_stencil_16103__m_1470_stencil_16102__m_11506);
auto res_update105_stencil_16103_0472_stencil_16102__m_11504 = add(stencil_15_lane_7_pack, res_update105_stencil_16103__m_1470_stencil_16102__m_11506_pack);

	  hw_uint<32 > stencil_15_lane_8_pack;
  set_at<0, 32, 32>(stencil_15_lane_8_pack, stencil_15_lane_8);
  hw_uint<32 > res_update105_stencil_16103_0472_stencil_16102__m_11504_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103_0472_stencil_16102__m_11504_pack, res_update105_stencil_16103_0472_stencil_16102__m_11504);
auto res_update105_stencil_16103_1474_stencil_16102__m_11502 = add(stencil_15_lane_8_pack, res_update105_stencil_16103_0472_stencil_16102__m_11504_pack);
  hw_uint<32 > return_value1860;
  set_at<0, 32, 32>(return_value1860, res_update105_stencil_16103_1474_stencil_16102__m_11502);
  return return_value1860;

}

hw_uint<32> stencil_17107_cu1862(hw_uint<32*9>& stencil_16) {
  hw_uint<32> stencil_16_lane_0;
  set_at<0, 32, 32>(stencil_16_lane_0, stencil_16.extract<0, 31>());
  hw_uint<32> stencil_16_lane_1;
  set_at<0, 32, 32>(stencil_16_lane_1, stencil_16.extract<32, 63>());
  hw_uint<32> stencil_16_lane_2;
  set_at<0, 32, 32>(stencil_16_lane_2, stencil_16.extract<64, 95>());
  hw_uint<32> stencil_16_lane_3;
  set_at<0, 32, 32>(stencil_16_lane_3, stencil_16.extract<96, 127>());
  hw_uint<32> stencil_16_lane_4;
  set_at<0, 32, 32>(stencil_16_lane_4, stencil_16.extract<128, 159>());
  hw_uint<32> stencil_16_lane_5;
  set_at<0, 32, 32>(stencil_16_lane_5, stencil_16.extract<160, 191>());
  hw_uint<32> stencil_16_lane_6;
  set_at<0, 32, 32>(stencil_16_lane_6, stencil_16.extract<192, 223>());
  hw_uint<32> stencil_16_lane_7;
  set_at<0, 32, 32>(stencil_16_lane_7, stencil_16.extract<224, 255>());
  hw_uint<32> stencil_16_lane_8;
  set_at<0, 32, 32>(stencil_16_lane_8, stencil_16.extract<256, 287>());

	
auto res_init110 = set_zero_32();

	  hw_uint<32 > stencil_16_lane_0_pack;
  set_at<0, 32, 32>(stencil_16_lane_0_pack, stencil_16_lane_0);
  hw_uint<32 > res_init110_pack;
  set_at<0, 32, 32>(res_init110_pack, res_init110);
auto res_update111_stencil_17109__m_1482_stencil_17108_11482 = add(stencil_16_lane_0_pack, res_init110_pack);

	  hw_uint<32 > stencil_16_lane_1_pack;
  set_at<0, 32, 32>(stencil_16_lane_1_pack, stencil_16_lane_1);
  hw_uint<32 > res_update111_stencil_17109__m_1482_stencil_17108_11482_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109__m_1482_stencil_17108_11482_pack, res_update111_stencil_17109__m_1482_stencil_17108_11482);
auto res_update111_stencil_17109_0484_stencil_17108_11480 = add(stencil_16_lane_1_pack, res_update111_stencil_17109__m_1482_stencil_17108_11482_pack);

	  hw_uint<32 > stencil_16_lane_2_pack;
  set_at<0, 32, 32>(stencil_16_lane_2_pack, stencil_16_lane_2);
  hw_uint<32 > res_update111_stencil_17109_0484_stencil_17108_11480_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109_0484_stencil_17108_11480_pack, res_update111_stencil_17109_0484_stencil_17108_11480);
auto res_update111_stencil_17109_1486_stencil_17108_11478 = add(stencil_16_lane_2_pack, res_update111_stencil_17109_0484_stencil_17108_11480_pack);

	  hw_uint<32 > stencil_16_lane_3_pack;
  set_at<0, 32, 32>(stencil_16_lane_3_pack, stencil_16_lane_3);
  hw_uint<32 > res_update111_stencil_17109_1486_stencil_17108_11478_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109_1486_stencil_17108_11478_pack, res_update111_stencil_17109_1486_stencil_17108_11478);
auto res_update111_stencil_17109__m_1482_stencil_17108_01476 = add(stencil_16_lane_3_pack, res_update111_stencil_17109_1486_stencil_17108_11478_pack);

	  hw_uint<32 > stencil_16_lane_4_pack;
  set_at<0, 32, 32>(stencil_16_lane_4_pack, stencil_16_lane_4);
  hw_uint<32 > res_update111_stencil_17109__m_1482_stencil_17108_01476_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109__m_1482_stencil_17108_01476_pack, res_update111_stencil_17109__m_1482_stencil_17108_01476);
auto res_update111_stencil_17109_0484_stencil_17108_01474 = add(stencil_16_lane_4_pack, res_update111_stencil_17109__m_1482_stencil_17108_01476_pack);

	  hw_uint<32 > stencil_16_lane_5_pack;
  set_at<0, 32, 32>(stencil_16_lane_5_pack, stencil_16_lane_5);
  hw_uint<32 > res_update111_stencil_17109_0484_stencil_17108_01474_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109_0484_stencil_17108_01474_pack, res_update111_stencil_17109_0484_stencil_17108_01474);
auto res_update111_stencil_17109_1486_stencil_17108_01472 = add(stencil_16_lane_5_pack, res_update111_stencil_17109_0484_stencil_17108_01474_pack);

	  hw_uint<32 > stencil_16_lane_6_pack;
  set_at<0, 32, 32>(stencil_16_lane_6_pack, stencil_16_lane_6);
  hw_uint<32 > res_update111_stencil_17109_1486_stencil_17108_01472_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109_1486_stencil_17108_01472_pack, res_update111_stencil_17109_1486_stencil_17108_01472);
auto res_update111_stencil_17109__m_1482_stencil_17108__m_11470 = add(stencil_16_lane_6_pack, res_update111_stencil_17109_1486_stencil_17108_01472_pack);

	  hw_uint<32 > stencil_16_lane_7_pack;
  set_at<0, 32, 32>(stencil_16_lane_7_pack, stencil_16_lane_7);
  hw_uint<32 > res_update111_stencil_17109__m_1482_stencil_17108__m_11470_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109__m_1482_stencil_17108__m_11470_pack, res_update111_stencil_17109__m_1482_stencil_17108__m_11470);
auto res_update111_stencil_17109_0484_stencil_17108__m_11468 = add(stencil_16_lane_7_pack, res_update111_stencil_17109__m_1482_stencil_17108__m_11470_pack);

	  hw_uint<32 > stencil_16_lane_8_pack;
  set_at<0, 32, 32>(stencil_16_lane_8_pack, stencil_16_lane_8);
  hw_uint<32 > res_update111_stencil_17109_0484_stencil_17108__m_11468_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109_0484_stencil_17108__m_11468_pack, res_update111_stencil_17109_0484_stencil_17108__m_11468);
auto res_update111_stencil_17109_1486_stencil_17108__m_11466 = add(stencil_16_lane_8_pack, res_update111_stencil_17109_0484_stencil_17108__m_11468_pack);
  hw_uint<32 > return_value1863;
  set_at<0, 32, 32>(return_value1863, res_update111_stencil_17109_1486_stencil_17108__m_11466);
  return return_value1863;

}

hw_uint<32> stencil_18113_cu1865(hw_uint<32*9>& stencil_17) {
  hw_uint<32> stencil_17_lane_0;
  set_at<0, 32, 32>(stencil_17_lane_0, stencil_17.extract<0, 31>());
  hw_uint<32> stencil_17_lane_1;
  set_at<0, 32, 32>(stencil_17_lane_1, stencil_17.extract<32, 63>());
  hw_uint<32> stencil_17_lane_2;
  set_at<0, 32, 32>(stencil_17_lane_2, stencil_17.extract<64, 95>());
  hw_uint<32> stencil_17_lane_3;
  set_at<0, 32, 32>(stencil_17_lane_3, stencil_17.extract<96, 127>());
  hw_uint<32> stencil_17_lane_4;
  set_at<0, 32, 32>(stencil_17_lane_4, stencil_17.extract<128, 159>());
  hw_uint<32> stencil_17_lane_5;
  set_at<0, 32, 32>(stencil_17_lane_5, stencil_17.extract<160, 191>());
  hw_uint<32> stencil_17_lane_6;
  set_at<0, 32, 32>(stencil_17_lane_6, stencil_17.extract<192, 223>());
  hw_uint<32> stencil_17_lane_7;
  set_at<0, 32, 32>(stencil_17_lane_7, stencil_17.extract<224, 255>());
  hw_uint<32> stencil_17_lane_8;
  set_at<0, 32, 32>(stencil_17_lane_8, stencil_17.extract<256, 287>());

	
auto res_init116 = set_zero_32();

	  hw_uint<32 > stencil_17_lane_0_pack;
  set_at<0, 32, 32>(stencil_17_lane_0_pack, stencil_17_lane_0);
  hw_uint<32 > res_init116_pack;
  set_at<0, 32, 32>(res_init116_pack, res_init116);
auto res_update117_stencil_18115__m_1494_stencil_18114_11446 = add(stencil_17_lane_0_pack, res_init116_pack);

	  hw_uint<32 > stencil_17_lane_1_pack;
  set_at<0, 32, 32>(stencil_17_lane_1_pack, stencil_17_lane_1);
  hw_uint<32 > res_update117_stencil_18115__m_1494_stencil_18114_11446_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115__m_1494_stencil_18114_11446_pack, res_update117_stencil_18115__m_1494_stencil_18114_11446);
auto res_update117_stencil_18115_0496_stencil_18114_11444 = add(stencil_17_lane_1_pack, res_update117_stencil_18115__m_1494_stencil_18114_11446_pack);

	  hw_uint<32 > stencil_17_lane_2_pack;
  set_at<0, 32, 32>(stencil_17_lane_2_pack, stencil_17_lane_2);
  hw_uint<32 > res_update117_stencil_18115_0496_stencil_18114_11444_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115_0496_stencil_18114_11444_pack, res_update117_stencil_18115_0496_stencil_18114_11444);
auto res_update117_stencil_18115_1498_stencil_18114_11442 = add(stencil_17_lane_2_pack, res_update117_stencil_18115_0496_stencil_18114_11444_pack);

	  hw_uint<32 > stencil_17_lane_3_pack;
  set_at<0, 32, 32>(stencil_17_lane_3_pack, stencil_17_lane_3);
  hw_uint<32 > res_update117_stencil_18115_1498_stencil_18114_11442_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115_1498_stencil_18114_11442_pack, res_update117_stencil_18115_1498_stencil_18114_11442);
auto res_update117_stencil_18115__m_1494_stencil_18114_01440 = add(stencil_17_lane_3_pack, res_update117_stencil_18115_1498_stencil_18114_11442_pack);

	  hw_uint<32 > stencil_17_lane_4_pack;
  set_at<0, 32, 32>(stencil_17_lane_4_pack, stencil_17_lane_4);
  hw_uint<32 > res_update117_stencil_18115__m_1494_stencil_18114_01440_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115__m_1494_stencil_18114_01440_pack, res_update117_stencil_18115__m_1494_stencil_18114_01440);
auto res_update117_stencil_18115_0496_stencil_18114_01438 = add(stencil_17_lane_4_pack, res_update117_stencil_18115__m_1494_stencil_18114_01440_pack);

	  hw_uint<32 > stencil_17_lane_5_pack;
  set_at<0, 32, 32>(stencil_17_lane_5_pack, stencil_17_lane_5);
  hw_uint<32 > res_update117_stencil_18115_0496_stencil_18114_01438_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115_0496_stencil_18114_01438_pack, res_update117_stencil_18115_0496_stencil_18114_01438);
auto res_update117_stencil_18115_1498_stencil_18114_01436 = add(stencil_17_lane_5_pack, res_update117_stencil_18115_0496_stencil_18114_01438_pack);

	  hw_uint<32 > stencil_17_lane_6_pack;
  set_at<0, 32, 32>(stencil_17_lane_6_pack, stencil_17_lane_6);
  hw_uint<32 > res_update117_stencil_18115_1498_stencil_18114_01436_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115_1498_stencil_18114_01436_pack, res_update117_stencil_18115_1498_stencil_18114_01436);
auto res_update117_stencil_18115__m_1494_stencil_18114__m_11434 = add(stencil_17_lane_6_pack, res_update117_stencil_18115_1498_stencil_18114_01436_pack);

	  hw_uint<32 > stencil_17_lane_7_pack;
  set_at<0, 32, 32>(stencil_17_lane_7_pack, stencil_17_lane_7);
  hw_uint<32 > res_update117_stencil_18115__m_1494_stencil_18114__m_11434_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115__m_1494_stencil_18114__m_11434_pack, res_update117_stencil_18115__m_1494_stencil_18114__m_11434);
auto res_update117_stencil_18115_0496_stencil_18114__m_11432 = add(stencil_17_lane_7_pack, res_update117_stencil_18115__m_1494_stencil_18114__m_11434_pack);

	  hw_uint<32 > stencil_17_lane_8_pack;
  set_at<0, 32, 32>(stencil_17_lane_8_pack, stencil_17_lane_8);
  hw_uint<32 > res_update117_stencil_18115_0496_stencil_18114__m_11432_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115_0496_stencil_18114__m_11432_pack, res_update117_stencil_18115_0496_stencil_18114__m_11432);
auto res_update117_stencil_18115_1498_stencil_18114__m_11430 = add(stencil_17_lane_8_pack, res_update117_stencil_18115_0496_stencil_18114__m_11432_pack);
  hw_uint<32 > return_value1866;
  set_at<0, 32, 32>(return_value1866, res_update117_stencil_18115_1498_stencil_18114__m_11430);
  return return_value1866;

}

hw_uint<32> stencil_19119_cu1868(hw_uint<32*9>& stencil_18) {
  hw_uint<32> stencil_18_lane_0;
  set_at<0, 32, 32>(stencil_18_lane_0, stencil_18.extract<0, 31>());
  hw_uint<32> stencil_18_lane_1;
  set_at<0, 32, 32>(stencil_18_lane_1, stencil_18.extract<32, 63>());
  hw_uint<32> stencil_18_lane_2;
  set_at<0, 32, 32>(stencil_18_lane_2, stencil_18.extract<64, 95>());
  hw_uint<32> stencil_18_lane_3;
  set_at<0, 32, 32>(stencil_18_lane_3, stencil_18.extract<96, 127>());
  hw_uint<32> stencil_18_lane_4;
  set_at<0, 32, 32>(stencil_18_lane_4, stencil_18.extract<128, 159>());
  hw_uint<32> stencil_18_lane_5;
  set_at<0, 32, 32>(stencil_18_lane_5, stencil_18.extract<160, 191>());
  hw_uint<32> stencil_18_lane_6;
  set_at<0, 32, 32>(stencil_18_lane_6, stencil_18.extract<192, 223>());
  hw_uint<32> stencil_18_lane_7;
  set_at<0, 32, 32>(stencil_18_lane_7, stencil_18.extract<224, 255>());
  hw_uint<32> stencil_18_lane_8;
  set_at<0, 32, 32>(stencil_18_lane_8, stencil_18.extract<256, 287>());

	
auto res_init122 = set_zero_32();

	  hw_uint<32 > stencil_18_lane_0_pack;
  set_at<0, 32, 32>(stencil_18_lane_0_pack, stencil_18_lane_0);
  hw_uint<32 > res_init122_pack;
  set_at<0, 32, 32>(res_init122_pack, res_init122);
auto res_update123_stencil_19121__m_1506_stencil_19120_11410 = add(stencil_18_lane_0_pack, res_init122_pack);

	  hw_uint<32 > stencil_18_lane_1_pack;
  set_at<0, 32, 32>(stencil_18_lane_1_pack, stencil_18_lane_1);
  hw_uint<32 > res_update123_stencil_19121__m_1506_stencil_19120_11410_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121__m_1506_stencil_19120_11410_pack, res_update123_stencil_19121__m_1506_stencil_19120_11410);
auto res_update123_stencil_19121_0508_stencil_19120_11408 = add(stencil_18_lane_1_pack, res_update123_stencil_19121__m_1506_stencil_19120_11410_pack);

	  hw_uint<32 > stencil_18_lane_2_pack;
  set_at<0, 32, 32>(stencil_18_lane_2_pack, stencil_18_lane_2);
  hw_uint<32 > res_update123_stencil_19121_0508_stencil_19120_11408_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121_0508_stencil_19120_11408_pack, res_update123_stencil_19121_0508_stencil_19120_11408);
auto res_update123_stencil_19121_1510_stencil_19120_11406 = add(stencil_18_lane_2_pack, res_update123_stencil_19121_0508_stencil_19120_11408_pack);

	  hw_uint<32 > stencil_18_lane_3_pack;
  set_at<0, 32, 32>(stencil_18_lane_3_pack, stencil_18_lane_3);
  hw_uint<32 > res_update123_stencil_19121_1510_stencil_19120_11406_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121_1510_stencil_19120_11406_pack, res_update123_stencil_19121_1510_stencil_19120_11406);
auto res_update123_stencil_19121__m_1506_stencil_19120_01404 = add(stencil_18_lane_3_pack, res_update123_stencil_19121_1510_stencil_19120_11406_pack);

	  hw_uint<32 > stencil_18_lane_4_pack;
  set_at<0, 32, 32>(stencil_18_lane_4_pack, stencil_18_lane_4);
  hw_uint<32 > res_update123_stencil_19121__m_1506_stencil_19120_01404_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121__m_1506_stencil_19120_01404_pack, res_update123_stencil_19121__m_1506_stencil_19120_01404);
auto res_update123_stencil_19121_0508_stencil_19120_01402 = add(stencil_18_lane_4_pack, res_update123_stencil_19121__m_1506_stencil_19120_01404_pack);

	  hw_uint<32 > stencil_18_lane_5_pack;
  set_at<0, 32, 32>(stencil_18_lane_5_pack, stencil_18_lane_5);
  hw_uint<32 > res_update123_stencil_19121_0508_stencil_19120_01402_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121_0508_stencil_19120_01402_pack, res_update123_stencil_19121_0508_stencil_19120_01402);
auto res_update123_stencil_19121_1510_stencil_19120_01400 = add(stencil_18_lane_5_pack, res_update123_stencil_19121_0508_stencil_19120_01402_pack);

	  hw_uint<32 > stencil_18_lane_6_pack;
  set_at<0, 32, 32>(stencil_18_lane_6_pack, stencil_18_lane_6);
  hw_uint<32 > res_update123_stencil_19121_1510_stencil_19120_01400_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121_1510_stencil_19120_01400_pack, res_update123_stencil_19121_1510_stencil_19120_01400);
auto res_update123_stencil_19121__m_1506_stencil_19120__m_11398 = add(stencil_18_lane_6_pack, res_update123_stencil_19121_1510_stencil_19120_01400_pack);

	  hw_uint<32 > stencil_18_lane_7_pack;
  set_at<0, 32, 32>(stencil_18_lane_7_pack, stencil_18_lane_7);
  hw_uint<32 > res_update123_stencil_19121__m_1506_stencil_19120__m_11398_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121__m_1506_stencil_19120__m_11398_pack, res_update123_stencil_19121__m_1506_stencil_19120__m_11398);
auto res_update123_stencil_19121_0508_stencil_19120__m_11396 = add(stencil_18_lane_7_pack, res_update123_stencil_19121__m_1506_stencil_19120__m_11398_pack);

	  hw_uint<32 > stencil_18_lane_8_pack;
  set_at<0, 32, 32>(stencil_18_lane_8_pack, stencil_18_lane_8);
  hw_uint<32 > res_update123_stencil_19121_0508_stencil_19120__m_11396_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121_0508_stencil_19120__m_11396_pack, res_update123_stencil_19121_0508_stencil_19120__m_11396);
auto res_update123_stencil_19121_1510_stencil_19120__m_11394 = add(stencil_18_lane_8_pack, res_update123_stencil_19121_0508_stencil_19120__m_11396_pack);
  hw_uint<32 > return_value1869;
  set_at<0, 32, 32>(return_value1869, res_update123_stencil_19121_1510_stencil_19120__m_11394);
  return return_value1869;

}

hw_uint<32> stencil_20125_cu1871(hw_uint<32*9>& stencil_19) {
  hw_uint<32> stencil_19_lane_0;
  set_at<0, 32, 32>(stencil_19_lane_0, stencil_19.extract<0, 31>());
  hw_uint<32> stencil_19_lane_1;
  set_at<0, 32, 32>(stencil_19_lane_1, stencil_19.extract<32, 63>());
  hw_uint<32> stencil_19_lane_2;
  set_at<0, 32, 32>(stencil_19_lane_2, stencil_19.extract<64, 95>());
  hw_uint<32> stencil_19_lane_3;
  set_at<0, 32, 32>(stencil_19_lane_3, stencil_19.extract<96, 127>());
  hw_uint<32> stencil_19_lane_4;
  set_at<0, 32, 32>(stencil_19_lane_4, stencil_19.extract<128, 159>());
  hw_uint<32> stencil_19_lane_5;
  set_at<0, 32, 32>(stencil_19_lane_5, stencil_19.extract<160, 191>());
  hw_uint<32> stencil_19_lane_6;
  set_at<0, 32, 32>(stencil_19_lane_6, stencil_19.extract<192, 223>());
  hw_uint<32> stencil_19_lane_7;
  set_at<0, 32, 32>(stencil_19_lane_7, stencil_19.extract<224, 255>());
  hw_uint<32> stencil_19_lane_8;
  set_at<0, 32, 32>(stencil_19_lane_8, stencil_19.extract<256, 287>());

	
auto res_init128 = set_zero_32();

	  hw_uint<32 > stencil_19_lane_0_pack;
  set_at<0, 32, 32>(stencil_19_lane_0_pack, stencil_19_lane_0);
  hw_uint<32 > res_init128_pack;
  set_at<0, 32, 32>(res_init128_pack, res_init128);
auto res_update129_stencil_20127__m_1518_stencil_20126_11374 = add(stencil_19_lane_0_pack, res_init128_pack);

	  hw_uint<32 > stencil_19_lane_1_pack;
  set_at<0, 32, 32>(stencil_19_lane_1_pack, stencil_19_lane_1);
  hw_uint<32 > res_update129_stencil_20127__m_1518_stencil_20126_11374_pack;
  set_at<0, 32, 32>(res_update129_stencil_20127__m_1518_stencil_20126_11374_pack, res_update129_stencil_20127__m_1518_stencil_20126_11374);
auto res_update129_stencil_20127_0520_stencil_20126_11372 = add(stencil_19_lane_1_pack, res_update129_stencil_20127__m_1518_stencil_20126_11374_pack);

	  hw_uint<32 > stencil_19_lane_2_pack;
  set_at<0, 32, 32>(stencil_19_lane_2_pack, stencil_19_lane_2);
  hw_uint<32 > res_update129_stencil_20127_0520_stencil_20126_11372_pack;
  set_at<0, 32, 32>(res_update129_stencil_20127_0520_stencil_20126_11372_pack, res_update129_stencil_20127_0520_stencil_20126_11372);
auto res_update129_stencil_20127_1522_stencil_20126_11370 = add(stencil_19_lane_2_pack, res_update129_stencil_20127_0520_stencil_20126_11372_pack);

	  hw_uint<32 > stencil_19_lane_3_pack;
  set_at<0, 32, 32>(stencil_19_lane_3_pack, stencil_19_lane_3);
  hw_uint<32 > res_update129_stencil_20127_1522_stencil_20126_11370_pack;
  set_at<0, 32, 32>(res_update129_stencil_20127_1522_stencil_20126_11370_pack, res_update129_stencil_20127_1522_stencil_20126_11370);
auto res_update129_stencil_20127__m_1518_stencil_20126_01368 = add(stencil_19_lane_3_pack, res_update129_stencil_20127_1522_stencil_20126_11370_pack);

	  hw_uint<32 > stencil_19_lane_4_pack;
  set_at<0, 32, 32>(stencil_19_lane_4_pack, stencil_19_lane_4);
  hw_uint<32 > res_update129_stencil_20127__m_1518_stencil_20126_01368_pack;
  set_at<0, 32, 32>(res_update129_stencil_20127__m_1518_stencil_20126_01368_pack, res_update129_stencil_20127__m_1518_stencil_20126_01368);
auto res_update129_stencil_20127_0520_stencil_20126_01366 = add(stencil_19_lane_4_pack, res_update129_stencil_20127__m_1518_stencil_20126_01368_pack);

	  hw_uint<32 > stencil_19_lane_5_pack;
  set_at<0, 32, 32>(stencil_19_lane_5_pack, stencil_19_lane_5);
  hw_uint<32 > res_update129_stencil_20127_0520_stencil_20126_01366_pack;
  set_at<0, 32, 32>(res_update129_stencil_20127_0520_stencil_20126_01366_pack, res_update129_stencil_20127_0520_stencil_20126_01366);
auto res_update129_stencil_20127_1522_stencil_20126_01364 = add(stencil_19_lane_5_pack, res_update129_stencil_20127_0520_stencil_20126_01366_pack);

	  hw_uint<32 > stencil_19_lane_6_pack;
  set_at<0, 32, 32>(stencil_19_lane_6_pack, stencil_19_lane_6);
  hw_uint<32 > res_update129_stencil_20127_1522_stencil_20126_01364_pack;
  set_at<0, 32, 32>(res_update129_stencil_20127_1522_stencil_20126_01364_pack, res_update129_stencil_20127_1522_stencil_20126_01364);
auto res_update129_stencil_20127__m_1518_stencil_20126__m_11362 = add(stencil_19_lane_6_pack, res_update129_stencil_20127_1522_stencil_20126_01364_pack);

	  hw_uint<32 > stencil_19_lane_7_pack;
  set_at<0, 32, 32>(stencil_19_lane_7_pack, stencil_19_lane_7);
  hw_uint<32 > res_update129_stencil_20127__m_1518_stencil_20126__m_11362_pack;
  set_at<0, 32, 32>(res_update129_stencil_20127__m_1518_stencil_20126__m_11362_pack, res_update129_stencil_20127__m_1518_stencil_20126__m_11362);
auto res_update129_stencil_20127_0520_stencil_20126__m_11360 = add(stencil_19_lane_7_pack, res_update129_stencil_20127__m_1518_stencil_20126__m_11362_pack);

	  hw_uint<32 > stencil_19_lane_8_pack;
  set_at<0, 32, 32>(stencil_19_lane_8_pack, stencil_19_lane_8);
  hw_uint<32 > res_update129_stencil_20127_0520_stencil_20126__m_11360_pack;
  set_at<0, 32, 32>(res_update129_stencil_20127_0520_stencil_20126__m_11360_pack, res_update129_stencil_20127_0520_stencil_20126__m_11360);
auto res_update129_stencil_20127_1522_stencil_20126__m_11358 = add(stencil_19_lane_8_pack, res_update129_stencil_20127_0520_stencil_20126__m_11360_pack);
  hw_uint<32 > return_value1872;
  set_at<0, 32, 32>(return_value1872, res_update129_stencil_20127_1522_stencil_20126__m_11358);
  return return_value1872;

}

hw_uint<32> stencil_21131_cu1874(hw_uint<32*9>& stencil_20) {
  hw_uint<32> stencil_20_lane_0;
  set_at<0, 32, 32>(stencil_20_lane_0, stencil_20.extract<0, 31>());
  hw_uint<32> stencil_20_lane_1;
  set_at<0, 32, 32>(stencil_20_lane_1, stencil_20.extract<32, 63>());
  hw_uint<32> stencil_20_lane_2;
  set_at<0, 32, 32>(stencil_20_lane_2, stencil_20.extract<64, 95>());
  hw_uint<32> stencil_20_lane_3;
  set_at<0, 32, 32>(stencil_20_lane_3, stencil_20.extract<96, 127>());
  hw_uint<32> stencil_20_lane_4;
  set_at<0, 32, 32>(stencil_20_lane_4, stencil_20.extract<128, 159>());
  hw_uint<32> stencil_20_lane_5;
  set_at<0, 32, 32>(stencil_20_lane_5, stencil_20.extract<160, 191>());
  hw_uint<32> stencil_20_lane_6;
  set_at<0, 32, 32>(stencil_20_lane_6, stencil_20.extract<192, 223>());
  hw_uint<32> stencil_20_lane_7;
  set_at<0, 32, 32>(stencil_20_lane_7, stencil_20.extract<224, 255>());
  hw_uint<32> stencil_20_lane_8;
  set_at<0, 32, 32>(stencil_20_lane_8, stencil_20.extract<256, 287>());

	
auto res_init134 = set_zero_32();

	  hw_uint<32 > stencil_20_lane_0_pack;
  set_at<0, 32, 32>(stencil_20_lane_0_pack, stencil_20_lane_0);
  hw_uint<32 > res_init134_pack;
  set_at<0, 32, 32>(res_init134_pack, res_init134);
auto res_update135_stencil_21133__m_1530_stencil_21132_11338 = add(stencil_20_lane_0_pack, res_init134_pack);

	  hw_uint<32 > stencil_20_lane_1_pack;
  set_at<0, 32, 32>(stencil_20_lane_1_pack, stencil_20_lane_1);
  hw_uint<32 > res_update135_stencil_21133__m_1530_stencil_21132_11338_pack;
  set_at<0, 32, 32>(res_update135_stencil_21133__m_1530_stencil_21132_11338_pack, res_update135_stencil_21133__m_1530_stencil_21132_11338);
auto res_update135_stencil_21133_0532_stencil_21132_11336 = add(stencil_20_lane_1_pack, res_update135_stencil_21133__m_1530_stencil_21132_11338_pack);

	  hw_uint<32 > stencil_20_lane_2_pack;
  set_at<0, 32, 32>(stencil_20_lane_2_pack, stencil_20_lane_2);
  hw_uint<32 > res_update135_stencil_21133_0532_stencil_21132_11336_pack;
  set_at<0, 32, 32>(res_update135_stencil_21133_0532_stencil_21132_11336_pack, res_update135_stencil_21133_0532_stencil_21132_11336);
auto res_update135_stencil_21133_1534_stencil_21132_11334 = add(stencil_20_lane_2_pack, res_update135_stencil_21133_0532_stencil_21132_11336_pack);

	  hw_uint<32 > stencil_20_lane_3_pack;
  set_at<0, 32, 32>(stencil_20_lane_3_pack, stencil_20_lane_3);
  hw_uint<32 > res_update135_stencil_21133_1534_stencil_21132_11334_pack;
  set_at<0, 32, 32>(res_update135_stencil_21133_1534_stencil_21132_11334_pack, res_update135_stencil_21133_1534_stencil_21132_11334);
auto res_update135_stencil_21133__m_1530_stencil_21132_01332 = add(stencil_20_lane_3_pack, res_update135_stencil_21133_1534_stencil_21132_11334_pack);

	  hw_uint<32 > stencil_20_lane_4_pack;
  set_at<0, 32, 32>(stencil_20_lane_4_pack, stencil_20_lane_4);
  hw_uint<32 > res_update135_stencil_21133__m_1530_stencil_21132_01332_pack;
  set_at<0, 32, 32>(res_update135_stencil_21133__m_1530_stencil_21132_01332_pack, res_update135_stencil_21133__m_1530_stencil_21132_01332);
auto res_update135_stencil_21133_0532_stencil_21132_01330 = add(stencil_20_lane_4_pack, res_update135_stencil_21133__m_1530_stencil_21132_01332_pack);

	  hw_uint<32 > stencil_20_lane_5_pack;
  set_at<0, 32, 32>(stencil_20_lane_5_pack, stencil_20_lane_5);
  hw_uint<32 > res_update135_stencil_21133_0532_stencil_21132_01330_pack;
  set_at<0, 32, 32>(res_update135_stencil_21133_0532_stencil_21132_01330_pack, res_update135_stencil_21133_0532_stencil_21132_01330);
auto res_update135_stencil_21133_1534_stencil_21132_01328 = add(stencil_20_lane_5_pack, res_update135_stencil_21133_0532_stencil_21132_01330_pack);

	  hw_uint<32 > stencil_20_lane_6_pack;
  set_at<0, 32, 32>(stencil_20_lane_6_pack, stencil_20_lane_6);
  hw_uint<32 > res_update135_stencil_21133_1534_stencil_21132_01328_pack;
  set_at<0, 32, 32>(res_update135_stencil_21133_1534_stencil_21132_01328_pack, res_update135_stencil_21133_1534_stencil_21132_01328);
auto res_update135_stencil_21133__m_1530_stencil_21132__m_11326 = add(stencil_20_lane_6_pack, res_update135_stencil_21133_1534_stencil_21132_01328_pack);

	  hw_uint<32 > stencil_20_lane_7_pack;
  set_at<0, 32, 32>(stencil_20_lane_7_pack, stencil_20_lane_7);
  hw_uint<32 > res_update135_stencil_21133__m_1530_stencil_21132__m_11326_pack;
  set_at<0, 32, 32>(res_update135_stencil_21133__m_1530_stencil_21132__m_11326_pack, res_update135_stencil_21133__m_1530_stencil_21132__m_11326);
auto res_update135_stencil_21133_0532_stencil_21132__m_11324 = add(stencil_20_lane_7_pack, res_update135_stencil_21133__m_1530_stencil_21132__m_11326_pack);

	  hw_uint<32 > stencil_20_lane_8_pack;
  set_at<0, 32, 32>(stencil_20_lane_8_pack, stencil_20_lane_8);
  hw_uint<32 > res_update135_stencil_21133_0532_stencil_21132__m_11324_pack;
  set_at<0, 32, 32>(res_update135_stencil_21133_0532_stencil_21132__m_11324_pack, res_update135_stencil_21133_0532_stencil_21132__m_11324);
auto res_update135_stencil_21133_1534_stencil_21132__m_11322 = add(stencil_20_lane_8_pack, res_update135_stencil_21133_0532_stencil_21132__m_11324_pack);
  hw_uint<32 > return_value1875;
  set_at<0, 32, 32>(return_value1875, res_update135_stencil_21133_1534_stencil_21132__m_11322);
  return return_value1875;

}

hw_uint<32> stencil_22137_cu1877(hw_uint<32*9>& stencil_21) {
  hw_uint<32> stencil_21_lane_0;
  set_at<0, 32, 32>(stencil_21_lane_0, stencil_21.extract<0, 31>());
  hw_uint<32> stencil_21_lane_1;
  set_at<0, 32, 32>(stencil_21_lane_1, stencil_21.extract<32, 63>());
  hw_uint<32> stencil_21_lane_2;
  set_at<0, 32, 32>(stencil_21_lane_2, stencil_21.extract<64, 95>());
  hw_uint<32> stencil_21_lane_3;
  set_at<0, 32, 32>(stencil_21_lane_3, stencil_21.extract<96, 127>());
  hw_uint<32> stencil_21_lane_4;
  set_at<0, 32, 32>(stencil_21_lane_4, stencil_21.extract<128, 159>());
  hw_uint<32> stencil_21_lane_5;
  set_at<0, 32, 32>(stencil_21_lane_5, stencil_21.extract<160, 191>());
  hw_uint<32> stencil_21_lane_6;
  set_at<0, 32, 32>(stencil_21_lane_6, stencil_21.extract<192, 223>());
  hw_uint<32> stencil_21_lane_7;
  set_at<0, 32, 32>(stencil_21_lane_7, stencil_21.extract<224, 255>());
  hw_uint<32> stencil_21_lane_8;
  set_at<0, 32, 32>(stencil_21_lane_8, stencil_21.extract<256, 287>());

	
auto res_init140 = set_zero_32();

	  hw_uint<32 > stencil_21_lane_0_pack;
  set_at<0, 32, 32>(stencil_21_lane_0_pack, stencil_21_lane_0);
  hw_uint<32 > res_init140_pack;
  set_at<0, 32, 32>(res_init140_pack, res_init140);
auto res_update141_stencil_22139__m_1554_stencil_22138_11266 = add(stencil_21_lane_0_pack, res_init140_pack);

	  hw_uint<32 > stencil_21_lane_1_pack;
  set_at<0, 32, 32>(stencil_21_lane_1_pack, stencil_21_lane_1);
  hw_uint<32 > res_update141_stencil_22139__m_1554_stencil_22138_11266_pack;
  set_at<0, 32, 32>(res_update141_stencil_22139__m_1554_stencil_22138_11266_pack, res_update141_stencil_22139__m_1554_stencil_22138_11266);
auto res_update141_stencil_22139_0556_stencil_22138_11264 = add(stencil_21_lane_1_pack, res_update141_stencil_22139__m_1554_stencil_22138_11266_pack);

	  hw_uint<32 > stencil_21_lane_2_pack;
  set_at<0, 32, 32>(stencil_21_lane_2_pack, stencil_21_lane_2);
  hw_uint<32 > res_update141_stencil_22139_0556_stencil_22138_11264_pack;
  set_at<0, 32, 32>(res_update141_stencil_22139_0556_stencil_22138_11264_pack, res_update141_stencil_22139_0556_stencil_22138_11264);
auto res_update141_stencil_22139_1558_stencil_22138_11262 = add(stencil_21_lane_2_pack, res_update141_stencil_22139_0556_stencil_22138_11264_pack);

	  hw_uint<32 > stencil_21_lane_3_pack;
  set_at<0, 32, 32>(stencil_21_lane_3_pack, stencil_21_lane_3);
  hw_uint<32 > res_update141_stencil_22139_1558_stencil_22138_11262_pack;
  set_at<0, 32, 32>(res_update141_stencil_22139_1558_stencil_22138_11262_pack, res_update141_stencil_22139_1558_stencil_22138_11262);
auto res_update141_stencil_22139__m_1554_stencil_22138_01260 = add(stencil_21_lane_3_pack, res_update141_stencil_22139_1558_stencil_22138_11262_pack);

	  hw_uint<32 > stencil_21_lane_4_pack;
  set_at<0, 32, 32>(stencil_21_lane_4_pack, stencil_21_lane_4);
  hw_uint<32 > res_update141_stencil_22139__m_1554_stencil_22138_01260_pack;
  set_at<0, 32, 32>(res_update141_stencil_22139__m_1554_stencil_22138_01260_pack, res_update141_stencil_22139__m_1554_stencil_22138_01260);
auto res_update141_stencil_22139_0556_stencil_22138_01258 = add(stencil_21_lane_4_pack, res_update141_stencil_22139__m_1554_stencil_22138_01260_pack);

	  hw_uint<32 > stencil_21_lane_5_pack;
  set_at<0, 32, 32>(stencil_21_lane_5_pack, stencil_21_lane_5);
  hw_uint<32 > res_update141_stencil_22139_0556_stencil_22138_01258_pack;
  set_at<0, 32, 32>(res_update141_stencil_22139_0556_stencil_22138_01258_pack, res_update141_stencil_22139_0556_stencil_22138_01258);
auto res_update141_stencil_22139_1558_stencil_22138_01256 = add(stencil_21_lane_5_pack, res_update141_stencil_22139_0556_stencil_22138_01258_pack);

	  hw_uint<32 > stencil_21_lane_6_pack;
  set_at<0, 32, 32>(stencil_21_lane_6_pack, stencil_21_lane_6);
  hw_uint<32 > res_update141_stencil_22139_1558_stencil_22138_01256_pack;
  set_at<0, 32, 32>(res_update141_stencil_22139_1558_stencil_22138_01256_pack, res_update141_stencil_22139_1558_stencil_22138_01256);
auto res_update141_stencil_22139__m_1554_stencil_22138__m_11254 = add(stencil_21_lane_6_pack, res_update141_stencil_22139_1558_stencil_22138_01256_pack);

	  hw_uint<32 > stencil_21_lane_7_pack;
  set_at<0, 32, 32>(stencil_21_lane_7_pack, stencil_21_lane_7);
  hw_uint<32 > res_update141_stencil_22139__m_1554_stencil_22138__m_11254_pack;
  set_at<0, 32, 32>(res_update141_stencil_22139__m_1554_stencil_22138__m_11254_pack, res_update141_stencil_22139__m_1554_stencil_22138__m_11254);
auto res_update141_stencil_22139_0556_stencil_22138__m_11252 = add(stencil_21_lane_7_pack, res_update141_stencil_22139__m_1554_stencil_22138__m_11254_pack);

	  hw_uint<32 > stencil_21_lane_8_pack;
  set_at<0, 32, 32>(stencil_21_lane_8_pack, stencil_21_lane_8);
  hw_uint<32 > res_update141_stencil_22139_0556_stencil_22138__m_11252_pack;
  set_at<0, 32, 32>(res_update141_stencil_22139_0556_stencil_22138__m_11252_pack, res_update141_stencil_22139_0556_stencil_22138__m_11252);
auto res_update141_stencil_22139_1558_stencil_22138__m_11250 = add(stencil_21_lane_8_pack, res_update141_stencil_22139_0556_stencil_22138__m_11252_pack);
  hw_uint<32 > return_value1878;
  set_at<0, 32, 32>(return_value1878, res_update141_stencil_22139_1558_stencil_22138__m_11250);
  return return_value1878;

}

hw_uint<32> stencil_23143_cu1880(hw_uint<32*9>& stencil_22) {
  hw_uint<32> stencil_22_lane_0;
  set_at<0, 32, 32>(stencil_22_lane_0, stencil_22.extract<0, 31>());
  hw_uint<32> stencil_22_lane_1;
  set_at<0, 32, 32>(stencil_22_lane_1, stencil_22.extract<32, 63>());
  hw_uint<32> stencil_22_lane_2;
  set_at<0, 32, 32>(stencil_22_lane_2, stencil_22.extract<64, 95>());
  hw_uint<32> stencil_22_lane_3;
  set_at<0, 32, 32>(stencil_22_lane_3, stencil_22.extract<96, 127>());
  hw_uint<32> stencil_22_lane_4;
  set_at<0, 32, 32>(stencil_22_lane_4, stencil_22.extract<128, 159>());
  hw_uint<32> stencil_22_lane_5;
  set_at<0, 32, 32>(stencil_22_lane_5, stencil_22.extract<160, 191>());
  hw_uint<32> stencil_22_lane_6;
  set_at<0, 32, 32>(stencil_22_lane_6, stencil_22.extract<192, 223>());
  hw_uint<32> stencil_22_lane_7;
  set_at<0, 32, 32>(stencil_22_lane_7, stencil_22.extract<224, 255>());
  hw_uint<32> stencil_22_lane_8;
  set_at<0, 32, 32>(stencil_22_lane_8, stencil_22.extract<256, 287>());

	
auto res_init146 = set_zero_32();

	  hw_uint<32 > stencil_22_lane_0_pack;
  set_at<0, 32, 32>(stencil_22_lane_0_pack, stencil_22_lane_0);
  hw_uint<32 > res_init146_pack;
  set_at<0, 32, 32>(res_init146_pack, res_init146);
auto res_update147_stencil_23145__m_1566_stencil_23144_11230 = add(stencil_22_lane_0_pack, res_init146_pack);

	  hw_uint<32 > stencil_22_lane_1_pack;
  set_at<0, 32, 32>(stencil_22_lane_1_pack, stencil_22_lane_1);
  hw_uint<32 > res_update147_stencil_23145__m_1566_stencil_23144_11230_pack;
  set_at<0, 32, 32>(res_update147_stencil_23145__m_1566_stencil_23144_11230_pack, res_update147_stencil_23145__m_1566_stencil_23144_11230);
auto res_update147_stencil_23145_0568_stencil_23144_11228 = add(stencil_22_lane_1_pack, res_update147_stencil_23145__m_1566_stencil_23144_11230_pack);

	  hw_uint<32 > stencil_22_lane_2_pack;
  set_at<0, 32, 32>(stencil_22_lane_2_pack, stencil_22_lane_2);
  hw_uint<32 > res_update147_stencil_23145_0568_stencil_23144_11228_pack;
  set_at<0, 32, 32>(res_update147_stencil_23145_0568_stencil_23144_11228_pack, res_update147_stencil_23145_0568_stencil_23144_11228);
auto res_update147_stencil_23145_1570_stencil_23144_11226 = add(stencil_22_lane_2_pack, res_update147_stencil_23145_0568_stencil_23144_11228_pack);

	  hw_uint<32 > stencil_22_lane_3_pack;
  set_at<0, 32, 32>(stencil_22_lane_3_pack, stencil_22_lane_3);
  hw_uint<32 > res_update147_stencil_23145_1570_stencil_23144_11226_pack;
  set_at<0, 32, 32>(res_update147_stencil_23145_1570_stencil_23144_11226_pack, res_update147_stencil_23145_1570_stencil_23144_11226);
auto res_update147_stencil_23145__m_1566_stencil_23144_01224 = add(stencil_22_lane_3_pack, res_update147_stencil_23145_1570_stencil_23144_11226_pack);

	  hw_uint<32 > stencil_22_lane_4_pack;
  set_at<0, 32, 32>(stencil_22_lane_4_pack, stencil_22_lane_4);
  hw_uint<32 > res_update147_stencil_23145__m_1566_stencil_23144_01224_pack;
  set_at<0, 32, 32>(res_update147_stencil_23145__m_1566_stencil_23144_01224_pack, res_update147_stencil_23145__m_1566_stencil_23144_01224);
auto res_update147_stencil_23145_0568_stencil_23144_01222 = add(stencil_22_lane_4_pack, res_update147_stencil_23145__m_1566_stencil_23144_01224_pack);

	  hw_uint<32 > stencil_22_lane_5_pack;
  set_at<0, 32, 32>(stencil_22_lane_5_pack, stencil_22_lane_5);
  hw_uint<32 > res_update147_stencil_23145_0568_stencil_23144_01222_pack;
  set_at<0, 32, 32>(res_update147_stencil_23145_0568_stencil_23144_01222_pack, res_update147_stencil_23145_0568_stencil_23144_01222);
auto res_update147_stencil_23145_1570_stencil_23144_01220 = add(stencil_22_lane_5_pack, res_update147_stencil_23145_0568_stencil_23144_01222_pack);

	  hw_uint<32 > stencil_22_lane_6_pack;
  set_at<0, 32, 32>(stencil_22_lane_6_pack, stencil_22_lane_6);
  hw_uint<32 > res_update147_stencil_23145_1570_stencil_23144_01220_pack;
  set_at<0, 32, 32>(res_update147_stencil_23145_1570_stencil_23144_01220_pack, res_update147_stencil_23145_1570_stencil_23144_01220);
auto res_update147_stencil_23145__m_1566_stencil_23144__m_11218 = add(stencil_22_lane_6_pack, res_update147_stencil_23145_1570_stencil_23144_01220_pack);

	  hw_uint<32 > stencil_22_lane_7_pack;
  set_at<0, 32, 32>(stencil_22_lane_7_pack, stencil_22_lane_7);
  hw_uint<32 > res_update147_stencil_23145__m_1566_stencil_23144__m_11218_pack;
  set_at<0, 32, 32>(res_update147_stencil_23145__m_1566_stencil_23144__m_11218_pack, res_update147_stencil_23145__m_1566_stencil_23144__m_11218);
auto res_update147_stencil_23145_0568_stencil_23144__m_11216 = add(stencil_22_lane_7_pack, res_update147_stencil_23145__m_1566_stencil_23144__m_11218_pack);

	  hw_uint<32 > stencil_22_lane_8_pack;
  set_at<0, 32, 32>(stencil_22_lane_8_pack, stencil_22_lane_8);
  hw_uint<32 > res_update147_stencil_23145_0568_stencil_23144__m_11216_pack;
  set_at<0, 32, 32>(res_update147_stencil_23145_0568_stencil_23144__m_11216_pack, res_update147_stencil_23145_0568_stencil_23144__m_11216);
auto res_update147_stencil_23145_1570_stencil_23144__m_11214 = add(stencil_22_lane_8_pack, res_update147_stencil_23145_0568_stencil_23144__m_11216_pack);
  hw_uint<32 > return_value1881;
  set_at<0, 32, 32>(return_value1881, res_update147_stencil_23145_1570_stencil_23144__m_11214);
  return return_value1881;

}

hw_uint<32> stencil_24149_cu1883(hw_uint<32*9>& stencil_23) {
  hw_uint<32> stencil_23_lane_0;
  set_at<0, 32, 32>(stencil_23_lane_0, stencil_23.extract<0, 31>());
  hw_uint<32> stencil_23_lane_1;
  set_at<0, 32, 32>(stencil_23_lane_1, stencil_23.extract<32, 63>());
  hw_uint<32> stencil_23_lane_2;
  set_at<0, 32, 32>(stencil_23_lane_2, stencil_23.extract<64, 95>());
  hw_uint<32> stencil_23_lane_3;
  set_at<0, 32, 32>(stencil_23_lane_3, stencil_23.extract<96, 127>());
  hw_uint<32> stencil_23_lane_4;
  set_at<0, 32, 32>(stencil_23_lane_4, stencil_23.extract<128, 159>());
  hw_uint<32> stencil_23_lane_5;
  set_at<0, 32, 32>(stencil_23_lane_5, stencil_23.extract<160, 191>());
  hw_uint<32> stencil_23_lane_6;
  set_at<0, 32, 32>(stencil_23_lane_6, stencil_23.extract<192, 223>());
  hw_uint<32> stencil_23_lane_7;
  set_at<0, 32, 32>(stencil_23_lane_7, stencil_23.extract<224, 255>());
  hw_uint<32> stencil_23_lane_8;
  set_at<0, 32, 32>(stencil_23_lane_8, stencil_23.extract<256, 287>());

	
auto res_init152 = set_zero_32();

	  hw_uint<32 > stencil_23_lane_0_pack;
  set_at<0, 32, 32>(stencil_23_lane_0_pack, stencil_23_lane_0);
  hw_uint<32 > res_init152_pack;
  set_at<0, 32, 32>(res_init152_pack, res_init152);
auto res_update153_stencil_24151__m_1578_stencil_24150_11194 = add(stencil_23_lane_0_pack, res_init152_pack);

	  hw_uint<32 > stencil_23_lane_1_pack;
  set_at<0, 32, 32>(stencil_23_lane_1_pack, stencil_23_lane_1);
  hw_uint<32 > res_update153_stencil_24151__m_1578_stencil_24150_11194_pack;
  set_at<0, 32, 32>(res_update153_stencil_24151__m_1578_stencil_24150_11194_pack, res_update153_stencil_24151__m_1578_stencil_24150_11194);
auto res_update153_stencil_24151_0580_stencil_24150_11192 = add(stencil_23_lane_1_pack, res_update153_stencil_24151__m_1578_stencil_24150_11194_pack);

	  hw_uint<32 > stencil_23_lane_2_pack;
  set_at<0, 32, 32>(stencil_23_lane_2_pack, stencil_23_lane_2);
  hw_uint<32 > res_update153_stencil_24151_0580_stencil_24150_11192_pack;
  set_at<0, 32, 32>(res_update153_stencil_24151_0580_stencil_24150_11192_pack, res_update153_stencil_24151_0580_stencil_24150_11192);
auto res_update153_stencil_24151_1582_stencil_24150_11190 = add(stencil_23_lane_2_pack, res_update153_stencil_24151_0580_stencil_24150_11192_pack);

	  hw_uint<32 > stencil_23_lane_3_pack;
  set_at<0, 32, 32>(stencil_23_lane_3_pack, stencil_23_lane_3);
  hw_uint<32 > res_update153_stencil_24151_1582_stencil_24150_11190_pack;
  set_at<0, 32, 32>(res_update153_stencil_24151_1582_stencil_24150_11190_pack, res_update153_stencil_24151_1582_stencil_24150_11190);
auto res_update153_stencil_24151__m_1578_stencil_24150_01188 = add(stencil_23_lane_3_pack, res_update153_stencil_24151_1582_stencil_24150_11190_pack);

	  hw_uint<32 > stencil_23_lane_4_pack;
  set_at<0, 32, 32>(stencil_23_lane_4_pack, stencil_23_lane_4);
  hw_uint<32 > res_update153_stencil_24151__m_1578_stencil_24150_01188_pack;
  set_at<0, 32, 32>(res_update153_stencil_24151__m_1578_stencil_24150_01188_pack, res_update153_stencil_24151__m_1578_stencil_24150_01188);
auto res_update153_stencil_24151_0580_stencil_24150_01186 = add(stencil_23_lane_4_pack, res_update153_stencil_24151__m_1578_stencil_24150_01188_pack);

	  hw_uint<32 > stencil_23_lane_5_pack;
  set_at<0, 32, 32>(stencil_23_lane_5_pack, stencil_23_lane_5);
  hw_uint<32 > res_update153_stencil_24151_0580_stencil_24150_01186_pack;
  set_at<0, 32, 32>(res_update153_stencil_24151_0580_stencil_24150_01186_pack, res_update153_stencil_24151_0580_stencil_24150_01186);
auto res_update153_stencil_24151_1582_stencil_24150_01184 = add(stencil_23_lane_5_pack, res_update153_stencil_24151_0580_stencil_24150_01186_pack);

	  hw_uint<32 > stencil_23_lane_6_pack;
  set_at<0, 32, 32>(stencil_23_lane_6_pack, stencil_23_lane_6);
  hw_uint<32 > res_update153_stencil_24151_1582_stencil_24150_01184_pack;
  set_at<0, 32, 32>(res_update153_stencil_24151_1582_stencil_24150_01184_pack, res_update153_stencil_24151_1582_stencil_24150_01184);
auto res_update153_stencil_24151__m_1578_stencil_24150__m_11182 = add(stencil_23_lane_6_pack, res_update153_stencil_24151_1582_stencil_24150_01184_pack);

	  hw_uint<32 > stencil_23_lane_7_pack;
  set_at<0, 32, 32>(stencil_23_lane_7_pack, stencil_23_lane_7);
  hw_uint<32 > res_update153_stencil_24151__m_1578_stencil_24150__m_11182_pack;
  set_at<0, 32, 32>(res_update153_stencil_24151__m_1578_stencil_24150__m_11182_pack, res_update153_stencil_24151__m_1578_stencil_24150__m_11182);
auto res_update153_stencil_24151_0580_stencil_24150__m_11180 = add(stencil_23_lane_7_pack, res_update153_stencil_24151__m_1578_stencil_24150__m_11182_pack);

	  hw_uint<32 > stencil_23_lane_8_pack;
  set_at<0, 32, 32>(stencil_23_lane_8_pack, stencil_23_lane_8);
  hw_uint<32 > res_update153_stencil_24151_0580_stencil_24150__m_11180_pack;
  set_at<0, 32, 32>(res_update153_stencil_24151_0580_stencil_24150__m_11180_pack, res_update153_stencil_24151_0580_stencil_24150__m_11180);
auto res_update153_stencil_24151_1582_stencil_24150__m_11178 = add(stencil_23_lane_8_pack, res_update153_stencil_24151_0580_stencil_24150__m_11180_pack);
  hw_uint<32 > return_value1884;
  set_at<0, 32, 32>(return_value1884, res_update153_stencil_24151_1582_stencil_24150__m_11178);
  return return_value1884;

}

hw_uint<32> stencil_25155_cu1886(hw_uint<32*9>& stencil_24) {
  hw_uint<32> stencil_24_lane_0;
  set_at<0, 32, 32>(stencil_24_lane_0, stencil_24.extract<0, 31>());
  hw_uint<32> stencil_24_lane_1;
  set_at<0, 32, 32>(stencil_24_lane_1, stencil_24.extract<32, 63>());
  hw_uint<32> stencil_24_lane_2;
  set_at<0, 32, 32>(stencil_24_lane_2, stencil_24.extract<64, 95>());
  hw_uint<32> stencil_24_lane_3;
  set_at<0, 32, 32>(stencil_24_lane_3, stencil_24.extract<96, 127>());
  hw_uint<32> stencil_24_lane_4;
  set_at<0, 32, 32>(stencil_24_lane_4, stencil_24.extract<128, 159>());
  hw_uint<32> stencil_24_lane_5;
  set_at<0, 32, 32>(stencil_24_lane_5, stencil_24.extract<160, 191>());
  hw_uint<32> stencil_24_lane_6;
  set_at<0, 32, 32>(stencil_24_lane_6, stencil_24.extract<192, 223>());
  hw_uint<32> stencil_24_lane_7;
  set_at<0, 32, 32>(stencil_24_lane_7, stencil_24.extract<224, 255>());
  hw_uint<32> stencil_24_lane_8;
  set_at<0, 32, 32>(stencil_24_lane_8, stencil_24.extract<256, 287>());

	
auto res_init158 = set_zero_32();

	  hw_uint<32 > stencil_24_lane_0_pack;
  set_at<0, 32, 32>(stencil_24_lane_0_pack, stencil_24_lane_0);
  hw_uint<32 > res_init158_pack;
  set_at<0, 32, 32>(res_init158_pack, res_init158);
auto res_update159_stencil_25157__m_1590_stencil_25156_11158 = add(stencil_24_lane_0_pack, res_init158_pack);

	  hw_uint<32 > stencil_24_lane_1_pack;
  set_at<0, 32, 32>(stencil_24_lane_1_pack, stencil_24_lane_1);
  hw_uint<32 > res_update159_stencil_25157__m_1590_stencil_25156_11158_pack;
  set_at<0, 32, 32>(res_update159_stencil_25157__m_1590_stencil_25156_11158_pack, res_update159_stencil_25157__m_1590_stencil_25156_11158);
auto res_update159_stencil_25157_0592_stencil_25156_11156 = add(stencil_24_lane_1_pack, res_update159_stencil_25157__m_1590_stencil_25156_11158_pack);

	  hw_uint<32 > stencil_24_lane_2_pack;
  set_at<0, 32, 32>(stencil_24_lane_2_pack, stencil_24_lane_2);
  hw_uint<32 > res_update159_stencil_25157_0592_stencil_25156_11156_pack;
  set_at<0, 32, 32>(res_update159_stencil_25157_0592_stencil_25156_11156_pack, res_update159_stencil_25157_0592_stencil_25156_11156);
auto res_update159_stencil_25157_1594_stencil_25156_11154 = add(stencil_24_lane_2_pack, res_update159_stencil_25157_0592_stencil_25156_11156_pack);

	  hw_uint<32 > stencil_24_lane_3_pack;
  set_at<0, 32, 32>(stencil_24_lane_3_pack, stencil_24_lane_3);
  hw_uint<32 > res_update159_stencil_25157_1594_stencil_25156_11154_pack;
  set_at<0, 32, 32>(res_update159_stencil_25157_1594_stencil_25156_11154_pack, res_update159_stencil_25157_1594_stencil_25156_11154);
auto res_update159_stencil_25157__m_1590_stencil_25156_01152 = add(stencil_24_lane_3_pack, res_update159_stencil_25157_1594_stencil_25156_11154_pack);

	  hw_uint<32 > stencil_24_lane_4_pack;
  set_at<0, 32, 32>(stencil_24_lane_4_pack, stencil_24_lane_4);
  hw_uint<32 > res_update159_stencil_25157__m_1590_stencil_25156_01152_pack;
  set_at<0, 32, 32>(res_update159_stencil_25157__m_1590_stencil_25156_01152_pack, res_update159_stencil_25157__m_1590_stencil_25156_01152);
auto res_update159_stencil_25157_0592_stencil_25156_01150 = add(stencil_24_lane_4_pack, res_update159_stencil_25157__m_1590_stencil_25156_01152_pack);

	  hw_uint<32 > stencil_24_lane_5_pack;
  set_at<0, 32, 32>(stencil_24_lane_5_pack, stencil_24_lane_5);
  hw_uint<32 > res_update159_stencil_25157_0592_stencil_25156_01150_pack;
  set_at<0, 32, 32>(res_update159_stencil_25157_0592_stencil_25156_01150_pack, res_update159_stencil_25157_0592_stencil_25156_01150);
auto res_update159_stencil_25157_1594_stencil_25156_01148 = add(stencil_24_lane_5_pack, res_update159_stencil_25157_0592_stencil_25156_01150_pack);

	  hw_uint<32 > stencil_24_lane_6_pack;
  set_at<0, 32, 32>(stencil_24_lane_6_pack, stencil_24_lane_6);
  hw_uint<32 > res_update159_stencil_25157_1594_stencil_25156_01148_pack;
  set_at<0, 32, 32>(res_update159_stencil_25157_1594_stencil_25156_01148_pack, res_update159_stencil_25157_1594_stencil_25156_01148);
auto res_update159_stencil_25157__m_1590_stencil_25156__m_11146 = add(stencil_24_lane_6_pack, res_update159_stencil_25157_1594_stencil_25156_01148_pack);

	  hw_uint<32 > stencil_24_lane_7_pack;
  set_at<0, 32, 32>(stencil_24_lane_7_pack, stencil_24_lane_7);
  hw_uint<32 > res_update159_stencil_25157__m_1590_stencil_25156__m_11146_pack;
  set_at<0, 32, 32>(res_update159_stencil_25157__m_1590_stencil_25156__m_11146_pack, res_update159_stencil_25157__m_1590_stencil_25156__m_11146);
auto res_update159_stencil_25157_0592_stencil_25156__m_11144 = add(stencil_24_lane_7_pack, res_update159_stencil_25157__m_1590_stencil_25156__m_11146_pack);

	  hw_uint<32 > stencil_24_lane_8_pack;
  set_at<0, 32, 32>(stencil_24_lane_8_pack, stencil_24_lane_8);
  hw_uint<32 > res_update159_stencil_25157_0592_stencil_25156__m_11144_pack;
  set_at<0, 32, 32>(res_update159_stencil_25157_0592_stencil_25156__m_11144_pack, res_update159_stencil_25157_0592_stencil_25156__m_11144);
auto res_update159_stencil_25157_1594_stencil_25156__m_11142 = add(stencil_24_lane_8_pack, res_update159_stencil_25157_0592_stencil_25156__m_11144_pack);
  hw_uint<32 > return_value1887;
  set_at<0, 32, 32>(return_value1887, res_update159_stencil_25157_1594_stencil_25156__m_11142);
  return return_value1887;

}

hw_uint<32> stencil_26161_cu1889(hw_uint<32*9>& stencil_25) {
  hw_uint<32> stencil_25_lane_0;
  set_at<0, 32, 32>(stencil_25_lane_0, stencil_25.extract<0, 31>());
  hw_uint<32> stencil_25_lane_1;
  set_at<0, 32, 32>(stencil_25_lane_1, stencil_25.extract<32, 63>());
  hw_uint<32> stencil_25_lane_2;
  set_at<0, 32, 32>(stencil_25_lane_2, stencil_25.extract<64, 95>());
  hw_uint<32> stencil_25_lane_3;
  set_at<0, 32, 32>(stencil_25_lane_3, stencil_25.extract<96, 127>());
  hw_uint<32> stencil_25_lane_4;
  set_at<0, 32, 32>(stencil_25_lane_4, stencil_25.extract<128, 159>());
  hw_uint<32> stencil_25_lane_5;
  set_at<0, 32, 32>(stencil_25_lane_5, stencil_25.extract<160, 191>());
  hw_uint<32> stencil_25_lane_6;
  set_at<0, 32, 32>(stencil_25_lane_6, stencil_25.extract<192, 223>());
  hw_uint<32> stencil_25_lane_7;
  set_at<0, 32, 32>(stencil_25_lane_7, stencil_25.extract<224, 255>());
  hw_uint<32> stencil_25_lane_8;
  set_at<0, 32, 32>(stencil_25_lane_8, stencil_25.extract<256, 287>());

	
auto res_init164 = set_zero_32();

	  hw_uint<32 > stencil_25_lane_0_pack;
  set_at<0, 32, 32>(stencil_25_lane_0_pack, stencil_25_lane_0);
  hw_uint<32 > res_init164_pack;
  set_at<0, 32, 32>(res_init164_pack, res_init164);
auto res_update165_stencil_26163__m_1602_stencil_26162_11122 = add(stencil_25_lane_0_pack, res_init164_pack);

	  hw_uint<32 > stencil_25_lane_1_pack;
  set_at<0, 32, 32>(stencil_25_lane_1_pack, stencil_25_lane_1);
  hw_uint<32 > res_update165_stencil_26163__m_1602_stencil_26162_11122_pack;
  set_at<0, 32, 32>(res_update165_stencil_26163__m_1602_stencil_26162_11122_pack, res_update165_stencil_26163__m_1602_stencil_26162_11122);
auto res_update165_stencil_26163_0604_stencil_26162_11120 = add(stencil_25_lane_1_pack, res_update165_stencil_26163__m_1602_stencil_26162_11122_pack);

	  hw_uint<32 > stencil_25_lane_2_pack;
  set_at<0, 32, 32>(stencil_25_lane_2_pack, stencil_25_lane_2);
  hw_uint<32 > res_update165_stencil_26163_0604_stencil_26162_11120_pack;
  set_at<0, 32, 32>(res_update165_stencil_26163_0604_stencil_26162_11120_pack, res_update165_stencil_26163_0604_stencil_26162_11120);
auto res_update165_stencil_26163_1606_stencil_26162_11118 = add(stencil_25_lane_2_pack, res_update165_stencil_26163_0604_stencil_26162_11120_pack);

	  hw_uint<32 > stencil_25_lane_3_pack;
  set_at<0, 32, 32>(stencil_25_lane_3_pack, stencil_25_lane_3);
  hw_uint<32 > res_update165_stencil_26163_1606_stencil_26162_11118_pack;
  set_at<0, 32, 32>(res_update165_stencil_26163_1606_stencil_26162_11118_pack, res_update165_stencil_26163_1606_stencil_26162_11118);
auto res_update165_stencil_26163__m_1602_stencil_26162_01116 = add(stencil_25_lane_3_pack, res_update165_stencil_26163_1606_stencil_26162_11118_pack);

	  hw_uint<32 > stencil_25_lane_4_pack;
  set_at<0, 32, 32>(stencil_25_lane_4_pack, stencil_25_lane_4);
  hw_uint<32 > res_update165_stencil_26163__m_1602_stencil_26162_01116_pack;
  set_at<0, 32, 32>(res_update165_stencil_26163__m_1602_stencil_26162_01116_pack, res_update165_stencil_26163__m_1602_stencil_26162_01116);
auto res_update165_stencil_26163_0604_stencil_26162_01114 = add(stencil_25_lane_4_pack, res_update165_stencil_26163__m_1602_stencil_26162_01116_pack);

	  hw_uint<32 > stencil_25_lane_5_pack;
  set_at<0, 32, 32>(stencil_25_lane_5_pack, stencil_25_lane_5);
  hw_uint<32 > res_update165_stencil_26163_0604_stencil_26162_01114_pack;
  set_at<0, 32, 32>(res_update165_stencil_26163_0604_stencil_26162_01114_pack, res_update165_stencil_26163_0604_stencil_26162_01114);
auto res_update165_stencil_26163_1606_stencil_26162_01112 = add(stencil_25_lane_5_pack, res_update165_stencil_26163_0604_stencil_26162_01114_pack);

	  hw_uint<32 > stencil_25_lane_6_pack;
  set_at<0, 32, 32>(stencil_25_lane_6_pack, stencil_25_lane_6);
  hw_uint<32 > res_update165_stencil_26163_1606_stencil_26162_01112_pack;
  set_at<0, 32, 32>(res_update165_stencil_26163_1606_stencil_26162_01112_pack, res_update165_stencil_26163_1606_stencil_26162_01112);
auto res_update165_stencil_26163__m_1602_stencil_26162__m_11110 = add(stencil_25_lane_6_pack, res_update165_stencil_26163_1606_stencil_26162_01112_pack);

	  hw_uint<32 > stencil_25_lane_7_pack;
  set_at<0, 32, 32>(stencil_25_lane_7_pack, stencil_25_lane_7);
  hw_uint<32 > res_update165_stencil_26163__m_1602_stencil_26162__m_11110_pack;
  set_at<0, 32, 32>(res_update165_stencil_26163__m_1602_stencil_26162__m_11110_pack, res_update165_stencil_26163__m_1602_stencil_26162__m_11110);
auto res_update165_stencil_26163_0604_stencil_26162__m_11108 = add(stencil_25_lane_7_pack, res_update165_stencil_26163__m_1602_stencil_26162__m_11110_pack);

	  hw_uint<32 > stencil_25_lane_8_pack;
  set_at<0, 32, 32>(stencil_25_lane_8_pack, stencil_25_lane_8);
  hw_uint<32 > res_update165_stencil_26163_0604_stencil_26162__m_11108_pack;
  set_at<0, 32, 32>(res_update165_stencil_26163_0604_stencil_26162__m_11108_pack, res_update165_stencil_26163_0604_stencil_26162__m_11108);
auto res_update165_stencil_26163_1606_stencil_26162__m_11106 = add(stencil_25_lane_8_pack, res_update165_stencil_26163_0604_stencil_26162__m_11108_pack);
  hw_uint<32 > return_value1890;
  set_at<0, 32, 32>(return_value1890, res_update165_stencil_26163_1606_stencil_26162__m_11106);
  return return_value1890;

}

hw_uint<32> stencil_27167_cu1892(hw_uint<32*9>& stencil_26) {
  hw_uint<32> stencil_26_lane_0;
  set_at<0, 32, 32>(stencil_26_lane_0, stencil_26.extract<0, 31>());
  hw_uint<32> stencil_26_lane_1;
  set_at<0, 32, 32>(stencil_26_lane_1, stencil_26.extract<32, 63>());
  hw_uint<32> stencil_26_lane_2;
  set_at<0, 32, 32>(stencil_26_lane_2, stencil_26.extract<64, 95>());
  hw_uint<32> stencil_26_lane_3;
  set_at<0, 32, 32>(stencil_26_lane_3, stencil_26.extract<96, 127>());
  hw_uint<32> stencil_26_lane_4;
  set_at<0, 32, 32>(stencil_26_lane_4, stencil_26.extract<128, 159>());
  hw_uint<32> stencil_26_lane_5;
  set_at<0, 32, 32>(stencil_26_lane_5, stencil_26.extract<160, 191>());
  hw_uint<32> stencil_26_lane_6;
  set_at<0, 32, 32>(stencil_26_lane_6, stencil_26.extract<192, 223>());
  hw_uint<32> stencil_26_lane_7;
  set_at<0, 32, 32>(stencil_26_lane_7, stencil_26.extract<224, 255>());
  hw_uint<32> stencil_26_lane_8;
  set_at<0, 32, 32>(stencil_26_lane_8, stencil_26.extract<256, 287>());

	
auto res_init170 = set_zero_32();

	  hw_uint<32 > stencil_26_lane_0_pack;
  set_at<0, 32, 32>(stencil_26_lane_0_pack, stencil_26_lane_0);
  hw_uint<32 > res_init170_pack;
  set_at<0, 32, 32>(res_init170_pack, res_init170);
auto res_update171_stencil_27169__m_1614_stencil_27168_11086 = add(stencil_26_lane_0_pack, res_init170_pack);

	  hw_uint<32 > stencil_26_lane_1_pack;
  set_at<0, 32, 32>(stencil_26_lane_1_pack, stencil_26_lane_1);
  hw_uint<32 > res_update171_stencil_27169__m_1614_stencil_27168_11086_pack;
  set_at<0, 32, 32>(res_update171_stencil_27169__m_1614_stencil_27168_11086_pack, res_update171_stencil_27169__m_1614_stencil_27168_11086);
auto res_update171_stencil_27169_0616_stencil_27168_11084 = add(stencil_26_lane_1_pack, res_update171_stencil_27169__m_1614_stencil_27168_11086_pack);

	  hw_uint<32 > stencil_26_lane_2_pack;
  set_at<0, 32, 32>(stencil_26_lane_2_pack, stencil_26_lane_2);
  hw_uint<32 > res_update171_stencil_27169_0616_stencil_27168_11084_pack;
  set_at<0, 32, 32>(res_update171_stencil_27169_0616_stencil_27168_11084_pack, res_update171_stencil_27169_0616_stencil_27168_11084);
auto res_update171_stencil_27169_1618_stencil_27168_11082 = add(stencil_26_lane_2_pack, res_update171_stencil_27169_0616_stencil_27168_11084_pack);

	  hw_uint<32 > stencil_26_lane_3_pack;
  set_at<0, 32, 32>(stencil_26_lane_3_pack, stencil_26_lane_3);
  hw_uint<32 > res_update171_stencil_27169_1618_stencil_27168_11082_pack;
  set_at<0, 32, 32>(res_update171_stencil_27169_1618_stencil_27168_11082_pack, res_update171_stencil_27169_1618_stencil_27168_11082);
auto res_update171_stencil_27169__m_1614_stencil_27168_01080 = add(stencil_26_lane_3_pack, res_update171_stencil_27169_1618_stencil_27168_11082_pack);

	  hw_uint<32 > stencil_26_lane_4_pack;
  set_at<0, 32, 32>(stencil_26_lane_4_pack, stencil_26_lane_4);
  hw_uint<32 > res_update171_stencil_27169__m_1614_stencil_27168_01080_pack;
  set_at<0, 32, 32>(res_update171_stencil_27169__m_1614_stencil_27168_01080_pack, res_update171_stencil_27169__m_1614_stencil_27168_01080);
auto res_update171_stencil_27169_0616_stencil_27168_01078 = add(stencil_26_lane_4_pack, res_update171_stencil_27169__m_1614_stencil_27168_01080_pack);

	  hw_uint<32 > stencil_26_lane_5_pack;
  set_at<0, 32, 32>(stencil_26_lane_5_pack, stencil_26_lane_5);
  hw_uint<32 > res_update171_stencil_27169_0616_stencil_27168_01078_pack;
  set_at<0, 32, 32>(res_update171_stencil_27169_0616_stencil_27168_01078_pack, res_update171_stencil_27169_0616_stencil_27168_01078);
auto res_update171_stencil_27169_1618_stencil_27168_01076 = add(stencil_26_lane_5_pack, res_update171_stencil_27169_0616_stencil_27168_01078_pack);

	  hw_uint<32 > stencil_26_lane_6_pack;
  set_at<0, 32, 32>(stencil_26_lane_6_pack, stencil_26_lane_6);
  hw_uint<32 > res_update171_stencil_27169_1618_stencil_27168_01076_pack;
  set_at<0, 32, 32>(res_update171_stencil_27169_1618_stencil_27168_01076_pack, res_update171_stencil_27169_1618_stencil_27168_01076);
auto res_update171_stencil_27169__m_1614_stencil_27168__m_11074 = add(stencil_26_lane_6_pack, res_update171_stencil_27169_1618_stencil_27168_01076_pack);

	  hw_uint<32 > stencil_26_lane_7_pack;
  set_at<0, 32, 32>(stencil_26_lane_7_pack, stencil_26_lane_7);
  hw_uint<32 > res_update171_stencil_27169__m_1614_stencil_27168__m_11074_pack;
  set_at<0, 32, 32>(res_update171_stencil_27169__m_1614_stencil_27168__m_11074_pack, res_update171_stencil_27169__m_1614_stencil_27168__m_11074);
auto res_update171_stencil_27169_0616_stencil_27168__m_11072 = add(stencil_26_lane_7_pack, res_update171_stencil_27169__m_1614_stencil_27168__m_11074_pack);

	  hw_uint<32 > stencil_26_lane_8_pack;
  set_at<0, 32, 32>(stencil_26_lane_8_pack, stencil_26_lane_8);
  hw_uint<32 > res_update171_stencil_27169_0616_stencil_27168__m_11072_pack;
  set_at<0, 32, 32>(res_update171_stencil_27169_0616_stencil_27168__m_11072_pack, res_update171_stencil_27169_0616_stencil_27168__m_11072);
auto res_update171_stencil_27169_1618_stencil_27168__m_11070 = add(stencil_26_lane_8_pack, res_update171_stencil_27169_0616_stencil_27168__m_11072_pack);
  hw_uint<32 > return_value1893;
  set_at<0, 32, 32>(return_value1893, res_update171_stencil_27169_1618_stencil_27168__m_11070);
  return return_value1893;

}

hw_uint<32> stencil_28173_cu1895(hw_uint<32*9>& stencil_27) {
  hw_uint<32> stencil_27_lane_0;
  set_at<0, 32, 32>(stencil_27_lane_0, stencil_27.extract<0, 31>());
  hw_uint<32> stencil_27_lane_1;
  set_at<0, 32, 32>(stencil_27_lane_1, stencil_27.extract<32, 63>());
  hw_uint<32> stencil_27_lane_2;
  set_at<0, 32, 32>(stencil_27_lane_2, stencil_27.extract<64, 95>());
  hw_uint<32> stencil_27_lane_3;
  set_at<0, 32, 32>(stencil_27_lane_3, stencil_27.extract<96, 127>());
  hw_uint<32> stencil_27_lane_4;
  set_at<0, 32, 32>(stencil_27_lane_4, stencil_27.extract<128, 159>());
  hw_uint<32> stencil_27_lane_5;
  set_at<0, 32, 32>(stencil_27_lane_5, stencil_27.extract<160, 191>());
  hw_uint<32> stencil_27_lane_6;
  set_at<0, 32, 32>(stencil_27_lane_6, stencil_27.extract<192, 223>());
  hw_uint<32> stencil_27_lane_7;
  set_at<0, 32, 32>(stencil_27_lane_7, stencil_27.extract<224, 255>());
  hw_uint<32> stencil_27_lane_8;
  set_at<0, 32, 32>(stencil_27_lane_8, stencil_27.extract<256, 287>());

	
auto res_init176 = set_zero_32();

	  hw_uint<32 > stencil_27_lane_0_pack;
  set_at<0, 32, 32>(stencil_27_lane_0_pack, stencil_27_lane_0);
  hw_uint<32 > res_init176_pack;
  set_at<0, 32, 32>(res_init176_pack, res_init176);
auto res_update177_stencil_28175__m_1626_stencil_28174_11050 = add(stencil_27_lane_0_pack, res_init176_pack);

	  hw_uint<32 > stencil_27_lane_1_pack;
  set_at<0, 32, 32>(stencil_27_lane_1_pack, stencil_27_lane_1);
  hw_uint<32 > res_update177_stencil_28175__m_1626_stencil_28174_11050_pack;
  set_at<0, 32, 32>(res_update177_stencil_28175__m_1626_stencil_28174_11050_pack, res_update177_stencil_28175__m_1626_stencil_28174_11050);
auto res_update177_stencil_28175_0628_stencil_28174_11048 = add(stencil_27_lane_1_pack, res_update177_stencil_28175__m_1626_stencil_28174_11050_pack);

	  hw_uint<32 > stencil_27_lane_2_pack;
  set_at<0, 32, 32>(stencil_27_lane_2_pack, stencil_27_lane_2);
  hw_uint<32 > res_update177_stencil_28175_0628_stencil_28174_11048_pack;
  set_at<0, 32, 32>(res_update177_stencil_28175_0628_stencil_28174_11048_pack, res_update177_stencil_28175_0628_stencil_28174_11048);
auto res_update177_stencil_28175_1630_stencil_28174_11046 = add(stencil_27_lane_2_pack, res_update177_stencil_28175_0628_stencil_28174_11048_pack);

	  hw_uint<32 > stencil_27_lane_3_pack;
  set_at<0, 32, 32>(stencil_27_lane_3_pack, stencil_27_lane_3);
  hw_uint<32 > res_update177_stencil_28175_1630_stencil_28174_11046_pack;
  set_at<0, 32, 32>(res_update177_stencil_28175_1630_stencil_28174_11046_pack, res_update177_stencil_28175_1630_stencil_28174_11046);
auto res_update177_stencil_28175__m_1626_stencil_28174_01044 = add(stencil_27_lane_3_pack, res_update177_stencil_28175_1630_stencil_28174_11046_pack);

	  hw_uint<32 > stencil_27_lane_4_pack;
  set_at<0, 32, 32>(stencil_27_lane_4_pack, stencil_27_lane_4);
  hw_uint<32 > res_update177_stencil_28175__m_1626_stencil_28174_01044_pack;
  set_at<0, 32, 32>(res_update177_stencil_28175__m_1626_stencil_28174_01044_pack, res_update177_stencil_28175__m_1626_stencil_28174_01044);
auto res_update177_stencil_28175_0628_stencil_28174_01042 = add(stencil_27_lane_4_pack, res_update177_stencil_28175__m_1626_stencil_28174_01044_pack);

	  hw_uint<32 > stencil_27_lane_5_pack;
  set_at<0, 32, 32>(stencil_27_lane_5_pack, stencil_27_lane_5);
  hw_uint<32 > res_update177_stencil_28175_0628_stencil_28174_01042_pack;
  set_at<0, 32, 32>(res_update177_stencil_28175_0628_stencil_28174_01042_pack, res_update177_stencil_28175_0628_stencil_28174_01042);
auto res_update177_stencil_28175_1630_stencil_28174_01040 = add(stencil_27_lane_5_pack, res_update177_stencil_28175_0628_stencil_28174_01042_pack);

	  hw_uint<32 > stencil_27_lane_6_pack;
  set_at<0, 32, 32>(stencil_27_lane_6_pack, stencil_27_lane_6);
  hw_uint<32 > res_update177_stencil_28175_1630_stencil_28174_01040_pack;
  set_at<0, 32, 32>(res_update177_stencil_28175_1630_stencil_28174_01040_pack, res_update177_stencil_28175_1630_stencil_28174_01040);
auto res_update177_stencil_28175__m_1626_stencil_28174__m_11038 = add(stencil_27_lane_6_pack, res_update177_stencil_28175_1630_stencil_28174_01040_pack);

	  hw_uint<32 > stencil_27_lane_7_pack;
  set_at<0, 32, 32>(stencil_27_lane_7_pack, stencil_27_lane_7);
  hw_uint<32 > res_update177_stencil_28175__m_1626_stencil_28174__m_11038_pack;
  set_at<0, 32, 32>(res_update177_stencil_28175__m_1626_stencil_28174__m_11038_pack, res_update177_stencil_28175__m_1626_stencil_28174__m_11038);
auto res_update177_stencil_28175_0628_stencil_28174__m_11036 = add(stencil_27_lane_7_pack, res_update177_stencil_28175__m_1626_stencil_28174__m_11038_pack);

	  hw_uint<32 > stencil_27_lane_8_pack;
  set_at<0, 32, 32>(stencil_27_lane_8_pack, stencil_27_lane_8);
  hw_uint<32 > res_update177_stencil_28175_0628_stencil_28174__m_11036_pack;
  set_at<0, 32, 32>(res_update177_stencil_28175_0628_stencil_28174__m_11036_pack, res_update177_stencil_28175_0628_stencil_28174__m_11036);
auto res_update177_stencil_28175_1630_stencil_28174__m_11034 = add(stencil_27_lane_8_pack, res_update177_stencil_28175_0628_stencil_28174__m_11036_pack);
  hw_uint<32 > return_value1896;
  set_at<0, 32, 32>(return_value1896, res_update177_stencil_28175_1630_stencil_28174__m_11034);
  return return_value1896;

}

hw_uint<32> stencil_29179_cu1898(hw_uint<32*9>& stencil_28) {
  hw_uint<32> stencil_28_lane_0;
  set_at<0, 32, 32>(stencil_28_lane_0, stencil_28.extract<0, 31>());
  hw_uint<32> stencil_28_lane_1;
  set_at<0, 32, 32>(stencil_28_lane_1, stencil_28.extract<32, 63>());
  hw_uint<32> stencil_28_lane_2;
  set_at<0, 32, 32>(stencil_28_lane_2, stencil_28.extract<64, 95>());
  hw_uint<32> stencil_28_lane_3;
  set_at<0, 32, 32>(stencil_28_lane_3, stencil_28.extract<96, 127>());
  hw_uint<32> stencil_28_lane_4;
  set_at<0, 32, 32>(stencil_28_lane_4, stencil_28.extract<128, 159>());
  hw_uint<32> stencil_28_lane_5;
  set_at<0, 32, 32>(stencil_28_lane_5, stencil_28.extract<160, 191>());
  hw_uint<32> stencil_28_lane_6;
  set_at<0, 32, 32>(stencil_28_lane_6, stencil_28.extract<192, 223>());
  hw_uint<32> stencil_28_lane_7;
  set_at<0, 32, 32>(stencil_28_lane_7, stencil_28.extract<224, 255>());
  hw_uint<32> stencil_28_lane_8;
  set_at<0, 32, 32>(stencil_28_lane_8, stencil_28.extract<256, 287>());

	
auto res_init182 = set_zero_32();

	  hw_uint<32 > stencil_28_lane_0_pack;
  set_at<0, 32, 32>(stencil_28_lane_0_pack, stencil_28_lane_0);
  hw_uint<32 > res_init182_pack;
  set_at<0, 32, 32>(res_init182_pack, res_init182);
auto res_update183_stencil_29181__m_1638_stencil_29180_11014 = add(stencil_28_lane_0_pack, res_init182_pack);

	  hw_uint<32 > stencil_28_lane_1_pack;
  set_at<0, 32, 32>(stencil_28_lane_1_pack, stencil_28_lane_1);
  hw_uint<32 > res_update183_stencil_29181__m_1638_stencil_29180_11014_pack;
  set_at<0, 32, 32>(res_update183_stencil_29181__m_1638_stencil_29180_11014_pack, res_update183_stencil_29181__m_1638_stencil_29180_11014);
auto res_update183_stencil_29181_0640_stencil_29180_11012 = add(stencil_28_lane_1_pack, res_update183_stencil_29181__m_1638_stencil_29180_11014_pack);

	  hw_uint<32 > stencil_28_lane_2_pack;
  set_at<0, 32, 32>(stencil_28_lane_2_pack, stencil_28_lane_2);
  hw_uint<32 > res_update183_stencil_29181_0640_stencil_29180_11012_pack;
  set_at<0, 32, 32>(res_update183_stencil_29181_0640_stencil_29180_11012_pack, res_update183_stencil_29181_0640_stencil_29180_11012);
auto res_update183_stencil_29181_1642_stencil_29180_11010 = add(stencil_28_lane_2_pack, res_update183_stencil_29181_0640_stencil_29180_11012_pack);

	  hw_uint<32 > stencil_28_lane_3_pack;
  set_at<0, 32, 32>(stencil_28_lane_3_pack, stencil_28_lane_3);
  hw_uint<32 > res_update183_stencil_29181_1642_stencil_29180_11010_pack;
  set_at<0, 32, 32>(res_update183_stencil_29181_1642_stencil_29180_11010_pack, res_update183_stencil_29181_1642_stencil_29180_11010);
auto res_update183_stencil_29181__m_1638_stencil_29180_01008 = add(stencil_28_lane_3_pack, res_update183_stencil_29181_1642_stencil_29180_11010_pack);

	  hw_uint<32 > stencil_28_lane_4_pack;
  set_at<0, 32, 32>(stencil_28_lane_4_pack, stencil_28_lane_4);
  hw_uint<32 > res_update183_stencil_29181__m_1638_stencil_29180_01008_pack;
  set_at<0, 32, 32>(res_update183_stencil_29181__m_1638_stencil_29180_01008_pack, res_update183_stencil_29181__m_1638_stencil_29180_01008);
auto res_update183_stencil_29181_0640_stencil_29180_01006 = add(stencil_28_lane_4_pack, res_update183_stencil_29181__m_1638_stencil_29180_01008_pack);

	  hw_uint<32 > stencil_28_lane_5_pack;
  set_at<0, 32, 32>(stencil_28_lane_5_pack, stencil_28_lane_5);
  hw_uint<32 > res_update183_stencil_29181_0640_stencil_29180_01006_pack;
  set_at<0, 32, 32>(res_update183_stencil_29181_0640_stencil_29180_01006_pack, res_update183_stencil_29181_0640_stencil_29180_01006);
auto res_update183_stencil_29181_1642_stencil_29180_01004 = add(stencil_28_lane_5_pack, res_update183_stencil_29181_0640_stencil_29180_01006_pack);

	  hw_uint<32 > stencil_28_lane_6_pack;
  set_at<0, 32, 32>(stencil_28_lane_6_pack, stencil_28_lane_6);
  hw_uint<32 > res_update183_stencil_29181_1642_stencil_29180_01004_pack;
  set_at<0, 32, 32>(res_update183_stencil_29181_1642_stencil_29180_01004_pack, res_update183_stencil_29181_1642_stencil_29180_01004);
auto res_update183_stencil_29181__m_1638_stencil_29180__m_11002 = add(stencil_28_lane_6_pack, res_update183_stencil_29181_1642_stencil_29180_01004_pack);

	  hw_uint<32 > stencil_28_lane_7_pack;
  set_at<0, 32, 32>(stencil_28_lane_7_pack, stencil_28_lane_7);
  hw_uint<32 > res_update183_stencil_29181__m_1638_stencil_29180__m_11002_pack;
  set_at<0, 32, 32>(res_update183_stencil_29181__m_1638_stencil_29180__m_11002_pack, res_update183_stencil_29181__m_1638_stencil_29180__m_11002);
auto res_update183_stencil_29181_0640_stencil_29180__m_11000 = add(stencil_28_lane_7_pack, res_update183_stencil_29181__m_1638_stencil_29180__m_11002_pack);

	  hw_uint<32 > stencil_28_lane_8_pack;
  set_at<0, 32, 32>(stencil_28_lane_8_pack, stencil_28_lane_8);
  hw_uint<32 > res_update183_stencil_29181_0640_stencil_29180__m_11000_pack;
  set_at<0, 32, 32>(res_update183_stencil_29181_0640_stencil_29180__m_11000_pack, res_update183_stencil_29181_0640_stencil_29180__m_11000);
auto res_update183_stencil_29181_1642_stencil_29180__m_1998 = add(stencil_28_lane_8_pack, res_update183_stencil_29181_0640_stencil_29180__m_11000_pack);
  hw_uint<32 > return_value1899;
  set_at<0, 32, 32>(return_value1899, res_update183_stencil_29181_1642_stencil_29180__m_1998);
  return return_value1899;

}

hw_uint<32> stencil_30185_cu1901(hw_uint<32*9>& stencil_29) {
  hw_uint<32> stencil_29_lane_0;
  set_at<0, 32, 32>(stencil_29_lane_0, stencil_29.extract<0, 31>());
  hw_uint<32> stencil_29_lane_1;
  set_at<0, 32, 32>(stencil_29_lane_1, stencil_29.extract<32, 63>());
  hw_uint<32> stencil_29_lane_2;
  set_at<0, 32, 32>(stencil_29_lane_2, stencil_29.extract<64, 95>());
  hw_uint<32> stencil_29_lane_3;
  set_at<0, 32, 32>(stencil_29_lane_3, stencil_29.extract<96, 127>());
  hw_uint<32> stencil_29_lane_4;
  set_at<0, 32, 32>(stencil_29_lane_4, stencil_29.extract<128, 159>());
  hw_uint<32> stencil_29_lane_5;
  set_at<0, 32, 32>(stencil_29_lane_5, stencil_29.extract<160, 191>());
  hw_uint<32> stencil_29_lane_6;
  set_at<0, 32, 32>(stencil_29_lane_6, stencil_29.extract<192, 223>());
  hw_uint<32> stencil_29_lane_7;
  set_at<0, 32, 32>(stencil_29_lane_7, stencil_29.extract<224, 255>());
  hw_uint<32> stencil_29_lane_8;
  set_at<0, 32, 32>(stencil_29_lane_8, stencil_29.extract<256, 287>());

	
auto res_init188 = set_zero_32();

	  hw_uint<32 > stencil_29_lane_0_pack;
  set_at<0, 32, 32>(stencil_29_lane_0_pack, stencil_29_lane_0);
  hw_uint<32 > res_init188_pack;
  set_at<0, 32, 32>(res_init188_pack, res_init188);
auto res_update189_stencil_30187__m_1650_stencil_30186_1978 = add(stencil_29_lane_0_pack, res_init188_pack);

	  hw_uint<32 > stencil_29_lane_1_pack;
  set_at<0, 32, 32>(stencil_29_lane_1_pack, stencil_29_lane_1);
  hw_uint<32 > res_update189_stencil_30187__m_1650_stencil_30186_1978_pack;
  set_at<0, 32, 32>(res_update189_stencil_30187__m_1650_stencil_30186_1978_pack, res_update189_stencil_30187__m_1650_stencil_30186_1978);
auto res_update189_stencil_30187_0652_stencil_30186_1976 = add(stencil_29_lane_1_pack, res_update189_stencil_30187__m_1650_stencil_30186_1978_pack);

	  hw_uint<32 > stencil_29_lane_2_pack;
  set_at<0, 32, 32>(stencil_29_lane_2_pack, stencil_29_lane_2);
  hw_uint<32 > res_update189_stencil_30187_0652_stencil_30186_1976_pack;
  set_at<0, 32, 32>(res_update189_stencil_30187_0652_stencil_30186_1976_pack, res_update189_stencil_30187_0652_stencil_30186_1976);
auto res_update189_stencil_30187_1654_stencil_30186_1974 = add(stencil_29_lane_2_pack, res_update189_stencil_30187_0652_stencil_30186_1976_pack);

	  hw_uint<32 > stencil_29_lane_3_pack;
  set_at<0, 32, 32>(stencil_29_lane_3_pack, stencil_29_lane_3);
  hw_uint<32 > res_update189_stencil_30187_1654_stencil_30186_1974_pack;
  set_at<0, 32, 32>(res_update189_stencil_30187_1654_stencil_30186_1974_pack, res_update189_stencil_30187_1654_stencil_30186_1974);
auto res_update189_stencil_30187__m_1650_stencil_30186_0972 = add(stencil_29_lane_3_pack, res_update189_stencil_30187_1654_stencil_30186_1974_pack);

	  hw_uint<32 > stencil_29_lane_4_pack;
  set_at<0, 32, 32>(stencil_29_lane_4_pack, stencil_29_lane_4);
  hw_uint<32 > res_update189_stencil_30187__m_1650_stencil_30186_0972_pack;
  set_at<0, 32, 32>(res_update189_stencil_30187__m_1650_stencil_30186_0972_pack, res_update189_stencil_30187__m_1650_stencil_30186_0972);
auto res_update189_stencil_30187_0652_stencil_30186_0970 = add(stencil_29_lane_4_pack, res_update189_stencil_30187__m_1650_stencil_30186_0972_pack);

	  hw_uint<32 > stencil_29_lane_5_pack;
  set_at<0, 32, 32>(stencil_29_lane_5_pack, stencil_29_lane_5);
  hw_uint<32 > res_update189_stencil_30187_0652_stencil_30186_0970_pack;
  set_at<0, 32, 32>(res_update189_stencil_30187_0652_stencil_30186_0970_pack, res_update189_stencil_30187_0652_stencil_30186_0970);
auto res_update189_stencil_30187_1654_stencil_30186_0968 = add(stencil_29_lane_5_pack, res_update189_stencil_30187_0652_stencil_30186_0970_pack);

	  hw_uint<32 > stencil_29_lane_6_pack;
  set_at<0, 32, 32>(stencil_29_lane_6_pack, stencil_29_lane_6);
  hw_uint<32 > res_update189_stencil_30187_1654_stencil_30186_0968_pack;
  set_at<0, 32, 32>(res_update189_stencil_30187_1654_stencil_30186_0968_pack, res_update189_stencil_30187_1654_stencil_30186_0968);
auto res_update189_stencil_30187__m_1650_stencil_30186__m_1966 = add(stencil_29_lane_6_pack, res_update189_stencil_30187_1654_stencil_30186_0968_pack);

	  hw_uint<32 > stencil_29_lane_7_pack;
  set_at<0, 32, 32>(stencil_29_lane_7_pack, stencil_29_lane_7);
  hw_uint<32 > res_update189_stencil_30187__m_1650_stencil_30186__m_1966_pack;
  set_at<0, 32, 32>(res_update189_stencil_30187__m_1650_stencil_30186__m_1966_pack, res_update189_stencil_30187__m_1650_stencil_30186__m_1966);
auto res_update189_stencil_30187_0652_stencil_30186__m_1964 = add(stencil_29_lane_7_pack, res_update189_stencil_30187__m_1650_stencil_30186__m_1966_pack);

	  hw_uint<32 > stencil_29_lane_8_pack;
  set_at<0, 32, 32>(stencil_29_lane_8_pack, stencil_29_lane_8);
  hw_uint<32 > res_update189_stencil_30187_0652_stencil_30186__m_1964_pack;
  set_at<0, 32, 32>(res_update189_stencil_30187_0652_stencil_30186__m_1964_pack, res_update189_stencil_30187_0652_stencil_30186__m_1964);
auto res_update189_stencil_30187_1654_stencil_30186__m_1962 = add(stencil_29_lane_8_pack, res_update189_stencil_30187_0652_stencil_30186__m_1964_pack);
  hw_uint<32 > return_value1902;
  set_at<0, 32, 32>(return_value1902, res_update189_stencil_30187_1654_stencil_30186__m_1962);
  return return_value1902;

}

hw_uint<32> stencil_32197_cu1904(hw_uint<32*9>& stencil_31) {
  hw_uint<32> stencil_31_lane_0;
  set_at<0, 32, 32>(stencil_31_lane_0, stencil_31.extract<0, 31>());
  hw_uint<32> stencil_31_lane_1;
  set_at<0, 32, 32>(stencil_31_lane_1, stencil_31.extract<32, 63>());
  hw_uint<32> stencil_31_lane_2;
  set_at<0, 32, 32>(stencil_31_lane_2, stencil_31.extract<64, 95>());
  hw_uint<32> stencil_31_lane_3;
  set_at<0, 32, 32>(stencil_31_lane_3, stencil_31.extract<96, 127>());
  hw_uint<32> stencil_31_lane_4;
  set_at<0, 32, 32>(stencil_31_lane_4, stencil_31.extract<128, 159>());
  hw_uint<32> stencil_31_lane_5;
  set_at<0, 32, 32>(stencil_31_lane_5, stencil_31.extract<160, 191>());
  hw_uint<32> stencil_31_lane_6;
  set_at<0, 32, 32>(stencil_31_lane_6, stencil_31.extract<192, 223>());
  hw_uint<32> stencil_31_lane_7;
  set_at<0, 32, 32>(stencil_31_lane_7, stencil_31.extract<224, 255>());
  hw_uint<32> stencil_31_lane_8;
  set_at<0, 32, 32>(stencil_31_lane_8, stencil_31.extract<256, 287>());

	
auto res_init200 = set_zero_32();

	  hw_uint<32 > stencil_31_lane_0_pack;
  set_at<0, 32, 32>(stencil_31_lane_0_pack, stencil_31_lane_0);
  hw_uint<32 > res_init200_pack;
  set_at<0, 32, 32>(res_init200_pack, res_init200);
auto res_update201_stencil_32199__m_1674_stencil_32198_1906 = add(stencil_31_lane_0_pack, res_init200_pack);

	  hw_uint<32 > stencil_31_lane_1_pack;
  set_at<0, 32, 32>(stencil_31_lane_1_pack, stencil_31_lane_1);
  hw_uint<32 > res_update201_stencil_32199__m_1674_stencil_32198_1906_pack;
  set_at<0, 32, 32>(res_update201_stencil_32199__m_1674_stencil_32198_1906_pack, res_update201_stencil_32199__m_1674_stencil_32198_1906);
auto res_update201_stencil_32199_0676_stencil_32198_1904 = add(stencil_31_lane_1_pack, res_update201_stencil_32199__m_1674_stencil_32198_1906_pack);

	  hw_uint<32 > stencil_31_lane_2_pack;
  set_at<0, 32, 32>(stencil_31_lane_2_pack, stencil_31_lane_2);
  hw_uint<32 > res_update201_stencil_32199_0676_stencil_32198_1904_pack;
  set_at<0, 32, 32>(res_update201_stencil_32199_0676_stencil_32198_1904_pack, res_update201_stencil_32199_0676_stencil_32198_1904);
auto res_update201_stencil_32199_1678_stencil_32198_1902 = add(stencil_31_lane_2_pack, res_update201_stencil_32199_0676_stencil_32198_1904_pack);

	  hw_uint<32 > stencil_31_lane_3_pack;
  set_at<0, 32, 32>(stencil_31_lane_3_pack, stencil_31_lane_3);
  hw_uint<32 > res_update201_stencil_32199_1678_stencil_32198_1902_pack;
  set_at<0, 32, 32>(res_update201_stencil_32199_1678_stencil_32198_1902_pack, res_update201_stencil_32199_1678_stencil_32198_1902);
auto res_update201_stencil_32199__m_1674_stencil_32198_0900 = add(stencil_31_lane_3_pack, res_update201_stencil_32199_1678_stencil_32198_1902_pack);

	  hw_uint<32 > stencil_31_lane_4_pack;
  set_at<0, 32, 32>(stencil_31_lane_4_pack, stencil_31_lane_4);
  hw_uint<32 > res_update201_stencil_32199__m_1674_stencil_32198_0900_pack;
  set_at<0, 32, 32>(res_update201_stencil_32199__m_1674_stencil_32198_0900_pack, res_update201_stencil_32199__m_1674_stencil_32198_0900);
auto res_update201_stencil_32199_0676_stencil_32198_0898 = add(stencil_31_lane_4_pack, res_update201_stencil_32199__m_1674_stencil_32198_0900_pack);

	  hw_uint<32 > stencil_31_lane_5_pack;
  set_at<0, 32, 32>(stencil_31_lane_5_pack, stencil_31_lane_5);
  hw_uint<32 > res_update201_stencil_32199_0676_stencil_32198_0898_pack;
  set_at<0, 32, 32>(res_update201_stencil_32199_0676_stencil_32198_0898_pack, res_update201_stencil_32199_0676_stencil_32198_0898);
auto res_update201_stencil_32199_1678_stencil_32198_0896 = add(stencil_31_lane_5_pack, res_update201_stencil_32199_0676_stencil_32198_0898_pack);

	  hw_uint<32 > stencil_31_lane_6_pack;
  set_at<0, 32, 32>(stencil_31_lane_6_pack, stencil_31_lane_6);
  hw_uint<32 > res_update201_stencil_32199_1678_stencil_32198_0896_pack;
  set_at<0, 32, 32>(res_update201_stencil_32199_1678_stencil_32198_0896_pack, res_update201_stencil_32199_1678_stencil_32198_0896);
auto res_update201_stencil_32199__m_1674_stencil_32198__m_1894 = add(stencil_31_lane_6_pack, res_update201_stencil_32199_1678_stencil_32198_0896_pack);

	  hw_uint<32 > stencil_31_lane_7_pack;
  set_at<0, 32, 32>(stencil_31_lane_7_pack, stencil_31_lane_7);
  hw_uint<32 > res_update201_stencil_32199__m_1674_stencil_32198__m_1894_pack;
  set_at<0, 32, 32>(res_update201_stencil_32199__m_1674_stencil_32198__m_1894_pack, res_update201_stencil_32199__m_1674_stencil_32198__m_1894);
auto res_update201_stencil_32199_0676_stencil_32198__m_1892 = add(stencil_31_lane_7_pack, res_update201_stencil_32199__m_1674_stencil_32198__m_1894_pack);

	  hw_uint<32 > stencil_31_lane_8_pack;
  set_at<0, 32, 32>(stencil_31_lane_8_pack, stencil_31_lane_8);
  hw_uint<32 > res_update201_stencil_32199_0676_stencil_32198__m_1892_pack;
  set_at<0, 32, 32>(res_update201_stencil_32199_0676_stencil_32198__m_1892_pack, res_update201_stencil_32199_0676_stencil_32198__m_1892);
auto res_update201_stencil_32199_1678_stencil_32198__m_1890 = add(stencil_31_lane_8_pack, res_update201_stencil_32199_0676_stencil_32198__m_1892_pack);
  hw_uint<32 > return_value1905;
  set_at<0, 32, 32>(return_value1905, res_update201_stencil_32199_1678_stencil_32198__m_1890);
  return return_value1905;

}

hw_uint<32> stencil_33203_cu1907(hw_uint<32*9>& stencil_32) {
  hw_uint<32> stencil_32_lane_0;
  set_at<0, 32, 32>(stencil_32_lane_0, stencil_32.extract<0, 31>());
  hw_uint<32> stencil_32_lane_1;
  set_at<0, 32, 32>(stencil_32_lane_1, stencil_32.extract<32, 63>());
  hw_uint<32> stencil_32_lane_2;
  set_at<0, 32, 32>(stencil_32_lane_2, stencil_32.extract<64, 95>());
  hw_uint<32> stencil_32_lane_3;
  set_at<0, 32, 32>(stencil_32_lane_3, stencil_32.extract<96, 127>());
  hw_uint<32> stencil_32_lane_4;
  set_at<0, 32, 32>(stencil_32_lane_4, stencil_32.extract<128, 159>());
  hw_uint<32> stencil_32_lane_5;
  set_at<0, 32, 32>(stencil_32_lane_5, stencil_32.extract<160, 191>());
  hw_uint<32> stencil_32_lane_6;
  set_at<0, 32, 32>(stencil_32_lane_6, stencil_32.extract<192, 223>());
  hw_uint<32> stencil_32_lane_7;
  set_at<0, 32, 32>(stencil_32_lane_7, stencil_32.extract<224, 255>());
  hw_uint<32> stencil_32_lane_8;
  set_at<0, 32, 32>(stencil_32_lane_8, stencil_32.extract<256, 287>());

	
auto res_init206 = set_zero_32();

	  hw_uint<32 > stencil_32_lane_0_pack;
  set_at<0, 32, 32>(stencil_32_lane_0_pack, stencil_32_lane_0);
  hw_uint<32 > res_init206_pack;
  set_at<0, 32, 32>(res_init206_pack, res_init206);
auto res_update207_stencil_33205__m_1698_stencil_33204_1834 = add(stencil_32_lane_0_pack, res_init206_pack);

	  hw_uint<32 > stencil_32_lane_1_pack;
  set_at<0, 32, 32>(stencil_32_lane_1_pack, stencil_32_lane_1);
  hw_uint<32 > res_update207_stencil_33205__m_1698_stencil_33204_1834_pack;
  set_at<0, 32, 32>(res_update207_stencil_33205__m_1698_stencil_33204_1834_pack, res_update207_stencil_33205__m_1698_stencil_33204_1834);
auto res_update207_stencil_33205_0700_stencil_33204_1832 = add(stencil_32_lane_1_pack, res_update207_stencil_33205__m_1698_stencil_33204_1834_pack);

	  hw_uint<32 > stencil_32_lane_2_pack;
  set_at<0, 32, 32>(stencil_32_lane_2_pack, stencil_32_lane_2);
  hw_uint<32 > res_update207_stencil_33205_0700_stencil_33204_1832_pack;
  set_at<0, 32, 32>(res_update207_stencil_33205_0700_stencil_33204_1832_pack, res_update207_stencil_33205_0700_stencil_33204_1832);
auto res_update207_stencil_33205_1702_stencil_33204_1830 = add(stencil_32_lane_2_pack, res_update207_stencil_33205_0700_stencil_33204_1832_pack);

	  hw_uint<32 > stencil_32_lane_3_pack;
  set_at<0, 32, 32>(stencil_32_lane_3_pack, stencil_32_lane_3);
  hw_uint<32 > res_update207_stencil_33205_1702_stencil_33204_1830_pack;
  set_at<0, 32, 32>(res_update207_stencil_33205_1702_stencil_33204_1830_pack, res_update207_stencil_33205_1702_stencil_33204_1830);
auto res_update207_stencil_33205__m_1698_stencil_33204_0828 = add(stencil_32_lane_3_pack, res_update207_stencil_33205_1702_stencil_33204_1830_pack);

	  hw_uint<32 > stencil_32_lane_4_pack;
  set_at<0, 32, 32>(stencil_32_lane_4_pack, stencil_32_lane_4);
  hw_uint<32 > res_update207_stencil_33205__m_1698_stencil_33204_0828_pack;
  set_at<0, 32, 32>(res_update207_stencil_33205__m_1698_stencil_33204_0828_pack, res_update207_stencil_33205__m_1698_stencil_33204_0828);
auto res_update207_stencil_33205_0700_stencil_33204_0826 = add(stencil_32_lane_4_pack, res_update207_stencil_33205__m_1698_stencil_33204_0828_pack);

	  hw_uint<32 > stencil_32_lane_5_pack;
  set_at<0, 32, 32>(stencil_32_lane_5_pack, stencil_32_lane_5);
  hw_uint<32 > res_update207_stencil_33205_0700_stencil_33204_0826_pack;
  set_at<0, 32, 32>(res_update207_stencil_33205_0700_stencil_33204_0826_pack, res_update207_stencil_33205_0700_stencil_33204_0826);
auto res_update207_stencil_33205_1702_stencil_33204_0824 = add(stencil_32_lane_5_pack, res_update207_stencil_33205_0700_stencil_33204_0826_pack);

	  hw_uint<32 > stencil_32_lane_6_pack;
  set_at<0, 32, 32>(stencil_32_lane_6_pack, stencil_32_lane_6);
  hw_uint<32 > res_update207_stencil_33205_1702_stencil_33204_0824_pack;
  set_at<0, 32, 32>(res_update207_stencil_33205_1702_stencil_33204_0824_pack, res_update207_stencil_33205_1702_stencil_33204_0824);
auto res_update207_stencil_33205__m_1698_stencil_33204__m_1822 = add(stencil_32_lane_6_pack, res_update207_stencil_33205_1702_stencil_33204_0824_pack);

	  hw_uint<32 > stencil_32_lane_7_pack;
  set_at<0, 32, 32>(stencil_32_lane_7_pack, stencil_32_lane_7);
  hw_uint<32 > res_update207_stencil_33205__m_1698_stencil_33204__m_1822_pack;
  set_at<0, 32, 32>(res_update207_stencil_33205__m_1698_stencil_33204__m_1822_pack, res_update207_stencil_33205__m_1698_stencil_33204__m_1822);
auto res_update207_stencil_33205_0700_stencil_33204__m_1820 = add(stencil_32_lane_7_pack, res_update207_stencil_33205__m_1698_stencil_33204__m_1822_pack);

	  hw_uint<32 > stencil_32_lane_8_pack;
  set_at<0, 32, 32>(stencil_32_lane_8_pack, stencil_32_lane_8);
  hw_uint<32 > res_update207_stencil_33205_0700_stencil_33204__m_1820_pack;
  set_at<0, 32, 32>(res_update207_stencil_33205_0700_stencil_33204__m_1820_pack, res_update207_stencil_33205_0700_stencil_33204__m_1820);
auto res_update207_stencil_33205_1702_stencil_33204__m_1818 = add(stencil_32_lane_8_pack, res_update207_stencil_33205_0700_stencil_33204__m_1820_pack);
  hw_uint<32 > return_value1908;
  set_at<0, 32, 32>(return_value1908, res_update207_stencil_33205_1702_stencil_33204__m_1818);
  return return_value1908;

}

hw_uint<32> stencil_34209_cu1910(hw_uint<32*9>& stencil_33) {
  hw_uint<32> stencil_33_lane_0;
  set_at<0, 32, 32>(stencil_33_lane_0, stencil_33.extract<0, 31>());
  hw_uint<32> stencil_33_lane_1;
  set_at<0, 32, 32>(stencil_33_lane_1, stencil_33.extract<32, 63>());
  hw_uint<32> stencil_33_lane_2;
  set_at<0, 32, 32>(stencil_33_lane_2, stencil_33.extract<64, 95>());
  hw_uint<32> stencil_33_lane_3;
  set_at<0, 32, 32>(stencil_33_lane_3, stencil_33.extract<96, 127>());
  hw_uint<32> stencil_33_lane_4;
  set_at<0, 32, 32>(stencil_33_lane_4, stencil_33.extract<128, 159>());
  hw_uint<32> stencil_33_lane_5;
  set_at<0, 32, 32>(stencil_33_lane_5, stencil_33.extract<160, 191>());
  hw_uint<32> stencil_33_lane_6;
  set_at<0, 32, 32>(stencil_33_lane_6, stencil_33.extract<192, 223>());
  hw_uint<32> stencil_33_lane_7;
  set_at<0, 32, 32>(stencil_33_lane_7, stencil_33.extract<224, 255>());
  hw_uint<32> stencil_33_lane_8;
  set_at<0, 32, 32>(stencil_33_lane_8, stencil_33.extract<256, 287>());

	
auto res_init212 = set_zero_32();

	  hw_uint<32 > stencil_33_lane_0_pack;
  set_at<0, 32, 32>(stencil_33_lane_0_pack, stencil_33_lane_0);
  hw_uint<32 > res_init212_pack;
  set_at<0, 32, 32>(res_init212_pack, res_init212);
auto res_update213_stencil_34211__m_1710_stencil_34210_1798 = add(stencil_33_lane_0_pack, res_init212_pack);

	  hw_uint<32 > stencil_33_lane_1_pack;
  set_at<0, 32, 32>(stencil_33_lane_1_pack, stencil_33_lane_1);
  hw_uint<32 > res_update213_stencil_34211__m_1710_stencil_34210_1798_pack;
  set_at<0, 32, 32>(res_update213_stencil_34211__m_1710_stencil_34210_1798_pack, res_update213_stencil_34211__m_1710_stencil_34210_1798);
auto res_update213_stencil_34211_0712_stencil_34210_1796 = add(stencil_33_lane_1_pack, res_update213_stencil_34211__m_1710_stencil_34210_1798_pack);

	  hw_uint<32 > stencil_33_lane_2_pack;
  set_at<0, 32, 32>(stencil_33_lane_2_pack, stencil_33_lane_2);
  hw_uint<32 > res_update213_stencil_34211_0712_stencil_34210_1796_pack;
  set_at<0, 32, 32>(res_update213_stencil_34211_0712_stencil_34210_1796_pack, res_update213_stencil_34211_0712_stencil_34210_1796);
auto res_update213_stencil_34211_1714_stencil_34210_1794 = add(stencil_33_lane_2_pack, res_update213_stencil_34211_0712_stencil_34210_1796_pack);

	  hw_uint<32 > stencil_33_lane_3_pack;
  set_at<0, 32, 32>(stencil_33_lane_3_pack, stencil_33_lane_3);
  hw_uint<32 > res_update213_stencil_34211_1714_stencil_34210_1794_pack;
  set_at<0, 32, 32>(res_update213_stencil_34211_1714_stencil_34210_1794_pack, res_update213_stencil_34211_1714_stencil_34210_1794);
auto res_update213_stencil_34211__m_1710_stencil_34210_0792 = add(stencil_33_lane_3_pack, res_update213_stencil_34211_1714_stencil_34210_1794_pack);

	  hw_uint<32 > stencil_33_lane_4_pack;
  set_at<0, 32, 32>(stencil_33_lane_4_pack, stencil_33_lane_4);
  hw_uint<32 > res_update213_stencil_34211__m_1710_stencil_34210_0792_pack;
  set_at<0, 32, 32>(res_update213_stencil_34211__m_1710_stencil_34210_0792_pack, res_update213_stencil_34211__m_1710_stencil_34210_0792);
auto res_update213_stencil_34211_0712_stencil_34210_0790 = add(stencil_33_lane_4_pack, res_update213_stencil_34211__m_1710_stencil_34210_0792_pack);

	  hw_uint<32 > stencil_33_lane_5_pack;
  set_at<0, 32, 32>(stencil_33_lane_5_pack, stencil_33_lane_5);
  hw_uint<32 > res_update213_stencil_34211_0712_stencil_34210_0790_pack;
  set_at<0, 32, 32>(res_update213_stencil_34211_0712_stencil_34210_0790_pack, res_update213_stencil_34211_0712_stencil_34210_0790);
auto res_update213_stencil_34211_1714_stencil_34210_0788 = add(stencil_33_lane_5_pack, res_update213_stencil_34211_0712_stencil_34210_0790_pack);

	  hw_uint<32 > stencil_33_lane_6_pack;
  set_at<0, 32, 32>(stencil_33_lane_6_pack, stencil_33_lane_6);
  hw_uint<32 > res_update213_stencil_34211_1714_stencil_34210_0788_pack;
  set_at<0, 32, 32>(res_update213_stencil_34211_1714_stencil_34210_0788_pack, res_update213_stencil_34211_1714_stencil_34210_0788);
auto res_update213_stencil_34211__m_1710_stencil_34210__m_1786 = add(stencil_33_lane_6_pack, res_update213_stencil_34211_1714_stencil_34210_0788_pack);

	  hw_uint<32 > stencil_33_lane_7_pack;
  set_at<0, 32, 32>(stencil_33_lane_7_pack, stencil_33_lane_7);
  hw_uint<32 > res_update213_stencil_34211__m_1710_stencil_34210__m_1786_pack;
  set_at<0, 32, 32>(res_update213_stencil_34211__m_1710_stencil_34210__m_1786_pack, res_update213_stencil_34211__m_1710_stencil_34210__m_1786);
auto res_update213_stencil_34211_0712_stencil_34210__m_1784 = add(stencil_33_lane_7_pack, res_update213_stencil_34211__m_1710_stencil_34210__m_1786_pack);

	  hw_uint<32 > stencil_33_lane_8_pack;
  set_at<0, 32, 32>(stencil_33_lane_8_pack, stencil_33_lane_8);
  hw_uint<32 > res_update213_stencil_34211_0712_stencil_34210__m_1784_pack;
  set_at<0, 32, 32>(res_update213_stencil_34211_0712_stencil_34210__m_1784_pack, res_update213_stencil_34211_0712_stencil_34210__m_1784);
auto res_update213_stencil_34211_1714_stencil_34210__m_1782 = add(stencil_33_lane_8_pack, res_update213_stencil_34211_0712_stencil_34210__m_1784_pack);
  hw_uint<32 > return_value1911;
  set_at<0, 32, 32>(return_value1911, res_update213_stencil_34211_1714_stencil_34210__m_1782);
  return return_value1911;

}

hw_uint<32> stencil_35215_cu1913(hw_uint<32*9>& stencil_34) {
  hw_uint<32> stencil_34_lane_0;
  set_at<0, 32, 32>(stencil_34_lane_0, stencil_34.extract<0, 31>());
  hw_uint<32> stencil_34_lane_1;
  set_at<0, 32, 32>(stencil_34_lane_1, stencil_34.extract<32, 63>());
  hw_uint<32> stencil_34_lane_2;
  set_at<0, 32, 32>(stencil_34_lane_2, stencil_34.extract<64, 95>());
  hw_uint<32> stencil_34_lane_3;
  set_at<0, 32, 32>(stencil_34_lane_3, stencil_34.extract<96, 127>());
  hw_uint<32> stencil_34_lane_4;
  set_at<0, 32, 32>(stencil_34_lane_4, stencil_34.extract<128, 159>());
  hw_uint<32> stencil_34_lane_5;
  set_at<0, 32, 32>(stencil_34_lane_5, stencil_34.extract<160, 191>());
  hw_uint<32> stencil_34_lane_6;
  set_at<0, 32, 32>(stencil_34_lane_6, stencil_34.extract<192, 223>());
  hw_uint<32> stencil_34_lane_7;
  set_at<0, 32, 32>(stencil_34_lane_7, stencil_34.extract<224, 255>());
  hw_uint<32> stencil_34_lane_8;
  set_at<0, 32, 32>(stencil_34_lane_8, stencil_34.extract<256, 287>());

	
auto res_init218 = set_zero_32();

	  hw_uint<32 > stencil_34_lane_0_pack;
  set_at<0, 32, 32>(stencil_34_lane_0_pack, stencil_34_lane_0);
  hw_uint<32 > res_init218_pack;
  set_at<0, 32, 32>(res_init218_pack, res_init218);
auto res_update219_stencil_35217__m_1722_stencil_35216_1762 = add(stencil_34_lane_0_pack, res_init218_pack);

	  hw_uint<32 > stencil_34_lane_1_pack;
  set_at<0, 32, 32>(stencil_34_lane_1_pack, stencil_34_lane_1);
  hw_uint<32 > res_update219_stencil_35217__m_1722_stencil_35216_1762_pack;
  set_at<0, 32, 32>(res_update219_stencil_35217__m_1722_stencil_35216_1762_pack, res_update219_stencil_35217__m_1722_stencil_35216_1762);
auto res_update219_stencil_35217_0724_stencil_35216_1760 = add(stencil_34_lane_1_pack, res_update219_stencil_35217__m_1722_stencil_35216_1762_pack);

	  hw_uint<32 > stencil_34_lane_2_pack;
  set_at<0, 32, 32>(stencil_34_lane_2_pack, stencil_34_lane_2);
  hw_uint<32 > res_update219_stencil_35217_0724_stencil_35216_1760_pack;
  set_at<0, 32, 32>(res_update219_stencil_35217_0724_stencil_35216_1760_pack, res_update219_stencil_35217_0724_stencil_35216_1760);
auto res_update219_stencil_35217_1726_stencil_35216_1758 = add(stencil_34_lane_2_pack, res_update219_stencil_35217_0724_stencil_35216_1760_pack);

	  hw_uint<32 > stencil_34_lane_3_pack;
  set_at<0, 32, 32>(stencil_34_lane_3_pack, stencil_34_lane_3);
  hw_uint<32 > res_update219_stencil_35217_1726_stencil_35216_1758_pack;
  set_at<0, 32, 32>(res_update219_stencil_35217_1726_stencil_35216_1758_pack, res_update219_stencil_35217_1726_stencil_35216_1758);
auto res_update219_stencil_35217__m_1722_stencil_35216_0756 = add(stencil_34_lane_3_pack, res_update219_stencil_35217_1726_stencil_35216_1758_pack);

	  hw_uint<32 > stencil_34_lane_4_pack;
  set_at<0, 32, 32>(stencil_34_lane_4_pack, stencil_34_lane_4);
  hw_uint<32 > res_update219_stencil_35217__m_1722_stencil_35216_0756_pack;
  set_at<0, 32, 32>(res_update219_stencil_35217__m_1722_stencil_35216_0756_pack, res_update219_stencil_35217__m_1722_stencil_35216_0756);
auto res_update219_stencil_35217_0724_stencil_35216_0754 = add(stencil_34_lane_4_pack, res_update219_stencil_35217__m_1722_stencil_35216_0756_pack);

	  hw_uint<32 > stencil_34_lane_5_pack;
  set_at<0, 32, 32>(stencil_34_lane_5_pack, stencil_34_lane_5);
  hw_uint<32 > res_update219_stencil_35217_0724_stencil_35216_0754_pack;
  set_at<0, 32, 32>(res_update219_stencil_35217_0724_stencil_35216_0754_pack, res_update219_stencil_35217_0724_stencil_35216_0754);
auto res_update219_stencil_35217_1726_stencil_35216_0752 = add(stencil_34_lane_5_pack, res_update219_stencil_35217_0724_stencil_35216_0754_pack);

	  hw_uint<32 > stencil_34_lane_6_pack;
  set_at<0, 32, 32>(stencil_34_lane_6_pack, stencil_34_lane_6);
  hw_uint<32 > res_update219_stencil_35217_1726_stencil_35216_0752_pack;
  set_at<0, 32, 32>(res_update219_stencil_35217_1726_stencil_35216_0752_pack, res_update219_stencil_35217_1726_stencil_35216_0752);
auto res_update219_stencil_35217__m_1722_stencil_35216__m_1750 = add(stencil_34_lane_6_pack, res_update219_stencil_35217_1726_stencil_35216_0752_pack);

	  hw_uint<32 > stencil_34_lane_7_pack;
  set_at<0, 32, 32>(stencil_34_lane_7_pack, stencil_34_lane_7);
  hw_uint<32 > res_update219_stencil_35217__m_1722_stencil_35216__m_1750_pack;
  set_at<0, 32, 32>(res_update219_stencil_35217__m_1722_stencil_35216__m_1750_pack, res_update219_stencil_35217__m_1722_stencil_35216__m_1750);
auto res_update219_stencil_35217_0724_stencil_35216__m_1748 = add(stencil_34_lane_7_pack, res_update219_stencil_35217__m_1722_stencil_35216__m_1750_pack);

	  hw_uint<32 > stencil_34_lane_8_pack;
  set_at<0, 32, 32>(stencil_34_lane_8_pack, stencil_34_lane_8);
  hw_uint<32 > res_update219_stencil_35217_0724_stencil_35216__m_1748_pack;
  set_at<0, 32, 32>(res_update219_stencil_35217_0724_stencil_35216__m_1748_pack, res_update219_stencil_35217_0724_stencil_35216__m_1748);
auto res_update219_stencil_35217_1726_stencil_35216__m_1746 = add(stencil_34_lane_8_pack, res_update219_stencil_35217_0724_stencil_35216__m_1748_pack);
  hw_uint<32 > return_value1914;
  set_at<0, 32, 32>(return_value1914, res_update219_stencil_35217_1726_stencil_35216__m_1746);
  return return_value1914;

}

hw_uint<32> stencil_36221_cu1916(hw_uint<32*9>& stencil_35) {
  hw_uint<32> stencil_35_lane_0;
  set_at<0, 32, 32>(stencil_35_lane_0, stencil_35.extract<0, 31>());
  hw_uint<32> stencil_35_lane_1;
  set_at<0, 32, 32>(stencil_35_lane_1, stencil_35.extract<32, 63>());
  hw_uint<32> stencil_35_lane_2;
  set_at<0, 32, 32>(stencil_35_lane_2, stencil_35.extract<64, 95>());
  hw_uint<32> stencil_35_lane_3;
  set_at<0, 32, 32>(stencil_35_lane_3, stencil_35.extract<96, 127>());
  hw_uint<32> stencil_35_lane_4;
  set_at<0, 32, 32>(stencil_35_lane_4, stencil_35.extract<128, 159>());
  hw_uint<32> stencil_35_lane_5;
  set_at<0, 32, 32>(stencil_35_lane_5, stencil_35.extract<160, 191>());
  hw_uint<32> stencil_35_lane_6;
  set_at<0, 32, 32>(stencil_35_lane_6, stencil_35.extract<192, 223>());
  hw_uint<32> stencil_35_lane_7;
  set_at<0, 32, 32>(stencil_35_lane_7, stencil_35.extract<224, 255>());
  hw_uint<32> stencil_35_lane_8;
  set_at<0, 32, 32>(stencil_35_lane_8, stencil_35.extract<256, 287>());

	
auto res_init224 = set_zero_32();

	  hw_uint<32 > stencil_35_lane_0_pack;
  set_at<0, 32, 32>(stencil_35_lane_0_pack, stencil_35_lane_0);
  hw_uint<32 > res_init224_pack;
  set_at<0, 32, 32>(res_init224_pack, res_init224);
auto res_update225_stencil_36223__m_1716_stencil_36222_11806 = add(stencil_35_lane_0_pack, res_init224_pack);

	  hw_uint<32 > stencil_35_lane_1_pack;
  set_at<0, 32, 32>(stencil_35_lane_1_pack, stencil_35_lane_1);
  hw_uint<32 > res_update225_stencil_36223__m_1716_stencil_36222_11806_pack;
  set_at<0, 32, 32>(res_update225_stencil_36223__m_1716_stencil_36222_11806_pack, res_update225_stencil_36223__m_1716_stencil_36222_11806);
auto res_update225_stencil_36223_0718_stencil_36222_11804 = add(stencil_35_lane_1_pack, res_update225_stencil_36223__m_1716_stencil_36222_11806_pack);

	  hw_uint<32 > stencil_35_lane_2_pack;
  set_at<0, 32, 32>(stencil_35_lane_2_pack, stencil_35_lane_2);
  hw_uint<32 > res_update225_stencil_36223_0718_stencil_36222_11804_pack;
  set_at<0, 32, 32>(res_update225_stencil_36223_0718_stencil_36222_11804_pack, res_update225_stencil_36223_0718_stencil_36222_11804);
auto res_update225_stencil_36223_1720_stencil_36222_11802 = add(stencil_35_lane_2_pack, res_update225_stencil_36223_0718_stencil_36222_11804_pack);

	  hw_uint<32 > stencil_35_lane_3_pack;
  set_at<0, 32, 32>(stencil_35_lane_3_pack, stencil_35_lane_3);
  hw_uint<32 > res_update225_stencil_36223_1720_stencil_36222_11802_pack;
  set_at<0, 32, 32>(res_update225_stencil_36223_1720_stencil_36222_11802_pack, res_update225_stencil_36223_1720_stencil_36222_11802);
auto res_update225_stencil_36223__m_1716_stencil_36222_01800 = add(stencil_35_lane_3_pack, res_update225_stencil_36223_1720_stencil_36222_11802_pack);

	  hw_uint<32 > stencil_35_lane_4_pack;
  set_at<0, 32, 32>(stencil_35_lane_4_pack, stencil_35_lane_4);
  hw_uint<32 > res_update225_stencil_36223__m_1716_stencil_36222_01800_pack;
  set_at<0, 32, 32>(res_update225_stencil_36223__m_1716_stencil_36222_01800_pack, res_update225_stencil_36223__m_1716_stencil_36222_01800);
auto res_update225_stencil_36223_0718_stencil_36222_01798 = add(stencil_35_lane_4_pack, res_update225_stencil_36223__m_1716_stencil_36222_01800_pack);

	  hw_uint<32 > stencil_35_lane_5_pack;
  set_at<0, 32, 32>(stencil_35_lane_5_pack, stencil_35_lane_5);
  hw_uint<32 > res_update225_stencil_36223_0718_stencil_36222_01798_pack;
  set_at<0, 32, 32>(res_update225_stencil_36223_0718_stencil_36222_01798_pack, res_update225_stencil_36223_0718_stencil_36222_01798);
auto res_update225_stencil_36223_1720_stencil_36222_01796 = add(stencil_35_lane_5_pack, res_update225_stencil_36223_0718_stencil_36222_01798_pack);

	  hw_uint<32 > stencil_35_lane_6_pack;
  set_at<0, 32, 32>(stencil_35_lane_6_pack, stencil_35_lane_6);
  hw_uint<32 > res_update225_stencil_36223_1720_stencil_36222_01796_pack;
  set_at<0, 32, 32>(res_update225_stencil_36223_1720_stencil_36222_01796_pack, res_update225_stencil_36223_1720_stencil_36222_01796);
auto res_update225_stencil_36223__m_1716_stencil_36222__m_11794 = add(stencil_35_lane_6_pack, res_update225_stencil_36223_1720_stencil_36222_01796_pack);

	  hw_uint<32 > stencil_35_lane_7_pack;
  set_at<0, 32, 32>(stencil_35_lane_7_pack, stencil_35_lane_7);
  hw_uint<32 > res_update225_stencil_36223__m_1716_stencil_36222__m_11794_pack;
  set_at<0, 32, 32>(res_update225_stencil_36223__m_1716_stencil_36222__m_11794_pack, res_update225_stencil_36223__m_1716_stencil_36222__m_11794);
auto res_update225_stencil_36223_0718_stencil_36222__m_11792 = add(stencil_35_lane_7_pack, res_update225_stencil_36223__m_1716_stencil_36222__m_11794_pack);

	  hw_uint<32 > stencil_35_lane_8_pack;
  set_at<0, 32, 32>(stencil_35_lane_8_pack, stencil_35_lane_8);
  hw_uint<32 > res_update225_stencil_36223_0718_stencil_36222__m_11792_pack;
  set_at<0, 32, 32>(res_update225_stencil_36223_0718_stencil_36222__m_11792_pack, res_update225_stencil_36223_0718_stencil_36222__m_11792);
auto res_update225_stencil_36223_1720_stencil_36222__m_11790 = add(stencil_35_lane_8_pack, res_update225_stencil_36223_0718_stencil_36222__m_11792_pack);
  hw_uint<32 > return_value1917;
  set_at<0, 32, 32>(return_value1917, res_update225_stencil_36223_1720_stencil_36222__m_11790);
  return return_value1917;

}

hw_uint<32> stencil_37227_cu1919(hw_uint<32*9>& stencil_36) {
  hw_uint<32> stencil_36_lane_0;
  set_at<0, 32, 32>(stencil_36_lane_0, stencil_36.extract<0, 31>());
  hw_uint<32> stencil_36_lane_1;
  set_at<0, 32, 32>(stencil_36_lane_1, stencil_36.extract<32, 63>());
  hw_uint<32> stencil_36_lane_2;
  set_at<0, 32, 32>(stencil_36_lane_2, stencil_36.extract<64, 95>());
  hw_uint<32> stencil_36_lane_3;
  set_at<0, 32, 32>(stencil_36_lane_3, stencil_36.extract<96, 127>());
  hw_uint<32> stencil_36_lane_4;
  set_at<0, 32, 32>(stencil_36_lane_4, stencil_36.extract<128, 159>());
  hw_uint<32> stencil_36_lane_5;
  set_at<0, 32, 32>(stencil_36_lane_5, stencil_36.extract<160, 191>());
  hw_uint<32> stencil_36_lane_6;
  set_at<0, 32, 32>(stencil_36_lane_6, stencil_36.extract<192, 223>());
  hw_uint<32> stencil_36_lane_7;
  set_at<0, 32, 32>(stencil_36_lane_7, stencil_36.extract<224, 255>());
  hw_uint<32> stencil_36_lane_8;
  set_at<0, 32, 32>(stencil_36_lane_8, stencil_36.extract<256, 287>());

	
auto res_init230 = set_zero_32();

	  hw_uint<32 > stencil_36_lane_0_pack;
  set_at<0, 32, 32>(stencil_36_lane_0_pack, stencil_36_lane_0);
  hw_uint<32 > res_init230_pack;
  set_at<0, 32, 32>(res_init230_pack, res_init230);
auto res_update231_stencil_37229__m_1704_stencil_37228_1780 = add(stencil_36_lane_0_pack, res_init230_pack);

	  hw_uint<32 > stencil_36_lane_1_pack;
  set_at<0, 32, 32>(stencil_36_lane_1_pack, stencil_36_lane_1);
  hw_uint<32 > res_update231_stencil_37229__m_1704_stencil_37228_1780_pack;
  set_at<0, 32, 32>(res_update231_stencil_37229__m_1704_stencil_37228_1780_pack, res_update231_stencil_37229__m_1704_stencil_37228_1780);
auto res_update231_stencil_37229_0706_stencil_37228_1778 = add(stencil_36_lane_1_pack, res_update231_stencil_37229__m_1704_stencil_37228_1780_pack);

	  hw_uint<32 > stencil_36_lane_2_pack;
  set_at<0, 32, 32>(stencil_36_lane_2_pack, stencil_36_lane_2);
  hw_uint<32 > res_update231_stencil_37229_0706_stencil_37228_1778_pack;
  set_at<0, 32, 32>(res_update231_stencil_37229_0706_stencil_37228_1778_pack, res_update231_stencil_37229_0706_stencil_37228_1778);
auto res_update231_stencil_37229_1708_stencil_37228_1776 = add(stencil_36_lane_2_pack, res_update231_stencil_37229_0706_stencil_37228_1778_pack);

	  hw_uint<32 > stencil_36_lane_3_pack;
  set_at<0, 32, 32>(stencil_36_lane_3_pack, stencil_36_lane_3);
  hw_uint<32 > res_update231_stencil_37229_1708_stencil_37228_1776_pack;
  set_at<0, 32, 32>(res_update231_stencil_37229_1708_stencil_37228_1776_pack, res_update231_stencil_37229_1708_stencil_37228_1776);
auto res_update231_stencil_37229__m_1704_stencil_37228_0774 = add(stencil_36_lane_3_pack, res_update231_stencil_37229_1708_stencil_37228_1776_pack);

	  hw_uint<32 > stencil_36_lane_4_pack;
  set_at<0, 32, 32>(stencil_36_lane_4_pack, stencil_36_lane_4);
  hw_uint<32 > res_update231_stencil_37229__m_1704_stencil_37228_0774_pack;
  set_at<0, 32, 32>(res_update231_stencil_37229__m_1704_stencil_37228_0774_pack, res_update231_stencil_37229__m_1704_stencil_37228_0774);
auto res_update231_stencil_37229_0706_stencil_37228_0772 = add(stencil_36_lane_4_pack, res_update231_stencil_37229__m_1704_stencil_37228_0774_pack);

	  hw_uint<32 > stencil_36_lane_5_pack;
  set_at<0, 32, 32>(stencil_36_lane_5_pack, stencil_36_lane_5);
  hw_uint<32 > res_update231_stencil_37229_0706_stencil_37228_0772_pack;
  set_at<0, 32, 32>(res_update231_stencil_37229_0706_stencil_37228_0772_pack, res_update231_stencil_37229_0706_stencil_37228_0772);
auto res_update231_stencil_37229_1708_stencil_37228_0770 = add(stencil_36_lane_5_pack, res_update231_stencil_37229_0706_stencil_37228_0772_pack);

	  hw_uint<32 > stencil_36_lane_6_pack;
  set_at<0, 32, 32>(stencil_36_lane_6_pack, stencil_36_lane_6);
  hw_uint<32 > res_update231_stencil_37229_1708_stencil_37228_0770_pack;
  set_at<0, 32, 32>(res_update231_stencil_37229_1708_stencil_37228_0770_pack, res_update231_stencil_37229_1708_stencil_37228_0770);
auto res_update231_stencil_37229__m_1704_stencil_37228__m_1768 = add(stencil_36_lane_6_pack, res_update231_stencil_37229_1708_stencil_37228_0770_pack);

	  hw_uint<32 > stencil_36_lane_7_pack;
  set_at<0, 32, 32>(stencil_36_lane_7_pack, stencil_36_lane_7);
  hw_uint<32 > res_update231_stencil_37229__m_1704_stencil_37228__m_1768_pack;
  set_at<0, 32, 32>(res_update231_stencil_37229__m_1704_stencil_37228__m_1768_pack, res_update231_stencil_37229__m_1704_stencil_37228__m_1768);
auto res_update231_stencil_37229_0706_stencil_37228__m_1766 = add(stencil_36_lane_7_pack, res_update231_stencil_37229__m_1704_stencil_37228__m_1768_pack);

	  hw_uint<32 > stencil_36_lane_8_pack;
  set_at<0, 32, 32>(stencil_36_lane_8_pack, stencil_36_lane_8);
  hw_uint<32 > res_update231_stencil_37229_0706_stencil_37228__m_1766_pack;
  set_at<0, 32, 32>(res_update231_stencil_37229_0706_stencil_37228__m_1766_pack, res_update231_stencil_37229_0706_stencil_37228__m_1766);
auto res_update231_stencil_37229_1708_stencil_37228__m_1764 = add(stencil_36_lane_8_pack, res_update231_stencil_37229_0706_stencil_37228__m_1766_pack);
  hw_uint<32 > return_value1920;
  set_at<0, 32, 32>(return_value1920, res_update231_stencil_37229_1708_stencil_37228__m_1764);
  return return_value1920;

}

hw_uint<32> stencil_38233_cu1922(hw_uint<32*9>& stencil_37) {
  hw_uint<32> stencil_37_lane_0;
  set_at<0, 32, 32>(stencil_37_lane_0, stencil_37.extract<0, 31>());
  hw_uint<32> stencil_37_lane_1;
  set_at<0, 32, 32>(stencil_37_lane_1, stencil_37.extract<32, 63>());
  hw_uint<32> stencil_37_lane_2;
  set_at<0, 32, 32>(stencil_37_lane_2, stencil_37.extract<64, 95>());
  hw_uint<32> stencil_37_lane_3;
  set_at<0, 32, 32>(stencil_37_lane_3, stencil_37.extract<96, 127>());
  hw_uint<32> stencil_37_lane_4;
  set_at<0, 32, 32>(stencil_37_lane_4, stencil_37.extract<128, 159>());
  hw_uint<32> stencil_37_lane_5;
  set_at<0, 32, 32>(stencil_37_lane_5, stencil_37.extract<160, 191>());
  hw_uint<32> stencil_37_lane_6;
  set_at<0, 32, 32>(stencil_37_lane_6, stencil_37.extract<192, 223>());
  hw_uint<32> stencil_37_lane_7;
  set_at<0, 32, 32>(stencil_37_lane_7, stencil_37.extract<224, 255>());
  hw_uint<32> stencil_37_lane_8;
  set_at<0, 32, 32>(stencil_37_lane_8, stencil_37.extract<256, 287>());

	
auto res_init236 = set_zero_32();

	  hw_uint<32 > stencil_37_lane_0_pack;
  set_at<0, 32, 32>(stencil_37_lane_0_pack, stencil_37_lane_0);
  hw_uint<32 > res_init236_pack;
  set_at<0, 32, 32>(res_init236_pack, res_init236);
auto res_update237_stencil_38235__m_1692_stencil_38234_1816 = add(stencil_37_lane_0_pack, res_init236_pack);

	  hw_uint<32 > stencil_37_lane_1_pack;
  set_at<0, 32, 32>(stencil_37_lane_1_pack, stencil_37_lane_1);
  hw_uint<32 > res_update237_stencil_38235__m_1692_stencil_38234_1816_pack;
  set_at<0, 32, 32>(res_update237_stencil_38235__m_1692_stencil_38234_1816_pack, res_update237_stencil_38235__m_1692_stencil_38234_1816);
auto res_update237_stencil_38235_0694_stencil_38234_1814 = add(stencil_37_lane_1_pack, res_update237_stencil_38235__m_1692_stencil_38234_1816_pack);

	  hw_uint<32 > stencil_37_lane_2_pack;
  set_at<0, 32, 32>(stencil_37_lane_2_pack, stencil_37_lane_2);
  hw_uint<32 > res_update237_stencil_38235_0694_stencil_38234_1814_pack;
  set_at<0, 32, 32>(res_update237_stencil_38235_0694_stencil_38234_1814_pack, res_update237_stencil_38235_0694_stencil_38234_1814);
auto res_update237_stencil_38235_1696_stencil_38234_1812 = add(stencil_37_lane_2_pack, res_update237_stencil_38235_0694_stencil_38234_1814_pack);

	  hw_uint<32 > stencil_37_lane_3_pack;
  set_at<0, 32, 32>(stencil_37_lane_3_pack, stencil_37_lane_3);
  hw_uint<32 > res_update237_stencil_38235_1696_stencil_38234_1812_pack;
  set_at<0, 32, 32>(res_update237_stencil_38235_1696_stencil_38234_1812_pack, res_update237_stencil_38235_1696_stencil_38234_1812);
auto res_update237_stencil_38235__m_1692_stencil_38234_0810 = add(stencil_37_lane_3_pack, res_update237_stencil_38235_1696_stencil_38234_1812_pack);

	  hw_uint<32 > stencil_37_lane_4_pack;
  set_at<0, 32, 32>(stencil_37_lane_4_pack, stencil_37_lane_4);
  hw_uint<32 > res_update237_stencil_38235__m_1692_stencil_38234_0810_pack;
  set_at<0, 32, 32>(res_update237_stencil_38235__m_1692_stencil_38234_0810_pack, res_update237_stencil_38235__m_1692_stencil_38234_0810);
auto res_update237_stencil_38235_0694_stencil_38234_0808 = add(stencil_37_lane_4_pack, res_update237_stencil_38235__m_1692_stencil_38234_0810_pack);

	  hw_uint<32 > stencil_37_lane_5_pack;
  set_at<0, 32, 32>(stencil_37_lane_5_pack, stencil_37_lane_5);
  hw_uint<32 > res_update237_stencil_38235_0694_stencil_38234_0808_pack;
  set_at<0, 32, 32>(res_update237_stencil_38235_0694_stencil_38234_0808_pack, res_update237_stencil_38235_0694_stencil_38234_0808);
auto res_update237_stencil_38235_1696_stencil_38234_0806 = add(stencil_37_lane_5_pack, res_update237_stencil_38235_0694_stencil_38234_0808_pack);

	  hw_uint<32 > stencil_37_lane_6_pack;
  set_at<0, 32, 32>(stencil_37_lane_6_pack, stencil_37_lane_6);
  hw_uint<32 > res_update237_stencil_38235_1696_stencil_38234_0806_pack;
  set_at<0, 32, 32>(res_update237_stencil_38235_1696_stencil_38234_0806_pack, res_update237_stencil_38235_1696_stencil_38234_0806);
auto res_update237_stencil_38235__m_1692_stencil_38234__m_1804 = add(stencil_37_lane_6_pack, res_update237_stencil_38235_1696_stencil_38234_0806_pack);

	  hw_uint<32 > stencil_37_lane_7_pack;
  set_at<0, 32, 32>(stencil_37_lane_7_pack, stencil_37_lane_7);
  hw_uint<32 > res_update237_stencil_38235__m_1692_stencil_38234__m_1804_pack;
  set_at<0, 32, 32>(res_update237_stencil_38235__m_1692_stencil_38234__m_1804_pack, res_update237_stencil_38235__m_1692_stencil_38234__m_1804);
auto res_update237_stencil_38235_0694_stencil_38234__m_1802 = add(stencil_37_lane_7_pack, res_update237_stencil_38235__m_1692_stencil_38234__m_1804_pack);

	  hw_uint<32 > stencil_37_lane_8_pack;
  set_at<0, 32, 32>(stencil_37_lane_8_pack, stencil_37_lane_8);
  hw_uint<32 > res_update237_stencil_38235_0694_stencil_38234__m_1802_pack;
  set_at<0, 32, 32>(res_update237_stencil_38235_0694_stencil_38234__m_1802_pack, res_update237_stencil_38235_0694_stencil_38234__m_1802);
auto res_update237_stencil_38235_1696_stencil_38234__m_1800 = add(stencil_37_lane_8_pack, res_update237_stencil_38235_0694_stencil_38234__m_1802_pack);
  hw_uint<32 > return_value1923;
  set_at<0, 32, 32>(return_value1923, res_update237_stencil_38235_1696_stencil_38234__m_1800);
  return return_value1923;

}

hw_uint<32> stencil_39239_cu1925(hw_uint<32*9>& stencil_38) {
  hw_uint<32> stencil_38_lane_0;
  set_at<0, 32, 32>(stencil_38_lane_0, stencil_38.extract<0, 31>());
  hw_uint<32> stencil_38_lane_1;
  set_at<0, 32, 32>(stencil_38_lane_1, stencil_38.extract<32, 63>());
  hw_uint<32> stencil_38_lane_2;
  set_at<0, 32, 32>(stencil_38_lane_2, stencil_38.extract<64, 95>());
  hw_uint<32> stencil_38_lane_3;
  set_at<0, 32, 32>(stencil_38_lane_3, stencil_38.extract<96, 127>());
  hw_uint<32> stencil_38_lane_4;
  set_at<0, 32, 32>(stencil_38_lane_4, stencil_38.extract<128, 159>());
  hw_uint<32> stencil_38_lane_5;
  set_at<0, 32, 32>(stencil_38_lane_5, stencil_38.extract<160, 191>());
  hw_uint<32> stencil_38_lane_6;
  set_at<0, 32, 32>(stencil_38_lane_6, stencil_38.extract<192, 223>());
  hw_uint<32> stencil_38_lane_7;
  set_at<0, 32, 32>(stencil_38_lane_7, stencil_38.extract<224, 255>());
  hw_uint<32> stencil_38_lane_8;
  set_at<0, 32, 32>(stencil_38_lane_8, stencil_38.extract<256, 287>());

	
auto res_init242 = set_zero_32();

	  hw_uint<32 > stencil_38_lane_0_pack;
  set_at<0, 32, 32>(stencil_38_lane_0_pack, stencil_38_lane_0);
  hw_uint<32 > res_init242_pack;
  set_at<0, 32, 32>(res_init242_pack, res_init242);
auto res_update243_stencil_39241__m_1680_stencil_39240_1852 = add(stencil_38_lane_0_pack, res_init242_pack);

	  hw_uint<32 > stencil_38_lane_1_pack;
  set_at<0, 32, 32>(stencil_38_lane_1_pack, stencil_38_lane_1);
  hw_uint<32 > res_update243_stencil_39241__m_1680_stencil_39240_1852_pack;
  set_at<0, 32, 32>(res_update243_stencil_39241__m_1680_stencil_39240_1852_pack, res_update243_stencil_39241__m_1680_stencil_39240_1852);
auto res_update243_stencil_39241_0682_stencil_39240_1850 = add(stencil_38_lane_1_pack, res_update243_stencil_39241__m_1680_stencil_39240_1852_pack);

	  hw_uint<32 > stencil_38_lane_2_pack;
  set_at<0, 32, 32>(stencil_38_lane_2_pack, stencil_38_lane_2);
  hw_uint<32 > res_update243_stencil_39241_0682_stencil_39240_1850_pack;
  set_at<0, 32, 32>(res_update243_stencil_39241_0682_stencil_39240_1850_pack, res_update243_stencil_39241_0682_stencil_39240_1850);
auto res_update243_stencil_39241_1684_stencil_39240_1848 = add(stencil_38_lane_2_pack, res_update243_stencil_39241_0682_stencil_39240_1850_pack);

	  hw_uint<32 > stencil_38_lane_3_pack;
  set_at<0, 32, 32>(stencil_38_lane_3_pack, stencil_38_lane_3);
  hw_uint<32 > res_update243_stencil_39241_1684_stencil_39240_1848_pack;
  set_at<0, 32, 32>(res_update243_stencil_39241_1684_stencil_39240_1848_pack, res_update243_stencil_39241_1684_stencil_39240_1848);
auto res_update243_stencil_39241__m_1680_stencil_39240_0846 = add(stencil_38_lane_3_pack, res_update243_stencil_39241_1684_stencil_39240_1848_pack);

	  hw_uint<32 > stencil_38_lane_4_pack;
  set_at<0, 32, 32>(stencil_38_lane_4_pack, stencil_38_lane_4);
  hw_uint<32 > res_update243_stencil_39241__m_1680_stencil_39240_0846_pack;
  set_at<0, 32, 32>(res_update243_stencil_39241__m_1680_stencil_39240_0846_pack, res_update243_stencil_39241__m_1680_stencil_39240_0846);
auto res_update243_stencil_39241_0682_stencil_39240_0844 = add(stencil_38_lane_4_pack, res_update243_stencil_39241__m_1680_stencil_39240_0846_pack);

	  hw_uint<32 > stencil_38_lane_5_pack;
  set_at<0, 32, 32>(stencil_38_lane_5_pack, stencil_38_lane_5);
  hw_uint<32 > res_update243_stencil_39241_0682_stencil_39240_0844_pack;
  set_at<0, 32, 32>(res_update243_stencil_39241_0682_stencil_39240_0844_pack, res_update243_stencil_39241_0682_stencil_39240_0844);
auto res_update243_stencil_39241_1684_stencil_39240_0842 = add(stencil_38_lane_5_pack, res_update243_stencil_39241_0682_stencil_39240_0844_pack);

	  hw_uint<32 > stencil_38_lane_6_pack;
  set_at<0, 32, 32>(stencil_38_lane_6_pack, stencil_38_lane_6);
  hw_uint<32 > res_update243_stencil_39241_1684_stencil_39240_0842_pack;
  set_at<0, 32, 32>(res_update243_stencil_39241_1684_stencil_39240_0842_pack, res_update243_stencil_39241_1684_stencil_39240_0842);
auto res_update243_stencil_39241__m_1680_stencil_39240__m_1840 = add(stencil_38_lane_6_pack, res_update243_stencil_39241_1684_stencil_39240_0842_pack);

	  hw_uint<32 > stencil_38_lane_7_pack;
  set_at<0, 32, 32>(stencil_38_lane_7_pack, stencil_38_lane_7);
  hw_uint<32 > res_update243_stencil_39241__m_1680_stencil_39240__m_1840_pack;
  set_at<0, 32, 32>(res_update243_stencil_39241__m_1680_stencil_39240__m_1840_pack, res_update243_stencil_39241__m_1680_stencil_39240__m_1840);
auto res_update243_stencil_39241_0682_stencil_39240__m_1838 = add(stencil_38_lane_7_pack, res_update243_stencil_39241__m_1680_stencil_39240__m_1840_pack);

	  hw_uint<32 > stencil_38_lane_8_pack;
  set_at<0, 32, 32>(stencil_38_lane_8_pack, stencil_38_lane_8);
  hw_uint<32 > res_update243_stencil_39241_0682_stencil_39240__m_1838_pack;
  set_at<0, 32, 32>(res_update243_stencil_39241_0682_stencil_39240__m_1838_pack, res_update243_stencil_39241_0682_stencil_39240__m_1838);
auto res_update243_stencil_39241_1684_stencil_39240__m_1836 = add(stencil_38_lane_8_pack, res_update243_stencil_39241_0682_stencil_39240__m_1838_pack);
  hw_uint<32 > return_value1926;
  set_at<0, 32, 32>(return_value1926, res_update243_stencil_39241_1684_stencil_39240__m_1836);
  return return_value1926;

}

hw_uint<32> stencil_40245_cu1928(hw_uint<32*9>& stencil_39) {
  hw_uint<32> stencil_39_lane_0;
  set_at<0, 32, 32>(stencil_39_lane_0, stencil_39.extract<0, 31>());
  hw_uint<32> stencil_39_lane_1;
  set_at<0, 32, 32>(stencil_39_lane_1, stencil_39.extract<32, 63>());
  hw_uint<32> stencil_39_lane_2;
  set_at<0, 32, 32>(stencil_39_lane_2, stencil_39.extract<64, 95>());
  hw_uint<32> stencil_39_lane_3;
  set_at<0, 32, 32>(stencil_39_lane_3, stencil_39.extract<96, 127>());
  hw_uint<32> stencil_39_lane_4;
  set_at<0, 32, 32>(stencil_39_lane_4, stencil_39.extract<128, 159>());
  hw_uint<32> stencil_39_lane_5;
  set_at<0, 32, 32>(stencil_39_lane_5, stencil_39.extract<160, 191>());
  hw_uint<32> stencil_39_lane_6;
  set_at<0, 32, 32>(stencil_39_lane_6, stencil_39.extract<192, 223>());
  hw_uint<32> stencil_39_lane_7;
  set_at<0, 32, 32>(stencil_39_lane_7, stencil_39.extract<224, 255>());
  hw_uint<32> stencil_39_lane_8;
  set_at<0, 32, 32>(stencil_39_lane_8, stencil_39.extract<256, 287>());

	
auto res_init248 = set_zero_32();

	  hw_uint<32 > stencil_39_lane_0_pack;
  set_at<0, 32, 32>(stencil_39_lane_0_pack, stencil_39_lane_0);
  hw_uint<32 > res_init248_pack;
  set_at<0, 32, 32>(res_init248_pack, res_init248);
auto res_update249_stencil_40247__m_1668_stencil_40246_1888 = add(stencil_39_lane_0_pack, res_init248_pack);

	  hw_uint<32 > stencil_39_lane_1_pack;
  set_at<0, 32, 32>(stencil_39_lane_1_pack, stencil_39_lane_1);
  hw_uint<32 > res_update249_stencil_40247__m_1668_stencil_40246_1888_pack;
  set_at<0, 32, 32>(res_update249_stencil_40247__m_1668_stencil_40246_1888_pack, res_update249_stencil_40247__m_1668_stencil_40246_1888);
auto res_update249_stencil_40247_0670_stencil_40246_1886 = add(stencil_39_lane_1_pack, res_update249_stencil_40247__m_1668_stencil_40246_1888_pack);

	  hw_uint<32 > stencil_39_lane_2_pack;
  set_at<0, 32, 32>(stencil_39_lane_2_pack, stencil_39_lane_2);
  hw_uint<32 > res_update249_stencil_40247_0670_stencil_40246_1886_pack;
  set_at<0, 32, 32>(res_update249_stencil_40247_0670_stencil_40246_1886_pack, res_update249_stencil_40247_0670_stencil_40246_1886);
auto res_update249_stencil_40247_1672_stencil_40246_1884 = add(stencil_39_lane_2_pack, res_update249_stencil_40247_0670_stencil_40246_1886_pack);

	  hw_uint<32 > stencil_39_lane_3_pack;
  set_at<0, 32, 32>(stencil_39_lane_3_pack, stencil_39_lane_3);
  hw_uint<32 > res_update249_stencil_40247_1672_stencil_40246_1884_pack;
  set_at<0, 32, 32>(res_update249_stencil_40247_1672_stencil_40246_1884_pack, res_update249_stencil_40247_1672_stencil_40246_1884);
auto res_update249_stencil_40247__m_1668_stencil_40246_0882 = add(stencil_39_lane_3_pack, res_update249_stencil_40247_1672_stencil_40246_1884_pack);

	  hw_uint<32 > stencil_39_lane_4_pack;
  set_at<0, 32, 32>(stencil_39_lane_4_pack, stencil_39_lane_4);
  hw_uint<32 > res_update249_stencil_40247__m_1668_stencil_40246_0882_pack;
  set_at<0, 32, 32>(res_update249_stencil_40247__m_1668_stencil_40246_0882_pack, res_update249_stencil_40247__m_1668_stencil_40246_0882);
auto res_update249_stencil_40247_0670_stencil_40246_0880 = add(stencil_39_lane_4_pack, res_update249_stencil_40247__m_1668_stencil_40246_0882_pack);

	  hw_uint<32 > stencil_39_lane_5_pack;
  set_at<0, 32, 32>(stencil_39_lane_5_pack, stencil_39_lane_5);
  hw_uint<32 > res_update249_stencil_40247_0670_stencil_40246_0880_pack;
  set_at<0, 32, 32>(res_update249_stencil_40247_0670_stencil_40246_0880_pack, res_update249_stencil_40247_0670_stencil_40246_0880);
auto res_update249_stencil_40247_1672_stencil_40246_0878 = add(stencil_39_lane_5_pack, res_update249_stencil_40247_0670_stencil_40246_0880_pack);

	  hw_uint<32 > stencil_39_lane_6_pack;
  set_at<0, 32, 32>(stencil_39_lane_6_pack, stencil_39_lane_6);
  hw_uint<32 > res_update249_stencil_40247_1672_stencil_40246_0878_pack;
  set_at<0, 32, 32>(res_update249_stencil_40247_1672_stencil_40246_0878_pack, res_update249_stencil_40247_1672_stencil_40246_0878);
auto res_update249_stencil_40247__m_1668_stencil_40246__m_1876 = add(stencil_39_lane_6_pack, res_update249_stencil_40247_1672_stencil_40246_0878_pack);

	  hw_uint<32 > stencil_39_lane_7_pack;
  set_at<0, 32, 32>(stencil_39_lane_7_pack, stencil_39_lane_7);
  hw_uint<32 > res_update249_stencil_40247__m_1668_stencil_40246__m_1876_pack;
  set_at<0, 32, 32>(res_update249_stencil_40247__m_1668_stencil_40246__m_1876_pack, res_update249_stencil_40247__m_1668_stencil_40246__m_1876);
auto res_update249_stencil_40247_0670_stencil_40246__m_1874 = add(stencil_39_lane_7_pack, res_update249_stencil_40247__m_1668_stencil_40246__m_1876_pack);

	  hw_uint<32 > stencil_39_lane_8_pack;
  set_at<0, 32, 32>(stencil_39_lane_8_pack, stencil_39_lane_8);
  hw_uint<32 > res_update249_stencil_40247_0670_stencil_40246__m_1874_pack;
  set_at<0, 32, 32>(res_update249_stencil_40247_0670_stencil_40246__m_1874_pack, res_update249_stencil_40247_0670_stencil_40246__m_1874);
auto res_update249_stencil_40247_1672_stencil_40246__m_1872 = add(stencil_39_lane_8_pack, res_update249_stencil_40247_0670_stencil_40246__m_1874_pack);
  hw_uint<32 > return_value1929;
  set_at<0, 32, 32>(return_value1929, res_update249_stencil_40247_1672_stencil_40246__m_1872);
  return return_value1929;

}

hw_uint<32> stencil_41251_cu1931(hw_uint<32*9>& stencil_40) {
  hw_uint<32> stencil_40_lane_0;
  set_at<0, 32, 32>(stencil_40_lane_0, stencil_40.extract<0, 31>());
  hw_uint<32> stencil_40_lane_1;
  set_at<0, 32, 32>(stencil_40_lane_1, stencil_40.extract<32, 63>());
  hw_uint<32> stencil_40_lane_2;
  set_at<0, 32, 32>(stencil_40_lane_2, stencil_40.extract<64, 95>());
  hw_uint<32> stencil_40_lane_3;
  set_at<0, 32, 32>(stencil_40_lane_3, stencil_40.extract<96, 127>());
  hw_uint<32> stencil_40_lane_4;
  set_at<0, 32, 32>(stencil_40_lane_4, stencil_40.extract<128, 159>());
  hw_uint<32> stencil_40_lane_5;
  set_at<0, 32, 32>(stencil_40_lane_5, stencil_40.extract<160, 191>());
  hw_uint<32> stencil_40_lane_6;
  set_at<0, 32, 32>(stencil_40_lane_6, stencil_40.extract<192, 223>());
  hw_uint<32> stencil_40_lane_7;
  set_at<0, 32, 32>(stencil_40_lane_7, stencil_40.extract<224, 255>());
  hw_uint<32> stencil_40_lane_8;
  set_at<0, 32, 32>(stencil_40_lane_8, stencil_40.extract<256, 287>());

	
auto res_init254 = set_zero_32();

	  hw_uint<32 > stencil_40_lane_0_pack;
  set_at<0, 32, 32>(stencil_40_lane_0_pack, stencil_40_lane_0);
  hw_uint<32 > res_init254_pack;
  set_at<0, 32, 32>(res_init254_pack, res_init254);
auto res_update255_stencil_41253__m_1656_stencil_41252_1924 = add(stencil_40_lane_0_pack, res_init254_pack);

	  hw_uint<32 > stencil_40_lane_1_pack;
  set_at<0, 32, 32>(stencil_40_lane_1_pack, stencil_40_lane_1);
  hw_uint<32 > res_update255_stencil_41253__m_1656_stencil_41252_1924_pack;
  set_at<0, 32, 32>(res_update255_stencil_41253__m_1656_stencil_41252_1924_pack, res_update255_stencil_41253__m_1656_stencil_41252_1924);
auto res_update255_stencil_41253_0658_stencil_41252_1922 = add(stencil_40_lane_1_pack, res_update255_stencil_41253__m_1656_stencil_41252_1924_pack);

	  hw_uint<32 > stencil_40_lane_2_pack;
  set_at<0, 32, 32>(stencil_40_lane_2_pack, stencil_40_lane_2);
  hw_uint<32 > res_update255_stencil_41253_0658_stencil_41252_1922_pack;
  set_at<0, 32, 32>(res_update255_stencil_41253_0658_stencil_41252_1922_pack, res_update255_stencil_41253_0658_stencil_41252_1922);
auto res_update255_stencil_41253_1660_stencil_41252_1920 = add(stencil_40_lane_2_pack, res_update255_stencil_41253_0658_stencil_41252_1922_pack);

	  hw_uint<32 > stencil_40_lane_3_pack;
  set_at<0, 32, 32>(stencil_40_lane_3_pack, stencil_40_lane_3);
  hw_uint<32 > res_update255_stencil_41253_1660_stencil_41252_1920_pack;
  set_at<0, 32, 32>(res_update255_stencil_41253_1660_stencil_41252_1920_pack, res_update255_stencil_41253_1660_stencil_41252_1920);
auto res_update255_stencil_41253__m_1656_stencil_41252_0918 = add(stencil_40_lane_3_pack, res_update255_stencil_41253_1660_stencil_41252_1920_pack);

	  hw_uint<32 > stencil_40_lane_4_pack;
  set_at<0, 32, 32>(stencil_40_lane_4_pack, stencil_40_lane_4);
  hw_uint<32 > res_update255_stencil_41253__m_1656_stencil_41252_0918_pack;
  set_at<0, 32, 32>(res_update255_stencil_41253__m_1656_stencil_41252_0918_pack, res_update255_stencil_41253__m_1656_stencil_41252_0918);
auto res_update255_stencil_41253_0658_stencil_41252_0916 = add(stencil_40_lane_4_pack, res_update255_stencil_41253__m_1656_stencil_41252_0918_pack);

	  hw_uint<32 > stencil_40_lane_5_pack;
  set_at<0, 32, 32>(stencil_40_lane_5_pack, stencil_40_lane_5);
  hw_uint<32 > res_update255_stencil_41253_0658_stencil_41252_0916_pack;
  set_at<0, 32, 32>(res_update255_stencil_41253_0658_stencil_41252_0916_pack, res_update255_stencil_41253_0658_stencil_41252_0916);
auto res_update255_stencil_41253_1660_stencil_41252_0914 = add(stencil_40_lane_5_pack, res_update255_stencil_41253_0658_stencil_41252_0916_pack);

	  hw_uint<32 > stencil_40_lane_6_pack;
  set_at<0, 32, 32>(stencil_40_lane_6_pack, stencil_40_lane_6);
  hw_uint<32 > res_update255_stencil_41253_1660_stencil_41252_0914_pack;
  set_at<0, 32, 32>(res_update255_stencil_41253_1660_stencil_41252_0914_pack, res_update255_stencil_41253_1660_stencil_41252_0914);
auto res_update255_stencil_41253__m_1656_stencil_41252__m_1912 = add(stencil_40_lane_6_pack, res_update255_stencil_41253_1660_stencil_41252_0914_pack);

	  hw_uint<32 > stencil_40_lane_7_pack;
  set_at<0, 32, 32>(stencil_40_lane_7_pack, stencil_40_lane_7);
  hw_uint<32 > res_update255_stencil_41253__m_1656_stencil_41252__m_1912_pack;
  set_at<0, 32, 32>(res_update255_stencil_41253__m_1656_stencil_41252__m_1912_pack, res_update255_stencil_41253__m_1656_stencil_41252__m_1912);
auto res_update255_stencil_41253_0658_stencil_41252__m_1910 = add(stencil_40_lane_7_pack, res_update255_stencil_41253__m_1656_stencil_41252__m_1912_pack);

	  hw_uint<32 > stencil_40_lane_8_pack;
  set_at<0, 32, 32>(stencil_40_lane_8_pack, stencil_40_lane_8);
  hw_uint<32 > res_update255_stencil_41253_0658_stencil_41252__m_1910_pack;
  set_at<0, 32, 32>(res_update255_stencil_41253_0658_stencil_41252__m_1910_pack, res_update255_stencil_41253_0658_stencil_41252__m_1910);
auto res_update255_stencil_41253_1660_stencil_41252__m_1908 = add(stencil_40_lane_8_pack, res_update255_stencil_41253_0658_stencil_41252__m_1910_pack);
  hw_uint<32 > return_value1932;
  set_at<0, 32, 32>(return_value1932, res_update255_stencil_41253_1660_stencil_41252__m_1908);
  return return_value1932;

}

hw_uint<32> stencil_42257_cu1934(hw_uint<32*9>& stencil_41) {
  hw_uint<32> stencil_41_lane_0;
  set_at<0, 32, 32>(stencil_41_lane_0, stencil_41.extract<0, 31>());
  hw_uint<32> stencil_41_lane_1;
  set_at<0, 32, 32>(stencil_41_lane_1, stencil_41.extract<32, 63>());
  hw_uint<32> stencil_41_lane_2;
  set_at<0, 32, 32>(stencil_41_lane_2, stencil_41.extract<64, 95>());
  hw_uint<32> stencil_41_lane_3;
  set_at<0, 32, 32>(stencil_41_lane_3, stencil_41.extract<96, 127>());
  hw_uint<32> stencil_41_lane_4;
  set_at<0, 32, 32>(stencil_41_lane_4, stencil_41.extract<128, 159>());
  hw_uint<32> stencil_41_lane_5;
  set_at<0, 32, 32>(stencil_41_lane_5, stencil_41.extract<160, 191>());
  hw_uint<32> stencil_41_lane_6;
  set_at<0, 32, 32>(stencil_41_lane_6, stencil_41.extract<192, 223>());
  hw_uint<32> stencil_41_lane_7;
  set_at<0, 32, 32>(stencil_41_lane_7, stencil_41.extract<224, 255>());
  hw_uint<32> stencil_41_lane_8;
  set_at<0, 32, 32>(stencil_41_lane_8, stencil_41.extract<256, 287>());

	
auto res_init260 = set_zero_32();

	  hw_uint<32 > stencil_41_lane_0_pack;
  set_at<0, 32, 32>(stencil_41_lane_0_pack, stencil_41_lane_0);
  hw_uint<32 > res_init260_pack;
  set_at<0, 32, 32>(res_init260_pack, res_init260);
auto res_update261_stencil_42259__m_1644_stencil_42258_1960 = add(stencil_41_lane_0_pack, res_init260_pack);

	  hw_uint<32 > stencil_41_lane_1_pack;
  set_at<0, 32, 32>(stencil_41_lane_1_pack, stencil_41_lane_1);
  hw_uint<32 > res_update261_stencil_42259__m_1644_stencil_42258_1960_pack;
  set_at<0, 32, 32>(res_update261_stencil_42259__m_1644_stencil_42258_1960_pack, res_update261_stencil_42259__m_1644_stencil_42258_1960);
auto res_update261_stencil_42259_0646_stencil_42258_1958 = add(stencil_41_lane_1_pack, res_update261_stencil_42259__m_1644_stencil_42258_1960_pack);

	  hw_uint<32 > stencil_41_lane_2_pack;
  set_at<0, 32, 32>(stencil_41_lane_2_pack, stencil_41_lane_2);
  hw_uint<32 > res_update261_stencil_42259_0646_stencil_42258_1958_pack;
  set_at<0, 32, 32>(res_update261_stencil_42259_0646_stencil_42258_1958_pack, res_update261_stencil_42259_0646_stencil_42258_1958);
auto res_update261_stencil_42259_1648_stencil_42258_1956 = add(stencil_41_lane_2_pack, res_update261_stencil_42259_0646_stencil_42258_1958_pack);

	  hw_uint<32 > stencil_41_lane_3_pack;
  set_at<0, 32, 32>(stencil_41_lane_3_pack, stencil_41_lane_3);
  hw_uint<32 > res_update261_stencil_42259_1648_stencil_42258_1956_pack;
  set_at<0, 32, 32>(res_update261_stencil_42259_1648_stencil_42258_1956_pack, res_update261_stencil_42259_1648_stencil_42258_1956);
auto res_update261_stencil_42259__m_1644_stencil_42258_0954 = add(stencil_41_lane_3_pack, res_update261_stencil_42259_1648_stencil_42258_1956_pack);

	  hw_uint<32 > stencil_41_lane_4_pack;
  set_at<0, 32, 32>(stencil_41_lane_4_pack, stencil_41_lane_4);
  hw_uint<32 > res_update261_stencil_42259__m_1644_stencil_42258_0954_pack;
  set_at<0, 32, 32>(res_update261_stencil_42259__m_1644_stencil_42258_0954_pack, res_update261_stencil_42259__m_1644_stencil_42258_0954);
auto res_update261_stencil_42259_0646_stencil_42258_0952 = add(stencil_41_lane_4_pack, res_update261_stencil_42259__m_1644_stencil_42258_0954_pack);

	  hw_uint<32 > stencil_41_lane_5_pack;
  set_at<0, 32, 32>(stencil_41_lane_5_pack, stencil_41_lane_5);
  hw_uint<32 > res_update261_stencil_42259_0646_stencil_42258_0952_pack;
  set_at<0, 32, 32>(res_update261_stencil_42259_0646_stencil_42258_0952_pack, res_update261_stencil_42259_0646_stencil_42258_0952);
auto res_update261_stencil_42259_1648_stencil_42258_0950 = add(stencil_41_lane_5_pack, res_update261_stencil_42259_0646_stencil_42258_0952_pack);

	  hw_uint<32 > stencil_41_lane_6_pack;
  set_at<0, 32, 32>(stencil_41_lane_6_pack, stencil_41_lane_6);
  hw_uint<32 > res_update261_stencil_42259_1648_stencil_42258_0950_pack;
  set_at<0, 32, 32>(res_update261_stencil_42259_1648_stencil_42258_0950_pack, res_update261_stencil_42259_1648_stencil_42258_0950);
auto res_update261_stencil_42259__m_1644_stencil_42258__m_1948 = add(stencil_41_lane_6_pack, res_update261_stencil_42259_1648_stencil_42258_0950_pack);

	  hw_uint<32 > stencil_41_lane_7_pack;
  set_at<0, 32, 32>(stencil_41_lane_7_pack, stencil_41_lane_7);
  hw_uint<32 > res_update261_stencil_42259__m_1644_stencil_42258__m_1948_pack;
  set_at<0, 32, 32>(res_update261_stencil_42259__m_1644_stencil_42258__m_1948_pack, res_update261_stencil_42259__m_1644_stencil_42258__m_1948);
auto res_update261_stencil_42259_0646_stencil_42258__m_1946 = add(stencil_41_lane_7_pack, res_update261_stencil_42259__m_1644_stencil_42258__m_1948_pack);

	  hw_uint<32 > stencil_41_lane_8_pack;
  set_at<0, 32, 32>(stencil_41_lane_8_pack, stencil_41_lane_8);
  hw_uint<32 > res_update261_stencil_42259_0646_stencil_42258__m_1946_pack;
  set_at<0, 32, 32>(res_update261_stencil_42259_0646_stencil_42258__m_1946_pack, res_update261_stencil_42259_0646_stencil_42258__m_1946);
auto res_update261_stencil_42259_1648_stencil_42258__m_1944 = add(stencil_41_lane_8_pack, res_update261_stencil_42259_0646_stencil_42258__m_1946_pack);
  hw_uint<32 > return_value1935;
  set_at<0, 32, 32>(return_value1935, res_update261_stencil_42259_1648_stencil_42258__m_1944);
  return return_value1935;

}

hw_uint<32> stencil_43263_cu1937(hw_uint<32*9>& stencil_42) {
  hw_uint<32> stencil_42_lane_0;
  set_at<0, 32, 32>(stencil_42_lane_0, stencil_42.extract<0, 31>());
  hw_uint<32> stencil_42_lane_1;
  set_at<0, 32, 32>(stencil_42_lane_1, stencil_42.extract<32, 63>());
  hw_uint<32> stencil_42_lane_2;
  set_at<0, 32, 32>(stencil_42_lane_2, stencil_42.extract<64, 95>());
  hw_uint<32> stencil_42_lane_3;
  set_at<0, 32, 32>(stencil_42_lane_3, stencil_42.extract<96, 127>());
  hw_uint<32> stencil_42_lane_4;
  set_at<0, 32, 32>(stencil_42_lane_4, stencil_42.extract<128, 159>());
  hw_uint<32> stencil_42_lane_5;
  set_at<0, 32, 32>(stencil_42_lane_5, stencil_42.extract<160, 191>());
  hw_uint<32> stencil_42_lane_6;
  set_at<0, 32, 32>(stencil_42_lane_6, stencil_42.extract<192, 223>());
  hw_uint<32> stencil_42_lane_7;
  set_at<0, 32, 32>(stencil_42_lane_7, stencil_42.extract<224, 255>());
  hw_uint<32> stencil_42_lane_8;
  set_at<0, 32, 32>(stencil_42_lane_8, stencil_42.extract<256, 287>());

	
auto res_init266 = set_zero_32();

	  hw_uint<32 > stencil_42_lane_0_pack;
  set_at<0, 32, 32>(stencil_42_lane_0_pack, stencil_42_lane_0);
  hw_uint<32 > res_init266_pack;
  set_at<0, 32, 32>(res_init266_pack, res_init266);
auto res_update267_stencil_43265__m_1620_stencil_43264_11032 = add(stencil_42_lane_0_pack, res_init266_pack);

	  hw_uint<32 > stencil_42_lane_1_pack;
  set_at<0, 32, 32>(stencil_42_lane_1_pack, stencil_42_lane_1);
  hw_uint<32 > res_update267_stencil_43265__m_1620_stencil_43264_11032_pack;
  set_at<0, 32, 32>(res_update267_stencil_43265__m_1620_stencil_43264_11032_pack, res_update267_stencil_43265__m_1620_stencil_43264_11032);
auto res_update267_stencil_43265_0622_stencil_43264_11030 = add(stencil_42_lane_1_pack, res_update267_stencil_43265__m_1620_stencil_43264_11032_pack);

	  hw_uint<32 > stencil_42_lane_2_pack;
  set_at<0, 32, 32>(stencil_42_lane_2_pack, stencil_42_lane_2);
  hw_uint<32 > res_update267_stencil_43265_0622_stencil_43264_11030_pack;
  set_at<0, 32, 32>(res_update267_stencil_43265_0622_stencil_43264_11030_pack, res_update267_stencil_43265_0622_stencil_43264_11030);
auto res_update267_stencil_43265_1624_stencil_43264_11028 = add(stencil_42_lane_2_pack, res_update267_stencil_43265_0622_stencil_43264_11030_pack);

	  hw_uint<32 > stencil_42_lane_3_pack;
  set_at<0, 32, 32>(stencil_42_lane_3_pack, stencil_42_lane_3);
  hw_uint<32 > res_update267_stencil_43265_1624_stencil_43264_11028_pack;
  set_at<0, 32, 32>(res_update267_stencil_43265_1624_stencil_43264_11028_pack, res_update267_stencil_43265_1624_stencil_43264_11028);
auto res_update267_stencil_43265__m_1620_stencil_43264_01026 = add(stencil_42_lane_3_pack, res_update267_stencil_43265_1624_stencil_43264_11028_pack);

	  hw_uint<32 > stencil_42_lane_4_pack;
  set_at<0, 32, 32>(stencil_42_lane_4_pack, stencil_42_lane_4);
  hw_uint<32 > res_update267_stencil_43265__m_1620_stencil_43264_01026_pack;
  set_at<0, 32, 32>(res_update267_stencil_43265__m_1620_stencil_43264_01026_pack, res_update267_stencil_43265__m_1620_stencil_43264_01026);
auto res_update267_stencil_43265_0622_stencil_43264_01024 = add(stencil_42_lane_4_pack, res_update267_stencil_43265__m_1620_stencil_43264_01026_pack);

	  hw_uint<32 > stencil_42_lane_5_pack;
  set_at<0, 32, 32>(stencil_42_lane_5_pack, stencil_42_lane_5);
  hw_uint<32 > res_update267_stencil_43265_0622_stencil_43264_01024_pack;
  set_at<0, 32, 32>(res_update267_stencil_43265_0622_stencil_43264_01024_pack, res_update267_stencil_43265_0622_stencil_43264_01024);
auto res_update267_stencil_43265_1624_stencil_43264_01022 = add(stencil_42_lane_5_pack, res_update267_stencil_43265_0622_stencil_43264_01024_pack);

	  hw_uint<32 > stencil_42_lane_6_pack;
  set_at<0, 32, 32>(stencil_42_lane_6_pack, stencil_42_lane_6);
  hw_uint<32 > res_update267_stencil_43265_1624_stencil_43264_01022_pack;
  set_at<0, 32, 32>(res_update267_stencil_43265_1624_stencil_43264_01022_pack, res_update267_stencil_43265_1624_stencil_43264_01022);
auto res_update267_stencil_43265__m_1620_stencil_43264__m_11020 = add(stencil_42_lane_6_pack, res_update267_stencil_43265_1624_stencil_43264_01022_pack);

	  hw_uint<32 > stencil_42_lane_7_pack;
  set_at<0, 32, 32>(stencil_42_lane_7_pack, stencil_42_lane_7);
  hw_uint<32 > res_update267_stencil_43265__m_1620_stencil_43264__m_11020_pack;
  set_at<0, 32, 32>(res_update267_stencil_43265__m_1620_stencil_43264__m_11020_pack, res_update267_stencil_43265__m_1620_stencil_43264__m_11020);
auto res_update267_stencil_43265_0622_stencil_43264__m_11018 = add(stencil_42_lane_7_pack, res_update267_stencil_43265__m_1620_stencil_43264__m_11020_pack);

	  hw_uint<32 > stencil_42_lane_8_pack;
  set_at<0, 32, 32>(stencil_42_lane_8_pack, stencil_42_lane_8);
  hw_uint<32 > res_update267_stencil_43265_0622_stencil_43264__m_11018_pack;
  set_at<0, 32, 32>(res_update267_stencil_43265_0622_stencil_43264__m_11018_pack, res_update267_stencil_43265_0622_stencil_43264__m_11018);
auto res_update267_stencil_43265_1624_stencil_43264__m_11016 = add(stencil_42_lane_8_pack, res_update267_stencil_43265_0622_stencil_43264__m_11018_pack);
  hw_uint<32 > return_value1938;
  set_at<0, 32, 32>(return_value1938, res_update267_stencil_43265_1624_stencil_43264__m_11016);
  return return_value1938;

}

hw_uint<32> stencil_44269_cu1940(hw_uint<32*9>& stencil_43) {
  hw_uint<32> stencil_43_lane_0;
  set_at<0, 32, 32>(stencil_43_lane_0, stencil_43.extract<0, 31>());
  hw_uint<32> stencil_43_lane_1;
  set_at<0, 32, 32>(stencil_43_lane_1, stencil_43.extract<32, 63>());
  hw_uint<32> stencil_43_lane_2;
  set_at<0, 32, 32>(stencil_43_lane_2, stencil_43.extract<64, 95>());
  hw_uint<32> stencil_43_lane_3;
  set_at<0, 32, 32>(stencil_43_lane_3, stencil_43.extract<96, 127>());
  hw_uint<32> stencil_43_lane_4;
  set_at<0, 32, 32>(stencil_43_lane_4, stencil_43.extract<128, 159>());
  hw_uint<32> stencil_43_lane_5;
  set_at<0, 32, 32>(stencil_43_lane_5, stencil_43.extract<160, 191>());
  hw_uint<32> stencil_43_lane_6;
  set_at<0, 32, 32>(stencil_43_lane_6, stencil_43.extract<192, 223>());
  hw_uint<32> stencil_43_lane_7;
  set_at<0, 32, 32>(stencil_43_lane_7, stencil_43.extract<224, 255>());
  hw_uint<32> stencil_43_lane_8;
  set_at<0, 32, 32>(stencil_43_lane_8, stencil_43.extract<256, 287>());

	
auto res_init272 = set_zero_32();

	  hw_uint<32 > stencil_43_lane_0_pack;
  set_at<0, 32, 32>(stencil_43_lane_0_pack, stencil_43_lane_0);
  hw_uint<32 > res_init272_pack;
  set_at<0, 32, 32>(res_init272_pack, res_init272);
auto res_update273_stencil_44271__m_1608_stencil_44270_11068 = add(stencil_43_lane_0_pack, res_init272_pack);

	  hw_uint<32 > stencil_43_lane_1_pack;
  set_at<0, 32, 32>(stencil_43_lane_1_pack, stencil_43_lane_1);
  hw_uint<32 > res_update273_stencil_44271__m_1608_stencil_44270_11068_pack;
  set_at<0, 32, 32>(res_update273_stencil_44271__m_1608_stencil_44270_11068_pack, res_update273_stencil_44271__m_1608_stencil_44270_11068);
auto res_update273_stencil_44271_0610_stencil_44270_11066 = add(stencil_43_lane_1_pack, res_update273_stencil_44271__m_1608_stencil_44270_11068_pack);

	  hw_uint<32 > stencil_43_lane_2_pack;
  set_at<0, 32, 32>(stencil_43_lane_2_pack, stencil_43_lane_2);
  hw_uint<32 > res_update273_stencil_44271_0610_stencil_44270_11066_pack;
  set_at<0, 32, 32>(res_update273_stencil_44271_0610_stencil_44270_11066_pack, res_update273_stencil_44271_0610_stencil_44270_11066);
auto res_update273_stencil_44271_1612_stencil_44270_11064 = add(stencil_43_lane_2_pack, res_update273_stencil_44271_0610_stencil_44270_11066_pack);

	  hw_uint<32 > stencil_43_lane_3_pack;
  set_at<0, 32, 32>(stencil_43_lane_3_pack, stencil_43_lane_3);
  hw_uint<32 > res_update273_stencil_44271_1612_stencil_44270_11064_pack;
  set_at<0, 32, 32>(res_update273_stencil_44271_1612_stencil_44270_11064_pack, res_update273_stencil_44271_1612_stencil_44270_11064);
auto res_update273_stencil_44271__m_1608_stencil_44270_01062 = add(stencil_43_lane_3_pack, res_update273_stencil_44271_1612_stencil_44270_11064_pack);

	  hw_uint<32 > stencil_43_lane_4_pack;
  set_at<0, 32, 32>(stencil_43_lane_4_pack, stencil_43_lane_4);
  hw_uint<32 > res_update273_stencil_44271__m_1608_stencil_44270_01062_pack;
  set_at<0, 32, 32>(res_update273_stencil_44271__m_1608_stencil_44270_01062_pack, res_update273_stencil_44271__m_1608_stencil_44270_01062);
auto res_update273_stencil_44271_0610_stencil_44270_01060 = add(stencil_43_lane_4_pack, res_update273_stencil_44271__m_1608_stencil_44270_01062_pack);

	  hw_uint<32 > stencil_43_lane_5_pack;
  set_at<0, 32, 32>(stencil_43_lane_5_pack, stencil_43_lane_5);
  hw_uint<32 > res_update273_stencil_44271_0610_stencil_44270_01060_pack;
  set_at<0, 32, 32>(res_update273_stencil_44271_0610_stencil_44270_01060_pack, res_update273_stencil_44271_0610_stencil_44270_01060);
auto res_update273_stencil_44271_1612_stencil_44270_01058 = add(stencil_43_lane_5_pack, res_update273_stencil_44271_0610_stencil_44270_01060_pack);

	  hw_uint<32 > stencil_43_lane_6_pack;
  set_at<0, 32, 32>(stencil_43_lane_6_pack, stencil_43_lane_6);
  hw_uint<32 > res_update273_stencil_44271_1612_stencil_44270_01058_pack;
  set_at<0, 32, 32>(res_update273_stencil_44271_1612_stencil_44270_01058_pack, res_update273_stencil_44271_1612_stencil_44270_01058);
auto res_update273_stencil_44271__m_1608_stencil_44270__m_11056 = add(stencil_43_lane_6_pack, res_update273_stencil_44271_1612_stencil_44270_01058_pack);

	  hw_uint<32 > stencil_43_lane_7_pack;
  set_at<0, 32, 32>(stencil_43_lane_7_pack, stencil_43_lane_7);
  hw_uint<32 > res_update273_stencil_44271__m_1608_stencil_44270__m_11056_pack;
  set_at<0, 32, 32>(res_update273_stencil_44271__m_1608_stencil_44270__m_11056_pack, res_update273_stencil_44271__m_1608_stencil_44270__m_11056);
auto res_update273_stencil_44271_0610_stencil_44270__m_11054 = add(stencil_43_lane_7_pack, res_update273_stencil_44271__m_1608_stencil_44270__m_11056_pack);

	  hw_uint<32 > stencil_43_lane_8_pack;
  set_at<0, 32, 32>(stencil_43_lane_8_pack, stencil_43_lane_8);
  hw_uint<32 > res_update273_stencil_44271_0610_stencil_44270__m_11054_pack;
  set_at<0, 32, 32>(res_update273_stencil_44271_0610_stencil_44270__m_11054_pack, res_update273_stencil_44271_0610_stencil_44270__m_11054);
auto res_update273_stencil_44271_1612_stencil_44270__m_11052 = add(stencil_43_lane_8_pack, res_update273_stencil_44271_0610_stencil_44270__m_11054_pack);
  hw_uint<32 > return_value1941;
  set_at<0, 32, 32>(return_value1941, res_update273_stencil_44271_1612_stencil_44270__m_11052);
  return return_value1941;

}

hw_uint<32> stencil_45275_cu1943(hw_uint<32*9>& stencil_44) {
  hw_uint<32> stencil_44_lane_0;
  set_at<0, 32, 32>(stencil_44_lane_0, stencil_44.extract<0, 31>());
  hw_uint<32> stencil_44_lane_1;
  set_at<0, 32, 32>(stencil_44_lane_1, stencil_44.extract<32, 63>());
  hw_uint<32> stencil_44_lane_2;
  set_at<0, 32, 32>(stencil_44_lane_2, stencil_44.extract<64, 95>());
  hw_uint<32> stencil_44_lane_3;
  set_at<0, 32, 32>(stencil_44_lane_3, stencil_44.extract<96, 127>());
  hw_uint<32> stencil_44_lane_4;
  set_at<0, 32, 32>(stencil_44_lane_4, stencil_44.extract<128, 159>());
  hw_uint<32> stencil_44_lane_5;
  set_at<0, 32, 32>(stencil_44_lane_5, stencil_44.extract<160, 191>());
  hw_uint<32> stencil_44_lane_6;
  set_at<0, 32, 32>(stencil_44_lane_6, stencil_44.extract<192, 223>());
  hw_uint<32> stencil_44_lane_7;
  set_at<0, 32, 32>(stencil_44_lane_7, stencil_44.extract<224, 255>());
  hw_uint<32> stencil_44_lane_8;
  set_at<0, 32, 32>(stencil_44_lane_8, stencil_44.extract<256, 287>());

	
auto res_init278 = set_zero_32();

	  hw_uint<32 > stencil_44_lane_0_pack;
  set_at<0, 32, 32>(stencil_44_lane_0_pack, stencil_44_lane_0);
  hw_uint<32 > res_init278_pack;
  set_at<0, 32, 32>(res_init278_pack, res_init278);
auto res_update279_stencil_45277__m_1596_stencil_45276_11104 = add(stencil_44_lane_0_pack, res_init278_pack);

	  hw_uint<32 > stencil_44_lane_1_pack;
  set_at<0, 32, 32>(stencil_44_lane_1_pack, stencil_44_lane_1);
  hw_uint<32 > res_update279_stencil_45277__m_1596_stencil_45276_11104_pack;
  set_at<0, 32, 32>(res_update279_stencil_45277__m_1596_stencil_45276_11104_pack, res_update279_stencil_45277__m_1596_stencil_45276_11104);
auto res_update279_stencil_45277_0598_stencil_45276_11102 = add(stencil_44_lane_1_pack, res_update279_stencil_45277__m_1596_stencil_45276_11104_pack);

	  hw_uint<32 > stencil_44_lane_2_pack;
  set_at<0, 32, 32>(stencil_44_lane_2_pack, stencil_44_lane_2);
  hw_uint<32 > res_update279_stencil_45277_0598_stencil_45276_11102_pack;
  set_at<0, 32, 32>(res_update279_stencil_45277_0598_stencil_45276_11102_pack, res_update279_stencil_45277_0598_stencil_45276_11102);
auto res_update279_stencil_45277_1600_stencil_45276_11100 = add(stencil_44_lane_2_pack, res_update279_stencil_45277_0598_stencil_45276_11102_pack);

	  hw_uint<32 > stencil_44_lane_3_pack;
  set_at<0, 32, 32>(stencil_44_lane_3_pack, stencil_44_lane_3);
  hw_uint<32 > res_update279_stencil_45277_1600_stencil_45276_11100_pack;
  set_at<0, 32, 32>(res_update279_stencil_45277_1600_stencil_45276_11100_pack, res_update279_stencil_45277_1600_stencil_45276_11100);
auto res_update279_stencil_45277__m_1596_stencil_45276_01098 = add(stencil_44_lane_3_pack, res_update279_stencil_45277_1600_stencil_45276_11100_pack);

	  hw_uint<32 > stencil_44_lane_4_pack;
  set_at<0, 32, 32>(stencil_44_lane_4_pack, stencil_44_lane_4);
  hw_uint<32 > res_update279_stencil_45277__m_1596_stencil_45276_01098_pack;
  set_at<0, 32, 32>(res_update279_stencil_45277__m_1596_stencil_45276_01098_pack, res_update279_stencil_45277__m_1596_stencil_45276_01098);
auto res_update279_stencil_45277_0598_stencil_45276_01096 = add(stencil_44_lane_4_pack, res_update279_stencil_45277__m_1596_stencil_45276_01098_pack);

	  hw_uint<32 > stencil_44_lane_5_pack;
  set_at<0, 32, 32>(stencil_44_lane_5_pack, stencil_44_lane_5);
  hw_uint<32 > res_update279_stencil_45277_0598_stencil_45276_01096_pack;
  set_at<0, 32, 32>(res_update279_stencil_45277_0598_stencil_45276_01096_pack, res_update279_stencil_45277_0598_stencil_45276_01096);
auto res_update279_stencil_45277_1600_stencil_45276_01094 = add(stencil_44_lane_5_pack, res_update279_stencil_45277_0598_stencil_45276_01096_pack);

	  hw_uint<32 > stencil_44_lane_6_pack;
  set_at<0, 32, 32>(stencil_44_lane_6_pack, stencil_44_lane_6);
  hw_uint<32 > res_update279_stencil_45277_1600_stencil_45276_01094_pack;
  set_at<0, 32, 32>(res_update279_stencil_45277_1600_stencil_45276_01094_pack, res_update279_stencil_45277_1600_stencil_45276_01094);
auto res_update279_stencil_45277__m_1596_stencil_45276__m_11092 = add(stencil_44_lane_6_pack, res_update279_stencil_45277_1600_stencil_45276_01094_pack);

	  hw_uint<32 > stencil_44_lane_7_pack;
  set_at<0, 32, 32>(stencil_44_lane_7_pack, stencil_44_lane_7);
  hw_uint<32 > res_update279_stencil_45277__m_1596_stencil_45276__m_11092_pack;
  set_at<0, 32, 32>(res_update279_stencil_45277__m_1596_stencil_45276__m_11092_pack, res_update279_stencil_45277__m_1596_stencil_45276__m_11092);
auto res_update279_stencil_45277_0598_stencil_45276__m_11090 = add(stencil_44_lane_7_pack, res_update279_stencil_45277__m_1596_stencil_45276__m_11092_pack);

	  hw_uint<32 > stencil_44_lane_8_pack;
  set_at<0, 32, 32>(stencil_44_lane_8_pack, stencil_44_lane_8);
  hw_uint<32 > res_update279_stencil_45277_0598_stencil_45276__m_11090_pack;
  set_at<0, 32, 32>(res_update279_stencil_45277_0598_stencil_45276__m_11090_pack, res_update279_stencil_45277_0598_stencil_45276__m_11090);
auto res_update279_stencil_45277_1600_stencil_45276__m_11088 = add(stencil_44_lane_8_pack, res_update279_stencil_45277_0598_stencil_45276__m_11090_pack);
  hw_uint<32 > return_value1944;
  set_at<0, 32, 32>(return_value1944, res_update279_stencil_45277_1600_stencil_45276__m_11088);
  return return_value1944;

}

hw_uint<32> stencil_46281_cu1946(hw_uint<32*9>& stencil_45) {
  hw_uint<32> stencil_45_lane_0;
  set_at<0, 32, 32>(stencil_45_lane_0, stencil_45.extract<0, 31>());
  hw_uint<32> stencil_45_lane_1;
  set_at<0, 32, 32>(stencil_45_lane_1, stencil_45.extract<32, 63>());
  hw_uint<32> stencil_45_lane_2;
  set_at<0, 32, 32>(stencil_45_lane_2, stencil_45.extract<64, 95>());
  hw_uint<32> stencil_45_lane_3;
  set_at<0, 32, 32>(stencil_45_lane_3, stencil_45.extract<96, 127>());
  hw_uint<32> stencil_45_lane_4;
  set_at<0, 32, 32>(stencil_45_lane_4, stencil_45.extract<128, 159>());
  hw_uint<32> stencil_45_lane_5;
  set_at<0, 32, 32>(stencil_45_lane_5, stencil_45.extract<160, 191>());
  hw_uint<32> stencil_45_lane_6;
  set_at<0, 32, 32>(stencil_45_lane_6, stencil_45.extract<192, 223>());
  hw_uint<32> stencil_45_lane_7;
  set_at<0, 32, 32>(stencil_45_lane_7, stencil_45.extract<224, 255>());
  hw_uint<32> stencil_45_lane_8;
  set_at<0, 32, 32>(stencil_45_lane_8, stencil_45.extract<256, 287>());

	
auto res_init284 = set_zero_32();

	  hw_uint<32 > stencil_45_lane_0_pack;
  set_at<0, 32, 32>(stencil_45_lane_0_pack, stencil_45_lane_0);
  hw_uint<32 > res_init284_pack;
  set_at<0, 32, 32>(res_init284_pack, res_init284);
auto res_update285_stencil_46283__m_1584_stencil_46282_11140 = add(stencil_45_lane_0_pack, res_init284_pack);

	  hw_uint<32 > stencil_45_lane_1_pack;
  set_at<0, 32, 32>(stencil_45_lane_1_pack, stencil_45_lane_1);
  hw_uint<32 > res_update285_stencil_46283__m_1584_stencil_46282_11140_pack;
  set_at<0, 32, 32>(res_update285_stencil_46283__m_1584_stencil_46282_11140_pack, res_update285_stencil_46283__m_1584_stencil_46282_11140);
auto res_update285_stencil_46283_0586_stencil_46282_11138 = add(stencil_45_lane_1_pack, res_update285_stencil_46283__m_1584_stencil_46282_11140_pack);

	  hw_uint<32 > stencil_45_lane_2_pack;
  set_at<0, 32, 32>(stencil_45_lane_2_pack, stencil_45_lane_2);
  hw_uint<32 > res_update285_stencil_46283_0586_stencil_46282_11138_pack;
  set_at<0, 32, 32>(res_update285_stencil_46283_0586_stencil_46282_11138_pack, res_update285_stencil_46283_0586_stencil_46282_11138);
auto res_update285_stencil_46283_1588_stencil_46282_11136 = add(stencil_45_lane_2_pack, res_update285_stencil_46283_0586_stencil_46282_11138_pack);

	  hw_uint<32 > stencil_45_lane_3_pack;
  set_at<0, 32, 32>(stencil_45_lane_3_pack, stencil_45_lane_3);
  hw_uint<32 > res_update285_stencil_46283_1588_stencil_46282_11136_pack;
  set_at<0, 32, 32>(res_update285_stencil_46283_1588_stencil_46282_11136_pack, res_update285_stencil_46283_1588_stencil_46282_11136);
auto res_update285_stencil_46283__m_1584_stencil_46282_01134 = add(stencil_45_lane_3_pack, res_update285_stencil_46283_1588_stencil_46282_11136_pack);

	  hw_uint<32 > stencil_45_lane_4_pack;
  set_at<0, 32, 32>(stencil_45_lane_4_pack, stencil_45_lane_4);
  hw_uint<32 > res_update285_stencil_46283__m_1584_stencil_46282_01134_pack;
  set_at<0, 32, 32>(res_update285_stencil_46283__m_1584_stencil_46282_01134_pack, res_update285_stencil_46283__m_1584_stencil_46282_01134);
auto res_update285_stencil_46283_0586_stencil_46282_01132 = add(stencil_45_lane_4_pack, res_update285_stencil_46283__m_1584_stencil_46282_01134_pack);

	  hw_uint<32 > stencil_45_lane_5_pack;
  set_at<0, 32, 32>(stencil_45_lane_5_pack, stencil_45_lane_5);
  hw_uint<32 > res_update285_stencil_46283_0586_stencil_46282_01132_pack;
  set_at<0, 32, 32>(res_update285_stencil_46283_0586_stencil_46282_01132_pack, res_update285_stencil_46283_0586_stencil_46282_01132);
auto res_update285_stencil_46283_1588_stencil_46282_01130 = add(stencil_45_lane_5_pack, res_update285_stencil_46283_0586_stencil_46282_01132_pack);

	  hw_uint<32 > stencil_45_lane_6_pack;
  set_at<0, 32, 32>(stencil_45_lane_6_pack, stencil_45_lane_6);
  hw_uint<32 > res_update285_stencil_46283_1588_stencil_46282_01130_pack;
  set_at<0, 32, 32>(res_update285_stencil_46283_1588_stencil_46282_01130_pack, res_update285_stencil_46283_1588_stencil_46282_01130);
auto res_update285_stencil_46283__m_1584_stencil_46282__m_11128 = add(stencil_45_lane_6_pack, res_update285_stencil_46283_1588_stencil_46282_01130_pack);

	  hw_uint<32 > stencil_45_lane_7_pack;
  set_at<0, 32, 32>(stencil_45_lane_7_pack, stencil_45_lane_7);
  hw_uint<32 > res_update285_stencil_46283__m_1584_stencil_46282__m_11128_pack;
  set_at<0, 32, 32>(res_update285_stencil_46283__m_1584_stencil_46282__m_11128_pack, res_update285_stencil_46283__m_1584_stencil_46282__m_11128);
auto res_update285_stencil_46283_0586_stencil_46282__m_11126 = add(stencil_45_lane_7_pack, res_update285_stencil_46283__m_1584_stencil_46282__m_11128_pack);

	  hw_uint<32 > stencil_45_lane_8_pack;
  set_at<0, 32, 32>(stencil_45_lane_8_pack, stencil_45_lane_8);
  hw_uint<32 > res_update285_stencil_46283_0586_stencil_46282__m_11126_pack;
  set_at<0, 32, 32>(res_update285_stencil_46283_0586_stencil_46282__m_11126_pack, res_update285_stencil_46283_0586_stencil_46282__m_11126);
auto res_update285_stencil_46283_1588_stencil_46282__m_11124 = add(stencil_45_lane_8_pack, res_update285_stencil_46283_0586_stencil_46282__m_11126_pack);
  hw_uint<32 > return_value1947;
  set_at<0, 32, 32>(return_value1947, res_update285_stencil_46283_1588_stencil_46282__m_11124);
  return return_value1947;

}

hw_uint<32> stencil_47287_cu1949(hw_uint<32*9>& stencil_46) {
  hw_uint<32> stencil_46_lane_0;
  set_at<0, 32, 32>(stencil_46_lane_0, stencil_46.extract<0, 31>());
  hw_uint<32> stencil_46_lane_1;
  set_at<0, 32, 32>(stencil_46_lane_1, stencil_46.extract<32, 63>());
  hw_uint<32> stencil_46_lane_2;
  set_at<0, 32, 32>(stencil_46_lane_2, stencil_46.extract<64, 95>());
  hw_uint<32> stencil_46_lane_3;
  set_at<0, 32, 32>(stencil_46_lane_3, stencil_46.extract<96, 127>());
  hw_uint<32> stencil_46_lane_4;
  set_at<0, 32, 32>(stencil_46_lane_4, stencil_46.extract<128, 159>());
  hw_uint<32> stencil_46_lane_5;
  set_at<0, 32, 32>(stencil_46_lane_5, stencil_46.extract<160, 191>());
  hw_uint<32> stencil_46_lane_6;
  set_at<0, 32, 32>(stencil_46_lane_6, stencil_46.extract<192, 223>());
  hw_uint<32> stencil_46_lane_7;
  set_at<0, 32, 32>(stencil_46_lane_7, stencil_46.extract<224, 255>());
  hw_uint<32> stencil_46_lane_8;
  set_at<0, 32, 32>(stencil_46_lane_8, stencil_46.extract<256, 287>());

	
auto res_init290 = set_zero_32();

	  hw_uint<32 > stencil_46_lane_0_pack;
  set_at<0, 32, 32>(stencil_46_lane_0_pack, stencil_46_lane_0);
  hw_uint<32 > res_init290_pack;
  set_at<0, 32, 32>(res_init290_pack, res_init290);
auto res_update291_stencil_47289__m_1572_stencil_47288_11176 = add(stencil_46_lane_0_pack, res_init290_pack);

	  hw_uint<32 > stencil_46_lane_1_pack;
  set_at<0, 32, 32>(stencil_46_lane_1_pack, stencil_46_lane_1);
  hw_uint<32 > res_update291_stencil_47289__m_1572_stencil_47288_11176_pack;
  set_at<0, 32, 32>(res_update291_stencil_47289__m_1572_stencil_47288_11176_pack, res_update291_stencil_47289__m_1572_stencil_47288_11176);
auto res_update291_stencil_47289_0574_stencil_47288_11174 = add(stencil_46_lane_1_pack, res_update291_stencil_47289__m_1572_stencil_47288_11176_pack);

	  hw_uint<32 > stencil_46_lane_2_pack;
  set_at<0, 32, 32>(stencil_46_lane_2_pack, stencil_46_lane_2);
  hw_uint<32 > res_update291_stencil_47289_0574_stencil_47288_11174_pack;
  set_at<0, 32, 32>(res_update291_stencil_47289_0574_stencil_47288_11174_pack, res_update291_stencil_47289_0574_stencil_47288_11174);
auto res_update291_stencil_47289_1576_stencil_47288_11172 = add(stencil_46_lane_2_pack, res_update291_stencil_47289_0574_stencil_47288_11174_pack);

	  hw_uint<32 > stencil_46_lane_3_pack;
  set_at<0, 32, 32>(stencil_46_lane_3_pack, stencil_46_lane_3);
  hw_uint<32 > res_update291_stencil_47289_1576_stencil_47288_11172_pack;
  set_at<0, 32, 32>(res_update291_stencil_47289_1576_stencil_47288_11172_pack, res_update291_stencil_47289_1576_stencil_47288_11172);
auto res_update291_stencil_47289__m_1572_stencil_47288_01170 = add(stencil_46_lane_3_pack, res_update291_stencil_47289_1576_stencil_47288_11172_pack);

	  hw_uint<32 > stencil_46_lane_4_pack;
  set_at<0, 32, 32>(stencil_46_lane_4_pack, stencil_46_lane_4);
  hw_uint<32 > res_update291_stencil_47289__m_1572_stencil_47288_01170_pack;
  set_at<0, 32, 32>(res_update291_stencil_47289__m_1572_stencil_47288_01170_pack, res_update291_stencil_47289__m_1572_stencil_47288_01170);
auto res_update291_stencil_47289_0574_stencil_47288_01168 = add(stencil_46_lane_4_pack, res_update291_stencil_47289__m_1572_stencil_47288_01170_pack);

	  hw_uint<32 > stencil_46_lane_5_pack;
  set_at<0, 32, 32>(stencil_46_lane_5_pack, stencil_46_lane_5);
  hw_uint<32 > res_update291_stencil_47289_0574_stencil_47288_01168_pack;
  set_at<0, 32, 32>(res_update291_stencil_47289_0574_stencil_47288_01168_pack, res_update291_stencil_47289_0574_stencil_47288_01168);
auto res_update291_stencil_47289_1576_stencil_47288_01166 = add(stencil_46_lane_5_pack, res_update291_stencil_47289_0574_stencil_47288_01168_pack);

	  hw_uint<32 > stencil_46_lane_6_pack;
  set_at<0, 32, 32>(stencil_46_lane_6_pack, stencil_46_lane_6);
  hw_uint<32 > res_update291_stencil_47289_1576_stencil_47288_01166_pack;
  set_at<0, 32, 32>(res_update291_stencil_47289_1576_stencil_47288_01166_pack, res_update291_stencil_47289_1576_stencil_47288_01166);
auto res_update291_stencil_47289__m_1572_stencil_47288__m_11164 = add(stencil_46_lane_6_pack, res_update291_stencil_47289_1576_stencil_47288_01166_pack);

	  hw_uint<32 > stencil_46_lane_7_pack;
  set_at<0, 32, 32>(stencil_46_lane_7_pack, stencil_46_lane_7);
  hw_uint<32 > res_update291_stencil_47289__m_1572_stencil_47288__m_11164_pack;
  set_at<0, 32, 32>(res_update291_stencil_47289__m_1572_stencil_47288__m_11164_pack, res_update291_stencil_47289__m_1572_stencil_47288__m_11164);
auto res_update291_stencil_47289_0574_stencil_47288__m_11162 = add(stencil_46_lane_7_pack, res_update291_stencil_47289__m_1572_stencil_47288__m_11164_pack);

	  hw_uint<32 > stencil_46_lane_8_pack;
  set_at<0, 32, 32>(stencil_46_lane_8_pack, stencil_46_lane_8);
  hw_uint<32 > res_update291_stencil_47289_0574_stencil_47288__m_11162_pack;
  set_at<0, 32, 32>(res_update291_stencil_47289_0574_stencil_47288__m_11162_pack, res_update291_stencil_47289_0574_stencil_47288__m_11162);
auto res_update291_stencil_47289_1576_stencil_47288__m_11160 = add(stencil_46_lane_8_pack, res_update291_stencil_47289_0574_stencil_47288__m_11162_pack);
  hw_uint<32 > return_value1950;
  set_at<0, 32, 32>(return_value1950, res_update291_stencil_47289_1576_stencil_47288__m_11160);
  return return_value1950;

}

hw_uint<32> stencil_48293_cu1952(hw_uint<32*9>& stencil_47) {
  hw_uint<32> stencil_47_lane_0;
  set_at<0, 32, 32>(stencil_47_lane_0, stencil_47.extract<0, 31>());
  hw_uint<32> stencil_47_lane_1;
  set_at<0, 32, 32>(stencil_47_lane_1, stencil_47.extract<32, 63>());
  hw_uint<32> stencil_47_lane_2;
  set_at<0, 32, 32>(stencil_47_lane_2, stencil_47.extract<64, 95>());
  hw_uint<32> stencil_47_lane_3;
  set_at<0, 32, 32>(stencil_47_lane_3, stencil_47.extract<96, 127>());
  hw_uint<32> stencil_47_lane_4;
  set_at<0, 32, 32>(stencil_47_lane_4, stencil_47.extract<128, 159>());
  hw_uint<32> stencil_47_lane_5;
  set_at<0, 32, 32>(stencil_47_lane_5, stencil_47.extract<160, 191>());
  hw_uint<32> stencil_47_lane_6;
  set_at<0, 32, 32>(stencil_47_lane_6, stencil_47.extract<192, 223>());
  hw_uint<32> stencil_47_lane_7;
  set_at<0, 32, 32>(stencil_47_lane_7, stencil_47.extract<224, 255>());
  hw_uint<32> stencil_47_lane_8;
  set_at<0, 32, 32>(stencil_47_lane_8, stencil_47.extract<256, 287>());

	
auto res_init296 = set_zero_32();

	  hw_uint<32 > stencil_47_lane_0_pack;
  set_at<0, 32, 32>(stencil_47_lane_0_pack, stencil_47_lane_0);
  hw_uint<32 > res_init296_pack;
  set_at<0, 32, 32>(res_init296_pack, res_init296);
auto res_update297_stencil_48295__m_1560_stencil_48294_11212 = add(stencil_47_lane_0_pack, res_init296_pack);

	  hw_uint<32 > stencil_47_lane_1_pack;
  set_at<0, 32, 32>(stencil_47_lane_1_pack, stencil_47_lane_1);
  hw_uint<32 > res_update297_stencil_48295__m_1560_stencil_48294_11212_pack;
  set_at<0, 32, 32>(res_update297_stencil_48295__m_1560_stencil_48294_11212_pack, res_update297_stencil_48295__m_1560_stencil_48294_11212);
auto res_update297_stencil_48295_0562_stencil_48294_11210 = add(stencil_47_lane_1_pack, res_update297_stencil_48295__m_1560_stencil_48294_11212_pack);

	  hw_uint<32 > stencil_47_lane_2_pack;
  set_at<0, 32, 32>(stencil_47_lane_2_pack, stencil_47_lane_2);
  hw_uint<32 > res_update297_stencil_48295_0562_stencil_48294_11210_pack;
  set_at<0, 32, 32>(res_update297_stencil_48295_0562_stencil_48294_11210_pack, res_update297_stencil_48295_0562_stencil_48294_11210);
auto res_update297_stencil_48295_1564_stencil_48294_11208 = add(stencil_47_lane_2_pack, res_update297_stencil_48295_0562_stencil_48294_11210_pack);

	  hw_uint<32 > stencil_47_lane_3_pack;
  set_at<0, 32, 32>(stencil_47_lane_3_pack, stencil_47_lane_3);
  hw_uint<32 > res_update297_stencil_48295_1564_stencil_48294_11208_pack;
  set_at<0, 32, 32>(res_update297_stencil_48295_1564_stencil_48294_11208_pack, res_update297_stencil_48295_1564_stencil_48294_11208);
auto res_update297_stencil_48295__m_1560_stencil_48294_01206 = add(stencil_47_lane_3_pack, res_update297_stencil_48295_1564_stencil_48294_11208_pack);

	  hw_uint<32 > stencil_47_lane_4_pack;
  set_at<0, 32, 32>(stencil_47_lane_4_pack, stencil_47_lane_4);
  hw_uint<32 > res_update297_stencil_48295__m_1560_stencil_48294_01206_pack;
  set_at<0, 32, 32>(res_update297_stencil_48295__m_1560_stencil_48294_01206_pack, res_update297_stencil_48295__m_1560_stencil_48294_01206);
auto res_update297_stencil_48295_0562_stencil_48294_01204 = add(stencil_47_lane_4_pack, res_update297_stencil_48295__m_1560_stencil_48294_01206_pack);

	  hw_uint<32 > stencil_47_lane_5_pack;
  set_at<0, 32, 32>(stencil_47_lane_5_pack, stencil_47_lane_5);
  hw_uint<32 > res_update297_stencil_48295_0562_stencil_48294_01204_pack;
  set_at<0, 32, 32>(res_update297_stencil_48295_0562_stencil_48294_01204_pack, res_update297_stencil_48295_0562_stencil_48294_01204);
auto res_update297_stencil_48295_1564_stencil_48294_01202 = add(stencil_47_lane_5_pack, res_update297_stencil_48295_0562_stencil_48294_01204_pack);

	  hw_uint<32 > stencil_47_lane_6_pack;
  set_at<0, 32, 32>(stencil_47_lane_6_pack, stencil_47_lane_6);
  hw_uint<32 > res_update297_stencil_48295_1564_stencil_48294_01202_pack;
  set_at<0, 32, 32>(res_update297_stencil_48295_1564_stencil_48294_01202_pack, res_update297_stencil_48295_1564_stencil_48294_01202);
auto res_update297_stencil_48295__m_1560_stencil_48294__m_11200 = add(stencil_47_lane_6_pack, res_update297_stencil_48295_1564_stencil_48294_01202_pack);

	  hw_uint<32 > stencil_47_lane_7_pack;
  set_at<0, 32, 32>(stencil_47_lane_7_pack, stencil_47_lane_7);
  hw_uint<32 > res_update297_stencil_48295__m_1560_stencil_48294__m_11200_pack;
  set_at<0, 32, 32>(res_update297_stencil_48295__m_1560_stencil_48294__m_11200_pack, res_update297_stencil_48295__m_1560_stencil_48294__m_11200);
auto res_update297_stencil_48295_0562_stencil_48294__m_11198 = add(stencil_47_lane_7_pack, res_update297_stencil_48295__m_1560_stencil_48294__m_11200_pack);

	  hw_uint<32 > stencil_47_lane_8_pack;
  set_at<0, 32, 32>(stencil_47_lane_8_pack, stencil_47_lane_8);
  hw_uint<32 > res_update297_stencil_48295_0562_stencil_48294__m_11198_pack;
  set_at<0, 32, 32>(res_update297_stencil_48295_0562_stencil_48294__m_11198_pack, res_update297_stencil_48295_0562_stencil_48294__m_11198);
auto res_update297_stencil_48295_1564_stencil_48294__m_11196 = add(stencil_47_lane_8_pack, res_update297_stencil_48295_0562_stencil_48294__m_11198_pack);
  hw_uint<32 > return_value1953;
  set_at<0, 32, 32>(return_value1953, res_update297_stencil_48295_1564_stencil_48294__m_11196);
  return return_value1953;

}

hw_uint<32> stencil_49299_cu1955(hw_uint<32*9>& stencil_48) {
  hw_uint<32> stencil_48_lane_0;
  set_at<0, 32, 32>(stencil_48_lane_0, stencil_48.extract<0, 31>());
  hw_uint<32> stencil_48_lane_1;
  set_at<0, 32, 32>(stencil_48_lane_1, stencil_48.extract<32, 63>());
  hw_uint<32> stencil_48_lane_2;
  set_at<0, 32, 32>(stencil_48_lane_2, stencil_48.extract<64, 95>());
  hw_uint<32> stencil_48_lane_3;
  set_at<0, 32, 32>(stencil_48_lane_3, stencil_48.extract<96, 127>());
  hw_uint<32> stencil_48_lane_4;
  set_at<0, 32, 32>(stencil_48_lane_4, stencil_48.extract<128, 159>());
  hw_uint<32> stencil_48_lane_5;
  set_at<0, 32, 32>(stencil_48_lane_5, stencil_48.extract<160, 191>());
  hw_uint<32> stencil_48_lane_6;
  set_at<0, 32, 32>(stencil_48_lane_6, stencil_48.extract<192, 223>());
  hw_uint<32> stencil_48_lane_7;
  set_at<0, 32, 32>(stencil_48_lane_7, stencil_48.extract<224, 255>());
  hw_uint<32> stencil_48_lane_8;
  set_at<0, 32, 32>(stencil_48_lane_8, stencil_48.extract<256, 287>());

	
auto res_init302 = set_zero_32();

	  hw_uint<32 > stencil_48_lane_0_pack;
  set_at<0, 32, 32>(stencil_48_lane_0_pack, stencil_48_lane_0);
  hw_uint<32 > res_init302_pack;
  set_at<0, 32, 32>(res_init302_pack, res_init302);
auto res_update303_stencil_49301__m_1548_stencil_49300_11248 = add(stencil_48_lane_0_pack, res_init302_pack);

	  hw_uint<32 > stencil_48_lane_1_pack;
  set_at<0, 32, 32>(stencil_48_lane_1_pack, stencil_48_lane_1);
  hw_uint<32 > res_update303_stencil_49301__m_1548_stencil_49300_11248_pack;
  set_at<0, 32, 32>(res_update303_stencil_49301__m_1548_stencil_49300_11248_pack, res_update303_stencil_49301__m_1548_stencil_49300_11248);
auto res_update303_stencil_49301_0550_stencil_49300_11246 = add(stencil_48_lane_1_pack, res_update303_stencil_49301__m_1548_stencil_49300_11248_pack);

	  hw_uint<32 > stencil_48_lane_2_pack;
  set_at<0, 32, 32>(stencil_48_lane_2_pack, stencil_48_lane_2);
  hw_uint<32 > res_update303_stencil_49301_0550_stencil_49300_11246_pack;
  set_at<0, 32, 32>(res_update303_stencil_49301_0550_stencil_49300_11246_pack, res_update303_stencil_49301_0550_stencil_49300_11246);
auto res_update303_stencil_49301_1552_stencil_49300_11244 = add(stencil_48_lane_2_pack, res_update303_stencil_49301_0550_stencil_49300_11246_pack);

	  hw_uint<32 > stencil_48_lane_3_pack;
  set_at<0, 32, 32>(stencil_48_lane_3_pack, stencil_48_lane_3);
  hw_uint<32 > res_update303_stencil_49301_1552_stencil_49300_11244_pack;
  set_at<0, 32, 32>(res_update303_stencil_49301_1552_stencil_49300_11244_pack, res_update303_stencil_49301_1552_stencil_49300_11244);
auto res_update303_stencil_49301__m_1548_stencil_49300_01242 = add(stencil_48_lane_3_pack, res_update303_stencil_49301_1552_stencil_49300_11244_pack);

	  hw_uint<32 > stencil_48_lane_4_pack;
  set_at<0, 32, 32>(stencil_48_lane_4_pack, stencil_48_lane_4);
  hw_uint<32 > res_update303_stencil_49301__m_1548_stencil_49300_01242_pack;
  set_at<0, 32, 32>(res_update303_stencil_49301__m_1548_stencil_49300_01242_pack, res_update303_stencil_49301__m_1548_stencil_49300_01242);
auto res_update303_stencil_49301_0550_stencil_49300_01240 = add(stencil_48_lane_4_pack, res_update303_stencil_49301__m_1548_stencil_49300_01242_pack);

	  hw_uint<32 > stencil_48_lane_5_pack;
  set_at<0, 32, 32>(stencil_48_lane_5_pack, stencil_48_lane_5);
  hw_uint<32 > res_update303_stencil_49301_0550_stencil_49300_01240_pack;
  set_at<0, 32, 32>(res_update303_stencil_49301_0550_stencil_49300_01240_pack, res_update303_stencil_49301_0550_stencil_49300_01240);
auto res_update303_stencil_49301_1552_stencil_49300_01238 = add(stencil_48_lane_5_pack, res_update303_stencil_49301_0550_stencil_49300_01240_pack);

	  hw_uint<32 > stencil_48_lane_6_pack;
  set_at<0, 32, 32>(stencil_48_lane_6_pack, stencil_48_lane_6);
  hw_uint<32 > res_update303_stencil_49301_1552_stencil_49300_01238_pack;
  set_at<0, 32, 32>(res_update303_stencil_49301_1552_stencil_49300_01238_pack, res_update303_stencil_49301_1552_stencil_49300_01238);
auto res_update303_stencil_49301__m_1548_stencil_49300__m_11236 = add(stencil_48_lane_6_pack, res_update303_stencil_49301_1552_stencil_49300_01238_pack);

	  hw_uint<32 > stencil_48_lane_7_pack;
  set_at<0, 32, 32>(stencil_48_lane_7_pack, stencil_48_lane_7);
  hw_uint<32 > res_update303_stencil_49301__m_1548_stencil_49300__m_11236_pack;
  set_at<0, 32, 32>(res_update303_stencil_49301__m_1548_stencil_49300__m_11236_pack, res_update303_stencil_49301__m_1548_stencil_49300__m_11236);
auto res_update303_stencil_49301_0550_stencil_49300__m_11234 = add(stencil_48_lane_7_pack, res_update303_stencil_49301__m_1548_stencil_49300__m_11236_pack);

	  hw_uint<32 > stencil_48_lane_8_pack;
  set_at<0, 32, 32>(stencil_48_lane_8_pack, stencil_48_lane_8);
  hw_uint<32 > res_update303_stencil_49301_0550_stencil_49300__m_11234_pack;
  set_at<0, 32, 32>(res_update303_stencil_49301_0550_stencil_49300__m_11234_pack, res_update303_stencil_49301_0550_stencil_49300__m_11234);
auto res_update303_stencil_49301_1552_stencil_49300__m_11232 = add(stencil_48_lane_8_pack, res_update303_stencil_49301_0550_stencil_49300__m_11234_pack);
  hw_uint<32 > return_value1956;
  set_at<0, 32, 32>(return_value1956, res_update303_stencil_49301_1552_stencil_49300__m_11232);
  return return_value1956;

}

hw_uint<32> stencil_50305_cu1958(hw_uint<32*9>& stencil_49) {
  hw_uint<32> stencil_49_lane_0;
  set_at<0, 32, 32>(stencil_49_lane_0, stencil_49.extract<0, 31>());
  hw_uint<32> stencil_49_lane_1;
  set_at<0, 32, 32>(stencil_49_lane_1, stencil_49.extract<32, 63>());
  hw_uint<32> stencil_49_lane_2;
  set_at<0, 32, 32>(stencil_49_lane_2, stencil_49.extract<64, 95>());
  hw_uint<32> stencil_49_lane_3;
  set_at<0, 32, 32>(stencil_49_lane_3, stencil_49.extract<96, 127>());
  hw_uint<32> stencil_49_lane_4;
  set_at<0, 32, 32>(stencil_49_lane_4, stencil_49.extract<128, 159>());
  hw_uint<32> stencil_49_lane_5;
  set_at<0, 32, 32>(stencil_49_lane_5, stencil_49.extract<160, 191>());
  hw_uint<32> stencil_49_lane_6;
  set_at<0, 32, 32>(stencil_49_lane_6, stencil_49.extract<192, 223>());
  hw_uint<32> stencil_49_lane_7;
  set_at<0, 32, 32>(stencil_49_lane_7, stencil_49.extract<224, 255>());
  hw_uint<32> stencil_49_lane_8;
  set_at<0, 32, 32>(stencil_49_lane_8, stencil_49.extract<256, 287>());

	
auto res_init308 = set_zero_32();

	  hw_uint<32 > stencil_49_lane_0_pack;
  set_at<0, 32, 32>(stencil_49_lane_0_pack, stencil_49_lane_0);
  hw_uint<32 > res_init308_pack;
  set_at<0, 32, 32>(res_init308_pack, res_init308);
auto res_update309_stencil_50307__m_1536_stencil_50306_11284 = add(stencil_49_lane_0_pack, res_init308_pack);

	  hw_uint<32 > stencil_49_lane_1_pack;
  set_at<0, 32, 32>(stencil_49_lane_1_pack, stencil_49_lane_1);
  hw_uint<32 > res_update309_stencil_50307__m_1536_stencil_50306_11284_pack;
  set_at<0, 32, 32>(res_update309_stencil_50307__m_1536_stencil_50306_11284_pack, res_update309_stencil_50307__m_1536_stencil_50306_11284);
auto res_update309_stencil_50307_0538_stencil_50306_11282 = add(stencil_49_lane_1_pack, res_update309_stencil_50307__m_1536_stencil_50306_11284_pack);

	  hw_uint<32 > stencil_49_lane_2_pack;
  set_at<0, 32, 32>(stencil_49_lane_2_pack, stencil_49_lane_2);
  hw_uint<32 > res_update309_stencil_50307_0538_stencil_50306_11282_pack;
  set_at<0, 32, 32>(res_update309_stencil_50307_0538_stencil_50306_11282_pack, res_update309_stencil_50307_0538_stencil_50306_11282);
auto res_update309_stencil_50307_1540_stencil_50306_11280 = add(stencil_49_lane_2_pack, res_update309_stencil_50307_0538_stencil_50306_11282_pack);

	  hw_uint<32 > stencil_49_lane_3_pack;
  set_at<0, 32, 32>(stencil_49_lane_3_pack, stencil_49_lane_3);
  hw_uint<32 > res_update309_stencil_50307_1540_stencil_50306_11280_pack;
  set_at<0, 32, 32>(res_update309_stencil_50307_1540_stencil_50306_11280_pack, res_update309_stencil_50307_1540_stencil_50306_11280);
auto res_update309_stencil_50307__m_1536_stencil_50306_01278 = add(stencil_49_lane_3_pack, res_update309_stencil_50307_1540_stencil_50306_11280_pack);

	  hw_uint<32 > stencil_49_lane_4_pack;
  set_at<0, 32, 32>(stencil_49_lane_4_pack, stencil_49_lane_4);
  hw_uint<32 > res_update309_stencil_50307__m_1536_stencil_50306_01278_pack;
  set_at<0, 32, 32>(res_update309_stencil_50307__m_1536_stencil_50306_01278_pack, res_update309_stencil_50307__m_1536_stencil_50306_01278);
auto res_update309_stencil_50307_0538_stencil_50306_01276 = add(stencil_49_lane_4_pack, res_update309_stencil_50307__m_1536_stencil_50306_01278_pack);

	  hw_uint<32 > stencil_49_lane_5_pack;
  set_at<0, 32, 32>(stencil_49_lane_5_pack, stencil_49_lane_5);
  hw_uint<32 > res_update309_stencil_50307_0538_stencil_50306_01276_pack;
  set_at<0, 32, 32>(res_update309_stencil_50307_0538_stencil_50306_01276_pack, res_update309_stencil_50307_0538_stencil_50306_01276);
auto res_update309_stencil_50307_1540_stencil_50306_01274 = add(stencil_49_lane_5_pack, res_update309_stencil_50307_0538_stencil_50306_01276_pack);

	  hw_uint<32 > stencil_49_lane_6_pack;
  set_at<0, 32, 32>(stencil_49_lane_6_pack, stencil_49_lane_6);
  hw_uint<32 > res_update309_stencil_50307_1540_stencil_50306_01274_pack;
  set_at<0, 32, 32>(res_update309_stencil_50307_1540_stencil_50306_01274_pack, res_update309_stencil_50307_1540_stencil_50306_01274);
auto res_update309_stencil_50307__m_1536_stencil_50306__m_11272 = add(stencil_49_lane_6_pack, res_update309_stencil_50307_1540_stencil_50306_01274_pack);

	  hw_uint<32 > stencil_49_lane_7_pack;
  set_at<0, 32, 32>(stencil_49_lane_7_pack, stencil_49_lane_7);
  hw_uint<32 > res_update309_stencil_50307__m_1536_stencil_50306__m_11272_pack;
  set_at<0, 32, 32>(res_update309_stencil_50307__m_1536_stencil_50306__m_11272_pack, res_update309_stencil_50307__m_1536_stencil_50306__m_11272);
auto res_update309_stencil_50307_0538_stencil_50306__m_11270 = add(stencil_49_lane_7_pack, res_update309_stencil_50307__m_1536_stencil_50306__m_11272_pack);

	  hw_uint<32 > stencil_49_lane_8_pack;
  set_at<0, 32, 32>(stencil_49_lane_8_pack, stencil_49_lane_8);
  hw_uint<32 > res_update309_stencil_50307_0538_stencil_50306__m_11270_pack;
  set_at<0, 32, 32>(res_update309_stencil_50307_0538_stencil_50306__m_11270_pack, res_update309_stencil_50307_0538_stencil_50306__m_11270);
auto res_update309_stencil_50307_1540_stencil_50306__m_11268 = add(stencil_49_lane_8_pack, res_update309_stencil_50307_0538_stencil_50306__m_11270_pack);
  hw_uint<32 > return_value1959;
  set_at<0, 32, 32>(return_value1959, res_update309_stencil_50307_1540_stencil_50306__m_11268);
  return return_value1959;

}

hw_uint<32> stencil_51311_cu1961(hw_uint<32*9>& stencil_50) {
  hw_uint<32> stencil_50_lane_0;
  set_at<0, 32, 32>(stencil_50_lane_0, stencil_50.extract<0, 31>());
  hw_uint<32> stencil_50_lane_1;
  set_at<0, 32, 32>(stencil_50_lane_1, stencil_50.extract<32, 63>());
  hw_uint<32> stencil_50_lane_2;
  set_at<0, 32, 32>(stencil_50_lane_2, stencil_50.extract<64, 95>());
  hw_uint<32> stencil_50_lane_3;
  set_at<0, 32, 32>(stencil_50_lane_3, stencil_50.extract<96, 127>());
  hw_uint<32> stencil_50_lane_4;
  set_at<0, 32, 32>(stencil_50_lane_4, stencil_50.extract<128, 159>());
  hw_uint<32> stencil_50_lane_5;
  set_at<0, 32, 32>(stencil_50_lane_5, stencil_50.extract<160, 191>());
  hw_uint<32> stencil_50_lane_6;
  set_at<0, 32, 32>(stencil_50_lane_6, stencil_50.extract<192, 223>());
  hw_uint<32> stencil_50_lane_7;
  set_at<0, 32, 32>(stencil_50_lane_7, stencil_50.extract<224, 255>());
  hw_uint<32> stencil_50_lane_8;
  set_at<0, 32, 32>(stencil_50_lane_8, stencil_50.extract<256, 287>());

	
auto res_init314 = set_zero_32();

	  hw_uint<32 > stencil_50_lane_0_pack;
  set_at<0, 32, 32>(stencil_50_lane_0_pack, stencil_50_lane_0);
  hw_uint<32 > res_init314_pack;
  set_at<0, 32, 32>(res_init314_pack, res_init314);
auto res_update315_stencil_51313__m_1524_stencil_51312_11320 = add(stencil_50_lane_0_pack, res_init314_pack);

	  hw_uint<32 > stencil_50_lane_1_pack;
  set_at<0, 32, 32>(stencil_50_lane_1_pack, stencil_50_lane_1);
  hw_uint<32 > res_update315_stencil_51313__m_1524_stencil_51312_11320_pack;
  set_at<0, 32, 32>(res_update315_stencil_51313__m_1524_stencil_51312_11320_pack, res_update315_stencil_51313__m_1524_stencil_51312_11320);
auto res_update315_stencil_51313_0526_stencil_51312_11318 = add(stencil_50_lane_1_pack, res_update315_stencil_51313__m_1524_stencil_51312_11320_pack);

	  hw_uint<32 > stencil_50_lane_2_pack;
  set_at<0, 32, 32>(stencil_50_lane_2_pack, stencil_50_lane_2);
  hw_uint<32 > res_update315_stencil_51313_0526_stencil_51312_11318_pack;
  set_at<0, 32, 32>(res_update315_stencil_51313_0526_stencil_51312_11318_pack, res_update315_stencil_51313_0526_stencil_51312_11318);
auto res_update315_stencil_51313_1528_stencil_51312_11316 = add(stencil_50_lane_2_pack, res_update315_stencil_51313_0526_stencil_51312_11318_pack);

	  hw_uint<32 > stencil_50_lane_3_pack;
  set_at<0, 32, 32>(stencil_50_lane_3_pack, stencil_50_lane_3);
  hw_uint<32 > res_update315_stencil_51313_1528_stencil_51312_11316_pack;
  set_at<0, 32, 32>(res_update315_stencil_51313_1528_stencil_51312_11316_pack, res_update315_stencil_51313_1528_stencil_51312_11316);
auto res_update315_stencil_51313__m_1524_stencil_51312_01314 = add(stencil_50_lane_3_pack, res_update315_stencil_51313_1528_stencil_51312_11316_pack);

	  hw_uint<32 > stencil_50_lane_4_pack;
  set_at<0, 32, 32>(stencil_50_lane_4_pack, stencil_50_lane_4);
  hw_uint<32 > res_update315_stencil_51313__m_1524_stencil_51312_01314_pack;
  set_at<0, 32, 32>(res_update315_stencil_51313__m_1524_stencil_51312_01314_pack, res_update315_stencil_51313__m_1524_stencil_51312_01314);
auto res_update315_stencil_51313_0526_stencil_51312_01312 = add(stencil_50_lane_4_pack, res_update315_stencil_51313__m_1524_stencil_51312_01314_pack);

	  hw_uint<32 > stencil_50_lane_5_pack;
  set_at<0, 32, 32>(stencil_50_lane_5_pack, stencil_50_lane_5);
  hw_uint<32 > res_update315_stencil_51313_0526_stencil_51312_01312_pack;
  set_at<0, 32, 32>(res_update315_stencil_51313_0526_stencil_51312_01312_pack, res_update315_stencil_51313_0526_stencil_51312_01312);
auto res_update315_stencil_51313_1528_stencil_51312_01310 = add(stencil_50_lane_5_pack, res_update315_stencil_51313_0526_stencil_51312_01312_pack);

	  hw_uint<32 > stencil_50_lane_6_pack;
  set_at<0, 32, 32>(stencil_50_lane_6_pack, stencil_50_lane_6);
  hw_uint<32 > res_update315_stencil_51313_1528_stencil_51312_01310_pack;
  set_at<0, 32, 32>(res_update315_stencil_51313_1528_stencil_51312_01310_pack, res_update315_stencil_51313_1528_stencil_51312_01310);
auto res_update315_stencil_51313__m_1524_stencil_51312__m_11308 = add(stencil_50_lane_6_pack, res_update315_stencil_51313_1528_stencil_51312_01310_pack);

	  hw_uint<32 > stencil_50_lane_7_pack;
  set_at<0, 32, 32>(stencil_50_lane_7_pack, stencil_50_lane_7);
  hw_uint<32 > res_update315_stencil_51313__m_1524_stencil_51312__m_11308_pack;
  set_at<0, 32, 32>(res_update315_stencil_51313__m_1524_stencil_51312__m_11308_pack, res_update315_stencil_51313__m_1524_stencil_51312__m_11308);
auto res_update315_stencil_51313_0526_stencil_51312__m_11306 = add(stencil_50_lane_7_pack, res_update315_stencil_51313__m_1524_stencil_51312__m_11308_pack);

	  hw_uint<32 > stencil_50_lane_8_pack;
  set_at<0, 32, 32>(stencil_50_lane_8_pack, stencil_50_lane_8);
  hw_uint<32 > res_update315_stencil_51313_0526_stencil_51312__m_11306_pack;
  set_at<0, 32, 32>(res_update315_stencil_51313_0526_stencil_51312__m_11306_pack, res_update315_stencil_51313_0526_stencil_51312__m_11306);
auto res_update315_stencil_51313_1528_stencil_51312__m_11304 = add(stencil_50_lane_8_pack, res_update315_stencil_51313_0526_stencil_51312__m_11306_pack);
  hw_uint<32 > return_value1962;
  set_at<0, 32, 32>(return_value1962, res_update315_stencil_51313_1528_stencil_51312__m_11304);
  return return_value1962;

}

hw_uint<32> stencil_52317_cu1964(hw_uint<32*9>& stencil_51) {
  hw_uint<32> stencil_51_lane_0;
  set_at<0, 32, 32>(stencil_51_lane_0, stencil_51.extract<0, 31>());
  hw_uint<32> stencil_51_lane_1;
  set_at<0, 32, 32>(stencil_51_lane_1, stencil_51.extract<32, 63>());
  hw_uint<32> stencil_51_lane_2;
  set_at<0, 32, 32>(stencil_51_lane_2, stencil_51.extract<64, 95>());
  hw_uint<32> stencil_51_lane_3;
  set_at<0, 32, 32>(stencil_51_lane_3, stencil_51.extract<96, 127>());
  hw_uint<32> stencil_51_lane_4;
  set_at<0, 32, 32>(stencil_51_lane_4, stencil_51.extract<128, 159>());
  hw_uint<32> stencil_51_lane_5;
  set_at<0, 32, 32>(stencil_51_lane_5, stencil_51.extract<160, 191>());
  hw_uint<32> stencil_51_lane_6;
  set_at<0, 32, 32>(stencil_51_lane_6, stencil_51.extract<192, 223>());
  hw_uint<32> stencil_51_lane_7;
  set_at<0, 32, 32>(stencil_51_lane_7, stencil_51.extract<224, 255>());
  hw_uint<32> stencil_51_lane_8;
  set_at<0, 32, 32>(stencil_51_lane_8, stencil_51.extract<256, 287>());

	
auto res_init320 = set_zero_32();

	  hw_uint<32 > stencil_51_lane_0_pack;
  set_at<0, 32, 32>(stencil_51_lane_0_pack, stencil_51_lane_0);
  hw_uint<32 > res_init320_pack;
  set_at<0, 32, 32>(res_init320_pack, res_init320);
auto res_update321_stencil_52319__m_1512_stencil_52318_11356 = add(stencil_51_lane_0_pack, res_init320_pack);

	  hw_uint<32 > stencil_51_lane_1_pack;
  set_at<0, 32, 32>(stencil_51_lane_1_pack, stencil_51_lane_1);
  hw_uint<32 > res_update321_stencil_52319__m_1512_stencil_52318_11356_pack;
  set_at<0, 32, 32>(res_update321_stencil_52319__m_1512_stencil_52318_11356_pack, res_update321_stencil_52319__m_1512_stencil_52318_11356);
auto res_update321_stencil_52319_0514_stencil_52318_11354 = add(stencil_51_lane_1_pack, res_update321_stencil_52319__m_1512_stencil_52318_11356_pack);

	  hw_uint<32 > stencil_51_lane_2_pack;
  set_at<0, 32, 32>(stencil_51_lane_2_pack, stencil_51_lane_2);
  hw_uint<32 > res_update321_stencil_52319_0514_stencil_52318_11354_pack;
  set_at<0, 32, 32>(res_update321_stencil_52319_0514_stencil_52318_11354_pack, res_update321_stencil_52319_0514_stencil_52318_11354);
auto res_update321_stencil_52319_1516_stencil_52318_11352 = add(stencil_51_lane_2_pack, res_update321_stencil_52319_0514_stencil_52318_11354_pack);

	  hw_uint<32 > stencil_51_lane_3_pack;
  set_at<0, 32, 32>(stencil_51_lane_3_pack, stencil_51_lane_3);
  hw_uint<32 > res_update321_stencil_52319_1516_stencil_52318_11352_pack;
  set_at<0, 32, 32>(res_update321_stencil_52319_1516_stencil_52318_11352_pack, res_update321_stencil_52319_1516_stencil_52318_11352);
auto res_update321_stencil_52319__m_1512_stencil_52318_01350 = add(stencil_51_lane_3_pack, res_update321_stencil_52319_1516_stencil_52318_11352_pack);

	  hw_uint<32 > stencil_51_lane_4_pack;
  set_at<0, 32, 32>(stencil_51_lane_4_pack, stencil_51_lane_4);
  hw_uint<32 > res_update321_stencil_52319__m_1512_stencil_52318_01350_pack;
  set_at<0, 32, 32>(res_update321_stencil_52319__m_1512_stencil_52318_01350_pack, res_update321_stencil_52319__m_1512_stencil_52318_01350);
auto res_update321_stencil_52319_0514_stencil_52318_01348 = add(stencil_51_lane_4_pack, res_update321_stencil_52319__m_1512_stencil_52318_01350_pack);

	  hw_uint<32 > stencil_51_lane_5_pack;
  set_at<0, 32, 32>(stencil_51_lane_5_pack, stencil_51_lane_5);
  hw_uint<32 > res_update321_stencil_52319_0514_stencil_52318_01348_pack;
  set_at<0, 32, 32>(res_update321_stencil_52319_0514_stencil_52318_01348_pack, res_update321_stencil_52319_0514_stencil_52318_01348);
auto res_update321_stencil_52319_1516_stencil_52318_01346 = add(stencil_51_lane_5_pack, res_update321_stencil_52319_0514_stencil_52318_01348_pack);

	  hw_uint<32 > stencil_51_lane_6_pack;
  set_at<0, 32, 32>(stencil_51_lane_6_pack, stencil_51_lane_6);
  hw_uint<32 > res_update321_stencil_52319_1516_stencil_52318_01346_pack;
  set_at<0, 32, 32>(res_update321_stencil_52319_1516_stencil_52318_01346_pack, res_update321_stencil_52319_1516_stencil_52318_01346);
auto res_update321_stencil_52319__m_1512_stencil_52318__m_11344 = add(stencil_51_lane_6_pack, res_update321_stencil_52319_1516_stencil_52318_01346_pack);

	  hw_uint<32 > stencil_51_lane_7_pack;
  set_at<0, 32, 32>(stencil_51_lane_7_pack, stencil_51_lane_7);
  hw_uint<32 > res_update321_stencil_52319__m_1512_stencil_52318__m_11344_pack;
  set_at<0, 32, 32>(res_update321_stencil_52319__m_1512_stencil_52318__m_11344_pack, res_update321_stencil_52319__m_1512_stencil_52318__m_11344);
auto res_update321_stencil_52319_0514_stencil_52318__m_11342 = add(stencil_51_lane_7_pack, res_update321_stencil_52319__m_1512_stencil_52318__m_11344_pack);

	  hw_uint<32 > stencil_51_lane_8_pack;
  set_at<0, 32, 32>(stencil_51_lane_8_pack, stencil_51_lane_8);
  hw_uint<32 > res_update321_stencil_52319_0514_stencil_52318__m_11342_pack;
  set_at<0, 32, 32>(res_update321_stencil_52319_0514_stencil_52318__m_11342_pack, res_update321_stencil_52319_0514_stencil_52318__m_11342);
auto res_update321_stencil_52319_1516_stencil_52318__m_11340 = add(stencil_51_lane_8_pack, res_update321_stencil_52319_0514_stencil_52318__m_11342_pack);
  hw_uint<32 > return_value1965;
  set_at<0, 32, 32>(return_value1965, res_update321_stencil_52319_1516_stencil_52318__m_11340);
  return return_value1965;

}

hw_uint<32> stencil_53323_cu1967(hw_uint<32*9>& stencil_52) {
  hw_uint<32> stencil_52_lane_0;
  set_at<0, 32, 32>(stencil_52_lane_0, stencil_52.extract<0, 31>());
  hw_uint<32> stencil_52_lane_1;
  set_at<0, 32, 32>(stencil_52_lane_1, stencil_52.extract<32, 63>());
  hw_uint<32> stencil_52_lane_2;
  set_at<0, 32, 32>(stencil_52_lane_2, stencil_52.extract<64, 95>());
  hw_uint<32> stencil_52_lane_3;
  set_at<0, 32, 32>(stencil_52_lane_3, stencil_52.extract<96, 127>());
  hw_uint<32> stencil_52_lane_4;
  set_at<0, 32, 32>(stencil_52_lane_4, stencil_52.extract<128, 159>());
  hw_uint<32> stencil_52_lane_5;
  set_at<0, 32, 32>(stencil_52_lane_5, stencil_52.extract<160, 191>());
  hw_uint<32> stencil_52_lane_6;
  set_at<0, 32, 32>(stencil_52_lane_6, stencil_52.extract<192, 223>());
  hw_uint<32> stencil_52_lane_7;
  set_at<0, 32, 32>(stencil_52_lane_7, stencil_52.extract<224, 255>());
  hw_uint<32> stencil_52_lane_8;
  set_at<0, 32, 32>(stencil_52_lane_8, stencil_52.extract<256, 287>());

	
auto res_init326 = set_zero_32();

	  hw_uint<32 > stencil_52_lane_0_pack;
  set_at<0, 32, 32>(stencil_52_lane_0_pack, stencil_52_lane_0);
  hw_uint<32 > res_init326_pack;
  set_at<0, 32, 32>(res_init326_pack, res_init326);
auto res_update327_stencil_53325__m_1500_stencil_53324_11392 = add(stencil_52_lane_0_pack, res_init326_pack);

	  hw_uint<32 > stencil_52_lane_1_pack;
  set_at<0, 32, 32>(stencil_52_lane_1_pack, stencil_52_lane_1);
  hw_uint<32 > res_update327_stencil_53325__m_1500_stencil_53324_11392_pack;
  set_at<0, 32, 32>(res_update327_stencil_53325__m_1500_stencil_53324_11392_pack, res_update327_stencil_53325__m_1500_stencil_53324_11392);
auto res_update327_stencil_53325_0502_stencil_53324_11390 = add(stencil_52_lane_1_pack, res_update327_stencil_53325__m_1500_stencil_53324_11392_pack);

	  hw_uint<32 > stencil_52_lane_2_pack;
  set_at<0, 32, 32>(stencil_52_lane_2_pack, stencil_52_lane_2);
  hw_uint<32 > res_update327_stencil_53325_0502_stencil_53324_11390_pack;
  set_at<0, 32, 32>(res_update327_stencil_53325_0502_stencil_53324_11390_pack, res_update327_stencil_53325_0502_stencil_53324_11390);
auto res_update327_stencil_53325_1504_stencil_53324_11388 = add(stencil_52_lane_2_pack, res_update327_stencil_53325_0502_stencil_53324_11390_pack);

	  hw_uint<32 > stencil_52_lane_3_pack;
  set_at<0, 32, 32>(stencil_52_lane_3_pack, stencil_52_lane_3);
  hw_uint<32 > res_update327_stencil_53325_1504_stencil_53324_11388_pack;
  set_at<0, 32, 32>(res_update327_stencil_53325_1504_stencil_53324_11388_pack, res_update327_stencil_53325_1504_stencil_53324_11388);
auto res_update327_stencil_53325__m_1500_stencil_53324_01386 = add(stencil_52_lane_3_pack, res_update327_stencil_53325_1504_stencil_53324_11388_pack);

	  hw_uint<32 > stencil_52_lane_4_pack;
  set_at<0, 32, 32>(stencil_52_lane_4_pack, stencil_52_lane_4);
  hw_uint<32 > res_update327_stencil_53325__m_1500_stencil_53324_01386_pack;
  set_at<0, 32, 32>(res_update327_stencil_53325__m_1500_stencil_53324_01386_pack, res_update327_stencil_53325__m_1500_stencil_53324_01386);
auto res_update327_stencil_53325_0502_stencil_53324_01384 = add(stencil_52_lane_4_pack, res_update327_stencil_53325__m_1500_stencil_53324_01386_pack);

	  hw_uint<32 > stencil_52_lane_5_pack;
  set_at<0, 32, 32>(stencil_52_lane_5_pack, stencil_52_lane_5);
  hw_uint<32 > res_update327_stencil_53325_0502_stencil_53324_01384_pack;
  set_at<0, 32, 32>(res_update327_stencil_53325_0502_stencil_53324_01384_pack, res_update327_stencil_53325_0502_stencil_53324_01384);
auto res_update327_stencil_53325_1504_stencil_53324_01382 = add(stencil_52_lane_5_pack, res_update327_stencil_53325_0502_stencil_53324_01384_pack);

	  hw_uint<32 > stencil_52_lane_6_pack;
  set_at<0, 32, 32>(stencil_52_lane_6_pack, stencil_52_lane_6);
  hw_uint<32 > res_update327_stencil_53325_1504_stencil_53324_01382_pack;
  set_at<0, 32, 32>(res_update327_stencil_53325_1504_stencil_53324_01382_pack, res_update327_stencil_53325_1504_stencil_53324_01382);
auto res_update327_stencil_53325__m_1500_stencil_53324__m_11380 = add(stencil_52_lane_6_pack, res_update327_stencil_53325_1504_stencil_53324_01382_pack);

	  hw_uint<32 > stencil_52_lane_7_pack;
  set_at<0, 32, 32>(stencil_52_lane_7_pack, stencil_52_lane_7);
  hw_uint<32 > res_update327_stencil_53325__m_1500_stencil_53324__m_11380_pack;
  set_at<0, 32, 32>(res_update327_stencil_53325__m_1500_stencil_53324__m_11380_pack, res_update327_stencil_53325__m_1500_stencil_53324__m_11380);
auto res_update327_stencil_53325_0502_stencil_53324__m_11378 = add(stencil_52_lane_7_pack, res_update327_stencil_53325__m_1500_stencil_53324__m_11380_pack);

	  hw_uint<32 > stencil_52_lane_8_pack;
  set_at<0, 32, 32>(stencil_52_lane_8_pack, stencil_52_lane_8);
  hw_uint<32 > res_update327_stencil_53325_0502_stencil_53324__m_11378_pack;
  set_at<0, 32, 32>(res_update327_stencil_53325_0502_stencil_53324__m_11378_pack, res_update327_stencil_53325_0502_stencil_53324__m_11378);
auto res_update327_stencil_53325_1504_stencil_53324__m_11376 = add(stencil_52_lane_8_pack, res_update327_stencil_53325_0502_stencil_53324__m_11378_pack);
  hw_uint<32 > return_value1968;
  set_at<0, 32, 32>(return_value1968, res_update327_stencil_53325_1504_stencil_53324__m_11376);
  return return_value1968;

}

hw_uint<32> stencil_54329_cu1970(hw_uint<32*9>& stencil_53) {
  hw_uint<32> stencil_53_lane_0;
  set_at<0, 32, 32>(stencil_53_lane_0, stencil_53.extract<0, 31>());
  hw_uint<32> stencil_53_lane_1;
  set_at<0, 32, 32>(stencil_53_lane_1, stencil_53.extract<32, 63>());
  hw_uint<32> stencil_53_lane_2;
  set_at<0, 32, 32>(stencil_53_lane_2, stencil_53.extract<64, 95>());
  hw_uint<32> stencil_53_lane_3;
  set_at<0, 32, 32>(stencil_53_lane_3, stencil_53.extract<96, 127>());
  hw_uint<32> stencil_53_lane_4;
  set_at<0, 32, 32>(stencil_53_lane_4, stencil_53.extract<128, 159>());
  hw_uint<32> stencil_53_lane_5;
  set_at<0, 32, 32>(stencil_53_lane_5, stencil_53.extract<160, 191>());
  hw_uint<32> stencil_53_lane_6;
  set_at<0, 32, 32>(stencil_53_lane_6, stencil_53.extract<192, 223>());
  hw_uint<32> stencil_53_lane_7;
  set_at<0, 32, 32>(stencil_53_lane_7, stencil_53.extract<224, 255>());
  hw_uint<32> stencil_53_lane_8;
  set_at<0, 32, 32>(stencil_53_lane_8, stencil_53.extract<256, 287>());

	
auto res_init332 = set_zero_32();

	  hw_uint<32 > stencil_53_lane_0_pack;
  set_at<0, 32, 32>(stencil_53_lane_0_pack, stencil_53_lane_0);
  hw_uint<32 > res_init332_pack;
  set_at<0, 32, 32>(res_init332_pack, res_init332);
auto res_update333_stencil_54331__m_1476_stencil_54330_11464 = add(stencil_53_lane_0_pack, res_init332_pack);

	  hw_uint<32 > stencil_53_lane_1_pack;
  set_at<0, 32, 32>(stencil_53_lane_1_pack, stencil_53_lane_1);
  hw_uint<32 > res_update333_stencil_54331__m_1476_stencil_54330_11464_pack;
  set_at<0, 32, 32>(res_update333_stencil_54331__m_1476_stencil_54330_11464_pack, res_update333_stencil_54331__m_1476_stencil_54330_11464);
auto res_update333_stencil_54331_0478_stencil_54330_11462 = add(stencil_53_lane_1_pack, res_update333_stencil_54331__m_1476_stencil_54330_11464_pack);

	  hw_uint<32 > stencil_53_lane_2_pack;
  set_at<0, 32, 32>(stencil_53_lane_2_pack, stencil_53_lane_2);
  hw_uint<32 > res_update333_stencil_54331_0478_stencil_54330_11462_pack;
  set_at<0, 32, 32>(res_update333_stencil_54331_0478_stencil_54330_11462_pack, res_update333_stencil_54331_0478_stencil_54330_11462);
auto res_update333_stencil_54331_1480_stencil_54330_11460 = add(stencil_53_lane_2_pack, res_update333_stencil_54331_0478_stencil_54330_11462_pack);

	  hw_uint<32 > stencil_53_lane_3_pack;
  set_at<0, 32, 32>(stencil_53_lane_3_pack, stencil_53_lane_3);
  hw_uint<32 > res_update333_stencil_54331_1480_stencil_54330_11460_pack;
  set_at<0, 32, 32>(res_update333_stencil_54331_1480_stencil_54330_11460_pack, res_update333_stencil_54331_1480_stencil_54330_11460);
auto res_update333_stencil_54331__m_1476_stencil_54330_01458 = add(stencil_53_lane_3_pack, res_update333_stencil_54331_1480_stencil_54330_11460_pack);

	  hw_uint<32 > stencil_53_lane_4_pack;
  set_at<0, 32, 32>(stencil_53_lane_4_pack, stencil_53_lane_4);
  hw_uint<32 > res_update333_stencil_54331__m_1476_stencil_54330_01458_pack;
  set_at<0, 32, 32>(res_update333_stencil_54331__m_1476_stencil_54330_01458_pack, res_update333_stencil_54331__m_1476_stencil_54330_01458);
auto res_update333_stencil_54331_0478_stencil_54330_01456 = add(stencil_53_lane_4_pack, res_update333_stencil_54331__m_1476_stencil_54330_01458_pack);

	  hw_uint<32 > stencil_53_lane_5_pack;
  set_at<0, 32, 32>(stencil_53_lane_5_pack, stencil_53_lane_5);
  hw_uint<32 > res_update333_stencil_54331_0478_stencil_54330_01456_pack;
  set_at<0, 32, 32>(res_update333_stencil_54331_0478_stencil_54330_01456_pack, res_update333_stencil_54331_0478_stencil_54330_01456);
auto res_update333_stencil_54331_1480_stencil_54330_01454 = add(stencil_53_lane_5_pack, res_update333_stencil_54331_0478_stencil_54330_01456_pack);

	  hw_uint<32 > stencil_53_lane_6_pack;
  set_at<0, 32, 32>(stencil_53_lane_6_pack, stencil_53_lane_6);
  hw_uint<32 > res_update333_stencil_54331_1480_stencil_54330_01454_pack;
  set_at<0, 32, 32>(res_update333_stencil_54331_1480_stencil_54330_01454_pack, res_update333_stencil_54331_1480_stencil_54330_01454);
auto res_update333_stencil_54331__m_1476_stencil_54330__m_11452 = add(stencil_53_lane_6_pack, res_update333_stencil_54331_1480_stencil_54330_01454_pack);

	  hw_uint<32 > stencil_53_lane_7_pack;
  set_at<0, 32, 32>(stencil_53_lane_7_pack, stencil_53_lane_7);
  hw_uint<32 > res_update333_stencil_54331__m_1476_stencil_54330__m_11452_pack;
  set_at<0, 32, 32>(res_update333_stencil_54331__m_1476_stencil_54330__m_11452_pack, res_update333_stencil_54331__m_1476_stencil_54330__m_11452);
auto res_update333_stencil_54331_0478_stencil_54330__m_11450 = add(stencil_53_lane_7_pack, res_update333_stencil_54331__m_1476_stencil_54330__m_11452_pack);

	  hw_uint<32 > stencil_53_lane_8_pack;
  set_at<0, 32, 32>(stencil_53_lane_8_pack, stencil_53_lane_8);
  hw_uint<32 > res_update333_stencil_54331_0478_stencil_54330__m_11450_pack;
  set_at<0, 32, 32>(res_update333_stencil_54331_0478_stencil_54330__m_11450_pack, res_update333_stencil_54331_0478_stencil_54330__m_11450);
auto res_update333_stencil_54331_1480_stencil_54330__m_11448 = add(stencil_53_lane_8_pack, res_update333_stencil_54331_0478_stencil_54330__m_11450_pack);
  hw_uint<32 > return_value1971;
  set_at<0, 32, 32>(return_value1971, res_update333_stencil_54331_1480_stencil_54330__m_11448);
  return return_value1971;

}

hw_uint<32> stencil_55335_cu1973(hw_uint<32*9>& stencil_54) {
  hw_uint<32> stencil_54_lane_0;
  set_at<0, 32, 32>(stencil_54_lane_0, stencil_54.extract<0, 31>());
  hw_uint<32> stencil_54_lane_1;
  set_at<0, 32, 32>(stencil_54_lane_1, stencil_54.extract<32, 63>());
  hw_uint<32> stencil_54_lane_2;
  set_at<0, 32, 32>(stencil_54_lane_2, stencil_54.extract<64, 95>());
  hw_uint<32> stencil_54_lane_3;
  set_at<0, 32, 32>(stencil_54_lane_3, stencil_54.extract<96, 127>());
  hw_uint<32> stencil_54_lane_4;
  set_at<0, 32, 32>(stencil_54_lane_4, stencil_54.extract<128, 159>());
  hw_uint<32> stencil_54_lane_5;
  set_at<0, 32, 32>(stencil_54_lane_5, stencil_54.extract<160, 191>());
  hw_uint<32> stencil_54_lane_6;
  set_at<0, 32, 32>(stencil_54_lane_6, stencil_54.extract<192, 223>());
  hw_uint<32> stencil_54_lane_7;
  set_at<0, 32, 32>(stencil_54_lane_7, stencil_54.extract<224, 255>());
  hw_uint<32> stencil_54_lane_8;
  set_at<0, 32, 32>(stencil_54_lane_8, stencil_54.extract<256, 287>());

	
auto res_init338 = set_zero_32();

	  hw_uint<32 > stencil_54_lane_0_pack;
  set_at<0, 32, 32>(stencil_54_lane_0_pack, stencil_54_lane_0);
  hw_uint<32 > res_init338_pack;
  set_at<0, 32, 32>(res_init338_pack, res_init338);
auto res_update339_stencil_55337__m_1464_stencil_55336_11500 = add(stencil_54_lane_0_pack, res_init338_pack);

	  hw_uint<32 > stencil_54_lane_1_pack;
  set_at<0, 32, 32>(stencil_54_lane_1_pack, stencil_54_lane_1);
  hw_uint<32 > res_update339_stencil_55337__m_1464_stencil_55336_11500_pack;
  set_at<0, 32, 32>(res_update339_stencil_55337__m_1464_stencil_55336_11500_pack, res_update339_stencil_55337__m_1464_stencil_55336_11500);
auto res_update339_stencil_55337_0466_stencil_55336_11498 = add(stencil_54_lane_1_pack, res_update339_stencil_55337__m_1464_stencil_55336_11500_pack);

	  hw_uint<32 > stencil_54_lane_2_pack;
  set_at<0, 32, 32>(stencil_54_lane_2_pack, stencil_54_lane_2);
  hw_uint<32 > res_update339_stencil_55337_0466_stencil_55336_11498_pack;
  set_at<0, 32, 32>(res_update339_stencil_55337_0466_stencil_55336_11498_pack, res_update339_stencil_55337_0466_stencil_55336_11498);
auto res_update339_stencil_55337_1468_stencil_55336_11496 = add(stencil_54_lane_2_pack, res_update339_stencil_55337_0466_stencil_55336_11498_pack);

	  hw_uint<32 > stencil_54_lane_3_pack;
  set_at<0, 32, 32>(stencil_54_lane_3_pack, stencil_54_lane_3);
  hw_uint<32 > res_update339_stencil_55337_1468_stencil_55336_11496_pack;
  set_at<0, 32, 32>(res_update339_stencil_55337_1468_stencil_55336_11496_pack, res_update339_stencil_55337_1468_stencil_55336_11496);
auto res_update339_stencil_55337__m_1464_stencil_55336_01494 = add(stencil_54_lane_3_pack, res_update339_stencil_55337_1468_stencil_55336_11496_pack);

	  hw_uint<32 > stencil_54_lane_4_pack;
  set_at<0, 32, 32>(stencil_54_lane_4_pack, stencil_54_lane_4);
  hw_uint<32 > res_update339_stencil_55337__m_1464_stencil_55336_01494_pack;
  set_at<0, 32, 32>(res_update339_stencil_55337__m_1464_stencil_55336_01494_pack, res_update339_stencil_55337__m_1464_stencil_55336_01494);
auto res_update339_stencil_55337_0466_stencil_55336_01492 = add(stencil_54_lane_4_pack, res_update339_stencil_55337__m_1464_stencil_55336_01494_pack);

	  hw_uint<32 > stencil_54_lane_5_pack;
  set_at<0, 32, 32>(stencil_54_lane_5_pack, stencil_54_lane_5);
  hw_uint<32 > res_update339_stencil_55337_0466_stencil_55336_01492_pack;
  set_at<0, 32, 32>(res_update339_stencil_55337_0466_stencil_55336_01492_pack, res_update339_stencil_55337_0466_stencil_55336_01492);
auto res_update339_stencil_55337_1468_stencil_55336_01490 = add(stencil_54_lane_5_pack, res_update339_stencil_55337_0466_stencil_55336_01492_pack);

	  hw_uint<32 > stencil_54_lane_6_pack;
  set_at<0, 32, 32>(stencil_54_lane_6_pack, stencil_54_lane_6);
  hw_uint<32 > res_update339_stencil_55337_1468_stencil_55336_01490_pack;
  set_at<0, 32, 32>(res_update339_stencil_55337_1468_stencil_55336_01490_pack, res_update339_stencil_55337_1468_stencil_55336_01490);
auto res_update339_stencil_55337__m_1464_stencil_55336__m_11488 = add(stencil_54_lane_6_pack, res_update339_stencil_55337_1468_stencil_55336_01490_pack);

	  hw_uint<32 > stencil_54_lane_7_pack;
  set_at<0, 32, 32>(stencil_54_lane_7_pack, stencil_54_lane_7);
  hw_uint<32 > res_update339_stencil_55337__m_1464_stencil_55336__m_11488_pack;
  set_at<0, 32, 32>(res_update339_stencil_55337__m_1464_stencil_55336__m_11488_pack, res_update339_stencil_55337__m_1464_stencil_55336__m_11488);
auto res_update339_stencil_55337_0466_stencil_55336__m_11486 = add(stencil_54_lane_7_pack, res_update339_stencil_55337__m_1464_stencil_55336__m_11488_pack);

	  hw_uint<32 > stencil_54_lane_8_pack;
  set_at<0, 32, 32>(stencil_54_lane_8_pack, stencil_54_lane_8);
  hw_uint<32 > res_update339_stencil_55337_0466_stencil_55336__m_11486_pack;
  set_at<0, 32, 32>(res_update339_stencil_55337_0466_stencil_55336__m_11486_pack, res_update339_stencil_55337_0466_stencil_55336__m_11486);
auto res_update339_stencil_55337_1468_stencil_55336__m_11484 = add(stencil_54_lane_8_pack, res_update339_stencil_55337_0466_stencil_55336__m_11486_pack);
  hw_uint<32 > return_value1974;
  set_at<0, 32, 32>(return_value1974, res_update339_stencil_55337_1468_stencil_55336__m_11484);
  return return_value1974;

}

hw_uint<32> stencil_56341_cu1976(hw_uint<32*9>& stencil_55) {
  hw_uint<32> stencil_55_lane_0;
  set_at<0, 32, 32>(stencil_55_lane_0, stencil_55.extract<0, 31>());
  hw_uint<32> stencil_55_lane_1;
  set_at<0, 32, 32>(stencil_55_lane_1, stencil_55.extract<32, 63>());
  hw_uint<32> stencil_55_lane_2;
  set_at<0, 32, 32>(stencil_55_lane_2, stencil_55.extract<64, 95>());
  hw_uint<32> stencil_55_lane_3;
  set_at<0, 32, 32>(stencil_55_lane_3, stencil_55.extract<96, 127>());
  hw_uint<32> stencil_55_lane_4;
  set_at<0, 32, 32>(stencil_55_lane_4, stencil_55.extract<128, 159>());
  hw_uint<32> stencil_55_lane_5;
  set_at<0, 32, 32>(stencil_55_lane_5, stencil_55.extract<160, 191>());
  hw_uint<32> stencil_55_lane_6;
  set_at<0, 32, 32>(stencil_55_lane_6, stencil_55.extract<192, 223>());
  hw_uint<32> stencil_55_lane_7;
  set_at<0, 32, 32>(stencil_55_lane_7, stencil_55.extract<224, 255>());
  hw_uint<32> stencil_55_lane_8;
  set_at<0, 32, 32>(stencil_55_lane_8, stencil_55.extract<256, 287>());

	
auto res_init344 = set_zero_32();

	  hw_uint<32 > stencil_55_lane_0_pack;
  set_at<0, 32, 32>(stencil_55_lane_0_pack, stencil_55_lane_0);
  hw_uint<32 > res_init344_pack;
  set_at<0, 32, 32>(res_init344_pack, res_init344);
auto res_update345_stencil_56343__m_1452_stencil_56342_11536 = add(stencil_55_lane_0_pack, res_init344_pack);

	  hw_uint<32 > stencil_55_lane_1_pack;
  set_at<0, 32, 32>(stencil_55_lane_1_pack, stencil_55_lane_1);
  hw_uint<32 > res_update345_stencil_56343__m_1452_stencil_56342_11536_pack;
  set_at<0, 32, 32>(res_update345_stencil_56343__m_1452_stencil_56342_11536_pack, res_update345_stencil_56343__m_1452_stencil_56342_11536);
auto res_update345_stencil_56343_0454_stencil_56342_11534 = add(stencil_55_lane_1_pack, res_update345_stencil_56343__m_1452_stencil_56342_11536_pack);

	  hw_uint<32 > stencil_55_lane_2_pack;
  set_at<0, 32, 32>(stencil_55_lane_2_pack, stencil_55_lane_2);
  hw_uint<32 > res_update345_stencil_56343_0454_stencil_56342_11534_pack;
  set_at<0, 32, 32>(res_update345_stencil_56343_0454_stencil_56342_11534_pack, res_update345_stencil_56343_0454_stencil_56342_11534);
auto res_update345_stencil_56343_1456_stencil_56342_11532 = add(stencil_55_lane_2_pack, res_update345_stencil_56343_0454_stencil_56342_11534_pack);

	  hw_uint<32 > stencil_55_lane_3_pack;
  set_at<0, 32, 32>(stencil_55_lane_3_pack, stencil_55_lane_3);
  hw_uint<32 > res_update345_stencil_56343_1456_stencil_56342_11532_pack;
  set_at<0, 32, 32>(res_update345_stencil_56343_1456_stencil_56342_11532_pack, res_update345_stencil_56343_1456_stencil_56342_11532);
auto res_update345_stencil_56343__m_1452_stencil_56342_01530 = add(stencil_55_lane_3_pack, res_update345_stencil_56343_1456_stencil_56342_11532_pack);

	  hw_uint<32 > stencil_55_lane_4_pack;
  set_at<0, 32, 32>(stencil_55_lane_4_pack, stencil_55_lane_4);
  hw_uint<32 > res_update345_stencil_56343__m_1452_stencil_56342_01530_pack;
  set_at<0, 32, 32>(res_update345_stencil_56343__m_1452_stencil_56342_01530_pack, res_update345_stencil_56343__m_1452_stencil_56342_01530);
auto res_update345_stencil_56343_0454_stencil_56342_01528 = add(stencil_55_lane_4_pack, res_update345_stencil_56343__m_1452_stencil_56342_01530_pack);

	  hw_uint<32 > stencil_55_lane_5_pack;
  set_at<0, 32, 32>(stencil_55_lane_5_pack, stencil_55_lane_5);
  hw_uint<32 > res_update345_stencil_56343_0454_stencil_56342_01528_pack;
  set_at<0, 32, 32>(res_update345_stencil_56343_0454_stencil_56342_01528_pack, res_update345_stencil_56343_0454_stencil_56342_01528);
auto res_update345_stencil_56343_1456_stencil_56342_01526 = add(stencil_55_lane_5_pack, res_update345_stencil_56343_0454_stencil_56342_01528_pack);

	  hw_uint<32 > stencil_55_lane_6_pack;
  set_at<0, 32, 32>(stencil_55_lane_6_pack, stencil_55_lane_6);
  hw_uint<32 > res_update345_stencil_56343_1456_stencil_56342_01526_pack;
  set_at<0, 32, 32>(res_update345_stencil_56343_1456_stencil_56342_01526_pack, res_update345_stencil_56343_1456_stencil_56342_01526);
auto res_update345_stencil_56343__m_1452_stencil_56342__m_11524 = add(stencil_55_lane_6_pack, res_update345_stencil_56343_1456_stencil_56342_01526_pack);

	  hw_uint<32 > stencil_55_lane_7_pack;
  set_at<0, 32, 32>(stencil_55_lane_7_pack, stencil_55_lane_7);
  hw_uint<32 > res_update345_stencil_56343__m_1452_stencil_56342__m_11524_pack;
  set_at<0, 32, 32>(res_update345_stencil_56343__m_1452_stencil_56342__m_11524_pack, res_update345_stencil_56343__m_1452_stencil_56342__m_11524);
auto res_update345_stencil_56343_0454_stencil_56342__m_11522 = add(stencil_55_lane_7_pack, res_update345_stencil_56343__m_1452_stencil_56342__m_11524_pack);

	  hw_uint<32 > stencil_55_lane_8_pack;
  set_at<0, 32, 32>(stencil_55_lane_8_pack, stencil_55_lane_8);
  hw_uint<32 > res_update345_stencil_56343_0454_stencil_56342__m_11522_pack;
  set_at<0, 32, 32>(res_update345_stencil_56343_0454_stencil_56342__m_11522_pack, res_update345_stencil_56343_0454_stencil_56342__m_11522);
auto res_update345_stencil_56343_1456_stencil_56342__m_11520 = add(stencil_55_lane_8_pack, res_update345_stencil_56343_0454_stencil_56342__m_11522_pack);
  hw_uint<32 > return_value1977;
  set_at<0, 32, 32>(return_value1977, res_update345_stencil_56343_1456_stencil_56342__m_11520);
  return return_value1977;

}

hw_uint<32> stencil_57347_cu1979(hw_uint<32*9>& stencil_56) {
  hw_uint<32> stencil_56_lane_0;
  set_at<0, 32, 32>(stencil_56_lane_0, stencil_56.extract<0, 31>());
  hw_uint<32> stencil_56_lane_1;
  set_at<0, 32, 32>(stencil_56_lane_1, stencil_56.extract<32, 63>());
  hw_uint<32> stencil_56_lane_2;
  set_at<0, 32, 32>(stencil_56_lane_2, stencil_56.extract<64, 95>());
  hw_uint<32> stencil_56_lane_3;
  set_at<0, 32, 32>(stencil_56_lane_3, stencil_56.extract<96, 127>());
  hw_uint<32> stencil_56_lane_4;
  set_at<0, 32, 32>(stencil_56_lane_4, stencil_56.extract<128, 159>());
  hw_uint<32> stencil_56_lane_5;
  set_at<0, 32, 32>(stencil_56_lane_5, stencil_56.extract<160, 191>());
  hw_uint<32> stencil_56_lane_6;
  set_at<0, 32, 32>(stencil_56_lane_6, stencil_56.extract<192, 223>());
  hw_uint<32> stencil_56_lane_7;
  set_at<0, 32, 32>(stencil_56_lane_7, stencil_56.extract<224, 255>());
  hw_uint<32> stencil_56_lane_8;
  set_at<0, 32, 32>(stencil_56_lane_8, stencil_56.extract<256, 287>());

	
auto res_init350 = set_zero_32();

	  hw_uint<32 > stencil_56_lane_0_pack;
  set_at<0, 32, 32>(stencil_56_lane_0_pack, stencil_56_lane_0);
  hw_uint<32 > res_init350_pack;
  set_at<0, 32, 32>(res_init350_pack, res_init350);
auto res_update351_stencil_57349__m_1440_stencil_57348_11572 = add(stencil_56_lane_0_pack, res_init350_pack);

	  hw_uint<32 > stencil_56_lane_1_pack;
  set_at<0, 32, 32>(stencil_56_lane_1_pack, stencil_56_lane_1);
  hw_uint<32 > res_update351_stencil_57349__m_1440_stencil_57348_11572_pack;
  set_at<0, 32, 32>(res_update351_stencil_57349__m_1440_stencil_57348_11572_pack, res_update351_stencil_57349__m_1440_stencil_57348_11572);
auto res_update351_stencil_57349_0442_stencil_57348_11570 = add(stencil_56_lane_1_pack, res_update351_stencil_57349__m_1440_stencil_57348_11572_pack);

	  hw_uint<32 > stencil_56_lane_2_pack;
  set_at<0, 32, 32>(stencil_56_lane_2_pack, stencil_56_lane_2);
  hw_uint<32 > res_update351_stencil_57349_0442_stencil_57348_11570_pack;
  set_at<0, 32, 32>(res_update351_stencil_57349_0442_stencil_57348_11570_pack, res_update351_stencil_57349_0442_stencil_57348_11570);
auto res_update351_stencil_57349_1444_stencil_57348_11568 = add(stencil_56_lane_2_pack, res_update351_stencil_57349_0442_stencil_57348_11570_pack);

	  hw_uint<32 > stencil_56_lane_3_pack;
  set_at<0, 32, 32>(stencil_56_lane_3_pack, stencil_56_lane_3);
  hw_uint<32 > res_update351_stencil_57349_1444_stencil_57348_11568_pack;
  set_at<0, 32, 32>(res_update351_stencil_57349_1444_stencil_57348_11568_pack, res_update351_stencil_57349_1444_stencil_57348_11568);
auto res_update351_stencil_57349__m_1440_stencil_57348_01566 = add(stencil_56_lane_3_pack, res_update351_stencil_57349_1444_stencil_57348_11568_pack);

	  hw_uint<32 > stencil_56_lane_4_pack;
  set_at<0, 32, 32>(stencil_56_lane_4_pack, stencil_56_lane_4);
  hw_uint<32 > res_update351_stencil_57349__m_1440_stencil_57348_01566_pack;
  set_at<0, 32, 32>(res_update351_stencil_57349__m_1440_stencil_57348_01566_pack, res_update351_stencil_57349__m_1440_stencil_57348_01566);
auto res_update351_stencil_57349_0442_stencil_57348_01564 = add(stencil_56_lane_4_pack, res_update351_stencil_57349__m_1440_stencil_57348_01566_pack);

	  hw_uint<32 > stencil_56_lane_5_pack;
  set_at<0, 32, 32>(stencil_56_lane_5_pack, stencil_56_lane_5);
  hw_uint<32 > res_update351_stencil_57349_0442_stencil_57348_01564_pack;
  set_at<0, 32, 32>(res_update351_stencil_57349_0442_stencil_57348_01564_pack, res_update351_stencil_57349_0442_stencil_57348_01564);
auto res_update351_stencil_57349_1444_stencil_57348_01562 = add(stencil_56_lane_5_pack, res_update351_stencil_57349_0442_stencil_57348_01564_pack);

	  hw_uint<32 > stencil_56_lane_6_pack;
  set_at<0, 32, 32>(stencil_56_lane_6_pack, stencil_56_lane_6);
  hw_uint<32 > res_update351_stencil_57349_1444_stencil_57348_01562_pack;
  set_at<0, 32, 32>(res_update351_stencil_57349_1444_stencil_57348_01562_pack, res_update351_stencil_57349_1444_stencil_57348_01562);
auto res_update351_stencil_57349__m_1440_stencil_57348__m_11560 = add(stencil_56_lane_6_pack, res_update351_stencil_57349_1444_stencil_57348_01562_pack);

	  hw_uint<32 > stencil_56_lane_7_pack;
  set_at<0, 32, 32>(stencil_56_lane_7_pack, stencil_56_lane_7);
  hw_uint<32 > res_update351_stencil_57349__m_1440_stencil_57348__m_11560_pack;
  set_at<0, 32, 32>(res_update351_stencil_57349__m_1440_stencil_57348__m_11560_pack, res_update351_stencil_57349__m_1440_stencil_57348__m_11560);
auto res_update351_stencil_57349_0442_stencil_57348__m_11558 = add(stencil_56_lane_7_pack, res_update351_stencil_57349__m_1440_stencil_57348__m_11560_pack);

	  hw_uint<32 > stencil_56_lane_8_pack;
  set_at<0, 32, 32>(stencil_56_lane_8_pack, stencil_56_lane_8);
  hw_uint<32 > res_update351_stencil_57349_0442_stencil_57348__m_11558_pack;
  set_at<0, 32, 32>(res_update351_stencil_57349_0442_stencil_57348__m_11558_pack, res_update351_stencil_57349_0442_stencil_57348__m_11558);
auto res_update351_stencil_57349_1444_stencil_57348__m_11556 = add(stencil_56_lane_8_pack, res_update351_stencil_57349_0442_stencil_57348__m_11558_pack);
  hw_uint<32 > return_value1980;
  set_at<0, 32, 32>(return_value1980, res_update351_stencil_57349_1444_stencil_57348__m_11556);
  return return_value1980;

}

hw_uint<32> stencil_58353_cu1982(hw_uint<32*9>& stencil_57) {
  hw_uint<32> stencil_57_lane_0;
  set_at<0, 32, 32>(stencil_57_lane_0, stencil_57.extract<0, 31>());
  hw_uint<32> stencil_57_lane_1;
  set_at<0, 32, 32>(stencil_57_lane_1, stencil_57.extract<32, 63>());
  hw_uint<32> stencil_57_lane_2;
  set_at<0, 32, 32>(stencil_57_lane_2, stencil_57.extract<64, 95>());
  hw_uint<32> stencil_57_lane_3;
  set_at<0, 32, 32>(stencil_57_lane_3, stencil_57.extract<96, 127>());
  hw_uint<32> stencil_57_lane_4;
  set_at<0, 32, 32>(stencil_57_lane_4, stencil_57.extract<128, 159>());
  hw_uint<32> stencil_57_lane_5;
  set_at<0, 32, 32>(stencil_57_lane_5, stencil_57.extract<160, 191>());
  hw_uint<32> stencil_57_lane_6;
  set_at<0, 32, 32>(stencil_57_lane_6, stencil_57.extract<192, 223>());
  hw_uint<32> stencil_57_lane_7;
  set_at<0, 32, 32>(stencil_57_lane_7, stencil_57.extract<224, 255>());
  hw_uint<32> stencil_57_lane_8;
  set_at<0, 32, 32>(stencil_57_lane_8, stencil_57.extract<256, 287>());

	
auto res_init356 = set_zero_32();

	  hw_uint<32 > stencil_57_lane_0_pack;
  set_at<0, 32, 32>(stencil_57_lane_0_pack, stencil_57_lane_0);
  hw_uint<32 > res_init356_pack;
  set_at<0, 32, 32>(res_init356_pack, res_init356);
auto res_update357_stencil_58355__m_1428_stencil_58354_11608 = add(stencil_57_lane_0_pack, res_init356_pack);

	  hw_uint<32 > stencil_57_lane_1_pack;
  set_at<0, 32, 32>(stencil_57_lane_1_pack, stencil_57_lane_1);
  hw_uint<32 > res_update357_stencil_58355__m_1428_stencil_58354_11608_pack;
  set_at<0, 32, 32>(res_update357_stencil_58355__m_1428_stencil_58354_11608_pack, res_update357_stencil_58355__m_1428_stencil_58354_11608);
auto res_update357_stencil_58355_0430_stencil_58354_11606 = add(stencil_57_lane_1_pack, res_update357_stencil_58355__m_1428_stencil_58354_11608_pack);

	  hw_uint<32 > stencil_57_lane_2_pack;
  set_at<0, 32, 32>(stencil_57_lane_2_pack, stencil_57_lane_2);
  hw_uint<32 > res_update357_stencil_58355_0430_stencil_58354_11606_pack;
  set_at<0, 32, 32>(res_update357_stencil_58355_0430_stencil_58354_11606_pack, res_update357_stencil_58355_0430_stencil_58354_11606);
auto res_update357_stencil_58355_1432_stencil_58354_11604 = add(stencil_57_lane_2_pack, res_update357_stencil_58355_0430_stencil_58354_11606_pack);

	  hw_uint<32 > stencil_57_lane_3_pack;
  set_at<0, 32, 32>(stencil_57_lane_3_pack, stencil_57_lane_3);
  hw_uint<32 > res_update357_stencil_58355_1432_stencil_58354_11604_pack;
  set_at<0, 32, 32>(res_update357_stencil_58355_1432_stencil_58354_11604_pack, res_update357_stencil_58355_1432_stencil_58354_11604);
auto res_update357_stencil_58355__m_1428_stencil_58354_01602 = add(stencil_57_lane_3_pack, res_update357_stencil_58355_1432_stencil_58354_11604_pack);

	  hw_uint<32 > stencil_57_lane_4_pack;
  set_at<0, 32, 32>(stencil_57_lane_4_pack, stencil_57_lane_4);
  hw_uint<32 > res_update357_stencil_58355__m_1428_stencil_58354_01602_pack;
  set_at<0, 32, 32>(res_update357_stencil_58355__m_1428_stencil_58354_01602_pack, res_update357_stencil_58355__m_1428_stencil_58354_01602);
auto res_update357_stencil_58355_0430_stencil_58354_01600 = add(stencil_57_lane_4_pack, res_update357_stencil_58355__m_1428_stencil_58354_01602_pack);

	  hw_uint<32 > stencil_57_lane_5_pack;
  set_at<0, 32, 32>(stencil_57_lane_5_pack, stencil_57_lane_5);
  hw_uint<32 > res_update357_stencil_58355_0430_stencil_58354_01600_pack;
  set_at<0, 32, 32>(res_update357_stencil_58355_0430_stencil_58354_01600_pack, res_update357_stencil_58355_0430_stencil_58354_01600);
auto res_update357_stencil_58355_1432_stencil_58354_01598 = add(stencil_57_lane_5_pack, res_update357_stencil_58355_0430_stencil_58354_01600_pack);

	  hw_uint<32 > stencil_57_lane_6_pack;
  set_at<0, 32, 32>(stencil_57_lane_6_pack, stencil_57_lane_6);
  hw_uint<32 > res_update357_stencil_58355_1432_stencil_58354_01598_pack;
  set_at<0, 32, 32>(res_update357_stencil_58355_1432_stencil_58354_01598_pack, res_update357_stencil_58355_1432_stencil_58354_01598);
auto res_update357_stencil_58355__m_1428_stencil_58354__m_11596 = add(stencil_57_lane_6_pack, res_update357_stencil_58355_1432_stencil_58354_01598_pack);

	  hw_uint<32 > stencil_57_lane_7_pack;
  set_at<0, 32, 32>(stencil_57_lane_7_pack, stencil_57_lane_7);
  hw_uint<32 > res_update357_stencil_58355__m_1428_stencil_58354__m_11596_pack;
  set_at<0, 32, 32>(res_update357_stencil_58355__m_1428_stencil_58354__m_11596_pack, res_update357_stencil_58355__m_1428_stencil_58354__m_11596);
auto res_update357_stencil_58355_0430_stencil_58354__m_11594 = add(stencil_57_lane_7_pack, res_update357_stencil_58355__m_1428_stencil_58354__m_11596_pack);

	  hw_uint<32 > stencil_57_lane_8_pack;
  set_at<0, 32, 32>(stencil_57_lane_8_pack, stencil_57_lane_8);
  hw_uint<32 > res_update357_stencil_58355_0430_stencil_58354__m_11594_pack;
  set_at<0, 32, 32>(res_update357_stencil_58355_0430_stencil_58354__m_11594_pack, res_update357_stencil_58355_0430_stencil_58354__m_11594);
auto res_update357_stencil_58355_1432_stencil_58354__m_11592 = add(stencil_57_lane_8_pack, res_update357_stencil_58355_0430_stencil_58354__m_11594_pack);
  hw_uint<32 > return_value1983;
  set_at<0, 32, 32>(return_value1983, res_update357_stencil_58355_1432_stencil_58354__m_11592);
  return return_value1983;

}

hw_uint<32> stencil_59359_cu1985(hw_uint<32*9>& stencil_58) {
  hw_uint<32> stencil_58_lane_0;
  set_at<0, 32, 32>(stencil_58_lane_0, stencil_58.extract<0, 31>());
  hw_uint<32> stencil_58_lane_1;
  set_at<0, 32, 32>(stencil_58_lane_1, stencil_58.extract<32, 63>());
  hw_uint<32> stencil_58_lane_2;
  set_at<0, 32, 32>(stencil_58_lane_2, stencil_58.extract<64, 95>());
  hw_uint<32> stencil_58_lane_3;
  set_at<0, 32, 32>(stencil_58_lane_3, stencil_58.extract<96, 127>());
  hw_uint<32> stencil_58_lane_4;
  set_at<0, 32, 32>(stencil_58_lane_4, stencil_58.extract<128, 159>());
  hw_uint<32> stencil_58_lane_5;
  set_at<0, 32, 32>(stencil_58_lane_5, stencil_58.extract<160, 191>());
  hw_uint<32> stencil_58_lane_6;
  set_at<0, 32, 32>(stencil_58_lane_6, stencil_58.extract<192, 223>());
  hw_uint<32> stencil_58_lane_7;
  set_at<0, 32, 32>(stencil_58_lane_7, stencil_58.extract<224, 255>());
  hw_uint<32> stencil_58_lane_8;
  set_at<0, 32, 32>(stencil_58_lane_8, stencil_58.extract<256, 287>());

	
auto res_init362 = set_zero_32();

	  hw_uint<32 > stencil_58_lane_0_pack;
  set_at<0, 32, 32>(stencil_58_lane_0_pack, stencil_58_lane_0);
  hw_uint<32 > res_init362_pack;
  set_at<0, 32, 32>(res_init362_pack, res_init362);
auto res_update363_stencil_59361__m_1416_stencil_59360_11644 = add(stencil_58_lane_0_pack, res_init362_pack);

	  hw_uint<32 > stencil_58_lane_1_pack;
  set_at<0, 32, 32>(stencil_58_lane_1_pack, stencil_58_lane_1);
  hw_uint<32 > res_update363_stencil_59361__m_1416_stencil_59360_11644_pack;
  set_at<0, 32, 32>(res_update363_stencil_59361__m_1416_stencil_59360_11644_pack, res_update363_stencil_59361__m_1416_stencil_59360_11644);
auto res_update363_stencil_59361_0418_stencil_59360_11642 = add(stencil_58_lane_1_pack, res_update363_stencil_59361__m_1416_stencil_59360_11644_pack);

	  hw_uint<32 > stencil_58_lane_2_pack;
  set_at<0, 32, 32>(stencil_58_lane_2_pack, stencil_58_lane_2);
  hw_uint<32 > res_update363_stencil_59361_0418_stencil_59360_11642_pack;
  set_at<0, 32, 32>(res_update363_stencil_59361_0418_stencil_59360_11642_pack, res_update363_stencil_59361_0418_stencil_59360_11642);
auto res_update363_stencil_59361_1420_stencil_59360_11640 = add(stencil_58_lane_2_pack, res_update363_stencil_59361_0418_stencil_59360_11642_pack);

	  hw_uint<32 > stencil_58_lane_3_pack;
  set_at<0, 32, 32>(stencil_58_lane_3_pack, stencil_58_lane_3);
  hw_uint<32 > res_update363_stencil_59361_1420_stencil_59360_11640_pack;
  set_at<0, 32, 32>(res_update363_stencil_59361_1420_stencil_59360_11640_pack, res_update363_stencil_59361_1420_stencil_59360_11640);
auto res_update363_stencil_59361__m_1416_stencil_59360_01638 = add(stencil_58_lane_3_pack, res_update363_stencil_59361_1420_stencil_59360_11640_pack);

	  hw_uint<32 > stencil_58_lane_4_pack;
  set_at<0, 32, 32>(stencil_58_lane_4_pack, stencil_58_lane_4);
  hw_uint<32 > res_update363_stencil_59361__m_1416_stencil_59360_01638_pack;
  set_at<0, 32, 32>(res_update363_stencil_59361__m_1416_stencil_59360_01638_pack, res_update363_stencil_59361__m_1416_stencil_59360_01638);
auto res_update363_stencil_59361_0418_stencil_59360_01636 = add(stencil_58_lane_4_pack, res_update363_stencil_59361__m_1416_stencil_59360_01638_pack);

	  hw_uint<32 > stencil_58_lane_5_pack;
  set_at<0, 32, 32>(stencil_58_lane_5_pack, stencil_58_lane_5);
  hw_uint<32 > res_update363_stencil_59361_0418_stencil_59360_01636_pack;
  set_at<0, 32, 32>(res_update363_stencil_59361_0418_stencil_59360_01636_pack, res_update363_stencil_59361_0418_stencil_59360_01636);
auto res_update363_stencil_59361_1420_stencil_59360_01634 = add(stencil_58_lane_5_pack, res_update363_stencil_59361_0418_stencil_59360_01636_pack);

	  hw_uint<32 > stencil_58_lane_6_pack;
  set_at<0, 32, 32>(stencil_58_lane_6_pack, stencil_58_lane_6);
  hw_uint<32 > res_update363_stencil_59361_1420_stencil_59360_01634_pack;
  set_at<0, 32, 32>(res_update363_stencil_59361_1420_stencil_59360_01634_pack, res_update363_stencil_59361_1420_stencil_59360_01634);
auto res_update363_stencil_59361__m_1416_stencil_59360__m_11632 = add(stencil_58_lane_6_pack, res_update363_stencil_59361_1420_stencil_59360_01634_pack);

	  hw_uint<32 > stencil_58_lane_7_pack;
  set_at<0, 32, 32>(stencil_58_lane_7_pack, stencil_58_lane_7);
  hw_uint<32 > res_update363_stencil_59361__m_1416_stencil_59360__m_11632_pack;
  set_at<0, 32, 32>(res_update363_stencil_59361__m_1416_stencil_59360__m_11632_pack, res_update363_stencil_59361__m_1416_stencil_59360__m_11632);
auto res_update363_stencil_59361_0418_stencil_59360__m_11630 = add(stencil_58_lane_7_pack, res_update363_stencil_59361__m_1416_stencil_59360__m_11632_pack);

	  hw_uint<32 > stencil_58_lane_8_pack;
  set_at<0, 32, 32>(stencil_58_lane_8_pack, stencil_58_lane_8);
  hw_uint<32 > res_update363_stencil_59361_0418_stencil_59360__m_11630_pack;
  set_at<0, 32, 32>(res_update363_stencil_59361_0418_stencil_59360__m_11630_pack, res_update363_stencil_59361_0418_stencil_59360__m_11630);
auto res_update363_stencil_59361_1420_stencil_59360__m_11628 = add(stencil_58_lane_8_pack, res_update363_stencil_59361_0418_stencil_59360__m_11630_pack);
  hw_uint<32 > return_value1986;
  set_at<0, 32, 32>(return_value1986, res_update363_stencil_59361_1420_stencil_59360__m_11628);
  return return_value1986;

}

