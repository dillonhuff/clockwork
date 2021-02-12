#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: resnet88_compute.h
#include "resnet88_compute.h"

struct conv_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 7], [0, 27], [0, 27]}
  hw_uint<16> RAM[8][28][28];
  inline hw_uint<16> read(int d0, int d1, int d2) {
    return RAM[d0][d1][d2];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2) {
    RAM[d0][d1][d2] = value;
  }

};

struct conv_stencil_cache {
  // Reader addrs...
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[2, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[3, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[4, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[5, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[6, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[7, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[0, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[1, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_y_yi = 0, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[0, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
    // { op_hcompute_hw_output_stencil_1[root = 0, pad_root_to_hw_output_s0_y_yi_1 = 0, pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1 = 0, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] -> conv_stencil[1, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] : 0 <= hw_output_s0_y_yi_1 <= 27 and 0 <= hw_output_s0_x_xi_1 <= 27 }
    // { op_hcompute_hw_output_stencil_2[root = 0, pad_root_to_hw_output_s0_y_yi_2 = 0, pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2 = 0, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] -> conv_stencil[2, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] : 0 <= hw_output_s0_y_yi_2 <= 27 and 0 <= hw_output_s0_x_xi_2 <= 27 }
    // { op_hcompute_hw_output_stencil_3[root = 0, pad_root_to_hw_output_s0_y_yi_3 = 0, pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3 = 0, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3] -> conv_stencil[3, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3] : 0 <= hw_output_s0_y_yi_3 <= 27 and 0 <= hw_output_s0_x_xi_3 <= 27 }
    // { op_hcompute_hw_output_stencil_4[root = 0, pad_root_to_hw_output_s0_y_yi_4 = 0, pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4 = 0, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4] -> conv_stencil[4, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4] : 0 <= hw_output_s0_y_yi_4 <= 27 and 0 <= hw_output_s0_x_xi_4 <= 27 }
    // { op_hcompute_hw_output_stencil_5[root = 0, pad_root_to_hw_output_s0_y_yi_5 = 0, pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5 = 0, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5] -> conv_stencil[5, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5] : 0 <= hw_output_s0_y_yi_5 <= 27 and 0 <= hw_output_s0_x_xi_5 <= 27 }
    // { op_hcompute_hw_output_stencil_6[root = 0, pad_root_to_hw_output_s0_y_yi_6 = 0, pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6 = 0, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6] -> conv_stencil[6, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6] : 0 <= hw_output_s0_y_yi_6 <= 27 and 0 <= hw_output_s0_x_xi_6 <= 27 }
    // { op_hcompute_hw_output_stencil_7[root = 0, pad_root_to_hw_output_s0_y_yi_7 = 0, pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7 = 0, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7] -> conv_stencil[7, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7] : 0 <= hw_output_s0_y_yi_7 <= 27 and 0 <= hw_output_s0_x_xi_7 <= 27 }
  // # of banks: 1
  conv_stencil_all_inputs_to_all_outputs_cache conv_stencil_all_inputs_to_all_outputs;
};



inline void conv_stencil_op_hcompute_conv_stencil_10_166_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_10_166, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_10_166, ((2)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_11_148_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_11_148, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_11_148, ((3)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_12_130_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_12_130, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_12_130, ((4)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_13_112_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_13_112, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_13_112, ((5)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_14_94_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_14_94, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_14_94, ((6)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_15_76_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_15_76, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_15_76, ((7)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_185_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_185, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_185, 0 - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_1_184_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_184, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_1_184, ((1)) - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_75_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2_75, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_2_75, ((2)) - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_3_74_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_3_74, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_3_74, ((3)) - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_73_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4_73, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_4_73, ((4)) - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_5_72_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_5_72, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_5_72, ((5)) - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_6_71_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_6_71, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_6_71, ((6)) - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_7_70_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_7_70, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_7_70, ((7)) - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_8_52_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_8_52, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_8_52, 0 - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_9_34_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_9_34, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_9_34, ((1)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_167_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_10_167 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[2, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((2)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_149_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_11_149 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[3, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((3)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_131_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_12_131 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[4, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((4)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_113_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_13_113 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[5, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((5)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_95_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_14_95 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[6, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((6)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_77_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_15_77 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[7, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((7)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_53_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_8_53 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[0, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(0 - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_35_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_9_35 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[1, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_15_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi, int pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int pad_pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_15 read pattern: { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_y_yi = 0, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[0, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(0 - 0, ((1*hw_output_s0_y_yi)) - 0, ((1*hw_output_s0_x_xi)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_1_13_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_1, int pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1, int pad_pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1, int hw_output_s0_y_yi_1, int hw_output_s0_x_xi_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_1_13 read pattern: { op_hcompute_hw_output_stencil_1[root = 0, pad_root_to_hw_output_s0_y_yi_1 = 0, pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1 = 0, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] -> conv_stencil[1, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] : 0 <= hw_output_s0_y_yi_1 <= 27 and 0 <= hw_output_s0_x_xi_1 <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1)) - 0, ((1*hw_output_s0_y_yi_1)) - 0, ((1*hw_output_s0_x_xi_1)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_2_11_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_2, int pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2, int pad_pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2, int hw_output_s0_y_yi_2, int hw_output_s0_x_xi_2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_2_11 read pattern: { op_hcompute_hw_output_stencil_2[root = 0, pad_root_to_hw_output_s0_y_yi_2 = 0, pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2 = 0, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] -> conv_stencil[2, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] : 0 <= hw_output_s0_y_yi_2 <= 27 and 0 <= hw_output_s0_x_xi_2 <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((2)) - 0, ((1*hw_output_s0_y_yi_2)) - 0, ((1*hw_output_s0_x_xi_2)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_3_9_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_3, int pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3, int pad_pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3, int hw_output_s0_y_yi_3, int hw_output_s0_x_xi_3, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_3_9 read pattern: { op_hcompute_hw_output_stencil_3[root = 0, pad_root_to_hw_output_s0_y_yi_3 = 0, pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3 = 0, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3] -> conv_stencil[3, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3] : 0 <= hw_output_s0_y_yi_3 <= 27 and 0 <= hw_output_s0_x_xi_3 <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((3)) - 0, ((1*hw_output_s0_y_yi_3)) - 0, ((1*hw_output_s0_x_xi_3)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_4_7_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_4, int pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4, int pad_pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4, int hw_output_s0_y_yi_4, int hw_output_s0_x_xi_4, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_4_7 read pattern: { op_hcompute_hw_output_stencil_4[root = 0, pad_root_to_hw_output_s0_y_yi_4 = 0, pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4 = 0, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4] -> conv_stencil[4, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4] : 0 <= hw_output_s0_y_yi_4 <= 27 and 0 <= hw_output_s0_x_xi_4 <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((4)) - 0, ((1*hw_output_s0_y_yi_4)) - 0, ((1*hw_output_s0_x_xi_4)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_5_5_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_5, int pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5, int pad_pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5, int hw_output_s0_y_yi_5, int hw_output_s0_x_xi_5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_5_5 read pattern: { op_hcompute_hw_output_stencil_5[root = 0, pad_root_to_hw_output_s0_y_yi_5 = 0, pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5 = 0, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5] -> conv_stencil[5, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5] : 0 <= hw_output_s0_y_yi_5 <= 27 and 0 <= hw_output_s0_x_xi_5 <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((5)) - 0, ((1*hw_output_s0_y_yi_5)) - 0, ((1*hw_output_s0_x_xi_5)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_6_3_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_6, int pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6, int pad_pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6, int hw_output_s0_y_yi_6, int hw_output_s0_x_xi_6, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_6_3 read pattern: { op_hcompute_hw_output_stencil_6[root = 0, pad_root_to_hw_output_s0_y_yi_6 = 0, pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6 = 0, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6] -> conv_stencil[6, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6] : 0 <= hw_output_s0_y_yi_6 <= 27 and 0 <= hw_output_s0_x_xi_6 <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((6)) - 0, ((1*hw_output_s0_y_yi_6)) - 0, ((1*hw_output_s0_x_xi_6)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_7_1_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_7, int pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7, int pad_pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7, int hw_output_s0_y_yi_7, int hw_output_s0_x_xi_7, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_7_1 read pattern: { op_hcompute_hw_output_stencil_7[root = 0, pad_root_to_hw_output_s0_y_yi_7 = 0, pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7 = 0, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7] -> conv_stencil[7, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7] : 0 <= hw_output_s0_y_yi_7 <= 27 and 0 <= hw_output_s0_x_xi_7 <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_166 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((7)) - 0, ((1*hw_output_s0_y_yi_7)) - 0, ((1*hw_output_s0_x_xi_7)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_166;
  return 0;
}

// # of bundles = 32
// op_hcompute_conv_stencil_10_read
//	conv_stencil_op_hcompute_conv_stencil_10_167
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_10_167

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_167_res = conv_stencil_op_hcompute_conv_stencil_10_167_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_10_167_res);
	return result;
}

// op_hcompute_conv_stencil_10_write
//	conv_stencil_op_hcompute_conv_stencil_10_166
inline void conv_stencil_op_hcompute_conv_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_10_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_166_res = op_hcompute_conv_stencil_10_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_10_166_write(conv_stencil_op_hcompute_conv_stencil_10_166_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_11_read
//	conv_stencil_op_hcompute_conv_stencil_11_149
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_11_149

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_149_res = conv_stencil_op_hcompute_conv_stencil_11_149_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_11_149_res);
	return result;
}

// op_hcompute_conv_stencil_11_write
//	conv_stencil_op_hcompute_conv_stencil_11_148
inline void conv_stencil_op_hcompute_conv_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_11_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_148_res = op_hcompute_conv_stencil_11_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_11_148_write(conv_stencil_op_hcompute_conv_stencil_11_148_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_12_read
//	conv_stencil_op_hcompute_conv_stencil_12_131
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_12_131

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_131_res = conv_stencil_op_hcompute_conv_stencil_12_131_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_12_131_res);
	return result;
}

// op_hcompute_conv_stencil_12_write
//	conv_stencil_op_hcompute_conv_stencil_12_130
inline void conv_stencil_op_hcompute_conv_stencil_12_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_12_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_130_res = op_hcompute_conv_stencil_12_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_12_130_write(conv_stencil_op_hcompute_conv_stencil_12_130_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_13_read
//	conv_stencil_op_hcompute_conv_stencil_13_113
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_13_113

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_113_res = conv_stencil_op_hcompute_conv_stencil_13_113_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_13_113_res);
	return result;
}

// op_hcompute_conv_stencil_13_write
//	conv_stencil_op_hcompute_conv_stencil_13_112
inline void conv_stencil_op_hcompute_conv_stencil_13_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_13_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_112_res = op_hcompute_conv_stencil_13_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_13_112_write(conv_stencil_op_hcompute_conv_stencil_13_112_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_14_read
//	conv_stencil_op_hcompute_conv_stencil_14_95
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_14_95

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_95_res = conv_stencil_op_hcompute_conv_stencil_14_95_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_14_95_res);
	return result;
}

// op_hcompute_conv_stencil_14_write
//	conv_stencil_op_hcompute_conv_stencil_14_94
inline void conv_stencil_op_hcompute_conv_stencil_14_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_14_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_94_res = op_hcompute_conv_stencil_14_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_14_94_write(conv_stencil_op_hcompute_conv_stencil_14_94_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_15_read
//	conv_stencil_op_hcompute_conv_stencil_15_77
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_15_77

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_77_res = conv_stencil_op_hcompute_conv_stencil_15_77_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_15_77_res);
	return result;
}

// op_hcompute_conv_stencil_15_write
//	conv_stencil_op_hcompute_conv_stencil_15_76
inline void conv_stencil_op_hcompute_conv_stencil_15_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_15_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_76_res = op_hcompute_conv_stencil_15_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_15_76_write(conv_stencil_op_hcompute_conv_stencil_15_76_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_184
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_184_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_184_write(conv_stencil_op_hcompute_conv_stencil_1_184_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_op_hcompute_conv_stencil_2_75
inline void conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_2_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_75_res = op_hcompute_conv_stencil_2_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_75_write(conv_stencil_op_hcompute_conv_stencil_2_75_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_op_hcompute_conv_stencil_3_74
inline void conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_3_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_74_res = op_hcompute_conv_stencil_3_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_3_74_write(conv_stencil_op_hcompute_conv_stencil_3_74_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_op_hcompute_conv_stencil_4_73
inline void conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_4_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_73_res = op_hcompute_conv_stencil_4_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_73_write(conv_stencil_op_hcompute_conv_stencil_4_73_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_op_hcompute_conv_stencil_5_72
inline void conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_5_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_72_res = op_hcompute_conv_stencil_5_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_5_72_write(conv_stencil_op_hcompute_conv_stencil_5_72_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_op_hcompute_conv_stencil_6_71
inline void conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_6_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_71_res = op_hcompute_conv_stencil_6_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_6_71_write(conv_stencil_op_hcompute_conv_stencil_6_71_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_op_hcompute_conv_stencil_7_70
inline void conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_7_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_70_res = op_hcompute_conv_stencil_7_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_7_70_write(conv_stencil_op_hcompute_conv_stencil_7_70_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_op_hcompute_conv_stencil_8_53
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_8_53

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_53_res = conv_stencil_op_hcompute_conv_stencil_8_53_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_8_53_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_op_hcompute_conv_stencil_8_52
inline void conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_8_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_52_res = op_hcompute_conv_stencil_8_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_8_52_write(conv_stencil_op_hcompute_conv_stencil_8_52_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_op_hcompute_conv_stencil_9_35
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_9_35

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_35_res = conv_stencil_op_hcompute_conv_stencil_9_35_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_9_35_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_op_hcompute_conv_stencil_9_34
inline void conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_9_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_34_res = op_hcompute_conv_stencil_9_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_9_34_write(conv_stencil_op_hcompute_conv_stencil_9_34_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_185
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_185_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_185_write(conv_stencil_op_hcompute_conv_stencil_185_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_1_read
//	conv_stencil_op_hcompute_hw_output_stencil_1_13
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_1, int pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1, int pad_pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1, int hw_output_s0_y_yi_1, int hw_output_s0_x_xi_1, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_1_13

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_1_13_res = conv_stencil_op_hcompute_hw_output_stencil_1_13_select(conv_stencil, root, pad_root_to_hw_output_s0_y_yi_1, pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1, pad_pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_1_13_res);
	return result;
}

// op_hcompute_hw_output_stencil_2_read
//	conv_stencil_op_hcompute_hw_output_stencil_2_11
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_2, int pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2, int pad_pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2, int hw_output_s0_y_yi_2, int hw_output_s0_x_xi_2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_2_11

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_2_11_res = conv_stencil_op_hcompute_hw_output_stencil_2_11_select(conv_stencil, root, pad_root_to_hw_output_s0_y_yi_2, pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2, pad_pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_2_11_res);
	return result;
}

// op_hcompute_hw_output_stencil_3_read
//	conv_stencil_op_hcompute_hw_output_stencil_3_9
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_3, int pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3, int pad_pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3, int hw_output_s0_y_yi_3, int hw_output_s0_x_xi_3, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_3_9

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_3_9_res = conv_stencil_op_hcompute_hw_output_stencil_3_9_select(conv_stencil, root, pad_root_to_hw_output_s0_y_yi_3, pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3, pad_pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_3_9_res);
	return result;
}

// op_hcompute_hw_output_stencil_4_read
//	conv_stencil_op_hcompute_hw_output_stencil_4_7
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_4_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_4, int pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4, int pad_pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4, int hw_output_s0_y_yi_4, int hw_output_s0_x_xi_4, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_4_7

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_4_7_res = conv_stencil_op_hcompute_hw_output_stencil_4_7_select(conv_stencil, root, pad_root_to_hw_output_s0_y_yi_4, pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4, pad_pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_4_7_res);
	return result;
}

// op_hcompute_hw_output_stencil_5_read
//	conv_stencil_op_hcompute_hw_output_stencil_5_5
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_5_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_5, int pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5, int pad_pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5, int hw_output_s0_y_yi_5, int hw_output_s0_x_xi_5, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_5_5

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_5_5_res = conv_stencil_op_hcompute_hw_output_stencil_5_5_select(conv_stencil, root, pad_root_to_hw_output_s0_y_yi_5, pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5, pad_pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_5_5_res);
	return result;
}

// op_hcompute_hw_output_stencil_6_read
//	conv_stencil_op_hcompute_hw_output_stencil_6_3
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_6_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_6, int pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6, int pad_pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6, int hw_output_s0_y_yi_6, int hw_output_s0_x_xi_6, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_6_3

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_6_3_res = conv_stencil_op_hcompute_hw_output_stencil_6_3_select(conv_stencil, root, pad_root_to_hw_output_s0_y_yi_6, pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6, pad_pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_6_3_res);
	return result;
}

// op_hcompute_hw_output_stencil_7_read
//	conv_stencil_op_hcompute_hw_output_stencil_7_1
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_7_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi_7, int pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7, int pad_pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7, int hw_output_s0_y_yi_7, int hw_output_s0_x_xi_7, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_7_1

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_7_1_res = conv_stencil_op_hcompute_hw_output_stencil_7_1_select(conv_stencil, root, pad_root_to_hw_output_s0_y_yi_7, pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7, pad_pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_7_1_res);
	return result;
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_15
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_y_yi, int pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int pad_pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_15

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_15_res = conv_stencil_op_hcompute_hw_output_stencil_15_select(conv_stencil, root, pad_root_to_hw_output_s0_y_yi, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, pad_pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_15_res);
	return result;
}

struct hw_input_global_wrapper_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 29], [0, 29], [0, 7]}
  hw_uint<16> RAM[30][30][8];
  inline hw_uint<16> read(int d0, int d1, int d2) {
    return RAM[d0][d1][d2];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2) {
    RAM[d0][d1][d2] = value;
  }

};

struct hw_input_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  // # of banks: 1
  hw_input_global_wrapper_stencil_all_inputs_to_all_outputs_cache hw_input_global_wrapper_stencil_all_inputs_to_all_outputs;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0, ((1)) - 0);
}

inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0, ((2)) - 0);
}

inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0, 0 - 0);
}

inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0, ((3)) - 0);
}

inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0, ((4)) - 0);
}

inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0, ((5)) - 0);
}

inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0, ((6)) - 0);
}

inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0, ((7)) - 0);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30;
  return 0;
}

// # of bundles = 16
// op_hcompute_conv_stencil_10_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_168_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_169_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_170_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_171_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_172_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_173_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_174_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_175_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_150_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_151_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_152_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_153_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_154_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_155_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_156_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_157_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_132_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_133_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_134_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_135_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_136_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_137_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_138_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_139_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_114_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_115_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_116_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_117_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_118_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_119_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_120_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_121_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_96_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_97_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_98_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_99_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_100_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_101_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_102_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_103_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_78_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_79_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_80_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_81_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_82_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_83_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_84_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_85_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_54_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_55_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_56_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_57_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_58_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_59_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_60_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_61_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_36_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_37_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_38_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_39_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_40_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_41_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_42_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_43_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_stencil_1_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_1_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_res = op_hcompute_hw_input_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_30_res, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_stencil_2_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_2_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_res = op_hcompute_hw_input_global_wrapper_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_28_res, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_stencil_3_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_3_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_res = op_hcompute_hw_input_global_wrapper_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_26_res, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_stencil_4_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_4_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_res = op_hcompute_hw_input_global_wrapper_stencil_4_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_24_res, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_stencil_5_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_5_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_res = op_hcompute_hw_input_global_wrapper_stencil_5_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_22_res, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_stencil_6_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_6_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_res = op_hcompute_hw_input_global_wrapper_stencil_6_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_20_res, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_stencil_7_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_7_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_res = op_hcompute_hw_input_global_wrapper_stencil_7_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_18_res, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_32_res, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

struct hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 7], [0, 7]}
  hw_uint<16> RAM[3][3][8][8];
  inline hw_uint<16> read(int d0, int d1, int d2, int d3) {
    return RAM[d0][d1][d2][d3];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2, int d3) {
    RAM[d0][d1][d2][d3] = value;
  }

};

struct hw_kernel_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  // # of banks: 1
  hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs_cache hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs;
};



inline void hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_write(hw_uint<16>& hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_x, int hw_kernel_global_wrapper_s0_w, int hw_kernel_global_wrapper_s0_z, int dynamic_address) {
  hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16, ((1*hw_kernel_global_wrapper_s0_y)) - 0, ((1*hw_kernel_global_wrapper_s0_x)) - 0, ((1*hw_kernel_global_wrapper_s0_w)) - 0, ((1*hw_kernel_global_wrapper_s0_z)) - 0);
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183 read pattern: { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((3)) - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((3)) - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((3)) - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((3)) - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((3)) - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((3)) - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((3)) - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165 read pattern: { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 3, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((3)) - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((4)) - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((4)) - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((4)) - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((4)) - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((4)) - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((4)) - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((4)) - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147 read pattern: { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 4, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((4)) - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((5)) - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((5)) - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((5)) - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((5)) - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((5)) - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((5)) - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((5)) - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129 read pattern: { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 5, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((5)) - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((6)) - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((6)) - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((6)) - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((6)) - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((6)) - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((6)) - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((6)) - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111 read pattern: { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 6, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((6)) - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((7)) - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((7)) - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((7)) - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((7)) - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((7)) - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((7)) - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((7)) - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93 read pattern: { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 7, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((7)) - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69 read pattern: { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51 read pattern: { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16;
  return 0;
}

// # of bundles = 9
// op_hcompute_conv_stencil_10_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_176_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_177_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_178_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_179_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_180_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_181_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_182_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_183_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_158_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_159_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_160_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_161_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_162_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_163_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_164_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_165_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_140_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_141_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_142_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_143_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_144_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_145_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_146_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_147_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_122_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_123_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_124_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_125_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_126_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_127_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_128_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_129_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_104_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_105_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_106_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_107_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_108_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_109_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_110_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_111_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_86_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_87_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_88_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_89_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_90_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_91_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_92_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_93_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_62_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_63_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_64_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_65_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_66_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_67_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_68_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_69_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_44_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_45_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_46_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_47_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_48_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_49_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_50_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_51_res);
	return result;
}

// op_hcompute_hw_kernel_global_wrapper_stencil_write
//	hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16
inline void hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_global_wrapper_stencil_write, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_x, int hw_kernel_global_wrapper_s0_w, int hw_kernel_global_wrapper_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_res = op_hcompute_hw_kernel_global_wrapper_stencil_write.extract<0, 15>();
	hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_write(hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_16_res, hw_kernel_global_wrapper_stencil, root, pad_root_to_hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z, dynamic_address);
}

// Total re-use buffer capacity: 224768 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_0, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_0
	auto hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__0_value = hw_input_stencil_clkwrk_0.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__0_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_1, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_1
	auto hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__1_value = hw_input_stencil_clkwrk_1.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_1(hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__1_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_2(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_2, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_2
	auto hw_input_stencil_clkwrk_2_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__2_value = hw_input_stencil_clkwrk_2.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_2(hw_input_stencil_clkwrk_2_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__2_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_3(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_3, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_3
	auto hw_input_stencil_clkwrk_3_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__3_value = hw_input_stencil_clkwrk_3.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_3(hw_input_stencil_clkwrk_3_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__3_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_4(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_4, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_4
	auto hw_input_stencil_clkwrk_4_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__4_value = hw_input_stencil_clkwrk_4.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_4(hw_input_stencil_clkwrk_4_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__4_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_5(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_5, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_5
	auto hw_input_stencil_clkwrk_5_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__5_value = hw_input_stencil_clkwrk_5.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_5(hw_input_stencil_clkwrk_5_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__5_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_5_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_6(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_6, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_6
	auto hw_input_stencil_clkwrk_6_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__6_value = hw_input_stencil_clkwrk_6.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_6(hw_input_stencil_clkwrk_6_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__6_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_6_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil_7(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_7, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_7
	auto hw_input_stencil_clkwrk_7_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__7_value = hw_input_stencil_clkwrk_7.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil_7(hw_input_stencil_clkwrk_7_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__7_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_7_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_kernel_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_kernel_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_x, int hw_kernel_global_wrapper_s0_w, int hw_kernel_global_wrapper_s0_z) {
  // Dynamic address computation

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_hw_kernel_global_wrapper_s0_y_c__hw_kernel_global_wrapper_s0_x_c__hw_kernel_global_wrapper_s0_w_c__hw_kernel_global_wrapper_s0_z_value = hw_kernel_stencil.read();
	auto compute_result = hcompute_hw_kernel_global_wrapper_stencil(hw_kernel_stencil_hw_kernel_global_wrapper_s0_y_c__hw_kernel_global_wrapper_s0_x_c__hw_kernel_global_wrapper_s0_w_c__hw_kernel_global_wrapper_s0_z_value);
	// Produce: hw_kernel_global_wrapper_stencil
	hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_kernel_global_wrapper_stencil, root, pad_root_to_hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_1(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil_1();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_2(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil_2();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_3(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil_3();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_4(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil_4();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_5(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil_5();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_6(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil_6();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_7(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil_7();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_8(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_0_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__0_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_8(conv_stencil_0_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__0_c__0_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_9(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_1_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__1_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__1_c__1_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_9(conv_stencil_1_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__1_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__1_c__1_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_10(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_2_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__2_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_10(conv_stencil_2_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__2_c__0_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_10_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_11(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_3_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__3_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_11(conv_stencil_3_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__3_c__0_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_11_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_12(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_4_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__4_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_12(conv_stencil_4_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__4_c__0_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_12_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_13(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_5_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__5_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_13(conv_stencil_5_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__5_c__0_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_13_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_14(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_6_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__6_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_14(conv_stencil_6_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__6_c__0_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_14_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_15(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_7_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__7_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_15(conv_stencil_7_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__7_c__0_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_15_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_8, int root, int pad_root_to_hw_output_s0_y_yi, int pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int pad_pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_0_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_hw_output_s0_y_yi, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, pad_pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_0_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil_clkwrk_8
	hw_output_stencil_clkwrk_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_1(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_9, int root, int pad_root_to_hw_output_s0_y_yi_1, int pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1, int pad_pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1, int hw_output_s0_y_yi_1, int hw_output_s0_x_xi_1) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_1_c__hw_output_s0_y_yi_1_c__hw_output_s0_x_xi_1_value = conv_stencil_op_hcompute_hw_output_stencil_1_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_hw_output_s0_y_yi_1, pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1, pad_pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_1(conv_stencil_1_c__hw_output_s0_y_yi_1_c__hw_output_s0_x_xi_1_value);
	// Produce: hw_output_stencil_clkwrk_9
	hw_output_stencil_clkwrk_9.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_2(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_10, int root, int pad_root_to_hw_output_s0_y_yi_2, int pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2, int pad_pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2, int hw_output_s0_y_yi_2, int hw_output_s0_x_xi_2) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_2_c__hw_output_s0_y_yi_2_c__hw_output_s0_x_xi_2_value = conv_stencil_op_hcompute_hw_output_stencil_2_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_hw_output_s0_y_yi_2, pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2, pad_pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_2(conv_stencil_2_c__hw_output_s0_y_yi_2_c__hw_output_s0_x_xi_2_value);
	// Produce: hw_output_stencil_clkwrk_10
	hw_output_stencil_clkwrk_10.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_3(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_11, int root, int pad_root_to_hw_output_s0_y_yi_3, int pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3, int pad_pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3, int hw_output_s0_y_yi_3, int hw_output_s0_x_xi_3) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_3_c__hw_output_s0_y_yi_3_c__hw_output_s0_x_xi_3_value = conv_stencil_op_hcompute_hw_output_stencil_3_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_hw_output_s0_y_yi_3, pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3, pad_pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_3(conv_stencil_3_c__hw_output_s0_y_yi_3_c__hw_output_s0_x_xi_3_value);
	// Produce: hw_output_stencil_clkwrk_11
	hw_output_stencil_clkwrk_11.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_4(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_12, int root, int pad_root_to_hw_output_s0_y_yi_4, int pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4, int pad_pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4, int hw_output_s0_y_yi_4, int hw_output_s0_x_xi_4) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_4_c__hw_output_s0_y_yi_4_c__hw_output_s0_x_xi_4_value = conv_stencil_op_hcompute_hw_output_stencil_4_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_hw_output_s0_y_yi_4, pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4, pad_pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_4(conv_stencil_4_c__hw_output_s0_y_yi_4_c__hw_output_s0_x_xi_4_value);
	// Produce: hw_output_stencil_clkwrk_12
	hw_output_stencil_clkwrk_12.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_5(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_13, int root, int pad_root_to_hw_output_s0_y_yi_5, int pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5, int pad_pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5, int hw_output_s0_y_yi_5, int hw_output_s0_x_xi_5) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_5_c__hw_output_s0_y_yi_5_c__hw_output_s0_x_xi_5_value = conv_stencil_op_hcompute_hw_output_stencil_5_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_hw_output_s0_y_yi_5, pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5, pad_pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_5(conv_stencil_5_c__hw_output_s0_y_yi_5_c__hw_output_s0_x_xi_5_value);
	// Produce: hw_output_stencil_clkwrk_13
	hw_output_stencil_clkwrk_13.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_6(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_14, int root, int pad_root_to_hw_output_s0_y_yi_6, int pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6, int pad_pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6, int hw_output_s0_y_yi_6, int hw_output_s0_x_xi_6) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_6_c__hw_output_s0_y_yi_6_c__hw_output_s0_x_xi_6_value = conv_stencil_op_hcompute_hw_output_stencil_6_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_hw_output_s0_y_yi_6, pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6, pad_pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_6(conv_stencil_6_c__hw_output_s0_y_yi_6_c__hw_output_s0_x_xi_6_value);
	// Produce: hw_output_stencil_clkwrk_14
	hw_output_stencil_clkwrk_14.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil_7(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil_clkwrk_15, int root, int pad_root_to_hw_output_s0_y_yi_7, int pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7, int pad_pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7, int hw_output_s0_y_yi_7, int hw_output_s0_x_xi_7) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_7_c__hw_output_s0_y_yi_7_c__hw_output_s0_x_xi_7_value = conv_stencil_op_hcompute_hw_output_stencil_7_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_hw_output_s0_y_yi_7, pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7, pad_pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil_7(conv_stencil_7_c__hw_output_s0_y_yi_7_c__hw_output_s0_x_xi_7_value);
	// Produce: hw_output_stencil_clkwrk_15
	hw_output_stencil_clkwrk_15.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void resnet88(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_kernel_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_11, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_12, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_13, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_14, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_15, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_9) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("resnet88_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  conv_stencil_cache conv_stencil;
#pragma HLS array_partition variable=conv_stencil.conv_stencil_all_inputs_to_all_outputs_cache complete dim=1
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#pragma HLS array_partition variable=hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_stencil_all_inputs_to_all_outputs_cache complete dim=3
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_kernel_global_wrapper_stencil_cache hw_kernel_global_wrapper_stencil;
#pragma HLS array_partition variable=hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_stencil_all_inputs_to_all_outputs_cache complete dim=0
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_hw_input_global_wrapper_stencil_4[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 3] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, pad_root_to_hw_kernel_global_wrapper_s0_y = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [0, 0, 1, 0, 0, hw_kernel_global_wrapper_s0_y, 0, hw_kernel_global_wrapper_s0_x, 0, hw_kernel_global_wrapper_s0_w, 0, hw_kernel_global_wrapper_s0_z, 0] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 7 and 0 <= hw_kernel_global_wrapper_s0_z <= 7; op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 1] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 4] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_y_yi = 0, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_hw_output_stencil_7[root = 0, pad_root_to_hw_output_s0_y_yi_7 = 0, pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7 = 0, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7] -> [0, 0, 11, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_7, 0, hw_output_s0_x_xi_7, 0] : 0 <= hw_output_s0_y_yi_7 <= 27 and 0 <= hw_output_s0_x_xi_7 <= 27; op_hcompute_conv_stencil_6[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 6] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 2] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_7[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 7] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_hw_input_global_wrapper_stencil[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_hw_input_global_wrapper_stencil_5[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 5] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_hw_output_stencil_3[root = 0, pad_root_to_hw_output_s0_y_yi_3 = 0, pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3 = 0, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3] -> [0, 0, 7, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_3, 0, hw_output_s0_x_xi_3, 0] : 0 <= hw_output_s0_y_yi_3 <= 27 and 0 <= hw_output_s0_x_xi_3 <= 27; op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_hw_output_stencil_6[root = 0, pad_root_to_hw_output_s0_y_yi_6 = 0, pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6 = 0, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6] -> [0, 0, 10, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_6, 0, hw_output_s0_x_xi_6, 0] : 0 <= hw_output_s0_y_yi_6 <= 27 and 0 <= hw_output_s0_x_xi_6 <= 27; op_hcompute_hw_output_stencil_5[root = 0, pad_root_to_hw_output_s0_y_yi_5 = 0, pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5 = 0, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5] -> [0, 0, 9, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_5, 0, hw_output_s0_x_xi_5, 0] : 0 <= hw_output_s0_y_yi_5 <= 27 and 0 <= hw_output_s0_x_xi_5 <= 27; op_hcompute_hw_input_global_wrapper_stencil_7[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 7] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29; op_hcompute_hw_output_stencil_4[root = 0, pad_root_to_hw_output_s0_y_yi_4 = 0, pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4 = 0, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4] -> [0, 0, 8, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_4, 0, hw_output_s0_x_xi_4, 0] : 0 <= hw_output_s0_y_yi_4 <= 27 and 0 <= hw_output_s0_x_xi_4 <= 27; op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_hw_output_stencil_2[root = 0, pad_root_to_hw_output_s0_y_yi_2 = 0, pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2 = 0, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] -> [0, 0, 6, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_2, 0, hw_output_s0_x_xi_2, 0] : 0 <= hw_output_s0_y_yi_2 <= 27 and 0 <= hw_output_s0_x_xi_2 <= 27; op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 3] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_conv_stencil_2[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 2] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 5] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_hw_output_stencil_1[root = 0, pad_root_to_hw_output_s0_y_yi_1 = 0, pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1 = 0, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] -> [0, 0, 5, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_1, 0, hw_output_s0_x_xi_1, 0] : 0 <= hw_output_s0_y_yi_1 <= 27 and 0 <= hw_output_s0_x_xi_1 <= 27; op_hcompute_conv_stencil[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_conv_stencil_1[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 1] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_hw_input_global_wrapper_stencil_6[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
//   { op_hcompute_hw_input_global_wrapper_stencil_4[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_4(((((-4 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((29 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((29 + -1*i11)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 3] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_3(((((-3 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((29 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((29 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_14[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_14(((((-6 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, pad_root_to_hw_kernel_global_wrapper_s0_y = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [0, 0, 1, 0, 0, hw_kernel_global_wrapper_s0_y, 0, hw_kernel_global_wrapper_s0_x, 0, hw_kernel_global_wrapper_s0_w, 0, hw_kernel_global_wrapper_s0_z, 0] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 7 and 0 <= hw_kernel_global_wrapper_s0_z <= 7 }
// Condition for op_hcompute_hw_kernel_global_wrapper_stencil(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-1 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((7 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((7 + -1*i11)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 1] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_1(((((-1 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((29 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((29 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 4] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_4(((((-4 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_y_yi = 0, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-4 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_output_stencil_7[root = 0, pad_root_to_hw_output_s0_y_yi_7 = 0, pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7 = 0, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7] -> [0, 0, 11, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_7, 0, hw_output_s0_x_xi_7, 0] : 0 <= hw_output_s0_y_yi_7 <= 27 and 0 <= hw_output_s0_x_xi_7 <= 27 }
// Condition for op_hcompute_hw_output_stencil_7(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-11 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_6[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 6] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_6(((((-6 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_10[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_10(((((-2 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 2] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_2(((((-2 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((29 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((29 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_12[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_12(((((-4 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_7[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 7] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_7(((((-7 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((29 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((29 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_15[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_15(((((-7 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_5[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 5] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_5(((((-5 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((29 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((29 + -1*i11)) >= 0)))
//   { op_hcompute_hw_output_stencil_3[root = 0, pad_root_to_hw_output_s0_y_yi_3 = 0, pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3 = 0, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3] -> [0, 0, 7, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_3, 0, hw_output_s0_x_xi_3, 0] : 0 <= hw_output_s0_y_yi_3 <= 27 and 0 <= hw_output_s0_x_xi_3 <= 27 }
// Condition for op_hcompute_hw_output_stencil_3(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-7 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_13[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_13(((((-5 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_output_stencil_6[root = 0, pad_root_to_hw_output_s0_y_yi_6 = 0, pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6 = 0, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6] -> [0, 0, 10, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_6, 0, hw_output_s0_x_xi_6, 0] : 0 <= hw_output_s0_y_yi_6 <= 27 and 0 <= hw_output_s0_x_xi_6 <= 27 }
// Condition for op_hcompute_hw_output_stencil_6(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-10 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_output_stencil_5[root = 0, pad_root_to_hw_output_s0_y_yi_5 = 0, pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5 = 0, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5] -> [0, 0, 9, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_5, 0, hw_output_s0_x_xi_5, 0] : 0 <= hw_output_s0_y_yi_5 <= 27 and 0 <= hw_output_s0_x_xi_5 <= 27 }
// Condition for op_hcompute_hw_output_stencil_5(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-9 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_7[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 7] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_7(((((-7 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((29 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((29 + -1*i11)) >= 0)))
//   { op_hcompute_hw_output_stencil_4[root = 0, pad_root_to_hw_output_s0_y_yi_4 = 0, pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4 = 0, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4] -> [0, 0, 8, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_4, 0, hw_output_s0_x_xi_4, 0] : 0 <= hw_output_s0_y_yi_4 <= 27 and 0 <= hw_output_s0_x_xi_4 <= 27 }
// Condition for op_hcompute_hw_output_stencil_4(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-8 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_9[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_9(((((-1 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_output_stencil_2[root = 0, pad_root_to_hw_output_s0_y_yi_2 = 0, pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2 = 0, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] -> [0, 0, 6, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_2, 0, hw_output_s0_x_xi_2, 0] : 0 <= hw_output_s0_y_yi_2 <= 27 and 0 <= hw_output_s0_x_xi_2 <= 27 }
// Condition for op_hcompute_hw_output_stencil_2(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-6 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 3] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_3(((((-3 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_2[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 2] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_2(((((-2 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_8[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_8(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 5] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_5(((((-5 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_output_stencil_1[root = 0, pad_root_to_hw_output_s0_y_yi_1 = 0, pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1 = 0, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] -> [0, 0, 5, 0, 0, 0, 0, 0, 0, hw_output_s0_y_yi_1, 0, hw_output_s0_x_xi_1, 0] : 0 <= hw_output_s0_y_yi_1 <= 27 and 0 <= hw_output_s0_x_xi_1 <= 27 }
// Condition for op_hcompute_hw_output_stencil_1(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-5 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_1[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 1] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_1(((((-1 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_11[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_11(((((-3 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil_6[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil_6(((((-6 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((29 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((29 + -1*i11)) >= 0)))

	{
	  for (int c9 = 0; c9 <= 29; c9 += 1)
	    for (int c11 = 0; c11 <= 29; c11 += 1) {
#pragma HLS pipeline II=1
	      op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_clkwrk_0 /* buf name */, hw_input_global_wrapper_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_hw_input_global_wrapper_stencil_1(hw_input_stencil_clkwrk_1 /* buf name */, hw_input_global_wrapper_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_hw_input_global_wrapper_stencil_2(hw_input_stencil_clkwrk_2 /* buf name */, hw_input_global_wrapper_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_hw_input_global_wrapper_stencil_3(hw_input_stencil_clkwrk_3 /* buf name */, hw_input_global_wrapper_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_hw_input_global_wrapper_stencil_4(hw_input_stencil_clkwrk_4 /* buf name */, hw_input_global_wrapper_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_hw_input_global_wrapper_stencil_5(hw_input_stencil_clkwrk_5 /* buf name */, hw_input_global_wrapper_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_hw_input_global_wrapper_stencil_6(hw_input_stencil_clkwrk_6 /* buf name */, hw_input_global_wrapper_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_hw_input_global_wrapper_stencil_7(hw_input_stencil_clkwrk_7 /* buf name */, hw_input_global_wrapper_stencil, 0, 0, 0, 0, c9, c11);
	    }
	  for (int c5 = 0; c5 <= 2; c5 += 1)
	    for (int c7 = 0; c7 <= 2; c7 += 1)
	      for (int c9 = 0; c9 <= 7; c9 += 1)
	        for (int c11 = 0; c11 <= 7; c11 += 1)
#pragma HLS pipeline II=1
	          op_hcompute_hw_kernel_global_wrapper_stencil(hw_kernel_stencil /* buf name */, hw_kernel_global_wrapper_stencil, 0, 0, c5, c7, c9, c11);
	  for (int c9 = 0; c9 <= 27; c9 += 1)
	    for (int c11 = 0; c11 <= 27; c11 += 1) {
#pragma HLS pipeline II=1
	      op_hcompute_conv_stencil(conv_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_conv_stencil_1(conv_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_conv_stencil_2(conv_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_conv_stencil_3(conv_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_conv_stencil_4(conv_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_conv_stencil_5(conv_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_conv_stencil_6(conv_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_conv_stencil_7(conv_stencil, 0, 0, 0, 0, c9, c11);
	    }
	  for (int c5 = 0; c5 <= 2; c5 += 1)
	    for (int c7 = 0; c7 <= 2; c7 += 1)
	      for (int c9 = 0; c9 <= 27; c9 += 1)
	        for (int c11 = 0; c11 <= 27; c11 += 1) {
#pragma HLS pipeline II=1
	          op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	          op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	          op_hcompute_conv_stencil_10(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	          op_hcompute_conv_stencil_11(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	          op_hcompute_conv_stencil_12(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	          op_hcompute_conv_stencil_13(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	          op_hcompute_conv_stencil_14(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	          op_hcompute_conv_stencil_15(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	        }
	  for (int c9 = 0; c9 <= 27; c9 += 1)
	    for (int c11 = 0; c11 <= 27; c11 += 1)
#pragma HLS pipeline II=1
	      op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil_clkwrk_8, 0, 0, 0, 0, c9, c11);
	  for (int c9 = 0; c9 <= 27; c9 += 1)
	    for (int c11 = 0; c11 <= 27; c11 += 1)
#pragma HLS pipeline II=1
	      op_hcompute_hw_output_stencil_1(conv_stencil /* buf name */, hw_output_stencil_clkwrk_9, 0, 0, 0, 0, c9, c11);
	  for (int c9 = 0; c9 <= 27; c9 += 1)
	    for (int c11 = 0; c11 <= 27; c11 += 1)
#pragma HLS pipeline II=1
	      op_hcompute_hw_output_stencil_2(conv_stencil /* buf name */, hw_output_stencil_clkwrk_10, 0, 0, 0, 0, c9, c11);
	  for (int c9 = 0; c9 <= 27; c9 += 1)
	    for (int c11 = 0; c11 <= 27; c11 += 1)
#pragma HLS pipeline II=1
	      op_hcompute_hw_output_stencil_3(conv_stencil /* buf name */, hw_output_stencil_clkwrk_11, 0, 0, 0, 0, c9, c11);
	  for (int c9 = 0; c9 <= 27; c9 += 1)
	    for (int c11 = 0; c11 <= 27; c11 += 1)
#pragma HLS pipeline II=1
	      op_hcompute_hw_output_stencil_4(conv_stencil /* buf name */, hw_output_stencil_clkwrk_12, 0, 0, 0, 0, c9, c11);
	  for (int c9 = 0; c9 <= 27; c9 += 1)
	    for (int c11 = 0; c11 <= 27; c11 += 1)
#pragma HLS pipeline II=1
	      op_hcompute_hw_output_stencil_5(conv_stencil /* buf name */, hw_output_stencil_clkwrk_13, 0, 0, 0, 0, c9, c11);
	  for (int c9 = 0; c9 <= 27; c9 += 1)
	    for (int c11 = 0; c11 <= 27; c11 += 1)
#pragma HLS pipeline II=1
	      op_hcompute_hw_output_stencil_6(conv_stencil /* buf name */, hw_output_stencil_clkwrk_14, 0, 0, 0, 0, c9, c11);
	  for (int c9 = 0; c9 <= 27; c9 += 1)
	    for (int c11 = 0; c11 <= 27; c11 += 1)
#pragma HLS pipeline II=1
	      op_hcompute_hw_output_stencil_7(conv_stencil /* buf name */, hw_output_stencil_clkwrk_15, 0, 0, 0, 0, c9, c11);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void resnet88_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_kernel_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_11, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_12, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_13, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_14, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_15, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil_clkwrk_9, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    resnet88(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_input_stencil_clkwrk_4, hw_input_stencil_clkwrk_5, hw_input_stencil_clkwrk_6, hw_input_stencil_clkwrk_7, hw_kernel_stencil, hw_output_stencil_clkwrk_10, hw_output_stencil_clkwrk_11, hw_output_stencil_clkwrk_12, hw_output_stencil_clkwrk_13, hw_output_stencil_clkwrk_14, hw_output_stencil_clkwrk_15, hw_output_stencil_clkwrk_8, hw_output_stencil_clkwrk_9);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_0[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_1[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_1[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 1] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_2[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_2[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 2] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_3[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_3[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 3] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_4[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_4[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 4] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_5[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_5[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 5] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_6[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_6[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 6] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_input_global_wrapper_stencil_7[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, pad_pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil_clkwrk_7[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 7] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 }
const int op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0_num_transfers = 900;
  // { op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, pad_root_to_hw_kernel_global_wrapper_s0_y = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> hw_kernel_stencil[hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 7 and 0 <= hw_kernel_global_wrapper_s0_z <= 7 }
const int op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_num_transfers = 576;
  // { op_hcompute_hw_output_stencil_2[root = 0, pad_root_to_hw_output_s0_y_yi_2 = 0, pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2_to_hw_output_s0_y_yi_2 = 0, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] -> hw_output_stencil_clkwrk_10[2, hw_output_s0_y_yi_2, hw_output_s0_x_xi_2] : 0 <= hw_output_s0_y_yi_2 <= 27 and 0 <= hw_output_s0_x_xi_2 <= 27 }
const int op_hcompute_hw_output_stencil_2_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil_3[root = 0, pad_root_to_hw_output_s0_y_yi_3 = 0, pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3_to_hw_output_s0_y_yi_3 = 0, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3] -> hw_output_stencil_clkwrk_11[3, hw_output_s0_y_yi_3, hw_output_s0_x_xi_3] : 0 <= hw_output_s0_y_yi_3 <= 27 and 0 <= hw_output_s0_x_xi_3 <= 27 }
const int op_hcompute_hw_output_stencil_3_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil_4[root = 0, pad_root_to_hw_output_s0_y_yi_4 = 0, pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4_to_hw_output_s0_y_yi_4 = 0, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4] -> hw_output_stencil_clkwrk_12[4, hw_output_s0_y_yi_4, hw_output_s0_x_xi_4] : 0 <= hw_output_s0_y_yi_4 <= 27 and 0 <= hw_output_s0_x_xi_4 <= 27 }
const int op_hcompute_hw_output_stencil_4_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil_5[root = 0, pad_root_to_hw_output_s0_y_yi_5 = 0, pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5_to_hw_output_s0_y_yi_5 = 0, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5] -> hw_output_stencil_clkwrk_13[5, hw_output_s0_y_yi_5, hw_output_s0_x_xi_5] : 0 <= hw_output_s0_y_yi_5 <= 27 and 0 <= hw_output_s0_x_xi_5 <= 27 }
const int op_hcompute_hw_output_stencil_5_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil_6[root = 0, pad_root_to_hw_output_s0_y_yi_6 = 0, pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6_to_hw_output_s0_y_yi_6 = 0, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6] -> hw_output_stencil_clkwrk_14[6, hw_output_s0_y_yi_6, hw_output_s0_x_xi_6] : 0 <= hw_output_s0_y_yi_6 <= 27 and 0 <= hw_output_s0_x_xi_6 <= 27 }
const int op_hcompute_hw_output_stencil_6_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil_7[root = 0, pad_root_to_hw_output_s0_y_yi_7 = 0, pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7_to_hw_output_s0_y_yi_7 = 0, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7] -> hw_output_stencil_clkwrk_15[7, hw_output_s0_y_yi_7, hw_output_s0_x_xi_7] : 0 <= hw_output_s0_y_yi_7 <= 27 and 0 <= hw_output_s0_x_xi_7 <= 27 }
const int op_hcompute_hw_output_stencil_7_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_y_yi = 0, pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi_to_hw_output_s0_y_yi = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil_clkwrk_8[0, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 784;
  // { op_hcompute_hw_output_stencil_1[root = 0, pad_root_to_hw_output_s0_y_yi_1 = 0, pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1 = 0, pad_pad_pad_root_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1_to_hw_output_s0_y_yi_1 = 0, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] -> hw_output_stencil_clkwrk_9[1, hw_output_s0_y_yi_1, hw_output_s0_x_xi_1] : 0 <= hw_output_s0_y_yi_1 <= 27 and 0 <= hw_output_s0_x_xi_1 <= 27 }
const int op_hcompute_hw_output_stencil_1_write_pipe0_num_transfers = 784;


extern "C" {

void resnet88_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0, hw_uint<16>* op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_2_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_3_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_4_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_5_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_6_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_7_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_1_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_2_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_3_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_4_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_5_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_6_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_7_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_2_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_3_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_4_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_5_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_6_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_7_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_2_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_3_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_4_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_5_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_6_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_7_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_1_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0, op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_num_transfers*size);

  resnet88_wrapper(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0_channel, op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_2_write_pipe0_channel, op_hcompute_hw_output_stencil_3_write_pipe0_channel, op_hcompute_hw_output_stencil_4_write_pipe0_channel, op_hcompute_hw_output_stencil_5_write_pipe0_channel, op_hcompute_hw_output_stencil_6_write_pipe0_channel, op_hcompute_hw_output_stencil_7_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_1_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_2_write_pipe0, op_hcompute_hw_output_stencil_2_write_pipe0_channel, op_hcompute_hw_output_stencil_2_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_3_write_pipe0, op_hcompute_hw_output_stencil_3_write_pipe0_channel, op_hcompute_hw_output_stencil_3_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_4_write_pipe0, op_hcompute_hw_output_stencil_4_write_pipe0_channel, op_hcompute_hw_output_stencil_4_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_5_write_pipe0, op_hcompute_hw_output_stencil_5_write_pipe0_channel, op_hcompute_hw_output_stencil_5_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_6_write_pipe0, op_hcompute_hw_output_stencil_6_write_pipe0_channel, op_hcompute_hw_output_stencil_6_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_7_write_pipe0, op_hcompute_hw_output_stencil_7_write_pipe0_channel, op_hcompute_hw_output_stencil_7_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_stencil_1_write_pipe0, op_hcompute_hw_output_stencil_1_write_pipe0_channel, op_hcompute_hw_output_stencil_1_write_pipe0_num_transfers*size);
}

}
extern "C" {

void resnet88_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_2_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_3_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_4_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_5_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_6_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_7_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_1_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_2_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_3_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_4_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_5_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_6_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_7_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_1_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  resnet88(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_4_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_5_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_6_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_7_read_pipe0, op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_2_write_pipe0, op_hcompute_hw_output_stencil_3_write_pipe0, op_hcompute_hw_output_stencil_4_write_pipe0, op_hcompute_hw_output_stencil_5_write_pipe0, op_hcompute_hw_output_stencil_6_write_pipe0, op_hcompute_hw_output_stencil_7_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_1_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

