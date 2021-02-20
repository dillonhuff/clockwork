#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> pw_math_in0_oc02_cu1722(hw_uint<32*8>& in0_oc) {
  hw_uint<32> in0_oc_lane_0 = in0_oc.extract<0, 31>();
  hw_uint<32> in0_oc_lane_1 = in0_oc.extract<32, 63>();
  hw_uint<32> in0_oc_lane_2 = in0_oc.extract<64, 95>();
  hw_uint<32> in0_oc_lane_3 = in0_oc.extract<96, 127>();
  hw_uint<32> in0_oc_lane_4 = in0_oc.extract<128, 159>();
  hw_uint<32> in0_oc_lane_5 = in0_oc.extract<160, 191>();
  hw_uint<32> in0_oc_lane_6 = in0_oc.extract<192, 223>();
  hw_uint<32> in0_oc_lane_7 = in0_oc.extract<224, 255>();

	
  hw_uint<32 > in0_oc_lane_0_pack;
  set_at<0, 32, 32>(in0_oc_lane_0_pack, in0_oc_lane_0);
  auto res_pw_math_in0_oc03_sm649_71584 = llf_int_to_float(in0_oc_lane_0_pack);

  hw_uint<32 > in0_oc_lane_1_pack;
  set_at<0, 32, 32>(in0_oc_lane_1_pack, in0_oc_lane_1);
  auto res_pw_math_in0_oc03_sm649_61582 = llf_int_to_float(in0_oc_lane_1_pack);

  hw_uint<32 > in0_oc_lane_2_pack;
  set_at<0, 32, 32>(in0_oc_lane_2_pack, in0_oc_lane_2);
  auto res_pw_math_in0_oc03_sm649_51580 = llf_int_to_float(in0_oc_lane_2_pack);

  hw_uint<32 > in0_oc_lane_3_pack;
  set_at<0, 32, 32>(in0_oc_lane_3_pack, in0_oc_lane_3);
  auto res_pw_math_in0_oc03_sm649_41578 = llf_int_to_float(in0_oc_lane_3_pack);

  hw_uint<32 > in0_oc_lane_4_pack;
  set_at<0, 32, 32>(in0_oc_lane_4_pack, in0_oc_lane_4);
  auto res_pw_math_in0_oc03_sm649_31576 = llf_int_to_float(in0_oc_lane_4_pack);

  hw_uint<32 > in0_oc_lane_5_pack;
  set_at<0, 32, 32>(in0_oc_lane_5_pack, in0_oc_lane_5);
  auto res_pw_math_in0_oc03_sm649_21574 = llf_int_to_float(in0_oc_lane_5_pack);

  hw_uint<32 > in0_oc_lane_6_pack;
  set_at<0, 32, 32>(in0_oc_lane_6_pack, in0_oc_lane_6);
  auto res_pw_math_in0_oc03_sm649_11572 = llf_int_to_float(in0_oc_lane_6_pack);

  hw_uint<32 > in0_oc_lane_7_pack;
  set_at<0, 32, 32>(in0_oc_lane_7_pack, in0_oc_lane_7);
  auto res_pw_math_in0_oc03_sm649_01570 = llf_int_to_float(in0_oc_lane_7_pack);
  hw_uint<256 > return_value1723;
  set_at<0, 256, 32>(return_value1723, res_pw_math_in0_oc03_sm649_71584);
  set_at<32, 256, 32>(return_value1723, res_pw_math_in0_oc03_sm649_61582);
  set_at<64, 256, 32>(return_value1723, res_pw_math_in0_oc03_sm649_51580);
  set_at<96, 256, 32>(return_value1723, res_pw_math_in0_oc03_sm649_41578);
  set_at<128, 256, 32>(return_value1723, res_pw_math_in0_oc03_sm649_31576);
  set_at<160, 256, 32>(return_value1723, res_pw_math_in0_oc03_sm649_21574);
  set_at<192, 256, 32>(return_value1723, res_pw_math_in0_oc03_sm649_11572);
  set_at<224, 256, 32>(return_value1723, res_pw_math_in0_oc03_sm649_01570);
  return return_value1723;

}

hw_uint<128> merged_1_reconstruct_lp129131_cu1725(hw_uint<32*4>& merged_1_FIFO_buf617, hw_uint<32*4>& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637) {
  hw_uint<32> merged_1_FIFO_buf617_lane_0 = merged_1_FIFO_buf617.extract<0, 31>();
  hw_uint<32> merged_1_FIFO_buf617_lane_1 = merged_1_FIFO_buf617.extract<32, 63>();
  hw_uint<32> merged_1_FIFO_buf617_lane_2 = merged_1_FIFO_buf617.extract<64, 95>();
  hw_uint<32> merged_1_FIFO_buf617_lane_3 = merged_1_FIFO_buf617.extract<96, 127>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<0, 31>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<32, 63>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_2 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<64, 95>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_3 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<96, 127>();

	
  hw_uint<32 > merged_1_FIFO_buf617_lane_0_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_0_pack, merged_1_FIFO_buf617_lane_0);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0);
  auto res_rc137_sm650_31312 = llf_add_float_32(merged_1_FIFO_buf617_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_1_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_1_pack, merged_1_FIFO_buf617_lane_1);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1);
  auto res_rc137_sm650_21310 = llf_add_float_32(merged_1_FIFO_buf617_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_2_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_2_pack, merged_1_FIFO_buf617_lane_2);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_2_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_2_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_2);
  auto res_rc137_sm650_11308 = llf_add_float_32(merged_1_FIFO_buf617_lane_2_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_2_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_3_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_3_pack, merged_1_FIFO_buf617_lane_3);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_3_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_3_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_3);
  auto res_rc137_sm650_01306 = llf_add_float_32(merged_1_FIFO_buf617_lane_3_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_3_pack);
  hw_uint<128 > return_value1726;
  set_at<0, 128, 32>(return_value1726, res_rc137_sm650_31312);
  set_at<32, 128, 32>(return_value1726, res_rc137_sm650_21310);
  set_at<64, 128, 32>(return_value1726, res_rc137_sm650_11308);
  set_at<96, 128, 32>(return_value1726, res_rc137_sm650_01306);
  return return_value1726;

}

hw_uint<256> us_merged_1_reconstruct_lp129_buf132144_cu1728(hw_uint<32*8>& merged_1_reconstruct_lp129_buf132_FIFO_buf621) {
  return merged_1_reconstruct_lp129_buf132_FIFO_buf621;
}

hw_uint<256> merged_0_reconstruct_lp138140_cu1730(hw_uint<32*8>& merged_0_FIFO_buf609, hw_uint<32*8>& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625) {
  hw_uint<32> merged_0_FIFO_buf609_lane_0 = merged_0_FIFO_buf609.extract<0, 31>();
  hw_uint<32> merged_0_FIFO_buf609_lane_1 = merged_0_FIFO_buf609.extract<32, 63>();
  hw_uint<32> merged_0_FIFO_buf609_lane_2 = merged_0_FIFO_buf609.extract<64, 95>();
  hw_uint<32> merged_0_FIFO_buf609_lane_3 = merged_0_FIFO_buf609.extract<96, 127>();
  hw_uint<32> merged_0_FIFO_buf609_lane_4 = merged_0_FIFO_buf609.extract<128, 159>();
  hw_uint<32> merged_0_FIFO_buf609_lane_5 = merged_0_FIFO_buf609.extract<160, 191>();
  hw_uint<32> merged_0_FIFO_buf609_lane_6 = merged_0_FIFO_buf609.extract<192, 223>();
  hw_uint<32> merged_0_FIFO_buf609_lane_7 = merged_0_FIFO_buf609.extract<224, 255>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<0, 31>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<32, 63>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<64, 95>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<96, 127>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_4 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<128, 159>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_5 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<160, 191>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_6 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<192, 223>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_7 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<224, 255>();

	
  hw_uint<32 > merged_0_FIFO_buf609_lane_0_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_0_pack, merged_0_FIFO_buf609_lane_0);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0);
  auto res_rc146_sm652_71352 = llf_add_float_32(merged_0_FIFO_buf609_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_1_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_1_pack, merged_0_FIFO_buf609_lane_1);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1);
  auto res_rc146_sm652_61350 = llf_add_float_32(merged_0_FIFO_buf609_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_2_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_2_pack, merged_0_FIFO_buf609_lane_2);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2);
  auto res_rc146_sm652_51348 = llf_add_float_32(merged_0_FIFO_buf609_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_3_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_3_pack, merged_0_FIFO_buf609_lane_3);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3);
  auto res_rc146_sm652_41346 = llf_add_float_32(merged_0_FIFO_buf609_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_4_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_4_pack, merged_0_FIFO_buf609_lane_4);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_4_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_4_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_4);
  auto res_rc146_sm652_31344 = llf_add_float_32(merged_0_FIFO_buf609_lane_4_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_4_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_5_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_5_pack, merged_0_FIFO_buf609_lane_5);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_5_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_5_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_5);
  auto res_rc146_sm652_21342 = llf_add_float_32(merged_0_FIFO_buf609_lane_5_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_5_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_6_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_6_pack, merged_0_FIFO_buf609_lane_6);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_6_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_6_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_6);
  auto res_rc146_sm652_11340 = llf_add_float_32(merged_0_FIFO_buf609_lane_6_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_6_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_7_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_7_pack, merged_0_FIFO_buf609_lane_7);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_7_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_7_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_7);
  auto res_rc146_sm652_01338 = llf_add_float_32(merged_0_FIFO_buf609_lane_7_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_7_pack);
  hw_uint<256 > return_value1731;
  set_at<0, 256, 32>(return_value1731, res_rc146_sm652_71352);
  set_at<32, 256, 32>(return_value1731, res_rc146_sm652_61350);
  set_at<64, 256, 32>(return_value1731, res_rc146_sm652_51348);
  set_at<96, 256, 32>(return_value1731, res_rc146_sm652_41346);
  set_at<128, 256, 32>(return_value1731, res_rc146_sm652_31344);
  set_at<160, 256, 32>(return_value1731, res_rc146_sm652_21342);
  set_at<192, 256, 32>(return_value1731, res_rc146_sm652_11340);
  set_at<224, 256, 32>(return_value1731, res_rc146_sm652_01338);
  return return_value1731;

}

hw_uint<256> pw_math_merged_0_reconstruct_lp138_buf141147149_cu1733(hw_uint<32*8>& merged_0_reconstruct_lp138_buf141_FIFO_buf613) {
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<0, 31>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<32, 63>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<64, 95>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<96, 127>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_4 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<128, 159>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_5 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<160, 191>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_6 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<192, 223>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_7 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<224, 255>();

	
  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_71328 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_61326 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_51324 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_41322 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_4_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_4_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_4);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_31320 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_4_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_5_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_5_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_5);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_21318 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_5_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_6_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_6_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_6);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_11316 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_6_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_7_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_7_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_7);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_01314 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_7_pack);
  hw_uint<256 > return_value1734;
  set_at<0, 256, 32>(return_value1734, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_71328);
  set_at<32, 256, 32>(return_value1734, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_61326);
  set_at<64, 256, 32>(return_value1734, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_51324);
  set_at<96, 256, 32>(return_value1734, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_41322);
  set_at<128, 256, 32>(return_value1734, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_31320);
  set_at<160, 256, 32>(return_value1734, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_21318);
  set_at<192, 256, 32>(return_value1734, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_11316);
  set_at<224, 256, 32>(return_value1734, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm653_01314);
  return return_value1734;

}

hw_uint<128> gp_in1_158_cu1736(hw_uint<32*36>& in1_FIFO_buf577) {
  hw_uint<32> in1_FIFO_buf577_lane_0 = in1_FIFO_buf577.extract<0, 31>();
  hw_uint<32> in1_FIFO_buf577_lane_1 = in1_FIFO_buf577.extract<32, 63>();
  hw_uint<32> in1_FIFO_buf577_lane_2 = in1_FIFO_buf577.extract<64, 95>();
  hw_uint<32> in1_FIFO_buf577_lane_3 = in1_FIFO_buf577.extract<96, 127>();
  hw_uint<32> in1_FIFO_buf577_lane_4 = in1_FIFO_buf577.extract<128, 159>();
  hw_uint<32> in1_FIFO_buf577_lane_5 = in1_FIFO_buf577.extract<160, 191>();
  hw_uint<32> in1_FIFO_buf577_lane_6 = in1_FIFO_buf577.extract<192, 223>();
  hw_uint<32> in1_FIFO_buf577_lane_7 = in1_FIFO_buf577.extract<224, 255>();
  hw_uint<32> in1_FIFO_buf577_lane_8 = in1_FIFO_buf577.extract<256, 287>();
  hw_uint<32> in1_FIFO_buf577_lane_9 = in1_FIFO_buf577.extract<288, 319>();
  hw_uint<32> in1_FIFO_buf577_lane_10 = in1_FIFO_buf577.extract<320, 351>();
  hw_uint<32> in1_FIFO_buf577_lane_11 = in1_FIFO_buf577.extract<352, 383>();
  hw_uint<32> in1_FIFO_buf577_lane_12 = in1_FIFO_buf577.extract<384, 415>();
  hw_uint<32> in1_FIFO_buf577_lane_13 = in1_FIFO_buf577.extract<416, 447>();
  hw_uint<32> in1_FIFO_buf577_lane_14 = in1_FIFO_buf577.extract<448, 479>();
  hw_uint<32> in1_FIFO_buf577_lane_15 = in1_FIFO_buf577.extract<480, 511>();
  hw_uint<32> in1_FIFO_buf577_lane_16 = in1_FIFO_buf577.extract<512, 543>();
  hw_uint<32> in1_FIFO_buf577_lane_17 = in1_FIFO_buf577.extract<544, 575>();
  hw_uint<32> in1_FIFO_buf577_lane_18 = in1_FIFO_buf577.extract<576, 607>();
  hw_uint<32> in1_FIFO_buf577_lane_19 = in1_FIFO_buf577.extract<608, 639>();
  hw_uint<32> in1_FIFO_buf577_lane_20 = in1_FIFO_buf577.extract<640, 671>();
  hw_uint<32> in1_FIFO_buf577_lane_21 = in1_FIFO_buf577.extract<672, 703>();
  hw_uint<32> in1_FIFO_buf577_lane_22 = in1_FIFO_buf577.extract<704, 735>();
  hw_uint<32> in1_FIFO_buf577_lane_23 = in1_FIFO_buf577.extract<736, 767>();
  hw_uint<32> in1_FIFO_buf577_lane_24 = in1_FIFO_buf577.extract<768, 799>();
  hw_uint<32> in1_FIFO_buf577_lane_25 = in1_FIFO_buf577.extract<800, 831>();
  hw_uint<32> in1_FIFO_buf577_lane_26 = in1_FIFO_buf577.extract<832, 863>();
  hw_uint<32> in1_FIFO_buf577_lane_27 = in1_FIFO_buf577.extract<864, 895>();
  hw_uint<32> in1_FIFO_buf577_lane_28 = in1_FIFO_buf577.extract<896, 927>();
  hw_uint<32> in1_FIFO_buf577_lane_29 = in1_FIFO_buf577.extract<928, 959>();
  hw_uint<32> in1_FIFO_buf577_lane_30 = in1_FIFO_buf577.extract<960, 991>();
  hw_uint<32> in1_FIFO_buf577_lane_31 = in1_FIFO_buf577.extract<992, 1023>();
  hw_uint<32> in1_FIFO_buf577_lane_32 = in1_FIFO_buf577.extract<1024, 1055>();
  hw_uint<32> in1_FIFO_buf577_lane_33 = in1_FIFO_buf577.extract<1056, 1087>();
  hw_uint<32> in1_FIFO_buf577_lane_34 = in1_FIFO_buf577.extract<1088, 1119>();
  hw_uint<32> in1_FIFO_buf577_lane_35 = in1_FIFO_buf577.extract<1120, 1151>();

	
  hw_uint<288 > in1_FIFO_buf577_lane_8_pack;
  set_at<0, 288, 32>(in1_FIFO_buf577_lane_8_pack, in1_FIFO_buf577_lane_0);
  set_at<32, 288, 32>(in1_FIFO_buf577_lane_8_pack, in1_FIFO_buf577_lane_1);
  set_at<64, 288, 32>(in1_FIFO_buf577_lane_8_pack, in1_FIFO_buf577_lane_2);
  set_at<96, 288, 32>(in1_FIFO_buf577_lane_8_pack, in1_FIFO_buf577_lane_3);
  set_at<128, 288, 32>(in1_FIFO_buf577_lane_8_pack, in1_FIFO_buf577_lane_4);
  set_at<160, 288, 32>(in1_FIFO_buf577_lane_8_pack, in1_FIFO_buf577_lane_5);
  set_at<192, 288, 32>(in1_FIFO_buf577_lane_8_pack, in1_FIFO_buf577_lane_6);
  set_at<224, 288, 32>(in1_FIFO_buf577_lane_8_pack, in1_FIFO_buf577_lane_7);
  set_at<256, 288, 32>(in1_FIFO_buf577_lane_8_pack, in1_FIFO_buf577_lane_8);
  auto res_gp_in1_158_merged297_sm654_31530 = gp_in1_158_cu295(in1_FIFO_buf577_lane_8_pack);

  hw_uint<288 > in1_FIFO_buf577_lane_17_pack;
  set_at<0, 288, 32>(in1_FIFO_buf577_lane_17_pack, in1_FIFO_buf577_lane_9);
  set_at<32, 288, 32>(in1_FIFO_buf577_lane_17_pack, in1_FIFO_buf577_lane_10);
  set_at<64, 288, 32>(in1_FIFO_buf577_lane_17_pack, in1_FIFO_buf577_lane_11);
  set_at<96, 288, 32>(in1_FIFO_buf577_lane_17_pack, in1_FIFO_buf577_lane_12);
  set_at<128, 288, 32>(in1_FIFO_buf577_lane_17_pack, in1_FIFO_buf577_lane_13);
  set_at<160, 288, 32>(in1_FIFO_buf577_lane_17_pack, in1_FIFO_buf577_lane_14);
  set_at<192, 288, 32>(in1_FIFO_buf577_lane_17_pack, in1_FIFO_buf577_lane_15);
  set_at<224, 288, 32>(in1_FIFO_buf577_lane_17_pack, in1_FIFO_buf577_lane_16);
  set_at<256, 288, 32>(in1_FIFO_buf577_lane_17_pack, in1_FIFO_buf577_lane_17);
  auto res_gp_in1_158_merged297_sm654_21528 = gp_in1_158_cu295(in1_FIFO_buf577_lane_17_pack);

  hw_uint<288 > in1_FIFO_buf577_lane_26_pack;
  set_at<0, 288, 32>(in1_FIFO_buf577_lane_26_pack, in1_FIFO_buf577_lane_18);
  set_at<32, 288, 32>(in1_FIFO_buf577_lane_26_pack, in1_FIFO_buf577_lane_19);
  set_at<64, 288, 32>(in1_FIFO_buf577_lane_26_pack, in1_FIFO_buf577_lane_20);
  set_at<96, 288, 32>(in1_FIFO_buf577_lane_26_pack, in1_FIFO_buf577_lane_21);
  set_at<128, 288, 32>(in1_FIFO_buf577_lane_26_pack, in1_FIFO_buf577_lane_22);
  set_at<160, 288, 32>(in1_FIFO_buf577_lane_26_pack, in1_FIFO_buf577_lane_23);
  set_at<192, 288, 32>(in1_FIFO_buf577_lane_26_pack, in1_FIFO_buf577_lane_24);
  set_at<224, 288, 32>(in1_FIFO_buf577_lane_26_pack, in1_FIFO_buf577_lane_25);
  set_at<256, 288, 32>(in1_FIFO_buf577_lane_26_pack, in1_FIFO_buf577_lane_26);
  auto res_gp_in1_158_merged297_sm654_11526 = gp_in1_158_cu295(in1_FIFO_buf577_lane_26_pack);

  hw_uint<288 > in1_FIFO_buf577_lane_35_pack;
  set_at<0, 288, 32>(in1_FIFO_buf577_lane_35_pack, in1_FIFO_buf577_lane_27);
  set_at<32, 288, 32>(in1_FIFO_buf577_lane_35_pack, in1_FIFO_buf577_lane_28);
  set_at<64, 288, 32>(in1_FIFO_buf577_lane_35_pack, in1_FIFO_buf577_lane_29);
  set_at<96, 288, 32>(in1_FIFO_buf577_lane_35_pack, in1_FIFO_buf577_lane_30);
  set_at<128, 288, 32>(in1_FIFO_buf577_lane_35_pack, in1_FIFO_buf577_lane_31);
  set_at<160, 288, 32>(in1_FIFO_buf577_lane_35_pack, in1_FIFO_buf577_lane_32);
  set_at<192, 288, 32>(in1_FIFO_buf577_lane_35_pack, in1_FIFO_buf577_lane_33);
  set_at<224, 288, 32>(in1_FIFO_buf577_lane_35_pack, in1_FIFO_buf577_lane_34);
  set_at<256, 288, 32>(in1_FIFO_buf577_lane_35_pack, in1_FIFO_buf577_lane_35);
  auto res_gp_in1_158_merged297_sm654_01524 = gp_in1_158_cu295(in1_FIFO_buf577_lane_35_pack);
  hw_uint<128 > return_value1737;
  set_at<0, 128, 32>(return_value1737, res_gp_in1_158_merged297_sm654_31530);
  set_at<32, 128, 32>(return_value1737, res_gp_in1_158_merged297_sm654_21528);
  set_at<64, 128, 32>(return_value1737, res_gp_in1_158_merged297_sm654_11526);
  set_at<96, 128, 32>(return_value1737, res_gp_in1_158_merged297_sm654_01524);
  return return_value1737;

}

hw_uint<128> us_gp_in0_2_buf1642_cu1739(hw_uint<32*4>& gp_in0_2_buf16_FIFO_buf501) {
  return gp_in0_2_buf16_FIFO_buf501;
}

hw_uint<256> pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_cu1741(hw_uint<32*8>& lp_in0_0_buf52_FIFO_buf585, hw_uint<32*8>& lp_in1_0_buf100_FIFO_buf597) {
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_0 = lp_in0_0_buf52_FIFO_buf585.extract<0, 31>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_1 = lp_in0_0_buf52_FIFO_buf585.extract<32, 63>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_2 = lp_in0_0_buf52_FIFO_buf585.extract<64, 95>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_3 = lp_in0_0_buf52_FIFO_buf585.extract<96, 127>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_4 = lp_in0_0_buf52_FIFO_buf585.extract<128, 159>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_5 = lp_in0_0_buf52_FIFO_buf585.extract<160, 191>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_6 = lp_in0_0_buf52_FIFO_buf585.extract<192, 223>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_7 = lp_in0_0_buf52_FIFO_buf585.extract<224, 255>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_0 = lp_in1_0_buf100_FIFO_buf597.extract<0, 31>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_1 = lp_in1_0_buf100_FIFO_buf597.extract<32, 63>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_2 = lp_in1_0_buf100_FIFO_buf597.extract<64, 95>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_3 = lp_in1_0_buf100_FIFO_buf597.extract<96, 127>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_4 = lp_in1_0_buf100_FIFO_buf597.extract<128, 159>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_5 = lp_in1_0_buf100_FIFO_buf597.extract<160, 191>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_6 = lp_in1_0_buf100_FIFO_buf597.extract<192, 223>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_7 = lp_in1_0_buf100_FIFO_buf597.extract<224, 255>();

	
  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_0_pack, lp_in0_0_buf52_FIFO_buf585_lane_0);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_0_pack, lp_in1_0_buf100_FIFO_buf597_lane_0);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_71492 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_0_pack, lp_in1_0_buf100_FIFO_buf597_lane_0_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_1_pack, lp_in0_0_buf52_FIFO_buf585_lane_1);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_1_pack, lp_in1_0_buf100_FIFO_buf597_lane_1);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_61490 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_1_pack, lp_in1_0_buf100_FIFO_buf597_lane_1_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_2_pack, lp_in0_0_buf52_FIFO_buf585_lane_2);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_2_pack, lp_in1_0_buf100_FIFO_buf597_lane_2);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_51488 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_2_pack, lp_in1_0_buf100_FIFO_buf597_lane_2_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_3_pack, lp_in0_0_buf52_FIFO_buf585_lane_3);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_3_pack, lp_in1_0_buf100_FIFO_buf597_lane_3);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_41486 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_3_pack, lp_in1_0_buf100_FIFO_buf597_lane_3_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_4_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_4_pack, lp_in0_0_buf52_FIFO_buf585_lane_4);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_4_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_4_pack, lp_in1_0_buf100_FIFO_buf597_lane_4);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_31484 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_4_pack, lp_in1_0_buf100_FIFO_buf597_lane_4_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_5_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_5_pack, lp_in0_0_buf52_FIFO_buf585_lane_5);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_5_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_5_pack, lp_in1_0_buf100_FIFO_buf597_lane_5);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_21482 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_5_pack, lp_in1_0_buf100_FIFO_buf597_lane_5_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_6_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_6_pack, lp_in0_0_buf52_FIFO_buf585_lane_6);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_6_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_6_pack, lp_in1_0_buf100_FIFO_buf597_lane_6);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_11480 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_6_pack, lp_in1_0_buf100_FIFO_buf597_lane_6_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_7_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_7_pack, lp_in0_0_buf52_FIFO_buf585_lane_7);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_7_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_7_pack, lp_in1_0_buf100_FIFO_buf597_lane_7);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_01478 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_7_pack, lp_in1_0_buf100_FIFO_buf597_lane_7_pack);
  hw_uint<256 > return_value1742;
  set_at<0, 256, 32>(return_value1742, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_71492);
  set_at<32, 256, 32>(return_value1742, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_61490);
  set_at<64, 256, 32>(return_value1742, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_51488);
  set_at<96, 256, 32>(return_value1742, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_41486);
  set_at<128, 256, 32>(return_value1742, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_31484);
  set_at<160, 256, 32>(return_value1742, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_21482);
  set_at<192, 256, 32>(return_value1742, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_11480);
  set_at<224, 256, 32>(return_value1742, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm656_01478);
  return return_value1742;

}

hw_uint<64> lp_in0_238_cu1744(hw_uint<32*2>& gp_in0_2_buf16_FIFO_buf505, hw_uint<32*2>& gp_in0_3_buf24_us32_FIFO_buf521) {
  hw_uint<32> gp_in0_2_buf16_FIFO_buf505_lane_0 = gp_in0_2_buf16_FIFO_buf505.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf505_lane_1 = gp_in0_2_buf16_FIFO_buf505.extract<32, 63>();
  hw_uint<32> gp_in0_3_buf24_us32_FIFO_buf521_lane_0 = gp_in0_3_buf24_us32_FIFO_buf521.extract<0, 31>();
  hw_uint<32> gp_in0_3_buf24_us32_FIFO_buf521_lane_1 = gp_in0_3_buf24_us32_FIFO_buf521.extract<32, 63>();

	
  hw_uint<32 > gp_in0_2_buf16_FIFO_buf505_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_FIFO_buf505_lane_0_pack, gp_in0_2_buf16_FIFO_buf505_lane_0);
  hw_uint<32 > gp_in0_3_buf24_us32_FIFO_buf521_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_FIFO_buf521_lane_0_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_0);
  auto res_diff39_sm657_11588 = llf_diff_float_32(gp_in0_2_buf16_FIFO_buf505_lane_0_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_0_pack);

  hw_uint<32 > gp_in0_2_buf16_FIFO_buf505_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_FIFO_buf505_lane_1_pack, gp_in0_2_buf16_FIFO_buf505_lane_1);
  hw_uint<32 > gp_in0_3_buf24_us32_FIFO_buf521_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_FIFO_buf521_lane_1_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_1);
  auto res_diff39_sm657_01586 = llf_diff_float_32(gp_in0_2_buf16_FIFO_buf505_lane_1_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_1_pack);
  hw_uint<64 > return_value1745;
  set_at<0, 64, 32>(return_value1745, res_diff39_sm657_11588);
  set_at<32, 64, 32>(return_value1745, res_diff39_sm657_01586);
  return return_value1745;

}

hw_uint<64> lp_in1_286_cu1747(hw_uint<32*2>& gp_in1_2_buf64_FIFO_buf541, hw_uint<32*2>& gp_in1_3_buf72_us80_FIFO_buf565) {
  hw_uint<32> gp_in1_2_buf64_FIFO_buf541_lane_0 = gp_in1_2_buf64_FIFO_buf541.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf541_lane_1 = gp_in1_2_buf64_FIFO_buf541.extract<32, 63>();
  hw_uint<32> gp_in1_3_buf72_us80_FIFO_buf565_lane_0 = gp_in1_3_buf72_us80_FIFO_buf565.extract<0, 31>();
  hw_uint<32> gp_in1_3_buf72_us80_FIFO_buf565_lane_1 = gp_in1_3_buf72_us80_FIFO_buf565.extract<32, 63>();

	
  hw_uint<32 > gp_in1_2_buf64_FIFO_buf541_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_FIFO_buf541_lane_0_pack, gp_in1_2_buf64_FIFO_buf541_lane_0);
  hw_uint<32 > gp_in1_3_buf72_us80_FIFO_buf565_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_FIFO_buf565_lane_0_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_0);
  auto res_diff87_sm659_11358 = llf_diff_float_32(gp_in1_2_buf64_FIFO_buf541_lane_0_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_0_pack);

  hw_uint<32 > gp_in1_2_buf64_FIFO_buf541_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_FIFO_buf541_lane_1_pack, gp_in1_2_buf64_FIFO_buf541_lane_1);
  hw_uint<32 > gp_in1_3_buf72_us80_FIFO_buf565_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_FIFO_buf565_lane_1_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_1);
  auto res_diff87_sm659_01356 = llf_diff_float_32(gp_in1_2_buf64_FIFO_buf541_lane_1_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_1_pack);
  hw_uint<64 > return_value1748;
  set_at<0, 64, 32>(return_value1748, res_diff87_sm659_11358);
  set_at<32, 64, 32>(return_value1748, res_diff87_sm659_01356);
  return return_value1748;

}

hw_uint<128> gp_in0_110_cu1750(hw_uint<32*36>& in0_FIFO_buf569) {
  hw_uint<32> in0_FIFO_buf569_lane_0 = in0_FIFO_buf569.extract<0, 31>();
  hw_uint<32> in0_FIFO_buf569_lane_1 = in0_FIFO_buf569.extract<32, 63>();
  hw_uint<32> in0_FIFO_buf569_lane_2 = in0_FIFO_buf569.extract<64, 95>();
  hw_uint<32> in0_FIFO_buf569_lane_3 = in0_FIFO_buf569.extract<96, 127>();
  hw_uint<32> in0_FIFO_buf569_lane_4 = in0_FIFO_buf569.extract<128, 159>();
  hw_uint<32> in0_FIFO_buf569_lane_5 = in0_FIFO_buf569.extract<160, 191>();
  hw_uint<32> in0_FIFO_buf569_lane_6 = in0_FIFO_buf569.extract<192, 223>();
  hw_uint<32> in0_FIFO_buf569_lane_7 = in0_FIFO_buf569.extract<224, 255>();
  hw_uint<32> in0_FIFO_buf569_lane_8 = in0_FIFO_buf569.extract<256, 287>();
  hw_uint<32> in0_FIFO_buf569_lane_9 = in0_FIFO_buf569.extract<288, 319>();
  hw_uint<32> in0_FIFO_buf569_lane_10 = in0_FIFO_buf569.extract<320, 351>();
  hw_uint<32> in0_FIFO_buf569_lane_11 = in0_FIFO_buf569.extract<352, 383>();
  hw_uint<32> in0_FIFO_buf569_lane_12 = in0_FIFO_buf569.extract<384, 415>();
  hw_uint<32> in0_FIFO_buf569_lane_13 = in0_FIFO_buf569.extract<416, 447>();
  hw_uint<32> in0_FIFO_buf569_lane_14 = in0_FIFO_buf569.extract<448, 479>();
  hw_uint<32> in0_FIFO_buf569_lane_15 = in0_FIFO_buf569.extract<480, 511>();
  hw_uint<32> in0_FIFO_buf569_lane_16 = in0_FIFO_buf569.extract<512, 543>();
  hw_uint<32> in0_FIFO_buf569_lane_17 = in0_FIFO_buf569.extract<544, 575>();
  hw_uint<32> in0_FIFO_buf569_lane_18 = in0_FIFO_buf569.extract<576, 607>();
  hw_uint<32> in0_FIFO_buf569_lane_19 = in0_FIFO_buf569.extract<608, 639>();
  hw_uint<32> in0_FIFO_buf569_lane_20 = in0_FIFO_buf569.extract<640, 671>();
  hw_uint<32> in0_FIFO_buf569_lane_21 = in0_FIFO_buf569.extract<672, 703>();
  hw_uint<32> in0_FIFO_buf569_lane_22 = in0_FIFO_buf569.extract<704, 735>();
  hw_uint<32> in0_FIFO_buf569_lane_23 = in0_FIFO_buf569.extract<736, 767>();
  hw_uint<32> in0_FIFO_buf569_lane_24 = in0_FIFO_buf569.extract<768, 799>();
  hw_uint<32> in0_FIFO_buf569_lane_25 = in0_FIFO_buf569.extract<800, 831>();
  hw_uint<32> in0_FIFO_buf569_lane_26 = in0_FIFO_buf569.extract<832, 863>();
  hw_uint<32> in0_FIFO_buf569_lane_27 = in0_FIFO_buf569.extract<864, 895>();
  hw_uint<32> in0_FIFO_buf569_lane_28 = in0_FIFO_buf569.extract<896, 927>();
  hw_uint<32> in0_FIFO_buf569_lane_29 = in0_FIFO_buf569.extract<928, 959>();
  hw_uint<32> in0_FIFO_buf569_lane_30 = in0_FIFO_buf569.extract<960, 991>();
  hw_uint<32> in0_FIFO_buf569_lane_31 = in0_FIFO_buf569.extract<992, 1023>();
  hw_uint<32> in0_FIFO_buf569_lane_32 = in0_FIFO_buf569.extract<1024, 1055>();
  hw_uint<32> in0_FIFO_buf569_lane_33 = in0_FIFO_buf569.extract<1056, 1087>();
  hw_uint<32> in0_FIFO_buf569_lane_34 = in0_FIFO_buf569.extract<1088, 1119>();
  hw_uint<32> in0_FIFO_buf569_lane_35 = in0_FIFO_buf569.extract<1120, 1151>();

	
  hw_uint<288 > in0_FIFO_buf569_lane_8_pack;
  set_at<0, 288, 32>(in0_FIFO_buf569_lane_8_pack, in0_FIFO_buf569_lane_0);
  set_at<32, 288, 32>(in0_FIFO_buf569_lane_8_pack, in0_FIFO_buf569_lane_1);
  set_at<64, 288, 32>(in0_FIFO_buf569_lane_8_pack, in0_FIFO_buf569_lane_2);
  set_at<96, 288, 32>(in0_FIFO_buf569_lane_8_pack, in0_FIFO_buf569_lane_3);
  set_at<128, 288, 32>(in0_FIFO_buf569_lane_8_pack, in0_FIFO_buf569_lane_4);
  set_at<160, 288, 32>(in0_FIFO_buf569_lane_8_pack, in0_FIFO_buf569_lane_5);
  set_at<192, 288, 32>(in0_FIFO_buf569_lane_8_pack, in0_FIFO_buf569_lane_6);
  set_at<224, 288, 32>(in0_FIFO_buf569_lane_8_pack, in0_FIFO_buf569_lane_7);
  set_at<256, 288, 32>(in0_FIFO_buf569_lane_8_pack, in0_FIFO_buf569_lane_8);
  auto res_gp_in0_110_merged303_sm660_31556 = gp_in0_110_cu301(in0_FIFO_buf569_lane_8_pack);

  hw_uint<288 > in0_FIFO_buf569_lane_17_pack;
  set_at<0, 288, 32>(in0_FIFO_buf569_lane_17_pack, in0_FIFO_buf569_lane_9);
  set_at<32, 288, 32>(in0_FIFO_buf569_lane_17_pack, in0_FIFO_buf569_lane_10);
  set_at<64, 288, 32>(in0_FIFO_buf569_lane_17_pack, in0_FIFO_buf569_lane_11);
  set_at<96, 288, 32>(in0_FIFO_buf569_lane_17_pack, in0_FIFO_buf569_lane_12);
  set_at<128, 288, 32>(in0_FIFO_buf569_lane_17_pack, in0_FIFO_buf569_lane_13);
  set_at<160, 288, 32>(in0_FIFO_buf569_lane_17_pack, in0_FIFO_buf569_lane_14);
  set_at<192, 288, 32>(in0_FIFO_buf569_lane_17_pack, in0_FIFO_buf569_lane_15);
  set_at<224, 288, 32>(in0_FIFO_buf569_lane_17_pack, in0_FIFO_buf569_lane_16);
  set_at<256, 288, 32>(in0_FIFO_buf569_lane_17_pack, in0_FIFO_buf569_lane_17);
  auto res_gp_in0_110_merged303_sm660_21554 = gp_in0_110_cu301(in0_FIFO_buf569_lane_17_pack);

  hw_uint<288 > in0_FIFO_buf569_lane_26_pack;
  set_at<0, 288, 32>(in0_FIFO_buf569_lane_26_pack, in0_FIFO_buf569_lane_18);
  set_at<32, 288, 32>(in0_FIFO_buf569_lane_26_pack, in0_FIFO_buf569_lane_19);
  set_at<64, 288, 32>(in0_FIFO_buf569_lane_26_pack, in0_FIFO_buf569_lane_20);
  set_at<96, 288, 32>(in0_FIFO_buf569_lane_26_pack, in0_FIFO_buf569_lane_21);
  set_at<128, 288, 32>(in0_FIFO_buf569_lane_26_pack, in0_FIFO_buf569_lane_22);
  set_at<160, 288, 32>(in0_FIFO_buf569_lane_26_pack, in0_FIFO_buf569_lane_23);
  set_at<192, 288, 32>(in0_FIFO_buf569_lane_26_pack, in0_FIFO_buf569_lane_24);
  set_at<224, 288, 32>(in0_FIFO_buf569_lane_26_pack, in0_FIFO_buf569_lane_25);
  set_at<256, 288, 32>(in0_FIFO_buf569_lane_26_pack, in0_FIFO_buf569_lane_26);
  auto res_gp_in0_110_merged303_sm660_11552 = gp_in0_110_cu301(in0_FIFO_buf569_lane_26_pack);

  hw_uint<288 > in0_FIFO_buf569_lane_35_pack;
  set_at<0, 288, 32>(in0_FIFO_buf569_lane_35_pack, in0_FIFO_buf569_lane_27);
  set_at<32, 288, 32>(in0_FIFO_buf569_lane_35_pack, in0_FIFO_buf569_lane_28);
  set_at<64, 288, 32>(in0_FIFO_buf569_lane_35_pack, in0_FIFO_buf569_lane_29);
  set_at<96, 288, 32>(in0_FIFO_buf569_lane_35_pack, in0_FIFO_buf569_lane_30);
  set_at<128, 288, 32>(in0_FIFO_buf569_lane_35_pack, in0_FIFO_buf569_lane_31);
  set_at<160, 288, 32>(in0_FIFO_buf569_lane_35_pack, in0_FIFO_buf569_lane_32);
  set_at<192, 288, 32>(in0_FIFO_buf569_lane_35_pack, in0_FIFO_buf569_lane_33);
  set_at<224, 288, 32>(in0_FIFO_buf569_lane_35_pack, in0_FIFO_buf569_lane_34);
  set_at<256, 288, 32>(in0_FIFO_buf569_lane_35_pack, in0_FIFO_buf569_lane_35);
  auto res_gp_in0_110_merged303_sm660_01550 = gp_in0_110_cu301(in0_FIFO_buf569_lane_35_pack);
  hw_uint<128 > return_value1751;
  set_at<0, 128, 32>(return_value1751, res_gp_in0_110_merged303_sm660_31556);
  set_at<32, 128, 32>(return_value1751, res_gp_in0_110_merged303_sm660_21554);
  set_at<64, 128, 32>(return_value1751, res_gp_in0_110_merged303_sm660_11552);
  set_at<96, 128, 32>(return_value1751, res_gp_in0_110_merged303_sm660_01550);
  return return_value1751;

}

hw_uint<64> gp_in0_218_cu1753(hw_uint<32*18>& gp_in0_1_buf8_FIFO_buf481) {
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_0 = gp_in0_1_buf8_FIFO_buf481.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_1 = gp_in0_1_buf8_FIFO_buf481.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_2 = gp_in0_1_buf8_FIFO_buf481.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_3 = gp_in0_1_buf8_FIFO_buf481.extract<96, 127>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_4 = gp_in0_1_buf8_FIFO_buf481.extract<128, 159>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_5 = gp_in0_1_buf8_FIFO_buf481.extract<160, 191>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_6 = gp_in0_1_buf8_FIFO_buf481.extract<192, 223>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_7 = gp_in0_1_buf8_FIFO_buf481.extract<224, 255>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_8 = gp_in0_1_buf8_FIFO_buf481.extract<256, 287>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_9 = gp_in0_1_buf8_FIFO_buf481.extract<288, 319>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_10 = gp_in0_1_buf8_FIFO_buf481.extract<320, 351>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_11 = gp_in0_1_buf8_FIFO_buf481.extract<352, 383>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_12 = gp_in0_1_buf8_FIFO_buf481.extract<384, 415>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_13 = gp_in0_1_buf8_FIFO_buf481.extract<416, 447>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_14 = gp_in0_1_buf8_FIFO_buf481.extract<448, 479>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_15 = gp_in0_1_buf8_FIFO_buf481.extract<480, 511>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_16 = gp_in0_1_buf8_FIFO_buf481.extract<512, 543>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_17 = gp_in0_1_buf8_FIFO_buf481.extract<544, 575>();

	
  hw_uint<288 > gp_in0_1_buf8_FIFO_buf481_lane_8_pack;
  set_at<0, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_8_pack, gp_in0_1_buf8_FIFO_buf481_lane_0);
  set_at<32, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_8_pack, gp_in0_1_buf8_FIFO_buf481_lane_1);
  set_at<64, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_8_pack, gp_in0_1_buf8_FIFO_buf481_lane_2);
  set_at<96, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_8_pack, gp_in0_1_buf8_FIFO_buf481_lane_3);
  set_at<128, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_8_pack, gp_in0_1_buf8_FIFO_buf481_lane_4);
  set_at<160, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_8_pack, gp_in0_1_buf8_FIFO_buf481_lane_5);
  set_at<192, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_8_pack, gp_in0_1_buf8_FIFO_buf481_lane_6);
  set_at<224, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_8_pack, gp_in0_1_buf8_FIFO_buf481_lane_7);
  set_at<256, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_8_pack, gp_in0_1_buf8_FIFO_buf481_lane_8);
  auto res_gp_in0_218_merged306_sm661_11560 = gp_in0_218_cu304(gp_in0_1_buf8_FIFO_buf481_lane_8_pack);

  hw_uint<288 > gp_in0_1_buf8_FIFO_buf481_lane_17_pack;
  set_at<0, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_17_pack, gp_in0_1_buf8_FIFO_buf481_lane_9);
  set_at<32, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_17_pack, gp_in0_1_buf8_FIFO_buf481_lane_10);
  set_at<64, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_17_pack, gp_in0_1_buf8_FIFO_buf481_lane_11);
  set_at<96, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_17_pack, gp_in0_1_buf8_FIFO_buf481_lane_12);
  set_at<128, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_17_pack, gp_in0_1_buf8_FIFO_buf481_lane_13);
  set_at<160, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_17_pack, gp_in0_1_buf8_FIFO_buf481_lane_14);
  set_at<192, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_17_pack, gp_in0_1_buf8_FIFO_buf481_lane_15);
  set_at<224, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_17_pack, gp_in0_1_buf8_FIFO_buf481_lane_16);
  set_at<256, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_17_pack, gp_in0_1_buf8_FIFO_buf481_lane_17);
  auto res_gp_in0_218_merged306_sm661_01558 = gp_in0_218_cu304(gp_in0_1_buf8_FIFO_buf481_lane_17_pack);
  hw_uint<64 > return_value1754;
  set_at<0, 64, 32>(return_value1754, res_gp_in0_218_merged306_sm661_11560);
  set_at<32, 64, 32>(return_value1754, res_gp_in0_218_merged306_sm661_01558);
  return return_value1754;

}

hw_uint<64> merged_2_reconstruct_lp120122_cu1756(hw_uint<32*2>& merged_2_FIFO_buf629, hw_uint<32*2>& merged_3_us124_FIFO_buf645) {
  hw_uint<32> merged_2_FIFO_buf629_lane_0 = merged_2_FIFO_buf629.extract<0, 31>();
  hw_uint<32> merged_2_FIFO_buf629_lane_1 = merged_2_FIFO_buf629.extract<32, 63>();
  hw_uint<32> merged_3_us124_FIFO_buf645_lane_0 = merged_3_us124_FIFO_buf645.extract<0, 31>();
  hw_uint<32> merged_3_us124_FIFO_buf645_lane_1 = merged_3_us124_FIFO_buf645.extract<32, 63>();

	
  hw_uint<32 > merged_2_FIFO_buf629_lane_0_pack;
  set_at<0, 32, 32>(merged_2_FIFO_buf629_lane_0_pack, merged_2_FIFO_buf629_lane_0);
  hw_uint<32 > merged_3_us124_FIFO_buf645_lane_0_pack;
  set_at<0, 32, 32>(merged_3_us124_FIFO_buf645_lane_0_pack, merged_3_us124_FIFO_buf645_lane_0);
  auto res_rc128_sm662_11514 = llf_add_float_32(merged_2_FIFO_buf629_lane_0_pack, merged_3_us124_FIFO_buf645_lane_0_pack);

  hw_uint<32 > merged_2_FIFO_buf629_lane_1_pack;
  set_at<0, 32, 32>(merged_2_FIFO_buf629_lane_1_pack, merged_2_FIFO_buf629_lane_1);
  hw_uint<32 > merged_3_us124_FIFO_buf645_lane_1_pack;
  set_at<0, 32, 32>(merged_3_us124_FIFO_buf645_lane_1_pack, merged_3_us124_FIFO_buf645_lane_1);
  auto res_rc128_sm662_01512 = llf_add_float_32(merged_2_FIFO_buf629_lane_1_pack, merged_3_us124_FIFO_buf645_lane_1_pack);
  hw_uint<64 > return_value1757;
  set_at<0, 64, 32>(return_value1757, res_rc128_sm662_11514);
  set_at<32, 64, 32>(return_value1757, res_rc128_sm662_01512);
  return return_value1757;

}

hw_uint<128> us_merged_2_reconstruct_lp120_buf123135_cu1759(hw_uint<32*4>& merged_2_reconstruct_lp120_buf123_FIFO_buf633) {
  return merged_2_reconstruct_lp120_buf123_FIFO_buf633;
}

hw_uint<64> gp_in1_266_cu1761(hw_uint<32*18>& gp_in1_1_buf56_FIFO_buf533) {
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_0 = gp_in1_1_buf56_FIFO_buf533.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_1 = gp_in1_1_buf56_FIFO_buf533.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_2 = gp_in1_1_buf56_FIFO_buf533.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_3 = gp_in1_1_buf56_FIFO_buf533.extract<96, 127>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_4 = gp_in1_1_buf56_FIFO_buf533.extract<128, 159>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_5 = gp_in1_1_buf56_FIFO_buf533.extract<160, 191>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_6 = gp_in1_1_buf56_FIFO_buf533.extract<192, 223>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_7 = gp_in1_1_buf56_FIFO_buf533.extract<224, 255>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_8 = gp_in1_1_buf56_FIFO_buf533.extract<256, 287>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_9 = gp_in1_1_buf56_FIFO_buf533.extract<288, 319>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_10 = gp_in1_1_buf56_FIFO_buf533.extract<320, 351>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_11 = gp_in1_1_buf56_FIFO_buf533.extract<352, 383>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_12 = gp_in1_1_buf56_FIFO_buf533.extract<384, 415>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_13 = gp_in1_1_buf56_FIFO_buf533.extract<416, 447>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_14 = gp_in1_1_buf56_FIFO_buf533.extract<448, 479>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_15 = gp_in1_1_buf56_FIFO_buf533.extract<480, 511>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_16 = gp_in1_1_buf56_FIFO_buf533.extract<512, 543>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_17 = gp_in1_1_buf56_FIFO_buf533.extract<544, 575>();

	
  hw_uint<288 > gp_in1_1_buf56_FIFO_buf533_lane_8_pack;
  set_at<0, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_8_pack, gp_in1_1_buf56_FIFO_buf533_lane_0);
  set_at<32, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_8_pack, gp_in1_1_buf56_FIFO_buf533_lane_1);
  set_at<64, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_8_pack, gp_in1_1_buf56_FIFO_buf533_lane_2);
  set_at<96, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_8_pack, gp_in1_1_buf56_FIFO_buf533_lane_3);
  set_at<128, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_8_pack, gp_in1_1_buf56_FIFO_buf533_lane_4);
  set_at<160, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_8_pack, gp_in1_1_buf56_FIFO_buf533_lane_5);
  set_at<192, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_8_pack, gp_in1_1_buf56_FIFO_buf533_lane_6);
  set_at<224, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_8_pack, gp_in1_1_buf56_FIFO_buf533_lane_7);
  set_at<256, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_8_pack, gp_in1_1_buf56_FIFO_buf533_lane_8);
  auto res_gp_in1_266_merged309_sm664_11468 = gp_in1_266_cu307(gp_in1_1_buf56_FIFO_buf533_lane_8_pack);

  hw_uint<288 > gp_in1_1_buf56_FIFO_buf533_lane_17_pack;
  set_at<0, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_17_pack, gp_in1_1_buf56_FIFO_buf533_lane_9);
  set_at<32, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_17_pack, gp_in1_1_buf56_FIFO_buf533_lane_10);
  set_at<64, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_17_pack, gp_in1_1_buf56_FIFO_buf533_lane_11);
  set_at<96, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_17_pack, gp_in1_1_buf56_FIFO_buf533_lane_12);
  set_at<128, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_17_pack, gp_in1_1_buf56_FIFO_buf533_lane_13);
  set_at<160, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_17_pack, gp_in1_1_buf56_FIFO_buf533_lane_14);
  set_at<192, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_17_pack, gp_in1_1_buf56_FIFO_buf533_lane_15);
  set_at<224, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_17_pack, gp_in1_1_buf56_FIFO_buf533_lane_16);
  set_at<256, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_17_pack, gp_in1_1_buf56_FIFO_buf533_lane_17);
  auto res_gp_in1_266_merged309_sm664_01466 = gp_in1_266_cu307(gp_in1_1_buf56_FIFO_buf533_lane_17_pack);
  hw_uint<64 > return_value1762;
  set_at<0, 64, 32>(return_value1762, res_gp_in1_266_merged309_sm664_11468);
  set_at<32, 64, 32>(return_value1762, res_gp_in1_266_merged309_sm664_01466);
  return return_value1762;

}

hw_uint<128> pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_cu1764(hw_uint<32*4>& lp_in0_1_buf44_FIFO_buf589, hw_uint<32*4>& lp_in1_1_buf92_FIFO_buf601) {
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_0 = lp_in0_1_buf44_FIFO_buf589.extract<0, 31>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_1 = lp_in0_1_buf44_FIFO_buf589.extract<32, 63>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_2 = lp_in0_1_buf44_FIFO_buf589.extract<64, 95>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_3 = lp_in0_1_buf44_FIFO_buf589.extract<96, 127>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_0 = lp_in1_1_buf92_FIFO_buf601.extract<0, 31>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_1 = lp_in1_1_buf92_FIFO_buf601.extract<32, 63>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_2 = lp_in1_1_buf92_FIFO_buf601.extract<64, 95>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_3 = lp_in1_1_buf92_FIFO_buf601.extract<96, 127>();

	
  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_0_pack, lp_in0_1_buf44_FIFO_buf589_lane_0);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_0_pack, lp_in1_1_buf92_FIFO_buf601_lane_0);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm665_31476 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_0_pack, lp_in1_1_buf92_FIFO_buf601_lane_0_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_1_pack, lp_in0_1_buf44_FIFO_buf589_lane_1);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_1_pack, lp_in1_1_buf92_FIFO_buf601_lane_1);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm665_21474 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_1_pack, lp_in1_1_buf92_FIFO_buf601_lane_1_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_2_pack, lp_in0_1_buf44_FIFO_buf589_lane_2);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_2_pack, lp_in1_1_buf92_FIFO_buf601_lane_2);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm665_11472 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_2_pack, lp_in1_1_buf92_FIFO_buf601_lane_2_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_3_pack, lp_in0_1_buf44_FIFO_buf589_lane_3);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_3_pack, lp_in1_1_buf92_FIFO_buf601_lane_3);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm665_01470 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_3_pack, lp_in1_1_buf92_FIFO_buf601_lane_3_pack);
  hw_uint<128 > return_value1765;
  set_at<0, 128, 32>(return_value1765, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm665_31476);
  set_at<32, 128, 32>(return_value1765, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm665_21474);
  set_at<64, 128, 32>(return_value1765, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm665_11472);
  set_at<96, 128, 32>(return_value1765, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm665_01470);
  return return_value1765;

}

hw_uint<64> pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114_cu1767(hw_uint<32*2>& lp_in0_2_buf36_FIFO_buf593, hw_uint<32*2>& lp_in1_2_buf84_FIFO_buf605) {
  hw_uint<32> lp_in0_2_buf36_FIFO_buf593_lane_0 = lp_in0_2_buf36_FIFO_buf593.extract<0, 31>();
  hw_uint<32> lp_in0_2_buf36_FIFO_buf593_lane_1 = lp_in0_2_buf36_FIFO_buf593.extract<32, 63>();
  hw_uint<32> lp_in1_2_buf84_FIFO_buf605_lane_0 = lp_in1_2_buf84_FIFO_buf605.extract<0, 31>();
  hw_uint<32> lp_in1_2_buf84_FIFO_buf605_lane_1 = lp_in1_2_buf84_FIFO_buf605.extract<32, 63>();

	
  hw_uint<32 > lp_in0_2_buf36_FIFO_buf593_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_FIFO_buf593_lane_0_pack, lp_in0_2_buf36_FIFO_buf593_lane_0);
  hw_uint<32 > lp_in1_2_buf84_FIFO_buf605_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_FIFO_buf605_lane_0_pack, lp_in1_2_buf84_FIFO_buf605_lane_0);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm666_11436 = llf_float_average(lp_in0_2_buf36_FIFO_buf593_lane_0_pack, lp_in1_2_buf84_FIFO_buf605_lane_0_pack);

  hw_uint<32 > lp_in0_2_buf36_FIFO_buf593_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_FIFO_buf593_lane_1_pack, lp_in0_2_buf36_FIFO_buf593_lane_1);
  hw_uint<32 > lp_in1_2_buf84_FIFO_buf605_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_FIFO_buf605_lane_1_pack, lp_in1_2_buf84_FIFO_buf605_lane_1);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm666_01434 = llf_float_average(lp_in0_2_buf36_FIFO_buf593_lane_1_pack, lp_in1_2_buf84_FIFO_buf605_lane_1_pack);
  hw_uint<64 > return_value1768;
  set_at<0, 64, 32>(return_value1768, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm666_11436);
  set_at<32, 64, 32>(return_value1768, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm666_01434);
  return return_value1768;

}

hw_uint<256> lp_in0_054_cu1770(hw_uint<32*8>& gp_in0_1_buf8_us48_FIFO_buf493, hw_uint<32*8>& in0_FIFO_buf573) {
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_0 = gp_in0_1_buf8_us48_FIFO_buf493.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_1 = gp_in0_1_buf8_us48_FIFO_buf493.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_2 = gp_in0_1_buf8_us48_FIFO_buf493.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_3 = gp_in0_1_buf8_us48_FIFO_buf493.extract<96, 127>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_4 = gp_in0_1_buf8_us48_FIFO_buf493.extract<128, 159>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_5 = gp_in0_1_buf8_us48_FIFO_buf493.extract<160, 191>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_6 = gp_in0_1_buf8_us48_FIFO_buf493.extract<192, 223>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_7 = gp_in0_1_buf8_us48_FIFO_buf493.extract<224, 255>();
  hw_uint<32> in0_FIFO_buf573_lane_0 = in0_FIFO_buf573.extract<0, 31>();
  hw_uint<32> in0_FIFO_buf573_lane_1 = in0_FIFO_buf573.extract<32, 63>();
  hw_uint<32> in0_FIFO_buf573_lane_2 = in0_FIFO_buf573.extract<64, 95>();
  hw_uint<32> in0_FIFO_buf573_lane_3 = in0_FIFO_buf573.extract<96, 127>();
  hw_uint<32> in0_FIFO_buf573_lane_4 = in0_FIFO_buf573.extract<128, 159>();
  hw_uint<32> in0_FIFO_buf573_lane_5 = in0_FIFO_buf573.extract<160, 191>();
  hw_uint<32> in0_FIFO_buf573_lane_6 = in0_FIFO_buf573.extract<192, 223>();
  hw_uint<32> in0_FIFO_buf573_lane_7 = in0_FIFO_buf573.extract<224, 255>();

	
  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_0);
  hw_uint<32 > in0_FIFO_buf573_lane_0_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_0_pack, in0_FIFO_buf573_lane_0);
  auto res_diff55_sm667_71452 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack, in0_FIFO_buf573_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_1);
  hw_uint<32 > in0_FIFO_buf573_lane_1_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_1_pack, in0_FIFO_buf573_lane_1);
  auto res_diff55_sm667_61450 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack, in0_FIFO_buf573_lane_1_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_2_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_2);
  hw_uint<32 > in0_FIFO_buf573_lane_2_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_2_pack, in0_FIFO_buf573_lane_2);
  auto res_diff55_sm667_51448 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_2_pack, in0_FIFO_buf573_lane_2_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_3_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_3);
  hw_uint<32 > in0_FIFO_buf573_lane_3_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_3_pack, in0_FIFO_buf573_lane_3);
  auto res_diff55_sm667_41446 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_3_pack, in0_FIFO_buf573_lane_3_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_4_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_4_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_4);
  hw_uint<32 > in0_FIFO_buf573_lane_4_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_4_pack, in0_FIFO_buf573_lane_4);
  auto res_diff55_sm667_31444 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_4_pack, in0_FIFO_buf573_lane_4_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_5_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_5_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_5);
  hw_uint<32 > in0_FIFO_buf573_lane_5_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_5_pack, in0_FIFO_buf573_lane_5);
  auto res_diff55_sm667_21442 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_5_pack, in0_FIFO_buf573_lane_5_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_6_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_6_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_6);
  hw_uint<32 > in0_FIFO_buf573_lane_6_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_6_pack, in0_FIFO_buf573_lane_6);
  auto res_diff55_sm667_11440 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_6_pack, in0_FIFO_buf573_lane_6_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_7_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_7_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_7);
  hw_uint<32 > in0_FIFO_buf573_lane_7_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_7_pack, in0_FIFO_buf573_lane_7);
  auto res_diff55_sm667_01438 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_7_pack, in0_FIFO_buf573_lane_7_pack);
  hw_uint<256 > return_value1771;
  set_at<0, 256, 32>(return_value1771, res_diff55_sm667_71452);
  set_at<32, 256, 32>(return_value1771, res_diff55_sm667_61450);
  set_at<64, 256, 32>(return_value1771, res_diff55_sm667_51448);
  set_at<96, 256, 32>(return_value1771, res_diff55_sm667_41446);
  set_at<128, 256, 32>(return_value1771, res_diff55_sm667_31444);
  set_at<160, 256, 32>(return_value1771, res_diff55_sm667_21442);
  set_at<192, 256, 32>(return_value1771, res_diff55_sm667_11440);
  set_at<224, 256, 32>(return_value1771, res_diff55_sm667_01438);
  return return_value1771;

}

hw_uint<256> us_gp_in1_1_buf5698_cu1773(hw_uint<32*8>& gp_in1_1_buf56_FIFO_buf529) {
  return gp_in1_1_buf56_FIFO_buf529;
}

hw_uint<256> lp_in1_0102_cu1775(hw_uint<32*8>& gp_in1_1_buf56_us96_FIFO_buf537, hw_uint<32*8>& in1_FIFO_buf581) {
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_0 = gp_in1_1_buf56_us96_FIFO_buf537.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_1 = gp_in1_1_buf56_us96_FIFO_buf537.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_2 = gp_in1_1_buf56_us96_FIFO_buf537.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_3 = gp_in1_1_buf56_us96_FIFO_buf537.extract<96, 127>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_4 = gp_in1_1_buf56_us96_FIFO_buf537.extract<128, 159>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_5 = gp_in1_1_buf56_us96_FIFO_buf537.extract<160, 191>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_6 = gp_in1_1_buf56_us96_FIFO_buf537.extract<192, 223>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_7 = gp_in1_1_buf56_us96_FIFO_buf537.extract<224, 255>();
  hw_uint<32> in1_FIFO_buf581_lane_0 = in1_FIFO_buf581.extract<0, 31>();
  hw_uint<32> in1_FIFO_buf581_lane_1 = in1_FIFO_buf581.extract<32, 63>();
  hw_uint<32> in1_FIFO_buf581_lane_2 = in1_FIFO_buf581.extract<64, 95>();
  hw_uint<32> in1_FIFO_buf581_lane_3 = in1_FIFO_buf581.extract<96, 127>();
  hw_uint<32> in1_FIFO_buf581_lane_4 = in1_FIFO_buf581.extract<128, 159>();
  hw_uint<32> in1_FIFO_buf581_lane_5 = in1_FIFO_buf581.extract<160, 191>();
  hw_uint<32> in1_FIFO_buf581_lane_6 = in1_FIFO_buf581.extract<192, 223>();
  hw_uint<32> in1_FIFO_buf581_lane_7 = in1_FIFO_buf581.extract<224, 255>();

	
  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_0);
  hw_uint<32 > in1_FIFO_buf581_lane_0_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_0_pack, in1_FIFO_buf581_lane_0);
  auto res_diff103_sm669_71416 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack, in1_FIFO_buf581_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_1);
  hw_uint<32 > in1_FIFO_buf581_lane_1_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_1_pack, in1_FIFO_buf581_lane_1);
  auto res_diff103_sm669_61414 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack, in1_FIFO_buf581_lane_1_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_2_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_2);
  hw_uint<32 > in1_FIFO_buf581_lane_2_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_2_pack, in1_FIFO_buf581_lane_2);
  auto res_diff103_sm669_51412 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_2_pack, in1_FIFO_buf581_lane_2_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_3_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_3);
  hw_uint<32 > in1_FIFO_buf581_lane_3_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_3_pack, in1_FIFO_buf581_lane_3);
  auto res_diff103_sm669_41410 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_3_pack, in1_FIFO_buf581_lane_3_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_4_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_4_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_4);
  hw_uint<32 > in1_FIFO_buf581_lane_4_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_4_pack, in1_FIFO_buf581_lane_4);
  auto res_diff103_sm669_31408 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_4_pack, in1_FIFO_buf581_lane_4_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_5_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_5_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_5);
  hw_uint<32 > in1_FIFO_buf581_lane_5_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_5_pack, in1_FIFO_buf581_lane_5);
  auto res_diff103_sm669_21406 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_5_pack, in1_FIFO_buf581_lane_5_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_6_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_6_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_6);
  hw_uint<32 > in1_FIFO_buf581_lane_6_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_6_pack, in1_FIFO_buf581_lane_6);
  auto res_diff103_sm669_11404 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_6_pack, in1_FIFO_buf581_lane_6_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_7_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_7_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_7);
  hw_uint<32 > in1_FIFO_buf581_lane_7_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_7_pack, in1_FIFO_buf581_lane_7);
  auto res_diff103_sm669_01402 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_7_pack, in1_FIFO_buf581_lane_7_pack);
  hw_uint<256 > return_value1776;
  set_at<0, 256, 32>(return_value1776, res_diff103_sm669_71416);
  set_at<32, 256, 32>(return_value1776, res_diff103_sm669_61414);
  set_at<64, 256, 32>(return_value1776, res_diff103_sm669_51412);
  set_at<96, 256, 32>(return_value1776, res_diff103_sm669_41410);
  set_at<128, 256, 32>(return_value1776, res_diff103_sm669_31408);
  set_at<160, 256, 32>(return_value1776, res_diff103_sm669_21406);
  set_at<192, 256, 32>(return_value1776, res_diff103_sm669_11404);
  set_at<224, 256, 32>(return_value1776, res_diff103_sm669_01402);
  return return_value1776;

}

hw_uint<256> pw_math_in1_oc46_cu1778(hw_uint<32*8>& in1_oc) {
  hw_uint<32> in1_oc_lane_0 = in1_oc.extract<0, 31>();
  hw_uint<32> in1_oc_lane_1 = in1_oc.extract<32, 63>();
  hw_uint<32> in1_oc_lane_2 = in1_oc.extract<64, 95>();
  hw_uint<32> in1_oc_lane_3 = in1_oc.extract<96, 127>();
  hw_uint<32> in1_oc_lane_4 = in1_oc.extract<128, 159>();
  hw_uint<32> in1_oc_lane_5 = in1_oc.extract<160, 191>();
  hw_uint<32> in1_oc_lane_6 = in1_oc.extract<192, 223>();
  hw_uint<32> in1_oc_lane_7 = in1_oc.extract<224, 255>();

	
  hw_uint<32 > in1_oc_lane_0_pack;
  set_at<0, 32, 32>(in1_oc_lane_0_pack, in1_oc_lane_0);
  auto res_pw_math_in1_oc47_sm671_71548 = llf_int_to_float(in1_oc_lane_0_pack);

  hw_uint<32 > in1_oc_lane_1_pack;
  set_at<0, 32, 32>(in1_oc_lane_1_pack, in1_oc_lane_1);
  auto res_pw_math_in1_oc47_sm671_61546 = llf_int_to_float(in1_oc_lane_1_pack);

  hw_uint<32 > in1_oc_lane_2_pack;
  set_at<0, 32, 32>(in1_oc_lane_2_pack, in1_oc_lane_2);
  auto res_pw_math_in1_oc47_sm671_51544 = llf_int_to_float(in1_oc_lane_2_pack);

  hw_uint<32 > in1_oc_lane_3_pack;
  set_at<0, 32, 32>(in1_oc_lane_3_pack, in1_oc_lane_3);
  auto res_pw_math_in1_oc47_sm671_41542 = llf_int_to_float(in1_oc_lane_3_pack);

  hw_uint<32 > in1_oc_lane_4_pack;
  set_at<0, 32, 32>(in1_oc_lane_4_pack, in1_oc_lane_4);
  auto res_pw_math_in1_oc47_sm671_31540 = llf_int_to_float(in1_oc_lane_4_pack);

  hw_uint<32 > in1_oc_lane_5_pack;
  set_at<0, 32, 32>(in1_oc_lane_5_pack, in1_oc_lane_5);
  auto res_pw_math_in1_oc47_sm671_21538 = llf_int_to_float(in1_oc_lane_5_pack);

  hw_uint<32 > in1_oc_lane_6_pack;
  set_at<0, 32, 32>(in1_oc_lane_6_pack, in1_oc_lane_6);
  auto res_pw_math_in1_oc47_sm671_11536 = llf_int_to_float(in1_oc_lane_6_pack);

  hw_uint<32 > in1_oc_lane_7_pack;
  set_at<0, 32, 32>(in1_oc_lane_7_pack, in1_oc_lane_7);
  auto res_pw_math_in1_oc47_sm671_01534 = llf_int_to_float(in1_oc_lane_7_pack);
  hw_uint<256 > return_value1779;
  set_at<0, 256, 32>(return_value1779, res_pw_math_in1_oc47_sm671_71548);
  set_at<32, 256, 32>(return_value1779, res_pw_math_in1_oc47_sm671_61546);
  set_at<64, 256, 32>(return_value1779, res_pw_math_in1_oc47_sm671_51544);
  set_at<96, 256, 32>(return_value1779, res_pw_math_in1_oc47_sm671_41542);
  set_at<128, 256, 32>(return_value1779, res_pw_math_in1_oc47_sm671_31540);
  set_at<160, 256, 32>(return_value1779, res_pw_math_in1_oc47_sm671_21538);
  set_at<192, 256, 32>(return_value1779, res_pw_math_in1_oc47_sm671_11536);
  set_at<224, 256, 32>(return_value1779, res_pw_math_in1_oc47_sm671_01534);
  return return_value1779;

}

hw_uint<256> us_gp_in0_1_buf850_cu1781(hw_uint<32*8>& gp_in0_1_buf8_FIFO_buf485) {
  return gp_in0_1_buf8_FIFO_buf485;
}

hw_uint<64> us_merged_3126_cu1783(hw_uint<32*2>& merged_3_FIFO_buf641) {
  return merged_3_FIFO_buf641;
}

hw_uint<128> lp_in0_146_cu1785(hw_uint<32*4>& gp_in0_1_buf8_FIFO_buf489, hw_uint<32*4>& gp_in0_2_buf16_us40_FIFO_buf509) {
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_0 = gp_in0_1_buf8_FIFO_buf489.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_1 = gp_in0_1_buf8_FIFO_buf489.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_2 = gp_in0_1_buf8_FIFO_buf489.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_3 = gp_in0_1_buf8_FIFO_buf489.extract<96, 127>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_0 = gp_in0_2_buf16_us40_FIFO_buf509.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_1 = gp_in0_2_buf16_us40_FIFO_buf509.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_2 = gp_in0_2_buf16_us40_FIFO_buf509.extract<64, 95>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_3 = gp_in0_2_buf16_us40_FIFO_buf509.extract<96, 127>();

	
  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_0_pack, gp_in0_1_buf8_FIFO_buf489_lane_0);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_0_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_0);
  auto res_diff47_sm675_31464 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_0_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_1_pack, gp_in0_1_buf8_FIFO_buf489_lane_1);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_1_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_1);
  auto res_diff47_sm675_21462 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_1_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_1_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_2_pack, gp_in0_1_buf8_FIFO_buf489_lane_2);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_2_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_2);
  auto res_diff47_sm675_11460 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_2_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_2_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_3_pack, gp_in0_1_buf8_FIFO_buf489_lane_3);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_3_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_3);
  auto res_diff47_sm675_01458 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_3_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_3_pack);
  hw_uint<128 > return_value1786;
  set_at<0, 128, 32>(return_value1786, res_diff47_sm675_31464);
  set_at<32, 128, 32>(return_value1786, res_diff47_sm675_21462);
  set_at<64, 128, 32>(return_value1786, res_diff47_sm675_11460);
  set_at<96, 128, 32>(return_value1786, res_diff47_sm675_01458);
  return return_value1786;

}

hw_uint<128> us_gp_in1_2_buf6490_cu1788(hw_uint<32*4>& gp_in1_2_buf64_FIFO_buf545) {
  return gp_in1_2_buf64_FIFO_buf545;
}

hw_uint<128> lp_in1_194_cu1790(hw_uint<32*4>& gp_in1_1_buf56_FIFO_buf525, hw_uint<32*4>& gp_in1_2_buf64_us88_FIFO_buf553) {
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_0 = gp_in1_1_buf56_FIFO_buf525.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_1 = gp_in1_1_buf56_FIFO_buf525.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_2 = gp_in1_1_buf56_FIFO_buf525.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_3 = gp_in1_1_buf56_FIFO_buf525.extract<96, 127>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_0 = gp_in1_2_buf64_us88_FIFO_buf553.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_1 = gp_in1_2_buf64_us88_FIFO_buf553.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_2 = gp_in1_2_buf64_us88_FIFO_buf553.extract<64, 95>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_3 = gp_in1_2_buf64_us88_FIFO_buf553.extract<96, 127>();

	
  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_0_pack, gp_in1_1_buf56_FIFO_buf525_lane_0);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_0_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_0);
  auto res_diff95_sm677_31432 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_0_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_1_pack, gp_in1_1_buf56_FIFO_buf525_lane_1);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_1_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_1);
  auto res_diff95_sm677_21430 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_1_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_1_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_2_pack, gp_in1_1_buf56_FIFO_buf525_lane_2);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_2_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_2);
  auto res_diff95_sm677_11428 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_2_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_2_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_3_pack, gp_in1_1_buf56_FIFO_buf525_lane_3);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_3_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_3);
  auto res_diff95_sm677_01426 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_3_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_3_pack);
  hw_uint<128 > return_value1791;
  set_at<0, 128, 32>(return_value1791, res_diff95_sm677_31432);
  set_at<32, 128, 32>(return_value1791, res_diff95_sm677_21430);
  set_at<64, 128, 32>(return_value1791, res_diff95_sm677_11428);
  set_at<96, 128, 32>(return_value1791, res_diff95_sm677_01426);
  return return_value1791;

}

hw_uint<128> lp_in0_1_buf44_ld422_cu1793(hw_uint<32*4>& lp_in0_1_buf44) {
  return lp_in0_1_buf44;
}

hw_uint<256> in0_ld402_cu1795(hw_uint<32*8>& in0) {
  return in0;
}

hw_uint<128> lp_in1_1_buf92_ld434_cu1797(hw_uint<32*4>& lp_in1_1_buf92) {
  return lp_in1_1_buf92;
}

hw_uint<64> lp_in0_2_buf36_ld426_cu1799(hw_uint<32*2>& lp_in0_2_buf36) {
  return lp_in0_2_buf36;
}

hw_uint<256> merged_0_ld442_cu1801(hw_uint<32*8>& merged_0) {
  return merged_0;
}

hw_uint<128> gp_in0_1_buf8_ld322_cu1803(hw_uint<32*4>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<64> gp_in0_2_buf16_ld334_cu1805(hw_uint<32*2>& gp_in0_2_buf16) {
  return gp_in0_2_buf16;
}

hw_uint<128> gp_in1_1_buf56_ld358_cu1807(hw_uint<32*4>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<128> merged_1_ld450_cu1809(hw_uint<32*4>& merged_1) {
  return merged_1;
}

hw_uint<128> merged_1_reconstruct_lp129_buf132_ld454_cu1811(hw_uint<32*4>& merged_1_reconstruct_lp129_buf132) {
  return merged_1_reconstruct_lp129_buf132;
}

hw_uint<128> gp_in1_1_buf56_ld366_cu1813(hw_uint<32*4>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<128> gp_in1_1_buf56_ld362_cu1815(hw_uint<32*4>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<64> gp_in0_2_buf16_ld330_cu1817(hw_uint<32*2>& gp_in0_2_buf16) {
  return gp_in0_2_buf16;
}

hw_uint<64> gp_in0_2_buf16_ld338_cu1819(hw_uint<32*2>& gp_in0_2_buf16) {
  return gp_in0_2_buf16;
}

hw_uint<64> gp_in1_2_buf64_ld374_cu1821(hw_uint<32*2>& gp_in1_2_buf64) {
  return gp_in1_2_buf64;
}

hw_uint<256> lp_in1_0_buf100_ld430_cu1823(hw_uint<32*8>& lp_in1_0_buf100) {
  return lp_in1_0_buf100;
}

hw_uint<64> lp_in1_2_buf84_ld438_cu1825(hw_uint<32*2>& lp_in1_2_buf84) {
  return lp_in1_2_buf84;
}

hw_uint<64> merged_2_ld462_cu1827(hw_uint<32*2>& merged_2) {
  return merged_2;
}

hw_uint<64> gp_in1_3_buf72_us80_to_gp_11397_ld566_cu1829(hw_uint<32*2>& gp_in1_3_buf72_us80_to_gp_11397) {
  return gp_in1_3_buf72_us80_to_gp_11397;
}

hw_uint<64> gp_in1_2_buf64_to_gp_11373_ld542_cu1831(hw_uint<32*2>& gp_in1_2_buf64_to_gp_11373) {
  return gp_in1_2_buf64_to_gp_11373;
}

hw_uint<256> lp_in1_0_buf100_to_gp_18429_ld598_cu1833(hw_uint<32*8>& lp_in1_0_buf100_to_gp_18429) {
  return lp_in1_0_buf100_to_gp_18429;
}

hw_uint<256> lp_in0_0_buf52_to_gp_18417_ld586_cu1835(hw_uint<32*8>& lp_in0_0_buf52_to_gp_18417) {
  return lp_in0_0_buf52_to_gp_18417;
}

hw_uint<64> lp_in0_2_buf36_to_gp_20425_ld594_cu1837(hw_uint<32*2>& lp_in0_2_buf36_to_gp_20425) {
  return lp_in0_2_buf36_to_gp_20425;
}

hw_uint<256> gp_in0_1_buf8_us48_ld326_cu1839(hw_uint<32*8>& gp_in0_1_buf8_us48) {
  return gp_in0_1_buf8_us48;
}

hw_uint<128> gp_in1_2_buf64_us88_to_gp_10385_ld554_cu1841(hw_uint<32*4>& gp_in1_2_buf64_us88_to_gp_10385) {
  return gp_in1_2_buf64_us88_to_gp_10385;
}

hw_uint<128> lp_in0_1_buf44_to_gp_19421_ld590_cu1843(hw_uint<32*4>& lp_in0_1_buf44_to_gp_19421) {
  return lp_in0_1_buf44_to_gp_19421;
}

hw_uint<128> gp_in1_2_buf64_us88_ld386_cu1845(hw_uint<32*4>& gp_in1_2_buf64_us88) {
  return gp_in1_2_buf64_us88;
}

hw_uint<128> gp_in0_1_buf8_ld318_cu1847(hw_uint<32*4>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<256> gp_in1_1_buf56_us96_ld370_cu1849(hw_uint<32*8>& gp_in1_1_buf56_us96) {
  return gp_in1_1_buf56_us96;
}

hw_uint<64> gp_in1_3_buf72_us80_ld398_cu1851(hw_uint<32*2>& gp_in1_3_buf72_us80) {
  return gp_in1_3_buf72_us80;
}

hw_uint<256> in1_ld410_cu1853(hw_uint<32*8>& in1) {
  return in1;
}

hw_uint<256> in1_ld414_cu1855(hw_uint<32*8>& in1) {
  return in1;
}

hw_uint<128> merged_2_reconstruct_lp120_buf123_us133_ld470_cu1857(hw_uint<32*4>& merged_2_reconstruct_lp120_buf123_us133) {
  return merged_2_reconstruct_lp120_buf123_us133;
}

hw_uint<128> gp_in0_1_buf8_to_gp_1313_ld482_cu1859(hw_uint<32*4>& gp_in0_1_buf8_to_gp_1313) {
  return gp_in0_1_buf8_to_gp_1313;
}

hw_uint<128> gp_in0_1_buf8_to_gp_7321_ld490_cu1861(hw_uint<32*4>& gp_in0_1_buf8_to_gp_7321) {
  return gp_in0_1_buf8_to_gp_7321;
}

hw_uint<256> gp_in0_1_buf8_us48_to_gp_6325_ld494_cu1863(hw_uint<32*8>& gp_in0_1_buf8_us48_to_gp_6325) {
  return gp_in0_1_buf8_us48_to_gp_6325;
}

hw_uint<64> gp_in1_2_buf64_to_gp_26377_ld546_cu1865(hw_uint<32*2>& gp_in1_2_buf64_to_gp_26377) {
  return gp_in1_2_buf64_to_gp_26377;
}

hw_uint<256> in1_to_gp_3409_ld578_cu1867(hw_uint<32*8>& in1_to_gp_3409) {
  return in1_to_gp_3409;
}

hw_uint<128> gp_in0_1_buf8_ld314_cu1869(hw_uint<32*4>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<64> gp_in0_3_buf24_us32_ld354_cu1871(hw_uint<32*2>& gp_in0_3_buf24_us32) {
  return gp_in0_3_buf24_us32;
}

hw_uint<128> gp_in0_2_buf16_us40_ld342_cu1873(hw_uint<32*4>& gp_in0_2_buf16_us40) {
  return gp_in0_2_buf16_us40;
}

hw_uint<64> gp_in1_2_buf64_ld382_cu1875(hw_uint<32*2>& gp_in1_2_buf64) {
  return gp_in1_2_buf64;
}

hw_uint<64> gp_in1_2_buf64_ld378_cu1877(hw_uint<32*2>& gp_in1_2_buf64) {
  return gp_in1_2_buf64;
}

hw_uint<256> in0_ld406_cu1879(hw_uint<32*8>& in0) {
  return in0;
}

hw_uint<256> lp_in0_0_buf52_ld418_cu1881(hw_uint<32*8>& lp_in0_0_buf52) {
  return lp_in0_0_buf52;
}

hw_uint<64> gp_in0_3_buf24_us32_to_gp_8353_ld522_cu1883(hw_uint<32*2>& gp_in0_3_buf24_us32_to_gp_8353) {
  return gp_in0_3_buf24_us32_to_gp_8353;
}

hw_uint<128> gp_in1_1_buf56_to_gp_10357_ld526_cu1885(hw_uint<32*4>& gp_in1_1_buf56_to_gp_10357) {
  return gp_in1_1_buf56_to_gp_10357;
}

hw_uint<128> gp_in1_1_buf56_to_gp_25361_ld530_cu1887(hw_uint<32*4>& gp_in1_1_buf56_to_gp_25361) {
  return gp_in1_1_buf56_to_gp_25361;
}

hw_uint<128> gp_in1_1_buf56_to_gp_4365_ld534_cu1889(hw_uint<32*4>& gp_in1_1_buf56_to_gp_4365) {
  return gp_in1_1_buf56_to_gp_4365;
}

hw_uint<64> gp_in1_2_buf64_to_gp_5381_ld550_cu1891(hw_uint<32*2>& gp_in1_2_buf64_to_gp_5381) {
  return gp_in1_2_buf64_to_gp_5381;
}

hw_uint<128> merged_1_to_gp_13449_ld618_cu1893(hw_uint<32*4>& merged_1_to_gp_13449) {
  return merged_1_to_gp_13449;
}

hw_uint<64> lp_in1_2_buf84_to_gp_20437_ld606_cu1895(hw_uint<32*2>& lp_in1_2_buf84_to_gp_20437) {
  return lp_in1_2_buf84_to_gp_20437;
}

hw_uint<64> merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634_cu1897(hw_uint<32*2>& merged_2_reconstruct_lp120_buf123_to_gp_29465) {
  return merged_2_reconstruct_lp120_buf123_to_gp_29465;
}

hw_uint<128> merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638_cu1899(hw_uint<32*4>& merged_2_reconstruct_lp120_buf123_us133_to_gp_13469) {
  return merged_2_reconstruct_lp120_buf123_us133_to_gp_13469;
}

hw_uint<64> merged_3_us124_to_gp_14477_ld646_cu1901(hw_uint<32*2>& merged_3_us124_to_gp_14477) {
  return merged_3_us124_to_gp_14477;
}

hw_uint<256> merged_0_reconstruct_lp138_buf141_ld446_cu1903(hw_uint<32*8>& merged_0_reconstruct_lp138_buf141) {
  return merged_0_reconstruct_lp138_buf141;
}

hw_uint<256> merged_1_reconstruct_lp129_buf132_us142_ld458_cu1905(hw_uint<32*8>& merged_1_reconstruct_lp129_buf132_us142) {
  return merged_1_reconstruct_lp129_buf132_us142;
}

hw_uint<64> merged_2_reconstruct_lp120_buf123_ld466_cu1907(hw_uint<32*2>& merged_2_reconstruct_lp120_buf123) {
  return merged_2_reconstruct_lp120_buf123;
}

hw_uint<64> merged_3_us124_ld478_cu1909(hw_uint<32*2>& merged_3_us124) {
  return merged_3_us124;
}

hw_uint<128> gp_in0_1_buf8_to_gp_22317_ld486_cu1911(hw_uint<32*4>& gp_in0_1_buf8_to_gp_22317) {
  return gp_in0_1_buf8_to_gp_22317;
}

hw_uint<64> gp_in0_2_buf16_to_gp_2329_ld498_cu1913(hw_uint<32*2>& gp_in0_2_buf16_to_gp_2329) {
  return gp_in0_2_buf16_to_gp_2329;
}

hw_uint<64> gp_in0_2_buf16_to_gp_23333_ld502_cu1915(hw_uint<32*2>& gp_in0_2_buf16_to_gp_23333) {
  return gp_in0_2_buf16_to_gp_23333;
}

hw_uint<64> gp_in0_2_buf16_to_gp_8337_ld506_cu1917(hw_uint<32*2>& gp_in0_2_buf16_to_gp_8337) {
  return gp_in0_2_buf16_to_gp_8337;
}

hw_uint<128> gp_in0_2_buf16_us40_to_gp_7341_ld510_cu1919(hw_uint<32*4>& gp_in0_2_buf16_us40_to_gp_7341) {
  return gp_in0_2_buf16_us40_to_gp_7341;
}

hw_uint<256> gp_in1_1_buf56_us96_to_gp_9369_ld538_cu1921(hw_uint<32*8>& gp_in1_1_buf56_us96_to_gp_9369) {
  return gp_in1_1_buf56_us96_to_gp_9369;
}

hw_uint<256> in0_to_gp_0401_ld570_cu1923(hw_uint<32*8>& in0_to_gp_0401) {
  return in0_to_gp_0401;
}

hw_uint<256> in0_to_gp_6405_ld574_cu1925(hw_uint<32*8>& in0_to_gp_6405) {
  return in0_to_gp_6405;
}

hw_uint<128> lp_in1_1_buf92_to_gp_19433_ld602_cu1927(hw_uint<32*4>& lp_in1_1_buf92_to_gp_19433) {
  return lp_in1_1_buf92_to_gp_19433;
}

hw_uint<128> merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622_cu1929(hw_uint<32*4>& merged_1_reconstruct_lp129_buf132_to_gp_28453) {
  return merged_1_reconstruct_lp129_buf132_to_gp_28453;
}

hw_uint<256> in1_to_gp_9413_ld582_cu1931(hw_uint<32*8>& in1_to_gp_9413) {
  return in1_to_gp_9413;
}

hw_uint<256> merged_0_to_gp_12441_ld610_cu1933(hw_uint<32*8>& merged_0_to_gp_12441) {
  return merged_0_to_gp_12441;
}

hw_uint<256> merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_cu1935(hw_uint<32*8>& merged_1_reconstruct_lp129_buf132_us142_to_gp_12457) {
  return merged_1_reconstruct_lp129_buf132_us142_to_gp_12457;
}

hw_uint<64> merged_2_to_gp_14461_ld630_cu1937(hw_uint<32*2>& merged_2_to_gp_14461) {
  return merged_2_to_gp_14461;
}

hw_uint<64> us_gp_in1_3_buf7282_cu1939(hw_uint<32*2>& gp_in1_3_buf72_FIFO_buf561) {
  return gp_in1_3_buf72_FIFO_buf561;
}

hw_uint<64> us_gp_in0_3_buf2434_cu1941(hw_uint<32*2>& gp_in0_3_buf24_FIFO_buf517) {
  return gp_in0_3_buf24_FIFO_buf517;
}

hw_uint<256> merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_cu1943(hw_uint<32*8>& merged_0_reconstruct_lp138_buf141_to_gp_21445) {
  return merged_0_reconstruct_lp138_buf141_to_gp_21445;
}

