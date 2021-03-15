#include "pw5_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<64> t1_1_cu10(hw_uint<32*2>& t1_arg) {
  hw_uint<32> t1_arg_lane_0 = t1_arg.extract<0, 31>();
  hw_uint<32> t1_arg_lane_1 = t1_arg.extract<32, 63>();

	
  hw_uint<32 > t1_arg_lane_0_pack;
  set_at<0, 32, 32>(t1_arg_lane_0_pack, t1_arg_lane_0);
  auto res_t1_update_0_sm0_14 = t1_generated_compute_unrolled_1(t1_arg_lane_0_pack);

  hw_uint<32 > t1_arg_lane_1_pack;
  set_at<0, 32, 32>(t1_arg_lane_1_pack, t1_arg_lane_1);
  auto res_t1_update_0_sm0_02 = t1_generated_compute_unrolled_1(t1_arg_lane_1_pack);
  hw_uint<64 > return_value11;
  set_at<0, 64, 32>(return_value11, res_t1_update_0_sm0_14);
  set_at<32, 64, 32>(return_value11, res_t1_update_0_sm0_02);
  return return_value11;

}

hw_uint<64> pw5_2_1_cu13(hw_uint<32*2>& t1) {
  hw_uint<32> t1_lane_0 = t1.extract<0, 31>();
  hw_uint<32> t1_lane_1 = t1.extract<32, 63>();

	
  hw_uint<32 > t1_lane_0_pack;
  set_at<0, 32, 32>(t1_lane_0_pack, t1_lane_0);
  auto res_pw5_2_update_0_sm1_18 = pw5_2_generated_compute_unrolled_1(t1_lane_0_pack);

  hw_uint<32 > t1_lane_1_pack;
  set_at<0, 32, 32>(t1_lane_1_pack, t1_lane_1);
  auto res_pw5_2_update_0_sm1_06 = pw5_2_generated_compute_unrolled_1(t1_lane_1_pack);
  hw_uint<64 > return_value14;
  set_at<0, 64, 32>(return_value14, res_pw5_2_update_0_sm1_18);
  set_at<32, 64, 32>(return_value14, res_pw5_2_update_0_sm1_06);
  return return_value14;

}

