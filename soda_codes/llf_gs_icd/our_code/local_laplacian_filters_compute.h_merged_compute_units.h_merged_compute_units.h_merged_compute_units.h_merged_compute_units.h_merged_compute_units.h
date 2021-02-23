#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<128> merged_2_reconstruct_lp120122_cu2680(hw_uint<32*4>& merged_2_FIFO_buf629, hw_uint<32*4>& merged_3_us124_FIFO_buf645) {
  hw_uint<32> merged_2_FIFO_buf629_lane_0 = merged_2_FIFO_buf629.extract<0, 31>();
  hw_uint<32> merged_2_FIFO_buf629_lane_1 = merged_2_FIFO_buf629.extract<32, 63>();
  hw_uint<32> merged_2_FIFO_buf629_lane_2 = merged_2_FIFO_buf629.extract<64, 95>();
  hw_uint<32> merged_2_FIFO_buf629_lane_3 = merged_2_FIFO_buf629.extract<96, 127>();
  hw_uint<32> merged_3_us124_FIFO_buf645_lane_0 = merged_3_us124_FIFO_buf645.extract<0, 31>();
  hw_uint<32> merged_3_us124_FIFO_buf645_lane_1 = merged_3_us124_FIFO_buf645.extract<32, 63>();
  hw_uint<32> merged_3_us124_FIFO_buf645_lane_2 = merged_3_us124_FIFO_buf645.extract<64, 95>();
  hw_uint<32> merged_3_us124_FIFO_buf645_lane_3 = merged_3_us124_FIFO_buf645.extract<96, 127>();

	
  hw_uint<32 > merged_2_FIFO_buf629_lane_0_pack;
  set_at<0, 32, 32>(merged_2_FIFO_buf629_lane_0_pack, merged_2_FIFO_buf629_lane_0);
  hw_uint<32 > merged_3_us124_FIFO_buf645_lane_0_pack;
  set_at<0, 32, 32>(merged_3_us124_FIFO_buf645_lane_0_pack, merged_3_us124_FIFO_buf645_lane_0);
  auto res_rc128_sm649_3770 = llf_add_float_32(merged_2_FIFO_buf629_lane_0_pack, merged_3_us124_FIFO_buf645_lane_0_pack);

  hw_uint<32 > merged_2_FIFO_buf629_lane_1_pack;
  set_at<0, 32, 32>(merged_2_FIFO_buf629_lane_1_pack, merged_2_FIFO_buf629_lane_1);
  hw_uint<32 > merged_3_us124_FIFO_buf645_lane_1_pack;
  set_at<0, 32, 32>(merged_3_us124_FIFO_buf645_lane_1_pack, merged_3_us124_FIFO_buf645_lane_1);
  auto res_rc128_sm649_2768 = llf_add_float_32(merged_2_FIFO_buf629_lane_1_pack, merged_3_us124_FIFO_buf645_lane_1_pack);

  hw_uint<32 > merged_2_FIFO_buf629_lane_2_pack;
  set_at<0, 32, 32>(merged_2_FIFO_buf629_lane_2_pack, merged_2_FIFO_buf629_lane_2);
  hw_uint<32 > merged_3_us124_FIFO_buf645_lane_2_pack;
  set_at<0, 32, 32>(merged_3_us124_FIFO_buf645_lane_2_pack, merged_3_us124_FIFO_buf645_lane_2);
  auto res_rc128_sm649_1766 = llf_add_float_32(merged_2_FIFO_buf629_lane_2_pack, merged_3_us124_FIFO_buf645_lane_2_pack);

  hw_uint<32 > merged_2_FIFO_buf629_lane_3_pack;
  set_at<0, 32, 32>(merged_2_FIFO_buf629_lane_3_pack, merged_2_FIFO_buf629_lane_3);
  hw_uint<32 > merged_3_us124_FIFO_buf645_lane_3_pack;
  set_at<0, 32, 32>(merged_3_us124_FIFO_buf645_lane_3_pack, merged_3_us124_FIFO_buf645_lane_3);
  auto res_rc128_sm649_0764 = llf_add_float_32(merged_2_FIFO_buf629_lane_3_pack, merged_3_us124_FIFO_buf645_lane_3_pack);
  hw_uint<128 > return_value2681;
  set_at<0, 128, 32>(return_value2681, res_rc128_sm649_3770);
  set_at<32, 128, 32>(return_value2681, res_rc128_sm649_2768);
  set_at<64, 128, 32>(return_value2681, res_rc128_sm649_1766);
  set_at<96, 128, 32>(return_value2681, res_rc128_sm649_0764);
  return return_value2681;

}

hw_uint<256> us_merged_2_reconstruct_lp120_buf123135_cu2683(hw_uint<32*8>& merged_2_reconstruct_lp120_buf123_FIFO_buf633) {
  return merged_2_reconstruct_lp120_buf123_FIFO_buf633;
}

hw_uint<256> merged_1_reconstruct_lp129131_cu2685(hw_uint<32*8>& merged_1_FIFO_buf617, hw_uint<32*8>& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637) {
  hw_uint<32> merged_1_FIFO_buf617_lane_0 = merged_1_FIFO_buf617.extract<0, 31>();
  hw_uint<32> merged_1_FIFO_buf617_lane_1 = merged_1_FIFO_buf617.extract<32, 63>();
  hw_uint<32> merged_1_FIFO_buf617_lane_2 = merged_1_FIFO_buf617.extract<64, 95>();
  hw_uint<32> merged_1_FIFO_buf617_lane_3 = merged_1_FIFO_buf617.extract<96, 127>();
  hw_uint<32> merged_1_FIFO_buf617_lane_4 = merged_1_FIFO_buf617.extract<128, 159>();
  hw_uint<32> merged_1_FIFO_buf617_lane_5 = merged_1_FIFO_buf617.extract<160, 191>();
  hw_uint<32> merged_1_FIFO_buf617_lane_6 = merged_1_FIFO_buf617.extract<192, 223>();
  hw_uint<32> merged_1_FIFO_buf617_lane_7 = merged_1_FIFO_buf617.extract<224, 255>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<0, 31>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<32, 63>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_2 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<64, 95>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_3 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<96, 127>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_4 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<128, 159>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_5 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<160, 191>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_6 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<192, 223>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_7 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<224, 255>();

	
  hw_uint<32 > merged_1_FIFO_buf617_lane_0_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_0_pack, merged_1_FIFO_buf617_lane_0);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0);
  auto res_rc137_sm651_7802 = llf_add_float_32(merged_1_FIFO_buf617_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_1_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_1_pack, merged_1_FIFO_buf617_lane_1);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1);
  auto res_rc137_sm651_6800 = llf_add_float_32(merged_1_FIFO_buf617_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_2_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_2_pack, merged_1_FIFO_buf617_lane_2);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_2_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_2_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_2);
  auto res_rc137_sm651_5798 = llf_add_float_32(merged_1_FIFO_buf617_lane_2_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_2_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_3_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_3_pack, merged_1_FIFO_buf617_lane_3);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_3_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_3_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_3);
  auto res_rc137_sm651_4796 = llf_add_float_32(merged_1_FIFO_buf617_lane_3_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_3_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_4_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_4_pack, merged_1_FIFO_buf617_lane_4);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_4_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_4_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_4);
  auto res_rc137_sm651_3794 = llf_add_float_32(merged_1_FIFO_buf617_lane_4_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_4_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_5_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_5_pack, merged_1_FIFO_buf617_lane_5);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_5_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_5_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_5);
  auto res_rc137_sm651_2792 = llf_add_float_32(merged_1_FIFO_buf617_lane_5_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_5_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_6_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_6_pack, merged_1_FIFO_buf617_lane_6);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_6_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_6_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_6);
  auto res_rc137_sm651_1790 = llf_add_float_32(merged_1_FIFO_buf617_lane_6_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_6_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_7_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_7_pack, merged_1_FIFO_buf617_lane_7);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_7_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_7_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_7);
  auto res_rc137_sm651_0788 = llf_add_float_32(merged_1_FIFO_buf617_lane_7_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_7_pack);
  hw_uint<256 > return_value2686;
  set_at<0, 256, 32>(return_value2686, res_rc137_sm651_7802);
  set_at<32, 256, 32>(return_value2686, res_rc137_sm651_6800);
  set_at<64, 256, 32>(return_value2686, res_rc137_sm651_5798);
  set_at<96, 256, 32>(return_value2686, res_rc137_sm651_4796);
  set_at<128, 256, 32>(return_value2686, res_rc137_sm651_3794);
  set_at<160, 256, 32>(return_value2686, res_rc137_sm651_2792);
  set_at<192, 256, 32>(return_value2686, res_rc137_sm651_1790);
  set_at<224, 256, 32>(return_value2686, res_rc137_sm651_0788);
  return return_value2686;

}

hw_uint<256> lp_in0_146_cu2688(hw_uint<32*8>& gp_in0_1_buf8_FIFO_buf489, hw_uint<32*8>& gp_in0_2_buf16_us40_FIFO_buf509) {
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_0 = gp_in0_1_buf8_FIFO_buf489.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_1 = gp_in0_1_buf8_FIFO_buf489.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_2 = gp_in0_1_buf8_FIFO_buf489.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_3 = gp_in0_1_buf8_FIFO_buf489.extract<96, 127>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_4 = gp_in0_1_buf8_FIFO_buf489.extract<128, 159>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_5 = gp_in0_1_buf8_FIFO_buf489.extract<160, 191>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_6 = gp_in0_1_buf8_FIFO_buf489.extract<192, 223>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_7 = gp_in0_1_buf8_FIFO_buf489.extract<224, 255>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_0 = gp_in0_2_buf16_us40_FIFO_buf509.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_1 = gp_in0_2_buf16_us40_FIFO_buf509.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_2 = gp_in0_2_buf16_us40_FIFO_buf509.extract<64, 95>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_3 = gp_in0_2_buf16_us40_FIFO_buf509.extract<96, 127>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_4 = gp_in0_2_buf16_us40_FIFO_buf509.extract<128, 159>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_5 = gp_in0_2_buf16_us40_FIFO_buf509.extract<160, 191>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_6 = gp_in0_2_buf16_us40_FIFO_buf509.extract<192, 223>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_7 = gp_in0_2_buf16_us40_FIFO_buf509.extract<224, 255>();

	
  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_0_pack, gp_in0_1_buf8_FIFO_buf489_lane_0);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_0_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_0);
  auto res_diff47_sm652_7818 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_0_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_1_pack, gp_in0_1_buf8_FIFO_buf489_lane_1);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_1_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_1);
  auto res_diff47_sm652_6816 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_1_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_1_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_2_pack, gp_in0_1_buf8_FIFO_buf489_lane_2);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_2_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_2);
  auto res_diff47_sm652_5814 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_2_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_2_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_3_pack, gp_in0_1_buf8_FIFO_buf489_lane_3);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_3_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_3);
  auto res_diff47_sm652_4812 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_3_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_3_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_4_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_4_pack, gp_in0_1_buf8_FIFO_buf489_lane_4);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_4_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_4_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_4);
  auto res_diff47_sm652_3810 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_4_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_4_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_5_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_5_pack, gp_in0_1_buf8_FIFO_buf489_lane_5);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_5_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_5_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_5);
  auto res_diff47_sm652_2808 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_5_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_5_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_6_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_6_pack, gp_in0_1_buf8_FIFO_buf489_lane_6);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_6_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_6_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_6);
  auto res_diff47_sm652_1806 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_6_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_6_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_7_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_7_pack, gp_in0_1_buf8_FIFO_buf489_lane_7);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_7_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_7_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_7);
  auto res_diff47_sm652_0804 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_7_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_7_pack);
  hw_uint<256 > return_value2689;
  set_at<0, 256, 32>(return_value2689, res_diff47_sm652_7818);
  set_at<32, 256, 32>(return_value2689, res_diff47_sm652_6816);
  set_at<64, 256, 32>(return_value2689, res_diff47_sm652_5814);
  set_at<96, 256, 32>(return_value2689, res_diff47_sm652_4812);
  set_at<128, 256, 32>(return_value2689, res_diff47_sm652_3810);
  set_at<160, 256, 32>(return_value2689, res_diff47_sm652_2808);
  set_at<192, 256, 32>(return_value2689, res_diff47_sm652_1806);
  set_at<224, 256, 32>(return_value2689, res_diff47_sm652_0804);
  return return_value2689;

}

hw_uint<512> pw_math_in1_oc46_cu2691(hw_uint<32*16>& in1_oc) {
  hw_uint<32> in1_oc_lane_0 = in1_oc.extract<0, 31>();
  hw_uint<32> in1_oc_lane_1 = in1_oc.extract<32, 63>();
  hw_uint<32> in1_oc_lane_2 = in1_oc.extract<64, 95>();
  hw_uint<32> in1_oc_lane_3 = in1_oc.extract<96, 127>();
  hw_uint<32> in1_oc_lane_4 = in1_oc.extract<128, 159>();
  hw_uint<32> in1_oc_lane_5 = in1_oc.extract<160, 191>();
  hw_uint<32> in1_oc_lane_6 = in1_oc.extract<192, 223>();
  hw_uint<32> in1_oc_lane_7 = in1_oc.extract<224, 255>();
  hw_uint<32> in1_oc_lane_8 = in1_oc.extract<256, 287>();
  hw_uint<32> in1_oc_lane_9 = in1_oc.extract<288, 319>();
  hw_uint<32> in1_oc_lane_10 = in1_oc.extract<320, 351>();
  hw_uint<32> in1_oc_lane_11 = in1_oc.extract<352, 383>();
  hw_uint<32> in1_oc_lane_12 = in1_oc.extract<384, 415>();
  hw_uint<32> in1_oc_lane_13 = in1_oc.extract<416, 447>();
  hw_uint<32> in1_oc_lane_14 = in1_oc.extract<448, 479>();
  hw_uint<32> in1_oc_lane_15 = in1_oc.extract<480, 511>();

	
  hw_uint<32 > in1_oc_lane_0_pack;
  set_at<0, 32, 32>(in1_oc_lane_0_pack, in1_oc_lane_0);
  auto res_pw_math_in1_oc47_sm653_15850 = llf_int_to_float(in1_oc_lane_0_pack);

  hw_uint<32 > in1_oc_lane_1_pack;
  set_at<0, 32, 32>(in1_oc_lane_1_pack, in1_oc_lane_1);
  auto res_pw_math_in1_oc47_sm653_14848 = llf_int_to_float(in1_oc_lane_1_pack);

  hw_uint<32 > in1_oc_lane_2_pack;
  set_at<0, 32, 32>(in1_oc_lane_2_pack, in1_oc_lane_2);
  auto res_pw_math_in1_oc47_sm653_13846 = llf_int_to_float(in1_oc_lane_2_pack);

  hw_uint<32 > in1_oc_lane_3_pack;
  set_at<0, 32, 32>(in1_oc_lane_3_pack, in1_oc_lane_3);
  auto res_pw_math_in1_oc47_sm653_12844 = llf_int_to_float(in1_oc_lane_3_pack);

  hw_uint<32 > in1_oc_lane_4_pack;
  set_at<0, 32, 32>(in1_oc_lane_4_pack, in1_oc_lane_4);
  auto res_pw_math_in1_oc47_sm653_11842 = llf_int_to_float(in1_oc_lane_4_pack);

  hw_uint<32 > in1_oc_lane_5_pack;
  set_at<0, 32, 32>(in1_oc_lane_5_pack, in1_oc_lane_5);
  auto res_pw_math_in1_oc47_sm653_10840 = llf_int_to_float(in1_oc_lane_5_pack);

  hw_uint<32 > in1_oc_lane_6_pack;
  set_at<0, 32, 32>(in1_oc_lane_6_pack, in1_oc_lane_6);
  auto res_pw_math_in1_oc47_sm653_9838 = llf_int_to_float(in1_oc_lane_6_pack);

  hw_uint<32 > in1_oc_lane_7_pack;
  set_at<0, 32, 32>(in1_oc_lane_7_pack, in1_oc_lane_7);
  auto res_pw_math_in1_oc47_sm653_8836 = llf_int_to_float(in1_oc_lane_7_pack);

  hw_uint<32 > in1_oc_lane_8_pack;
  set_at<0, 32, 32>(in1_oc_lane_8_pack, in1_oc_lane_8);
  auto res_pw_math_in1_oc47_sm653_7834 = llf_int_to_float(in1_oc_lane_8_pack);

  hw_uint<32 > in1_oc_lane_9_pack;
  set_at<0, 32, 32>(in1_oc_lane_9_pack, in1_oc_lane_9);
  auto res_pw_math_in1_oc47_sm653_6832 = llf_int_to_float(in1_oc_lane_9_pack);

  hw_uint<32 > in1_oc_lane_10_pack;
  set_at<0, 32, 32>(in1_oc_lane_10_pack, in1_oc_lane_10);
  auto res_pw_math_in1_oc47_sm653_5830 = llf_int_to_float(in1_oc_lane_10_pack);

  hw_uint<32 > in1_oc_lane_11_pack;
  set_at<0, 32, 32>(in1_oc_lane_11_pack, in1_oc_lane_11);
  auto res_pw_math_in1_oc47_sm653_4828 = llf_int_to_float(in1_oc_lane_11_pack);

  hw_uint<32 > in1_oc_lane_12_pack;
  set_at<0, 32, 32>(in1_oc_lane_12_pack, in1_oc_lane_12);
  auto res_pw_math_in1_oc47_sm653_3826 = llf_int_to_float(in1_oc_lane_12_pack);

  hw_uint<32 > in1_oc_lane_13_pack;
  set_at<0, 32, 32>(in1_oc_lane_13_pack, in1_oc_lane_13);
  auto res_pw_math_in1_oc47_sm653_2824 = llf_int_to_float(in1_oc_lane_13_pack);

  hw_uint<32 > in1_oc_lane_14_pack;
  set_at<0, 32, 32>(in1_oc_lane_14_pack, in1_oc_lane_14);
  auto res_pw_math_in1_oc47_sm653_1822 = llf_int_to_float(in1_oc_lane_14_pack);

  hw_uint<32 > in1_oc_lane_15_pack;
  set_at<0, 32, 32>(in1_oc_lane_15_pack, in1_oc_lane_15);
  auto res_pw_math_in1_oc47_sm653_0820 = llf_int_to_float(in1_oc_lane_15_pack);
  hw_uint<512 > return_value2692;
  set_at<0, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_15850);
  set_at<32, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_14848);
  set_at<64, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_13846);
  set_at<96, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_12844);
  set_at<128, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_11842);
  set_at<160, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_10840);
  set_at<192, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_9838);
  set_at<224, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_8836);
  set_at<256, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_7834);
  set_at<288, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_6832);
  set_at<320, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_5830);
  set_at<352, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_4828);
  set_at<384, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_3826);
  set_at<416, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_2824);
  set_at<448, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_1822);
  set_at<480, 512, 32>(return_value2692, res_pw_math_in1_oc47_sm653_0820);
  return return_value2692;

}

hw_uint<256> lp_in1_194_cu2694(hw_uint<32*8>& gp_in1_1_buf56_FIFO_buf525, hw_uint<32*8>& gp_in1_2_buf64_us88_FIFO_buf553) {
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_0 = gp_in1_1_buf56_FIFO_buf525.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_1 = gp_in1_1_buf56_FIFO_buf525.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_2 = gp_in1_1_buf56_FIFO_buf525.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_3 = gp_in1_1_buf56_FIFO_buf525.extract<96, 127>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_4 = gp_in1_1_buf56_FIFO_buf525.extract<128, 159>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_5 = gp_in1_1_buf56_FIFO_buf525.extract<160, 191>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_6 = gp_in1_1_buf56_FIFO_buf525.extract<192, 223>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_7 = gp_in1_1_buf56_FIFO_buf525.extract<224, 255>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_0 = gp_in1_2_buf64_us88_FIFO_buf553.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_1 = gp_in1_2_buf64_us88_FIFO_buf553.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_2 = gp_in1_2_buf64_us88_FIFO_buf553.extract<64, 95>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_3 = gp_in1_2_buf64_us88_FIFO_buf553.extract<96, 127>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_4 = gp_in1_2_buf64_us88_FIFO_buf553.extract<128, 159>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_5 = gp_in1_2_buf64_us88_FIFO_buf553.extract<160, 191>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_6 = gp_in1_2_buf64_us88_FIFO_buf553.extract<192, 223>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_7 = gp_in1_2_buf64_us88_FIFO_buf553.extract<224, 255>();

	
  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_0_pack, gp_in1_1_buf56_FIFO_buf525_lane_0);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_0_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_0);
  auto res_diff95_sm654_7866 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_0_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_1_pack, gp_in1_1_buf56_FIFO_buf525_lane_1);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_1_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_1);
  auto res_diff95_sm654_6864 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_1_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_1_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_2_pack, gp_in1_1_buf56_FIFO_buf525_lane_2);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_2_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_2);
  auto res_diff95_sm654_5862 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_2_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_2_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_3_pack, gp_in1_1_buf56_FIFO_buf525_lane_3);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_3_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_3);
  auto res_diff95_sm654_4860 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_3_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_3_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_4_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_4_pack, gp_in1_1_buf56_FIFO_buf525_lane_4);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_4_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_4_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_4);
  auto res_diff95_sm654_3858 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_4_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_4_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_5_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_5_pack, gp_in1_1_buf56_FIFO_buf525_lane_5);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_5_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_5_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_5);
  auto res_diff95_sm654_2856 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_5_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_5_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_6_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_6_pack, gp_in1_1_buf56_FIFO_buf525_lane_6);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_6_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_6_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_6);
  auto res_diff95_sm654_1854 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_6_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_6_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_7_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_7_pack, gp_in1_1_buf56_FIFO_buf525_lane_7);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_7_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_7_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_7);
  auto res_diff95_sm654_0852 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_7_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_7_pack);
  hw_uint<256 > return_value2695;
  set_at<0, 256, 32>(return_value2695, res_diff95_sm654_7866);
  set_at<32, 256, 32>(return_value2695, res_diff95_sm654_6864);
  set_at<64, 256, 32>(return_value2695, res_diff95_sm654_5862);
  set_at<96, 256, 32>(return_value2695, res_diff95_sm654_4860);
  set_at<128, 256, 32>(return_value2695, res_diff95_sm654_3858);
  set_at<160, 256, 32>(return_value2695, res_diff95_sm654_2856);
  set_at<192, 256, 32>(return_value2695, res_diff95_sm654_1854);
  set_at<224, 256, 32>(return_value2695, res_diff95_sm654_0852);
  return return_value2695;

}

hw_uint<128> lp_in0_238_cu2697(hw_uint<32*4>& gp_in0_2_buf16_FIFO_buf505, hw_uint<32*4>& gp_in0_3_buf24_us32_FIFO_buf521) {
  hw_uint<32> gp_in0_2_buf16_FIFO_buf505_lane_0 = gp_in0_2_buf16_FIFO_buf505.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf505_lane_1 = gp_in0_2_buf16_FIFO_buf505.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf505_lane_2 = gp_in0_2_buf16_FIFO_buf505.extract<64, 95>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf505_lane_3 = gp_in0_2_buf16_FIFO_buf505.extract<96, 127>();
  hw_uint<32> gp_in0_3_buf24_us32_FIFO_buf521_lane_0 = gp_in0_3_buf24_us32_FIFO_buf521.extract<0, 31>();
  hw_uint<32> gp_in0_3_buf24_us32_FIFO_buf521_lane_1 = gp_in0_3_buf24_us32_FIFO_buf521.extract<32, 63>();
  hw_uint<32> gp_in0_3_buf24_us32_FIFO_buf521_lane_2 = gp_in0_3_buf24_us32_FIFO_buf521.extract<64, 95>();
  hw_uint<32> gp_in0_3_buf24_us32_FIFO_buf521_lane_3 = gp_in0_3_buf24_us32_FIFO_buf521.extract<96, 127>();

	
  hw_uint<32 > gp_in0_2_buf16_FIFO_buf505_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_FIFO_buf505_lane_0_pack, gp_in0_2_buf16_FIFO_buf505_lane_0);
  hw_uint<32 > gp_in0_3_buf24_us32_FIFO_buf521_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_FIFO_buf521_lane_0_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_0);
  auto res_diff39_sm655_3874 = llf_diff_float_32(gp_in0_2_buf16_FIFO_buf505_lane_0_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_0_pack);

  hw_uint<32 > gp_in0_2_buf16_FIFO_buf505_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_FIFO_buf505_lane_1_pack, gp_in0_2_buf16_FIFO_buf505_lane_1);
  hw_uint<32 > gp_in0_3_buf24_us32_FIFO_buf521_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_FIFO_buf521_lane_1_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_1);
  auto res_diff39_sm655_2872 = llf_diff_float_32(gp_in0_2_buf16_FIFO_buf505_lane_1_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_1_pack);

  hw_uint<32 > gp_in0_2_buf16_FIFO_buf505_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_FIFO_buf505_lane_2_pack, gp_in0_2_buf16_FIFO_buf505_lane_2);
  hw_uint<32 > gp_in0_3_buf24_us32_FIFO_buf521_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_FIFO_buf521_lane_2_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_2);
  auto res_diff39_sm655_1870 = llf_diff_float_32(gp_in0_2_buf16_FIFO_buf505_lane_2_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_2_pack);

  hw_uint<32 > gp_in0_2_buf16_FIFO_buf505_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_FIFO_buf505_lane_3_pack, gp_in0_2_buf16_FIFO_buf505_lane_3);
  hw_uint<32 > gp_in0_3_buf24_us32_FIFO_buf521_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_FIFO_buf521_lane_3_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_3);
  auto res_diff39_sm655_0868 = llf_diff_float_32(gp_in0_2_buf16_FIFO_buf505_lane_3_pack, gp_in0_3_buf24_us32_FIFO_buf521_lane_3_pack);
  hw_uint<128 > return_value2698;
  set_at<0, 128, 32>(return_value2698, res_diff39_sm655_3874);
  set_at<32, 128, 32>(return_value2698, res_diff39_sm655_2872);
  set_at<64, 128, 32>(return_value2698, res_diff39_sm655_1870);
  set_at<96, 128, 32>(return_value2698, res_diff39_sm655_0868);
  return return_value2698;

}

hw_uint<128> lp_in1_286_cu2700(hw_uint<32*4>& gp_in1_2_buf64_FIFO_buf541, hw_uint<32*4>& gp_in1_3_buf72_us80_FIFO_buf565) {
  hw_uint<32> gp_in1_2_buf64_FIFO_buf541_lane_0 = gp_in1_2_buf64_FIFO_buf541.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf541_lane_1 = gp_in1_2_buf64_FIFO_buf541.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf541_lane_2 = gp_in1_2_buf64_FIFO_buf541.extract<64, 95>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf541_lane_3 = gp_in1_2_buf64_FIFO_buf541.extract<96, 127>();
  hw_uint<32> gp_in1_3_buf72_us80_FIFO_buf565_lane_0 = gp_in1_3_buf72_us80_FIFO_buf565.extract<0, 31>();
  hw_uint<32> gp_in1_3_buf72_us80_FIFO_buf565_lane_1 = gp_in1_3_buf72_us80_FIFO_buf565.extract<32, 63>();
  hw_uint<32> gp_in1_3_buf72_us80_FIFO_buf565_lane_2 = gp_in1_3_buf72_us80_FIFO_buf565.extract<64, 95>();
  hw_uint<32> gp_in1_3_buf72_us80_FIFO_buf565_lane_3 = gp_in1_3_buf72_us80_FIFO_buf565.extract<96, 127>();

	
  hw_uint<32 > gp_in1_2_buf64_FIFO_buf541_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_FIFO_buf541_lane_0_pack, gp_in1_2_buf64_FIFO_buf541_lane_0);
  hw_uint<32 > gp_in1_3_buf72_us80_FIFO_buf565_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_FIFO_buf565_lane_0_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_0);
  auto res_diff87_sm656_3882 = llf_diff_float_32(gp_in1_2_buf64_FIFO_buf541_lane_0_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_0_pack);

  hw_uint<32 > gp_in1_2_buf64_FIFO_buf541_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_FIFO_buf541_lane_1_pack, gp_in1_2_buf64_FIFO_buf541_lane_1);
  hw_uint<32 > gp_in1_3_buf72_us80_FIFO_buf565_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_FIFO_buf565_lane_1_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_1);
  auto res_diff87_sm656_2880 = llf_diff_float_32(gp_in1_2_buf64_FIFO_buf541_lane_1_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_1_pack);

  hw_uint<32 > gp_in1_2_buf64_FIFO_buf541_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_FIFO_buf541_lane_2_pack, gp_in1_2_buf64_FIFO_buf541_lane_2);
  hw_uint<32 > gp_in1_3_buf72_us80_FIFO_buf565_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_FIFO_buf565_lane_2_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_2);
  auto res_diff87_sm656_1878 = llf_diff_float_32(gp_in1_2_buf64_FIFO_buf541_lane_2_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_2_pack);

  hw_uint<32 > gp_in1_2_buf64_FIFO_buf541_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_FIFO_buf541_lane_3_pack, gp_in1_2_buf64_FIFO_buf541_lane_3);
  hw_uint<32 > gp_in1_3_buf72_us80_FIFO_buf565_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_FIFO_buf565_lane_3_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_3);
  auto res_diff87_sm656_0876 = llf_diff_float_32(gp_in1_2_buf64_FIFO_buf541_lane_3_pack, gp_in1_3_buf72_us80_FIFO_buf565_lane_3_pack);
  hw_uint<128 > return_value2701;
  set_at<0, 128, 32>(return_value2701, res_diff87_sm656_3882);
  set_at<32, 128, 32>(return_value2701, res_diff87_sm656_2880);
  set_at<64, 128, 32>(return_value2701, res_diff87_sm656_1878);
  set_at<96, 128, 32>(return_value2701, res_diff87_sm656_0876);
  return return_value2701;

}

hw_uint<128> merged_2_to_gp_14461_ld630_cu2703(hw_uint<32*4>& merged_2_to_gp_14461) {
  return merged_2_to_gp_14461;
}

hw_uint<64> merged_3_to_gp_30473_ld642_cu2705(hw_uint<32*2>& merged_3_to_gp_30473) {
  return merged_3_to_gp_30473;
}

hw_uint<128> merged_2_reconstruct_lp120_buf123_ld466_cu2707(hw_uint<32*4>& merged_2_reconstruct_lp120_buf123) {
  return merged_2_reconstruct_lp120_buf123;
}

hw_uint<256> merged_1_reconstruct_lp129_buf132_ld454_cu2709(hw_uint<32*8>& merged_1_reconstruct_lp129_buf132) {
  return merged_1_reconstruct_lp129_buf132;
}

hw_uint<512> merged_0_reconstruct_lp138_buf141_ld446_cu2711(hw_uint<32*16>& merged_0_reconstruct_lp138_buf141) {
  return merged_0_reconstruct_lp138_buf141;
}

hw_uint<128> gp_in1_2_buf64_to_gp_11373_ld542_cu2713(hw_uint<32*4>& gp_in1_2_buf64_to_gp_11373) {
  return gp_in1_2_buf64_to_gp_11373;
}

hw_uint<256> merged_2_reconstruct_lp120_buf123_us133_ld470_cu2715(hw_uint<32*8>& merged_2_reconstruct_lp120_buf123_us133) {
  return merged_2_reconstruct_lp120_buf123_us133;
}

hw_uint<256> gp_in1_1_buf56_to_gp_25361_ld530_cu2717(hw_uint<32*8>& gp_in1_1_buf56_to_gp_25361) {
  return gp_in1_1_buf56_to_gp_25361;
}

hw_uint<64> gp_in1_3_buf72_to_gp_27393_ld562_cu2719(hw_uint<32*2>& gp_in1_3_buf72_to_gp_27393) {
  return gp_in1_3_buf72_to_gp_27393;
}

hw_uint<512> in0_to_gp_0401_ld570_cu2721(hw_uint<32*16>& in0_to_gp_0401) {
  return in0_to_gp_0401;
}

hw_uint<512> in0_to_gp_6405_ld574_cu2723(hw_uint<32*16>& in0_to_gp_6405) {
  return in0_to_gp_6405;
}

hw_uint<512> lp_in0_0_buf52_to_gp_18417_ld586_cu2725(hw_uint<32*16>& lp_in0_0_buf52_to_gp_18417) {
  return lp_in0_0_buf52_to_gp_18417;
}

hw_uint<256> lp_in0_1_buf44_to_gp_19421_ld590_cu2727(hw_uint<32*8>& lp_in0_1_buf44_to_gp_19421) {
  return lp_in0_1_buf44_to_gp_19421;
}

hw_uint<256> merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638_cu2729(hw_uint<32*8>& merged_2_reconstruct_lp120_buf123_us133_to_gp_13469) {
  return merged_2_reconstruct_lp120_buf123_us133_to_gp_13469;
}

hw_uint<256> merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622_cu2731(hw_uint<32*8>& merged_1_reconstruct_lp129_buf132_to_gp_28453) {
  return merged_1_reconstruct_lp129_buf132_to_gp_28453;
}

hw_uint<256> gp_in0_1_buf8_ld314_cu2733(hw_uint<32*8>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<128> gp_in1_2_buf64_ld378_cu2735(hw_uint<32*4>& gp_in1_2_buf64) {
  return gp_in1_2_buf64;
}

hw_uint<512> in0_ld406_cu2737(hw_uint<32*16>& in0) {
  return in0;
}

hw_uint<128> gp_in1_3_buf72_us80_ld398_cu2739(hw_uint<32*4>& gp_in1_3_buf72_us80) {
  return gp_in1_3_buf72_us80;
}

hw_uint<64> gp_in1_3_buf72_ld390_cu2741(hw_uint<32*2>& gp_in1_3_buf72) {
  return gp_in1_3_buf72;
}

hw_uint<128> lp_in1_2_buf84_ld438_cu2743(hw_uint<32*4>& lp_in1_2_buf84) {
  return lp_in1_2_buf84;
}

hw_uint<256> merged_1_ld450_cu2745(hw_uint<32*8>& merged_1) {
  return merged_1;
}

hw_uint<256> gp_in0_1_buf8_to_gp_7321_ld490_cu2747(hw_uint<32*8>& gp_in0_1_buf8_to_gp_7321) {
  return gp_in0_1_buf8_to_gp_7321;
}

hw_uint<64> gp_in1_3_buf72_to_gp_15389_ld558_cu2749(hw_uint<32*2>& gp_in1_3_buf72_to_gp_15389) {
  return gp_in1_3_buf72_to_gp_15389;
}

hw_uint<512> in1_to_gp_9413_ld582_cu2751(hw_uint<32*16>& in1_to_gp_9413) {
  return in1_to_gp_9413;
}

hw_uint<512> merged_1_reconstruct_lp129_buf132_us142_ld458_cu2753(hw_uint<32*16>& merged_1_reconstruct_lp129_buf132_us142) {
  return merged_1_reconstruct_lp129_buf132_us142;
}

hw_uint<128> gp_in0_2_buf16_to_gp_8337_ld506_cu2755(hw_uint<32*4>& gp_in0_2_buf16_to_gp_8337) {
  return gp_in0_2_buf16_to_gp_8337;
}

hw_uint<512> merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_cu2757(hw_uint<32*16>& merged_1_reconstruct_lp129_buf132_us142_to_gp_12457) {
  return merged_1_reconstruct_lp129_buf132_us142_to_gp_12457;
}

hw_uint<128> merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634_cu2759(hw_uint<32*4>& merged_2_reconstruct_lp120_buf123_to_gp_29465) {
  return merged_2_reconstruct_lp120_buf123_to_gp_29465;
}

hw_uint<512> gp_in0_1_buf8_us48_ld326_cu2761(hw_uint<32*16>& gp_in0_1_buf8_us48) {
  return gp_in0_1_buf8_us48;
}

hw_uint<128> gp_in0_2_buf16_ld334_cu2763(hw_uint<32*4>& gp_in0_2_buf16) {
  return gp_in0_2_buf16;
}

hw_uint<128> gp_in0_2_buf16_ld338_cu2765(hw_uint<32*4>& gp_in0_2_buf16) {
  return gp_in0_2_buf16;
}

hw_uint<256> gp_in1_1_buf56_ld362_cu2767(hw_uint<32*8>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<256> gp_in1_2_buf64_us88_ld386_cu2769(hw_uint<32*8>& gp_in1_2_buf64_us88) {
  return gp_in1_2_buf64_us88;
}

hw_uint<256> gp_in1_1_buf56_ld358_cu2771(hw_uint<32*8>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<128> gp_in1_2_buf64_ld374_cu2773(hw_uint<32*4>& gp_in1_2_buf64) {
  return gp_in1_2_buf64;
}

hw_uint<256> gp_in0_1_buf8_ld318_cu2775(hw_uint<32*8>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<256> gp_in0_1_buf8_ld322_cu2777(hw_uint<32*8>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<128> gp_in0_3_buf24_us32_ld354_cu2779(hw_uint<32*4>& gp_in0_3_buf24_us32) {
  return gp_in0_3_buf24_us32;
}

hw_uint<256> gp_in0_2_buf16_us40_ld342_cu2781(hw_uint<32*8>& gp_in0_2_buf16_us40) {
  return gp_in0_2_buf16_us40;
}

hw_uint<64> gp_in0_3_buf24_ld350_cu2783(hw_uint<32*2>& gp_in0_3_buf24) {
  return gp_in0_3_buf24;
}

hw_uint<64> gp_in0_3_buf24_ld346_cu2785(hw_uint<32*2>& gp_in0_3_buf24) {
  return gp_in0_3_buf24;
}

hw_uint<256> gp_in1_1_buf56_ld366_cu2787(hw_uint<32*8>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<512> gp_in1_1_buf56_us96_ld370_cu2789(hw_uint<32*16>& gp_in1_1_buf56_us96) {
  return gp_in1_1_buf56_us96;
}

hw_uint<128> gp_in1_2_buf64_ld382_cu2791(hw_uint<32*4>& gp_in1_2_buf64) {
  return gp_in1_2_buf64;
}

hw_uint<512> in0_ld402_cu2793(hw_uint<32*16>& in0) {
  return in0;
}

hw_uint<512> in1_ld410_cu2795(hw_uint<32*16>& in1) {
  return in1;
}

hw_uint<512> in1_ld414_cu2797(hw_uint<32*16>& in1) {
  return in1;
}

hw_uint<512> lp_in0_0_buf52_ld418_cu2799(hw_uint<32*16>& lp_in0_0_buf52) {
  return lp_in0_0_buf52;
}

hw_uint<512> lp_in1_0_buf100_ld430_cu2801(hw_uint<32*16>& lp_in1_0_buf100) {
  return lp_in1_0_buf100;
}

hw_uint<512> merged_0_ld442_cu2803(hw_uint<32*16>& merged_0) {
  return merged_0;
}

hw_uint<256> gp_in0_1_buf8_to_gp_1313_ld482_cu2805(hw_uint<32*8>& gp_in0_1_buf8_to_gp_1313) {
  return gp_in0_1_buf8_to_gp_1313;
}

hw_uint<256> gp_in0_1_buf8_to_gp_22317_ld486_cu2807(hw_uint<32*8>& gp_in0_1_buf8_to_gp_22317) {
  return gp_in0_1_buf8_to_gp_22317;
}

hw_uint<128> gp_in0_2_buf16_to_gp_2329_ld498_cu2809(hw_uint<32*4>& gp_in0_2_buf16_to_gp_2329) {
  return gp_in0_2_buf16_to_gp_2329;
}

hw_uint<64> gp_in0_3_buf24_to_gp_24349_ld518_cu2811(hw_uint<32*2>& gp_in0_3_buf24_to_gp_24349) {
  return gp_in0_3_buf24_to_gp_24349;
}

hw_uint<128> gp_in0_3_buf24_us32_to_gp_8353_ld522_cu2813(hw_uint<32*4>& gp_in0_3_buf24_us32_to_gp_8353) {
  return gp_in0_3_buf24_us32_to_gp_8353;
}

hw_uint<256> gp_in1_1_buf56_to_gp_4365_ld534_cu2815(hw_uint<32*8>& gp_in1_1_buf56_to_gp_4365) {
  return gp_in1_1_buf56_to_gp_4365;
}

hw_uint<512> gp_in1_1_buf56_us96_to_gp_9369_ld538_cu2817(hw_uint<32*16>& gp_in1_1_buf56_us96_to_gp_9369) {
  return gp_in1_1_buf56_us96_to_gp_9369;
}

hw_uint<128> gp_in1_2_buf64_to_gp_26377_ld546_cu2819(hw_uint<32*4>& gp_in1_2_buf64_to_gp_26377) {
  return gp_in1_2_buf64_to_gp_26377;
}

hw_uint<128> gp_in1_3_buf72_us80_to_gp_11397_ld566_cu2821(hw_uint<32*4>& gp_in1_3_buf72_us80_to_gp_11397) {
  return gp_in1_3_buf72_us80_to_gp_11397;
}

hw_uint<128> lp_in0_2_buf36_ld426_cu2823(hw_uint<32*4>& lp_in0_2_buf36) {
  return lp_in0_2_buf36;
}

hw_uint<128> gp_in0_2_buf16_to_gp_23333_ld502_cu2825(hw_uint<32*4>& gp_in0_2_buf16_to_gp_23333) {
  return gp_in0_2_buf16_to_gp_23333;
}

hw_uint<128> merged_2_ld462_cu2827(hw_uint<32*4>& merged_2) {
  return merged_2;
}

hw_uint<128> merged_3_us124_ld478_cu2829(hw_uint<32*4>& merged_3_us124) {
  return merged_3_us124;
}

hw_uint<64> merged_3_ld474_cu2831(hw_uint<32*2>& merged_3) {
  return merged_3;
}

hw_uint<512> gp_in0_1_buf8_us48_to_gp_6325_ld494_cu2833(hw_uint<32*16>& gp_in0_1_buf8_us48_to_gp_6325) {
  return gp_in0_1_buf8_us48_to_gp_6325;
}

hw_uint<256> gp_in0_2_buf16_us40_to_gp_7341_ld510_cu2835(hw_uint<32*8>& gp_in0_2_buf16_us40_to_gp_7341) {
  return gp_in0_2_buf16_us40_to_gp_7341;
}

hw_uint<256> gp_in1_1_buf56_to_gp_10357_ld526_cu2837(hw_uint<32*8>& gp_in1_1_buf56_to_gp_10357) {
  return gp_in1_1_buf56_to_gp_10357;
}

hw_uint<64> gp_in0_3_buf24_to_gp_15345_ld514_cu2839(hw_uint<32*2>& gp_in0_3_buf24_to_gp_15345) {
  return gp_in0_3_buf24_to_gp_15345;
}

hw_uint<128> gp_in1_2_buf64_to_gp_5381_ld550_cu2841(hw_uint<32*4>& gp_in1_2_buf64_to_gp_5381) {
  return gp_in1_2_buf64_to_gp_5381;
}

hw_uint<256> gp_in1_2_buf64_us88_to_gp_10385_ld554_cu2843(hw_uint<32*8>& gp_in1_2_buf64_us88_to_gp_10385) {
  return gp_in1_2_buf64_us88_to_gp_10385;
}

hw_uint<256> merged_1_to_gp_13449_ld618_cu2845(hw_uint<32*8>& merged_1_to_gp_13449) {
  return merged_1_to_gp_13449;
}

hw_uint<512> in1_to_gp_3409_ld578_cu2847(hw_uint<32*16>& in1_to_gp_3409) {
  return in1_to_gp_3409;
}

hw_uint<128> lp_in0_2_buf36_to_gp_20425_ld594_cu2849(hw_uint<32*4>& lp_in0_2_buf36_to_gp_20425) {
  return lp_in0_2_buf36_to_gp_20425;
}

hw_uint<256> lp_in1_1_buf92_to_gp_19433_ld602_cu2851(hw_uint<32*8>& lp_in1_1_buf92_to_gp_19433) {
  return lp_in1_1_buf92_to_gp_19433;
}

hw_uint<512> lp_in1_0_buf100_to_gp_18429_ld598_cu2853(hw_uint<32*16>& lp_in1_0_buf100_to_gp_18429) {
  return lp_in1_0_buf100_to_gp_18429;
}

hw_uint<512> merged_0_to_gp_12441_ld610_cu2855(hw_uint<32*16>& merged_0_to_gp_12441) {
  return merged_0_to_gp_12441;
}

hw_uint<128> merged_3_us124_to_gp_14477_ld646_cu2857(hw_uint<32*4>& merged_3_us124_to_gp_14477) {
  return merged_3_us124_to_gp_14477;
}

hw_uint<512> merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_cu2859(hw_uint<32*16>& merged_0_reconstruct_lp138_buf141_to_gp_21445) {
  return merged_0_reconstruct_lp138_buf141_to_gp_21445;
}

hw_uint<512> pw_math_in0_oc02_cu2861(hw_uint<32*16>& in0_oc) {
  hw_uint<32> in0_oc_lane_0 = in0_oc.extract<0, 31>();
  hw_uint<32> in0_oc_lane_1 = in0_oc.extract<32, 63>();
  hw_uint<32> in0_oc_lane_2 = in0_oc.extract<64, 95>();
  hw_uint<32> in0_oc_lane_3 = in0_oc.extract<96, 127>();
  hw_uint<32> in0_oc_lane_4 = in0_oc.extract<128, 159>();
  hw_uint<32> in0_oc_lane_5 = in0_oc.extract<160, 191>();
  hw_uint<32> in0_oc_lane_6 = in0_oc.extract<192, 223>();
  hw_uint<32> in0_oc_lane_7 = in0_oc.extract<224, 255>();
  hw_uint<32> in0_oc_lane_8 = in0_oc.extract<256, 287>();
  hw_uint<32> in0_oc_lane_9 = in0_oc.extract<288, 319>();
  hw_uint<32> in0_oc_lane_10 = in0_oc.extract<320, 351>();
  hw_uint<32> in0_oc_lane_11 = in0_oc.extract<352, 383>();
  hw_uint<32> in0_oc_lane_12 = in0_oc.extract<384, 415>();
  hw_uint<32> in0_oc_lane_13 = in0_oc.extract<416, 447>();
  hw_uint<32> in0_oc_lane_14 = in0_oc.extract<448, 479>();
  hw_uint<32> in0_oc_lane_15 = in0_oc.extract<480, 511>();

	
  hw_uint<32 > in0_oc_lane_0_pack;
  set_at<0, 32, 32>(in0_oc_lane_0_pack, in0_oc_lane_0);
  auto res_pw_math_in0_oc03_sm736_152230 = llf_int_to_float(in0_oc_lane_0_pack);

  hw_uint<32 > in0_oc_lane_1_pack;
  set_at<0, 32, 32>(in0_oc_lane_1_pack, in0_oc_lane_1);
  auto res_pw_math_in0_oc03_sm736_142228 = llf_int_to_float(in0_oc_lane_1_pack);

  hw_uint<32 > in0_oc_lane_2_pack;
  set_at<0, 32, 32>(in0_oc_lane_2_pack, in0_oc_lane_2);
  auto res_pw_math_in0_oc03_sm736_132226 = llf_int_to_float(in0_oc_lane_2_pack);

  hw_uint<32 > in0_oc_lane_3_pack;
  set_at<0, 32, 32>(in0_oc_lane_3_pack, in0_oc_lane_3);
  auto res_pw_math_in0_oc03_sm736_122224 = llf_int_to_float(in0_oc_lane_3_pack);

  hw_uint<32 > in0_oc_lane_4_pack;
  set_at<0, 32, 32>(in0_oc_lane_4_pack, in0_oc_lane_4);
  auto res_pw_math_in0_oc03_sm736_112222 = llf_int_to_float(in0_oc_lane_4_pack);

  hw_uint<32 > in0_oc_lane_5_pack;
  set_at<0, 32, 32>(in0_oc_lane_5_pack, in0_oc_lane_5);
  auto res_pw_math_in0_oc03_sm736_102220 = llf_int_to_float(in0_oc_lane_5_pack);

  hw_uint<32 > in0_oc_lane_6_pack;
  set_at<0, 32, 32>(in0_oc_lane_6_pack, in0_oc_lane_6);
  auto res_pw_math_in0_oc03_sm736_92218 = llf_int_to_float(in0_oc_lane_6_pack);

  hw_uint<32 > in0_oc_lane_7_pack;
  set_at<0, 32, 32>(in0_oc_lane_7_pack, in0_oc_lane_7);
  auto res_pw_math_in0_oc03_sm736_82216 = llf_int_to_float(in0_oc_lane_7_pack);

  hw_uint<32 > in0_oc_lane_8_pack;
  set_at<0, 32, 32>(in0_oc_lane_8_pack, in0_oc_lane_8);
  auto res_pw_math_in0_oc03_sm736_72214 = llf_int_to_float(in0_oc_lane_8_pack);

  hw_uint<32 > in0_oc_lane_9_pack;
  set_at<0, 32, 32>(in0_oc_lane_9_pack, in0_oc_lane_9);
  auto res_pw_math_in0_oc03_sm736_62212 = llf_int_to_float(in0_oc_lane_9_pack);

  hw_uint<32 > in0_oc_lane_10_pack;
  set_at<0, 32, 32>(in0_oc_lane_10_pack, in0_oc_lane_10);
  auto res_pw_math_in0_oc03_sm736_52210 = llf_int_to_float(in0_oc_lane_10_pack);

  hw_uint<32 > in0_oc_lane_11_pack;
  set_at<0, 32, 32>(in0_oc_lane_11_pack, in0_oc_lane_11);
  auto res_pw_math_in0_oc03_sm736_42208 = llf_int_to_float(in0_oc_lane_11_pack);

  hw_uint<32 > in0_oc_lane_12_pack;
  set_at<0, 32, 32>(in0_oc_lane_12_pack, in0_oc_lane_12);
  auto res_pw_math_in0_oc03_sm736_32206 = llf_int_to_float(in0_oc_lane_12_pack);

  hw_uint<32 > in0_oc_lane_13_pack;
  set_at<0, 32, 32>(in0_oc_lane_13_pack, in0_oc_lane_13);
  auto res_pw_math_in0_oc03_sm736_22204 = llf_int_to_float(in0_oc_lane_13_pack);

  hw_uint<32 > in0_oc_lane_14_pack;
  set_at<0, 32, 32>(in0_oc_lane_14_pack, in0_oc_lane_14);
  auto res_pw_math_in0_oc03_sm736_12202 = llf_int_to_float(in0_oc_lane_14_pack);

  hw_uint<32 > in0_oc_lane_15_pack;
  set_at<0, 32, 32>(in0_oc_lane_15_pack, in0_oc_lane_15);
  auto res_pw_math_in0_oc03_sm736_02200 = llf_int_to_float(in0_oc_lane_15_pack);
  hw_uint<512 > return_value2862;
  set_at<0, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_152230);
  set_at<32, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_142228);
  set_at<64, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_132226);
  set_at<96, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_122224);
  set_at<128, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_112222);
  set_at<160, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_102220);
  set_at<192, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_92218);
  set_at<224, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_82216);
  set_at<256, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_72214);
  set_at<288, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_62212);
  set_at<320, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_52210);
  set_at<352, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_42208);
  set_at<384, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_32206);
  set_at<416, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_22204);
  set_at<448, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_12202);
  set_at<480, 512, 32>(return_value2862, res_pw_math_in0_oc03_sm736_02200);
  return return_value2862;

}

hw_uint<128> us_gp_in1_3_buf7282_cu2864(hw_uint<32*4>& gp_in1_3_buf72_FIFO_buf561) {
  return gp_in1_3_buf72_FIFO_buf561;
}

hw_uint<64> pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118_cu2866(hw_uint<32*2>& gp_in0_3_buf24_FIFO_buf513, hw_uint<32*2>& gp_in1_3_buf72_FIFO_buf557) {
  hw_uint<32> gp_in0_3_buf24_FIFO_buf513_lane_0 = gp_in0_3_buf24_FIFO_buf513.extract<0, 31>();
  hw_uint<32> gp_in0_3_buf24_FIFO_buf513_lane_1 = gp_in0_3_buf24_FIFO_buf513.extract<32, 63>();
  hw_uint<32> gp_in1_3_buf72_FIFO_buf557_lane_0 = gp_in1_3_buf72_FIFO_buf557.extract<0, 31>();
  hw_uint<32> gp_in1_3_buf72_FIFO_buf557_lane_1 = gp_in1_3_buf72_FIFO_buf557.extract<32, 63>();

	
  hw_uint<32 > gp_in0_3_buf24_FIFO_buf513_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_FIFO_buf513_lane_0_pack, gp_in0_3_buf24_FIFO_buf513_lane_0);
  hw_uint<32 > gp_in1_3_buf72_FIFO_buf557_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_FIFO_buf557_lane_0_pack, gp_in1_3_buf72_FIFO_buf557_lane_0);
  auto res_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm738_12242 = llf_float_average(gp_in0_3_buf24_FIFO_buf513_lane_0_pack, gp_in1_3_buf72_FIFO_buf557_lane_0_pack);

  hw_uint<32 > gp_in0_3_buf24_FIFO_buf513_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_FIFO_buf513_lane_1_pack, gp_in0_3_buf24_FIFO_buf513_lane_1);
  hw_uint<32 > gp_in1_3_buf72_FIFO_buf557_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_FIFO_buf557_lane_1_pack, gp_in1_3_buf72_FIFO_buf557_lane_1);
  auto res_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm738_02240 = llf_float_average(gp_in0_3_buf24_FIFO_buf513_lane_1_pack, gp_in1_3_buf72_FIFO_buf557_lane_1_pack);
  hw_uint<64 > return_value2867;
  set_at<0, 64, 32>(return_value2867, res_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm738_12242);
  set_at<32, 64, 32>(return_value2867, res_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm738_02240);
  return return_value2867;

}

hw_uint<128> us_merged_3126_cu2869(hw_uint<32*4>& merged_3_FIFO_buf641) {
  return merged_3_FIFO_buf641;
}

hw_uint<128> lp_in1_2_buf84_to_gp_20437_ld606_cu2871(hw_uint<32*4>& lp_in1_2_buf84_to_gp_20437) {
  return lp_in1_2_buf84_to_gp_20437;
}

hw_uint<128> gp_in0_2_buf16_ld330_cu2873(hw_uint<32*4>& gp_in0_2_buf16) {
  return gp_in0_2_buf16;
}

hw_uint<64> gp_in1_3_buf72_ld394_cu2875(hw_uint<32*2>& gp_in1_3_buf72) {
  return gp_in1_3_buf72;
}

hw_uint<512> merged_0_reconstruct_lp138140_cu2877(hw_uint<32*16>& merged_0_FIFO_buf609, hw_uint<32*16>& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625) {
  hw_uint<32> merged_0_FIFO_buf609_lane_0 = merged_0_FIFO_buf609.extract<0, 31>();
  hw_uint<32> merged_0_FIFO_buf609_lane_1 = merged_0_FIFO_buf609.extract<32, 63>();
  hw_uint<32> merged_0_FIFO_buf609_lane_2 = merged_0_FIFO_buf609.extract<64, 95>();
  hw_uint<32> merged_0_FIFO_buf609_lane_3 = merged_0_FIFO_buf609.extract<96, 127>();
  hw_uint<32> merged_0_FIFO_buf609_lane_4 = merged_0_FIFO_buf609.extract<128, 159>();
  hw_uint<32> merged_0_FIFO_buf609_lane_5 = merged_0_FIFO_buf609.extract<160, 191>();
  hw_uint<32> merged_0_FIFO_buf609_lane_6 = merged_0_FIFO_buf609.extract<192, 223>();
  hw_uint<32> merged_0_FIFO_buf609_lane_7 = merged_0_FIFO_buf609.extract<224, 255>();
  hw_uint<32> merged_0_FIFO_buf609_lane_8 = merged_0_FIFO_buf609.extract<256, 287>();
  hw_uint<32> merged_0_FIFO_buf609_lane_9 = merged_0_FIFO_buf609.extract<288, 319>();
  hw_uint<32> merged_0_FIFO_buf609_lane_10 = merged_0_FIFO_buf609.extract<320, 351>();
  hw_uint<32> merged_0_FIFO_buf609_lane_11 = merged_0_FIFO_buf609.extract<352, 383>();
  hw_uint<32> merged_0_FIFO_buf609_lane_12 = merged_0_FIFO_buf609.extract<384, 415>();
  hw_uint<32> merged_0_FIFO_buf609_lane_13 = merged_0_FIFO_buf609.extract<416, 447>();
  hw_uint<32> merged_0_FIFO_buf609_lane_14 = merged_0_FIFO_buf609.extract<448, 479>();
  hw_uint<32> merged_0_FIFO_buf609_lane_15 = merged_0_FIFO_buf609.extract<480, 511>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<0, 31>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<32, 63>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<64, 95>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<96, 127>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_4 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<128, 159>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_5 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<160, 191>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_6 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<192, 223>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_7 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<224, 255>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_8 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<256, 287>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_9 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<288, 319>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_10 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<320, 351>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_11 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<352, 383>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_12 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<384, 415>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_13 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<416, 447>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_14 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<448, 479>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_15 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<480, 511>();

	
  hw_uint<32 > merged_0_FIFO_buf609_lane_0_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_0_pack, merged_0_FIFO_buf609_lane_0);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0);
  auto res_rc146_sm743_152302 = llf_add_float_32(merged_0_FIFO_buf609_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_1_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_1_pack, merged_0_FIFO_buf609_lane_1);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1);
  auto res_rc146_sm743_142300 = llf_add_float_32(merged_0_FIFO_buf609_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_2_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_2_pack, merged_0_FIFO_buf609_lane_2);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2);
  auto res_rc146_sm743_132298 = llf_add_float_32(merged_0_FIFO_buf609_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_3_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_3_pack, merged_0_FIFO_buf609_lane_3);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3);
  auto res_rc146_sm743_122296 = llf_add_float_32(merged_0_FIFO_buf609_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_4_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_4_pack, merged_0_FIFO_buf609_lane_4);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_4_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_4_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_4);
  auto res_rc146_sm743_112294 = llf_add_float_32(merged_0_FIFO_buf609_lane_4_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_4_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_5_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_5_pack, merged_0_FIFO_buf609_lane_5);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_5_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_5_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_5);
  auto res_rc146_sm743_102292 = llf_add_float_32(merged_0_FIFO_buf609_lane_5_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_5_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_6_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_6_pack, merged_0_FIFO_buf609_lane_6);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_6_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_6_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_6);
  auto res_rc146_sm743_92290 = llf_add_float_32(merged_0_FIFO_buf609_lane_6_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_6_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_7_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_7_pack, merged_0_FIFO_buf609_lane_7);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_7_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_7_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_7);
  auto res_rc146_sm743_82288 = llf_add_float_32(merged_0_FIFO_buf609_lane_7_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_7_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_8_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_8_pack, merged_0_FIFO_buf609_lane_8);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_8_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_8_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_8);
  auto res_rc146_sm743_72286 = llf_add_float_32(merged_0_FIFO_buf609_lane_8_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_8_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_9_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_9_pack, merged_0_FIFO_buf609_lane_9);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_9_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_9_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_9);
  auto res_rc146_sm743_62284 = llf_add_float_32(merged_0_FIFO_buf609_lane_9_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_9_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_10_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_10_pack, merged_0_FIFO_buf609_lane_10);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_10_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_10_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_10);
  auto res_rc146_sm743_52282 = llf_add_float_32(merged_0_FIFO_buf609_lane_10_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_10_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_11_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_11_pack, merged_0_FIFO_buf609_lane_11);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_11_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_11_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_11);
  auto res_rc146_sm743_42280 = llf_add_float_32(merged_0_FIFO_buf609_lane_11_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_11_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_12_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_12_pack, merged_0_FIFO_buf609_lane_12);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_12_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_12_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_12);
  auto res_rc146_sm743_32278 = llf_add_float_32(merged_0_FIFO_buf609_lane_12_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_12_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_13_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_13_pack, merged_0_FIFO_buf609_lane_13);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_13_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_13_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_13);
  auto res_rc146_sm743_22276 = llf_add_float_32(merged_0_FIFO_buf609_lane_13_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_13_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_14_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_14_pack, merged_0_FIFO_buf609_lane_14);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_14_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_14_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_14);
  auto res_rc146_sm743_12274 = llf_add_float_32(merged_0_FIFO_buf609_lane_14_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_14_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_15_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_15_pack, merged_0_FIFO_buf609_lane_15);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_15_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_15_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_15);
  auto res_rc146_sm743_02272 = llf_add_float_32(merged_0_FIFO_buf609_lane_15_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_15_pack);
  hw_uint<512 > return_value2878;
  set_at<0, 512, 32>(return_value2878, res_rc146_sm743_152302);
  set_at<32, 512, 32>(return_value2878, res_rc146_sm743_142300);
  set_at<64, 512, 32>(return_value2878, res_rc146_sm743_132298);
  set_at<96, 512, 32>(return_value2878, res_rc146_sm743_122296);
  set_at<128, 512, 32>(return_value2878, res_rc146_sm743_112294);
  set_at<160, 512, 32>(return_value2878, res_rc146_sm743_102292);
  set_at<192, 512, 32>(return_value2878, res_rc146_sm743_92290);
  set_at<224, 512, 32>(return_value2878, res_rc146_sm743_82288);
  set_at<256, 512, 32>(return_value2878, res_rc146_sm743_72286);
  set_at<288, 512, 32>(return_value2878, res_rc146_sm743_62284);
  set_at<320, 512, 32>(return_value2878, res_rc146_sm743_52282);
  set_at<352, 512, 32>(return_value2878, res_rc146_sm743_42280);
  set_at<384, 512, 32>(return_value2878, res_rc146_sm743_32278);
  set_at<416, 512, 32>(return_value2878, res_rc146_sm743_22276);
  set_at<448, 512, 32>(return_value2878, res_rc146_sm743_12274);
  set_at<480, 512, 32>(return_value2878, res_rc146_sm743_02272);
  return return_value2878;

}

hw_uint<512> pw_math_merged_0_reconstruct_lp138_buf141147149_cu2880(hw_uint<32*16>& merged_0_reconstruct_lp138_buf141_FIFO_buf613) {
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<0, 31>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<32, 63>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<64, 95>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<96, 127>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_4 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<128, 159>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_5 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<160, 191>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_6 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<192, 223>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_7 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<224, 255>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_8 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<256, 287>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_9 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<288, 319>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_10 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<320, 351>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_11 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<352, 383>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_12 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<384, 415>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_13 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<416, 447>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_14 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<448, 479>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_15 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<480, 511>();

	
  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_152334 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_142332 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_132330 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_122328 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_4_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_4_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_4);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_112326 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_4_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_5_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_5_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_5);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_102324 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_5_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_6_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_6_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_6);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_92322 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_6_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_7_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_7_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_7);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_82320 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_7_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_8_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_8_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_8);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_72318 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_8_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_9_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_9_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_9);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_62316 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_9_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_10_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_10_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_10);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_52314 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_10_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_11_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_11_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_11);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_42312 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_11_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_12_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_12_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_12);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_32310 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_12_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_13_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_13_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_13);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_22308 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_13_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_14_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_14_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_14);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_12306 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_14_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_15_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_15_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_15);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_02304 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_15_pack);
  hw_uint<512 > return_value2881;
  set_at<0, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_152334);
  set_at<32, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_142332);
  set_at<64, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_132330);
  set_at<96, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_122328);
  set_at<128, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_112326);
  set_at<160, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_102324);
  set_at<192, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_92322);
  set_at<224, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_82320);
  set_at<256, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_72318);
  set_at<288, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_62316);
  set_at<320, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_52314);
  set_at<352, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_42312);
  set_at<384, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_32310);
  set_at<416, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_22308);
  set_at<448, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_12306);
  set_at<480, 512, 32>(return_value2881, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm744_02304);
  return return_value2881;

}

hw_uint<128> gp_in1_266_cu2883(hw_uint<32*36>& gp_in1_1_buf56_FIFO_buf533) {
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
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_18 = gp_in1_1_buf56_FIFO_buf533.extract<576, 607>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_19 = gp_in1_1_buf56_FIFO_buf533.extract<608, 639>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_20 = gp_in1_1_buf56_FIFO_buf533.extract<640, 671>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_21 = gp_in1_1_buf56_FIFO_buf533.extract<672, 703>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_22 = gp_in1_1_buf56_FIFO_buf533.extract<704, 735>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_23 = gp_in1_1_buf56_FIFO_buf533.extract<736, 767>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_24 = gp_in1_1_buf56_FIFO_buf533.extract<768, 799>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_25 = gp_in1_1_buf56_FIFO_buf533.extract<800, 831>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_26 = gp_in1_1_buf56_FIFO_buf533.extract<832, 863>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_27 = gp_in1_1_buf56_FIFO_buf533.extract<864, 895>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_28 = gp_in1_1_buf56_FIFO_buf533.extract<896, 927>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_29 = gp_in1_1_buf56_FIFO_buf533.extract<928, 959>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_30 = gp_in1_1_buf56_FIFO_buf533.extract<960, 991>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_31 = gp_in1_1_buf56_FIFO_buf533.extract<992, 1023>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_32 = gp_in1_1_buf56_FIFO_buf533.extract<1024, 1055>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_33 = gp_in1_1_buf56_FIFO_buf533.extract<1056, 1087>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_34 = gp_in1_1_buf56_FIFO_buf533.extract<1088, 1119>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf533_lane_35 = gp_in1_1_buf56_FIFO_buf533.extract<1120, 1151>();

	
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
  auto res_gp_in1_266_merged297_sm745_32342 = gp_in1_266_cu295(gp_in1_1_buf56_FIFO_buf533_lane_8_pack);

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
  auto res_gp_in1_266_merged297_sm745_22340 = gp_in1_266_cu295(gp_in1_1_buf56_FIFO_buf533_lane_17_pack);

  hw_uint<288 > gp_in1_1_buf56_FIFO_buf533_lane_26_pack;
  set_at<0, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_26_pack, gp_in1_1_buf56_FIFO_buf533_lane_18);
  set_at<32, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_26_pack, gp_in1_1_buf56_FIFO_buf533_lane_19);
  set_at<64, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_26_pack, gp_in1_1_buf56_FIFO_buf533_lane_20);
  set_at<96, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_26_pack, gp_in1_1_buf56_FIFO_buf533_lane_21);
  set_at<128, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_26_pack, gp_in1_1_buf56_FIFO_buf533_lane_22);
  set_at<160, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_26_pack, gp_in1_1_buf56_FIFO_buf533_lane_23);
  set_at<192, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_26_pack, gp_in1_1_buf56_FIFO_buf533_lane_24);
  set_at<224, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_26_pack, gp_in1_1_buf56_FIFO_buf533_lane_25);
  set_at<256, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_26_pack, gp_in1_1_buf56_FIFO_buf533_lane_26);
  auto res_gp_in1_266_merged297_sm745_12338 = gp_in1_266_cu295(gp_in1_1_buf56_FIFO_buf533_lane_26_pack);

  hw_uint<288 > gp_in1_1_buf56_FIFO_buf533_lane_35_pack;
  set_at<0, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_35_pack, gp_in1_1_buf56_FIFO_buf533_lane_27);
  set_at<32, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_35_pack, gp_in1_1_buf56_FIFO_buf533_lane_28);
  set_at<64, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_35_pack, gp_in1_1_buf56_FIFO_buf533_lane_29);
  set_at<96, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_35_pack, gp_in1_1_buf56_FIFO_buf533_lane_30);
  set_at<128, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_35_pack, gp_in1_1_buf56_FIFO_buf533_lane_31);
  set_at<160, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_35_pack, gp_in1_1_buf56_FIFO_buf533_lane_32);
  set_at<192, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_35_pack, gp_in1_1_buf56_FIFO_buf533_lane_33);
  set_at<224, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_35_pack, gp_in1_1_buf56_FIFO_buf533_lane_34);
  set_at<256, 288, 32>(gp_in1_1_buf56_FIFO_buf533_lane_35_pack, gp_in1_1_buf56_FIFO_buf533_lane_35);
  auto res_gp_in1_266_merged297_sm745_02336 = gp_in1_266_cu295(gp_in1_1_buf56_FIFO_buf533_lane_35_pack);
  hw_uint<128 > return_value2884;
  set_at<0, 128, 32>(return_value2884, res_gp_in1_266_merged297_sm745_32342);
  set_at<32, 128, 32>(return_value2884, res_gp_in1_266_merged297_sm745_22340);
  set_at<64, 128, 32>(return_value2884, res_gp_in1_266_merged297_sm745_12338);
  set_at<96, 128, 32>(return_value2884, res_gp_in1_266_merged297_sm745_02336);
  return return_value2884;

}

hw_uint<512> us_merged_1_reconstruct_lp129_buf132144_cu2886(hw_uint<32*16>& merged_1_reconstruct_lp129_buf132_FIFO_buf621) {
  return merged_1_reconstruct_lp129_buf132_FIFO_buf621;
}

hw_uint<256> gp_in1_158_cu2888(hw_uint<32*72>& in1_FIFO_buf577) {
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
  hw_uint<32> in1_FIFO_buf577_lane_36 = in1_FIFO_buf577.extract<1152, 1183>();
  hw_uint<32> in1_FIFO_buf577_lane_37 = in1_FIFO_buf577.extract<1184, 1215>();
  hw_uint<32> in1_FIFO_buf577_lane_38 = in1_FIFO_buf577.extract<1216, 1247>();
  hw_uint<32> in1_FIFO_buf577_lane_39 = in1_FIFO_buf577.extract<1248, 1279>();
  hw_uint<32> in1_FIFO_buf577_lane_40 = in1_FIFO_buf577.extract<1280, 1311>();
  hw_uint<32> in1_FIFO_buf577_lane_41 = in1_FIFO_buf577.extract<1312, 1343>();
  hw_uint<32> in1_FIFO_buf577_lane_42 = in1_FIFO_buf577.extract<1344, 1375>();
  hw_uint<32> in1_FIFO_buf577_lane_43 = in1_FIFO_buf577.extract<1376, 1407>();
  hw_uint<32> in1_FIFO_buf577_lane_44 = in1_FIFO_buf577.extract<1408, 1439>();
  hw_uint<32> in1_FIFO_buf577_lane_45 = in1_FIFO_buf577.extract<1440, 1471>();
  hw_uint<32> in1_FIFO_buf577_lane_46 = in1_FIFO_buf577.extract<1472, 1503>();
  hw_uint<32> in1_FIFO_buf577_lane_47 = in1_FIFO_buf577.extract<1504, 1535>();
  hw_uint<32> in1_FIFO_buf577_lane_48 = in1_FIFO_buf577.extract<1536, 1567>();
  hw_uint<32> in1_FIFO_buf577_lane_49 = in1_FIFO_buf577.extract<1568, 1599>();
  hw_uint<32> in1_FIFO_buf577_lane_50 = in1_FIFO_buf577.extract<1600, 1631>();
  hw_uint<32> in1_FIFO_buf577_lane_51 = in1_FIFO_buf577.extract<1632, 1663>();
  hw_uint<32> in1_FIFO_buf577_lane_52 = in1_FIFO_buf577.extract<1664, 1695>();
  hw_uint<32> in1_FIFO_buf577_lane_53 = in1_FIFO_buf577.extract<1696, 1727>();
  hw_uint<32> in1_FIFO_buf577_lane_54 = in1_FIFO_buf577.extract<1728, 1759>();
  hw_uint<32> in1_FIFO_buf577_lane_55 = in1_FIFO_buf577.extract<1760, 1791>();
  hw_uint<32> in1_FIFO_buf577_lane_56 = in1_FIFO_buf577.extract<1792, 1823>();
  hw_uint<32> in1_FIFO_buf577_lane_57 = in1_FIFO_buf577.extract<1824, 1855>();
  hw_uint<32> in1_FIFO_buf577_lane_58 = in1_FIFO_buf577.extract<1856, 1887>();
  hw_uint<32> in1_FIFO_buf577_lane_59 = in1_FIFO_buf577.extract<1888, 1919>();
  hw_uint<32> in1_FIFO_buf577_lane_60 = in1_FIFO_buf577.extract<1920, 1951>();
  hw_uint<32> in1_FIFO_buf577_lane_61 = in1_FIFO_buf577.extract<1952, 1983>();
  hw_uint<32> in1_FIFO_buf577_lane_62 = in1_FIFO_buf577.extract<1984, 2015>();
  hw_uint<32> in1_FIFO_buf577_lane_63 = in1_FIFO_buf577.extract<2016, 2047>();
  hw_uint<32> in1_FIFO_buf577_lane_64 = in1_FIFO_buf577.extract<2048, 2079>();
  hw_uint<32> in1_FIFO_buf577_lane_65 = in1_FIFO_buf577.extract<2080, 2111>();
  hw_uint<32> in1_FIFO_buf577_lane_66 = in1_FIFO_buf577.extract<2112, 2143>();
  hw_uint<32> in1_FIFO_buf577_lane_67 = in1_FIFO_buf577.extract<2144, 2175>();
  hw_uint<32> in1_FIFO_buf577_lane_68 = in1_FIFO_buf577.extract<2176, 2207>();
  hw_uint<32> in1_FIFO_buf577_lane_69 = in1_FIFO_buf577.extract<2208, 2239>();
  hw_uint<32> in1_FIFO_buf577_lane_70 = in1_FIFO_buf577.extract<2240, 2271>();
  hw_uint<32> in1_FIFO_buf577_lane_71 = in1_FIFO_buf577.extract<2272, 2303>();

	
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
  auto res_gp_in1_158_merged300_sm747_72390 = gp_in1_158_cu298(in1_FIFO_buf577_lane_8_pack);

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
  auto res_gp_in1_158_merged300_sm747_62388 = gp_in1_158_cu298(in1_FIFO_buf577_lane_17_pack);

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
  auto res_gp_in1_158_merged300_sm747_52386 = gp_in1_158_cu298(in1_FIFO_buf577_lane_26_pack);

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
  auto res_gp_in1_158_merged300_sm747_42384 = gp_in1_158_cu298(in1_FIFO_buf577_lane_35_pack);

  hw_uint<288 > in1_FIFO_buf577_lane_44_pack;
  set_at<0, 288, 32>(in1_FIFO_buf577_lane_44_pack, in1_FIFO_buf577_lane_36);
  set_at<32, 288, 32>(in1_FIFO_buf577_lane_44_pack, in1_FIFO_buf577_lane_37);
  set_at<64, 288, 32>(in1_FIFO_buf577_lane_44_pack, in1_FIFO_buf577_lane_38);
  set_at<96, 288, 32>(in1_FIFO_buf577_lane_44_pack, in1_FIFO_buf577_lane_39);
  set_at<128, 288, 32>(in1_FIFO_buf577_lane_44_pack, in1_FIFO_buf577_lane_40);
  set_at<160, 288, 32>(in1_FIFO_buf577_lane_44_pack, in1_FIFO_buf577_lane_41);
  set_at<192, 288, 32>(in1_FIFO_buf577_lane_44_pack, in1_FIFO_buf577_lane_42);
  set_at<224, 288, 32>(in1_FIFO_buf577_lane_44_pack, in1_FIFO_buf577_lane_43);
  set_at<256, 288, 32>(in1_FIFO_buf577_lane_44_pack, in1_FIFO_buf577_lane_44);
  auto res_gp_in1_158_merged300_sm747_32382 = gp_in1_158_cu298(in1_FIFO_buf577_lane_44_pack);

  hw_uint<288 > in1_FIFO_buf577_lane_53_pack;
  set_at<0, 288, 32>(in1_FIFO_buf577_lane_53_pack, in1_FIFO_buf577_lane_45);
  set_at<32, 288, 32>(in1_FIFO_buf577_lane_53_pack, in1_FIFO_buf577_lane_46);
  set_at<64, 288, 32>(in1_FIFO_buf577_lane_53_pack, in1_FIFO_buf577_lane_47);
  set_at<96, 288, 32>(in1_FIFO_buf577_lane_53_pack, in1_FIFO_buf577_lane_48);
  set_at<128, 288, 32>(in1_FIFO_buf577_lane_53_pack, in1_FIFO_buf577_lane_49);
  set_at<160, 288, 32>(in1_FIFO_buf577_lane_53_pack, in1_FIFO_buf577_lane_50);
  set_at<192, 288, 32>(in1_FIFO_buf577_lane_53_pack, in1_FIFO_buf577_lane_51);
  set_at<224, 288, 32>(in1_FIFO_buf577_lane_53_pack, in1_FIFO_buf577_lane_52);
  set_at<256, 288, 32>(in1_FIFO_buf577_lane_53_pack, in1_FIFO_buf577_lane_53);
  auto res_gp_in1_158_merged300_sm747_22380 = gp_in1_158_cu298(in1_FIFO_buf577_lane_53_pack);

  hw_uint<288 > in1_FIFO_buf577_lane_62_pack;
  set_at<0, 288, 32>(in1_FIFO_buf577_lane_62_pack, in1_FIFO_buf577_lane_54);
  set_at<32, 288, 32>(in1_FIFO_buf577_lane_62_pack, in1_FIFO_buf577_lane_55);
  set_at<64, 288, 32>(in1_FIFO_buf577_lane_62_pack, in1_FIFO_buf577_lane_56);
  set_at<96, 288, 32>(in1_FIFO_buf577_lane_62_pack, in1_FIFO_buf577_lane_57);
  set_at<128, 288, 32>(in1_FIFO_buf577_lane_62_pack, in1_FIFO_buf577_lane_58);
  set_at<160, 288, 32>(in1_FIFO_buf577_lane_62_pack, in1_FIFO_buf577_lane_59);
  set_at<192, 288, 32>(in1_FIFO_buf577_lane_62_pack, in1_FIFO_buf577_lane_60);
  set_at<224, 288, 32>(in1_FIFO_buf577_lane_62_pack, in1_FIFO_buf577_lane_61);
  set_at<256, 288, 32>(in1_FIFO_buf577_lane_62_pack, in1_FIFO_buf577_lane_62);
  auto res_gp_in1_158_merged300_sm747_12378 = gp_in1_158_cu298(in1_FIFO_buf577_lane_62_pack);

  hw_uint<288 > in1_FIFO_buf577_lane_71_pack;
  set_at<0, 288, 32>(in1_FIFO_buf577_lane_71_pack, in1_FIFO_buf577_lane_63);
  set_at<32, 288, 32>(in1_FIFO_buf577_lane_71_pack, in1_FIFO_buf577_lane_64);
  set_at<64, 288, 32>(in1_FIFO_buf577_lane_71_pack, in1_FIFO_buf577_lane_65);
  set_at<96, 288, 32>(in1_FIFO_buf577_lane_71_pack, in1_FIFO_buf577_lane_66);
  set_at<128, 288, 32>(in1_FIFO_buf577_lane_71_pack, in1_FIFO_buf577_lane_67);
  set_at<160, 288, 32>(in1_FIFO_buf577_lane_71_pack, in1_FIFO_buf577_lane_68);
  set_at<192, 288, 32>(in1_FIFO_buf577_lane_71_pack, in1_FIFO_buf577_lane_69);
  set_at<224, 288, 32>(in1_FIFO_buf577_lane_71_pack, in1_FIFO_buf577_lane_70);
  set_at<256, 288, 32>(in1_FIFO_buf577_lane_71_pack, in1_FIFO_buf577_lane_71);
  auto res_gp_in1_158_merged300_sm747_02376 = gp_in1_158_cu298(in1_FIFO_buf577_lane_71_pack);
  hw_uint<256 > return_value2889;
  set_at<0, 256, 32>(return_value2889, res_gp_in1_158_merged300_sm747_72390);
  set_at<32, 256, 32>(return_value2889, res_gp_in1_158_merged300_sm747_62388);
  set_at<64, 256, 32>(return_value2889, res_gp_in1_158_merged300_sm747_52386);
  set_at<96, 256, 32>(return_value2889, res_gp_in1_158_merged300_sm747_42384);
  set_at<128, 256, 32>(return_value2889, res_gp_in1_158_merged300_sm747_32382);
  set_at<160, 256, 32>(return_value2889, res_gp_in1_158_merged300_sm747_22380);
  set_at<192, 256, 32>(return_value2889, res_gp_in1_158_merged300_sm747_12378);
  set_at<224, 256, 32>(return_value2889, res_gp_in1_158_merged300_sm747_02376);
  return return_value2889;

}

hw_uint<512> lp_in1_0102_cu2891(hw_uint<32*16>& gp_in1_1_buf56_us96_FIFO_buf537, hw_uint<32*16>& in1_FIFO_buf581) {
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_0 = gp_in1_1_buf56_us96_FIFO_buf537.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_1 = gp_in1_1_buf56_us96_FIFO_buf537.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_2 = gp_in1_1_buf56_us96_FIFO_buf537.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_3 = gp_in1_1_buf56_us96_FIFO_buf537.extract<96, 127>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_4 = gp_in1_1_buf56_us96_FIFO_buf537.extract<128, 159>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_5 = gp_in1_1_buf56_us96_FIFO_buf537.extract<160, 191>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_6 = gp_in1_1_buf56_us96_FIFO_buf537.extract<192, 223>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_7 = gp_in1_1_buf56_us96_FIFO_buf537.extract<224, 255>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_8 = gp_in1_1_buf56_us96_FIFO_buf537.extract<256, 287>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_9 = gp_in1_1_buf56_us96_FIFO_buf537.extract<288, 319>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_10 = gp_in1_1_buf56_us96_FIFO_buf537.extract<320, 351>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_11 = gp_in1_1_buf56_us96_FIFO_buf537.extract<352, 383>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_12 = gp_in1_1_buf56_us96_FIFO_buf537.extract<384, 415>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_13 = gp_in1_1_buf56_us96_FIFO_buf537.extract<416, 447>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_14 = gp_in1_1_buf56_us96_FIFO_buf537.extract<448, 479>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_15 = gp_in1_1_buf56_us96_FIFO_buf537.extract<480, 511>();
  hw_uint<32> in1_FIFO_buf581_lane_0 = in1_FIFO_buf581.extract<0, 31>();
  hw_uint<32> in1_FIFO_buf581_lane_1 = in1_FIFO_buf581.extract<32, 63>();
  hw_uint<32> in1_FIFO_buf581_lane_2 = in1_FIFO_buf581.extract<64, 95>();
  hw_uint<32> in1_FIFO_buf581_lane_3 = in1_FIFO_buf581.extract<96, 127>();
  hw_uint<32> in1_FIFO_buf581_lane_4 = in1_FIFO_buf581.extract<128, 159>();
  hw_uint<32> in1_FIFO_buf581_lane_5 = in1_FIFO_buf581.extract<160, 191>();
  hw_uint<32> in1_FIFO_buf581_lane_6 = in1_FIFO_buf581.extract<192, 223>();
  hw_uint<32> in1_FIFO_buf581_lane_7 = in1_FIFO_buf581.extract<224, 255>();
  hw_uint<32> in1_FIFO_buf581_lane_8 = in1_FIFO_buf581.extract<256, 287>();
  hw_uint<32> in1_FIFO_buf581_lane_9 = in1_FIFO_buf581.extract<288, 319>();
  hw_uint<32> in1_FIFO_buf581_lane_10 = in1_FIFO_buf581.extract<320, 351>();
  hw_uint<32> in1_FIFO_buf581_lane_11 = in1_FIFO_buf581.extract<352, 383>();
  hw_uint<32> in1_FIFO_buf581_lane_12 = in1_FIFO_buf581.extract<384, 415>();
  hw_uint<32> in1_FIFO_buf581_lane_13 = in1_FIFO_buf581.extract<416, 447>();
  hw_uint<32> in1_FIFO_buf581_lane_14 = in1_FIFO_buf581.extract<448, 479>();
  hw_uint<32> in1_FIFO_buf581_lane_15 = in1_FIFO_buf581.extract<480, 511>();

	
  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_0);
  hw_uint<32 > in1_FIFO_buf581_lane_0_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_0_pack, in1_FIFO_buf581_lane_0);
  auto res_diff103_sm748_152422 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack, in1_FIFO_buf581_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_1);
  hw_uint<32 > in1_FIFO_buf581_lane_1_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_1_pack, in1_FIFO_buf581_lane_1);
  auto res_diff103_sm748_142420 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack, in1_FIFO_buf581_lane_1_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_2_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_2);
  hw_uint<32 > in1_FIFO_buf581_lane_2_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_2_pack, in1_FIFO_buf581_lane_2);
  auto res_diff103_sm748_132418 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_2_pack, in1_FIFO_buf581_lane_2_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_3_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_3);
  hw_uint<32 > in1_FIFO_buf581_lane_3_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_3_pack, in1_FIFO_buf581_lane_3);
  auto res_diff103_sm748_122416 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_3_pack, in1_FIFO_buf581_lane_3_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_4_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_4_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_4);
  hw_uint<32 > in1_FIFO_buf581_lane_4_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_4_pack, in1_FIFO_buf581_lane_4);
  auto res_diff103_sm748_112414 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_4_pack, in1_FIFO_buf581_lane_4_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_5_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_5_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_5);
  hw_uint<32 > in1_FIFO_buf581_lane_5_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_5_pack, in1_FIFO_buf581_lane_5);
  auto res_diff103_sm748_102412 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_5_pack, in1_FIFO_buf581_lane_5_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_6_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_6_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_6);
  hw_uint<32 > in1_FIFO_buf581_lane_6_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_6_pack, in1_FIFO_buf581_lane_6);
  auto res_diff103_sm748_92410 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_6_pack, in1_FIFO_buf581_lane_6_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_7_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_7_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_7);
  hw_uint<32 > in1_FIFO_buf581_lane_7_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_7_pack, in1_FIFO_buf581_lane_7);
  auto res_diff103_sm748_82408 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_7_pack, in1_FIFO_buf581_lane_7_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_8_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_8_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_8);
  hw_uint<32 > in1_FIFO_buf581_lane_8_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_8_pack, in1_FIFO_buf581_lane_8);
  auto res_diff103_sm748_72406 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_8_pack, in1_FIFO_buf581_lane_8_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_9_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_9_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_9);
  hw_uint<32 > in1_FIFO_buf581_lane_9_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_9_pack, in1_FIFO_buf581_lane_9);
  auto res_diff103_sm748_62404 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_9_pack, in1_FIFO_buf581_lane_9_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_10_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_10_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_10);
  hw_uint<32 > in1_FIFO_buf581_lane_10_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_10_pack, in1_FIFO_buf581_lane_10);
  auto res_diff103_sm748_52402 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_10_pack, in1_FIFO_buf581_lane_10_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_11_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_11_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_11);
  hw_uint<32 > in1_FIFO_buf581_lane_11_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_11_pack, in1_FIFO_buf581_lane_11);
  auto res_diff103_sm748_42400 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_11_pack, in1_FIFO_buf581_lane_11_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_12_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_12_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_12);
  hw_uint<32 > in1_FIFO_buf581_lane_12_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_12_pack, in1_FIFO_buf581_lane_12);
  auto res_diff103_sm748_32398 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_12_pack, in1_FIFO_buf581_lane_12_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_13_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_13_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_13);
  hw_uint<32 > in1_FIFO_buf581_lane_13_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_13_pack, in1_FIFO_buf581_lane_13);
  auto res_diff103_sm748_22396 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_13_pack, in1_FIFO_buf581_lane_13_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_14_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_14_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_14);
  hw_uint<32 > in1_FIFO_buf581_lane_14_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_14_pack, in1_FIFO_buf581_lane_14);
  auto res_diff103_sm748_12394 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_14_pack, in1_FIFO_buf581_lane_14_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_15_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_15_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_15);
  hw_uint<32 > in1_FIFO_buf581_lane_15_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_15_pack, in1_FIFO_buf581_lane_15);
  auto res_diff103_sm748_02392 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_15_pack, in1_FIFO_buf581_lane_15_pack);
  hw_uint<512 > return_value2892;
  set_at<0, 512, 32>(return_value2892, res_diff103_sm748_152422);
  set_at<32, 512, 32>(return_value2892, res_diff103_sm748_142420);
  set_at<64, 512, 32>(return_value2892, res_diff103_sm748_132418);
  set_at<96, 512, 32>(return_value2892, res_diff103_sm748_122416);
  set_at<128, 512, 32>(return_value2892, res_diff103_sm748_112414);
  set_at<160, 512, 32>(return_value2892, res_diff103_sm748_102412);
  set_at<192, 512, 32>(return_value2892, res_diff103_sm748_92410);
  set_at<224, 512, 32>(return_value2892, res_diff103_sm748_82408);
  set_at<256, 512, 32>(return_value2892, res_diff103_sm748_72406);
  set_at<288, 512, 32>(return_value2892, res_diff103_sm748_62404);
  set_at<320, 512, 32>(return_value2892, res_diff103_sm748_52402);
  set_at<352, 512, 32>(return_value2892, res_diff103_sm748_42400);
  set_at<384, 512, 32>(return_value2892, res_diff103_sm748_32398);
  set_at<416, 512, 32>(return_value2892, res_diff103_sm748_22396);
  set_at<448, 512, 32>(return_value2892, res_diff103_sm748_12394);
  set_at<480, 512, 32>(return_value2892, res_diff103_sm748_02392);
  return return_value2892;

}

hw_uint<512> us_gp_in1_1_buf5698_cu2894(hw_uint<32*16>& gp_in1_1_buf56_FIFO_buf529) {
  return gp_in1_1_buf56_FIFO_buf529;
}

hw_uint<256> gp_in0_110_cu2896(hw_uint<32*72>& in0_FIFO_buf569) {
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
  hw_uint<32> in0_FIFO_buf569_lane_36 = in0_FIFO_buf569.extract<1152, 1183>();
  hw_uint<32> in0_FIFO_buf569_lane_37 = in0_FIFO_buf569.extract<1184, 1215>();
  hw_uint<32> in0_FIFO_buf569_lane_38 = in0_FIFO_buf569.extract<1216, 1247>();
  hw_uint<32> in0_FIFO_buf569_lane_39 = in0_FIFO_buf569.extract<1248, 1279>();
  hw_uint<32> in0_FIFO_buf569_lane_40 = in0_FIFO_buf569.extract<1280, 1311>();
  hw_uint<32> in0_FIFO_buf569_lane_41 = in0_FIFO_buf569.extract<1312, 1343>();
  hw_uint<32> in0_FIFO_buf569_lane_42 = in0_FIFO_buf569.extract<1344, 1375>();
  hw_uint<32> in0_FIFO_buf569_lane_43 = in0_FIFO_buf569.extract<1376, 1407>();
  hw_uint<32> in0_FIFO_buf569_lane_44 = in0_FIFO_buf569.extract<1408, 1439>();
  hw_uint<32> in0_FIFO_buf569_lane_45 = in0_FIFO_buf569.extract<1440, 1471>();
  hw_uint<32> in0_FIFO_buf569_lane_46 = in0_FIFO_buf569.extract<1472, 1503>();
  hw_uint<32> in0_FIFO_buf569_lane_47 = in0_FIFO_buf569.extract<1504, 1535>();
  hw_uint<32> in0_FIFO_buf569_lane_48 = in0_FIFO_buf569.extract<1536, 1567>();
  hw_uint<32> in0_FIFO_buf569_lane_49 = in0_FIFO_buf569.extract<1568, 1599>();
  hw_uint<32> in0_FIFO_buf569_lane_50 = in0_FIFO_buf569.extract<1600, 1631>();
  hw_uint<32> in0_FIFO_buf569_lane_51 = in0_FIFO_buf569.extract<1632, 1663>();
  hw_uint<32> in0_FIFO_buf569_lane_52 = in0_FIFO_buf569.extract<1664, 1695>();
  hw_uint<32> in0_FIFO_buf569_lane_53 = in0_FIFO_buf569.extract<1696, 1727>();
  hw_uint<32> in0_FIFO_buf569_lane_54 = in0_FIFO_buf569.extract<1728, 1759>();
  hw_uint<32> in0_FIFO_buf569_lane_55 = in0_FIFO_buf569.extract<1760, 1791>();
  hw_uint<32> in0_FIFO_buf569_lane_56 = in0_FIFO_buf569.extract<1792, 1823>();
  hw_uint<32> in0_FIFO_buf569_lane_57 = in0_FIFO_buf569.extract<1824, 1855>();
  hw_uint<32> in0_FIFO_buf569_lane_58 = in0_FIFO_buf569.extract<1856, 1887>();
  hw_uint<32> in0_FIFO_buf569_lane_59 = in0_FIFO_buf569.extract<1888, 1919>();
  hw_uint<32> in0_FIFO_buf569_lane_60 = in0_FIFO_buf569.extract<1920, 1951>();
  hw_uint<32> in0_FIFO_buf569_lane_61 = in0_FIFO_buf569.extract<1952, 1983>();
  hw_uint<32> in0_FIFO_buf569_lane_62 = in0_FIFO_buf569.extract<1984, 2015>();
  hw_uint<32> in0_FIFO_buf569_lane_63 = in0_FIFO_buf569.extract<2016, 2047>();
  hw_uint<32> in0_FIFO_buf569_lane_64 = in0_FIFO_buf569.extract<2048, 2079>();
  hw_uint<32> in0_FIFO_buf569_lane_65 = in0_FIFO_buf569.extract<2080, 2111>();
  hw_uint<32> in0_FIFO_buf569_lane_66 = in0_FIFO_buf569.extract<2112, 2143>();
  hw_uint<32> in0_FIFO_buf569_lane_67 = in0_FIFO_buf569.extract<2144, 2175>();
  hw_uint<32> in0_FIFO_buf569_lane_68 = in0_FIFO_buf569.extract<2176, 2207>();
  hw_uint<32> in0_FIFO_buf569_lane_69 = in0_FIFO_buf569.extract<2208, 2239>();
  hw_uint<32> in0_FIFO_buf569_lane_70 = in0_FIFO_buf569.extract<2240, 2271>();
  hw_uint<32> in0_FIFO_buf569_lane_71 = in0_FIFO_buf569.extract<2272, 2303>();

	
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
  auto res_gp_in0_110_merged303_sm750_72470 = gp_in0_110_cu301(in0_FIFO_buf569_lane_8_pack);

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
  auto res_gp_in0_110_merged303_sm750_62468 = gp_in0_110_cu301(in0_FIFO_buf569_lane_17_pack);

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
  auto res_gp_in0_110_merged303_sm750_52466 = gp_in0_110_cu301(in0_FIFO_buf569_lane_26_pack);

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
  auto res_gp_in0_110_merged303_sm750_42464 = gp_in0_110_cu301(in0_FIFO_buf569_lane_35_pack);

  hw_uint<288 > in0_FIFO_buf569_lane_44_pack;
  set_at<0, 288, 32>(in0_FIFO_buf569_lane_44_pack, in0_FIFO_buf569_lane_36);
  set_at<32, 288, 32>(in0_FIFO_buf569_lane_44_pack, in0_FIFO_buf569_lane_37);
  set_at<64, 288, 32>(in0_FIFO_buf569_lane_44_pack, in0_FIFO_buf569_lane_38);
  set_at<96, 288, 32>(in0_FIFO_buf569_lane_44_pack, in0_FIFO_buf569_lane_39);
  set_at<128, 288, 32>(in0_FIFO_buf569_lane_44_pack, in0_FIFO_buf569_lane_40);
  set_at<160, 288, 32>(in0_FIFO_buf569_lane_44_pack, in0_FIFO_buf569_lane_41);
  set_at<192, 288, 32>(in0_FIFO_buf569_lane_44_pack, in0_FIFO_buf569_lane_42);
  set_at<224, 288, 32>(in0_FIFO_buf569_lane_44_pack, in0_FIFO_buf569_lane_43);
  set_at<256, 288, 32>(in0_FIFO_buf569_lane_44_pack, in0_FIFO_buf569_lane_44);
  auto res_gp_in0_110_merged303_sm750_32462 = gp_in0_110_cu301(in0_FIFO_buf569_lane_44_pack);

  hw_uint<288 > in0_FIFO_buf569_lane_53_pack;
  set_at<0, 288, 32>(in0_FIFO_buf569_lane_53_pack, in0_FIFO_buf569_lane_45);
  set_at<32, 288, 32>(in0_FIFO_buf569_lane_53_pack, in0_FIFO_buf569_lane_46);
  set_at<64, 288, 32>(in0_FIFO_buf569_lane_53_pack, in0_FIFO_buf569_lane_47);
  set_at<96, 288, 32>(in0_FIFO_buf569_lane_53_pack, in0_FIFO_buf569_lane_48);
  set_at<128, 288, 32>(in0_FIFO_buf569_lane_53_pack, in0_FIFO_buf569_lane_49);
  set_at<160, 288, 32>(in0_FIFO_buf569_lane_53_pack, in0_FIFO_buf569_lane_50);
  set_at<192, 288, 32>(in0_FIFO_buf569_lane_53_pack, in0_FIFO_buf569_lane_51);
  set_at<224, 288, 32>(in0_FIFO_buf569_lane_53_pack, in0_FIFO_buf569_lane_52);
  set_at<256, 288, 32>(in0_FIFO_buf569_lane_53_pack, in0_FIFO_buf569_lane_53);
  auto res_gp_in0_110_merged303_sm750_22460 = gp_in0_110_cu301(in0_FIFO_buf569_lane_53_pack);

  hw_uint<288 > in0_FIFO_buf569_lane_62_pack;
  set_at<0, 288, 32>(in0_FIFO_buf569_lane_62_pack, in0_FIFO_buf569_lane_54);
  set_at<32, 288, 32>(in0_FIFO_buf569_lane_62_pack, in0_FIFO_buf569_lane_55);
  set_at<64, 288, 32>(in0_FIFO_buf569_lane_62_pack, in0_FIFO_buf569_lane_56);
  set_at<96, 288, 32>(in0_FIFO_buf569_lane_62_pack, in0_FIFO_buf569_lane_57);
  set_at<128, 288, 32>(in0_FIFO_buf569_lane_62_pack, in0_FIFO_buf569_lane_58);
  set_at<160, 288, 32>(in0_FIFO_buf569_lane_62_pack, in0_FIFO_buf569_lane_59);
  set_at<192, 288, 32>(in0_FIFO_buf569_lane_62_pack, in0_FIFO_buf569_lane_60);
  set_at<224, 288, 32>(in0_FIFO_buf569_lane_62_pack, in0_FIFO_buf569_lane_61);
  set_at<256, 288, 32>(in0_FIFO_buf569_lane_62_pack, in0_FIFO_buf569_lane_62);
  auto res_gp_in0_110_merged303_sm750_12458 = gp_in0_110_cu301(in0_FIFO_buf569_lane_62_pack);

  hw_uint<288 > in0_FIFO_buf569_lane_71_pack;
  set_at<0, 288, 32>(in0_FIFO_buf569_lane_71_pack, in0_FIFO_buf569_lane_63);
  set_at<32, 288, 32>(in0_FIFO_buf569_lane_71_pack, in0_FIFO_buf569_lane_64);
  set_at<64, 288, 32>(in0_FIFO_buf569_lane_71_pack, in0_FIFO_buf569_lane_65);
  set_at<96, 288, 32>(in0_FIFO_buf569_lane_71_pack, in0_FIFO_buf569_lane_66);
  set_at<128, 288, 32>(in0_FIFO_buf569_lane_71_pack, in0_FIFO_buf569_lane_67);
  set_at<160, 288, 32>(in0_FIFO_buf569_lane_71_pack, in0_FIFO_buf569_lane_68);
  set_at<192, 288, 32>(in0_FIFO_buf569_lane_71_pack, in0_FIFO_buf569_lane_69);
  set_at<224, 288, 32>(in0_FIFO_buf569_lane_71_pack, in0_FIFO_buf569_lane_70);
  set_at<256, 288, 32>(in0_FIFO_buf569_lane_71_pack, in0_FIFO_buf569_lane_71);
  auto res_gp_in0_110_merged303_sm750_02456 = gp_in0_110_cu301(in0_FIFO_buf569_lane_71_pack);
  hw_uint<256 > return_value2897;
  set_at<0, 256, 32>(return_value2897, res_gp_in0_110_merged303_sm750_72470);
  set_at<32, 256, 32>(return_value2897, res_gp_in0_110_merged303_sm750_62468);
  set_at<64, 256, 32>(return_value2897, res_gp_in0_110_merged303_sm750_52466);
  set_at<96, 256, 32>(return_value2897, res_gp_in0_110_merged303_sm750_42464);
  set_at<128, 256, 32>(return_value2897, res_gp_in0_110_merged303_sm750_32462);
  set_at<160, 256, 32>(return_value2897, res_gp_in0_110_merged303_sm750_22460);
  set_at<192, 256, 32>(return_value2897, res_gp_in0_110_merged303_sm750_12458);
  set_at<224, 256, 32>(return_value2897, res_gp_in0_110_merged303_sm750_02456);
  return return_value2897;

}

hw_uint<64> gp_in1_374_cu2899(hw_uint<32*18>& gp_in1_2_buf64_FIFO_buf549) {
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_0 = gp_in1_2_buf64_FIFO_buf549.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_1 = gp_in1_2_buf64_FIFO_buf549.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_2 = gp_in1_2_buf64_FIFO_buf549.extract<64, 95>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_3 = gp_in1_2_buf64_FIFO_buf549.extract<96, 127>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_4 = gp_in1_2_buf64_FIFO_buf549.extract<128, 159>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_5 = gp_in1_2_buf64_FIFO_buf549.extract<160, 191>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_6 = gp_in1_2_buf64_FIFO_buf549.extract<192, 223>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_7 = gp_in1_2_buf64_FIFO_buf549.extract<224, 255>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_8 = gp_in1_2_buf64_FIFO_buf549.extract<256, 287>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_9 = gp_in1_2_buf64_FIFO_buf549.extract<288, 319>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_10 = gp_in1_2_buf64_FIFO_buf549.extract<320, 351>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_11 = gp_in1_2_buf64_FIFO_buf549.extract<352, 383>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_12 = gp_in1_2_buf64_FIFO_buf549.extract<384, 415>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_13 = gp_in1_2_buf64_FIFO_buf549.extract<416, 447>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_14 = gp_in1_2_buf64_FIFO_buf549.extract<448, 479>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_15 = gp_in1_2_buf64_FIFO_buf549.extract<480, 511>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_16 = gp_in1_2_buf64_FIFO_buf549.extract<512, 543>();
  hw_uint<32> gp_in1_2_buf64_FIFO_buf549_lane_17 = gp_in1_2_buf64_FIFO_buf549.extract<544, 575>();

	
  hw_uint<288 > gp_in1_2_buf64_FIFO_buf549_lane_8_pack;
  set_at<0, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_8_pack, gp_in1_2_buf64_FIFO_buf549_lane_0);
  set_at<32, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_8_pack, gp_in1_2_buf64_FIFO_buf549_lane_1);
  set_at<64, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_8_pack, gp_in1_2_buf64_FIFO_buf549_lane_2);
  set_at<96, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_8_pack, gp_in1_2_buf64_FIFO_buf549_lane_3);
  set_at<128, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_8_pack, gp_in1_2_buf64_FIFO_buf549_lane_4);
  set_at<160, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_8_pack, gp_in1_2_buf64_FIFO_buf549_lane_5);
  set_at<192, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_8_pack, gp_in1_2_buf64_FIFO_buf549_lane_6);
  set_at<224, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_8_pack, gp_in1_2_buf64_FIFO_buf549_lane_7);
  set_at<256, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_8_pack, gp_in1_2_buf64_FIFO_buf549_lane_8);
  auto res_gp_in1_374_merged306_sm751_12474 = gp_in1_374_cu304(gp_in1_2_buf64_FIFO_buf549_lane_8_pack);

  hw_uint<288 > gp_in1_2_buf64_FIFO_buf549_lane_17_pack;
  set_at<0, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_17_pack, gp_in1_2_buf64_FIFO_buf549_lane_9);
  set_at<32, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_17_pack, gp_in1_2_buf64_FIFO_buf549_lane_10);
  set_at<64, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_17_pack, gp_in1_2_buf64_FIFO_buf549_lane_11);
  set_at<96, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_17_pack, gp_in1_2_buf64_FIFO_buf549_lane_12);
  set_at<128, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_17_pack, gp_in1_2_buf64_FIFO_buf549_lane_13);
  set_at<160, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_17_pack, gp_in1_2_buf64_FIFO_buf549_lane_14);
  set_at<192, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_17_pack, gp_in1_2_buf64_FIFO_buf549_lane_15);
  set_at<224, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_17_pack, gp_in1_2_buf64_FIFO_buf549_lane_16);
  set_at<256, 288, 32>(gp_in1_2_buf64_FIFO_buf549_lane_17_pack, gp_in1_2_buf64_FIFO_buf549_lane_17);
  auto res_gp_in1_374_merged306_sm751_02472 = gp_in1_374_cu304(gp_in1_2_buf64_FIFO_buf549_lane_17_pack);
  hw_uint<64 > return_value2900;
  set_at<0, 64, 32>(return_value2900, res_gp_in1_374_merged306_sm751_12474);
  set_at<32, 64, 32>(return_value2900, res_gp_in1_374_merged306_sm751_02472);
  return return_value2900;

}

hw_uint<256> us_gp_in1_2_buf6490_cu2902(hw_uint<32*8>& gp_in1_2_buf64_FIFO_buf545) {
  return gp_in1_2_buf64_FIFO_buf545;
}

hw_uint<512> us_gp_in0_1_buf850_cu2904(hw_uint<32*16>& gp_in0_1_buf8_FIFO_buf485) {
  return gp_in0_1_buf8_FIFO_buf485;
}

hw_uint<64> gp_in0_326_cu2906(hw_uint<32*18>& gp_in0_2_buf16_FIFO_buf497) {
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_0 = gp_in0_2_buf16_FIFO_buf497.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_1 = gp_in0_2_buf16_FIFO_buf497.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_2 = gp_in0_2_buf16_FIFO_buf497.extract<64, 95>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_3 = gp_in0_2_buf16_FIFO_buf497.extract<96, 127>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_4 = gp_in0_2_buf16_FIFO_buf497.extract<128, 159>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_5 = gp_in0_2_buf16_FIFO_buf497.extract<160, 191>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_6 = gp_in0_2_buf16_FIFO_buf497.extract<192, 223>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_7 = gp_in0_2_buf16_FIFO_buf497.extract<224, 255>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_8 = gp_in0_2_buf16_FIFO_buf497.extract<256, 287>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_9 = gp_in0_2_buf16_FIFO_buf497.extract<288, 319>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_10 = gp_in0_2_buf16_FIFO_buf497.extract<320, 351>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_11 = gp_in0_2_buf16_FIFO_buf497.extract<352, 383>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_12 = gp_in0_2_buf16_FIFO_buf497.extract<384, 415>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_13 = gp_in0_2_buf16_FIFO_buf497.extract<416, 447>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_14 = gp_in0_2_buf16_FIFO_buf497.extract<448, 479>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_15 = gp_in0_2_buf16_FIFO_buf497.extract<480, 511>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_16 = gp_in0_2_buf16_FIFO_buf497.extract<512, 543>();
  hw_uint<32> gp_in0_2_buf16_FIFO_buf497_lane_17 = gp_in0_2_buf16_FIFO_buf497.extract<544, 575>();

	
  hw_uint<288 > gp_in0_2_buf16_FIFO_buf497_lane_8_pack;
  set_at<0, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_8_pack, gp_in0_2_buf16_FIFO_buf497_lane_0);
  set_at<32, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_8_pack, gp_in0_2_buf16_FIFO_buf497_lane_1);
  set_at<64, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_8_pack, gp_in0_2_buf16_FIFO_buf497_lane_2);
  set_at<96, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_8_pack, gp_in0_2_buf16_FIFO_buf497_lane_3);
  set_at<128, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_8_pack, gp_in0_2_buf16_FIFO_buf497_lane_4);
  set_at<160, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_8_pack, gp_in0_2_buf16_FIFO_buf497_lane_5);
  set_at<192, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_8_pack, gp_in0_2_buf16_FIFO_buf497_lane_6);
  set_at<224, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_8_pack, gp_in0_2_buf16_FIFO_buf497_lane_7);
  set_at<256, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_8_pack, gp_in0_2_buf16_FIFO_buf497_lane_8);
  auto res_gp_in0_326_merged309_sm754_12526 = gp_in0_326_cu307(gp_in0_2_buf16_FIFO_buf497_lane_8_pack);

  hw_uint<288 > gp_in0_2_buf16_FIFO_buf497_lane_17_pack;
  set_at<0, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_17_pack, gp_in0_2_buf16_FIFO_buf497_lane_9);
  set_at<32, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_17_pack, gp_in0_2_buf16_FIFO_buf497_lane_10);
  set_at<64, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_17_pack, gp_in0_2_buf16_FIFO_buf497_lane_11);
  set_at<96, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_17_pack, gp_in0_2_buf16_FIFO_buf497_lane_12);
  set_at<128, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_17_pack, gp_in0_2_buf16_FIFO_buf497_lane_13);
  set_at<160, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_17_pack, gp_in0_2_buf16_FIFO_buf497_lane_14);
  set_at<192, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_17_pack, gp_in0_2_buf16_FIFO_buf497_lane_15);
  set_at<224, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_17_pack, gp_in0_2_buf16_FIFO_buf497_lane_16);
  set_at<256, 288, 32>(gp_in0_2_buf16_FIFO_buf497_lane_17_pack, gp_in0_2_buf16_FIFO_buf497_lane_17);
  auto res_gp_in0_326_merged309_sm754_02524 = gp_in0_326_cu307(gp_in0_2_buf16_FIFO_buf497_lane_17_pack);
  hw_uint<64 > return_value2907;
  set_at<0, 64, 32>(return_value2907, res_gp_in0_326_merged309_sm754_12526);
  set_at<32, 64, 32>(return_value2907, res_gp_in0_326_merged309_sm754_02524);
  return return_value2907;

}

hw_uint<512> lp_in0_054_cu2909(hw_uint<32*16>& gp_in0_1_buf8_us48_FIFO_buf493, hw_uint<32*16>& in0_FIFO_buf573) {
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_0 = gp_in0_1_buf8_us48_FIFO_buf493.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_1 = gp_in0_1_buf8_us48_FIFO_buf493.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_2 = gp_in0_1_buf8_us48_FIFO_buf493.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_3 = gp_in0_1_buf8_us48_FIFO_buf493.extract<96, 127>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_4 = gp_in0_1_buf8_us48_FIFO_buf493.extract<128, 159>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_5 = gp_in0_1_buf8_us48_FIFO_buf493.extract<160, 191>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_6 = gp_in0_1_buf8_us48_FIFO_buf493.extract<192, 223>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_7 = gp_in0_1_buf8_us48_FIFO_buf493.extract<224, 255>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_8 = gp_in0_1_buf8_us48_FIFO_buf493.extract<256, 287>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_9 = gp_in0_1_buf8_us48_FIFO_buf493.extract<288, 319>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_10 = gp_in0_1_buf8_us48_FIFO_buf493.extract<320, 351>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_11 = gp_in0_1_buf8_us48_FIFO_buf493.extract<352, 383>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_12 = gp_in0_1_buf8_us48_FIFO_buf493.extract<384, 415>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_13 = gp_in0_1_buf8_us48_FIFO_buf493.extract<416, 447>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_14 = gp_in0_1_buf8_us48_FIFO_buf493.extract<448, 479>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_15 = gp_in0_1_buf8_us48_FIFO_buf493.extract<480, 511>();
  hw_uint<32> in0_FIFO_buf573_lane_0 = in0_FIFO_buf573.extract<0, 31>();
  hw_uint<32> in0_FIFO_buf573_lane_1 = in0_FIFO_buf573.extract<32, 63>();
  hw_uint<32> in0_FIFO_buf573_lane_2 = in0_FIFO_buf573.extract<64, 95>();
  hw_uint<32> in0_FIFO_buf573_lane_3 = in0_FIFO_buf573.extract<96, 127>();
  hw_uint<32> in0_FIFO_buf573_lane_4 = in0_FIFO_buf573.extract<128, 159>();
  hw_uint<32> in0_FIFO_buf573_lane_5 = in0_FIFO_buf573.extract<160, 191>();
  hw_uint<32> in0_FIFO_buf573_lane_6 = in0_FIFO_buf573.extract<192, 223>();
  hw_uint<32> in0_FIFO_buf573_lane_7 = in0_FIFO_buf573.extract<224, 255>();
  hw_uint<32> in0_FIFO_buf573_lane_8 = in0_FIFO_buf573.extract<256, 287>();
  hw_uint<32> in0_FIFO_buf573_lane_9 = in0_FIFO_buf573.extract<288, 319>();
  hw_uint<32> in0_FIFO_buf573_lane_10 = in0_FIFO_buf573.extract<320, 351>();
  hw_uint<32> in0_FIFO_buf573_lane_11 = in0_FIFO_buf573.extract<352, 383>();
  hw_uint<32> in0_FIFO_buf573_lane_12 = in0_FIFO_buf573.extract<384, 415>();
  hw_uint<32> in0_FIFO_buf573_lane_13 = in0_FIFO_buf573.extract<416, 447>();
  hw_uint<32> in0_FIFO_buf573_lane_14 = in0_FIFO_buf573.extract<448, 479>();
  hw_uint<32> in0_FIFO_buf573_lane_15 = in0_FIFO_buf573.extract<480, 511>();

	
  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_0);
  hw_uint<32 > in0_FIFO_buf573_lane_0_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_0_pack, in0_FIFO_buf573_lane_0);
  auto res_diff55_sm755_152558 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack, in0_FIFO_buf573_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_1);
  hw_uint<32 > in0_FIFO_buf573_lane_1_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_1_pack, in0_FIFO_buf573_lane_1);
  auto res_diff55_sm755_142556 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack, in0_FIFO_buf573_lane_1_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_2_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_2);
  hw_uint<32 > in0_FIFO_buf573_lane_2_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_2_pack, in0_FIFO_buf573_lane_2);
  auto res_diff55_sm755_132554 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_2_pack, in0_FIFO_buf573_lane_2_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_3_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_3);
  hw_uint<32 > in0_FIFO_buf573_lane_3_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_3_pack, in0_FIFO_buf573_lane_3);
  auto res_diff55_sm755_122552 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_3_pack, in0_FIFO_buf573_lane_3_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_4_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_4_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_4);
  hw_uint<32 > in0_FIFO_buf573_lane_4_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_4_pack, in0_FIFO_buf573_lane_4);
  auto res_diff55_sm755_112550 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_4_pack, in0_FIFO_buf573_lane_4_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_5_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_5_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_5);
  hw_uint<32 > in0_FIFO_buf573_lane_5_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_5_pack, in0_FIFO_buf573_lane_5);
  auto res_diff55_sm755_102548 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_5_pack, in0_FIFO_buf573_lane_5_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_6_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_6_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_6);
  hw_uint<32 > in0_FIFO_buf573_lane_6_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_6_pack, in0_FIFO_buf573_lane_6);
  auto res_diff55_sm755_92546 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_6_pack, in0_FIFO_buf573_lane_6_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_7_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_7_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_7);
  hw_uint<32 > in0_FIFO_buf573_lane_7_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_7_pack, in0_FIFO_buf573_lane_7);
  auto res_diff55_sm755_82544 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_7_pack, in0_FIFO_buf573_lane_7_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_8_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_8_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_8);
  hw_uint<32 > in0_FIFO_buf573_lane_8_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_8_pack, in0_FIFO_buf573_lane_8);
  auto res_diff55_sm755_72542 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_8_pack, in0_FIFO_buf573_lane_8_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_9_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_9_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_9);
  hw_uint<32 > in0_FIFO_buf573_lane_9_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_9_pack, in0_FIFO_buf573_lane_9);
  auto res_diff55_sm755_62540 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_9_pack, in0_FIFO_buf573_lane_9_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_10_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_10_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_10);
  hw_uint<32 > in0_FIFO_buf573_lane_10_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_10_pack, in0_FIFO_buf573_lane_10);
  auto res_diff55_sm755_52538 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_10_pack, in0_FIFO_buf573_lane_10_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_11_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_11_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_11);
  hw_uint<32 > in0_FIFO_buf573_lane_11_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_11_pack, in0_FIFO_buf573_lane_11);
  auto res_diff55_sm755_42536 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_11_pack, in0_FIFO_buf573_lane_11_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_12_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_12_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_12);
  hw_uint<32 > in0_FIFO_buf573_lane_12_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_12_pack, in0_FIFO_buf573_lane_12);
  auto res_diff55_sm755_32534 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_12_pack, in0_FIFO_buf573_lane_12_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_13_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_13_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_13);
  hw_uint<32 > in0_FIFO_buf573_lane_13_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_13_pack, in0_FIFO_buf573_lane_13);
  auto res_diff55_sm755_22532 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_13_pack, in0_FIFO_buf573_lane_13_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_14_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_14_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_14);
  hw_uint<32 > in0_FIFO_buf573_lane_14_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_14_pack, in0_FIFO_buf573_lane_14);
  auto res_diff55_sm755_12530 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_14_pack, in0_FIFO_buf573_lane_14_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_15_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_15_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_15);
  hw_uint<32 > in0_FIFO_buf573_lane_15_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_15_pack, in0_FIFO_buf573_lane_15);
  auto res_diff55_sm755_02528 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_15_pack, in0_FIFO_buf573_lane_15_pack);
  hw_uint<512 > return_value2910;
  set_at<0, 512, 32>(return_value2910, res_diff55_sm755_152558);
  set_at<32, 512, 32>(return_value2910, res_diff55_sm755_142556);
  set_at<64, 512, 32>(return_value2910, res_diff55_sm755_132554);
  set_at<96, 512, 32>(return_value2910, res_diff55_sm755_122552);
  set_at<128, 512, 32>(return_value2910, res_diff55_sm755_112550);
  set_at<160, 512, 32>(return_value2910, res_diff55_sm755_102548);
  set_at<192, 512, 32>(return_value2910, res_diff55_sm755_92546);
  set_at<224, 512, 32>(return_value2910, res_diff55_sm755_82544);
  set_at<256, 512, 32>(return_value2910, res_diff55_sm755_72542);
  set_at<288, 512, 32>(return_value2910, res_diff55_sm755_62540);
  set_at<320, 512, 32>(return_value2910, res_diff55_sm755_52538);
  set_at<352, 512, 32>(return_value2910, res_diff55_sm755_42536);
  set_at<384, 512, 32>(return_value2910, res_diff55_sm755_32534);
  set_at<416, 512, 32>(return_value2910, res_diff55_sm755_22532);
  set_at<448, 512, 32>(return_value2910, res_diff55_sm755_12530);
  set_at<480, 512, 32>(return_value2910, res_diff55_sm755_02528);
  return return_value2910;

}

hw_uint<256> pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_cu2912(hw_uint<32*8>& lp_in0_1_buf44_FIFO_buf589, hw_uint<32*8>& lp_in1_1_buf92_FIFO_buf601) {
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_0 = lp_in0_1_buf44_FIFO_buf589.extract<0, 31>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_1 = lp_in0_1_buf44_FIFO_buf589.extract<32, 63>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_2 = lp_in0_1_buf44_FIFO_buf589.extract<64, 95>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_3 = lp_in0_1_buf44_FIFO_buf589.extract<96, 127>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_4 = lp_in0_1_buf44_FIFO_buf589.extract<128, 159>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_5 = lp_in0_1_buf44_FIFO_buf589.extract<160, 191>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_6 = lp_in0_1_buf44_FIFO_buf589.extract<192, 223>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_7 = lp_in0_1_buf44_FIFO_buf589.extract<224, 255>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_0 = lp_in1_1_buf92_FIFO_buf601.extract<0, 31>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_1 = lp_in1_1_buf92_FIFO_buf601.extract<32, 63>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_2 = lp_in1_1_buf92_FIFO_buf601.extract<64, 95>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_3 = lp_in1_1_buf92_FIFO_buf601.extract<96, 127>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_4 = lp_in1_1_buf92_FIFO_buf601.extract<128, 159>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_5 = lp_in1_1_buf92_FIFO_buf601.extract<160, 191>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_6 = lp_in1_1_buf92_FIFO_buf601.extract<192, 223>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_7 = lp_in1_1_buf92_FIFO_buf601.extract<224, 255>();

	
  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_0_pack, lp_in0_1_buf44_FIFO_buf589_lane_0);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_0_pack, lp_in1_1_buf92_FIFO_buf601_lane_0);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_72574 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_0_pack, lp_in1_1_buf92_FIFO_buf601_lane_0_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_1_pack, lp_in0_1_buf44_FIFO_buf589_lane_1);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_1_pack, lp_in1_1_buf92_FIFO_buf601_lane_1);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_62572 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_1_pack, lp_in1_1_buf92_FIFO_buf601_lane_1_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_2_pack, lp_in0_1_buf44_FIFO_buf589_lane_2);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_2_pack, lp_in1_1_buf92_FIFO_buf601_lane_2);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_52570 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_2_pack, lp_in1_1_buf92_FIFO_buf601_lane_2_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_3_pack, lp_in0_1_buf44_FIFO_buf589_lane_3);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_3_pack, lp_in1_1_buf92_FIFO_buf601_lane_3);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_42568 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_3_pack, lp_in1_1_buf92_FIFO_buf601_lane_3_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_4_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_4_pack, lp_in0_1_buf44_FIFO_buf589_lane_4);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_4_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_4_pack, lp_in1_1_buf92_FIFO_buf601_lane_4);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_32566 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_4_pack, lp_in1_1_buf92_FIFO_buf601_lane_4_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_5_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_5_pack, lp_in0_1_buf44_FIFO_buf589_lane_5);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_5_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_5_pack, lp_in1_1_buf92_FIFO_buf601_lane_5);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_22564 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_5_pack, lp_in1_1_buf92_FIFO_buf601_lane_5_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_6_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_6_pack, lp_in0_1_buf44_FIFO_buf589_lane_6);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_6_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_6_pack, lp_in1_1_buf92_FIFO_buf601_lane_6);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_12562 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_6_pack, lp_in1_1_buf92_FIFO_buf601_lane_6_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_7_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_7_pack, lp_in0_1_buf44_FIFO_buf589_lane_7);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_7_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_7_pack, lp_in1_1_buf92_FIFO_buf601_lane_7);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_02560 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_7_pack, lp_in1_1_buf92_FIFO_buf601_lane_7_pack);
  hw_uint<256 > return_value2913;
  set_at<0, 256, 32>(return_value2913, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_72574);
  set_at<32, 256, 32>(return_value2913, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_62572);
  set_at<64, 256, 32>(return_value2913, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_52570);
  set_at<96, 256, 32>(return_value2913, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_42568);
  set_at<128, 256, 32>(return_value2913, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_32566);
  set_at<160, 256, 32>(return_value2913, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_22564);
  set_at<192, 256, 32>(return_value2913, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_12562);
  set_at<224, 256, 32>(return_value2913, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm756_02560);
  return return_value2913;

}

hw_uint<512> pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_cu2915(hw_uint<32*16>& lp_in0_0_buf52_FIFO_buf585, hw_uint<32*16>& lp_in1_0_buf100_FIFO_buf597) {
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_0 = lp_in0_0_buf52_FIFO_buf585.extract<0, 31>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_1 = lp_in0_0_buf52_FIFO_buf585.extract<32, 63>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_2 = lp_in0_0_buf52_FIFO_buf585.extract<64, 95>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_3 = lp_in0_0_buf52_FIFO_buf585.extract<96, 127>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_4 = lp_in0_0_buf52_FIFO_buf585.extract<128, 159>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_5 = lp_in0_0_buf52_FIFO_buf585.extract<160, 191>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_6 = lp_in0_0_buf52_FIFO_buf585.extract<192, 223>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_7 = lp_in0_0_buf52_FIFO_buf585.extract<224, 255>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_8 = lp_in0_0_buf52_FIFO_buf585.extract<256, 287>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_9 = lp_in0_0_buf52_FIFO_buf585.extract<288, 319>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_10 = lp_in0_0_buf52_FIFO_buf585.extract<320, 351>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_11 = lp_in0_0_buf52_FIFO_buf585.extract<352, 383>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_12 = lp_in0_0_buf52_FIFO_buf585.extract<384, 415>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_13 = lp_in0_0_buf52_FIFO_buf585.extract<416, 447>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_14 = lp_in0_0_buf52_FIFO_buf585.extract<448, 479>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_15 = lp_in0_0_buf52_FIFO_buf585.extract<480, 511>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_0 = lp_in1_0_buf100_FIFO_buf597.extract<0, 31>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_1 = lp_in1_0_buf100_FIFO_buf597.extract<32, 63>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_2 = lp_in1_0_buf100_FIFO_buf597.extract<64, 95>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_3 = lp_in1_0_buf100_FIFO_buf597.extract<96, 127>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_4 = lp_in1_0_buf100_FIFO_buf597.extract<128, 159>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_5 = lp_in1_0_buf100_FIFO_buf597.extract<160, 191>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_6 = lp_in1_0_buf100_FIFO_buf597.extract<192, 223>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_7 = lp_in1_0_buf100_FIFO_buf597.extract<224, 255>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_8 = lp_in1_0_buf100_FIFO_buf597.extract<256, 287>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_9 = lp_in1_0_buf100_FIFO_buf597.extract<288, 319>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_10 = lp_in1_0_buf100_FIFO_buf597.extract<320, 351>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_11 = lp_in1_0_buf100_FIFO_buf597.extract<352, 383>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_12 = lp_in1_0_buf100_FIFO_buf597.extract<384, 415>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_13 = lp_in1_0_buf100_FIFO_buf597.extract<416, 447>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_14 = lp_in1_0_buf100_FIFO_buf597.extract<448, 479>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_15 = lp_in1_0_buf100_FIFO_buf597.extract<480, 511>();

	
  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_0_pack, lp_in0_0_buf52_FIFO_buf585_lane_0);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_0_pack, lp_in1_0_buf100_FIFO_buf597_lane_0);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_152606 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_0_pack, lp_in1_0_buf100_FIFO_buf597_lane_0_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_1_pack, lp_in0_0_buf52_FIFO_buf585_lane_1);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_1_pack, lp_in1_0_buf100_FIFO_buf597_lane_1);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_142604 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_1_pack, lp_in1_0_buf100_FIFO_buf597_lane_1_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_2_pack, lp_in0_0_buf52_FIFO_buf585_lane_2);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_2_pack, lp_in1_0_buf100_FIFO_buf597_lane_2);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_132602 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_2_pack, lp_in1_0_buf100_FIFO_buf597_lane_2_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_3_pack, lp_in0_0_buf52_FIFO_buf585_lane_3);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_3_pack, lp_in1_0_buf100_FIFO_buf597_lane_3);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_122600 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_3_pack, lp_in1_0_buf100_FIFO_buf597_lane_3_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_4_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_4_pack, lp_in0_0_buf52_FIFO_buf585_lane_4);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_4_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_4_pack, lp_in1_0_buf100_FIFO_buf597_lane_4);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_112598 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_4_pack, lp_in1_0_buf100_FIFO_buf597_lane_4_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_5_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_5_pack, lp_in0_0_buf52_FIFO_buf585_lane_5);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_5_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_5_pack, lp_in1_0_buf100_FIFO_buf597_lane_5);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_102596 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_5_pack, lp_in1_0_buf100_FIFO_buf597_lane_5_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_6_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_6_pack, lp_in0_0_buf52_FIFO_buf585_lane_6);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_6_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_6_pack, lp_in1_0_buf100_FIFO_buf597_lane_6);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_92594 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_6_pack, lp_in1_0_buf100_FIFO_buf597_lane_6_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_7_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_7_pack, lp_in0_0_buf52_FIFO_buf585_lane_7);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_7_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_7_pack, lp_in1_0_buf100_FIFO_buf597_lane_7);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_82592 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_7_pack, lp_in1_0_buf100_FIFO_buf597_lane_7_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_8_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_8_pack, lp_in0_0_buf52_FIFO_buf585_lane_8);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_8_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_8_pack, lp_in1_0_buf100_FIFO_buf597_lane_8);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_72590 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_8_pack, lp_in1_0_buf100_FIFO_buf597_lane_8_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_9_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_9_pack, lp_in0_0_buf52_FIFO_buf585_lane_9);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_9_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_9_pack, lp_in1_0_buf100_FIFO_buf597_lane_9);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_62588 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_9_pack, lp_in1_0_buf100_FIFO_buf597_lane_9_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_10_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_10_pack, lp_in0_0_buf52_FIFO_buf585_lane_10);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_10_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_10_pack, lp_in1_0_buf100_FIFO_buf597_lane_10);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_52586 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_10_pack, lp_in1_0_buf100_FIFO_buf597_lane_10_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_11_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_11_pack, lp_in0_0_buf52_FIFO_buf585_lane_11);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_11_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_11_pack, lp_in1_0_buf100_FIFO_buf597_lane_11);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_42584 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_11_pack, lp_in1_0_buf100_FIFO_buf597_lane_11_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_12_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_12_pack, lp_in0_0_buf52_FIFO_buf585_lane_12);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_12_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_12_pack, lp_in1_0_buf100_FIFO_buf597_lane_12);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_32582 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_12_pack, lp_in1_0_buf100_FIFO_buf597_lane_12_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_13_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_13_pack, lp_in0_0_buf52_FIFO_buf585_lane_13);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_13_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_13_pack, lp_in1_0_buf100_FIFO_buf597_lane_13);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_22580 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_13_pack, lp_in1_0_buf100_FIFO_buf597_lane_13_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_14_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_14_pack, lp_in0_0_buf52_FIFO_buf585_lane_14);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_14_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_14_pack, lp_in1_0_buf100_FIFO_buf597_lane_14);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_12578 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_14_pack, lp_in1_0_buf100_FIFO_buf597_lane_14_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_15_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_15_pack, lp_in0_0_buf52_FIFO_buf585_lane_15);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_15_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_15_pack, lp_in1_0_buf100_FIFO_buf597_lane_15);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_02576 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_15_pack, lp_in1_0_buf100_FIFO_buf597_lane_15_pack);
  hw_uint<512 > return_value2916;
  set_at<0, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_152606);
  set_at<32, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_142604);
  set_at<64, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_132602);
  set_at<96, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_122600);
  set_at<128, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_112598);
  set_at<160, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_102596);
  set_at<192, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_92594);
  set_at<224, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_82592);
  set_at<256, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_72590);
  set_at<288, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_62588);
  set_at<320, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_52586);
  set_at<352, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_42584);
  set_at<384, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_32582);
  set_at<416, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_22580);
  set_at<448, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_12578);
  set_at<480, 512, 32>(return_value2916, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm757_02576);
  return return_value2916;

}

hw_uint<256> lp_in0_1_buf44_ld422_cu2918(hw_uint<32*8>& lp_in0_1_buf44) {
  return lp_in0_1_buf44;
}

hw_uint<128> us_gp_in0_3_buf2434_cu2920(hw_uint<32*4>& gp_in0_3_buf24_FIFO_buf517) {
  return gp_in0_3_buf24_FIFO_buf517;
}

hw_uint<256> us_gp_in0_2_buf1642_cu2922(hw_uint<32*8>& gp_in0_2_buf16_FIFO_buf501) {
  return gp_in0_2_buf16_FIFO_buf501;
}

hw_uint<128> pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114_cu2924(hw_uint<32*4>& lp_in0_2_buf36_FIFO_buf593, hw_uint<32*4>& lp_in1_2_buf84_FIFO_buf605) {
  hw_uint<32> lp_in0_2_buf36_FIFO_buf593_lane_0 = lp_in0_2_buf36_FIFO_buf593.extract<0, 31>();
  hw_uint<32> lp_in0_2_buf36_FIFO_buf593_lane_1 = lp_in0_2_buf36_FIFO_buf593.extract<32, 63>();
  hw_uint<32> lp_in0_2_buf36_FIFO_buf593_lane_2 = lp_in0_2_buf36_FIFO_buf593.extract<64, 95>();
  hw_uint<32> lp_in0_2_buf36_FIFO_buf593_lane_3 = lp_in0_2_buf36_FIFO_buf593.extract<96, 127>();
  hw_uint<32> lp_in1_2_buf84_FIFO_buf605_lane_0 = lp_in1_2_buf84_FIFO_buf605.extract<0, 31>();
  hw_uint<32> lp_in1_2_buf84_FIFO_buf605_lane_1 = lp_in1_2_buf84_FIFO_buf605.extract<32, 63>();
  hw_uint<32> lp_in1_2_buf84_FIFO_buf605_lane_2 = lp_in1_2_buf84_FIFO_buf605.extract<64, 95>();
  hw_uint<32> lp_in1_2_buf84_FIFO_buf605_lane_3 = lp_in1_2_buf84_FIFO_buf605.extract<96, 127>();

	
  hw_uint<32 > lp_in0_2_buf36_FIFO_buf593_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_FIFO_buf593_lane_0_pack, lp_in0_2_buf36_FIFO_buf593_lane_0);
  hw_uint<32 > lp_in1_2_buf84_FIFO_buf605_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_FIFO_buf605_lane_0_pack, lp_in1_2_buf84_FIFO_buf605_lane_0);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm761_32654 = llf_float_average(lp_in0_2_buf36_FIFO_buf593_lane_0_pack, lp_in1_2_buf84_FIFO_buf605_lane_0_pack);

  hw_uint<32 > lp_in0_2_buf36_FIFO_buf593_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_FIFO_buf593_lane_1_pack, lp_in0_2_buf36_FIFO_buf593_lane_1);
  hw_uint<32 > lp_in1_2_buf84_FIFO_buf605_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_FIFO_buf605_lane_1_pack, lp_in1_2_buf84_FIFO_buf605_lane_1);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm761_22652 = llf_float_average(lp_in0_2_buf36_FIFO_buf593_lane_1_pack, lp_in1_2_buf84_FIFO_buf605_lane_1_pack);

  hw_uint<32 > lp_in0_2_buf36_FIFO_buf593_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_FIFO_buf593_lane_2_pack, lp_in0_2_buf36_FIFO_buf593_lane_2);
  hw_uint<32 > lp_in1_2_buf84_FIFO_buf605_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_FIFO_buf605_lane_2_pack, lp_in1_2_buf84_FIFO_buf605_lane_2);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm761_12650 = llf_float_average(lp_in0_2_buf36_FIFO_buf593_lane_2_pack, lp_in1_2_buf84_FIFO_buf605_lane_2_pack);

  hw_uint<32 > lp_in0_2_buf36_FIFO_buf593_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_FIFO_buf593_lane_3_pack, lp_in0_2_buf36_FIFO_buf593_lane_3);
  hw_uint<32 > lp_in1_2_buf84_FIFO_buf605_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_FIFO_buf605_lane_3_pack, lp_in1_2_buf84_FIFO_buf605_lane_3);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm761_02648 = llf_float_average(lp_in0_2_buf36_FIFO_buf593_lane_3_pack, lp_in1_2_buf84_FIFO_buf605_lane_3_pack);
  hw_uint<128 > return_value2925;
  set_at<0, 128, 32>(return_value2925, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm761_32654);
  set_at<32, 128, 32>(return_value2925, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm761_22652);
  set_at<64, 128, 32>(return_value2925, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm761_12650);
  set_at<96, 128, 32>(return_value2925, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm761_02648);
  return return_value2925;

}

hw_uint<256> lp_in1_1_buf92_ld434_cu2927(hw_uint<32*8>& lp_in1_1_buf92) {
  return lp_in1_1_buf92;
}

hw_uint<128> gp_in0_218_cu2929(hw_uint<32*36>& gp_in0_1_buf8_FIFO_buf481) {
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
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_18 = gp_in0_1_buf8_FIFO_buf481.extract<576, 607>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_19 = gp_in0_1_buf8_FIFO_buf481.extract<608, 639>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_20 = gp_in0_1_buf8_FIFO_buf481.extract<640, 671>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_21 = gp_in0_1_buf8_FIFO_buf481.extract<672, 703>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_22 = gp_in0_1_buf8_FIFO_buf481.extract<704, 735>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_23 = gp_in0_1_buf8_FIFO_buf481.extract<736, 767>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_24 = gp_in0_1_buf8_FIFO_buf481.extract<768, 799>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_25 = gp_in0_1_buf8_FIFO_buf481.extract<800, 831>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_26 = gp_in0_1_buf8_FIFO_buf481.extract<832, 863>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_27 = gp_in0_1_buf8_FIFO_buf481.extract<864, 895>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_28 = gp_in0_1_buf8_FIFO_buf481.extract<896, 927>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_29 = gp_in0_1_buf8_FIFO_buf481.extract<928, 959>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_30 = gp_in0_1_buf8_FIFO_buf481.extract<960, 991>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_31 = gp_in0_1_buf8_FIFO_buf481.extract<992, 1023>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_32 = gp_in0_1_buf8_FIFO_buf481.extract<1024, 1055>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_33 = gp_in0_1_buf8_FIFO_buf481.extract<1056, 1087>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_34 = gp_in0_1_buf8_FIFO_buf481.extract<1088, 1119>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf481_lane_35 = gp_in0_1_buf8_FIFO_buf481.extract<1120, 1151>();

	
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
  auto res_gp_in0_218_merged312_sm763_32678 = gp_in0_218_cu310(gp_in0_1_buf8_FIFO_buf481_lane_8_pack);

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
  auto res_gp_in0_218_merged312_sm763_22676 = gp_in0_218_cu310(gp_in0_1_buf8_FIFO_buf481_lane_17_pack);

  hw_uint<288 > gp_in0_1_buf8_FIFO_buf481_lane_26_pack;
  set_at<0, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_26_pack, gp_in0_1_buf8_FIFO_buf481_lane_18);
  set_at<32, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_26_pack, gp_in0_1_buf8_FIFO_buf481_lane_19);
  set_at<64, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_26_pack, gp_in0_1_buf8_FIFO_buf481_lane_20);
  set_at<96, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_26_pack, gp_in0_1_buf8_FIFO_buf481_lane_21);
  set_at<128, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_26_pack, gp_in0_1_buf8_FIFO_buf481_lane_22);
  set_at<160, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_26_pack, gp_in0_1_buf8_FIFO_buf481_lane_23);
  set_at<192, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_26_pack, gp_in0_1_buf8_FIFO_buf481_lane_24);
  set_at<224, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_26_pack, gp_in0_1_buf8_FIFO_buf481_lane_25);
  set_at<256, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_26_pack, gp_in0_1_buf8_FIFO_buf481_lane_26);
  auto res_gp_in0_218_merged312_sm763_12674 = gp_in0_218_cu310(gp_in0_1_buf8_FIFO_buf481_lane_26_pack);

  hw_uint<288 > gp_in0_1_buf8_FIFO_buf481_lane_35_pack;
  set_at<0, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_35_pack, gp_in0_1_buf8_FIFO_buf481_lane_27);
  set_at<32, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_35_pack, gp_in0_1_buf8_FIFO_buf481_lane_28);
  set_at<64, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_35_pack, gp_in0_1_buf8_FIFO_buf481_lane_29);
  set_at<96, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_35_pack, gp_in0_1_buf8_FIFO_buf481_lane_30);
  set_at<128, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_35_pack, gp_in0_1_buf8_FIFO_buf481_lane_31);
  set_at<160, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_35_pack, gp_in0_1_buf8_FIFO_buf481_lane_32);
  set_at<192, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_35_pack, gp_in0_1_buf8_FIFO_buf481_lane_33);
  set_at<224, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_35_pack, gp_in0_1_buf8_FIFO_buf481_lane_34);
  set_at<256, 288, 32>(gp_in0_1_buf8_FIFO_buf481_lane_35_pack, gp_in0_1_buf8_FIFO_buf481_lane_35);
  auto res_gp_in0_218_merged312_sm763_02672 = gp_in0_218_cu310(gp_in0_1_buf8_FIFO_buf481_lane_35_pack);
  hw_uint<128 > return_value2930;
  set_at<0, 128, 32>(return_value2930, res_gp_in0_218_merged312_sm763_32678);
  set_at<32, 128, 32>(return_value2930, res_gp_in0_218_merged312_sm763_22676);
  set_at<64, 128, 32>(return_value2930, res_gp_in0_218_merged312_sm763_12674);
  set_at<96, 128, 32>(return_value2930, res_gp_in0_218_merged312_sm763_02672);
  return return_value2930;

}

