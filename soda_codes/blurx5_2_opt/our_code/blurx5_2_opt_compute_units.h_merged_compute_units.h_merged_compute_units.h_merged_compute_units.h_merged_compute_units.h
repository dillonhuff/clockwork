#include "blurx5_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<32> input_1_cu10(hw_uint<16*2>& input_arg) {
  hw_uint<16> input_arg_lane_0 = input_arg.extract<0, 15>();
  hw_uint<16> input_arg_lane_1 = input_arg.extract<16, 31>();

	
  hw_uint<16 > input_arg_lane_0_pack;
  set_at<0, 16, 16>(input_arg_lane_0_pack, input_arg_lane_0);
  auto res_input_update_0_sm0_14 = input_generated_compute_unrolled_1(input_arg_lane_0_pack);

  hw_uint<16 > input_arg_lane_1_pack;
  set_at<0, 16, 16>(input_arg_lane_1_pack, input_arg_lane_1);
  auto res_input_update_0_sm0_02 = input_generated_compute_unrolled_1(input_arg_lane_1_pack);
  hw_uint<32 > return_value11;
  set_at<0, 32, 16>(return_value11, res_input_update_0_sm0_14);
  set_at<16, 32, 16>(return_value11, res_input_update_0_sm0_02);
  return return_value11;

}

hw_uint<32> blurx5_2_1_cu13(hw_uint<16*6>& input) {
  hw_uint<16> input_lane_0 = input.extract<0, 15>();
  hw_uint<16> input_lane_1 = input.extract<16, 31>();
  hw_uint<16> input_lane_2 = input.extract<32, 47>();
  hw_uint<16> input_lane_3 = input.extract<48, 63>();
  hw_uint<16> input_lane_4 = input.extract<64, 79>();
  hw_uint<16> input_lane_5 = input.extract<80, 95>();

	
  hw_uint<48 > input_lane_2_pack;
  set_at<0, 48, 16>(input_lane_2_pack, input_lane_0);
  set_at<16, 48, 16>(input_lane_2_pack, input_lane_1);
  set_at<32, 48, 16>(input_lane_2_pack, input_lane_2);
  auto res_blurx5_2_update_0_sm1_18 = blurx5_2_generated_compute_unrolled_1(input_lane_2_pack);

  hw_uint<48 > input_lane_5_pack;
  set_at<0, 48, 16>(input_lane_5_pack, input_lane_3);
  set_at<16, 48, 16>(input_lane_5_pack, input_lane_4);
  set_at<32, 48, 16>(input_lane_5_pack, input_lane_5);
  auto res_blurx5_2_update_0_sm1_06 = blurx5_2_generated_compute_unrolled_1(input_lane_5_pack);
  hw_uint<32 > return_value14;
  set_at<0, 32, 16>(return_value14, res_blurx5_2_update_0_sm1_18);
  set_at<16, 32, 16>(return_value14, res_blurx5_2_update_0_sm1_06);
  return return_value14;

}

