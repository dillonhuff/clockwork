#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<64> pw_math_in0_oc02_cu1058(hw_uint<32*2>& in0_oc) {
  hw_uint<32> in0_oc_lane_0 = in0_oc.extract<0, 31>();
  hw_uint<32> in0_oc_lane_1 = in0_oc.extract<32, 63>();

	
  hw_uint<32 > in0_oc_lane_0_pack;
  set_at<0, 32, 32>(in0_oc_lane_0_pack, in0_oc_lane_0);
  auto res_pw_math_in0_oc03_sm653_1774 = llf_int_to_float(in0_oc_lane_0_pack);

  hw_uint<32 > in0_oc_lane_1_pack;
  set_at<0, 32, 32>(in0_oc_lane_1_pack, in0_oc_lane_1);
  auto res_pw_math_in0_oc03_sm653_0772 = llf_int_to_float(in0_oc_lane_1_pack);
  hw_uint<64 > return_value1059;
  set_at<0, 64, 32>(return_value1059, res_pw_math_in0_oc03_sm653_1774);
  set_at<32, 64, 32>(return_value1059, res_pw_math_in0_oc03_sm653_0772);
  return return_value1059;

}

hw_uint<64> pw_math_in1_oc46_cu1061(hw_uint<32*2>& in1_oc) {
  hw_uint<32> in1_oc_lane_0 = in1_oc.extract<0, 31>();
  hw_uint<32> in1_oc_lane_1 = in1_oc.extract<32, 63>();

	
  hw_uint<32 > in1_oc_lane_0_pack;
  set_at<0, 32, 32>(in1_oc_lane_0_pack, in1_oc_lane_0);
  auto res_pw_math_in1_oc47_sm654_1778 = llf_int_to_float(in1_oc_lane_0_pack);

  hw_uint<32 > in1_oc_lane_1_pack;
  set_at<0, 32, 32>(in1_oc_lane_1_pack, in1_oc_lane_1);
  auto res_pw_math_in1_oc47_sm654_0776 = llf_int_to_float(in1_oc_lane_1_pack);
  hw_uint<64 > return_value1062;
  set_at<0, 64, 32>(return_value1062, res_pw_math_in1_oc47_sm654_1778);
  set_at<32, 64, 32>(return_value1062, res_pw_math_in1_oc47_sm654_0776);
  return return_value1062;

}

hw_uint<64> us_gp_in0_1_buf850_cu1064(hw_uint<32*2>& gp_in0_1_buf8_FIFO_buf485) {
  return gp_in0_1_buf8_FIFO_buf485;
}

hw_uint<64> lp_in0_054_cu1066(hw_uint<32*2>& gp_in0_1_buf8_us48_FIFO_buf493, hw_uint<32*2>& in0_FIFO_buf573) {
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_0 = gp_in0_1_buf8_us48_FIFO_buf493.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_1 = gp_in0_1_buf8_us48_FIFO_buf493.extract<32, 63>();
  hw_uint<32> in0_FIFO_buf573_lane_0 = in0_FIFO_buf573.extract<0, 31>();
  hw_uint<32> in0_FIFO_buf573_lane_1 = in0_FIFO_buf573.extract<32, 63>();

	
  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_0);
  hw_uint<32 > in0_FIFO_buf573_lane_0_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_0_pack, in0_FIFO_buf573_lane_0);
  auto res_diff55_sm657_1788 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack, in0_FIFO_buf573_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_1);
  hw_uint<32 > in0_FIFO_buf573_lane_1_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_1_pack, in0_FIFO_buf573_lane_1);
  auto res_diff55_sm657_0786 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack, in0_FIFO_buf573_lane_1_pack);
  hw_uint<64 > return_value1067;
  set_at<0, 64, 32>(return_value1067, res_diff55_sm657_1788);
  set_at<32, 64, 32>(return_value1067, res_diff55_sm657_0786);
  return return_value1067;

}

hw_uint<64> us_gp_in1_1_buf5698_cu1069(hw_uint<32*2>& gp_in1_1_buf56_FIFO_buf529) {
  return gp_in1_1_buf56_FIFO_buf529;
}

hw_uint<64> lp_in1_0102_cu1071(hw_uint<32*2>& gp_in1_1_buf56_us96_FIFO_buf537, hw_uint<32*2>& in1_FIFO_buf581) {
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_0 = gp_in1_1_buf56_us96_FIFO_buf537.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_1 = gp_in1_1_buf56_us96_FIFO_buf537.extract<32, 63>();
  hw_uint<32> in1_FIFO_buf581_lane_0 = in1_FIFO_buf581.extract<0, 31>();
  hw_uint<32> in1_FIFO_buf581_lane_1 = in1_FIFO_buf581.extract<32, 63>();

	
  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_0);
  hw_uint<32 > in1_FIFO_buf581_lane_0_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_0_pack, in1_FIFO_buf581_lane_0);
  auto res_diff103_sm669_1814 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack, in1_FIFO_buf581_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_1);
  hw_uint<32 > in1_FIFO_buf581_lane_1_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_1_pack, in1_FIFO_buf581_lane_1);
  auto res_diff103_sm669_0812 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack, in1_FIFO_buf581_lane_1_pack);
  hw_uint<64 > return_value1072;
  set_at<0, 64, 32>(return_value1072, res_diff103_sm669_1814);
  set_at<32, 64, 32>(return_value1072, res_diff103_sm669_0812);
  return return_value1072;

}

hw_uint<64> pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_cu1074(hw_uint<32*2>& lp_in0_0_buf52_FIFO_buf585, hw_uint<32*2>& lp_in1_0_buf100_FIFO_buf597) {
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_0 = lp_in0_0_buf52_FIFO_buf585.extract<0, 31>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_1 = lp_in0_0_buf52_FIFO_buf585.extract<32, 63>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_0 = lp_in1_0_buf100_FIFO_buf597.extract<0, 31>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_1 = lp_in1_0_buf100_FIFO_buf597.extract<32, 63>();

	
  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_0_pack, lp_in0_0_buf52_FIFO_buf585_lane_0);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_0_pack, lp_in1_0_buf100_FIFO_buf597_lane_0);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm670_1818 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_0_pack, lp_in1_0_buf100_FIFO_buf597_lane_0_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_1_pack, lp_in0_0_buf52_FIFO_buf585_lane_1);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_1_pack, lp_in1_0_buf100_FIFO_buf597_lane_1);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm670_0816 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_1_pack, lp_in1_0_buf100_FIFO_buf597_lane_1_pack);
  hw_uint<64 > return_value1075;
  set_at<0, 64, 32>(return_value1075, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm670_1818);
  set_at<32, 64, 32>(return_value1075, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm670_0816);
  return return_value1075;

}

hw_uint<64> us_merged_1_reconstruct_lp129_buf132144_cu1077(hw_uint<32*2>& merged_1_reconstruct_lp129_buf132_FIFO_buf621) {
  return merged_1_reconstruct_lp129_buf132_FIFO_buf621;
}

hw_uint<64> merged_0_reconstruct_lp138140_cu1079(hw_uint<32*2>& merged_0_FIFO_buf609, hw_uint<32*2>& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625) {
  hw_uint<32> merged_0_FIFO_buf609_lane_0 = merged_0_FIFO_buf609.extract<0, 31>();
  hw_uint<32> merged_0_FIFO_buf609_lane_1 = merged_0_FIFO_buf609.extract<32, 63>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<0, 31>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<32, 63>();

	
  hw_uint<32 > merged_0_FIFO_buf609_lane_0_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_0_pack, merged_0_FIFO_buf609_lane_0);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0);
  auto res_rc146_sm679_1842 = llf_add_float_32(merged_0_FIFO_buf609_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_1_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_1_pack, merged_0_FIFO_buf609_lane_1);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1);
  auto res_rc146_sm679_0840 = llf_add_float_32(merged_0_FIFO_buf609_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack);
  hw_uint<64 > return_value1080;
  set_at<0, 64, 32>(return_value1080, res_rc146_sm679_1842);
  set_at<32, 64, 32>(return_value1080, res_rc146_sm679_0840);
  return return_value1080;

}

hw_uint<64> pw_math_merged_0_reconstruct_lp138_buf141147149_cu1082(hw_uint<32*2>& merged_0_reconstruct_lp138_buf141_FIFO_buf613) {
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<0, 31>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<32, 63>();

	
  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm680_1846 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm680_0844 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack);
  hw_uint<64 > return_value1083;
  set_at<0, 64, 32>(return_value1083, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm680_1846);
  set_at<32, 64, 32>(return_value1083, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm680_0844);
  return return_value1083;

}

hw_uint<64> lp_in0_0_buf52_ld418_cu1085(hw_uint<32*2>& lp_in0_0_buf52) {
  return lp_in0_0_buf52;
}

hw_uint<64> merged_0_ld442_cu1087(hw_uint<32*2>& merged_0) {
  return merged_0;
}

hw_uint<64> merged_0_reconstruct_lp138_buf141_ld446_cu1089(hw_uint<32*2>& merged_0_reconstruct_lp138_buf141) {
  return merged_0_reconstruct_lp138_buf141;
}

hw_uint<64> gp_in0_1_buf8_us48_to_gp_6325_ld494_cu1091(hw_uint<32*2>& gp_in0_1_buf8_us48_to_gp_6325) {
  return gp_in0_1_buf8_us48_to_gp_6325;
}

hw_uint<64> lp_in1_0_buf100_to_gp_18429_ld598_cu1093(hw_uint<32*2>& lp_in1_0_buf100_to_gp_18429) {
  return lp_in1_0_buf100_to_gp_18429;
}

hw_uint<64> merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_cu1095(hw_uint<32*2>& merged_0_reconstruct_lp138_buf141_to_gp_21445) {
  return merged_0_reconstruct_lp138_buf141_to_gp_21445;
}

hw_uint<64> gp_in0_1_buf8_us48_ld326_cu1097(hw_uint<32*2>& gp_in0_1_buf8_us48) {
  return gp_in0_1_buf8_us48;
}

hw_uint<64> in1_ld414_cu1099(hw_uint<32*2>& in1) {
  return in1;
}

hw_uint<64> merged_1_reconstruct_lp129_buf132_us142_ld458_cu1101(hw_uint<32*2>& merged_1_reconstruct_lp129_buf132_us142) {
  return merged_1_reconstruct_lp129_buf132_us142;
}

hw_uint<64> gp_in1_1_buf56_us96_ld370_cu1103(hw_uint<32*2>& gp_in1_1_buf56_us96) {
  return gp_in1_1_buf56_us96;
}

hw_uint<64> in0_ld406_cu1105(hw_uint<32*2>& in0) {
  return in0;
}

hw_uint<64> in0_ld402_cu1107(hw_uint<32*2>& in0) {
  return in0;
}

hw_uint<64> in1_ld410_cu1109(hw_uint<32*2>& in1) {
  return in1;
}

hw_uint<64> lp_in1_0_buf100_ld430_cu1111(hw_uint<32*2>& lp_in1_0_buf100) {
  return lp_in1_0_buf100;
}

hw_uint<64> in1_to_gp_9413_ld582_cu1113(hw_uint<32*2>& in1_to_gp_9413) {
  return in1_to_gp_9413;
}

hw_uint<64> lp_in0_0_buf52_to_gp_18417_ld586_cu1115(hw_uint<32*2>& lp_in0_0_buf52_to_gp_18417) {
  return lp_in0_0_buf52_to_gp_18417;
}

hw_uint<64> merged_0_to_gp_12441_ld610_cu1117(hw_uint<32*2>& merged_0_to_gp_12441) {
  return merged_0_to_gp_12441;
}

hw_uint<64> gp_in1_1_buf56_us96_to_gp_9369_ld538_cu1119(hw_uint<32*2>& gp_in1_1_buf56_us96_to_gp_9369) {
  return gp_in1_1_buf56_us96_to_gp_9369;
}

hw_uint<64> in0_to_gp_0401_ld570_cu1121(hw_uint<32*2>& in0_to_gp_0401) {
  return in0_to_gp_0401;
}

hw_uint<64> in0_to_gp_6405_ld574_cu1123(hw_uint<32*2>& in0_to_gp_6405) {
  return in0_to_gp_6405;
}

hw_uint<64> in1_to_gp_3409_ld578_cu1125(hw_uint<32*2>& in1_to_gp_3409) {
  return in1_to_gp_3409;
}

hw_uint<64> merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_cu1127(hw_uint<32*2>& merged_1_reconstruct_lp129_buf132_us142_to_gp_12457) {
  return merged_1_reconstruct_lp129_buf132_us142_to_gp_12457;
}

