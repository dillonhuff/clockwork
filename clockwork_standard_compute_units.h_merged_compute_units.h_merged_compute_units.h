#include "clockwork_standard_compute_units.h_merged_compute_units.h"

hw_uint<128> pw_math_in_oc03_cu30(hw_uint<32*4>& in_oc) {
  hw_uint<32> in_oc_lane_0 = in_oc.extract<0, 31>();
  hw_uint<32> in_oc_lane_1 = in_oc.extract<32, 63>();
  hw_uint<32> in_oc_lane_2 = in_oc.extract<64, 95>();
  hw_uint<32> in_oc_lane_3 = in_oc.extract<96, 127>();

	
  hw_uint<32 > in_oc_lane_0_pack;
  set_at<0, 32, 32>(in_oc_lane_0_pack, in_oc_lane_0);
  auto res_pw_math_in_oc04_sm11_014 = id(in_oc_lane_0_pack);

  hw_uint<32 > in_oc_lane_1_pack;
  set_at<0, 32, 32>(in_oc_lane_1_pack, in_oc_lane_1);
  auto res_pw_math_in_oc04_sm11_116 = id(in_oc_lane_1_pack);

  hw_uint<32 > in_oc_lane_2_pack;
  set_at<0, 32, 32>(in_oc_lane_2_pack, in_oc_lane_2);
  auto res_pw_math_in_oc04_sm11_218 = id(in_oc_lane_2_pack);

  hw_uint<32 > in_oc_lane_3_pack;
  set_at<0, 32, 32>(in_oc_lane_3_pack, in_oc_lane_3);
  auto res_pw_math_in_oc04_sm11_320 = id(in_oc_lane_3_pack);
  hw_uint<128 > return_value31;
  set_at<0, 128, 32>(return_value31, res_pw_math_in_oc04_sm11_014);
  set_at<32, 128, 32>(return_value31, res_pw_math_in_oc04_sm11_116);
  set_at<64, 128, 32>(return_value31, res_pw_math_in_oc04_sm11_218);
  set_at<96, 128, 32>(return_value31, res_pw_math_in_oc04_sm11_320);
  return return_value31;

}

hw_uint<64> x_cu33(hw_uint<32*2>& in) {
  return in;
}

hw_uint<64> pw_math_down69_cu35(hw_uint<32*2>& down) {
  hw_uint<32> down_lane_0 = down.extract<0, 31>();
  hw_uint<32> down_lane_1 = down.extract<32, 63>();

	
  hw_uint<32 > down_lane_0_pack;
  set_at<0, 32, 32>(down_lane_0_pack, down_lane_0);
  auto res_pw_math_down610_sm13_026 = id(down_lane_0_pack);

  hw_uint<32 > down_lane_1_pack;
  set_at<0, 32, 32>(down_lane_1_pack, down_lane_1);
  auto res_pw_math_down610_sm13_128 = id(down_lane_1_pack);
  hw_uint<64 > return_value36;
  set_at<0, 64, 32>(return_value36, res_pw_math_down610_sm13_026);
  set_at<32, 64, 32>(return_value36, res_pw_math_down610_sm13_128);
  return return_value36;

}

