#include "local_laplacian_filters_compute.h_merged_compute_units.h"

hw_uint<96> oc_load_color_in_oc02_cu2590(hw_uint<32*3>& color_in_oc) {
  return color_in_oc;
}

hw_uint<96> pw_math_color_in_int57_cu2592(hw_uint<32*3>& color_in_int_FIFO_buf1892) {
  hw_uint<32> color_in_int_FIFO_buf1892_lane_0 = color_in_int_FIFO_buf1892.extract<0, 31>();
  hw_uint<32> color_in_int_FIFO_buf1892_lane_1 = color_in_int_FIFO_buf1892.extract<32, 63>();
  hw_uint<32> color_in_int_FIFO_buf1892_lane_2 = color_in_int_FIFO_buf1892.extract<64, 95>();

	
  hw_uint<32 > color_in_int_FIFO_buf1892_lane_0_pack;
  set_at<0, 32, 32>(color_in_int_FIFO_buf1892_lane_0_pack, color_in_int_FIFO_buf1892_lane_0);
auto res_pw_math_color_in_int59_pw_math_color_in_int58_22528 = llf_int_to_float(color_in_int_FIFO_buf1892_lane_0_pack);

	  hw_uint<32 > color_in_int_FIFO_buf1892_lane_1_pack;
  set_at<0, 32, 32>(color_in_int_FIFO_buf1892_lane_1_pack, color_in_int_FIFO_buf1892_lane_1);
auto res_pw_math_color_in_int59_pw_math_color_in_int58_12526 = llf_int_to_float(color_in_int_FIFO_buf1892_lane_1_pack);

	  hw_uint<32 > color_in_int_FIFO_buf1892_lane_2_pack;
  set_at<0, 32, 32>(color_in_int_FIFO_buf1892_lane_2_pack, color_in_int_FIFO_buf1892_lane_2);
auto res_pw_math_color_in_int59_pw_math_color_in_int58_02524 = llf_int_to_float(color_in_int_FIFO_buf1892_lane_2_pack);
  hw_uint<96 > return_value2593;
  set_at<0, 96, 32>(return_value2593, res_pw_math_color_in_int59_pw_math_color_in_int58_22528);
  set_at<32, 96, 32>(return_value2593, res_pw_math_color_in_int59_pw_math_color_in_int58_12526);
  set_at<64, 96, 32>(return_value2593, res_pw_math_color_in_int59_pw_math_color_in_int58_02524);
  return return_value2593;

}

hw_uint<96> color_out_float_to_color509_cu2595(hw_uint<32*3>& color_in_FIFO_buf1887, hw_uint<32*3>& gray_FIFO_buf2306, hw_uint<32*3>& gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354) {
  hw_uint<32> color_in_FIFO_buf1887_lane_0 = color_in_FIFO_buf1887.extract<0, 31>();
  hw_uint<32> color_in_FIFO_buf1887_lane_1 = color_in_FIFO_buf1887.extract<32, 63>();
  hw_uint<32> color_in_FIFO_buf1887_lane_2 = color_in_FIFO_buf1887.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2306_lane_0 = gray_FIFO_buf2306.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2306_lane_1 = gray_FIFO_buf2306.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2306_lane_2 = gray_FIFO_buf2306.extract<64, 95>();
  hw_uint<32> gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_0 = gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354.extract<0, 31>();
  hw_uint<32> gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_1 = gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354.extract<32, 63>();
  hw_uint<32> gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_2 = gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354.extract<64, 95>();

	
  hw_uint<32 > color_in_FIFO_buf1887_lane_0_pack;
  set_at<0, 32, 32>(color_in_FIFO_buf1887_lane_0_pack, color_in_FIFO_buf1887_lane_0);
  hw_uint<32 > gray_FIFO_buf2306_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2306_lane_0_pack, gray_FIFO_buf2306_lane_0);
  hw_uint<32 > gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_0_pack;
  set_at<0, 32, 32>(gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_0_pack, gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_0);
auto res_cc511_color_out_float_to_color510_22534 = llf_to_color_float(color_in_FIFO_buf1887_lane_0_pack, gray_FIFO_buf2306_lane_0_pack, gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_0_pack);

	  hw_uint<32 > color_in_FIFO_buf1887_lane_1_pack;
  set_at<0, 32, 32>(color_in_FIFO_buf1887_lane_1_pack, color_in_FIFO_buf1887_lane_1);
  hw_uint<32 > gray_FIFO_buf2306_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2306_lane_1_pack, gray_FIFO_buf2306_lane_1);
  hw_uint<32 > gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_1_pack;
  set_at<0, 32, 32>(gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_1_pack, gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_1);
auto res_cc511_color_out_float_to_color510_12532 = llf_to_color_float(color_in_FIFO_buf1887_lane_1_pack, gray_FIFO_buf2306_lane_1_pack, gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_1_pack);

	  hw_uint<32 > color_in_FIFO_buf1887_lane_2_pack;
  set_at<0, 32, 32>(color_in_FIFO_buf1887_lane_2_pack, color_in_FIFO_buf1887_lane_2);
  hw_uint<32 > gray_FIFO_buf2306_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2306_lane_2_pack, gray_FIFO_buf2306_lane_2);
  hw_uint<32 > gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_2_pack;
  set_at<0, 32, 32>(gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_2_pack, gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_2);
auto res_cc511_color_out_float_to_color510_02530 = llf_to_color_float(color_in_FIFO_buf1887_lane_2_pack, gray_FIFO_buf2306_lane_2_pack, gray_interpolated461_reconstruct_lp499_buf502_FIFO_buf2354_lane_2_pack);
  hw_uint<96 > return_value2596;
  set_at<0, 96, 32>(return_value2596, res_cc511_color_out_float_to_color510_22534);
  set_at<32, 96, 32>(return_value2596, res_cc511_color_out_float_to_color510_12532);
  set_at<64, 96, 32>(return_value2596, res_cc511_color_out_float_to_color510_02530);
  return return_value2596;

}

hw_uint<96> pw_math_color_out_float512514_cu2598(hw_uint<32*3>& color_out_float_FIFO_buf1897) {
  hw_uint<32> color_out_float_FIFO_buf1897_lane_0 = color_out_float_FIFO_buf1897.extract<0, 31>();
  hw_uint<32> color_out_float_FIFO_buf1897_lane_1 = color_out_float_FIFO_buf1897.extract<32, 63>();
  hw_uint<32> color_out_float_FIFO_buf1897_lane_2 = color_out_float_FIFO_buf1897.extract<64, 95>();

	
  hw_uint<32 > color_out_float_FIFO_buf1897_lane_0_pack;
  set_at<0, 32, 32>(color_out_float_FIFO_buf1897_lane_0_pack, color_out_float_FIFO_buf1897_lane_0);
auto res_pw_math_color_out_float512516_pw_math_color_out_float512515_22540 = llf_float_to_int(color_out_float_FIFO_buf1897_lane_0_pack);

	  hw_uint<32 > color_out_float_FIFO_buf1897_lane_1_pack;
  set_at<0, 32, 32>(color_out_float_FIFO_buf1897_lane_1_pack, color_out_float_FIFO_buf1897_lane_1);
auto res_pw_math_color_out_float512516_pw_math_color_out_float512515_12538 = llf_float_to_int(color_out_float_FIFO_buf1897_lane_1_pack);

	  hw_uint<32 > color_out_float_FIFO_buf1897_lane_2_pack;
  set_at<0, 32, 32>(color_out_float_FIFO_buf1897_lane_2_pack, color_out_float_FIFO_buf1897_lane_2);
auto res_pw_math_color_out_float512516_pw_math_color_out_float512515_02536 = llf_float_to_int(color_out_float_FIFO_buf1897_lane_2_pack);
  hw_uint<96 > return_value2599;
  set_at<0, 96, 32>(return_value2599, res_pw_math_color_out_float512516_pw_math_color_out_float512515_22540);
  set_at<32, 96, 32>(return_value2599, res_pw_math_color_out_float512516_pw_math_color_out_float512515_12538);
  set_at<64, 96, 32>(return_value2599, res_pw_math_color_out_float512516_pw_math_color_out_float512515_02536);
  return return_value2599;

}

hw_uint<96> color_in_int_ld1258_cu2601(hw_uint<32*3>& color_in_int) {
  return color_in_int;
}

hw_uint<96> color_in_ld1248_cu2603(hw_uint<32*3>& color_in) {
  return color_in;
}

hw_uint<96> color_in_ld1253_cu2605(hw_uint<32*3>& color_in) {
  return color_in;
}

hw_uint<96> color_out_float_ld1263_cu2607(hw_uint<32*3>& color_out_float) {
  return color_out_float;
}

hw_uint<96> color_in_to_gp_11251_ld1889_cu2609(hw_uint<32*3>& color_in_to_gp_11251) {
  return color_in_to_gp_11251;
}

hw_uint<96> color_in_int_to_gp_611256_ld1894_cu2611(hw_uint<32*3>& color_in_int_to_gp_611256) {
  return color_in_int_to_gp_611256;
}

hw_uint<96> color_out_float_to_gp_621261_ld1899_cu2613(hw_uint<32*3>& color_out_float_to_gp_621261) {
  return color_out_float_to_gp_621261;
}

hw_uint<96> color_in_to_gp_01246_ld1884_cu2615(hw_uint<32*3>& color_in_to_gp_01246) {
  return color_in_to_gp_01246;
}

