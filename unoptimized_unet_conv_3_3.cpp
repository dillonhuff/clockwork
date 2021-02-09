#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: unet_conv_3_3_compute.h
#include "unet_conv_3_3_compute.h"

struct conv_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 3], [0, 14], [0, 14]}
  hw_uint<16> RAM[4][15][15];
  inline hw_uint<16> read(int d0, int d1, int d2) {
    return RAM[d0][d1][d2];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2) {
    RAM[d0][d1][d2] = value;
  }

};

struct conv_stencil_cache {
  // Reader addrs...
    // { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[conv_s1_w, 3conv_s1_y_y, 3conv_s1_x_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    // { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[conv_s1_w, 3conv_s1_y_y, 1 + 3conv_s1_x_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    // { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[conv_s1_w, 3conv_s1_y_y, 2 + 3conv_s1_x_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    // { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> conv_stencil[conv_s1_w, 1 + 3conv_s1_y_y, 3conv_s1_x_x_1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
    // { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> conv_stencil[conv_s1_w, 1 + 3conv_s1_y_y, 1 + 3conv_s1_x_x_1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
    // { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> conv_stencil[conv_s1_w, 1 + 3conv_s1_y_y, 2 + 3conv_s1_x_x_1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
    // { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> conv_stencil[conv_s1_w, 2 + 3conv_s1_y_y, 3conv_s1_x_x_2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
    // { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> conv_stencil[conv_s1_w, 2 + 3conv_s1_y_y, 1 + 3conv_s1_x_x_2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
    // { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> conv_stencil[conv_s1_w, 2 + 3conv_s1_y_y, 2 + 3conv_s1_x_x_2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
    // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  // # of banks: 1
  conv_stencil_all_inputs_to_all_outputs_cache conv_stencil_all_inputs_to_all_outputs;
};



inline void conv_stencil_op_hcompute_conv_stencil_1_38_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_38, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_1_38, ((1*conv_s1_w)) - 0, ((3*conv_s1_y_y)) - 0, ((3*conv_s1_x_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_34_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2_34, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_2_34, ((1*conv_s1_w)) - 0, ((3*conv_s1_y_y)) - 0, ((1 + 3*conv_s1_x_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_3_30_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_3_30, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_3_30, ((1*conv_s1_w)) - 0, ((3*conv_s1_y_y)) - 0, ((2 + 3*conv_s1_x_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_42_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_42, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_42, ((1*conv_s0_w)) - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_26_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4_26, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_4_26, ((1*conv_s1_w)) - 0, ((1 + 3*conv_s1_y_y)) - 0, ((3*conv_s1_x_x_1)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_5_22_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_5_22, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_5_22, ((1*conv_s1_w)) - 0, ((1 + 3*conv_s1_y_y)) - 0, ((1 + 3*conv_s1_x_x_1)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_6_18_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_6_18, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_6_18, ((1*conv_s1_w)) - 0, ((1 + 3*conv_s1_y_y)) - 0, ((2 + 3*conv_s1_x_x_1)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_7_14_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_7_14, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_7_14, ((1*conv_s1_w)) - 0, ((2 + 3*conv_s1_y_y)) - 0, ((3*conv_s1_x_x_2)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_8_10_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_8_10, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_8_10, ((1*conv_s1_w)) - 0, ((2 + 3*conv_s1_y_y)) - 0, ((1 + 3*conv_s1_x_x_2)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_9_6_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_9_6, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_9_6, ((1*conv_s1_w)) - 0, ((2 + 3*conv_s1_y_y)) - 0, ((2 + 3*conv_s1_x_x_2)) - 0);
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_39_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_1_39 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[conv_s1_w, 3conv_s1_y_y, 3conv_s1_x_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_38 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_w)) - 0, ((3*conv_s1_y_y)) - 0, ((3*conv_s1_x_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_38;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_35_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_2_35 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[conv_s1_w, 3conv_s1_y_y, 1 + 3conv_s1_x_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_38 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_w)) - 0, ((3*conv_s1_y_y)) - 0, ((1 + 3*conv_s1_x_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_38;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_31_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_3_31 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> conv_stencil[conv_s1_w, 3conv_s1_y_y, 2 + 3conv_s1_x_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_38 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_w)) - 0, ((3*conv_s1_y_y)) - 0, ((2 + 3*conv_s1_x_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_38;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_27_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_4_27 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> conv_stencil[conv_s1_w, 1 + 3conv_s1_y_y, 3conv_s1_x_x_1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_38 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_w)) - 0, ((1 + 3*conv_s1_y_y)) - 0, ((3*conv_s1_x_x_1)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_38;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_23_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_5_23 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> conv_stencil[conv_s1_w, 1 + 3conv_s1_y_y, 1 + 3conv_s1_x_x_1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_38 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_w)) - 0, ((1 + 3*conv_s1_y_y)) - 0, ((1 + 3*conv_s1_x_x_1)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_38;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_19_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_6_19 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> conv_stencil[conv_s1_w, 1 + 3conv_s1_y_y, 2 + 3conv_s1_x_x_1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_38 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_w)) - 0, ((1 + 3*conv_s1_y_y)) - 0, ((2 + 3*conv_s1_x_x_1)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_38;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_15_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_7_15 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> conv_stencil[conv_s1_w, 2 + 3conv_s1_y_y, 3conv_s1_x_x_2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_38 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_w)) - 0, ((2 + 3*conv_s1_y_y)) - 0, ((3*conv_s1_x_x_2)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_38;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_11_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_8_11 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> conv_stencil[conv_s1_w, 2 + 3conv_s1_y_y, 1 + 3conv_s1_x_x_2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_38 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_w)) - 0, ((2 + 3*conv_s1_y_y)) - 0, ((1 + 3*conv_s1_x_x_2)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_38;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_7_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_9_7 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> conv_stencil[conv_s1_w, 2 + 3conv_s1_y_y, 2 + 3conv_s1_x_x_2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_38 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_w)) - 0, ((2 + 3*conv_s1_y_y)) - 0, ((2 + 3*conv_s1_x_x_2)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_38;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_1_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_1 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_38 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*hw_output_s0_w)) - 0, ((1*hw_output_s0_y_yi)) - 0, ((1*hw_output_s0_x_xi)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_38;
  return 0;
}

// # of bundles = 20
// op_hcompute_conv_stencil_1_read
//	conv_stencil_op_hcompute_conv_stencil_1_39
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_1_39

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_39_res = conv_stencil_op_hcompute_conv_stencil_1_39_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_1_39_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_38
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_38_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_38_write(conv_stencil_op_hcompute_conv_stencil_1_38_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_op_hcompute_conv_stencil_2_35
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_2_35

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_35_res = conv_stencil_op_hcompute_conv_stencil_2_35_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_2_35_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_op_hcompute_conv_stencil_2_34
inline void conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_2_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_34_res = op_hcompute_conv_stencil_2_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_34_write(conv_stencil_op_hcompute_conv_stencil_2_34_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_op_hcompute_conv_stencil_3_31
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_3_31

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_31_res = conv_stencil_op_hcompute_conv_stencil_3_31_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_3_31_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_op_hcompute_conv_stencil_3_30
inline void conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_3_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_30_res = op_hcompute_conv_stencil_3_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_3_30_write(conv_stencil_op_hcompute_conv_stencil_3_30_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_op_hcompute_conv_stencil_4_27
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_4_27

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_27_res = conv_stencil_op_hcompute_conv_stencil_4_27_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_4_27_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_op_hcompute_conv_stencil_4_26
inline void conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_4_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_26_res = op_hcompute_conv_stencil_4_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_26_write(conv_stencil_op_hcompute_conv_stencil_4_26_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_op_hcompute_conv_stencil_5_23
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_5_23

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_23_res = conv_stencil_op_hcompute_conv_stencil_5_23_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_5_23_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_op_hcompute_conv_stencil_5_22
inline void conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_5_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_22_res = op_hcompute_conv_stencil_5_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_5_22_write(conv_stencil_op_hcompute_conv_stencil_5_22_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_op_hcompute_conv_stencil_6_19
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_6_19

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_19_res = conv_stencil_op_hcompute_conv_stencil_6_19_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_6_19_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_op_hcompute_conv_stencil_6_18
inline void conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_6_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_18_res = op_hcompute_conv_stencil_6_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_6_18_write(conv_stencil_op_hcompute_conv_stencil_6_18_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_op_hcompute_conv_stencil_7_15
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_7_15

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_15_res = conv_stencil_op_hcompute_conv_stencil_7_15_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_7_15_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_op_hcompute_conv_stencil_7_14
inline void conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_7_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_14_res = op_hcompute_conv_stencil_7_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_7_14_write(conv_stencil_op_hcompute_conv_stencil_7_14_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_op_hcompute_conv_stencil_8_11
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_8_11

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_11_res = conv_stencil_op_hcompute_conv_stencil_8_11_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_8_11_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_op_hcompute_conv_stencil_8_10
inline void conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_8_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_10_res = op_hcompute_conv_stencil_8_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_8_10_write(conv_stencil_op_hcompute_conv_stencil_8_10_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_op_hcompute_conv_stencil_9_7
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_9_7

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_7_res = conv_stencil_op_hcompute_conv_stencil_9_7_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_9_7_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_op_hcompute_conv_stencil_9_6
inline void conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_9_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_6_res = op_hcompute_conv_stencil_9_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_9_6_write(conv_stencil_op_hcompute_conv_stencil_9_6_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_42
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_42_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_42_write(conv_stencil_op_hcompute_conv_stencil_42_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_1
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_1

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_1_res = conv_stencil_op_hcompute_hw_output_stencil_1_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_1_res);
	return result;
}

struct hw_input_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 16], [0, 16], [0, 1]}
  hw_uint<16> RAM[17][17][2];
  inline hw_uint<16> read(int d0, int d1, int d2) {
    return RAM[d0][d1][d2];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2) {
    RAM[d0][d1][d2] = value;
  }

};

struct hw_input_stencil_cache {
  // Reader addrs...
    // { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_y + 3conv_s1_y_y, conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    // { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_y + 3conv_s1_y_y, 1 + conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    // { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_y + 3conv_s1_y_y, 2 + conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    // { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_input_stencil[1 + conv_s1_r_y + 3conv_s1_y_y, conv_s1_r_x + 3conv_s1_x_x_1, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
    // { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_input_stencil[1 + conv_s1_r_y + 3conv_s1_y_y, 1 + conv_s1_r_x + 3conv_s1_x_x_1, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
    // { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_input_stencil[1 + conv_s1_r_y + 3conv_s1_y_y, 2 + conv_s1_r_x + 3conv_s1_x_x_1, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
    // { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_input_stencil[2 + conv_s1_r_y + 3conv_s1_y_y, conv_s1_r_x + 3conv_s1_x_x_2, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
    // { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_input_stencil[2 + conv_s1_r_y + 3conv_s1_y_y, 1 + conv_s1_r_x + 3conv_s1_x_x_2, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
    // { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_input_stencil[2 + conv_s1_r_y + 3conv_s1_y_y, 2 + conv_s1_r_x + 3conv_s1_x_x_2, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  // # of banks: 1
  hw_input_stencil_all_inputs_to_all_outputs_cache hw_input_stencil_all_inputs_to_all_outputs;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_4_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_4, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.write(hw_input_stencil_op_hcompute_hw_input_stencil_4, ((1*hw_input_s0_y)) - 0, ((1*hw_input_s0_x)) - 0, ((1*hw_input_s0_z)) - 0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_40_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_40 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_y + 3conv_s1_y_y, conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 3*conv_s1_y_y)) - 0, ((1*conv_s1_r_x + 3*conv_s1_x_x)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_36_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_36 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_y + 3conv_s1_y_y, 1 + conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 3*conv_s1_y_y)) - 0, ((1 + 1*conv_s1_r_x + 3*conv_s1_x_x)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_32_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_32 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_input_stencil[conv_s1_r_y + 3conv_s1_y_y, 2 + conv_s1_r_x + 3conv_s1_x_x, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 3*conv_s1_y_y)) - 0, ((2 + 1*conv_s1_r_x + 3*conv_s1_x_x)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_28_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_28 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_input_stencil[1 + conv_s1_r_y + 3conv_s1_y_y, conv_s1_r_x + 3conv_s1_x_x_1, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(((1 + 1*conv_s1_r_y + 3*conv_s1_y_y)) - 0, ((1*conv_s1_r_x + 3*conv_s1_x_x_1)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_24_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_24 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_input_stencil[1 + conv_s1_r_y + 3conv_s1_y_y, 1 + conv_s1_r_x + 3conv_s1_x_x_1, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(((1 + 1*conv_s1_r_y + 3*conv_s1_y_y)) - 0, ((1 + 1*conv_s1_r_x + 3*conv_s1_x_x_1)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_20_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_20 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_input_stencil[1 + conv_s1_r_y + 3conv_s1_y_y, 2 + conv_s1_r_x + 3conv_s1_x_x_1, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(((1 + 1*conv_s1_r_y + 3*conv_s1_y_y)) - 0, ((2 + 1*conv_s1_r_x + 3*conv_s1_x_x_1)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_16_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_16 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_input_stencil[2 + conv_s1_r_y + 3conv_s1_y_y, conv_s1_r_x + 3conv_s1_x_x_2, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(((2 + 1*conv_s1_r_y + 3*conv_s1_y_y)) - 0, ((1*conv_s1_r_x + 3*conv_s1_x_x_2)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_12_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_12 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_input_stencil[2 + conv_s1_r_y + 3conv_s1_y_y, 1 + conv_s1_r_x + 3conv_s1_x_x_2, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(((2 + 1*conv_s1_r_y + 3*conv_s1_y_y)) - 0, ((1 + 1*conv_s1_r_x + 3*conv_s1_x_x_2)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_8 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_input_stencil[2 + conv_s1_r_y + 3conv_s1_y_y, 2 + conv_s1_r_x + 3conv_s1_x_x_2, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(((2 + 1*conv_s1_r_y + 3*conv_s1_y_y)) - 0, ((2 + 1*conv_s1_r_x + 3*conv_s1_x_x_2)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

// # of bundles = 10
// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_40
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_1_40

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_40_res = hw_input_stencil_op_hcompute_conv_stencil_1_40_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_1_40_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_input_stencil_op_hcompute_conv_stencil_2_36
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_2_36

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_36_res = hw_input_stencil_op_hcompute_conv_stencil_2_36_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_2_36_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_input_stencil_op_hcompute_conv_stencil_3_32
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_3_32

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_32_res = hw_input_stencil_op_hcompute_conv_stencil_3_32_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_3_32_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_stencil_op_hcompute_conv_stencil_4_28
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_4_28

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_28_res = hw_input_stencil_op_hcompute_conv_stencil_4_28_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_4_28_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_stencil_op_hcompute_conv_stencil_5_24
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_5_24

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_24_res = hw_input_stencil_op_hcompute_conv_stencil_5_24_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_5_24_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_input_stencil_op_hcompute_conv_stencil_6_20
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_6_20

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_20_res = hw_input_stencil_op_hcompute_conv_stencil_6_20_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_6_20_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_input_stencil_op_hcompute_conv_stencil_7_16
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_7_16

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_16_res = hw_input_stencil_op_hcompute_conv_stencil_7_16_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_7_16_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_stencil_op_hcompute_conv_stencil_8_12
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_8_12

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_12_res = hw_input_stencil_op_hcompute_conv_stencil_8_12_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_8_12_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_stencil_op_hcompute_conv_stencil_9_8
inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_conv_stencil_9_8

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_8_res = hw_input_stencil_op_hcompute_conv_stencil_9_8_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_conv_stencil_9_8_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_4
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_4_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_4_write(hw_input_stencil_op_hcompute_hw_input_stencil_4_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, dynamic_address);
}

struct hw_kernel_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 3], [0, 1]}
  hw_uint<16> RAM[3][3][4][2];
  inline hw_uint<16> read(int d0, int d1, int d2, int d3) {
    return RAM[d0][d1][d2][d3];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2, int d3) {
    RAM[d0][d1][d2][d3] = value;
  }

};

struct hw_kernel_stencil_cache {
  // Reader addrs...
    // { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    // { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    // { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
    // { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
    // { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
    // { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
    // { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
    // { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
    // { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  // # of banks: 1
  hw_kernel_stencil_all_inputs_to_all_outputs_cache hw_kernel_stencil_all_inputs_to_all_outputs;
};



inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_write(hw_uint<16>& hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
  hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, ((1*hw_kernel_s0_y)) - 0, ((1*hw_kernel_s0_x)) - 0, ((1*hw_kernel_s0_w)) - 0, ((1*hw_kernel_s0_z)) - 0);
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_41_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_41 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1*conv_s1_w)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_37_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_37 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1*conv_s1_w)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_33_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_33 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1*conv_s1_w)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_29_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_29 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1*conv_s1_w)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_25_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_25 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1*conv_s1_w)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_21_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_21 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1*conv_s1_w)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_17_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_17 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1*conv_s1_w)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_13_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_13 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1*conv_s1_w)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_9_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_9 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, conv_s1_w, conv_s1_r_z] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1*conv_s1_w)) - 0, ((1*conv_s1_r_z)) - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

// # of bundles = 10
// op_hcompute_conv_stencil_1_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_41
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_41

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_41_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_41_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_41_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_37
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_37

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_37_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_37_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_37_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_33
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_33

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_33_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_33_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_33_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_29
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_29

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_29_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_29_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_29_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_25
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_25

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_25_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_25_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_25_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_21
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_21

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_21_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_21_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_21_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_17
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_17

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_17_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_17_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_17_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_13
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_13

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_13_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_13_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_13_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_9
inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_9

	hw_uint<16> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_9_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_9_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, dynamic_address);
	set_at<0, 16>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_9_res);
	return result;
}

// op_hcompute_hw_kernel_stencil_write
//	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2
inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_stencil_write, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res = op_hcompute_hw_kernel_stencil_write.extract<0, 15>();
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, dynamic_address);
}

// Total re-use buffer capacity: 24800 bits


// Operation logic
inline void op_hcompute_conv_stencil_9(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__2_rp__value = conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_9(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__2_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_w_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_hw_output_s0_w_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_4(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp_conv_s1_x_x_1_m_3_rp__value = conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_4(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp_conv_s1_x_x_1_m_3_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_5(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__1_rp__value = conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_5(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__1_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_6(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_1) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__2_rp__value = conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_6(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__1_rp__c___lp__lp_conv_s1_x_x_1_m_3_rp___p__2_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__1_rp__c___lp__lp__lp_conv_s1_x_x_1_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_7(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp_conv_s1_x_x_2_m_3_rp__value = conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_7(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp_conv_s1_x_x_2_m_3_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_8(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x_2) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__1_rp__value = conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_8(conv_stencil_conv_s1_w_c___lp__lp_conv_s1_y_y_m_3_rp___p__2_rp__c___lp__lp_conv_s1_x_x_2_m_3_rp___p__1_rp__value, hw_input_stencil__lp__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp___p__2_rp__c___lp__lp__lp_conv_s1_x_x_2_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil(conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_1(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp_conv_s1_x_x_m_3_rp__value = conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_1(conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp_conv_s1_x_x_m_3_rp__value, hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_2(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__1_rp__value = conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_2(conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__1_rp__value, hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__1_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_3(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_r_z, int conv_s1_w, int conv_s1_y_y, int conv_s1_x_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__2_rp__value = conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value = hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value = hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_3(conv_stencil_conv_s1_w_c___lp_conv_s1_y_y_m_3_rp__c___lp__lp_conv_s1_x_x_m_3_rp___p__2_rp__value, hw_input_stencil__lp_conv_s1_r_y__p___lp_conv_s1_y_y_m_3_rp__rp__c___lp__lp__lp_conv_s1_x_x_m_3_rp___p__conv_s1_r_x_rp___p__2_rp__c__conv_s1_r_z_value, hw_kernel_stencil_conv_s1_r_y_c__conv_s1_r_x_c__conv_s1_w_c__conv_s1_r_z_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_copy_stencil, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z) {
  // Dynamic address computation

	// Consume: input_copy_stencil
	auto input_copy_stencil_hw_input_s0_y_c__hw_input_s0_x_c__hw_input_s0_z_value = input_copy_stencil.read();
	auto compute_result = hcompute_hw_input_stencil(input_copy_stencil_hw_input_s0_y_c__hw_input_s0_x_c__hw_input_s0_z_value);
	// Produce: hw_input_stencil
	hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(/* arg names */compute_result, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_kernel_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */kernel_copy_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z) {
  // Dynamic address computation

	// Consume: kernel_copy_stencil
	auto kernel_copy_stencil_hw_kernel_s0_y_c__hw_kernel_s0_x_c__hw_kernel_s0_w_c__hw_kernel_s0_z_value = kernel_copy_stencil.read();
	auto compute_result = hcompute_hw_kernel_stencil(kernel_copy_stencil_hw_kernel_s0_y_c__hw_kernel_s0_x_c__hw_kernel_s0_w_c__hw_kernel_s0_z_value);
	// Produce: hw_kernel_stencil
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(/* arg names */compute_result, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_unet_conv_3_3(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */kernel_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_unet_conv_3_3_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  conv_stencil_cache conv_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_stencil_cache hw_input_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_kernel_stencil_cache hw_kernel_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 2, conv_s0_y, 0, conv_s0_x, 0, conv_s0_w, 0, 0, 0, 0, 0, 0, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3; op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4; op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4; op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4; op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4; op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13; op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4; op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4; op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4; op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0, 0, 0, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
//   { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 2, conv_s0_y, 0, conv_s0_x, 0, conv_s0_w, 0, 0, 0, 0, 0, 0, 0] : 0 <= conv_s0_y <= 13 and 0 <= conv_s0_x <= 13 and 0 <= conv_s0_w <= 3 }
// Condition for op_hcompute_conv_stencil(((((1*i14)) == 0) && (((1*i13)) == 0) && (((1*i12)) == 0) && (((1*i11)) == 0) && (((1*i10)) == 0) && (((1*i9)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((13 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((13 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((3 + -1*i7)) >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
// Condition for op_hcompute_conv_stencil_4(((((1*i14)) == 0) && (((-1 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((2 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((1 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((3 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((4 + -1*i11)) >= 0) && (((1*i13)) >= 0) && (((4 + -1*i13)) >= 0)))
//   { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
// Condition for op_hcompute_conv_stencil_5(((((-1 + 1*i14)) == 0) && (((-1 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((2 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((1 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((3 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((4 + -1*i11)) >= 0) && (((1*i13)) >= 0) && (((4 + -1*i13)) >= 0)))
//   { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
// Condition for op_hcompute_conv_stencil_9(((((-2 + 1*i14)) == 0) && (((-2 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((2 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((1 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((3 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((4 + -1*i11)) >= 0) && (((1*i13)) >= 0) && (((4 + -1*i13)) >= 0)))
//   { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
// Condition for op_hcompute_conv_stencil_8(((((-1 + 1*i14)) == 0) && (((-2 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((2 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((1 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((3 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((4 + -1*i11)) >= 0) && (((1*i13)) >= 0) && (((4 + -1*i13)) >= 0)))
//   { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_1(((((1*i14)) == 0) && (((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((2 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((1 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((3 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((4 + -1*i11)) >= 0) && (((1*i13)) >= 0) && (((4 + -1*i13)) >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_3(((((-2 + 1*i14)) == 0) && (((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((2 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((1 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((3 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((4 + -1*i11)) >= 0) && (((1*i13)) >= 0) && (((4 + -1*i13)) >= 0)))
//   { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
// Condition for op_hcompute_hw_input_stencil(((((1*i14)) == 0) && (((1*i13)) == 0) && (((1*i12)) == 0) && (((1*i11)) == 0) && (((1*i10)) == 0) && (((1*i9)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((15 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((15 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((1 + -1*i7)) >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
// Condition for op_hcompute_hw_output_stencil(((((1*i14)) == 0) && (((1*i13)) == 0) && (((1*i12)) == 0) && (((1*i11)) == 0) && (((1*i10)) == 0) && (((1*i9)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-4 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((3 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((13 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((13 + -1*i7)) >= 0)))
//   { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_1] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 1, conv_s1_x_x_1, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_1 <= 4 }
// Condition for op_hcompute_conv_stencil_6(((((-2 + 1*i14)) == 0) && (((-1 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((2 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((1 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((3 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((4 + -1*i11)) >= 0) && (((1*i13)) >= 0) && (((4 + -1*i13)) >= 0)))
//   { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x_2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 2, conv_s1_x_x_2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x_2 <= 4 }
// Condition for op_hcompute_conv_stencil_7(((((1*i14)) == 0) && (((-2 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((2 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((1 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((3 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((4 + -1*i11)) >= 0) && (((1*i13)) >= 0) && (((4 + -1*i13)) >= 0)))
//   { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_r_z, conv_s1_w, conv_s1_y_y, conv_s1_x_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_r_z, 0, conv_s1_w, 0, conv_s1_y_y, 0, conv_s1_x_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_r_z <= 1 and 0 <= conv_s1_w <= 3 and 0 <= conv_s1_y_y <= 4 and 0 <= conv_s1_x_x <= 4 }
// Condition for op_hcompute_conv_stencil_2(((((-1 + 1*i14)) == 0) && (((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((2 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((1 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((3 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((4 + -1*i11)) >= 0) && (((1*i13)) >= 0) && (((4 + -1*i13)) >= 0)))
//   { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0, 0, 0, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
// Condition for op_hcompute_hw_kernel_stencil(((((1*i14)) == 0) && (((1*i13)) == 0) && (((1*i12)) == 0) && (((1*i11)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((-1 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((2 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((3 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((1 + -1*i9)) >= 0)))

	{
	  for (int c3 = 0; c3 <= 15; c3 += 1)
	    for (int c5 = 0; c5 <= 15; c5 += 1)
	      for (int c7 = 0; c7 <= 1; c7 += 1)
	        op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c3, c5, c7);
	  for (int c3 = 0; c3 <= 2; c3 += 1)
	    for (int c5 = 0; c5 <= 2; c5 += 1)
	      for (int c7 = 0; c7 <= 3; c7 += 1)
	        for (int c9 = 0; c9 <= 1; c9 += 1)
	          op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, c3, c5, c7, c9);
	  for (int c3 = 0; c3 <= 13; c3 += 1)
	    for (int c5 = 0; c5 <= 13; c5 += 1)
	      for (int c7 = 0; c7 <= 3; c7 += 1)
	        op_hcompute_conv_stencil(conv_stencil, 0, c3, c5, c7);
	  for (int c3 = 0; c3 <= 2; c3 += 1)
	    for (int c5 = 0; c5 <= 2; c5 += 1)
	      for (int c7 = 0; c7 <= 1; c7 += 1)
	        for (int c9 = 0; c9 <= 3; c9 += 1)
	          for (int c11 = 0; c11 <= 4; c11 += 1) {
	            for (int c13 = 0; c13 <= 4; c13 += 1) {
	              op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	            }
	            for (int c13 = 0; c13 <= 4; c13 += 1) {
	              op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	            }
	            for (int c13 = 0; c13 <= 4; c13 += 1) {
	              op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	              op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	            }
	          }
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c5 = 0; c5 <= 13; c5 += 1)
	      for (int c7 = 0; c7 <= 13; c7 += 1)
	        op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, c3, c5, c7);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_unet_conv_3_3_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */kernel_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_unet_conv_3_3(input_copy_stencil, kernel_copy_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_w <= 3 and 0 <= hw_output_s0_y_yi <= 13 and 0 <= hw_output_s0_x_xi <= 13 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> input_copy_stencil[hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] : 0 <= hw_input_s0_y <= 15 and 0 <= hw_input_s0_x <= 15 and 0 <= hw_input_s0_z <= 1 }
const int op_hcompute_hw_input_stencil_read_pipe0_num_transfers = 512;
  // { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> kernel_copy_stencil[hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 3 and 0 <= hw_kernel_s0_z <= 1 }
const int op_hcompute_hw_kernel_stencil_read_pipe0_num_transfers = 72;


extern "C" {

void unoptimized_unet_conv_3_3_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_kernel_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_kernel_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_kernel_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_kernel_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_input_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_kernel_stencil_read_pipe0, op_hcompute_hw_kernel_stencil_read_pipe0_channel, op_hcompute_hw_kernel_stencil_read_pipe0_num_transfers*size);

  unoptimized_unet_conv_3_3_wrapper(op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_kernel_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_unet_conv_3_3_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_kernel_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_kernel_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_unet_conv_3_3(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_kernel_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

