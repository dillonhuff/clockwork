#include "pw5_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<64> t1_1_cu28(hw_uint<32*2>& t1_arg) {
  hw_uint<32> t1_arg_lane_0 = t1_arg.extract<0, 31>();
  hw_uint<32> t1_arg_lane_1 = t1_arg.extract<32, 63>();

	
  hw_uint<32 > t1_arg_lane_0_pack;
  set_at<0, 32, 32>(t1_arg_lane_0_pack, t1_arg_lane_0);
  auto res_t1_update_0_sm8_114 = t1_generated_compute_unrolled_1(t1_arg_lane_0_pack);

  hw_uint<32 > t1_arg_lane_1_pack;
  set_at<0, 32, 32>(t1_arg_lane_1_pack, t1_arg_lane_1);
  auto res_t1_update_0_sm8_012 = t1_generated_compute_unrolled_1(t1_arg_lane_1_pack);
  hw_uint<64 > return_value29;
  set_at<0, 64, 32>(return_value29, res_t1_update_0_sm8_114);
  set_at<32, 64, 32>(return_value29, res_t1_update_0_sm8_012);
  return return_value29;

}

hw_uint<64> pw5_2_1_cu31(hw_uint<32*2>& t1_FIFO_buf4) {
  hw_uint<32> t1_FIFO_buf4_lane_0 = t1_FIFO_buf4.extract<0, 31>();
  hw_uint<32> t1_FIFO_buf4_lane_1 = t1_FIFO_buf4.extract<32, 63>();

	
  hw_uint<32 > t1_FIFO_buf4_lane_0_pack;
  set_at<0, 32, 32>(t1_FIFO_buf4_lane_0_pack, t1_FIFO_buf4_lane_0);
  auto res_pw5_2_update_0_sm9_118 = pw5_2_generated_compute_unrolled_1(t1_FIFO_buf4_lane_0_pack);

  hw_uint<32 > t1_FIFO_buf4_lane_1_pack;
  set_at<0, 32, 32>(t1_FIFO_buf4_lane_1_pack, t1_FIFO_buf4_lane_1);
  auto res_pw5_2_update_0_sm9_016 = pw5_2_generated_compute_unrolled_1(t1_FIFO_buf4_lane_1_pack);
  hw_uint<64 > return_value32;
  set_at<0, 64, 32>(return_value32, res_pw5_2_update_0_sm9_118);
  set_at<32, 64, 32>(return_value32, res_pw5_2_update_0_sm9_016);
  return return_value32;

}

hw_uint<64> t1_ld1_cu34(hw_uint<32*2>& t1) {
  return t1;
}

hw_uint<64> t1_to_gp_00_ld5_cu36(hw_uint<32*2>& t1_to_gp_00) {
  return t1_to_gp_00;
}

