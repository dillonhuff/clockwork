#include "clockwork_standard_compute_units.h"

hw_uint<32> x_cu34(hw_uint<32*9>& in) {
  hw_uint<32> in_lane_0 = in.extract<0, 31>();
  hw_uint<32> in_lane_1 = in.extract<32, 63>();
  hw_uint<32> in_lane_2 = in.extract<64, 95>();
  hw_uint<32> in_lane_3 = in.extract<96, 127>();
  hw_uint<32> in_lane_4 = in.extract<128, 159>();
  hw_uint<32> in_lane_5 = in.extract<160, 191>();
  hw_uint<32> in_lane_6 = in.extract<192, 223>();
  hw_uint<32> in_lane_7 = in.extract<224, 255>();
  hw_uint<32> in_lane_8 = in.extract<256, 287>();

	
auto res_init4 = set_zero_32();

	  hw_uint<32 > res_init4_pack;
  set_at<0, 32, 32>(res_init4_pack, res_init4);
  hw_uint<32 > in_lane_0_pack;
  set_at<0, 32, 32>(in_lane_0_pack, in_lane_0);
auto res_r5_rx_010_ry_232 = add(res_init4_pack, in_lane_0_pack);

	  hw_uint<32 > res_r5_rx_010_ry_232_pack;
  set_at<0, 32, 32>(res_r5_rx_010_ry_232_pack, res_r5_rx_010_ry_232);
  hw_uint<32 > in_lane_1_pack;
  set_at<0, 32, 32>(in_lane_1_pack, in_lane_1);
auto res_r5_rx_112_ry_230 = add(res_r5_rx_010_ry_232_pack, in_lane_1_pack);

	  hw_uint<32 > res_r5_rx_112_ry_230_pack;
  set_at<0, 32, 32>(res_r5_rx_112_ry_230_pack, res_r5_rx_112_ry_230);
  hw_uint<32 > in_lane_2_pack;
  set_at<0, 32, 32>(in_lane_2_pack, in_lane_2);
auto res_r5_rx_214_ry_228 = add(res_r5_rx_112_ry_230_pack, in_lane_2_pack);

	  hw_uint<32 > res_r5_rx_214_ry_228_pack;
  set_at<0, 32, 32>(res_r5_rx_214_ry_228_pack, res_r5_rx_214_ry_228);
  hw_uint<32 > in_lane_3_pack;
  set_at<0, 32, 32>(in_lane_3_pack, in_lane_3);
auto res_r5_rx_010_ry_126 = add(res_r5_rx_214_ry_228_pack, in_lane_3_pack);

	  hw_uint<32 > res_r5_rx_010_ry_126_pack;
  set_at<0, 32, 32>(res_r5_rx_010_ry_126_pack, res_r5_rx_010_ry_126);
  hw_uint<32 > in_lane_4_pack;
  set_at<0, 32, 32>(in_lane_4_pack, in_lane_4);
auto res_r5_rx_112_ry_124 = add(res_r5_rx_010_ry_126_pack, in_lane_4_pack);

	  hw_uint<32 > res_r5_rx_112_ry_124_pack;
  set_at<0, 32, 32>(res_r5_rx_112_ry_124_pack, res_r5_rx_112_ry_124);
  hw_uint<32 > in_lane_5_pack;
  set_at<0, 32, 32>(in_lane_5_pack, in_lane_5);
auto res_r5_rx_214_ry_122 = add(res_r5_rx_112_ry_124_pack, in_lane_5_pack);

	  hw_uint<32 > res_r5_rx_214_ry_122_pack;
  set_at<0, 32, 32>(res_r5_rx_214_ry_122_pack, res_r5_rx_214_ry_122);
  hw_uint<32 > in_lane_6_pack;
  set_at<0, 32, 32>(in_lane_6_pack, in_lane_6);
auto res_r5_rx_010_ry_020 = add(res_r5_rx_214_ry_122_pack, in_lane_6_pack);

	  hw_uint<32 > res_r5_rx_010_ry_020_pack;
  set_at<0, 32, 32>(res_r5_rx_010_ry_020_pack, res_r5_rx_010_ry_020);
  hw_uint<32 > in_lane_7_pack;
  set_at<0, 32, 32>(in_lane_7_pack, in_lane_7);
auto res_r5_rx_112_ry_018 = add(res_r5_rx_010_ry_020_pack, in_lane_7_pack);

	  hw_uint<32 > res_r5_rx_112_ry_018_pack;
  set_at<0, 32, 32>(res_r5_rx_112_ry_018_pack, res_r5_rx_112_ry_018);
  hw_uint<32 > in_lane_8_pack;
  set_at<0, 32, 32>(in_lane_8_pack, in_lane_8);
auto res_r5_rx_214_ry_016 = add(res_r5_rx_112_ry_018_pack, in_lane_8_pack);
  hw_uint<32 > return_value35;
  set_at<0, 32, 32>(return_value35, res_r5_rx_214_ry_016);
  return return_value35;

}

