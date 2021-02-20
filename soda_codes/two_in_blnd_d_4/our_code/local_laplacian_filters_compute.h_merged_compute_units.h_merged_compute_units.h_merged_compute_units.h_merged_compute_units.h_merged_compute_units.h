#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<128> pw_math_in1_oc46_cu1256(hw_uint<32*4>& in1_oc) {
  hw_uint<32> in1_oc_lane_0 = in1_oc.extract<0, 31>();
  hw_uint<32> in1_oc_lane_1 = in1_oc.extract<32, 63>();
  hw_uint<32> in1_oc_lane_2 = in1_oc.extract<64, 95>();
  hw_uint<32> in1_oc_lane_3 = in1_oc.extract<96, 127>();

	
  hw_uint<32 > in1_oc_lane_0_pack;
  set_at<0, 32, 32>(in1_oc_lane_0_pack, in1_oc_lane_0);
  auto res_pw_math_in1_oc47_sm649_3770 = llf_int_to_float(in1_oc_lane_0_pack);

  hw_uint<32 > in1_oc_lane_1_pack;
  set_at<0, 32, 32>(in1_oc_lane_1_pack, in1_oc_lane_1);
  auto res_pw_math_in1_oc47_sm649_2768 = llf_int_to_float(in1_oc_lane_1_pack);

  hw_uint<32 > in1_oc_lane_2_pack;
  set_at<0, 32, 32>(in1_oc_lane_2_pack, in1_oc_lane_2);
  auto res_pw_math_in1_oc47_sm649_1766 = llf_int_to_float(in1_oc_lane_2_pack);

  hw_uint<32 > in1_oc_lane_3_pack;
  set_at<0, 32, 32>(in1_oc_lane_3_pack, in1_oc_lane_3);
  auto res_pw_math_in1_oc47_sm649_0764 = llf_int_to_float(in1_oc_lane_3_pack);
  hw_uint<128 > return_value1257;
  set_at<0, 128, 32>(return_value1257, res_pw_math_in1_oc47_sm649_3770);
  set_at<32, 128, 32>(return_value1257, res_pw_math_in1_oc47_sm649_2768);
  set_at<64, 128, 32>(return_value1257, res_pw_math_in1_oc47_sm649_1766);
  set_at<96, 128, 32>(return_value1257, res_pw_math_in1_oc47_sm649_0764);
  return return_value1257;

}

hw_uint<128> pw_math_in0_oc02_cu1259(hw_uint<32*4>& in0_oc) {
  hw_uint<32> in0_oc_lane_0 = in0_oc.extract<0, 31>();
  hw_uint<32> in0_oc_lane_1 = in0_oc.extract<32, 63>();
  hw_uint<32> in0_oc_lane_2 = in0_oc.extract<64, 95>();
  hw_uint<32> in0_oc_lane_3 = in0_oc.extract<96, 127>();

	
  hw_uint<32 > in0_oc_lane_0_pack;
  set_at<0, 32, 32>(in0_oc_lane_0_pack, in0_oc_lane_0);
  auto res_pw_math_in0_oc03_sm651_3780 = llf_int_to_float(in0_oc_lane_0_pack);

  hw_uint<32 > in0_oc_lane_1_pack;
  set_at<0, 32, 32>(in0_oc_lane_1_pack, in0_oc_lane_1);
  auto res_pw_math_in0_oc03_sm651_2778 = llf_int_to_float(in0_oc_lane_1_pack);

  hw_uint<32 > in0_oc_lane_2_pack;
  set_at<0, 32, 32>(in0_oc_lane_2_pack, in0_oc_lane_2);
  auto res_pw_math_in0_oc03_sm651_1776 = llf_int_to_float(in0_oc_lane_2_pack);

  hw_uint<32 > in0_oc_lane_3_pack;
  set_at<0, 32, 32>(in0_oc_lane_3_pack, in0_oc_lane_3);
  auto res_pw_math_in0_oc03_sm651_0774 = llf_int_to_float(in0_oc_lane_3_pack);
  hw_uint<128 > return_value1260;
  set_at<0, 128, 32>(return_value1260, res_pw_math_in0_oc03_sm651_3780);
  set_at<32, 128, 32>(return_value1260, res_pw_math_in0_oc03_sm651_2778);
  set_at<64, 128, 32>(return_value1260, res_pw_math_in0_oc03_sm651_1776);
  set_at<96, 128, 32>(return_value1260, res_pw_math_in0_oc03_sm651_0774);
  return return_value1260;

}

hw_uint<64> us_gp_in1_2_buf6490_cu1262(hw_uint<32*2>& gp_in1_2_buf64_FIFO_buf545) {
  return gp_in1_2_buf64_FIFO_buf545;
}

hw_uint<64> lp_in1_194_cu1264(hw_uint<32*2>& gp_in1_1_buf56_FIFO_buf525, hw_uint<32*2>& gp_in1_2_buf64_us88_FIFO_buf553) {
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_0 = gp_in1_1_buf56_FIFO_buf525.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_FIFO_buf525_lane_1 = gp_in1_1_buf56_FIFO_buf525.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_0 = gp_in1_2_buf64_us88_FIFO_buf553.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_lane_1 = gp_in1_2_buf64_us88_FIFO_buf553.extract<32, 63>();

	
  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_0_pack, gp_in1_1_buf56_FIFO_buf525_lane_0);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_0_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_0);
  auto res_diff95_sm656_1880 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_0_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_FIFO_buf525_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_FIFO_buf525_lane_1_pack, gp_in1_1_buf56_FIFO_buf525_lane_1);
  hw_uint<32 > gp_in1_2_buf64_us88_FIFO_buf553_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_FIFO_buf553_lane_1_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_1);
  auto res_diff95_sm656_0878 = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lane_1_pack, gp_in1_2_buf64_us88_FIFO_buf553_lane_1_pack);
  hw_uint<64 > return_value1265;
  set_at<0, 64, 32>(return_value1265, res_diff95_sm656_1880);
  set_at<32, 64, 32>(return_value1265, res_diff95_sm656_0878);
  return return_value1265;

}

hw_uint<128> us_gp_in1_1_buf5698_cu1267(hw_uint<32*4>& gp_in1_1_buf56_FIFO_buf529) {
  return gp_in1_1_buf56_FIFO_buf529;
}

hw_uint<128> lp_in1_0102_cu1269(hw_uint<32*4>& gp_in1_1_buf56_us96_FIFO_buf537, hw_uint<32*4>& in1_FIFO_buf581) {
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_0 = gp_in1_1_buf56_us96_FIFO_buf537.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_1 = gp_in1_1_buf56_us96_FIFO_buf537.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_2 = gp_in1_1_buf56_us96_FIFO_buf537.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_lane_3 = gp_in1_1_buf56_us96_FIFO_buf537.extract<96, 127>();
  hw_uint<32> in1_FIFO_buf581_lane_0 = in1_FIFO_buf581.extract<0, 31>();
  hw_uint<32> in1_FIFO_buf581_lane_1 = in1_FIFO_buf581.extract<32, 63>();
  hw_uint<32> in1_FIFO_buf581_lane_2 = in1_FIFO_buf581.extract<64, 95>();
  hw_uint<32> in1_FIFO_buf581_lane_3 = in1_FIFO_buf581.extract<96, 127>();

	
  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_0);
  hw_uint<32 > in1_FIFO_buf581_lane_0_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_0_pack, in1_FIFO_buf581_lane_0);
  auto res_diff103_sm658_3896 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_0_pack, in1_FIFO_buf581_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_1);
  hw_uint<32 > in1_FIFO_buf581_lane_1_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_1_pack, in1_FIFO_buf581_lane_1);
  auto res_diff103_sm658_2894 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_1_pack, in1_FIFO_buf581_lane_1_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_2_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_2);
  hw_uint<32 > in1_FIFO_buf581_lane_2_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_2_pack, in1_FIFO_buf581_lane_2);
  auto res_diff103_sm658_1892 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_2_pack, in1_FIFO_buf581_lane_2_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_FIFO_buf537_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_FIFO_buf537_lane_3_pack, gp_in1_1_buf56_us96_FIFO_buf537_lane_3);
  hw_uint<32 > in1_FIFO_buf581_lane_3_pack;
  set_at<0, 32, 32>(in1_FIFO_buf581_lane_3_pack, in1_FIFO_buf581_lane_3);
  auto res_diff103_sm658_0890 = llf_diff_float_32(gp_in1_1_buf56_us96_FIFO_buf537_lane_3_pack, in1_FIFO_buf581_lane_3_pack);
  hw_uint<128 > return_value1270;
  set_at<0, 128, 32>(return_value1270, res_diff103_sm658_3896);
  set_at<32, 128, 32>(return_value1270, res_diff103_sm658_2894);
  set_at<64, 128, 32>(return_value1270, res_diff103_sm658_1892);
  set_at<96, 128, 32>(return_value1270, res_diff103_sm658_0890);
  return return_value1270;

}

hw_uint<128> pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_cu1272(hw_uint<32*4>& lp_in0_0_buf52_FIFO_buf585, hw_uint<32*4>& lp_in1_0_buf100_FIFO_buf597) {
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_0 = lp_in0_0_buf52_FIFO_buf585.extract<0, 31>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_1 = lp_in0_0_buf52_FIFO_buf585.extract<32, 63>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_2 = lp_in0_0_buf52_FIFO_buf585.extract<64, 95>();
  hw_uint<32> lp_in0_0_buf52_FIFO_buf585_lane_3 = lp_in0_0_buf52_FIFO_buf585.extract<96, 127>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_0 = lp_in1_0_buf100_FIFO_buf597.extract<0, 31>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_1 = lp_in1_0_buf100_FIFO_buf597.extract<32, 63>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_2 = lp_in1_0_buf100_FIFO_buf597.extract<64, 95>();
  hw_uint<32> lp_in1_0_buf100_FIFO_buf597_lane_3 = lp_in1_0_buf100_FIFO_buf597.extract<96, 127>();

	
  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_0_pack, lp_in0_0_buf52_FIFO_buf585_lane_0);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_0_pack, lp_in1_0_buf100_FIFO_buf597_lane_0);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm659_3904 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_0_pack, lp_in1_0_buf100_FIFO_buf597_lane_0_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_1_pack, lp_in0_0_buf52_FIFO_buf585_lane_1);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_1_pack, lp_in1_0_buf100_FIFO_buf597_lane_1);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm659_2902 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_1_pack, lp_in1_0_buf100_FIFO_buf597_lane_1_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_2_pack, lp_in0_0_buf52_FIFO_buf585_lane_2);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_2_pack, lp_in1_0_buf100_FIFO_buf597_lane_2);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm659_1900 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_2_pack, lp_in1_0_buf100_FIFO_buf597_lane_2_pack);

  hw_uint<32 > lp_in0_0_buf52_FIFO_buf585_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_FIFO_buf585_lane_3_pack, lp_in0_0_buf52_FIFO_buf585_lane_3);
  hw_uint<32 > lp_in1_0_buf100_FIFO_buf597_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_FIFO_buf597_lane_3_pack, lp_in1_0_buf100_FIFO_buf597_lane_3);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm659_0898 = llf_float_average(lp_in0_0_buf52_FIFO_buf585_lane_3_pack, lp_in1_0_buf100_FIFO_buf597_lane_3_pack);
  hw_uint<128 > return_value1273;
  set_at<0, 128, 32>(return_value1273, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm659_3904);
  set_at<32, 128, 32>(return_value1273, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm659_2902);
  set_at<64, 128, 32>(return_value1273, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm659_1900);
  set_at<96, 128, 32>(return_value1273, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm659_0898);
  return return_value1273;

}

hw_uint<64> pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_cu1275(hw_uint<32*2>& lp_in0_1_buf44_FIFO_buf589, hw_uint<32*2>& lp_in1_1_buf92_FIFO_buf601) {
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_0 = lp_in0_1_buf44_FIFO_buf589.extract<0, 31>();
  hw_uint<32> lp_in0_1_buf44_FIFO_buf589_lane_1 = lp_in0_1_buf44_FIFO_buf589.extract<32, 63>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_0 = lp_in1_1_buf92_FIFO_buf601.extract<0, 31>();
  hw_uint<32> lp_in1_1_buf92_FIFO_buf601_lane_1 = lp_in1_1_buf92_FIFO_buf601.extract<32, 63>();

	
  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_0_pack, lp_in0_1_buf44_FIFO_buf589_lane_0);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_0_pack, lp_in1_1_buf92_FIFO_buf601_lane_0);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm660_1908 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_0_pack, lp_in1_1_buf92_FIFO_buf601_lane_0_pack);

  hw_uint<32 > lp_in0_1_buf44_FIFO_buf589_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_FIFO_buf589_lane_1_pack, lp_in0_1_buf44_FIFO_buf589_lane_1);
  hw_uint<32 > lp_in1_1_buf92_FIFO_buf601_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_FIFO_buf601_lane_1_pack, lp_in1_1_buf92_FIFO_buf601_lane_1);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm660_0906 = llf_float_average(lp_in0_1_buf44_FIFO_buf589_lane_1_pack, lp_in1_1_buf92_FIFO_buf601_lane_1_pack);
  hw_uint<64 > return_value1276;
  set_at<0, 64, 32>(return_value1276, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm660_1908);
  set_at<32, 64, 32>(return_value1276, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm660_0906);
  return return_value1276;

}

hw_uint<64> us_merged_2_reconstruct_lp120_buf123135_cu1278(hw_uint<32*2>& merged_2_reconstruct_lp120_buf123_FIFO_buf633) {
  return merged_2_reconstruct_lp120_buf123_FIFO_buf633;
}

hw_uint<64> merged_1_reconstruct_lp129131_cu1280(hw_uint<32*2>& merged_1_FIFO_buf617, hw_uint<32*2>& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637) {
  hw_uint<32> merged_1_FIFO_buf617_lane_0 = merged_1_FIFO_buf617.extract<0, 31>();
  hw_uint<32> merged_1_FIFO_buf617_lane_1 = merged_1_FIFO_buf617.extract<32, 63>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<0, 31>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.extract<32, 63>();

	
  hw_uint<32 > merged_1_FIFO_buf617_lane_0_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_0_pack, merged_1_FIFO_buf617_lane_0);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0);
  auto res_rc137_sm666_1808 = llf_add_float_32(merged_1_FIFO_buf617_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_0_pack);

  hw_uint<32 > merged_1_FIFO_buf617_lane_1_pack;
  set_at<0, 32, 32>(merged_1_FIFO_buf617_lane_1_pack, merged_1_FIFO_buf617_lane_1);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1);
  auto res_rc137_sm666_0806 = llf_add_float_32(merged_1_FIFO_buf617_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_lane_1_pack);
  hw_uint<64 > return_value1281;
  set_at<0, 64, 32>(return_value1281, res_rc137_sm666_1808);
  set_at<32, 64, 32>(return_value1281, res_rc137_sm666_0806);
  return return_value1281;

}

hw_uint<128> us_merged_1_reconstruct_lp129_buf132144_cu1283(hw_uint<32*4>& merged_1_reconstruct_lp129_buf132_FIFO_buf621) {
  return merged_1_reconstruct_lp129_buf132_FIFO_buf621;
}

hw_uint<128> merged_0_reconstruct_lp138140_cu1285(hw_uint<32*4>& merged_0_FIFO_buf609, hw_uint<32*4>& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625) {
  hw_uint<32> merged_0_FIFO_buf609_lane_0 = merged_0_FIFO_buf609.extract<0, 31>();
  hw_uint<32> merged_0_FIFO_buf609_lane_1 = merged_0_FIFO_buf609.extract<32, 63>();
  hw_uint<32> merged_0_FIFO_buf609_lane_2 = merged_0_FIFO_buf609.extract<64, 95>();
  hw_uint<32> merged_0_FIFO_buf609_lane_3 = merged_0_FIFO_buf609.extract<96, 127>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<0, 31>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<32, 63>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<64, 95>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.extract<96, 127>();

	
  hw_uint<32 > merged_0_FIFO_buf609_lane_0_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_0_pack, merged_0_FIFO_buf609_lane_0);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0);
  auto res_rc146_sm668_3824 = llf_add_float_32(merged_0_FIFO_buf609_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_0_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_1_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_1_pack, merged_0_FIFO_buf609_lane_1);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1);
  auto res_rc146_sm668_2822 = llf_add_float_32(merged_0_FIFO_buf609_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_1_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_2_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_2_pack, merged_0_FIFO_buf609_lane_2);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2);
  auto res_rc146_sm668_1820 = llf_add_float_32(merged_0_FIFO_buf609_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_2_pack);

  hw_uint<32 > merged_0_FIFO_buf609_lane_3_pack;
  set_at<0, 32, 32>(merged_0_FIFO_buf609_lane_3_pack, merged_0_FIFO_buf609_lane_3);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3);
  auto res_rc146_sm668_0818 = llf_add_float_32(merged_0_FIFO_buf609_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_lane_3_pack);
  hw_uint<128 > return_value1286;
  set_at<0, 128, 32>(return_value1286, res_rc146_sm668_3824);
  set_at<32, 128, 32>(return_value1286, res_rc146_sm668_2822);
  set_at<64, 128, 32>(return_value1286, res_rc146_sm668_1820);
  set_at<96, 128, 32>(return_value1286, res_rc146_sm668_0818);
  return return_value1286;

}

hw_uint<128> pw_math_merged_0_reconstruct_lp138_buf141147149_cu1288(hw_uint<32*4>& merged_0_reconstruct_lp138_buf141_FIFO_buf613) {
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<0, 31>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<32, 63>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<64, 95>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.extract<96, 127>();

	
  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm669_3832 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_0_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm669_2830 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_1_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm669_1828 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_2_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3_pack, merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm669_0826 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_lane_3_pack);
  hw_uint<128 > return_value1289;
  set_at<0, 128, 32>(return_value1289, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm669_3832);
  set_at<32, 128, 32>(return_value1289, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm669_2830);
  set_at<64, 128, 32>(return_value1289, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm669_1828);
  set_at<96, 128, 32>(return_value1289, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm669_0826);
  return return_value1289;

}

hw_uint<64> gp_in1_1_buf56_ld358_cu1291(hw_uint<32*2>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<64> gp_in1_1_buf56_ld362_cu1293(hw_uint<32*2>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<64> gp_in0_1_buf8_ld314_cu1295(hw_uint<32*2>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<64> gp_in0_1_buf8_ld318_cu1297(hw_uint<32*2>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<128> gp_in0_1_buf8_us48_ld326_cu1299(hw_uint<32*4>& gp_in0_1_buf8_us48) {
  return gp_in0_1_buf8_us48;
}

hw_uint<128> lp_in0_0_buf52_ld418_cu1301(hw_uint<32*4>& lp_in0_0_buf52) {
  return lp_in0_0_buf52;
}

hw_uint<128> merged_0_reconstruct_lp138_buf141_ld446_cu1303(hw_uint<32*4>& merged_0_reconstruct_lp138_buf141) {
  return merged_0_reconstruct_lp138_buf141;
}

hw_uint<64> gp_in0_1_buf8_to_gp_22317_ld486_cu1305(hw_uint<32*2>& gp_in0_1_buf8_to_gp_22317) {
  return gp_in0_1_buf8_to_gp_22317;
}

hw_uint<64> merged_2_reconstruct_lp120_buf123_us133_ld470_cu1307(hw_uint<32*2>& merged_2_reconstruct_lp120_buf123_us133) {
  return merged_2_reconstruct_lp120_buf123_us133;
}

hw_uint<64> gp_in0_2_buf16_us40_to_gp_7341_ld510_cu1309(hw_uint<32*2>& gp_in0_2_buf16_us40_to_gp_7341) {
  return gp_in0_2_buf16_us40_to_gp_7341;
}

hw_uint<64> lp_in0_1_buf44_ld422_cu1311(hw_uint<32*2>& lp_in0_1_buf44) {
  return lp_in0_1_buf44;
}

hw_uint<64> gp_in0_1_buf8_ld322_cu1313(hw_uint<32*2>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<64> gp_in0_2_buf16_us40_ld342_cu1315(hw_uint<32*2>& gp_in0_2_buf16_us40) {
  return gp_in0_2_buf16_us40;
}

hw_uint<64> gp_in1_1_buf56_ld366_cu1317(hw_uint<32*2>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<128> gp_in1_1_buf56_us96_ld370_cu1319(hw_uint<32*4>& gp_in1_1_buf56_us96) {
  return gp_in1_1_buf56_us96;
}

hw_uint<64> gp_in1_2_buf64_us88_ld386_cu1321(hw_uint<32*2>& gp_in1_2_buf64_us88) {
  return gp_in1_2_buf64_us88;
}

hw_uint<128> in0_ld406_cu1323(hw_uint<32*4>& in0) {
  return in0;
}

hw_uint<64> lp_in1_1_buf92_ld434_cu1325(hw_uint<32*2>& lp_in1_1_buf92) {
  return lp_in1_1_buf92;
}

hw_uint<64> gp_in0_1_buf8_to_gp_7321_ld490_cu1327(hw_uint<32*2>& gp_in0_1_buf8_to_gp_7321) {
  return gp_in0_1_buf8_to_gp_7321;
}

hw_uint<64> gp_in1_1_buf56_to_gp_10357_ld526_cu1329(hw_uint<32*2>& gp_in1_1_buf56_to_gp_10357) {
  return gp_in1_1_buf56_to_gp_10357;
}

hw_uint<128> gp_in0_1_buf8_us48_to_gp_6325_ld494_cu1331(hw_uint<32*4>& gp_in0_1_buf8_us48_to_gp_6325) {
  return gp_in0_1_buf8_us48_to_gp_6325;
}

hw_uint<128> in0_ld402_cu1333(hw_uint<32*4>& in0) {
  return in0;
}

hw_uint<128> in1_ld410_cu1335(hw_uint<32*4>& in1) {
  return in1;
}

hw_uint<128> in1_ld414_cu1337(hw_uint<32*4>& in1) {
  return in1;
}

hw_uint<128> lp_in1_0_buf100_ld430_cu1339(hw_uint<32*4>& lp_in1_0_buf100) {
  return lp_in1_0_buf100;
}

hw_uint<64> merged_1_ld450_cu1341(hw_uint<32*2>& merged_1) {
  return merged_1;
}

hw_uint<64> merged_1_reconstruct_lp129_buf132_ld454_cu1343(hw_uint<32*2>& merged_1_reconstruct_lp129_buf132) {
  return merged_1_reconstruct_lp129_buf132;
}

hw_uint<64> gp_in0_1_buf8_to_gp_1313_ld482_cu1345(hw_uint<32*2>& gp_in0_1_buf8_to_gp_1313) {
  return gp_in0_1_buf8_to_gp_1313;
}

hw_uint<128> merged_1_reconstruct_lp129_buf132_us142_ld458_cu1347(hw_uint<32*4>& merged_1_reconstruct_lp129_buf132_us142) {
  return merged_1_reconstruct_lp129_buf132_us142;
}

hw_uint<64> merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638_cu1349(hw_uint<32*2>& merged_2_reconstruct_lp120_buf123_us133_to_gp_13469) {
  return merged_2_reconstruct_lp120_buf123_us133_to_gp_13469;
}

hw_uint<128> merged_0_ld442_cu1351(hw_uint<32*4>& merged_0) {
  return merged_0;
}

hw_uint<128> lp_in1_0_buf100_to_gp_18429_ld598_cu1353(hw_uint<32*4>& lp_in1_0_buf100_to_gp_18429) {
  return lp_in1_0_buf100_to_gp_18429;
}

hw_uint<128> merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_cu1355(hw_uint<32*4>& merged_0_reconstruct_lp138_buf141_to_gp_21445) {
  return merged_0_reconstruct_lp138_buf141_to_gp_21445;
}

hw_uint<64> gp_in1_1_buf56_to_gp_25361_ld530_cu1357(hw_uint<32*2>& gp_in1_1_buf56_to_gp_25361) {
  return gp_in1_1_buf56_to_gp_25361;
}

hw_uint<64> gp_in1_1_buf56_to_gp_4365_ld534_cu1359(hw_uint<32*2>& gp_in1_1_buf56_to_gp_4365) {
  return gp_in1_1_buf56_to_gp_4365;
}

hw_uint<128> gp_in1_1_buf56_us96_to_gp_9369_ld538_cu1361(hw_uint<32*4>& gp_in1_1_buf56_us96_to_gp_9369) {
  return gp_in1_1_buf56_us96_to_gp_9369;
}

hw_uint<64> gp_in1_2_buf64_us88_to_gp_10385_ld554_cu1363(hw_uint<32*2>& gp_in1_2_buf64_us88_to_gp_10385) {
  return gp_in1_2_buf64_us88_to_gp_10385;
}

hw_uint<128> in0_to_gp_6405_ld574_cu1365(hw_uint<32*4>& in0_to_gp_6405) {
  return in0_to_gp_6405;
}

hw_uint<128> lp_in0_0_buf52_to_gp_18417_ld586_cu1367(hw_uint<32*4>& lp_in0_0_buf52_to_gp_18417) {
  return lp_in0_0_buf52_to_gp_18417;
}

hw_uint<128> in1_to_gp_3409_ld578_cu1369(hw_uint<32*4>& in1_to_gp_3409) {
  return in1_to_gp_3409;
}

hw_uint<128> in1_to_gp_9413_ld582_cu1371(hw_uint<32*4>& in1_to_gp_9413) {
  return in1_to_gp_9413;
}

hw_uint<64> lp_in0_1_buf44_to_gp_19421_ld590_cu1373(hw_uint<32*2>& lp_in0_1_buf44_to_gp_19421) {
  return lp_in0_1_buf44_to_gp_19421;
}

hw_uint<64> merged_1_to_gp_13449_ld618_cu1375(hw_uint<32*2>& merged_1_to_gp_13449) {
  return merged_1_to_gp_13449;
}

hw_uint<128> in0_to_gp_0401_ld570_cu1377(hw_uint<32*4>& in0_to_gp_0401) {
  return in0_to_gp_0401;
}

hw_uint<64> lp_in1_1_buf92_to_gp_19433_ld602_cu1379(hw_uint<32*2>& lp_in1_1_buf92_to_gp_19433) {
  return lp_in1_1_buf92_to_gp_19433;
}

hw_uint<64> merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622_cu1381(hw_uint<32*2>& merged_1_reconstruct_lp129_buf132_to_gp_28453) {
  return merged_1_reconstruct_lp129_buf132_to_gp_28453;
}

hw_uint<128> merged_0_to_gp_12441_ld610_cu1383(hw_uint<32*4>& merged_0_to_gp_12441) {
  return merged_0_to_gp_12441;
}

hw_uint<128> merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_cu1385(hw_uint<32*4>& merged_1_reconstruct_lp129_buf132_us142_to_gp_12457) {
  return merged_1_reconstruct_lp129_buf132_us142_to_gp_12457;
}

hw_uint<64> gp_in1_158_cu1387(hw_uint<32*18>& in1_FIFO_buf577) {
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
  auto res_gp_in1_158_merged303_sm752_11020 = gp_in1_158_cu301(in1_FIFO_buf577_lane_8_pack);

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
  auto res_gp_in1_158_merged303_sm752_01018 = gp_in1_158_cu301(in1_FIFO_buf577_lane_17_pack);
  hw_uint<64 > return_value1388;
  set_at<0, 64, 32>(return_value1388, res_gp_in1_158_merged303_sm752_11020);
  set_at<32, 64, 32>(return_value1388, res_gp_in1_158_merged303_sm752_01018);
  return return_value1388;

}

hw_uint<64> gp_in0_110_cu1390(hw_uint<32*18>& in0_FIFO_buf569) {
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
  auto res_gp_in0_110_merged306_sm753_1914 = gp_in0_110_cu304(in0_FIFO_buf569_lane_8_pack);

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
  auto res_gp_in0_110_merged306_sm753_0912 = gp_in0_110_cu304(in0_FIFO_buf569_lane_17_pack);
  hw_uint<64 > return_value1391;
  set_at<0, 64, 32>(return_value1391, res_gp_in0_110_merged306_sm753_1914);
  set_at<32, 64, 32>(return_value1391, res_gp_in0_110_merged306_sm753_0912);
  return return_value1391;

}

hw_uint<128> us_gp_in0_1_buf850_cu1393(hw_uint<32*4>& gp_in0_1_buf8_FIFO_buf485) {
  return gp_in0_1_buf8_FIFO_buf485;
}

hw_uint<128> lp_in0_054_cu1395(hw_uint<32*4>& gp_in0_1_buf8_us48_FIFO_buf493, hw_uint<32*4>& in0_FIFO_buf573) {
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_0 = gp_in0_1_buf8_us48_FIFO_buf493.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_1 = gp_in0_1_buf8_us48_FIFO_buf493.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_2 = gp_in0_1_buf8_us48_FIFO_buf493.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_lane_3 = gp_in0_1_buf8_us48_FIFO_buf493.extract<96, 127>();
  hw_uint<32> in0_FIFO_buf573_lane_0 = in0_FIFO_buf573.extract<0, 31>();
  hw_uint<32> in0_FIFO_buf573_lane_1 = in0_FIFO_buf573.extract<32, 63>();
  hw_uint<32> in0_FIFO_buf573_lane_2 = in0_FIFO_buf573.extract<64, 95>();
  hw_uint<32> in0_FIFO_buf573_lane_3 = in0_FIFO_buf573.extract<96, 127>();

	
  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_0);
  hw_uint<32 > in0_FIFO_buf573_lane_0_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_0_pack, in0_FIFO_buf573_lane_0);
  auto res_diff55_sm756_3932 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_0_pack, in0_FIFO_buf573_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_1);
  hw_uint<32 > in0_FIFO_buf573_lane_1_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_1_pack, in0_FIFO_buf573_lane_1);
  auto res_diff55_sm756_2930 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_1_pack, in0_FIFO_buf573_lane_1_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_2_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_2);
  hw_uint<32 > in0_FIFO_buf573_lane_2_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_2_pack, in0_FIFO_buf573_lane_2);
  auto res_diff55_sm756_1928 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_2_pack, in0_FIFO_buf573_lane_2_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_FIFO_buf493_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_FIFO_buf493_lane_3_pack, gp_in0_1_buf8_us48_FIFO_buf493_lane_3);
  hw_uint<32 > in0_FIFO_buf573_lane_3_pack;
  set_at<0, 32, 32>(in0_FIFO_buf573_lane_3_pack, in0_FIFO_buf573_lane_3);
  auto res_diff55_sm756_0926 = llf_diff_float_32(gp_in0_1_buf8_us48_FIFO_buf493_lane_3_pack, in0_FIFO_buf573_lane_3_pack);
  hw_uint<128 > return_value1396;
  set_at<0, 128, 32>(return_value1396, res_diff55_sm756_3932);
  set_at<32, 128, 32>(return_value1396, res_diff55_sm756_2930);
  set_at<64, 128, 32>(return_value1396, res_diff55_sm756_1928);
  set_at<96, 128, 32>(return_value1396, res_diff55_sm756_0926);
  return return_value1396;

}

hw_uint<64> us_gp_in0_2_buf1642_cu1398(hw_uint<32*2>& gp_in0_2_buf16_FIFO_buf501) {
  return gp_in0_2_buf16_FIFO_buf501;
}

hw_uint<64> lp_in0_146_cu1400(hw_uint<32*2>& gp_in0_1_buf8_FIFO_buf489, hw_uint<32*2>& gp_in0_2_buf16_us40_FIFO_buf509) {
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_0 = gp_in0_1_buf8_FIFO_buf489.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_FIFO_buf489_lane_1 = gp_in0_1_buf8_FIFO_buf489.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_0 = gp_in0_2_buf16_us40_FIFO_buf509.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_lane_1 = gp_in0_2_buf16_us40_FIFO_buf509.extract<32, 63>();

	
  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_0_pack, gp_in0_1_buf8_FIFO_buf489_lane_0);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_0_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_0);
  auto res_diff47_sm763_1868 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_0_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_FIFO_buf489_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_FIFO_buf489_lane_1_pack, gp_in0_1_buf8_FIFO_buf489_lane_1);
  hw_uint<32 > gp_in0_2_buf16_us40_FIFO_buf509_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_FIFO_buf509_lane_1_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_1);
  auto res_diff47_sm763_0866 = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lane_1_pack, gp_in0_2_buf16_us40_FIFO_buf509_lane_1_pack);
  hw_uint<64 > return_value1401;
  set_at<0, 64, 32>(return_value1401, res_diff47_sm763_1868);
  set_at<32, 64, 32>(return_value1401, res_diff47_sm763_0866);
  return return_value1401;

}

