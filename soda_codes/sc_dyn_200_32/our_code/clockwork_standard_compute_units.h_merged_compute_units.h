#include "clockwork_standard_compute_units.h"

hw_uint<32> stencil_05_cu608(hw_uint<32*9>& in) {
  hw_uint<32> in_lane_0 = in.extract<0, 31>();
  hw_uint<32> in_lane_1 = in.extract<32, 63>();
  hw_uint<32> in_lane_2 = in.extract<64, 95>();
  hw_uint<32> in_lane_3 = in.extract<96, 127>();
  hw_uint<32> in_lane_4 = in.extract<128, 159>();
  hw_uint<32> in_lane_5 = in.extract<160, 191>();
  hw_uint<32> in_lane_6 = in.extract<192, 223>();
  hw_uint<32> in_lane_7 = in.extract<224, 255>();
  hw_uint<32> in_lane_8 = in.extract<256, 287>();

	
auto res_init8 = set_zero_32();

	  hw_uint<32 > in_lane_0_pack;
  set_at<0, 32, 32>(in_lane_0_pack, in_lane_0);
  hw_uint<32 > res_init8_pack;
  set_at<0, 32, 32>(res_init8_pack, res_init8);
auto res_update9_stencil_07__m_1134_stencil_06_1264 = add(in_lane_0_pack, res_init8_pack);

	  hw_uint<32 > in_lane_1_pack;
  set_at<0, 32, 32>(in_lane_1_pack, in_lane_1);
  hw_uint<32 > res_update9_stencil_07__m_1134_stencil_06_1264_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_1134_stencil_06_1264_pack, res_update9_stencil_07__m_1134_stencil_06_1264);
auto res_update9_stencil_07_0136_stencil_06_1262 = add(in_lane_1_pack, res_update9_stencil_07__m_1134_stencil_06_1264_pack);

	  hw_uint<32 > in_lane_2_pack;
  set_at<0, 32, 32>(in_lane_2_pack, in_lane_2);
  hw_uint<32 > res_update9_stencil_07_0136_stencil_06_1262_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_0136_stencil_06_1262_pack, res_update9_stencil_07_0136_stencil_06_1262);
auto res_update9_stencil_07_1138_stencil_06_1260 = add(in_lane_2_pack, res_update9_stencil_07_0136_stencil_06_1262_pack);

	  hw_uint<32 > in_lane_3_pack;
  set_at<0, 32, 32>(in_lane_3_pack, in_lane_3);
  hw_uint<32 > res_update9_stencil_07_1138_stencil_06_1260_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_1138_stencil_06_1260_pack, res_update9_stencil_07_1138_stencil_06_1260);
auto res_update9_stencil_07__m_1134_stencil_06_0258 = add(in_lane_3_pack, res_update9_stencil_07_1138_stencil_06_1260_pack);

	  hw_uint<32 > in_lane_4_pack;
  set_at<0, 32, 32>(in_lane_4_pack, in_lane_4);
  hw_uint<32 > res_update9_stencil_07__m_1134_stencil_06_0258_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_1134_stencil_06_0258_pack, res_update9_stencil_07__m_1134_stencil_06_0258);
auto res_update9_stencil_07_0136_stencil_06_0256 = add(in_lane_4_pack, res_update9_stencil_07__m_1134_stencil_06_0258_pack);

	  hw_uint<32 > in_lane_5_pack;
  set_at<0, 32, 32>(in_lane_5_pack, in_lane_5);
  hw_uint<32 > res_update9_stencil_07_0136_stencil_06_0256_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_0136_stencil_06_0256_pack, res_update9_stencil_07_0136_stencil_06_0256);
auto res_update9_stencil_07_1138_stencil_06_0254 = add(in_lane_5_pack, res_update9_stencil_07_0136_stencil_06_0256_pack);

	  hw_uint<32 > in_lane_6_pack;
  set_at<0, 32, 32>(in_lane_6_pack, in_lane_6);
  hw_uint<32 > res_update9_stencil_07_1138_stencil_06_0254_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_1138_stencil_06_0254_pack, res_update9_stencil_07_1138_stencil_06_0254);
auto res_update9_stencil_07__m_1134_stencil_06__m_1252 = add(in_lane_6_pack, res_update9_stencil_07_1138_stencil_06_0254_pack);

	  hw_uint<32 > in_lane_7_pack;
  set_at<0, 32, 32>(in_lane_7_pack, in_lane_7);
  hw_uint<32 > res_update9_stencil_07__m_1134_stencil_06__m_1252_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_1134_stencil_06__m_1252_pack, res_update9_stencil_07__m_1134_stencil_06__m_1252);
auto res_update9_stencil_07_0136_stencil_06__m_1250 = add(in_lane_7_pack, res_update9_stencil_07__m_1134_stencil_06__m_1252_pack);

	  hw_uint<32 > in_lane_8_pack;
  set_at<0, 32, 32>(in_lane_8_pack, in_lane_8);
  hw_uint<32 > res_update9_stencil_07_0136_stencil_06__m_1250_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_0136_stencil_06__m_1250_pack, res_update9_stencil_07_0136_stencil_06__m_1250);
auto res_update9_stencil_07_1138_stencil_06__m_1248 = add(in_lane_8_pack, res_update9_stencil_07_0136_stencil_06__m_1250_pack);
  hw_uint<32 > return_value609;
  set_at<0, 32, 32>(return_value609, res_update9_stencil_07_1138_stencil_06__m_1248);
  return return_value609;

}

hw_uint<32> stencil_111_cu611(hw_uint<32*9>& stencil_0) {
  hw_uint<32> stencil_0_lane_0 = stencil_0.extract<0, 31>();
  hw_uint<32> stencil_0_lane_1 = stencil_0.extract<32, 63>();
  hw_uint<32> stencil_0_lane_2 = stencil_0.extract<64, 95>();
  hw_uint<32> stencil_0_lane_3 = stencil_0.extract<96, 127>();
  hw_uint<32> stencil_0_lane_4 = stencil_0.extract<128, 159>();
  hw_uint<32> stencil_0_lane_5 = stencil_0.extract<160, 191>();
  hw_uint<32> stencil_0_lane_6 = stencil_0.extract<192, 223>();
  hw_uint<32> stencil_0_lane_7 = stencil_0.extract<224, 255>();
  hw_uint<32> stencil_0_lane_8 = stencil_0.extract<256, 287>();

	
auto res_init14 = set_zero_32();

	  hw_uint<32 > stencil_0_lane_0_pack;
  set_at<0, 32, 32>(stencil_0_lane_0_pack, stencil_0_lane_0);
  hw_uint<32 > res_init14_pack;
  set_at<0, 32, 32>(res_init14_pack, res_init14);
auto res_update15_stencil_113__m_1158_stencil_112_1534 = add(stencil_0_lane_0_pack, res_init14_pack);

	  hw_uint<32 > stencil_0_lane_1_pack;
  set_at<0, 32, 32>(stencil_0_lane_1_pack, stencil_0_lane_1);
  hw_uint<32 > res_update15_stencil_113__m_1158_stencil_112_1534_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_1158_stencil_112_1534_pack, res_update15_stencil_113__m_1158_stencil_112_1534);
auto res_update15_stencil_113_0160_stencil_112_1532 = add(stencil_0_lane_1_pack, res_update15_stencil_113__m_1158_stencil_112_1534_pack);

	  hw_uint<32 > stencil_0_lane_2_pack;
  set_at<0, 32, 32>(stencil_0_lane_2_pack, stencil_0_lane_2);
  hw_uint<32 > res_update15_stencil_113_0160_stencil_112_1532_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_0160_stencil_112_1532_pack, res_update15_stencil_113_0160_stencil_112_1532);
auto res_update15_stencil_113_1162_stencil_112_1530 = add(stencil_0_lane_2_pack, res_update15_stencil_113_0160_stencil_112_1532_pack);

	  hw_uint<32 > stencil_0_lane_3_pack;
  set_at<0, 32, 32>(stencil_0_lane_3_pack, stencil_0_lane_3);
  hw_uint<32 > res_update15_stencil_113_1162_stencil_112_1530_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_1162_stencil_112_1530_pack, res_update15_stencil_113_1162_stencil_112_1530);
auto res_update15_stencil_113__m_1158_stencil_112_0528 = add(stencil_0_lane_3_pack, res_update15_stencil_113_1162_stencil_112_1530_pack);

	  hw_uint<32 > stencil_0_lane_4_pack;
  set_at<0, 32, 32>(stencil_0_lane_4_pack, stencil_0_lane_4);
  hw_uint<32 > res_update15_stencil_113__m_1158_stencil_112_0528_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_1158_stencil_112_0528_pack, res_update15_stencil_113__m_1158_stencil_112_0528);
auto res_update15_stencil_113_0160_stencil_112_0526 = add(stencil_0_lane_4_pack, res_update15_stencil_113__m_1158_stencil_112_0528_pack);

	  hw_uint<32 > stencil_0_lane_5_pack;
  set_at<0, 32, 32>(stencil_0_lane_5_pack, stencil_0_lane_5);
  hw_uint<32 > res_update15_stencil_113_0160_stencil_112_0526_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_0160_stencil_112_0526_pack, res_update15_stencil_113_0160_stencil_112_0526);
auto res_update15_stencil_113_1162_stencil_112_0524 = add(stencil_0_lane_5_pack, res_update15_stencil_113_0160_stencil_112_0526_pack);

	  hw_uint<32 > stencil_0_lane_6_pack;
  set_at<0, 32, 32>(stencil_0_lane_6_pack, stencil_0_lane_6);
  hw_uint<32 > res_update15_stencil_113_1162_stencil_112_0524_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_1162_stencil_112_0524_pack, res_update15_stencil_113_1162_stencil_112_0524);
auto res_update15_stencil_113__m_1158_stencil_112__m_1522 = add(stencil_0_lane_6_pack, res_update15_stencil_113_1162_stencil_112_0524_pack);

	  hw_uint<32 > stencil_0_lane_7_pack;
  set_at<0, 32, 32>(stencil_0_lane_7_pack, stencil_0_lane_7);
  hw_uint<32 > res_update15_stencil_113__m_1158_stencil_112__m_1522_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_1158_stencil_112__m_1522_pack, res_update15_stencil_113__m_1158_stencil_112__m_1522);
auto res_update15_stencil_113_0160_stencil_112__m_1520 = add(stencil_0_lane_7_pack, res_update15_stencil_113__m_1158_stencil_112__m_1522_pack);

	  hw_uint<32 > stencil_0_lane_8_pack;
  set_at<0, 32, 32>(stencil_0_lane_8_pack, stencil_0_lane_8);
  hw_uint<32 > res_update15_stencil_113_0160_stencil_112__m_1520_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_0160_stencil_112__m_1520_pack, res_update15_stencil_113_0160_stencil_112__m_1520);
auto res_update15_stencil_113_1162_stencil_112__m_1518 = add(stencil_0_lane_8_pack, res_update15_stencil_113_0160_stencil_112__m_1520_pack);
  hw_uint<32 > return_value612;
  set_at<0, 32, 32>(return_value612, res_update15_stencil_113_1162_stencil_112__m_1518);
  return return_value612;

}

hw_uint<32> stencil_217_cu614(hw_uint<32*9>& stencil_1) {
  hw_uint<32> stencil_1_lane_0 = stencil_1.extract<0, 31>();
  hw_uint<32> stencil_1_lane_1 = stencil_1.extract<32, 63>();
  hw_uint<32> stencil_1_lane_2 = stencil_1.extract<64, 95>();
  hw_uint<32> stencil_1_lane_3 = stencil_1.extract<96, 127>();
  hw_uint<32> stencil_1_lane_4 = stencil_1.extract<128, 159>();
  hw_uint<32> stencil_1_lane_5 = stencil_1.extract<160, 191>();
  hw_uint<32> stencil_1_lane_6 = stencil_1.extract<192, 223>();
  hw_uint<32> stencil_1_lane_7 = stencil_1.extract<224, 255>();
  hw_uint<32> stencil_1_lane_8 = stencil_1.extract<256, 287>();

	
auto res_init20 = set_zero_32();

	  hw_uint<32 > stencil_1_lane_0_pack;
  set_at<0, 32, 32>(stencil_1_lane_0_pack, stencil_1_lane_0);
  hw_uint<32 > res_init20_pack;
  set_at<0, 32, 32>(res_init20_pack, res_init20);
auto res_update21_stencil_219__m_1212_stencil_218_1336 = add(stencil_1_lane_0_pack, res_init20_pack);

	  hw_uint<32 > stencil_1_lane_1_pack;
  set_at<0, 32, 32>(stencil_1_lane_1_pack, stencil_1_lane_1);
  hw_uint<32 > res_update21_stencil_219__m_1212_stencil_218_1336_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_1212_stencil_218_1336_pack, res_update21_stencil_219__m_1212_stencil_218_1336);
auto res_update21_stencil_219_0214_stencil_218_1334 = add(stencil_1_lane_1_pack, res_update21_stencil_219__m_1212_stencil_218_1336_pack);

	  hw_uint<32 > stencil_1_lane_2_pack;
  set_at<0, 32, 32>(stencil_1_lane_2_pack, stencil_1_lane_2);
  hw_uint<32 > res_update21_stencil_219_0214_stencil_218_1334_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_0214_stencil_218_1334_pack, res_update21_stencil_219_0214_stencil_218_1334);
auto res_update21_stencil_219_1216_stencil_218_1332 = add(stencil_1_lane_2_pack, res_update21_stencil_219_0214_stencil_218_1334_pack);

	  hw_uint<32 > stencil_1_lane_3_pack;
  set_at<0, 32, 32>(stencil_1_lane_3_pack, stencil_1_lane_3);
  hw_uint<32 > res_update21_stencil_219_1216_stencil_218_1332_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_1216_stencil_218_1332_pack, res_update21_stencil_219_1216_stencil_218_1332);
auto res_update21_stencil_219__m_1212_stencil_218_0330 = add(stencil_1_lane_3_pack, res_update21_stencil_219_1216_stencil_218_1332_pack);

	  hw_uint<32 > stencil_1_lane_4_pack;
  set_at<0, 32, 32>(stencil_1_lane_4_pack, stencil_1_lane_4);
  hw_uint<32 > res_update21_stencil_219__m_1212_stencil_218_0330_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_1212_stencil_218_0330_pack, res_update21_stencil_219__m_1212_stencil_218_0330);
auto res_update21_stencil_219_0214_stencil_218_0328 = add(stencil_1_lane_4_pack, res_update21_stencil_219__m_1212_stencil_218_0330_pack);

	  hw_uint<32 > stencil_1_lane_5_pack;
  set_at<0, 32, 32>(stencil_1_lane_5_pack, stencil_1_lane_5);
  hw_uint<32 > res_update21_stencil_219_0214_stencil_218_0328_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_0214_stencil_218_0328_pack, res_update21_stencil_219_0214_stencil_218_0328);
auto res_update21_stencil_219_1216_stencil_218_0326 = add(stencil_1_lane_5_pack, res_update21_stencil_219_0214_stencil_218_0328_pack);

	  hw_uint<32 > stencil_1_lane_6_pack;
  set_at<0, 32, 32>(stencil_1_lane_6_pack, stencil_1_lane_6);
  hw_uint<32 > res_update21_stencil_219_1216_stencil_218_0326_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_1216_stencil_218_0326_pack, res_update21_stencil_219_1216_stencil_218_0326);
auto res_update21_stencil_219__m_1212_stencil_218__m_1324 = add(stencil_1_lane_6_pack, res_update21_stencil_219_1216_stencil_218_0326_pack);

	  hw_uint<32 > stencil_1_lane_7_pack;
  set_at<0, 32, 32>(stencil_1_lane_7_pack, stencil_1_lane_7);
  hw_uint<32 > res_update21_stencil_219__m_1212_stencil_218__m_1324_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_1212_stencil_218__m_1324_pack, res_update21_stencil_219__m_1212_stencil_218__m_1324);
auto res_update21_stencil_219_0214_stencil_218__m_1322 = add(stencil_1_lane_7_pack, res_update21_stencil_219__m_1212_stencil_218__m_1324_pack);

	  hw_uint<32 > stencil_1_lane_8_pack;
  set_at<0, 32, 32>(stencil_1_lane_8_pack, stencil_1_lane_8);
  hw_uint<32 > res_update21_stencil_219_0214_stencil_218__m_1322_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_0214_stencil_218__m_1322_pack, res_update21_stencil_219_0214_stencil_218__m_1322);
auto res_update21_stencil_219_1216_stencil_218__m_1320 = add(stencil_1_lane_8_pack, res_update21_stencil_219_0214_stencil_218__m_1322_pack);
  hw_uint<32 > return_value615;
  set_at<0, 32, 32>(return_value615, res_update21_stencil_219_1216_stencil_218__m_1320);
  return return_value615;

}

hw_uint<32> stencil_323_cu617(hw_uint<32*9>& stencil_2) {
  hw_uint<32> stencil_2_lane_0 = stencil_2.extract<0, 31>();
  hw_uint<32> stencil_2_lane_1 = stencil_2.extract<32, 63>();
  hw_uint<32> stencil_2_lane_2 = stencil_2.extract<64, 95>();
  hw_uint<32> stencil_2_lane_3 = stencil_2.extract<96, 127>();
  hw_uint<32> stencil_2_lane_4 = stencil_2.extract<128, 159>();
  hw_uint<32> stencil_2_lane_5 = stencil_2.extract<160, 191>();
  hw_uint<32> stencil_2_lane_6 = stencil_2.extract<192, 223>();
  hw_uint<32> stencil_2_lane_7 = stencil_2.extract<224, 255>();
  hw_uint<32> stencil_2_lane_8 = stencil_2.extract<256, 287>();

	
auto res_init26 = set_zero_32();

	  hw_uint<32 > stencil_2_lane_0_pack;
  set_at<0, 32, 32>(stencil_2_lane_0_pack, stencil_2_lane_0);
  hw_uint<32 > res_init26_pack;
  set_at<0, 32, 32>(res_init26_pack, res_init26);
auto res_update27_stencil_325__m_1200_stencil_324_1372 = add(stencil_2_lane_0_pack, res_init26_pack);

	  hw_uint<32 > stencil_2_lane_1_pack;
  set_at<0, 32, 32>(stencil_2_lane_1_pack, stencil_2_lane_1);
  hw_uint<32 > res_update27_stencil_325__m_1200_stencil_324_1372_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_1200_stencil_324_1372_pack, res_update27_stencil_325__m_1200_stencil_324_1372);
auto res_update27_stencil_325_0202_stencil_324_1370 = add(stencil_2_lane_1_pack, res_update27_stencil_325__m_1200_stencil_324_1372_pack);

	  hw_uint<32 > stencil_2_lane_2_pack;
  set_at<0, 32, 32>(stencil_2_lane_2_pack, stencil_2_lane_2);
  hw_uint<32 > res_update27_stencil_325_0202_stencil_324_1370_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_0202_stencil_324_1370_pack, res_update27_stencil_325_0202_stencil_324_1370);
auto res_update27_stencil_325_1204_stencil_324_1368 = add(stencil_2_lane_2_pack, res_update27_stencil_325_0202_stencil_324_1370_pack);

	  hw_uint<32 > stencil_2_lane_3_pack;
  set_at<0, 32, 32>(stencil_2_lane_3_pack, stencil_2_lane_3);
  hw_uint<32 > res_update27_stencil_325_1204_stencil_324_1368_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_1204_stencil_324_1368_pack, res_update27_stencil_325_1204_stencil_324_1368);
auto res_update27_stencil_325__m_1200_stencil_324_0366 = add(stencil_2_lane_3_pack, res_update27_stencil_325_1204_stencil_324_1368_pack);

	  hw_uint<32 > stencil_2_lane_4_pack;
  set_at<0, 32, 32>(stencil_2_lane_4_pack, stencil_2_lane_4);
  hw_uint<32 > res_update27_stencil_325__m_1200_stencil_324_0366_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_1200_stencil_324_0366_pack, res_update27_stencil_325__m_1200_stencil_324_0366);
auto res_update27_stencil_325_0202_stencil_324_0364 = add(stencil_2_lane_4_pack, res_update27_stencil_325__m_1200_stencil_324_0366_pack);

	  hw_uint<32 > stencil_2_lane_5_pack;
  set_at<0, 32, 32>(stencil_2_lane_5_pack, stencil_2_lane_5);
  hw_uint<32 > res_update27_stencil_325_0202_stencil_324_0364_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_0202_stencil_324_0364_pack, res_update27_stencil_325_0202_stencil_324_0364);
auto res_update27_stencil_325_1204_stencil_324_0362 = add(stencil_2_lane_5_pack, res_update27_stencil_325_0202_stencil_324_0364_pack);

	  hw_uint<32 > stencil_2_lane_6_pack;
  set_at<0, 32, 32>(stencil_2_lane_6_pack, stencil_2_lane_6);
  hw_uint<32 > res_update27_stencil_325_1204_stencil_324_0362_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_1204_stencil_324_0362_pack, res_update27_stencil_325_1204_stencil_324_0362);
auto res_update27_stencil_325__m_1200_stencil_324__m_1360 = add(stencil_2_lane_6_pack, res_update27_stencil_325_1204_stencil_324_0362_pack);

	  hw_uint<32 > stencil_2_lane_7_pack;
  set_at<0, 32, 32>(stencil_2_lane_7_pack, stencil_2_lane_7);
  hw_uint<32 > res_update27_stencil_325__m_1200_stencil_324__m_1360_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_1200_stencil_324__m_1360_pack, res_update27_stencil_325__m_1200_stencil_324__m_1360);
auto res_update27_stencil_325_0202_stencil_324__m_1358 = add(stencil_2_lane_7_pack, res_update27_stencil_325__m_1200_stencil_324__m_1360_pack);

	  hw_uint<32 > stencil_2_lane_8_pack;
  set_at<0, 32, 32>(stencil_2_lane_8_pack, stencil_2_lane_8);
  hw_uint<32 > res_update27_stencil_325_0202_stencil_324__m_1358_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_0202_stencil_324__m_1358_pack, res_update27_stencil_325_0202_stencil_324__m_1358);
auto res_update27_stencil_325_1204_stencil_324__m_1356 = add(stencil_2_lane_8_pack, res_update27_stencil_325_0202_stencil_324__m_1358_pack);
  hw_uint<32 > return_value618;
  set_at<0, 32, 32>(return_value618, res_update27_stencil_325_1204_stencil_324__m_1356);
  return return_value618;

}

hw_uint<32> stencil_429_cu620(hw_uint<32*9>& stencil_3) {
  hw_uint<32> stencil_3_lane_0 = stencil_3.extract<0, 31>();
  hw_uint<32> stencil_3_lane_1 = stencil_3.extract<32, 63>();
  hw_uint<32> stencil_3_lane_2 = stencil_3.extract<64, 95>();
  hw_uint<32> stencil_3_lane_3 = stencil_3.extract<96, 127>();
  hw_uint<32> stencil_3_lane_4 = stencil_3.extract<128, 159>();
  hw_uint<32> stencil_3_lane_5 = stencil_3.extract<160, 191>();
  hw_uint<32> stencil_3_lane_6 = stencil_3.extract<192, 223>();
  hw_uint<32> stencil_3_lane_7 = stencil_3.extract<224, 255>();
  hw_uint<32> stencil_3_lane_8 = stencil_3.extract<256, 287>();

	
auto res_init32 = set_zero_32();

	  hw_uint<32 > stencil_3_lane_0_pack;
  set_at<0, 32, 32>(stencil_3_lane_0_pack, stencil_3_lane_0);
  hw_uint<32 > res_init32_pack;
  set_at<0, 32, 32>(res_init32_pack, res_init32);
auto res_update33_stencil_431__m_1188_stencil_430_1408 = add(stencil_3_lane_0_pack, res_init32_pack);

	  hw_uint<32 > stencil_3_lane_1_pack;
  set_at<0, 32, 32>(stencil_3_lane_1_pack, stencil_3_lane_1);
  hw_uint<32 > res_update33_stencil_431__m_1188_stencil_430_1408_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_1188_stencil_430_1408_pack, res_update33_stencil_431__m_1188_stencil_430_1408);
auto res_update33_stencil_431_0190_stencil_430_1406 = add(stencil_3_lane_1_pack, res_update33_stencil_431__m_1188_stencil_430_1408_pack);

	  hw_uint<32 > stencil_3_lane_2_pack;
  set_at<0, 32, 32>(stencil_3_lane_2_pack, stencil_3_lane_2);
  hw_uint<32 > res_update33_stencil_431_0190_stencil_430_1406_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_0190_stencil_430_1406_pack, res_update33_stencil_431_0190_stencil_430_1406);
auto res_update33_stencil_431_1192_stencil_430_1404 = add(stencil_3_lane_2_pack, res_update33_stencil_431_0190_stencil_430_1406_pack);

	  hw_uint<32 > stencil_3_lane_3_pack;
  set_at<0, 32, 32>(stencil_3_lane_3_pack, stencil_3_lane_3);
  hw_uint<32 > res_update33_stencil_431_1192_stencil_430_1404_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_1192_stencil_430_1404_pack, res_update33_stencil_431_1192_stencil_430_1404);
auto res_update33_stencil_431__m_1188_stencil_430_0402 = add(stencil_3_lane_3_pack, res_update33_stencil_431_1192_stencil_430_1404_pack);

	  hw_uint<32 > stencil_3_lane_4_pack;
  set_at<0, 32, 32>(stencil_3_lane_4_pack, stencil_3_lane_4);
  hw_uint<32 > res_update33_stencil_431__m_1188_stencil_430_0402_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_1188_stencil_430_0402_pack, res_update33_stencil_431__m_1188_stencil_430_0402);
auto res_update33_stencil_431_0190_stencil_430_0400 = add(stencil_3_lane_4_pack, res_update33_stencil_431__m_1188_stencil_430_0402_pack);

	  hw_uint<32 > stencil_3_lane_5_pack;
  set_at<0, 32, 32>(stencil_3_lane_5_pack, stencil_3_lane_5);
  hw_uint<32 > res_update33_stencil_431_0190_stencil_430_0400_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_0190_stencil_430_0400_pack, res_update33_stencil_431_0190_stencil_430_0400);
auto res_update33_stencil_431_1192_stencil_430_0398 = add(stencil_3_lane_5_pack, res_update33_stencil_431_0190_stencil_430_0400_pack);

	  hw_uint<32 > stencil_3_lane_6_pack;
  set_at<0, 32, 32>(stencil_3_lane_6_pack, stencil_3_lane_6);
  hw_uint<32 > res_update33_stencil_431_1192_stencil_430_0398_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_1192_stencil_430_0398_pack, res_update33_stencil_431_1192_stencil_430_0398);
auto res_update33_stencil_431__m_1188_stencil_430__m_1396 = add(stencil_3_lane_6_pack, res_update33_stencil_431_1192_stencil_430_0398_pack);

	  hw_uint<32 > stencil_3_lane_7_pack;
  set_at<0, 32, 32>(stencil_3_lane_7_pack, stencil_3_lane_7);
  hw_uint<32 > res_update33_stencil_431__m_1188_stencil_430__m_1396_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_1188_stencil_430__m_1396_pack, res_update33_stencil_431__m_1188_stencil_430__m_1396);
auto res_update33_stencil_431_0190_stencil_430__m_1394 = add(stencil_3_lane_7_pack, res_update33_stencil_431__m_1188_stencil_430__m_1396_pack);

	  hw_uint<32 > stencil_3_lane_8_pack;
  set_at<0, 32, 32>(stencil_3_lane_8_pack, stencil_3_lane_8);
  hw_uint<32 > res_update33_stencil_431_0190_stencil_430__m_1394_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_0190_stencil_430__m_1394_pack, res_update33_stencil_431_0190_stencil_430__m_1394);
auto res_update33_stencil_431_1192_stencil_430__m_1392 = add(stencil_3_lane_8_pack, res_update33_stencil_431_0190_stencil_430__m_1394_pack);
  hw_uint<32 > return_value621;
  set_at<0, 32, 32>(return_value621, res_update33_stencil_431_1192_stencil_430__m_1392);
  return return_value621;

}

hw_uint<32> stencil_535_cu623(hw_uint<32*9>& stencil_4) {
  hw_uint<32> stencil_4_lane_0 = stencil_4.extract<0, 31>();
  hw_uint<32> stencil_4_lane_1 = stencil_4.extract<32, 63>();
  hw_uint<32> stencil_4_lane_2 = stencil_4.extract<64, 95>();
  hw_uint<32> stencil_4_lane_3 = stencil_4.extract<96, 127>();
  hw_uint<32> stencil_4_lane_4 = stencil_4.extract<128, 159>();
  hw_uint<32> stencil_4_lane_5 = stencil_4.extract<160, 191>();
  hw_uint<32> stencil_4_lane_6 = stencil_4.extract<192, 223>();
  hw_uint<32> stencil_4_lane_7 = stencil_4.extract<224, 255>();
  hw_uint<32> stencil_4_lane_8 = stencil_4.extract<256, 287>();

	
auto res_init38 = set_zero_32();

	  hw_uint<32 > stencil_4_lane_0_pack;
  set_at<0, 32, 32>(stencil_4_lane_0_pack, stencil_4_lane_0);
  hw_uint<32 > res_init38_pack;
  set_at<0, 32, 32>(res_init38_pack, res_init38);
auto res_update39_stencil_537__m_1176_stencil_536_1444 = add(stencil_4_lane_0_pack, res_init38_pack);

	  hw_uint<32 > stencil_4_lane_1_pack;
  set_at<0, 32, 32>(stencil_4_lane_1_pack, stencil_4_lane_1);
  hw_uint<32 > res_update39_stencil_537__m_1176_stencil_536_1444_pack;
  set_at<0, 32, 32>(res_update39_stencil_537__m_1176_stencil_536_1444_pack, res_update39_stencil_537__m_1176_stencil_536_1444);
auto res_update39_stencil_537_0178_stencil_536_1442 = add(stencil_4_lane_1_pack, res_update39_stencil_537__m_1176_stencil_536_1444_pack);

	  hw_uint<32 > stencil_4_lane_2_pack;
  set_at<0, 32, 32>(stencil_4_lane_2_pack, stencil_4_lane_2);
  hw_uint<32 > res_update39_stencil_537_0178_stencil_536_1442_pack;
  set_at<0, 32, 32>(res_update39_stencil_537_0178_stencil_536_1442_pack, res_update39_stencil_537_0178_stencil_536_1442);
auto res_update39_stencil_537_1180_stencil_536_1440 = add(stencil_4_lane_2_pack, res_update39_stencil_537_0178_stencil_536_1442_pack);

	  hw_uint<32 > stencil_4_lane_3_pack;
  set_at<0, 32, 32>(stencil_4_lane_3_pack, stencil_4_lane_3);
  hw_uint<32 > res_update39_stencil_537_1180_stencil_536_1440_pack;
  set_at<0, 32, 32>(res_update39_stencil_537_1180_stencil_536_1440_pack, res_update39_stencil_537_1180_stencil_536_1440);
auto res_update39_stencil_537__m_1176_stencil_536_0438 = add(stencil_4_lane_3_pack, res_update39_stencil_537_1180_stencil_536_1440_pack);

	  hw_uint<32 > stencil_4_lane_4_pack;
  set_at<0, 32, 32>(stencil_4_lane_4_pack, stencil_4_lane_4);
  hw_uint<32 > res_update39_stencil_537__m_1176_stencil_536_0438_pack;
  set_at<0, 32, 32>(res_update39_stencil_537__m_1176_stencil_536_0438_pack, res_update39_stencil_537__m_1176_stencil_536_0438);
auto res_update39_stencil_537_0178_stencil_536_0436 = add(stencil_4_lane_4_pack, res_update39_stencil_537__m_1176_stencil_536_0438_pack);

	  hw_uint<32 > stencil_4_lane_5_pack;
  set_at<0, 32, 32>(stencil_4_lane_5_pack, stencil_4_lane_5);
  hw_uint<32 > res_update39_stencil_537_0178_stencil_536_0436_pack;
  set_at<0, 32, 32>(res_update39_stencil_537_0178_stencil_536_0436_pack, res_update39_stencil_537_0178_stencil_536_0436);
auto res_update39_stencil_537_1180_stencil_536_0434 = add(stencil_4_lane_5_pack, res_update39_stencil_537_0178_stencil_536_0436_pack);

	  hw_uint<32 > stencil_4_lane_6_pack;
  set_at<0, 32, 32>(stencil_4_lane_6_pack, stencil_4_lane_6);
  hw_uint<32 > res_update39_stencil_537_1180_stencil_536_0434_pack;
  set_at<0, 32, 32>(res_update39_stencil_537_1180_stencil_536_0434_pack, res_update39_stencil_537_1180_stencil_536_0434);
auto res_update39_stencil_537__m_1176_stencil_536__m_1432 = add(stencil_4_lane_6_pack, res_update39_stencil_537_1180_stencil_536_0434_pack);

	  hw_uint<32 > stencil_4_lane_7_pack;
  set_at<0, 32, 32>(stencil_4_lane_7_pack, stencil_4_lane_7);
  hw_uint<32 > res_update39_stencil_537__m_1176_stencil_536__m_1432_pack;
  set_at<0, 32, 32>(res_update39_stencil_537__m_1176_stencil_536__m_1432_pack, res_update39_stencil_537__m_1176_stencil_536__m_1432);
auto res_update39_stencil_537_0178_stencil_536__m_1430 = add(stencil_4_lane_7_pack, res_update39_stencil_537__m_1176_stencil_536__m_1432_pack);

	  hw_uint<32 > stencil_4_lane_8_pack;
  set_at<0, 32, 32>(stencil_4_lane_8_pack, stencil_4_lane_8);
  hw_uint<32 > res_update39_stencil_537_0178_stencil_536__m_1430_pack;
  set_at<0, 32, 32>(res_update39_stencil_537_0178_stencil_536__m_1430_pack, res_update39_stencil_537_0178_stencil_536__m_1430);
auto res_update39_stencil_537_1180_stencil_536__m_1428 = add(stencil_4_lane_8_pack, res_update39_stencil_537_0178_stencil_536__m_1430_pack);
  hw_uint<32 > return_value624;
  set_at<0, 32, 32>(return_value624, res_update39_stencil_537_1180_stencil_536__m_1428);
  return return_value624;

}

hw_uint<32> stencil_641_cu626(hw_uint<32*9>& stencil_5) {
  hw_uint<32> stencil_5_lane_0 = stencil_5.extract<0, 31>();
  hw_uint<32> stencil_5_lane_1 = stencil_5.extract<32, 63>();
  hw_uint<32> stencil_5_lane_2 = stencil_5.extract<64, 95>();
  hw_uint<32> stencil_5_lane_3 = stencil_5.extract<96, 127>();
  hw_uint<32> stencil_5_lane_4 = stencil_5.extract<128, 159>();
  hw_uint<32> stencil_5_lane_5 = stencil_5.extract<160, 191>();
  hw_uint<32> stencil_5_lane_6 = stencil_5.extract<192, 223>();
  hw_uint<32> stencil_5_lane_7 = stencil_5.extract<224, 255>();
  hw_uint<32> stencil_5_lane_8 = stencil_5.extract<256, 287>();

	
auto res_init44 = set_zero_32();

	  hw_uint<32 > stencil_5_lane_0_pack;
  set_at<0, 32, 32>(stencil_5_lane_0_pack, stencil_5_lane_0);
  hw_uint<32 > res_init44_pack;
  set_at<0, 32, 32>(res_init44_pack, res_init44);
auto res_update45_stencil_643__m_1164_stencil_642_1480 = add(stencil_5_lane_0_pack, res_init44_pack);

	  hw_uint<32 > stencil_5_lane_1_pack;
  set_at<0, 32, 32>(stencil_5_lane_1_pack, stencil_5_lane_1);
  hw_uint<32 > res_update45_stencil_643__m_1164_stencil_642_1480_pack;
  set_at<0, 32, 32>(res_update45_stencil_643__m_1164_stencil_642_1480_pack, res_update45_stencil_643__m_1164_stencil_642_1480);
auto res_update45_stencil_643_0166_stencil_642_1478 = add(stencil_5_lane_1_pack, res_update45_stencil_643__m_1164_stencil_642_1480_pack);

	  hw_uint<32 > stencil_5_lane_2_pack;
  set_at<0, 32, 32>(stencil_5_lane_2_pack, stencil_5_lane_2);
  hw_uint<32 > res_update45_stencil_643_0166_stencil_642_1478_pack;
  set_at<0, 32, 32>(res_update45_stencil_643_0166_stencil_642_1478_pack, res_update45_stencil_643_0166_stencil_642_1478);
auto res_update45_stencil_643_1168_stencil_642_1476 = add(stencil_5_lane_2_pack, res_update45_stencil_643_0166_stencil_642_1478_pack);

	  hw_uint<32 > stencil_5_lane_3_pack;
  set_at<0, 32, 32>(stencil_5_lane_3_pack, stencil_5_lane_3);
  hw_uint<32 > res_update45_stencil_643_1168_stencil_642_1476_pack;
  set_at<0, 32, 32>(res_update45_stencil_643_1168_stencil_642_1476_pack, res_update45_stencil_643_1168_stencil_642_1476);
auto res_update45_stencil_643__m_1164_stencil_642_0474 = add(stencil_5_lane_3_pack, res_update45_stencil_643_1168_stencil_642_1476_pack);

	  hw_uint<32 > stencil_5_lane_4_pack;
  set_at<0, 32, 32>(stencil_5_lane_4_pack, stencil_5_lane_4);
  hw_uint<32 > res_update45_stencil_643__m_1164_stencil_642_0474_pack;
  set_at<0, 32, 32>(res_update45_stencil_643__m_1164_stencil_642_0474_pack, res_update45_stencil_643__m_1164_stencil_642_0474);
auto res_update45_stencil_643_0166_stencil_642_0472 = add(stencil_5_lane_4_pack, res_update45_stencil_643__m_1164_stencil_642_0474_pack);

	  hw_uint<32 > stencil_5_lane_5_pack;
  set_at<0, 32, 32>(stencil_5_lane_5_pack, stencil_5_lane_5);
  hw_uint<32 > res_update45_stencil_643_0166_stencil_642_0472_pack;
  set_at<0, 32, 32>(res_update45_stencil_643_0166_stencil_642_0472_pack, res_update45_stencil_643_0166_stencil_642_0472);
auto res_update45_stencil_643_1168_stencil_642_0470 = add(stencil_5_lane_5_pack, res_update45_stencil_643_0166_stencil_642_0472_pack);

	  hw_uint<32 > stencil_5_lane_6_pack;
  set_at<0, 32, 32>(stencil_5_lane_6_pack, stencil_5_lane_6);
  hw_uint<32 > res_update45_stencil_643_1168_stencil_642_0470_pack;
  set_at<0, 32, 32>(res_update45_stencil_643_1168_stencil_642_0470_pack, res_update45_stencil_643_1168_stencil_642_0470);
auto res_update45_stencil_643__m_1164_stencil_642__m_1468 = add(stencil_5_lane_6_pack, res_update45_stencil_643_1168_stencil_642_0470_pack);

	  hw_uint<32 > stencil_5_lane_7_pack;
  set_at<0, 32, 32>(stencil_5_lane_7_pack, stencil_5_lane_7);
  hw_uint<32 > res_update45_stencil_643__m_1164_stencil_642__m_1468_pack;
  set_at<0, 32, 32>(res_update45_stencil_643__m_1164_stencil_642__m_1468_pack, res_update45_stencil_643__m_1164_stencil_642__m_1468);
auto res_update45_stencil_643_0166_stencil_642__m_1466 = add(stencil_5_lane_7_pack, res_update45_stencil_643__m_1164_stencil_642__m_1468_pack);

	  hw_uint<32 > stencil_5_lane_8_pack;
  set_at<0, 32, 32>(stencil_5_lane_8_pack, stencil_5_lane_8);
  hw_uint<32 > res_update45_stencil_643_0166_stencil_642__m_1466_pack;
  set_at<0, 32, 32>(res_update45_stencil_643_0166_stencil_642__m_1466_pack, res_update45_stencil_643_0166_stencil_642__m_1466);
auto res_update45_stencil_643_1168_stencil_642__m_1464 = add(stencil_5_lane_8_pack, res_update45_stencil_643_0166_stencil_642__m_1466_pack);
  hw_uint<32 > return_value627;
  set_at<0, 32, 32>(return_value627, res_update45_stencil_643_1168_stencil_642__m_1464);
  return return_value627;

}

hw_uint<32> stencil_747_cu629(hw_uint<32*9>& stencil_6) {
  hw_uint<32> stencil_6_lane_0 = stencil_6.extract<0, 31>();
  hw_uint<32> stencil_6_lane_1 = stencil_6.extract<32, 63>();
  hw_uint<32> stencil_6_lane_2 = stencil_6.extract<64, 95>();
  hw_uint<32> stencil_6_lane_3 = stencil_6.extract<96, 127>();
  hw_uint<32> stencil_6_lane_4 = stencil_6.extract<128, 159>();
  hw_uint<32> stencil_6_lane_5 = stencil_6.extract<160, 191>();
  hw_uint<32> stencil_6_lane_6 = stencil_6.extract<192, 223>();
  hw_uint<32> stencil_6_lane_7 = stencil_6.extract<224, 255>();
  hw_uint<32> stencil_6_lane_8 = stencil_6.extract<256, 287>();

	
auto res_init50 = set_zero_32();

	  hw_uint<32 > stencil_6_lane_0_pack;
  set_at<0, 32, 32>(stencil_6_lane_0_pack, stencil_6_lane_0);
  hw_uint<32 > res_init50_pack;
  set_at<0, 32, 32>(res_init50_pack, res_init50);
auto res_update51_stencil_749__m_1152_stencil_748_1516 = add(stencil_6_lane_0_pack, res_init50_pack);

	  hw_uint<32 > stencil_6_lane_1_pack;
  set_at<0, 32, 32>(stencil_6_lane_1_pack, stencil_6_lane_1);
  hw_uint<32 > res_update51_stencil_749__m_1152_stencil_748_1516_pack;
  set_at<0, 32, 32>(res_update51_stencil_749__m_1152_stencil_748_1516_pack, res_update51_stencil_749__m_1152_stencil_748_1516);
auto res_update51_stencil_749_0154_stencil_748_1514 = add(stencil_6_lane_1_pack, res_update51_stencil_749__m_1152_stencil_748_1516_pack);

	  hw_uint<32 > stencil_6_lane_2_pack;
  set_at<0, 32, 32>(stencil_6_lane_2_pack, stencil_6_lane_2);
  hw_uint<32 > res_update51_stencil_749_0154_stencil_748_1514_pack;
  set_at<0, 32, 32>(res_update51_stencil_749_0154_stencil_748_1514_pack, res_update51_stencil_749_0154_stencil_748_1514);
auto res_update51_stencil_749_1156_stencil_748_1512 = add(stencil_6_lane_2_pack, res_update51_stencil_749_0154_stencil_748_1514_pack);

	  hw_uint<32 > stencil_6_lane_3_pack;
  set_at<0, 32, 32>(stencil_6_lane_3_pack, stencil_6_lane_3);
  hw_uint<32 > res_update51_stencil_749_1156_stencil_748_1512_pack;
  set_at<0, 32, 32>(res_update51_stencil_749_1156_stencil_748_1512_pack, res_update51_stencil_749_1156_stencil_748_1512);
auto res_update51_stencil_749__m_1152_stencil_748_0510 = add(stencil_6_lane_3_pack, res_update51_stencil_749_1156_stencil_748_1512_pack);

	  hw_uint<32 > stencil_6_lane_4_pack;
  set_at<0, 32, 32>(stencil_6_lane_4_pack, stencil_6_lane_4);
  hw_uint<32 > res_update51_stencil_749__m_1152_stencil_748_0510_pack;
  set_at<0, 32, 32>(res_update51_stencil_749__m_1152_stencil_748_0510_pack, res_update51_stencil_749__m_1152_stencil_748_0510);
auto res_update51_stencil_749_0154_stencil_748_0508 = add(stencil_6_lane_4_pack, res_update51_stencil_749__m_1152_stencil_748_0510_pack);

	  hw_uint<32 > stencil_6_lane_5_pack;
  set_at<0, 32, 32>(stencil_6_lane_5_pack, stencil_6_lane_5);
  hw_uint<32 > res_update51_stencil_749_0154_stencil_748_0508_pack;
  set_at<0, 32, 32>(res_update51_stencil_749_0154_stencil_748_0508_pack, res_update51_stencil_749_0154_stencil_748_0508);
auto res_update51_stencil_749_1156_stencil_748_0506 = add(stencil_6_lane_5_pack, res_update51_stencil_749_0154_stencil_748_0508_pack);

	  hw_uint<32 > stencil_6_lane_6_pack;
  set_at<0, 32, 32>(stencil_6_lane_6_pack, stencil_6_lane_6);
  hw_uint<32 > res_update51_stencil_749_1156_stencil_748_0506_pack;
  set_at<0, 32, 32>(res_update51_stencil_749_1156_stencil_748_0506_pack, res_update51_stencil_749_1156_stencil_748_0506);
auto res_update51_stencil_749__m_1152_stencil_748__m_1504 = add(stencil_6_lane_6_pack, res_update51_stencil_749_1156_stencil_748_0506_pack);

	  hw_uint<32 > stencil_6_lane_7_pack;
  set_at<0, 32, 32>(stencil_6_lane_7_pack, stencil_6_lane_7);
  hw_uint<32 > res_update51_stencil_749__m_1152_stencil_748__m_1504_pack;
  set_at<0, 32, 32>(res_update51_stencil_749__m_1152_stencil_748__m_1504_pack, res_update51_stencil_749__m_1152_stencil_748__m_1504);
auto res_update51_stencil_749_0154_stencil_748__m_1502 = add(stencil_6_lane_7_pack, res_update51_stencil_749__m_1152_stencil_748__m_1504_pack);

	  hw_uint<32 > stencil_6_lane_8_pack;
  set_at<0, 32, 32>(stencil_6_lane_8_pack, stencil_6_lane_8);
  hw_uint<32 > res_update51_stencil_749_0154_stencil_748__m_1502_pack;
  set_at<0, 32, 32>(res_update51_stencil_749_0154_stencil_748__m_1502_pack, res_update51_stencil_749_0154_stencil_748__m_1502);
auto res_update51_stencil_749_1156_stencil_748__m_1500 = add(stencil_6_lane_8_pack, res_update51_stencil_749_0154_stencil_748__m_1502_pack);
  hw_uint<32 > return_value630;
  set_at<0, 32, 32>(return_value630, res_update51_stencil_749_1156_stencil_748__m_1500);
  return return_value630;

}

hw_uint<32> stencil_853_cu632(hw_uint<32*9>& stencil_7) {
  hw_uint<32> stencil_7_lane_0 = stencil_7.extract<0, 31>();
  hw_uint<32> stencil_7_lane_1 = stencil_7.extract<32, 63>();
  hw_uint<32> stencil_7_lane_2 = stencil_7.extract<64, 95>();
  hw_uint<32> stencil_7_lane_3 = stencil_7.extract<96, 127>();
  hw_uint<32> stencil_7_lane_4 = stencil_7.extract<128, 159>();
  hw_uint<32> stencil_7_lane_5 = stencil_7.extract<160, 191>();
  hw_uint<32> stencil_7_lane_6 = stencil_7.extract<192, 223>();
  hw_uint<32> stencil_7_lane_7 = stencil_7.extract<224, 255>();
  hw_uint<32> stencil_7_lane_8 = stencil_7.extract<256, 287>();

	
auto res_init56 = set_zero_32();

	  hw_uint<32 > stencil_7_lane_0_pack;
  set_at<0, 32, 32>(stencil_7_lane_0_pack, stencil_7_lane_0);
  hw_uint<32 > res_init56_pack;
  set_at<0, 32, 32>(res_init56_pack, res_init56);
auto res_update57_stencil_855__m_1140_stencil_854_1552 = add(stencil_7_lane_0_pack, res_init56_pack);

	  hw_uint<32 > stencil_7_lane_1_pack;
  set_at<0, 32, 32>(stencil_7_lane_1_pack, stencil_7_lane_1);
  hw_uint<32 > res_update57_stencil_855__m_1140_stencil_854_1552_pack;
  set_at<0, 32, 32>(res_update57_stencil_855__m_1140_stencil_854_1552_pack, res_update57_stencil_855__m_1140_stencil_854_1552);
auto res_update57_stencil_855_0142_stencil_854_1550 = add(stencil_7_lane_1_pack, res_update57_stencil_855__m_1140_stencil_854_1552_pack);

	  hw_uint<32 > stencil_7_lane_2_pack;
  set_at<0, 32, 32>(stencil_7_lane_2_pack, stencil_7_lane_2);
  hw_uint<32 > res_update57_stencil_855_0142_stencil_854_1550_pack;
  set_at<0, 32, 32>(res_update57_stencil_855_0142_stencil_854_1550_pack, res_update57_stencil_855_0142_stencil_854_1550);
auto res_update57_stencil_855_1144_stencil_854_1548 = add(stencil_7_lane_2_pack, res_update57_stencil_855_0142_stencil_854_1550_pack);

	  hw_uint<32 > stencil_7_lane_3_pack;
  set_at<0, 32, 32>(stencil_7_lane_3_pack, stencil_7_lane_3);
  hw_uint<32 > res_update57_stencil_855_1144_stencil_854_1548_pack;
  set_at<0, 32, 32>(res_update57_stencil_855_1144_stencil_854_1548_pack, res_update57_stencil_855_1144_stencil_854_1548);
auto res_update57_stencil_855__m_1140_stencil_854_0546 = add(stencil_7_lane_3_pack, res_update57_stencil_855_1144_stencil_854_1548_pack);

	  hw_uint<32 > stencil_7_lane_4_pack;
  set_at<0, 32, 32>(stencil_7_lane_4_pack, stencil_7_lane_4);
  hw_uint<32 > res_update57_stencil_855__m_1140_stencil_854_0546_pack;
  set_at<0, 32, 32>(res_update57_stencil_855__m_1140_stencil_854_0546_pack, res_update57_stencil_855__m_1140_stencil_854_0546);
auto res_update57_stencil_855_0142_stencil_854_0544 = add(stencil_7_lane_4_pack, res_update57_stencil_855__m_1140_stencil_854_0546_pack);

	  hw_uint<32 > stencil_7_lane_5_pack;
  set_at<0, 32, 32>(stencil_7_lane_5_pack, stencil_7_lane_5);
  hw_uint<32 > res_update57_stencil_855_0142_stencil_854_0544_pack;
  set_at<0, 32, 32>(res_update57_stencil_855_0142_stencil_854_0544_pack, res_update57_stencil_855_0142_stencil_854_0544);
auto res_update57_stencil_855_1144_stencil_854_0542 = add(stencil_7_lane_5_pack, res_update57_stencil_855_0142_stencil_854_0544_pack);

	  hw_uint<32 > stencil_7_lane_6_pack;
  set_at<0, 32, 32>(stencil_7_lane_6_pack, stencil_7_lane_6);
  hw_uint<32 > res_update57_stencil_855_1144_stencil_854_0542_pack;
  set_at<0, 32, 32>(res_update57_stencil_855_1144_stencil_854_0542_pack, res_update57_stencil_855_1144_stencil_854_0542);
auto res_update57_stencil_855__m_1140_stencil_854__m_1540 = add(stencil_7_lane_6_pack, res_update57_stencil_855_1144_stencil_854_0542_pack);

	  hw_uint<32 > stencil_7_lane_7_pack;
  set_at<0, 32, 32>(stencil_7_lane_7_pack, stencil_7_lane_7);
  hw_uint<32 > res_update57_stencil_855__m_1140_stencil_854__m_1540_pack;
  set_at<0, 32, 32>(res_update57_stencil_855__m_1140_stencil_854__m_1540_pack, res_update57_stencil_855__m_1140_stencil_854__m_1540);
auto res_update57_stencil_855_0142_stencil_854__m_1538 = add(stencil_7_lane_7_pack, res_update57_stencil_855__m_1140_stencil_854__m_1540_pack);

	  hw_uint<32 > stencil_7_lane_8_pack;
  set_at<0, 32, 32>(stencil_7_lane_8_pack, stencil_7_lane_8);
  hw_uint<32 > res_update57_stencil_855_0142_stencil_854__m_1538_pack;
  set_at<0, 32, 32>(res_update57_stencil_855_0142_stencil_854__m_1538_pack, res_update57_stencil_855_0142_stencil_854__m_1538);
auto res_update57_stencil_855_1144_stencil_854__m_1536 = add(stencil_7_lane_8_pack, res_update57_stencil_855_0142_stencil_854__m_1538_pack);
  hw_uint<32 > return_value633;
  set_at<0, 32, 32>(return_value633, res_update57_stencil_855_1144_stencil_854__m_1536);
  return return_value633;

}

hw_uint<32> stencil_959_cu635(hw_uint<32*9>& stencil_8) {
  hw_uint<32> stencil_8_lane_0 = stencil_8.extract<0, 31>();
  hw_uint<32> stencil_8_lane_1 = stencil_8.extract<32, 63>();
  hw_uint<32> stencil_8_lane_2 = stencil_8.extract<64, 95>();
  hw_uint<32> stencil_8_lane_3 = stencil_8.extract<96, 127>();
  hw_uint<32> stencil_8_lane_4 = stencil_8.extract<128, 159>();
  hw_uint<32> stencil_8_lane_5 = stencil_8.extract<160, 191>();
  hw_uint<32> stencil_8_lane_6 = stencil_8.extract<192, 223>();
  hw_uint<32> stencil_8_lane_7 = stencil_8.extract<224, 255>();
  hw_uint<32> stencil_8_lane_8 = stencil_8.extract<256, 287>();

	
auto res_init62 = set_zero_32();

	  hw_uint<32 > stencil_8_lane_0_pack;
  set_at<0, 32, 32>(stencil_8_lane_0_pack, stencil_8_lane_0);
  hw_uint<32 > res_init62_pack;
  set_at<0, 32, 32>(res_init62_pack, res_init62);
auto res_update63_stencil_961__m_1128_stencil_960_1588 = add(stencil_8_lane_0_pack, res_init62_pack);

	  hw_uint<32 > stencil_8_lane_1_pack;
  set_at<0, 32, 32>(stencil_8_lane_1_pack, stencil_8_lane_1);
  hw_uint<32 > res_update63_stencil_961__m_1128_stencil_960_1588_pack;
  set_at<0, 32, 32>(res_update63_stencil_961__m_1128_stencil_960_1588_pack, res_update63_stencil_961__m_1128_stencil_960_1588);
auto res_update63_stencil_961_0130_stencil_960_1586 = add(stencil_8_lane_1_pack, res_update63_stencil_961__m_1128_stencil_960_1588_pack);

	  hw_uint<32 > stencil_8_lane_2_pack;
  set_at<0, 32, 32>(stencil_8_lane_2_pack, stencil_8_lane_2);
  hw_uint<32 > res_update63_stencil_961_0130_stencil_960_1586_pack;
  set_at<0, 32, 32>(res_update63_stencil_961_0130_stencil_960_1586_pack, res_update63_stencil_961_0130_stencil_960_1586);
auto res_update63_stencil_961_1132_stencil_960_1584 = add(stencil_8_lane_2_pack, res_update63_stencil_961_0130_stencil_960_1586_pack);

	  hw_uint<32 > stencil_8_lane_3_pack;
  set_at<0, 32, 32>(stencil_8_lane_3_pack, stencil_8_lane_3);
  hw_uint<32 > res_update63_stencil_961_1132_stencil_960_1584_pack;
  set_at<0, 32, 32>(res_update63_stencil_961_1132_stencil_960_1584_pack, res_update63_stencil_961_1132_stencil_960_1584);
auto res_update63_stencil_961__m_1128_stencil_960_0582 = add(stencil_8_lane_3_pack, res_update63_stencil_961_1132_stencil_960_1584_pack);

	  hw_uint<32 > stencil_8_lane_4_pack;
  set_at<0, 32, 32>(stencil_8_lane_4_pack, stencil_8_lane_4);
  hw_uint<32 > res_update63_stencil_961__m_1128_stencil_960_0582_pack;
  set_at<0, 32, 32>(res_update63_stencil_961__m_1128_stencil_960_0582_pack, res_update63_stencil_961__m_1128_stencil_960_0582);
auto res_update63_stencil_961_0130_stencil_960_0580 = add(stencil_8_lane_4_pack, res_update63_stencil_961__m_1128_stencil_960_0582_pack);

	  hw_uint<32 > stencil_8_lane_5_pack;
  set_at<0, 32, 32>(stencil_8_lane_5_pack, stencil_8_lane_5);
  hw_uint<32 > res_update63_stencil_961_0130_stencil_960_0580_pack;
  set_at<0, 32, 32>(res_update63_stencil_961_0130_stencil_960_0580_pack, res_update63_stencil_961_0130_stencil_960_0580);
auto res_update63_stencil_961_1132_stencil_960_0578 = add(stencil_8_lane_5_pack, res_update63_stencil_961_0130_stencil_960_0580_pack);

	  hw_uint<32 > stencil_8_lane_6_pack;
  set_at<0, 32, 32>(stencil_8_lane_6_pack, stencil_8_lane_6);
  hw_uint<32 > res_update63_stencil_961_1132_stencil_960_0578_pack;
  set_at<0, 32, 32>(res_update63_stencil_961_1132_stencil_960_0578_pack, res_update63_stencil_961_1132_stencil_960_0578);
auto res_update63_stencil_961__m_1128_stencil_960__m_1576 = add(stencil_8_lane_6_pack, res_update63_stencil_961_1132_stencil_960_0578_pack);

	  hw_uint<32 > stencil_8_lane_7_pack;
  set_at<0, 32, 32>(stencil_8_lane_7_pack, stencil_8_lane_7);
  hw_uint<32 > res_update63_stencil_961__m_1128_stencil_960__m_1576_pack;
  set_at<0, 32, 32>(res_update63_stencil_961__m_1128_stencil_960__m_1576_pack, res_update63_stencil_961__m_1128_stencil_960__m_1576);
auto res_update63_stencil_961_0130_stencil_960__m_1574 = add(stencil_8_lane_7_pack, res_update63_stencil_961__m_1128_stencil_960__m_1576_pack);

	  hw_uint<32 > stencil_8_lane_8_pack;
  set_at<0, 32, 32>(stencil_8_lane_8_pack, stencil_8_lane_8);
  hw_uint<32 > res_update63_stencil_961_0130_stencil_960__m_1574_pack;
  set_at<0, 32, 32>(res_update63_stencil_961_0130_stencil_960__m_1574_pack, res_update63_stencil_961_0130_stencil_960__m_1574);
auto res_update63_stencil_961_1132_stencil_960__m_1572 = add(stencil_8_lane_8_pack, res_update63_stencil_961_0130_stencil_960__m_1574_pack);
  hw_uint<32 > return_value636;
  set_at<0, 32, 32>(return_value636, res_update63_stencil_961_1132_stencil_960__m_1572);
  return return_value636;

}

hw_uint<32> stencil_1065_cu638(hw_uint<32*9>& stencil_9) {
  hw_uint<32> stencil_9_lane_0 = stencil_9.extract<0, 31>();
  hw_uint<32> stencil_9_lane_1 = stencil_9.extract<32, 63>();
  hw_uint<32> stencil_9_lane_2 = stencil_9.extract<64, 95>();
  hw_uint<32> stencil_9_lane_3 = stencil_9.extract<96, 127>();
  hw_uint<32> stencil_9_lane_4 = stencil_9.extract<128, 159>();
  hw_uint<32> stencil_9_lane_5 = stencil_9.extract<160, 191>();
  hw_uint<32> stencil_9_lane_6 = stencil_9.extract<192, 223>();
  hw_uint<32> stencil_9_lane_7 = stencil_9.extract<224, 255>();
  hw_uint<32> stencil_9_lane_8 = stencil_9.extract<256, 287>();

	
auto res_init68 = set_zero_32();

	  hw_uint<32 > res_init68_pack;
  set_at<0, 32, 32>(res_init68_pack, res_init68);
  hw_uint<32 > stencil_9_lane_0_pack;
  set_at<0, 32, 32>(stencil_9_lane_0_pack, stencil_9_lane_0);
auto res_update69_stencil_1067__m_1146_stencil_1066_1570 = add(res_init68_pack, stencil_9_lane_0_pack);

	  hw_uint<32 > res_update69_stencil_1067__m_1146_stencil_1066_1570_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067__m_1146_stencil_1066_1570_pack, res_update69_stencil_1067__m_1146_stencil_1066_1570);
  hw_uint<32 > stencil_9_lane_1_pack;
  set_at<0, 32, 32>(stencil_9_lane_1_pack, stencil_9_lane_1);
auto res_update69_stencil_1067_0148_stencil_1066_1568 = add(res_update69_stencil_1067__m_1146_stencil_1066_1570_pack, stencil_9_lane_1_pack);

	  hw_uint<32 > res_update69_stencil_1067_0148_stencil_1066_1568_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067_0148_stencil_1066_1568_pack, res_update69_stencil_1067_0148_stencil_1066_1568);
  hw_uint<32 > stencil_9_lane_2_pack;
  set_at<0, 32, 32>(stencil_9_lane_2_pack, stencil_9_lane_2);
auto res_update69_stencil_1067_1150_stencil_1066_1566 = add(res_update69_stencil_1067_0148_stencil_1066_1568_pack, stencil_9_lane_2_pack);

	  hw_uint<32 > res_update69_stencil_1067_1150_stencil_1066_1566_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067_1150_stencil_1066_1566_pack, res_update69_stencil_1067_1150_stencil_1066_1566);
  hw_uint<32 > stencil_9_lane_3_pack;
  set_at<0, 32, 32>(stencil_9_lane_3_pack, stencil_9_lane_3);
auto res_update69_stencil_1067__m_1146_stencil_1066_0564 = add(res_update69_stencil_1067_1150_stencil_1066_1566_pack, stencil_9_lane_3_pack);

	  hw_uint<32 > res_update69_stencil_1067__m_1146_stencil_1066_0564_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067__m_1146_stencil_1066_0564_pack, res_update69_stencil_1067__m_1146_stencil_1066_0564);
  hw_uint<32 > stencil_9_lane_4_pack;
  set_at<0, 32, 32>(stencil_9_lane_4_pack, stencil_9_lane_4);
auto res_update69_stencil_1067_0148_stencil_1066_0562 = add(res_update69_stencil_1067__m_1146_stencil_1066_0564_pack, stencil_9_lane_4_pack);

	  hw_uint<32 > res_update69_stencil_1067_0148_stencil_1066_0562_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067_0148_stencil_1066_0562_pack, res_update69_stencil_1067_0148_stencil_1066_0562);
  hw_uint<32 > stencil_9_lane_5_pack;
  set_at<0, 32, 32>(stencil_9_lane_5_pack, stencil_9_lane_5);
auto res_update69_stencil_1067_1150_stencil_1066_0560 = add(res_update69_stencil_1067_0148_stencil_1066_0562_pack, stencil_9_lane_5_pack);

	  hw_uint<32 > res_update69_stencil_1067_1150_stencil_1066_0560_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067_1150_stencil_1066_0560_pack, res_update69_stencil_1067_1150_stencil_1066_0560);
  hw_uint<32 > stencil_9_lane_6_pack;
  set_at<0, 32, 32>(stencil_9_lane_6_pack, stencil_9_lane_6);
auto res_update69_stencil_1067__m_1146_stencil_1066__m_1558 = add(res_update69_stencil_1067_1150_stencil_1066_0560_pack, stencil_9_lane_6_pack);

	  hw_uint<32 > res_update69_stencil_1067__m_1146_stencil_1066__m_1558_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067__m_1146_stencil_1066__m_1558_pack, res_update69_stencil_1067__m_1146_stencil_1066__m_1558);
  hw_uint<32 > stencil_9_lane_7_pack;
  set_at<0, 32, 32>(stencil_9_lane_7_pack, stencil_9_lane_7);
auto res_update69_stencil_1067_0148_stencil_1066__m_1556 = add(res_update69_stencil_1067__m_1146_stencil_1066__m_1558_pack, stencil_9_lane_7_pack);

	  hw_uint<32 > res_update69_stencil_1067_0148_stencil_1066__m_1556_pack;
  set_at<0, 32, 32>(res_update69_stencil_1067_0148_stencil_1066__m_1556_pack, res_update69_stencil_1067_0148_stencil_1066__m_1556);
  hw_uint<32 > stencil_9_lane_8_pack;
  set_at<0, 32, 32>(stencil_9_lane_8_pack, stencil_9_lane_8);
auto res_update69_stencil_1067_1150_stencil_1066__m_1554 = add(res_update69_stencil_1067_0148_stencil_1066__m_1556_pack, stencil_9_lane_8_pack);
  hw_uint<32 > return_value639;
  set_at<0, 32, 32>(return_value639, res_update69_stencil_1067_1150_stencil_1066__m_1554);
  return return_value639;

}

hw_uint<32> stencil_1171_cu641(hw_uint<32*9>& stencil_10) {
  hw_uint<32> stencil_10_lane_0 = stencil_10.extract<0, 31>();
  hw_uint<32> stencil_10_lane_1 = stencil_10.extract<32, 63>();
  hw_uint<32> stencil_10_lane_2 = stencil_10.extract<64, 95>();
  hw_uint<32> stencil_10_lane_3 = stencil_10.extract<96, 127>();
  hw_uint<32> stencil_10_lane_4 = stencil_10.extract<128, 159>();
  hw_uint<32> stencil_10_lane_5 = stencil_10.extract<160, 191>();
  hw_uint<32> stencil_10_lane_6 = stencil_10.extract<192, 223>();
  hw_uint<32> stencil_10_lane_7 = stencil_10.extract<224, 255>();
  hw_uint<32> stencil_10_lane_8 = stencil_10.extract<256, 287>();

	
auto res_init74 = set_zero_32();

	  hw_uint<32 > stencil_10_lane_0_pack;
  set_at<0, 32, 32>(stencil_10_lane_0_pack, stencil_10_lane_0);
  hw_uint<32 > res_init74_pack;
  set_at<0, 32, 32>(res_init74_pack, res_init74);
auto res_update75_stencil_1173__m_1170_stencil_1172_1498 = add(stencil_10_lane_0_pack, res_init74_pack);

	  hw_uint<32 > stencil_10_lane_1_pack;
  set_at<0, 32, 32>(stencil_10_lane_1_pack, stencil_10_lane_1);
  hw_uint<32 > res_update75_stencil_1173__m_1170_stencil_1172_1498_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173__m_1170_stencil_1172_1498_pack, res_update75_stencil_1173__m_1170_stencil_1172_1498);
auto res_update75_stencil_1173_0172_stencil_1172_1496 = add(stencil_10_lane_1_pack, res_update75_stencil_1173__m_1170_stencil_1172_1498_pack);

	  hw_uint<32 > stencil_10_lane_2_pack;
  set_at<0, 32, 32>(stencil_10_lane_2_pack, stencil_10_lane_2);
  hw_uint<32 > res_update75_stencil_1173_0172_stencil_1172_1496_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173_0172_stencil_1172_1496_pack, res_update75_stencil_1173_0172_stencil_1172_1496);
auto res_update75_stencil_1173_1174_stencil_1172_1494 = add(stencil_10_lane_2_pack, res_update75_stencil_1173_0172_stencil_1172_1496_pack);

	  hw_uint<32 > stencil_10_lane_3_pack;
  set_at<0, 32, 32>(stencil_10_lane_3_pack, stencil_10_lane_3);
  hw_uint<32 > res_update75_stencil_1173_1174_stencil_1172_1494_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173_1174_stencil_1172_1494_pack, res_update75_stencil_1173_1174_stencil_1172_1494);
auto res_update75_stencil_1173__m_1170_stencil_1172_0492 = add(stencil_10_lane_3_pack, res_update75_stencil_1173_1174_stencil_1172_1494_pack);

	  hw_uint<32 > stencil_10_lane_4_pack;
  set_at<0, 32, 32>(stencil_10_lane_4_pack, stencil_10_lane_4);
  hw_uint<32 > res_update75_stencil_1173__m_1170_stencil_1172_0492_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173__m_1170_stencil_1172_0492_pack, res_update75_stencil_1173__m_1170_stencil_1172_0492);
auto res_update75_stencil_1173_0172_stencil_1172_0490 = add(stencil_10_lane_4_pack, res_update75_stencil_1173__m_1170_stencil_1172_0492_pack);

	  hw_uint<32 > stencil_10_lane_5_pack;
  set_at<0, 32, 32>(stencil_10_lane_5_pack, stencil_10_lane_5);
  hw_uint<32 > res_update75_stencil_1173_0172_stencil_1172_0490_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173_0172_stencil_1172_0490_pack, res_update75_stencil_1173_0172_stencil_1172_0490);
auto res_update75_stencil_1173_1174_stencil_1172_0488 = add(stencil_10_lane_5_pack, res_update75_stencil_1173_0172_stencil_1172_0490_pack);

	  hw_uint<32 > stencil_10_lane_6_pack;
  set_at<0, 32, 32>(stencil_10_lane_6_pack, stencil_10_lane_6);
  hw_uint<32 > res_update75_stencil_1173_1174_stencil_1172_0488_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173_1174_stencil_1172_0488_pack, res_update75_stencil_1173_1174_stencil_1172_0488);
auto res_update75_stencil_1173__m_1170_stencil_1172__m_1486 = add(stencil_10_lane_6_pack, res_update75_stencil_1173_1174_stencil_1172_0488_pack);

	  hw_uint<32 > stencil_10_lane_7_pack;
  set_at<0, 32, 32>(stencil_10_lane_7_pack, stencil_10_lane_7);
  hw_uint<32 > res_update75_stencil_1173__m_1170_stencil_1172__m_1486_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173__m_1170_stencil_1172__m_1486_pack, res_update75_stencil_1173__m_1170_stencil_1172__m_1486);
auto res_update75_stencil_1173_0172_stencil_1172__m_1484 = add(stencil_10_lane_7_pack, res_update75_stencil_1173__m_1170_stencil_1172__m_1486_pack);

	  hw_uint<32 > stencil_10_lane_8_pack;
  set_at<0, 32, 32>(stencil_10_lane_8_pack, stencil_10_lane_8);
  hw_uint<32 > res_update75_stencil_1173_0172_stencil_1172__m_1484_pack;
  set_at<0, 32, 32>(res_update75_stencil_1173_0172_stencil_1172__m_1484_pack, res_update75_stencil_1173_0172_stencil_1172__m_1484);
auto res_update75_stencil_1173_1174_stencil_1172__m_1482 = add(stencil_10_lane_8_pack, res_update75_stencil_1173_0172_stencil_1172__m_1484_pack);
  hw_uint<32 > return_value642;
  set_at<0, 32, 32>(return_value642, res_update75_stencil_1173_1174_stencil_1172__m_1482);
  return return_value642;

}

hw_uint<32> stencil_1277_cu644(hw_uint<32*9>& stencil_11) {
  hw_uint<32> stencil_11_lane_0 = stencil_11.extract<0, 31>();
  hw_uint<32> stencil_11_lane_1 = stencil_11.extract<32, 63>();
  hw_uint<32> stencil_11_lane_2 = stencil_11.extract<64, 95>();
  hw_uint<32> stencil_11_lane_3 = stencil_11.extract<96, 127>();
  hw_uint<32> stencil_11_lane_4 = stencil_11.extract<128, 159>();
  hw_uint<32> stencil_11_lane_5 = stencil_11.extract<160, 191>();
  hw_uint<32> stencil_11_lane_6 = stencil_11.extract<192, 223>();
  hw_uint<32> stencil_11_lane_7 = stencil_11.extract<224, 255>();
  hw_uint<32> stencil_11_lane_8 = stencil_11.extract<256, 287>();

	
auto res_init80 = set_zero_32();

	  hw_uint<32 > stencil_11_lane_0_pack;
  set_at<0, 32, 32>(stencil_11_lane_0_pack, stencil_11_lane_0);
  hw_uint<32 > res_init80_pack;
  set_at<0, 32, 32>(res_init80_pack, res_init80);
auto res_update81_stencil_1279__m_1182_stencil_1278_1462 = add(stencil_11_lane_0_pack, res_init80_pack);

	  hw_uint<32 > stencil_11_lane_1_pack;
  set_at<0, 32, 32>(stencil_11_lane_1_pack, stencil_11_lane_1);
  hw_uint<32 > res_update81_stencil_1279__m_1182_stencil_1278_1462_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279__m_1182_stencil_1278_1462_pack, res_update81_stencil_1279__m_1182_stencil_1278_1462);
auto res_update81_stencil_1279_0184_stencil_1278_1460 = add(stencil_11_lane_1_pack, res_update81_stencil_1279__m_1182_stencil_1278_1462_pack);

	  hw_uint<32 > stencil_11_lane_2_pack;
  set_at<0, 32, 32>(stencil_11_lane_2_pack, stencil_11_lane_2);
  hw_uint<32 > res_update81_stencil_1279_0184_stencil_1278_1460_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279_0184_stencil_1278_1460_pack, res_update81_stencil_1279_0184_stencil_1278_1460);
auto res_update81_stencil_1279_1186_stencil_1278_1458 = add(stencil_11_lane_2_pack, res_update81_stencil_1279_0184_stencil_1278_1460_pack);

	  hw_uint<32 > stencil_11_lane_3_pack;
  set_at<0, 32, 32>(stencil_11_lane_3_pack, stencil_11_lane_3);
  hw_uint<32 > res_update81_stencil_1279_1186_stencil_1278_1458_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279_1186_stencil_1278_1458_pack, res_update81_stencil_1279_1186_stencil_1278_1458);
auto res_update81_stencil_1279__m_1182_stencil_1278_0456 = add(stencil_11_lane_3_pack, res_update81_stencil_1279_1186_stencil_1278_1458_pack);

	  hw_uint<32 > stencil_11_lane_4_pack;
  set_at<0, 32, 32>(stencil_11_lane_4_pack, stencil_11_lane_4);
  hw_uint<32 > res_update81_stencil_1279__m_1182_stencil_1278_0456_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279__m_1182_stencil_1278_0456_pack, res_update81_stencil_1279__m_1182_stencil_1278_0456);
auto res_update81_stencil_1279_0184_stencil_1278_0454 = add(stencil_11_lane_4_pack, res_update81_stencil_1279__m_1182_stencil_1278_0456_pack);

	  hw_uint<32 > stencil_11_lane_5_pack;
  set_at<0, 32, 32>(stencil_11_lane_5_pack, stencil_11_lane_5);
  hw_uint<32 > res_update81_stencil_1279_0184_stencil_1278_0454_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279_0184_stencil_1278_0454_pack, res_update81_stencil_1279_0184_stencil_1278_0454);
auto res_update81_stencil_1279_1186_stencil_1278_0452 = add(stencil_11_lane_5_pack, res_update81_stencil_1279_0184_stencil_1278_0454_pack);

	  hw_uint<32 > stencil_11_lane_6_pack;
  set_at<0, 32, 32>(stencil_11_lane_6_pack, stencil_11_lane_6);
  hw_uint<32 > res_update81_stencil_1279_1186_stencil_1278_0452_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279_1186_stencil_1278_0452_pack, res_update81_stencil_1279_1186_stencil_1278_0452);
auto res_update81_stencil_1279__m_1182_stencil_1278__m_1450 = add(stencil_11_lane_6_pack, res_update81_stencil_1279_1186_stencil_1278_0452_pack);

	  hw_uint<32 > stencil_11_lane_7_pack;
  set_at<0, 32, 32>(stencil_11_lane_7_pack, stencil_11_lane_7);
  hw_uint<32 > res_update81_stencil_1279__m_1182_stencil_1278__m_1450_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279__m_1182_stencil_1278__m_1450_pack, res_update81_stencil_1279__m_1182_stencil_1278__m_1450);
auto res_update81_stencil_1279_0184_stencil_1278__m_1448 = add(stencil_11_lane_7_pack, res_update81_stencil_1279__m_1182_stencil_1278__m_1450_pack);

	  hw_uint<32 > stencil_11_lane_8_pack;
  set_at<0, 32, 32>(stencil_11_lane_8_pack, stencil_11_lane_8);
  hw_uint<32 > res_update81_stencil_1279_0184_stencil_1278__m_1448_pack;
  set_at<0, 32, 32>(res_update81_stencil_1279_0184_stencil_1278__m_1448_pack, res_update81_stencil_1279_0184_stencil_1278__m_1448);
auto res_update81_stencil_1279_1186_stencil_1278__m_1446 = add(stencil_11_lane_8_pack, res_update81_stencil_1279_0184_stencil_1278__m_1448_pack);
  hw_uint<32 > return_value645;
  set_at<0, 32, 32>(return_value645, res_update81_stencil_1279_1186_stencil_1278__m_1446);
  return return_value645;

}

hw_uint<32> stencil_1383_cu647(hw_uint<32*9>& stencil_12) {
  hw_uint<32> stencil_12_lane_0 = stencil_12.extract<0, 31>();
  hw_uint<32> stencil_12_lane_1 = stencil_12.extract<32, 63>();
  hw_uint<32> stencil_12_lane_2 = stencil_12.extract<64, 95>();
  hw_uint<32> stencil_12_lane_3 = stencil_12.extract<96, 127>();
  hw_uint<32> stencil_12_lane_4 = stencil_12.extract<128, 159>();
  hw_uint<32> stencil_12_lane_5 = stencil_12.extract<160, 191>();
  hw_uint<32> stencil_12_lane_6 = stencil_12.extract<192, 223>();
  hw_uint<32> stencil_12_lane_7 = stencil_12.extract<224, 255>();
  hw_uint<32> stencil_12_lane_8 = stencil_12.extract<256, 287>();

	
auto res_init86 = set_zero_32();

	  hw_uint<32 > stencil_12_lane_0_pack;
  set_at<0, 32, 32>(stencil_12_lane_0_pack, stencil_12_lane_0);
  hw_uint<32 > res_init86_pack;
  set_at<0, 32, 32>(res_init86_pack, res_init86);
auto res_update87_stencil_1385__m_1194_stencil_1384_1426 = add(stencil_12_lane_0_pack, res_init86_pack);

	  hw_uint<32 > stencil_12_lane_1_pack;
  set_at<0, 32, 32>(stencil_12_lane_1_pack, stencil_12_lane_1);
  hw_uint<32 > res_update87_stencil_1385__m_1194_stencil_1384_1426_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385__m_1194_stencil_1384_1426_pack, res_update87_stencil_1385__m_1194_stencil_1384_1426);
auto res_update87_stencil_1385_0196_stencil_1384_1424 = add(stencil_12_lane_1_pack, res_update87_stencil_1385__m_1194_stencil_1384_1426_pack);

	  hw_uint<32 > stencil_12_lane_2_pack;
  set_at<0, 32, 32>(stencil_12_lane_2_pack, stencil_12_lane_2);
  hw_uint<32 > res_update87_stencil_1385_0196_stencil_1384_1424_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385_0196_stencil_1384_1424_pack, res_update87_stencil_1385_0196_stencil_1384_1424);
auto res_update87_stencil_1385_1198_stencil_1384_1422 = add(stencil_12_lane_2_pack, res_update87_stencil_1385_0196_stencil_1384_1424_pack);

	  hw_uint<32 > stencil_12_lane_3_pack;
  set_at<0, 32, 32>(stencil_12_lane_3_pack, stencil_12_lane_3);
  hw_uint<32 > res_update87_stencil_1385_1198_stencil_1384_1422_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385_1198_stencil_1384_1422_pack, res_update87_stencil_1385_1198_stencil_1384_1422);
auto res_update87_stencil_1385__m_1194_stencil_1384_0420 = add(stencil_12_lane_3_pack, res_update87_stencil_1385_1198_stencil_1384_1422_pack);

	  hw_uint<32 > stencil_12_lane_4_pack;
  set_at<0, 32, 32>(stencil_12_lane_4_pack, stencil_12_lane_4);
  hw_uint<32 > res_update87_stencil_1385__m_1194_stencil_1384_0420_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385__m_1194_stencil_1384_0420_pack, res_update87_stencil_1385__m_1194_stencil_1384_0420);
auto res_update87_stencil_1385_0196_stencil_1384_0418 = add(stencil_12_lane_4_pack, res_update87_stencil_1385__m_1194_stencil_1384_0420_pack);

	  hw_uint<32 > stencil_12_lane_5_pack;
  set_at<0, 32, 32>(stencil_12_lane_5_pack, stencil_12_lane_5);
  hw_uint<32 > res_update87_stencil_1385_0196_stencil_1384_0418_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385_0196_stencil_1384_0418_pack, res_update87_stencil_1385_0196_stencil_1384_0418);
auto res_update87_stencil_1385_1198_stencil_1384_0416 = add(stencil_12_lane_5_pack, res_update87_stencil_1385_0196_stencil_1384_0418_pack);

	  hw_uint<32 > stencil_12_lane_6_pack;
  set_at<0, 32, 32>(stencil_12_lane_6_pack, stencil_12_lane_6);
  hw_uint<32 > res_update87_stencil_1385_1198_stencil_1384_0416_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385_1198_stencil_1384_0416_pack, res_update87_stencil_1385_1198_stencil_1384_0416);
auto res_update87_stencil_1385__m_1194_stencil_1384__m_1414 = add(stencil_12_lane_6_pack, res_update87_stencil_1385_1198_stencil_1384_0416_pack);

	  hw_uint<32 > stencil_12_lane_7_pack;
  set_at<0, 32, 32>(stencil_12_lane_7_pack, stencil_12_lane_7);
  hw_uint<32 > res_update87_stencil_1385__m_1194_stencil_1384__m_1414_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385__m_1194_stencil_1384__m_1414_pack, res_update87_stencil_1385__m_1194_stencil_1384__m_1414);
auto res_update87_stencil_1385_0196_stencil_1384__m_1412 = add(stencil_12_lane_7_pack, res_update87_stencil_1385__m_1194_stencil_1384__m_1414_pack);

	  hw_uint<32 > stencil_12_lane_8_pack;
  set_at<0, 32, 32>(stencil_12_lane_8_pack, stencil_12_lane_8);
  hw_uint<32 > res_update87_stencil_1385_0196_stencil_1384__m_1412_pack;
  set_at<0, 32, 32>(res_update87_stencil_1385_0196_stencil_1384__m_1412_pack, res_update87_stencil_1385_0196_stencil_1384__m_1412);
auto res_update87_stencil_1385_1198_stencil_1384__m_1410 = add(stencil_12_lane_8_pack, res_update87_stencil_1385_0196_stencil_1384__m_1412_pack);
  hw_uint<32 > return_value648;
  set_at<0, 32, 32>(return_value648, res_update87_stencil_1385_1198_stencil_1384__m_1410);
  return return_value648;

}

hw_uint<32> stencil_1489_cu650(hw_uint<32*9>& stencil_13) {
  hw_uint<32> stencil_13_lane_0 = stencil_13.extract<0, 31>();
  hw_uint<32> stencil_13_lane_1 = stencil_13.extract<32, 63>();
  hw_uint<32> stencil_13_lane_2 = stencil_13.extract<64, 95>();
  hw_uint<32> stencil_13_lane_3 = stencil_13.extract<96, 127>();
  hw_uint<32> stencil_13_lane_4 = stencil_13.extract<128, 159>();
  hw_uint<32> stencil_13_lane_5 = stencil_13.extract<160, 191>();
  hw_uint<32> stencil_13_lane_6 = stencil_13.extract<192, 223>();
  hw_uint<32> stencil_13_lane_7 = stencil_13.extract<224, 255>();
  hw_uint<32> stencil_13_lane_8 = stencil_13.extract<256, 287>();

	
auto res_init92 = set_zero_32();

	  hw_uint<32 > stencil_13_lane_0_pack;
  set_at<0, 32, 32>(stencil_13_lane_0_pack, stencil_13_lane_0);
  hw_uint<32 > res_init92_pack;
  set_at<0, 32, 32>(res_init92_pack, res_init92);
auto res_update93_stencil_1491__m_1206_stencil_1490_1390 = add(stencil_13_lane_0_pack, res_init92_pack);

	  hw_uint<32 > stencil_13_lane_1_pack;
  set_at<0, 32, 32>(stencil_13_lane_1_pack, stencil_13_lane_1);
  hw_uint<32 > res_update93_stencil_1491__m_1206_stencil_1490_1390_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491__m_1206_stencil_1490_1390_pack, res_update93_stencil_1491__m_1206_stencil_1490_1390);
auto res_update93_stencil_1491_0208_stencil_1490_1388 = add(stencil_13_lane_1_pack, res_update93_stencil_1491__m_1206_stencil_1490_1390_pack);

	  hw_uint<32 > stencil_13_lane_2_pack;
  set_at<0, 32, 32>(stencil_13_lane_2_pack, stencil_13_lane_2);
  hw_uint<32 > res_update93_stencil_1491_0208_stencil_1490_1388_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491_0208_stencil_1490_1388_pack, res_update93_stencil_1491_0208_stencil_1490_1388);
auto res_update93_stencil_1491_1210_stencil_1490_1386 = add(stencil_13_lane_2_pack, res_update93_stencil_1491_0208_stencil_1490_1388_pack);

	  hw_uint<32 > stencil_13_lane_3_pack;
  set_at<0, 32, 32>(stencil_13_lane_3_pack, stencil_13_lane_3);
  hw_uint<32 > res_update93_stencil_1491_1210_stencil_1490_1386_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491_1210_stencil_1490_1386_pack, res_update93_stencil_1491_1210_stencil_1490_1386);
auto res_update93_stencil_1491__m_1206_stencil_1490_0384 = add(stencil_13_lane_3_pack, res_update93_stencil_1491_1210_stencil_1490_1386_pack);

	  hw_uint<32 > stencil_13_lane_4_pack;
  set_at<0, 32, 32>(stencil_13_lane_4_pack, stencil_13_lane_4);
  hw_uint<32 > res_update93_stencil_1491__m_1206_stencil_1490_0384_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491__m_1206_stencil_1490_0384_pack, res_update93_stencil_1491__m_1206_stencil_1490_0384);
auto res_update93_stencil_1491_0208_stencil_1490_0382 = add(stencil_13_lane_4_pack, res_update93_stencil_1491__m_1206_stencil_1490_0384_pack);

	  hw_uint<32 > stencil_13_lane_5_pack;
  set_at<0, 32, 32>(stencil_13_lane_5_pack, stencil_13_lane_5);
  hw_uint<32 > res_update93_stencil_1491_0208_stencil_1490_0382_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491_0208_stencil_1490_0382_pack, res_update93_stencil_1491_0208_stencil_1490_0382);
auto res_update93_stencil_1491_1210_stencil_1490_0380 = add(stencil_13_lane_5_pack, res_update93_stencil_1491_0208_stencil_1490_0382_pack);

	  hw_uint<32 > stencil_13_lane_6_pack;
  set_at<0, 32, 32>(stencil_13_lane_6_pack, stencil_13_lane_6);
  hw_uint<32 > res_update93_stencil_1491_1210_stencil_1490_0380_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491_1210_stencil_1490_0380_pack, res_update93_stencil_1491_1210_stencil_1490_0380);
auto res_update93_stencil_1491__m_1206_stencil_1490__m_1378 = add(stencil_13_lane_6_pack, res_update93_stencil_1491_1210_stencil_1490_0380_pack);

	  hw_uint<32 > stencil_13_lane_7_pack;
  set_at<0, 32, 32>(stencil_13_lane_7_pack, stencil_13_lane_7);
  hw_uint<32 > res_update93_stencil_1491__m_1206_stencil_1490__m_1378_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491__m_1206_stencil_1490__m_1378_pack, res_update93_stencil_1491__m_1206_stencil_1490__m_1378);
auto res_update93_stencil_1491_0208_stencil_1490__m_1376 = add(stencil_13_lane_7_pack, res_update93_stencil_1491__m_1206_stencil_1490__m_1378_pack);

	  hw_uint<32 > stencil_13_lane_8_pack;
  set_at<0, 32, 32>(stencil_13_lane_8_pack, stencil_13_lane_8);
  hw_uint<32 > res_update93_stencil_1491_0208_stencil_1490__m_1376_pack;
  set_at<0, 32, 32>(res_update93_stencil_1491_0208_stencil_1490__m_1376_pack, res_update93_stencil_1491_0208_stencil_1490__m_1376);
auto res_update93_stencil_1491_1210_stencil_1490__m_1374 = add(stencil_13_lane_8_pack, res_update93_stencil_1491_0208_stencil_1490__m_1376_pack);
  hw_uint<32 > return_value651;
  set_at<0, 32, 32>(return_value651, res_update93_stencil_1491_1210_stencil_1490__m_1374);
  return return_value651;

}

hw_uint<32> stencil_1595_cu653(hw_uint<32*9>& stencil_14) {
  hw_uint<32> stencil_14_lane_0 = stencil_14.extract<0, 31>();
  hw_uint<32> stencil_14_lane_1 = stencil_14.extract<32, 63>();
  hw_uint<32> stencil_14_lane_2 = stencil_14.extract<64, 95>();
  hw_uint<32> stencil_14_lane_3 = stencil_14.extract<96, 127>();
  hw_uint<32> stencil_14_lane_4 = stencil_14.extract<128, 159>();
  hw_uint<32> stencil_14_lane_5 = stencil_14.extract<160, 191>();
  hw_uint<32> stencil_14_lane_6 = stencil_14.extract<192, 223>();
  hw_uint<32> stencil_14_lane_7 = stencil_14.extract<224, 255>();
  hw_uint<32> stencil_14_lane_8 = stencil_14.extract<256, 287>();

	
auto res_init98 = set_zero_32();

	  hw_uint<32 > stencil_14_lane_0_pack;
  set_at<0, 32, 32>(stencil_14_lane_0_pack, stencil_14_lane_0);
  hw_uint<32 > res_init98_pack;
  set_at<0, 32, 32>(res_init98_pack, res_init98);
auto res_update99_stencil_1597__m_1218_stencil_1596_1354 = add(stencil_14_lane_0_pack, res_init98_pack);

	  hw_uint<32 > stencil_14_lane_1_pack;
  set_at<0, 32, 32>(stencil_14_lane_1_pack, stencil_14_lane_1);
  hw_uint<32 > res_update99_stencil_1597__m_1218_stencil_1596_1354_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597__m_1218_stencil_1596_1354_pack, res_update99_stencil_1597__m_1218_stencil_1596_1354);
auto res_update99_stencil_1597_0220_stencil_1596_1352 = add(stencil_14_lane_1_pack, res_update99_stencil_1597__m_1218_stencil_1596_1354_pack);

	  hw_uint<32 > stencil_14_lane_2_pack;
  set_at<0, 32, 32>(stencil_14_lane_2_pack, stencil_14_lane_2);
  hw_uint<32 > res_update99_stencil_1597_0220_stencil_1596_1352_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597_0220_stencil_1596_1352_pack, res_update99_stencil_1597_0220_stencil_1596_1352);
auto res_update99_stencil_1597_1222_stencil_1596_1350 = add(stencil_14_lane_2_pack, res_update99_stencil_1597_0220_stencil_1596_1352_pack);

	  hw_uint<32 > stencil_14_lane_3_pack;
  set_at<0, 32, 32>(stencil_14_lane_3_pack, stencil_14_lane_3);
  hw_uint<32 > res_update99_stencil_1597_1222_stencil_1596_1350_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597_1222_stencil_1596_1350_pack, res_update99_stencil_1597_1222_stencil_1596_1350);
auto res_update99_stencil_1597__m_1218_stencil_1596_0348 = add(stencil_14_lane_3_pack, res_update99_stencil_1597_1222_stencil_1596_1350_pack);

	  hw_uint<32 > stencil_14_lane_4_pack;
  set_at<0, 32, 32>(stencil_14_lane_4_pack, stencil_14_lane_4);
  hw_uint<32 > res_update99_stencil_1597__m_1218_stencil_1596_0348_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597__m_1218_stencil_1596_0348_pack, res_update99_stencil_1597__m_1218_stencil_1596_0348);
auto res_update99_stencil_1597_0220_stencil_1596_0346 = add(stencil_14_lane_4_pack, res_update99_stencil_1597__m_1218_stencil_1596_0348_pack);

	  hw_uint<32 > stencil_14_lane_5_pack;
  set_at<0, 32, 32>(stencil_14_lane_5_pack, stencil_14_lane_5);
  hw_uint<32 > res_update99_stencil_1597_0220_stencil_1596_0346_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597_0220_stencil_1596_0346_pack, res_update99_stencil_1597_0220_stencil_1596_0346);
auto res_update99_stencil_1597_1222_stencil_1596_0344 = add(stencil_14_lane_5_pack, res_update99_stencil_1597_0220_stencil_1596_0346_pack);

	  hw_uint<32 > stencil_14_lane_6_pack;
  set_at<0, 32, 32>(stencil_14_lane_6_pack, stencil_14_lane_6);
  hw_uint<32 > res_update99_stencil_1597_1222_stencil_1596_0344_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597_1222_stencil_1596_0344_pack, res_update99_stencil_1597_1222_stencil_1596_0344);
auto res_update99_stencil_1597__m_1218_stencil_1596__m_1342 = add(stencil_14_lane_6_pack, res_update99_stencil_1597_1222_stencil_1596_0344_pack);

	  hw_uint<32 > stencil_14_lane_7_pack;
  set_at<0, 32, 32>(stencil_14_lane_7_pack, stencil_14_lane_7);
  hw_uint<32 > res_update99_stencil_1597__m_1218_stencil_1596__m_1342_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597__m_1218_stencil_1596__m_1342_pack, res_update99_stencil_1597__m_1218_stencil_1596__m_1342);
auto res_update99_stencil_1597_0220_stencil_1596__m_1340 = add(stencil_14_lane_7_pack, res_update99_stencil_1597__m_1218_stencil_1596__m_1342_pack);

	  hw_uint<32 > stencil_14_lane_8_pack;
  set_at<0, 32, 32>(stencil_14_lane_8_pack, stencil_14_lane_8);
  hw_uint<32 > res_update99_stencil_1597_0220_stencil_1596__m_1340_pack;
  set_at<0, 32, 32>(res_update99_stencil_1597_0220_stencil_1596__m_1340_pack, res_update99_stencil_1597_0220_stencil_1596__m_1340);
auto res_update99_stencil_1597_1222_stencil_1596__m_1338 = add(stencil_14_lane_8_pack, res_update99_stencil_1597_0220_stencil_1596__m_1340_pack);
  hw_uint<32 > return_value654;
  set_at<0, 32, 32>(return_value654, res_update99_stencil_1597_1222_stencil_1596__m_1338);
  return return_value654;

}

hw_uint<32> stencil_16101_cu656(hw_uint<32*9>& stencil_15) {
  hw_uint<32> stencil_15_lane_0 = stencil_15.extract<0, 31>();
  hw_uint<32> stencil_15_lane_1 = stencil_15.extract<32, 63>();
  hw_uint<32> stencil_15_lane_2 = stencil_15.extract<64, 95>();
  hw_uint<32> stencil_15_lane_3 = stencil_15.extract<96, 127>();
  hw_uint<32> stencil_15_lane_4 = stencil_15.extract<128, 159>();
  hw_uint<32> stencil_15_lane_5 = stencil_15.extract<160, 191>();
  hw_uint<32> stencil_15_lane_6 = stencil_15.extract<192, 223>();
  hw_uint<32> stencil_15_lane_7 = stencil_15.extract<224, 255>();
  hw_uint<32> stencil_15_lane_8 = stencil_15.extract<256, 287>();

	
auto res_init104 = set_zero_32();

	  hw_uint<32 > stencil_15_lane_0_pack;
  set_at<0, 32, 32>(stencil_15_lane_0_pack, stencil_15_lane_0);
  hw_uint<32 > res_init104_pack;
  set_at<0, 32, 32>(res_init104_pack, res_init104);
auto res_update105_stencil_16103__m_1230_stencil_16102_1318 = add(stencil_15_lane_0_pack, res_init104_pack);

	  hw_uint<32 > stencil_15_lane_1_pack;
  set_at<0, 32, 32>(stencil_15_lane_1_pack, stencil_15_lane_1);
  hw_uint<32 > res_update105_stencil_16103__m_1230_stencil_16102_1318_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103__m_1230_stencil_16102_1318_pack, res_update105_stencil_16103__m_1230_stencil_16102_1318);
auto res_update105_stencil_16103_0232_stencil_16102_1316 = add(stencil_15_lane_1_pack, res_update105_stencil_16103__m_1230_stencil_16102_1318_pack);

	  hw_uint<32 > stencil_15_lane_2_pack;
  set_at<0, 32, 32>(stencil_15_lane_2_pack, stencil_15_lane_2);
  hw_uint<32 > res_update105_stencil_16103_0232_stencil_16102_1316_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103_0232_stencil_16102_1316_pack, res_update105_stencil_16103_0232_stencil_16102_1316);
auto res_update105_stencil_16103_1234_stencil_16102_1314 = add(stencil_15_lane_2_pack, res_update105_stencil_16103_0232_stencil_16102_1316_pack);

	  hw_uint<32 > stencil_15_lane_3_pack;
  set_at<0, 32, 32>(stencil_15_lane_3_pack, stencil_15_lane_3);
  hw_uint<32 > res_update105_stencil_16103_1234_stencil_16102_1314_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103_1234_stencil_16102_1314_pack, res_update105_stencil_16103_1234_stencil_16102_1314);
auto res_update105_stencil_16103__m_1230_stencil_16102_0312 = add(stencil_15_lane_3_pack, res_update105_stencil_16103_1234_stencil_16102_1314_pack);

	  hw_uint<32 > stencil_15_lane_4_pack;
  set_at<0, 32, 32>(stencil_15_lane_4_pack, stencil_15_lane_4);
  hw_uint<32 > res_update105_stencil_16103__m_1230_stencil_16102_0312_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103__m_1230_stencil_16102_0312_pack, res_update105_stencil_16103__m_1230_stencil_16102_0312);
auto res_update105_stencil_16103_0232_stencil_16102_0310 = add(stencil_15_lane_4_pack, res_update105_stencil_16103__m_1230_stencil_16102_0312_pack);

	  hw_uint<32 > stencil_15_lane_5_pack;
  set_at<0, 32, 32>(stencil_15_lane_5_pack, stencil_15_lane_5);
  hw_uint<32 > res_update105_stencil_16103_0232_stencil_16102_0310_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103_0232_stencil_16102_0310_pack, res_update105_stencil_16103_0232_stencil_16102_0310);
auto res_update105_stencil_16103_1234_stencil_16102_0308 = add(stencil_15_lane_5_pack, res_update105_stencil_16103_0232_stencil_16102_0310_pack);

	  hw_uint<32 > stencil_15_lane_6_pack;
  set_at<0, 32, 32>(stencil_15_lane_6_pack, stencil_15_lane_6);
  hw_uint<32 > res_update105_stencil_16103_1234_stencil_16102_0308_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103_1234_stencil_16102_0308_pack, res_update105_stencil_16103_1234_stencil_16102_0308);
auto res_update105_stencil_16103__m_1230_stencil_16102__m_1306 = add(stencil_15_lane_6_pack, res_update105_stencil_16103_1234_stencil_16102_0308_pack);

	  hw_uint<32 > stencil_15_lane_7_pack;
  set_at<0, 32, 32>(stencil_15_lane_7_pack, stencil_15_lane_7);
  hw_uint<32 > res_update105_stencil_16103__m_1230_stencil_16102__m_1306_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103__m_1230_stencil_16102__m_1306_pack, res_update105_stencil_16103__m_1230_stencil_16102__m_1306);
auto res_update105_stencil_16103_0232_stencil_16102__m_1304 = add(stencil_15_lane_7_pack, res_update105_stencil_16103__m_1230_stencil_16102__m_1306_pack);

	  hw_uint<32 > stencil_15_lane_8_pack;
  set_at<0, 32, 32>(stencil_15_lane_8_pack, stencil_15_lane_8);
  hw_uint<32 > res_update105_stencil_16103_0232_stencil_16102__m_1304_pack;
  set_at<0, 32, 32>(res_update105_stencil_16103_0232_stencil_16102__m_1304_pack, res_update105_stencil_16103_0232_stencil_16102__m_1304);
auto res_update105_stencil_16103_1234_stencil_16102__m_1302 = add(stencil_15_lane_8_pack, res_update105_stencil_16103_0232_stencil_16102__m_1304_pack);
  hw_uint<32 > return_value657;
  set_at<0, 32, 32>(return_value657, res_update105_stencil_16103_1234_stencil_16102__m_1302);
  return return_value657;

}

hw_uint<32> stencil_17107_cu659(hw_uint<32*9>& stencil_16) {
  hw_uint<32> stencil_16_lane_0 = stencil_16.extract<0, 31>();
  hw_uint<32> stencil_16_lane_1 = stencil_16.extract<32, 63>();
  hw_uint<32> stencil_16_lane_2 = stencil_16.extract<64, 95>();
  hw_uint<32> stencil_16_lane_3 = stencil_16.extract<96, 127>();
  hw_uint<32> stencil_16_lane_4 = stencil_16.extract<128, 159>();
  hw_uint<32> stencil_16_lane_5 = stencil_16.extract<160, 191>();
  hw_uint<32> stencil_16_lane_6 = stencil_16.extract<192, 223>();
  hw_uint<32> stencil_16_lane_7 = stencil_16.extract<224, 255>();
  hw_uint<32> stencil_16_lane_8 = stencil_16.extract<256, 287>();

	
auto res_init110 = set_zero_32();

	  hw_uint<32 > stencil_16_lane_0_pack;
  set_at<0, 32, 32>(stencil_16_lane_0_pack, stencil_16_lane_0);
  hw_uint<32 > res_init110_pack;
  set_at<0, 32, 32>(res_init110_pack, res_init110);
auto res_update111_stencil_17109__m_1242_stencil_17108_1282 = add(stencil_16_lane_0_pack, res_init110_pack);

	  hw_uint<32 > stencil_16_lane_1_pack;
  set_at<0, 32, 32>(stencil_16_lane_1_pack, stencil_16_lane_1);
  hw_uint<32 > res_update111_stencil_17109__m_1242_stencil_17108_1282_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109__m_1242_stencil_17108_1282_pack, res_update111_stencil_17109__m_1242_stencil_17108_1282);
auto res_update111_stencil_17109_0244_stencil_17108_1280 = add(stencil_16_lane_1_pack, res_update111_stencil_17109__m_1242_stencil_17108_1282_pack);

	  hw_uint<32 > stencil_16_lane_2_pack;
  set_at<0, 32, 32>(stencil_16_lane_2_pack, stencil_16_lane_2);
  hw_uint<32 > res_update111_stencil_17109_0244_stencil_17108_1280_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109_0244_stencil_17108_1280_pack, res_update111_stencil_17109_0244_stencil_17108_1280);
auto res_update111_stencil_17109_1246_stencil_17108_1278 = add(stencil_16_lane_2_pack, res_update111_stencil_17109_0244_stencil_17108_1280_pack);

	  hw_uint<32 > stencil_16_lane_3_pack;
  set_at<0, 32, 32>(stencil_16_lane_3_pack, stencil_16_lane_3);
  hw_uint<32 > res_update111_stencil_17109_1246_stencil_17108_1278_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109_1246_stencil_17108_1278_pack, res_update111_stencil_17109_1246_stencil_17108_1278);
auto res_update111_stencil_17109__m_1242_stencil_17108_0276 = add(stencil_16_lane_3_pack, res_update111_stencil_17109_1246_stencil_17108_1278_pack);

	  hw_uint<32 > stencil_16_lane_4_pack;
  set_at<0, 32, 32>(stencil_16_lane_4_pack, stencil_16_lane_4);
  hw_uint<32 > res_update111_stencil_17109__m_1242_stencil_17108_0276_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109__m_1242_stencil_17108_0276_pack, res_update111_stencil_17109__m_1242_stencil_17108_0276);
auto res_update111_stencil_17109_0244_stencil_17108_0274 = add(stencil_16_lane_4_pack, res_update111_stencil_17109__m_1242_stencil_17108_0276_pack);

	  hw_uint<32 > stencil_16_lane_5_pack;
  set_at<0, 32, 32>(stencil_16_lane_5_pack, stencil_16_lane_5);
  hw_uint<32 > res_update111_stencil_17109_0244_stencil_17108_0274_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109_0244_stencil_17108_0274_pack, res_update111_stencil_17109_0244_stencil_17108_0274);
auto res_update111_stencil_17109_1246_stencil_17108_0272 = add(stencil_16_lane_5_pack, res_update111_stencil_17109_0244_stencil_17108_0274_pack);

	  hw_uint<32 > stencil_16_lane_6_pack;
  set_at<0, 32, 32>(stencil_16_lane_6_pack, stencil_16_lane_6);
  hw_uint<32 > res_update111_stencil_17109_1246_stencil_17108_0272_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109_1246_stencil_17108_0272_pack, res_update111_stencil_17109_1246_stencil_17108_0272);
auto res_update111_stencil_17109__m_1242_stencil_17108__m_1270 = add(stencil_16_lane_6_pack, res_update111_stencil_17109_1246_stencil_17108_0272_pack);

	  hw_uint<32 > stencil_16_lane_7_pack;
  set_at<0, 32, 32>(stencil_16_lane_7_pack, stencil_16_lane_7);
  hw_uint<32 > res_update111_stencil_17109__m_1242_stencil_17108__m_1270_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109__m_1242_stencil_17108__m_1270_pack, res_update111_stencil_17109__m_1242_stencil_17108__m_1270);
auto res_update111_stencil_17109_0244_stencil_17108__m_1268 = add(stencil_16_lane_7_pack, res_update111_stencil_17109__m_1242_stencil_17108__m_1270_pack);

	  hw_uint<32 > stencil_16_lane_8_pack;
  set_at<0, 32, 32>(stencil_16_lane_8_pack, stencil_16_lane_8);
  hw_uint<32 > res_update111_stencil_17109_0244_stencil_17108__m_1268_pack;
  set_at<0, 32, 32>(res_update111_stencil_17109_0244_stencil_17108__m_1268_pack, res_update111_stencil_17109_0244_stencil_17108__m_1268);
auto res_update111_stencil_17109_1246_stencil_17108__m_1266 = add(stencil_16_lane_8_pack, res_update111_stencil_17109_0244_stencil_17108__m_1268_pack);
  hw_uint<32 > return_value660;
  set_at<0, 32, 32>(return_value660, res_update111_stencil_17109_1246_stencil_17108__m_1266);
  return return_value660;

}

hw_uint<32> stencil_18113_cu662(hw_uint<32*9>& stencil_17) {
  hw_uint<32> stencil_17_lane_0 = stencil_17.extract<0, 31>();
  hw_uint<32> stencil_17_lane_1 = stencil_17.extract<32, 63>();
  hw_uint<32> stencil_17_lane_2 = stencil_17.extract<64, 95>();
  hw_uint<32> stencil_17_lane_3 = stencil_17.extract<96, 127>();
  hw_uint<32> stencil_17_lane_4 = stencil_17.extract<128, 159>();
  hw_uint<32> stencil_17_lane_5 = stencil_17.extract<160, 191>();
  hw_uint<32> stencil_17_lane_6 = stencil_17.extract<192, 223>();
  hw_uint<32> stencil_17_lane_7 = stencil_17.extract<224, 255>();
  hw_uint<32> stencil_17_lane_8 = stencil_17.extract<256, 287>();

	
auto res_init116 = set_zero_32();

	  hw_uint<32 > stencil_17_lane_0_pack;
  set_at<0, 32, 32>(stencil_17_lane_0_pack, stencil_17_lane_0);
  hw_uint<32 > res_init116_pack;
  set_at<0, 32, 32>(res_init116_pack, res_init116);
auto res_update117_stencil_18115__m_1236_stencil_18114_1606 = add(stencil_17_lane_0_pack, res_init116_pack);

	  hw_uint<32 > stencil_17_lane_1_pack;
  set_at<0, 32, 32>(stencil_17_lane_1_pack, stencil_17_lane_1);
  hw_uint<32 > res_update117_stencil_18115__m_1236_stencil_18114_1606_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115__m_1236_stencil_18114_1606_pack, res_update117_stencil_18115__m_1236_stencil_18114_1606);
auto res_update117_stencil_18115_0238_stencil_18114_1604 = add(stencil_17_lane_1_pack, res_update117_stencil_18115__m_1236_stencil_18114_1606_pack);

	  hw_uint<32 > stencil_17_lane_2_pack;
  set_at<0, 32, 32>(stencil_17_lane_2_pack, stencil_17_lane_2);
  hw_uint<32 > res_update117_stencil_18115_0238_stencil_18114_1604_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115_0238_stencil_18114_1604_pack, res_update117_stencil_18115_0238_stencil_18114_1604);
auto res_update117_stencil_18115_1240_stencil_18114_1602 = add(stencil_17_lane_2_pack, res_update117_stencil_18115_0238_stencil_18114_1604_pack);

	  hw_uint<32 > stencil_17_lane_3_pack;
  set_at<0, 32, 32>(stencil_17_lane_3_pack, stencil_17_lane_3);
  hw_uint<32 > res_update117_stencil_18115_1240_stencil_18114_1602_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115_1240_stencil_18114_1602_pack, res_update117_stencil_18115_1240_stencil_18114_1602);
auto res_update117_stencil_18115__m_1236_stencil_18114_0600 = add(stencil_17_lane_3_pack, res_update117_stencil_18115_1240_stencil_18114_1602_pack);

	  hw_uint<32 > stencil_17_lane_4_pack;
  set_at<0, 32, 32>(stencil_17_lane_4_pack, stencil_17_lane_4);
  hw_uint<32 > res_update117_stencil_18115__m_1236_stencil_18114_0600_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115__m_1236_stencil_18114_0600_pack, res_update117_stencil_18115__m_1236_stencil_18114_0600);
auto res_update117_stencil_18115_0238_stencil_18114_0598 = add(stencil_17_lane_4_pack, res_update117_stencil_18115__m_1236_stencil_18114_0600_pack);

	  hw_uint<32 > stencil_17_lane_5_pack;
  set_at<0, 32, 32>(stencil_17_lane_5_pack, stencil_17_lane_5);
  hw_uint<32 > res_update117_stencil_18115_0238_stencil_18114_0598_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115_0238_stencil_18114_0598_pack, res_update117_stencil_18115_0238_stencil_18114_0598);
auto res_update117_stencil_18115_1240_stencil_18114_0596 = add(stencil_17_lane_5_pack, res_update117_stencil_18115_0238_stencil_18114_0598_pack);

	  hw_uint<32 > stencil_17_lane_6_pack;
  set_at<0, 32, 32>(stencil_17_lane_6_pack, stencil_17_lane_6);
  hw_uint<32 > res_update117_stencil_18115_1240_stencil_18114_0596_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115_1240_stencil_18114_0596_pack, res_update117_stencil_18115_1240_stencil_18114_0596);
auto res_update117_stencil_18115__m_1236_stencil_18114__m_1594 = add(stencil_17_lane_6_pack, res_update117_stencil_18115_1240_stencil_18114_0596_pack);

	  hw_uint<32 > stencil_17_lane_7_pack;
  set_at<0, 32, 32>(stencil_17_lane_7_pack, stencil_17_lane_7);
  hw_uint<32 > res_update117_stencil_18115__m_1236_stencil_18114__m_1594_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115__m_1236_stencil_18114__m_1594_pack, res_update117_stencil_18115__m_1236_stencil_18114__m_1594);
auto res_update117_stencil_18115_0238_stencil_18114__m_1592 = add(stencil_17_lane_7_pack, res_update117_stencil_18115__m_1236_stencil_18114__m_1594_pack);

	  hw_uint<32 > stencil_17_lane_8_pack;
  set_at<0, 32, 32>(stencil_17_lane_8_pack, stencil_17_lane_8);
  hw_uint<32 > res_update117_stencil_18115_0238_stencil_18114__m_1592_pack;
  set_at<0, 32, 32>(res_update117_stencil_18115_0238_stencil_18114__m_1592_pack, res_update117_stencil_18115_0238_stencil_18114__m_1592);
auto res_update117_stencil_18115_1240_stencil_18114__m_1590 = add(stencil_17_lane_8_pack, res_update117_stencil_18115_0238_stencil_18114__m_1592_pack);
  hw_uint<32 > return_value663;
  set_at<0, 32, 32>(return_value663, res_update117_stencil_18115_1240_stencil_18114__m_1590);
  return return_value663;

}

hw_uint<32> stencil_19119_cu665(hw_uint<32*9>& stencil_18) {
  hw_uint<32> stencil_18_lane_0 = stencil_18.extract<0, 31>();
  hw_uint<32> stencil_18_lane_1 = stencil_18.extract<32, 63>();
  hw_uint<32> stencil_18_lane_2 = stencil_18.extract<64, 95>();
  hw_uint<32> stencil_18_lane_3 = stencil_18.extract<96, 127>();
  hw_uint<32> stencil_18_lane_4 = stencil_18.extract<128, 159>();
  hw_uint<32> stencil_18_lane_5 = stencil_18.extract<160, 191>();
  hw_uint<32> stencil_18_lane_6 = stencil_18.extract<192, 223>();
  hw_uint<32> stencil_18_lane_7 = stencil_18.extract<224, 255>();
  hw_uint<32> stencil_18_lane_8 = stencil_18.extract<256, 287>();

	
auto res_init122 = set_zero_32();

	  hw_uint<32 > stencil_18_lane_0_pack;
  set_at<0, 32, 32>(stencil_18_lane_0_pack, stencil_18_lane_0);
  hw_uint<32 > res_init122_pack;
  set_at<0, 32, 32>(res_init122_pack, res_init122);
auto res_update123_stencil_19121__m_1224_stencil_19120_1300 = add(stencil_18_lane_0_pack, res_init122_pack);

	  hw_uint<32 > stencil_18_lane_1_pack;
  set_at<0, 32, 32>(stencil_18_lane_1_pack, stencil_18_lane_1);
  hw_uint<32 > res_update123_stencil_19121__m_1224_stencil_19120_1300_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121__m_1224_stencil_19120_1300_pack, res_update123_stencil_19121__m_1224_stencil_19120_1300);
auto res_update123_stencil_19121_0226_stencil_19120_1298 = add(stencil_18_lane_1_pack, res_update123_stencil_19121__m_1224_stencil_19120_1300_pack);

	  hw_uint<32 > stencil_18_lane_2_pack;
  set_at<0, 32, 32>(stencil_18_lane_2_pack, stencil_18_lane_2);
  hw_uint<32 > res_update123_stencil_19121_0226_stencil_19120_1298_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121_0226_stencil_19120_1298_pack, res_update123_stencil_19121_0226_stencil_19120_1298);
auto res_update123_stencil_19121_1228_stencil_19120_1296 = add(stencil_18_lane_2_pack, res_update123_stencil_19121_0226_stencil_19120_1298_pack);

	  hw_uint<32 > stencil_18_lane_3_pack;
  set_at<0, 32, 32>(stencil_18_lane_3_pack, stencil_18_lane_3);
  hw_uint<32 > res_update123_stencil_19121_1228_stencil_19120_1296_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121_1228_stencil_19120_1296_pack, res_update123_stencil_19121_1228_stencil_19120_1296);
auto res_update123_stencil_19121__m_1224_stencil_19120_0294 = add(stencil_18_lane_3_pack, res_update123_stencil_19121_1228_stencil_19120_1296_pack);

	  hw_uint<32 > stencil_18_lane_4_pack;
  set_at<0, 32, 32>(stencil_18_lane_4_pack, stencil_18_lane_4);
  hw_uint<32 > res_update123_stencil_19121__m_1224_stencil_19120_0294_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121__m_1224_stencil_19120_0294_pack, res_update123_stencil_19121__m_1224_stencil_19120_0294);
auto res_update123_stencil_19121_0226_stencil_19120_0292 = add(stencil_18_lane_4_pack, res_update123_stencil_19121__m_1224_stencil_19120_0294_pack);

	  hw_uint<32 > stencil_18_lane_5_pack;
  set_at<0, 32, 32>(stencil_18_lane_5_pack, stencil_18_lane_5);
  hw_uint<32 > res_update123_stencil_19121_0226_stencil_19120_0292_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121_0226_stencil_19120_0292_pack, res_update123_stencil_19121_0226_stencil_19120_0292);
auto res_update123_stencil_19121_1228_stencil_19120_0290 = add(stencil_18_lane_5_pack, res_update123_stencil_19121_0226_stencil_19120_0292_pack);

	  hw_uint<32 > stencil_18_lane_6_pack;
  set_at<0, 32, 32>(stencil_18_lane_6_pack, stencil_18_lane_6);
  hw_uint<32 > res_update123_stencil_19121_1228_stencil_19120_0290_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121_1228_stencil_19120_0290_pack, res_update123_stencil_19121_1228_stencil_19120_0290);
auto res_update123_stencil_19121__m_1224_stencil_19120__m_1288 = add(stencil_18_lane_6_pack, res_update123_stencil_19121_1228_stencil_19120_0290_pack);

	  hw_uint<32 > stencil_18_lane_7_pack;
  set_at<0, 32, 32>(stencil_18_lane_7_pack, stencil_18_lane_7);
  hw_uint<32 > res_update123_stencil_19121__m_1224_stencil_19120__m_1288_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121__m_1224_stencil_19120__m_1288_pack, res_update123_stencil_19121__m_1224_stencil_19120__m_1288);
auto res_update123_stencil_19121_0226_stencil_19120__m_1286 = add(stencil_18_lane_7_pack, res_update123_stencil_19121__m_1224_stencil_19120__m_1288_pack);

	  hw_uint<32 > stencil_18_lane_8_pack;
  set_at<0, 32, 32>(stencil_18_lane_8_pack, stencil_18_lane_8);
  hw_uint<32 > res_update123_stencil_19121_0226_stencil_19120__m_1286_pack;
  set_at<0, 32, 32>(res_update123_stencil_19121_0226_stencil_19120__m_1286_pack, res_update123_stencil_19121_0226_stencil_19120__m_1286);
auto res_update123_stencil_19121_1228_stencil_19120__m_1284 = add(stencil_18_lane_8_pack, res_update123_stencil_19121_0226_stencil_19120__m_1286_pack);
  hw_uint<32 > return_value666;
  set_at<0, 32, 32>(return_value666, res_update123_stencil_19121_1228_stencil_19120__m_1284);
  return return_value666;

}

