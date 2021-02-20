#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<64> pw_math_in0_oc02_cu426(hw_uint<32*2>& in0_oc) {
  hw_uint<32> in0_oc_lane_0 = in0_oc.extract<0, 31>();
  hw_uint<32> in0_oc_lane_1 = in0_oc.extract<32, 63>();

	
  hw_uint<32 > in0_oc_lane_0_pack;
  set_at<0, 32, 32>(in0_oc_lane_0_pack, in0_oc_lane_0);
  auto res_pw_math_in0_oc03_sm313_1370 = llf_int_to_float(in0_oc_lane_0_pack);

  hw_uint<32 > in0_oc_lane_1_pack;
  set_at<0, 32, 32>(in0_oc_lane_1_pack, in0_oc_lane_1);
  auto res_pw_math_in0_oc03_sm313_0368 = llf_int_to_float(in0_oc_lane_1_pack);
  hw_uint<64 > return_value427;
  set_at<0, 64, 32>(return_value427, res_pw_math_in0_oc03_sm313_1370);
  set_at<32, 64, 32>(return_value427, res_pw_math_in0_oc03_sm313_0368);
  return return_value427;

}

hw_uint<64> pw_math_in1_oc46_cu429(hw_uint<32*2>& in1_oc) {
  hw_uint<32> in1_oc_lane_0 = in1_oc.extract<0, 31>();
  hw_uint<32> in1_oc_lane_1 = in1_oc.extract<32, 63>();

	
  hw_uint<32 > in1_oc_lane_0_pack;
  set_at<0, 32, 32>(in1_oc_lane_0_pack, in1_oc_lane_0);
  auto res_pw_math_in1_oc47_sm314_1374 = llf_int_to_float(in1_oc_lane_0_pack);

  hw_uint<32 > in1_oc_lane_1_pack;
  set_at<0, 32, 32>(in1_oc_lane_1_pack, in1_oc_lane_1);
  auto res_pw_math_in1_oc47_sm314_0372 = llf_int_to_float(in1_oc_lane_1_pack);
  hw_uint<64 > return_value430;
  set_at<0, 64, 32>(return_value430, res_pw_math_in1_oc47_sm314_1374);
  set_at<32, 64, 32>(return_value430, res_pw_math_in1_oc47_sm314_0372);
  return return_value430;

}

hw_uint<64> us_gp_in0_1_buf850_cu432(hw_uint<32*2>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<64> lp_in0_054_cu434(hw_uint<32*2>& gp_in0_1_buf8_us48, hw_uint<32*2>& in0) {
  hw_uint<32> gp_in0_1_buf8_us48_lane_0 = gp_in0_1_buf8_us48.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_1 = gp_in0_1_buf8_us48.extract<32, 63>();
  hw_uint<32> in0_lane_0 = in0.extract<0, 31>();
  hw_uint<32> in0_lane_1 = in0.extract<32, 63>();

	
  hw_uint<32 > gp_in0_1_buf8_us48_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_0_pack, gp_in0_1_buf8_us48_lane_0);
  hw_uint<32 > in0_lane_0_pack;
  set_at<0, 32, 32>(in0_lane_0_pack, in0_lane_0);
  auto res_diff55_sm323_1382 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_0_pack, in0_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_1_pack, gp_in0_1_buf8_us48_lane_1);
  hw_uint<32 > in0_lane_1_pack;
  set_at<0, 32, 32>(in0_lane_1_pack, in0_lane_1);
  auto res_diff55_sm323_0380 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_1_pack, in0_lane_1_pack);
  hw_uint<64 > return_value435;
  set_at<0, 64, 32>(return_value435, res_diff55_sm323_1382);
  set_at<32, 64, 32>(return_value435, res_diff55_sm323_0380);
  return return_value435;

}

hw_uint<64> us_gp_in1_1_buf5698_cu437(hw_uint<32*2>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<64> lp_in1_0102_cu439(hw_uint<32*2>& gp_in1_1_buf56_us96, hw_uint<32*2>& in1) {
  hw_uint<32> gp_in1_1_buf56_us96_lane_0 = gp_in1_1_buf56_us96.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_1 = gp_in1_1_buf56_us96.extract<32, 63>();
  hw_uint<32> in1_lane_0 = in1.extract<0, 31>();
  hw_uint<32> in1_lane_1 = in1.extract<32, 63>();

	
  hw_uint<32 > gp_in1_1_buf56_us96_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_0_pack, gp_in1_1_buf56_us96_lane_0);
  hw_uint<32 > in1_lane_0_pack;
  set_at<0, 32, 32>(in1_lane_0_pack, in1_lane_0);
  auto res_diff103_sm332_1354 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_0_pack, in1_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_1_pack, gp_in1_1_buf56_us96_lane_1);
  hw_uint<32 > in1_lane_1_pack;
  set_at<0, 32, 32>(in1_lane_1_pack, in1_lane_1);
  auto res_diff103_sm332_0352 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_1_pack, in1_lane_1_pack);
  hw_uint<64 > return_value440;
  set_at<0, 64, 32>(return_value440, res_diff103_sm332_1354);
  set_at<32, 64, 32>(return_value440, res_diff103_sm332_0352);
  return return_value440;

}

hw_uint<64> pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_cu442(hw_uint<32*2>& lp_in0_0_buf52, hw_uint<32*2>& lp_in1_0_buf100) {
  hw_uint<32> lp_in0_0_buf52_lane_0 = lp_in0_0_buf52.extract<0, 31>();
  hw_uint<32> lp_in0_0_buf52_lane_1 = lp_in0_0_buf52.extract<32, 63>();
  hw_uint<32> lp_in1_0_buf100_lane_0 = lp_in1_0_buf100.extract<0, 31>();
  hw_uint<32> lp_in1_0_buf100_lane_1 = lp_in1_0_buf100.extract<32, 63>();

	
  hw_uint<32 > lp_in0_0_buf52_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_0_pack, lp_in0_0_buf52_lane_0);
  hw_uint<32 > lp_in1_0_buf100_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_0_pack, lp_in1_0_buf100_lane_0);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_1358 = llf_float_average(lp_in0_0_buf52_lane_0_pack, lp_in1_0_buf100_lane_0_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_1_pack, lp_in0_0_buf52_lane_1);
  hw_uint<32 > lp_in1_0_buf100_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_1_pack, lp_in1_0_buf100_lane_1);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_0356 = llf_float_average(lp_in0_0_buf52_lane_1_pack, lp_in1_0_buf100_lane_1_pack);
  hw_uint<64 > return_value443;
  set_at<0, 64, 32>(return_value443, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_1358);
  set_at<32, 64, 32>(return_value443, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_0356);
  return return_value443;

}

hw_uint<64> us_merged_1_reconstruct_lp129_buf132144_cu445(hw_uint<32*2>& merged_1_reconstruct_lp129_buf132) {
  return merged_1_reconstruct_lp129_buf132;
}

hw_uint<64> merged_0_reconstruct_lp138140_cu447(hw_uint<32*2>& merged_0, hw_uint<32*2>& merged_1_reconstruct_lp129_buf132_us142) {
  hw_uint<32> merged_0_lane_0 = merged_0.extract<0, 31>();
  hw_uint<32> merged_0_lane_1 = merged_0.extract<32, 63>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_0 = merged_1_reconstruct_lp129_buf132_us142.extract<0, 31>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_1 = merged_1_reconstruct_lp129_buf132_us142.extract<32, 63>();

	
  hw_uint<32 > merged_0_lane_0_pack;
  set_at<0, 32, 32>(merged_0_lane_0_pack, merged_0_lane_0);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_0_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_lane_0);
  auto res_rc146_sm342_1418 = llf_add_float_32(merged_0_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_lane_0_pack);

  hw_uint<32 > merged_0_lane_1_pack;
  set_at<0, 32, 32>(merged_0_lane_1_pack, merged_0_lane_1);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_1_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_lane_1);
  auto res_rc146_sm342_0416 = llf_add_float_32(merged_0_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_lane_1_pack);
  hw_uint<64 > return_value448;
  set_at<0, 64, 32>(return_value448, res_rc146_sm342_1418);
  set_at<32, 64, 32>(return_value448, res_rc146_sm342_0416);
  return return_value448;

}

hw_uint<64> pw_math_merged_0_reconstruct_lp138_buf141147149_cu450(hw_uint<32*2>& merged_0_reconstruct_lp138_buf141) {
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_0 = merged_0_reconstruct_lp138_buf141.extract<0, 31>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_1 = merged_0_reconstruct_lp138_buf141.extract<32, 63>();

	
  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_0_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_0_pack, merged_0_reconstruct_lp138_buf141_lane_0);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_1422 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_0_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_1_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_1_pack, merged_0_reconstruct_lp138_buf141_lane_1);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_0420 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_1_pack);
  hw_uint<64 > return_value451;
  set_at<0, 64, 32>(return_value451, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_1422);
  set_at<32, 64, 32>(return_value451, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_0420);
  return return_value451;

}

