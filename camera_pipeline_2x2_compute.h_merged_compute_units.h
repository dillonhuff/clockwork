#include "camera_pipeline_2x2_compute.h"

hw_uint<64> hw_input_global_wrapper_s0_x_x_cu16(hw_uint<16*1>& hw_input_stencil_clkwrk_0, hw_uint<16*1>& hw_input_stencil_clkwrk_1, hw_uint<16*1>& hw_input_stencil_clkwrk_2, hw_uint<16*1>& hw_input_stencil_clkwrk_3) {
  hw_uint<16> hw_input_stencil_clkwrk_0_lane_0 = hw_input_stencil_clkwrk_0.extract<0, 15>();
  hw_uint<16> hw_input_stencil_clkwrk_1_lane_0 = hw_input_stencil_clkwrk_1.extract<0, 15>();
  hw_uint<16> hw_input_stencil_clkwrk_2_lane_0 = hw_input_stencil_clkwrk_2.extract<0, 15>();
  hw_uint<16> hw_input_stencil_clkwrk_3_lane_0 = hw_input_stencil_clkwrk_3.extract<0, 15>();

	
  hw_uint<16 > hw_input_stencil_clkwrk_0_lane_0_pack;
  set_at<0, 16, 16>(hw_input_stencil_clkwrk_0_lane_0_pack, hw_input_stencil_clkwrk_0_lane_0);
  auto res_op_hcompute_hw_input_global_wrapper_glb_stencil = hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0_lane_0_pack);

  hw_uint<16 > hw_input_stencil_clkwrk_1_lane_0_pack;
  set_at<0, 16, 16>(hw_input_stencil_clkwrk_1_lane_0_pack, hw_input_stencil_clkwrk_1_lane_0);
  auto res_op_hcompute_hw_input_global_wrapper_glb_stencil_1 = hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1_lane_0_pack);

  hw_uint<16 > hw_input_stencil_clkwrk_2_lane_0_pack;
  set_at<0, 16, 16>(hw_input_stencil_clkwrk_2_lane_0_pack, hw_input_stencil_clkwrk_2_lane_0);
  auto res_op_hcompute_hw_input_global_wrapper_glb_stencil_2 = hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2_lane_0_pack);

  hw_uint<16 > hw_input_stencil_clkwrk_3_lane_0_pack;
  set_at<0, 16, 16>(hw_input_stencil_clkwrk_3_lane_0_pack, hw_input_stencil_clkwrk_3_lane_0);
  auto res_op_hcompute_hw_input_global_wrapper_glb_stencil_3 = hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3_lane_0_pack);
  hw_uint<64 > return_value17;
  set_at<0, 64, 16>(return_value17, res_op_hcompute_hw_input_global_wrapper_glb_stencil);
  set_at<16, 64, 16>(return_value17, res_op_hcompute_hw_input_global_wrapper_glb_stencil_1);
  set_at<32, 64, 16>(return_value17, res_op_hcompute_hw_input_global_wrapper_glb_stencil_2);
  set_at<48, 64, 16>(return_value17, res_op_hcompute_hw_input_global_wrapper_glb_stencil_3);
  return return_value17;

}

hw_uint<64> hw_input_global_wrapper_global_wrapper_s0_x_x_cu19(hw_uint<16*4>& hw_input_global_wrapper_glb_stencil) {
  hw_uint<16> hw_input_global_wrapper_glb_stencil_lane_0 = hw_input_global_wrapper_glb_stencil.extract<0, 15>();
  hw_uint<16> hw_input_global_wrapper_glb_stencil_lane_1 = hw_input_global_wrapper_glb_stencil.extract<16, 31>();
  hw_uint<16> hw_input_global_wrapper_glb_stencil_lane_2 = hw_input_global_wrapper_glb_stencil.extract<32, 47>();
  hw_uint<16> hw_input_global_wrapper_glb_stencil_lane_3 = hw_input_global_wrapper_glb_stencil.extract<48, 63>();

	
  hw_uint<16 > hw_input_global_wrapper_glb_stencil_lane_0_pack;
  set_at<0, 16, 16>(hw_input_global_wrapper_glb_stencil_lane_0_pack, hw_input_global_wrapper_glb_stencil_lane_0);
  auto res_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil = hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_lane_0_pack);

  hw_uint<16 > hw_input_global_wrapper_glb_stencil_lane_1_pack;
  set_at<0, 16, 16>(hw_input_global_wrapper_glb_stencil_lane_1_pack, hw_input_global_wrapper_glb_stencil_lane_1);
  auto res_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1 = hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil_lane_1_pack);

  hw_uint<16 > hw_input_global_wrapper_glb_stencil_lane_2_pack;
  set_at<0, 16, 16>(hw_input_global_wrapper_glb_stencil_lane_2_pack, hw_input_global_wrapper_glb_stencil_lane_2);
  auto res_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2 = hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil_lane_2_pack);

  hw_uint<16 > hw_input_global_wrapper_glb_stencil_lane_3_pack;
  set_at<0, 16, 16>(hw_input_global_wrapper_glb_stencil_lane_3_pack, hw_input_global_wrapper_glb_stencil_lane_3);
  auto res_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3 = hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil_lane_3_pack);
  hw_uint<64 > return_value20;
  set_at<0, 64, 16>(return_value20, res_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil);
  set_at<16, 64, 16>(return_value20, res_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1);
  set_at<32, 64, 16>(return_value20, res_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2);
  set_at<48, 64, 16>(return_value20, res_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3);
  return return_value20;

}

hw_uint<64> denoised_1_s0_x_x_cu22(hw_uint<16*20>& hw_input_global_wrapper_global_wrapper_stencil) {
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_0 = hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_1 = hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_2 = hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_3 = hw_input_global_wrapper_global_wrapper_stencil.extract<48, 63>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_4 = hw_input_global_wrapper_global_wrapper_stencil.extract<64, 79>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_5 = hw_input_global_wrapper_global_wrapper_stencil.extract<80, 95>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_6 = hw_input_global_wrapper_global_wrapper_stencil.extract<96, 111>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_7 = hw_input_global_wrapper_global_wrapper_stencil.extract<112, 127>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_8 = hw_input_global_wrapper_global_wrapper_stencil.extract<128, 143>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_9 = hw_input_global_wrapper_global_wrapper_stencil.extract<144, 159>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_10 = hw_input_global_wrapper_global_wrapper_stencil.extract<160, 175>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_11 = hw_input_global_wrapper_global_wrapper_stencil.extract<176, 191>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_12 = hw_input_global_wrapper_global_wrapper_stencil.extract<192, 207>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_13 = hw_input_global_wrapper_global_wrapper_stencil.extract<208, 223>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_14 = hw_input_global_wrapper_global_wrapper_stencil.extract<224, 239>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_15 = hw_input_global_wrapper_global_wrapper_stencil.extract<240, 255>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_16 = hw_input_global_wrapper_global_wrapper_stencil.extract<256, 271>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_17 = hw_input_global_wrapper_global_wrapper_stencil.extract<272, 287>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_18 = hw_input_global_wrapper_global_wrapper_stencil.extract<288, 303>();
  hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_lane_19 = hw_input_global_wrapper_global_wrapper_stencil.extract<304, 319>();

	
  hw_uint<80 > hw_input_global_wrapper_global_wrapper_stencil_lane_4_pack;
  set_at<0, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_4_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_0);
  set_at<16, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_4_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_1);
  set_at<32, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_4_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_2);
  set_at<48, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_4_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_3);
  set_at<64, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_4_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_4);
  auto res_op_hcompute_denoised_1_stencil = hcompute_denoised_1_stencil(hw_input_global_wrapper_global_wrapper_stencil_lane_4_pack);

  hw_uint<80 > hw_input_global_wrapper_global_wrapper_stencil_lane_9_pack;
  set_at<0, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_9_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_5);
  set_at<16, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_9_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_6);
  set_at<32, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_9_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_7);
  set_at<48, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_9_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_8);
  set_at<64, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_9_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_9);
  auto res_op_hcompute_denoised_1_stencil_1 = hcompute_denoised_1_stencil_1(hw_input_global_wrapper_global_wrapper_stencil_lane_9_pack);

  hw_uint<80 > hw_input_global_wrapper_global_wrapper_stencil_lane_14_pack;
  set_at<0, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_14_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_10);
  set_at<16, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_14_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_11);
  set_at<32, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_14_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_12);
  set_at<48, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_14_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_13);
  set_at<64, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_14_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_14);
  auto res_op_hcompute_denoised_1_stencil_2 = hcompute_denoised_1_stencil_2(hw_input_global_wrapper_global_wrapper_stencil_lane_14_pack);

  hw_uint<80 > hw_input_global_wrapper_global_wrapper_stencil_lane_19_pack;
  set_at<0, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_19_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_15);
  set_at<16, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_19_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_16);
  set_at<32, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_19_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_17);
  set_at<48, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_19_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_18);
  set_at<64, 80, 16>(hw_input_global_wrapper_global_wrapper_stencil_lane_19_pack, hw_input_global_wrapper_global_wrapper_stencil_lane_19);
  auto res_op_hcompute_denoised_1_stencil_3 = hcompute_denoised_1_stencil_3(hw_input_global_wrapper_global_wrapper_stencil_lane_19_pack);
  hw_uint<64 > return_value23;
  set_at<0, 64, 16>(return_value23, res_op_hcompute_denoised_1_stencil);
  set_at<16, 64, 16>(return_value23, res_op_hcompute_denoised_1_stencil_1);
  set_at<32, 64, 16>(return_value23, res_op_hcompute_denoised_1_stencil_2);
  set_at<48, 64, 16>(return_value23, res_op_hcompute_denoised_1_stencil_3);
  return return_value23;

}

hw_uint<192> demosaicked_1_s0_x_x_cu25(hw_uint<16*1>& r_gr_stencil, hw_uint<16*1>& g_gr_stencil, hw_uint<16*1>& b_gr_stencil, hw_uint<16*1>& r_b_stencil, hw_uint<16*1>& g_b_stencil, hw_uint<16*1>& b_b_stencil, hw_uint<16*1>& r_r_stencil, hw_uint<16*1>& g_r_stencil, hw_uint<16*1>& b_r_stencil, hw_uint<16*1>& r_gb_stencil, hw_uint<16*1>& g_gb_stencil, hw_uint<16*1>& b_gb_stencil) {
  hw_uint<16> r_gr_stencil_lane_0 = r_gr_stencil.extract<0, 15>();
  hw_uint<16> g_gr_stencil_lane_0 = g_gr_stencil.extract<0, 15>();
  hw_uint<16> b_gr_stencil_lane_0 = b_gr_stencil.extract<0, 15>();
  hw_uint<16> r_b_stencil_lane_0 = r_b_stencil.extract<0, 15>();
  hw_uint<16> g_b_stencil_lane_0 = g_b_stencil.extract<0, 15>();
  hw_uint<16> b_b_stencil_lane_0 = b_b_stencil.extract<0, 15>();
  hw_uint<16> r_r_stencil_lane_0 = r_r_stencil.extract<0, 15>();
  hw_uint<16> g_r_stencil_lane_0 = g_r_stencil.extract<0, 15>();
  hw_uint<16> b_r_stencil_lane_0 = b_r_stencil.extract<0, 15>();
  hw_uint<16> r_gb_stencil_lane_0 = r_gb_stencil.extract<0, 15>();
  hw_uint<16> g_gb_stencil_lane_0 = g_gb_stencil.extract<0, 15>();
  hw_uint<16> b_gb_stencil_lane_0 = b_gb_stencil.extract<0, 15>();

	
  hw_uint<16 > r_gr_stencil_lane_0_pack;
  set_at<0, 16, 16>(r_gr_stencil_lane_0_pack, r_gr_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil = hcompute_demosaicked_1_stencil(r_gr_stencil_lane_0_pack);

  hw_uint<16 > g_gr_stencil_lane_0_pack;
  set_at<0, 16, 16>(g_gr_stencil_lane_0_pack, g_gr_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_1 = hcompute_demosaicked_1_stencil_1(g_gr_stencil_lane_0_pack);

  hw_uint<16 > b_gr_stencil_lane_0_pack;
  set_at<0, 16, 16>(b_gr_stencil_lane_0_pack, b_gr_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_2 = hcompute_demosaicked_1_stencil_2(b_gr_stencil_lane_0_pack);

  hw_uint<16 > r_b_stencil_lane_0_pack;
  set_at<0, 16, 16>(r_b_stencil_lane_0_pack, r_b_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_3 = hcompute_demosaicked_1_stencil_3(r_b_stencil_lane_0_pack);

  hw_uint<16 > g_b_stencil_lane_0_pack;
  set_at<0, 16, 16>(g_b_stencil_lane_0_pack, g_b_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_4 = hcompute_demosaicked_1_stencil_4(g_b_stencil_lane_0_pack);

  hw_uint<16 > b_b_stencil_lane_0_pack;
  set_at<0, 16, 16>(b_b_stencil_lane_0_pack, b_b_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_5 = hcompute_demosaicked_1_stencil_5(b_b_stencil_lane_0_pack);

  hw_uint<16 > r_r_stencil_lane_0_pack;
  set_at<0, 16, 16>(r_r_stencil_lane_0_pack, r_r_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_6 = hcompute_demosaicked_1_stencil_6(r_r_stencil_lane_0_pack);

  hw_uint<16 > g_r_stencil_lane_0_pack;
  set_at<0, 16, 16>(g_r_stencil_lane_0_pack, g_r_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_7 = hcompute_demosaicked_1_stencil_7(g_r_stencil_lane_0_pack);

  hw_uint<16 > b_r_stencil_lane_0_pack;
  set_at<0, 16, 16>(b_r_stencil_lane_0_pack, b_r_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_8 = hcompute_demosaicked_1_stencil_8(b_r_stencil_lane_0_pack);

  hw_uint<16 > r_gb_stencil_lane_0_pack;
  set_at<0, 16, 16>(r_gb_stencil_lane_0_pack, r_gb_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_9 = hcompute_demosaicked_1_stencil_9(r_gb_stencil_lane_0_pack);

  hw_uint<16 > g_gb_stencil_lane_0_pack;
  set_at<0, 16, 16>(g_gb_stencil_lane_0_pack, g_gb_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_10 = hcompute_demosaicked_1_stencil_10(g_gb_stencil_lane_0_pack);

  hw_uint<16 > b_gb_stencil_lane_0_pack;
  set_at<0, 16, 16>(b_gb_stencil_lane_0_pack, b_gb_stencil_lane_0);
  auto res_op_hcompute_demosaicked_1_stencil_11 = hcompute_demosaicked_1_stencil_11(b_gb_stencil_lane_0_pack);
  hw_uint<192 > return_value26;
  set_at<0, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil);
  set_at<16, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_1);
  set_at<32, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_2);
  set_at<48, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_3);
  set_at<64, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_4);
  set_at<80, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_5);
  set_at<96, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_6);
  set_at<112, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_7);
  set_at<128, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_8);
  set_at<144, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_9);
  set_at<160, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_10);
  set_at<176, 192, 16>(return_value26, res_op_hcompute_demosaicked_1_stencil_11);
  return return_value26;

}

hw_uint<192> corrected_s0_x_x_cu28(hw_uint<16*36>& demosaicked_1_stencil) {
  hw_uint<16> demosaicked_1_stencil_lane_0 = demosaicked_1_stencil.extract<0, 15>();
  hw_uint<16> demosaicked_1_stencil_lane_1 = demosaicked_1_stencil.extract<16, 31>();
  hw_uint<16> demosaicked_1_stencil_lane_2 = demosaicked_1_stencil.extract<32, 47>();
  hw_uint<16> demosaicked_1_stencil_lane_3 = demosaicked_1_stencil.extract<48, 63>();
  hw_uint<16> demosaicked_1_stencil_lane_4 = demosaicked_1_stencil.extract<64, 79>();
  hw_uint<16> demosaicked_1_stencil_lane_5 = demosaicked_1_stencil.extract<80, 95>();
  hw_uint<16> demosaicked_1_stencil_lane_6 = demosaicked_1_stencil.extract<96, 111>();
  hw_uint<16> demosaicked_1_stencil_lane_7 = demosaicked_1_stencil.extract<112, 127>();
  hw_uint<16> demosaicked_1_stencil_lane_8 = demosaicked_1_stencil.extract<128, 143>();
  hw_uint<16> demosaicked_1_stencil_lane_9 = demosaicked_1_stencil.extract<144, 159>();
  hw_uint<16> demosaicked_1_stencil_lane_10 = demosaicked_1_stencil.extract<160, 175>();
  hw_uint<16> demosaicked_1_stencil_lane_11 = demosaicked_1_stencil.extract<176, 191>();
  hw_uint<16> demosaicked_1_stencil_lane_12 = demosaicked_1_stencil.extract<192, 207>();
  hw_uint<16> demosaicked_1_stencil_lane_13 = demosaicked_1_stencil.extract<208, 223>();
  hw_uint<16> demosaicked_1_stencil_lane_14 = demosaicked_1_stencil.extract<224, 239>();
  hw_uint<16> demosaicked_1_stencil_lane_15 = demosaicked_1_stencil.extract<240, 255>();
  hw_uint<16> demosaicked_1_stencil_lane_16 = demosaicked_1_stencil.extract<256, 271>();
  hw_uint<16> demosaicked_1_stencil_lane_17 = demosaicked_1_stencil.extract<272, 287>();
  hw_uint<16> demosaicked_1_stencil_lane_18 = demosaicked_1_stencil.extract<288, 303>();
  hw_uint<16> demosaicked_1_stencil_lane_19 = demosaicked_1_stencil.extract<304, 319>();
  hw_uint<16> demosaicked_1_stencil_lane_20 = demosaicked_1_stencil.extract<320, 335>();
  hw_uint<16> demosaicked_1_stencil_lane_21 = demosaicked_1_stencil.extract<336, 351>();
  hw_uint<16> demosaicked_1_stencil_lane_22 = demosaicked_1_stencil.extract<352, 367>();
  hw_uint<16> demosaicked_1_stencil_lane_23 = demosaicked_1_stencil.extract<368, 383>();
  hw_uint<16> demosaicked_1_stencil_lane_24 = demosaicked_1_stencil.extract<384, 399>();
  hw_uint<16> demosaicked_1_stencil_lane_25 = demosaicked_1_stencil.extract<400, 415>();
  hw_uint<16> demosaicked_1_stencil_lane_26 = demosaicked_1_stencil.extract<416, 431>();
  hw_uint<16> demosaicked_1_stencil_lane_27 = demosaicked_1_stencil.extract<432, 447>();
  hw_uint<16> demosaicked_1_stencil_lane_28 = demosaicked_1_stencil.extract<448, 463>();
  hw_uint<16> demosaicked_1_stencil_lane_29 = demosaicked_1_stencil.extract<464, 479>();
  hw_uint<16> demosaicked_1_stencil_lane_30 = demosaicked_1_stencil.extract<480, 495>();
  hw_uint<16> demosaicked_1_stencil_lane_31 = demosaicked_1_stencil.extract<496, 511>();
  hw_uint<16> demosaicked_1_stencil_lane_32 = demosaicked_1_stencil.extract<512, 527>();
  hw_uint<16> demosaicked_1_stencil_lane_33 = demosaicked_1_stencil.extract<528, 543>();
  hw_uint<16> demosaicked_1_stencil_lane_34 = demosaicked_1_stencil.extract<544, 559>();
  hw_uint<16> demosaicked_1_stencil_lane_35 = demosaicked_1_stencil.extract<560, 575>();

	
  hw_uint<48 > demosaicked_1_stencil_lane_2_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_2_pack, demosaicked_1_stencil_lane_0);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_2_pack, demosaicked_1_stencil_lane_1);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_2_pack, demosaicked_1_stencil_lane_2);
  auto res_op_hcompute_corrected_stencil = hcompute_corrected_stencil(demosaicked_1_stencil_lane_2_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_5_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_5_pack, demosaicked_1_stencil_lane_3);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_5_pack, demosaicked_1_stencil_lane_4);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_5_pack, demosaicked_1_stencil_lane_5);
  auto res_op_hcompute_corrected_stencil_1 = hcompute_corrected_stencil_1(demosaicked_1_stencil_lane_5_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_8_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_8_pack, demosaicked_1_stencil_lane_6);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_8_pack, demosaicked_1_stencil_lane_7);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_8_pack, demosaicked_1_stencil_lane_8);
  auto res_op_hcompute_corrected_stencil_2 = hcompute_corrected_stencil_2(demosaicked_1_stencil_lane_8_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_11_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_11_pack, demosaicked_1_stencil_lane_9);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_11_pack, demosaicked_1_stencil_lane_10);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_11_pack, demosaicked_1_stencil_lane_11);
  auto res_op_hcompute_corrected_stencil_3 = hcompute_corrected_stencil_3(demosaicked_1_stencil_lane_11_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_14_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_14_pack, demosaicked_1_stencil_lane_12);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_14_pack, demosaicked_1_stencil_lane_13);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_14_pack, demosaicked_1_stencil_lane_14);
  auto res_op_hcompute_corrected_stencil_4 = hcompute_corrected_stencil_4(demosaicked_1_stencil_lane_14_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_17_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_17_pack, demosaicked_1_stencil_lane_15);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_17_pack, demosaicked_1_stencil_lane_16);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_17_pack, demosaicked_1_stencil_lane_17);
  auto res_op_hcompute_corrected_stencil_5 = hcompute_corrected_stencil_5(demosaicked_1_stencil_lane_17_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_20_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_20_pack, demosaicked_1_stencil_lane_18);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_20_pack, demosaicked_1_stencil_lane_19);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_20_pack, demosaicked_1_stencil_lane_20);
  auto res_op_hcompute_corrected_stencil_6 = hcompute_corrected_stencil_6(demosaicked_1_stencil_lane_20_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_23_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_23_pack, demosaicked_1_stencil_lane_21);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_23_pack, demosaicked_1_stencil_lane_22);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_23_pack, demosaicked_1_stencil_lane_23);
  auto res_op_hcompute_corrected_stencil_7 = hcompute_corrected_stencil_7(demosaicked_1_stencil_lane_23_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_26_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_26_pack, demosaicked_1_stencil_lane_24);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_26_pack, demosaicked_1_stencil_lane_25);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_26_pack, demosaicked_1_stencil_lane_26);
  auto res_op_hcompute_corrected_stencil_8 = hcompute_corrected_stencil_8(demosaicked_1_stencil_lane_26_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_29_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_29_pack, demosaicked_1_stencil_lane_27);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_29_pack, demosaicked_1_stencil_lane_28);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_29_pack, demosaicked_1_stencil_lane_29);
  auto res_op_hcompute_corrected_stencil_9 = hcompute_corrected_stencil_9(demosaicked_1_stencil_lane_29_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_32_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_32_pack, demosaicked_1_stencil_lane_30);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_32_pack, demosaicked_1_stencil_lane_31);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_32_pack, demosaicked_1_stencil_lane_32);
  auto res_op_hcompute_corrected_stencil_10 = hcompute_corrected_stencil_10(demosaicked_1_stencil_lane_32_pack);

  hw_uint<48 > demosaicked_1_stencil_lane_35_pack;
  set_at<0, 48, 16>(demosaicked_1_stencil_lane_35_pack, demosaicked_1_stencil_lane_33);
  set_at<16, 48, 16>(demosaicked_1_stencil_lane_35_pack, demosaicked_1_stencil_lane_34);
  set_at<32, 48, 16>(demosaicked_1_stencil_lane_35_pack, demosaicked_1_stencil_lane_35);
  auto res_op_hcompute_corrected_stencil_11 = hcompute_corrected_stencil_11(demosaicked_1_stencil_lane_35_pack);
  hw_uint<192 > return_value29;
  set_at<0, 192, 16>(return_value29, res_op_hcompute_corrected_stencil);
  set_at<16, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_1);
  set_at<32, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_2);
  set_at<48, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_3);
  set_at<64, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_4);
  set_at<80, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_5);
  set_at<96, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_6);
  set_at<112, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_7);
  set_at<128, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_8);
  set_at<144, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_9);
  set_at<160, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_10);
  set_at<176, 192, 16>(return_value29, res_op_hcompute_corrected_stencil_11);
  return return_value29;

}

hw_uint<192> curved_s0_x_x_cu31(hw_uint<16*12>& corrected_stencil) {
  hw_uint<16> corrected_stencil_lane_0 = corrected_stencil.extract<0, 15>();
  hw_uint<16> corrected_stencil_lane_1 = corrected_stencil.extract<16, 31>();
  hw_uint<16> corrected_stencil_lane_2 = corrected_stencil.extract<32, 47>();
  hw_uint<16> corrected_stencil_lane_3 = corrected_stencil.extract<48, 63>();
  hw_uint<16> corrected_stencil_lane_4 = corrected_stencil.extract<64, 79>();
  hw_uint<16> corrected_stencil_lane_5 = corrected_stencil.extract<80, 95>();
  hw_uint<16> corrected_stencil_lane_6 = corrected_stencil.extract<96, 111>();
  hw_uint<16> corrected_stencil_lane_7 = corrected_stencil.extract<112, 127>();
  hw_uint<16> corrected_stencil_lane_8 = corrected_stencil.extract<128, 143>();
  hw_uint<16> corrected_stencil_lane_9 = corrected_stencil.extract<144, 159>();
  hw_uint<16> corrected_stencil_lane_10 = corrected_stencil.extract<160, 175>();
  hw_uint<16> corrected_stencil_lane_11 = corrected_stencil.extract<176, 191>();

	
  hw_uint<16 > corrected_stencil_lane_0_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_0_pack, corrected_stencil_lane_0);
  auto res_op_hcompute_curved_stencil = hcompute_curved_stencil(corrected_stencil_lane_0_pack);

  hw_uint<16 > corrected_stencil_lane_1_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_1_pack, corrected_stencil_lane_1);
  auto res_op_hcompute_curved_stencil_1 = hcompute_curved_stencil_1(corrected_stencil_lane_1_pack);

  hw_uint<16 > corrected_stencil_lane_2_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_2_pack, corrected_stencil_lane_2);
  auto res_op_hcompute_curved_stencil_2 = hcompute_curved_stencil_2(corrected_stencil_lane_2_pack);

  hw_uint<16 > corrected_stencil_lane_3_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_3_pack, corrected_stencil_lane_3);
  auto res_op_hcompute_curved_stencil_3 = hcompute_curved_stencil_3(corrected_stencil_lane_3_pack);

  hw_uint<16 > corrected_stencil_lane_4_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_4_pack, corrected_stencil_lane_4);
  auto res_op_hcompute_curved_stencil_4 = hcompute_curved_stencil_4(corrected_stencil_lane_4_pack);

  hw_uint<16 > corrected_stencil_lane_5_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_5_pack, corrected_stencil_lane_5);
  auto res_op_hcompute_curved_stencil_5 = hcompute_curved_stencil_5(corrected_stencil_lane_5_pack);

  hw_uint<16 > corrected_stencil_lane_6_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_6_pack, corrected_stencil_lane_6);
  auto res_op_hcompute_curved_stencil_6 = hcompute_curved_stencil_6(corrected_stencil_lane_6_pack);

  hw_uint<16 > corrected_stencil_lane_7_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_7_pack, corrected_stencil_lane_7);
  auto res_op_hcompute_curved_stencil_7 = hcompute_curved_stencil_7(corrected_stencil_lane_7_pack);

  hw_uint<16 > corrected_stencil_lane_8_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_8_pack, corrected_stencil_lane_8);
  auto res_op_hcompute_curved_stencil_8 = hcompute_curved_stencil_8(corrected_stencil_lane_8_pack);

  hw_uint<16 > corrected_stencil_lane_9_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_9_pack, corrected_stencil_lane_9);
  auto res_op_hcompute_curved_stencil_9 = hcompute_curved_stencil_9(corrected_stencil_lane_9_pack);

  hw_uint<16 > corrected_stencil_lane_10_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_10_pack, corrected_stencil_lane_10);
  auto res_op_hcompute_curved_stencil_10 = hcompute_curved_stencil_10(corrected_stencil_lane_10_pack);

  hw_uint<16 > corrected_stencil_lane_11_pack;
  set_at<0, 16, 16>(corrected_stencil_lane_11_pack, corrected_stencil_lane_11);
  auto res_op_hcompute_curved_stencil_11 = hcompute_curved_stencil_11(corrected_stencil_lane_11_pack);
  hw_uint<192 > return_value32;
  set_at<0, 192, 16>(return_value32, res_op_hcompute_curved_stencil);
  set_at<16, 192, 16>(return_value32, res_op_hcompute_curved_stencil_1);
  set_at<32, 192, 16>(return_value32, res_op_hcompute_curved_stencil_2);
  set_at<48, 192, 16>(return_value32, res_op_hcompute_curved_stencil_3);
  set_at<64, 192, 16>(return_value32, res_op_hcompute_curved_stencil_4);
  set_at<80, 192, 16>(return_value32, res_op_hcompute_curved_stencil_5);
  set_at<96, 192, 16>(return_value32, res_op_hcompute_curved_stencil_6);
  set_at<112, 192, 16>(return_value32, res_op_hcompute_curved_stencil_7);
  set_at<128, 192, 16>(return_value32, res_op_hcompute_curved_stencil_8);
  set_at<144, 192, 16>(return_value32, res_op_hcompute_curved_stencil_9);
  set_at<160, 192, 16>(return_value32, res_op_hcompute_curved_stencil_10);
  set_at<176, 192, 16>(return_value32, res_op_hcompute_curved_stencil_11);
  return return_value32;

}

hw_uint<192> hw_output_s0_x_xi_xi_cu34(hw_uint<16*12>& curved_stencil) {
  hw_uint<16> curved_stencil_lane_0 = curved_stencil.extract<0, 15>();
  hw_uint<16> curved_stencil_lane_1 = curved_stencil.extract<16, 31>();
  hw_uint<16> curved_stencil_lane_2 = curved_stencil.extract<32, 47>();
  hw_uint<16> curved_stencil_lane_3 = curved_stencil.extract<48, 63>();
  hw_uint<16> curved_stencil_lane_4 = curved_stencil.extract<64, 79>();
  hw_uint<16> curved_stencil_lane_5 = curved_stencil.extract<80, 95>();
  hw_uint<16> curved_stencil_lane_6 = curved_stencil.extract<96, 111>();
  hw_uint<16> curved_stencil_lane_7 = curved_stencil.extract<112, 127>();
  hw_uint<16> curved_stencil_lane_8 = curved_stencil.extract<128, 143>();
  hw_uint<16> curved_stencil_lane_9 = curved_stencil.extract<144, 159>();
  hw_uint<16> curved_stencil_lane_10 = curved_stencil.extract<160, 175>();
  hw_uint<16> curved_stencil_lane_11 = curved_stencil.extract<176, 191>();

	
  hw_uint<16 > curved_stencil_lane_0_pack;
  set_at<0, 16, 16>(curved_stencil_lane_0_pack, curved_stencil_lane_0);
  auto res_op_hcompute_hw_output_glb_stencil = hcompute_hw_output_glb_stencil(curved_stencil_lane_0_pack);

  hw_uint<16 > curved_stencil_lane_1_pack;
  set_at<0, 16, 16>(curved_stencil_lane_1_pack, curved_stencil_lane_1);
  auto res_op_hcompute_hw_output_glb_stencil_1 = hcompute_hw_output_glb_stencil_1(curved_stencil_lane_1_pack);

  hw_uint<16 > curved_stencil_lane_2_pack;
  set_at<0, 16, 16>(curved_stencil_lane_2_pack, curved_stencil_lane_2);
  auto res_op_hcompute_hw_output_glb_stencil_2 = hcompute_hw_output_glb_stencil_2(curved_stencil_lane_2_pack);

  hw_uint<16 > curved_stencil_lane_3_pack;
  set_at<0, 16, 16>(curved_stencil_lane_3_pack, curved_stencil_lane_3);
  auto res_op_hcompute_hw_output_glb_stencil_3 = hcompute_hw_output_glb_stencil_3(curved_stencil_lane_3_pack);

  hw_uint<16 > curved_stencil_lane_4_pack;
  set_at<0, 16, 16>(curved_stencil_lane_4_pack, curved_stencil_lane_4);
  auto res_op_hcompute_hw_output_glb_stencil_4 = hcompute_hw_output_glb_stencil_4(curved_stencil_lane_4_pack);

  hw_uint<16 > curved_stencil_lane_5_pack;
  set_at<0, 16, 16>(curved_stencil_lane_5_pack, curved_stencil_lane_5);
  auto res_op_hcompute_hw_output_glb_stencil_5 = hcompute_hw_output_glb_stencil_5(curved_stencil_lane_5_pack);

  hw_uint<16 > curved_stencil_lane_6_pack;
  set_at<0, 16, 16>(curved_stencil_lane_6_pack, curved_stencil_lane_6);
  auto res_op_hcompute_hw_output_glb_stencil_6 = hcompute_hw_output_glb_stencil_6(curved_stencil_lane_6_pack);

  hw_uint<16 > curved_stencil_lane_7_pack;
  set_at<0, 16, 16>(curved_stencil_lane_7_pack, curved_stencil_lane_7);
  auto res_op_hcompute_hw_output_glb_stencil_7 = hcompute_hw_output_glb_stencil_7(curved_stencil_lane_7_pack);

  hw_uint<16 > curved_stencil_lane_8_pack;
  set_at<0, 16, 16>(curved_stencil_lane_8_pack, curved_stencil_lane_8);
  auto res_op_hcompute_hw_output_glb_stencil_8 = hcompute_hw_output_glb_stencil_8(curved_stencil_lane_8_pack);

  hw_uint<16 > curved_stencil_lane_9_pack;
  set_at<0, 16, 16>(curved_stencil_lane_9_pack, curved_stencil_lane_9);
  auto res_op_hcompute_hw_output_glb_stencil_9 = hcompute_hw_output_glb_stencil_9(curved_stencil_lane_9_pack);

  hw_uint<16 > curved_stencil_lane_10_pack;
  set_at<0, 16, 16>(curved_stencil_lane_10_pack, curved_stencil_lane_10);
  auto res_op_hcompute_hw_output_glb_stencil_10 = hcompute_hw_output_glb_stencil_10(curved_stencil_lane_10_pack);

  hw_uint<16 > curved_stencil_lane_11_pack;
  set_at<0, 16, 16>(curved_stencil_lane_11_pack, curved_stencil_lane_11);
  auto res_op_hcompute_hw_output_glb_stencil_11 = hcompute_hw_output_glb_stencil_11(curved_stencil_lane_11_pack);
  hw_uint<192 > return_value35;
  set_at<0, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil);
  set_at<16, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_1);
  set_at<32, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_2);
  set_at<48, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_3);
  set_at<64, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_4);
  set_at<80, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_5);
  set_at<96, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_6);
  set_at<112, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_7);
  set_at<128, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_8);
  set_at<144, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_9);
  set_at<160, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_10);
  set_at<176, 192, 16>(return_value35, res_op_hcompute_hw_output_glb_stencil_11);
  return return_value35;

}

hw_uint<192> hw_output_global_wrapper_s0_x_xi_xi_cu37(hw_uint<16*12>& hw_output_glb_stencil) {
  hw_uint<16> hw_output_glb_stencil_lane_0 = hw_output_glb_stencil.extract<0, 15>();
  hw_uint<16> hw_output_glb_stencil_lane_1 = hw_output_glb_stencil.extract<16, 31>();
  hw_uint<16> hw_output_glb_stencil_lane_2 = hw_output_glb_stencil.extract<32, 47>();
  hw_uint<16> hw_output_glb_stencil_lane_3 = hw_output_glb_stencil.extract<48, 63>();
  hw_uint<16> hw_output_glb_stencil_lane_4 = hw_output_glb_stencil.extract<64, 79>();
  hw_uint<16> hw_output_glb_stencil_lane_5 = hw_output_glb_stencil.extract<80, 95>();
  hw_uint<16> hw_output_glb_stencil_lane_6 = hw_output_glb_stencil.extract<96, 111>();
  hw_uint<16> hw_output_glb_stencil_lane_7 = hw_output_glb_stencil.extract<112, 127>();
  hw_uint<16> hw_output_glb_stencil_lane_8 = hw_output_glb_stencil.extract<128, 143>();
  hw_uint<16> hw_output_glb_stencil_lane_9 = hw_output_glb_stencil.extract<144, 159>();
  hw_uint<16> hw_output_glb_stencil_lane_10 = hw_output_glb_stencil.extract<160, 175>();
  hw_uint<16> hw_output_glb_stencil_lane_11 = hw_output_glb_stencil.extract<176, 191>();

	
  hw_uint<16 > hw_output_glb_stencil_lane_0_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_0_pack, hw_output_glb_stencil_lane_0);
  auto res_op_hcompute_hw_output_global_wrapper_stencil = hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil_lane_0_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_1_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_1_pack, hw_output_glb_stencil_lane_1);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_1 = hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil_lane_1_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_2_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_2_pack, hw_output_glb_stencil_lane_2);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_2 = hcompute_hw_output_global_wrapper_stencil_2(hw_output_glb_stencil_lane_2_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_3_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_3_pack, hw_output_glb_stencil_lane_3);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_3 = hcompute_hw_output_global_wrapper_stencil_3(hw_output_glb_stencil_lane_3_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_4_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_4_pack, hw_output_glb_stencil_lane_4);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_4 = hcompute_hw_output_global_wrapper_stencil_4(hw_output_glb_stencil_lane_4_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_5_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_5_pack, hw_output_glb_stencil_lane_5);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_5 = hcompute_hw_output_global_wrapper_stencil_5(hw_output_glb_stencil_lane_5_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_6_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_6_pack, hw_output_glb_stencil_lane_6);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_6 = hcompute_hw_output_global_wrapper_stencil_6(hw_output_glb_stencil_lane_6_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_7_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_7_pack, hw_output_glb_stencil_lane_7);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_7 = hcompute_hw_output_global_wrapper_stencil_7(hw_output_glb_stencil_lane_7_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_8_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_8_pack, hw_output_glb_stencil_lane_8);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_8 = hcompute_hw_output_global_wrapper_stencil_8(hw_output_glb_stencil_lane_8_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_9_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_9_pack, hw_output_glb_stencil_lane_9);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_9 = hcompute_hw_output_global_wrapper_stencil_9(hw_output_glb_stencil_lane_9_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_10_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_10_pack, hw_output_glb_stencil_lane_10);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_10 = hcompute_hw_output_global_wrapper_stencil_10(hw_output_glb_stencil_lane_10_pack);

  hw_uint<16 > hw_output_glb_stencil_lane_11_pack;
  set_at<0, 16, 16>(hw_output_glb_stencil_lane_11_pack, hw_output_glb_stencil_lane_11);
  auto res_op_hcompute_hw_output_global_wrapper_stencil_11 = hcompute_hw_output_global_wrapper_stencil_11(hw_output_glb_stencil_lane_11_pack);
  hw_uint<192 > return_value38;
  set_at<0, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil);
  set_at<16, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_1);
  set_at<32, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_2);
  set_at<48, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_3);
  set_at<64, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_4);
  set_at<80, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_5);
  set_at<96, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_6);
  set_at<112, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_7);
  set_at<128, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_8);
  set_at<144, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_9);
  set_at<160, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_10);
  set_at<176, 192, 16>(return_value38, res_op_hcompute_hw_output_global_wrapper_stencil_11);
  return return_value38;

}

