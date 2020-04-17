#pragma once

#include "conv_3x3.h"

  // input_update_0 unroll factor: 8
hw_uint<256>  id_unrolled_8(hw_uint<256>& input_arg) {
  hw_uint<256> whole_result;
  hw_uint<32> lane_0_input_arg;
  // Need offset: 0, 0
  set_at<0, 32>(lane_0_input_arg, input_arg.extract<0, 31>());
  auto result_0 = id(lane_0_input_arg);
  set_at<0, 256>(whole_result, result_0);
  hw_uint<32> lane_1_input_arg;
  // Need offset: 1, 0
  set_at<0, 32>(lane_1_input_arg, input_arg.extract<32, 63>());
  auto result_1 = id(lane_1_input_arg);
  set_at<32, 256>(whole_result, result_1);
  hw_uint<32> lane_2_input_arg;
  // Need offset: 2, 0
  set_at<0, 32>(lane_2_input_arg, input_arg.extract<64, 95>());
  auto result_2 = id(lane_2_input_arg);
  set_at<64, 256>(whole_result, result_2);
  hw_uint<32> lane_3_input_arg;
  // Need offset: 3, 0
  set_at<0, 32>(lane_3_input_arg, input_arg.extract<96, 127>());
  auto result_3 = id(lane_3_input_arg);
  set_at<96, 256>(whole_result, result_3);
  hw_uint<32> lane_4_input_arg;
  // Need offset: 4, 0
  set_at<0, 32>(lane_4_input_arg, input_arg.extract<128, 159>());
  auto result_4 = id(lane_4_input_arg);
  set_at<128, 256>(whole_result, result_4);
  hw_uint<32> lane_5_input_arg;
  // Need offset: 5, 0
  set_at<0, 32>(lane_5_input_arg, input_arg.extract<160, 191>());
  auto result_5 = id(lane_5_input_arg);
  set_at<160, 256>(whole_result, result_5);
  hw_uint<32> lane_6_input_arg;
  // Need offset: 6, 0
  set_at<0, 32>(lane_6_input_arg, input_arg.extract<192, 223>());
  auto result_6 = id(lane_6_input_arg);
  set_at<192, 256>(whole_result, result_6);
  hw_uint<32> lane_7_input_arg;
  // Need offset: 7, 0
  set_at<0, 32>(lane_7_input_arg, input_arg.extract<224, 255>());
  auto result_7 = id(lane_7_input_arg);
  set_at<224, 256>(whole_result, result_7);
  return whole_result;
}

  // blurx_update_0 unroll factor: 8
hw_uint<256>  blurx_comp_unrolled_8(hw_uint<768>& input) {
  hw_uint<256> whole_result;
  hw_uint<96> lane_0_input;
  // Need offset: 0, 0
  set_at<0, 96>(lane_0_input, input.extract<0, 31>());
  // Need offset: 0, 1
  set_at<32, 96>(lane_0_input, input.extract<32, 63>());
  // Need offset: 0, 2
  set_at<64, 96>(lane_0_input, input.extract<64, 95>());
  auto result_0 = blurx_comp(lane_0_input);
  set_at<0, 256>(whole_result, result_0);
  hw_uint<96> lane_1_input;
  // Need offset: 1, 0
  set_at<0, 96>(lane_1_input, input.extract<96, 127>());
  // Need offset: 1, 1
  set_at<32, 96>(lane_1_input, input.extract<128, 159>());
  // Need offset: 1, 2
  set_at<64, 96>(lane_1_input, input.extract<160, 191>());
  auto result_1 = blurx_comp(lane_1_input);
  set_at<32, 256>(whole_result, result_1);
  hw_uint<96> lane_2_input;
  // Need offset: 2, 0
  set_at<0, 96>(lane_2_input, input.extract<192, 223>());
  // Need offset: 2, 1
  set_at<32, 96>(lane_2_input, input.extract<224, 255>());
  // Need offset: 2, 2
  set_at<64, 96>(lane_2_input, input.extract<256, 287>());
  auto result_2 = blurx_comp(lane_2_input);
  set_at<64, 256>(whole_result, result_2);
  hw_uint<96> lane_3_input;
  // Need offset: 3, 0
  set_at<0, 96>(lane_3_input, input.extract<288, 319>());
  // Need offset: 3, 1
  set_at<32, 96>(lane_3_input, input.extract<320, 351>());
  // Need offset: 3, 2
  set_at<64, 96>(lane_3_input, input.extract<352, 383>());
  auto result_3 = blurx_comp(lane_3_input);
  set_at<96, 256>(whole_result, result_3);
  hw_uint<96> lane_4_input;
  // Need offset: 4, 0
  set_at<0, 96>(lane_4_input, input.extract<384, 415>());
  // Need offset: 4, 1
  set_at<32, 96>(lane_4_input, input.extract<416, 447>());
  // Need offset: 4, 2
  set_at<64, 96>(lane_4_input, input.extract<448, 479>());
  auto result_4 = blurx_comp(lane_4_input);
  set_at<128, 256>(whole_result, result_4);
  hw_uint<96> lane_5_input;
  // Need offset: 5, 0
  set_at<0, 96>(lane_5_input, input.extract<480, 511>());
  // Need offset: 5, 1
  set_at<32, 96>(lane_5_input, input.extract<512, 543>());
  // Need offset: 5, 2
  set_at<64, 96>(lane_5_input, input.extract<544, 575>());
  auto result_5 = blurx_comp(lane_5_input);
  set_at<160, 256>(whole_result, result_5);
  hw_uint<96> lane_6_input;
  // Need offset: 6, 0
  set_at<0, 96>(lane_6_input, input.extract<576, 607>());
  // Need offset: 6, 1
  set_at<32, 96>(lane_6_input, input.extract<608, 639>());
  // Need offset: 6, 2
  set_at<64, 96>(lane_6_input, input.extract<640, 671>());
  auto result_6 = blurx_comp(lane_6_input);
  set_at<192, 256>(whole_result, result_6);
  hw_uint<96> lane_7_input;
  // Need offset: 7, 0
  set_at<0, 96>(lane_7_input, input.extract<672, 703>());
  // Need offset: 7, 1
  set_at<32, 96>(lane_7_input, input.extract<704, 735>());
  // Need offset: 7, 2
  set_at<64, 96>(lane_7_input, input.extract<736, 767>());
  auto result_7 = blurx_comp(lane_7_input);
  set_at<224, 256>(whole_result, result_7);
  return whole_result;
}

  // blur_xy_unrolled_8_update_0 unroll factor: 8
hw_uint<256>  blury_comp_unrolled_8(hw_uint<320>& blurx) {
  hw_uint<256> whole_result;
  hw_uint<96> lane_0_blurx;
  // Need offset: 0, 0
  set_at<0, 96>(lane_0_blurx, blurx.extract<0, 31>());
  // Need offset: 1, 0
  set_at<32, 96>(lane_0_blurx, blurx.extract<32, 63>());
  // Need offset: 2, 0
  set_at<64, 96>(lane_0_blurx, blurx.extract<64, 95>());
  auto result_0 = blury_comp(lane_0_blurx);
  set_at<0, 256>(whole_result, result_0);
  hw_uint<96> lane_1_blurx;
  // Need offset: 1, 0
  set_at<0, 96>(lane_1_blurx, blurx.extract<32, 63>());
  // Need offset: 2, 0
  set_at<32, 96>(lane_1_blurx, blurx.extract<64, 95>());
  // Need offset: 3, 0
  set_at<64, 96>(lane_1_blurx, blurx.extract<96, 127>());
  auto result_1 = blury_comp(lane_1_blurx);
  set_at<32, 256>(whole_result, result_1);
  hw_uint<96> lane_2_blurx;
  // Need offset: 2, 0
  set_at<0, 96>(lane_2_blurx, blurx.extract<64, 95>());
  // Need offset: 3, 0
  set_at<32, 96>(lane_2_blurx, blurx.extract<96, 127>());
  // Need offset: 4, 0
  set_at<64, 96>(lane_2_blurx, blurx.extract<128, 159>());
  auto result_2 = blury_comp(lane_2_blurx);
  set_at<64, 256>(whole_result, result_2);
  hw_uint<96> lane_3_blurx;
  // Need offset: 3, 0
  set_at<0, 96>(lane_3_blurx, blurx.extract<96, 127>());
  // Need offset: 4, 0
  set_at<32, 96>(lane_3_blurx, blurx.extract<128, 159>());
  // Need offset: 5, 0
  set_at<64, 96>(lane_3_blurx, blurx.extract<160, 191>());
  auto result_3 = blury_comp(lane_3_blurx);
  set_at<96, 256>(whole_result, result_3);
  hw_uint<96> lane_4_blurx;
  // Need offset: 4, 0
  set_at<0, 96>(lane_4_blurx, blurx.extract<128, 159>());
  // Need offset: 5, 0
  set_at<32, 96>(lane_4_blurx, blurx.extract<160, 191>());
  // Need offset: 6, 0
  set_at<64, 96>(lane_4_blurx, blurx.extract<192, 223>());
  auto result_4 = blury_comp(lane_4_blurx);
  set_at<128, 256>(whole_result, result_4);
  hw_uint<96> lane_5_blurx;
  // Need offset: 5, 0
  set_at<0, 96>(lane_5_blurx, blurx.extract<160, 191>());
  // Need offset: 6, 0
  set_at<32, 96>(lane_5_blurx, blurx.extract<192, 223>());
  // Need offset: 7, 0
  set_at<64, 96>(lane_5_blurx, blurx.extract<224, 255>());
  auto result_5 = blury_comp(lane_5_blurx);
  set_at<160, 256>(whole_result, result_5);
  hw_uint<96> lane_6_blurx;
  // Need offset: 6, 0
  set_at<0, 96>(lane_6_blurx, blurx.extract<192, 223>());
  // Need offset: 7, 0
  set_at<32, 96>(lane_6_blurx, blurx.extract<224, 255>());
  // Need offset: 8, 0
  set_at<64, 96>(lane_6_blurx, blurx.extract<256, 287>());
  auto result_6 = blury_comp(lane_6_blurx);
  set_at<192, 256>(whole_result, result_6);
  hw_uint<96> lane_7_blurx;
  // Need offset: 7, 0
  set_at<0, 96>(lane_7_blurx, blurx.extract<224, 255>());
  // Need offset: 8, 0
  set_at<32, 96>(lane_7_blurx, blurx.extract<256, 287>());
  // Need offset: 9, 0
  set_at<64, 96>(lane_7_blurx, blurx.extract<288, 319>());
  auto result_7 = blury_comp(lane_7_blurx);
  set_at<224, 256>(whole_result, result_7);
  return whole_result;
}

