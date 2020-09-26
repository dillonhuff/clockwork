#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: resnet_compute.h
#include "resnet_compute.h"

#include "hw_classes.h"

struct conv_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
  hw_uint<16> RAM[28][28][16];
  inline hw_uint<16> read(int d0, int d1, int d2) {
    return RAM[d0][d1][d2];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2) {
    RAM[d0][d1][d2] = value;
  }

};

struct conv_stencil_cache {
  // # of banks: 1
  conv_stencil_all_inputs_to_all_outputs_cache conv_stencil_all_inputs_to_all_outputs;
};



inline void conv_stencil_op_hcompute_conv_stencil_10_258_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_10_258, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_10_258, conv_s1_x - 0, conv_s1_y - 0, 9 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_11_240_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_11_240, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_11_240, conv_s1_x - 0, conv_s1_y - 0, 10 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_12_222_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_12_222, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_12_222, conv_s1_x - 0, conv_s1_y - 0, 11 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_13_204_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_13_204, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_13_204, conv_s1_x - 0, conv_s1_y - 0, 12 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_14_186_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_14_186, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_14_186, conv_s1_x - 0, conv_s1_y - 0, 13 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_15_168_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_15_168, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_15_168, conv_s1_x - 0, conv_s1_y - 0, 14 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_16_150_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_16_150, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_16_150, conv_s1_x - 0, conv_s1_y - 0, 15 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_1_276_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_276, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_1_276, conv_s1_x - 0, conv_s1_y - 0, 0 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_294_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_294, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_294, conv_s0_x - 0, conv_s0_y - 0, conv_s0_w - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_132_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2_132, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_2_132, conv_s1_x - 0, conv_s1_y - 0, 1 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_3_114_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_3_114, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_3_114, conv_s1_x - 0, conv_s1_y - 0, 2 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_96_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4_96, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_4_96, conv_s1_x - 0, conv_s1_y - 0, 3 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_5_78_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_5_78, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_5_78, conv_s1_x - 0, conv_s1_y - 0, 4 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_6_60_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_6_60, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_6_60, conv_s1_x - 0, conv_s1_y - 0, 5 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_7_42_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_7_42, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_7_42, conv_s1_x - 0, conv_s1_y - 0, 6 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_8_24_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_8_24, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_8_24, conv_s1_x - 0, conv_s1_y - 0, 7 - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_9_6_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_9_6, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_9_6, conv_s1_x - 0, conv_s1_y - 0, 8 - 0);
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_259_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_10_259 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 9] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 9 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_241_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_11_241 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 10] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 10 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_223_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_12_223 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 11] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 11 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_205_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_13_205 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 12] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 12 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_187_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_14_187 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 13] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 13 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_169_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_15_169 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 14] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 14 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_151_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_16_151 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 15] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 15 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_277_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_1_277 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 0 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_133_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_2_133 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 1 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_115_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_3_115 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 2 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_97_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_4_97 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 3 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_79_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_5_79 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 4 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_61_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_6_61 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 5 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_43_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_7_43 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 6 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_25_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_8_25 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 7 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_7_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_9_7 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[conv_s1_x, conv_s1_y, 8] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 8 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_1_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_1 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_258 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(hw_output_s0_x_xi - 0, hw_output_s0_y_yi - 0, hw_output_s0_w - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_10_258;
  return 0;
}

// # of bundles = 34
// op_hcompute_conv_stencil_10_read
//	conv_stencil_op_hcompute_conv_stencil_10_259
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_10_259

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_259_res = conv_stencil_op_hcompute_conv_stencil_10_259_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_10_259_res);
	return result;
}

// op_hcompute_conv_stencil_10_write
//	conv_stencil_op_hcompute_conv_stencil_10_258
inline void conv_stencil_op_hcompute_conv_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_10_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_258_res = op_hcompute_conv_stencil_10_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_10_258_write(conv_stencil_op_hcompute_conv_stencil_10_258_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_11_read
//	conv_stencil_op_hcompute_conv_stencil_11_241
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_11_241

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_241_res = conv_stencil_op_hcompute_conv_stencil_11_241_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_11_241_res);
	return result;
}

// op_hcompute_conv_stencil_11_write
//	conv_stencil_op_hcompute_conv_stencil_11_240
inline void conv_stencil_op_hcompute_conv_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_11_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_240_res = op_hcompute_conv_stencil_11_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_11_240_write(conv_stencil_op_hcompute_conv_stencil_11_240_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_12_read
//	conv_stencil_op_hcompute_conv_stencil_12_223
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_12_223

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_223_res = conv_stencil_op_hcompute_conv_stencil_12_223_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_12_223_res);
	return result;
}

// op_hcompute_conv_stencil_12_write
//	conv_stencil_op_hcompute_conv_stencil_12_222
inline void conv_stencil_op_hcompute_conv_stencil_12_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_12_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_222_res = op_hcompute_conv_stencil_12_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_12_222_write(conv_stencil_op_hcompute_conv_stencil_12_222_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_13_read
//	conv_stencil_op_hcompute_conv_stencil_13_205
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_13_205

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_205_res = conv_stencil_op_hcompute_conv_stencil_13_205_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_13_205_res);
	return result;
}

// op_hcompute_conv_stencil_13_write
//	conv_stencil_op_hcompute_conv_stencil_13_204
inline void conv_stencil_op_hcompute_conv_stencil_13_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_13_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_204_res = op_hcompute_conv_stencil_13_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_13_204_write(conv_stencil_op_hcompute_conv_stencil_13_204_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_14_read
//	conv_stencil_op_hcompute_conv_stencil_14_187
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_14_187

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_187_res = conv_stencil_op_hcompute_conv_stencil_14_187_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_14_187_res);
	return result;
}

// op_hcompute_conv_stencil_14_write
//	conv_stencil_op_hcompute_conv_stencil_14_186
inline void conv_stencil_op_hcompute_conv_stencil_14_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_14_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_186_res = op_hcompute_conv_stencil_14_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_14_186_write(conv_stencil_op_hcompute_conv_stencil_14_186_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_15_read
//	conv_stencil_op_hcompute_conv_stencil_15_169
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_15_169

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_169_res = conv_stencil_op_hcompute_conv_stencil_15_169_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_15_169_res);
	return result;
}

// op_hcompute_conv_stencil_15_write
//	conv_stencil_op_hcompute_conv_stencil_15_168
inline void conv_stencil_op_hcompute_conv_stencil_15_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_15_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_168_res = op_hcompute_conv_stencil_15_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_15_168_write(conv_stencil_op_hcompute_conv_stencil_15_168_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_16_read
//	conv_stencil_op_hcompute_conv_stencil_16_151
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_16_151

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_151_res = conv_stencil_op_hcompute_conv_stencil_16_151_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_16_151_res);
	return result;
}

// op_hcompute_conv_stencil_16_write
//	conv_stencil_op_hcompute_conv_stencil_16_150
inline void conv_stencil_op_hcompute_conv_stencil_16_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_16_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_150_res = op_hcompute_conv_stencil_16_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_16_150_write(conv_stencil_op_hcompute_conv_stencil_16_150_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_1_read
//	conv_stencil_op_hcompute_conv_stencil_1_277
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_1_277

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_277_res = conv_stencil_op_hcompute_conv_stencil_1_277_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_1_277_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_276
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_276_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_276_write(conv_stencil_op_hcompute_conv_stencil_1_276_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_op_hcompute_conv_stencil_2_133
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_2_133

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_133_res = conv_stencil_op_hcompute_conv_stencil_2_133_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_2_133_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_op_hcompute_conv_stencil_2_132
inline void conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_2_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_132_res = op_hcompute_conv_stencil_2_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_132_write(conv_stencil_op_hcompute_conv_stencil_2_132_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_op_hcompute_conv_stencil_3_115
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_3_115

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_115_res = conv_stencil_op_hcompute_conv_stencil_3_115_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_3_115_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_op_hcompute_conv_stencil_3_114
inline void conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_3_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_114_res = op_hcompute_conv_stencil_3_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_3_114_write(conv_stencil_op_hcompute_conv_stencil_3_114_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_op_hcompute_conv_stencil_4_97
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_4_97

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_97_res = conv_stencil_op_hcompute_conv_stencil_4_97_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_4_97_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_op_hcompute_conv_stencil_4_96
inline void conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_4_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_96_res = op_hcompute_conv_stencil_4_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_96_write(conv_stencil_op_hcompute_conv_stencil_4_96_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_op_hcompute_conv_stencil_5_79
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_5_79

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_79_res = conv_stencil_op_hcompute_conv_stencil_5_79_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_5_79_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_op_hcompute_conv_stencil_5_78
inline void conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_5_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_78_res = op_hcompute_conv_stencil_5_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_5_78_write(conv_stencil_op_hcompute_conv_stencil_5_78_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_op_hcompute_conv_stencil_6_61
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_6_61

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_61_res = conv_stencil_op_hcompute_conv_stencil_6_61_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_6_61_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_op_hcompute_conv_stencil_6_60
inline void conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_6_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_60_res = op_hcompute_conv_stencil_6_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_6_60_write(conv_stencil_op_hcompute_conv_stencil_6_60_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_op_hcompute_conv_stencil_7_43
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_7_43

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_43_res = conv_stencil_op_hcompute_conv_stencil_7_43_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_7_43_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_op_hcompute_conv_stencil_7_42
inline void conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_7_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_42_res = op_hcompute_conv_stencil_7_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_7_42_write(conv_stencil_op_hcompute_conv_stencil_7_42_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_op_hcompute_conv_stencil_8_25
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_8_25

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_25_res = conv_stencil_op_hcompute_conv_stencil_8_25_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_8_25_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_op_hcompute_conv_stencil_8_24
inline void conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_8_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_24_res = op_hcompute_conv_stencil_8_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_8_24_write(conv_stencil_op_hcompute_conv_stencil_8_24_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_op_hcompute_conv_stencil_9_7
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_9_7

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_7_res = conv_stencil_op_hcompute_conv_stencil_9_7_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_9_7_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_op_hcompute_conv_stencil_9_6
inline void conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_9_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_6_res = op_hcompute_conv_stencil_9_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_9_6_write(conv_stencil_op_hcompute_conv_stencil_9_6_res, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_294
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_294_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_294_write(conv_stencil_op_hcompute_conv_stencil_294_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
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

#include "hw_classes.h"

struct hw_input_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
  hw_uint<16> RAM[8][30][30];
  inline hw_uint<16> read(int d0, int d1, int d2) {
    return RAM[d0][d1][d2];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2) {
    RAM[d0][d1][d2] = value;
  }

};

struct hw_input_stencil_cache {
  // # of banks: 1
  hw_input_stencil_all_inputs_to_all_outputs_cache hw_input_stencil_all_inputs_to_all_outputs;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_4_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_4, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.write(hw_input_stencil_op_hcompute_hw_input_stencil_4, hw_input_s0_z - 0, hw_input_s0_x - 0, hw_input_s0_y - 0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_260_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_260 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_261_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_261 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_262_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_262 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_263_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_263 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_264_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_264 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_265_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_265 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_266_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_266 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_267_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_267 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_242_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_242 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_243_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_243 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_244_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_244 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_245_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_245 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_246_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_246 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_247_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_247 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_248_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_248 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_249_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_249 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_224_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_224 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_225_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_225 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_226_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_226 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_227_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_227 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_228_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_228 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_229_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_229 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_230_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_230 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_231_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_231 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_206_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_206 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_207_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_207 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_208_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_208 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_209_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_209 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_210_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_210 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_211_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_211 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_212_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_212 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_213_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_213 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_188_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_188 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_189_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_189 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_190_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_190 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_191_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_191 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_192_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_192 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_193_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_193 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_194_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_194 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_195_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_195 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_170_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_170 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_171_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_171 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_172_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_172 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_173_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_173 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_174_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_174 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_175_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_175 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_176_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_176 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_177_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_177 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_152_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_152 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_153_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_153 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_154_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_154 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_155_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_155 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_156_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_156 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_157_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_157 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_158_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_158 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_159_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_159 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_278_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_278 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_279_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_279 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_280_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_280 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_281_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_281 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_282_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_282 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_283_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_283 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_284_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_284 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_285_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_285 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_134_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_134 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_135_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_135 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_136_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_136 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_137_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_137 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_138_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_138 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_139_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_139 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_140_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_140 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_141_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_141 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_116_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_116 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_117_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_117 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_118_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_118 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_119_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_119 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_120_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_120 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_121_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_121 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_122_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_122 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_123_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_123 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_100_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_100 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_101_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_101 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_102_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_102 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_103_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_103 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_104_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_104 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_105_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_105 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_98_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_98 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_99_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_99 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_80_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_80 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_81_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_81 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_82_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_82 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_83_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_83 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_84_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_84 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_85_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_85 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_86_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_86 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_87_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_87 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_62_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_62 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_63_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_63 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_64_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_64 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_65_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_65 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_66_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_66 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_67_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_67 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_68_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_68 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_69_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_69 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_44_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_44 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_45_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_45 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_46_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_46 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_47_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_47 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_48_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_48 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_49_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_49 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_50_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_50 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_51_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_51 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_26_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_26 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_27 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_28_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_28 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_29_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_29 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_30_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_30 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_31_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_31 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_32_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_32 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_33_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_33 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_10_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_10 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[2, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_11 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[3, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_12_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_12 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[4, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_13_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_13 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[5, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_14_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_14 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[6, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_15_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_15 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[7, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_8 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[0, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_9 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_stencil[1, conv_s1_r_x + conv_s1_x, conv_s1_r_y + conv_s1_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_r_x + conv_s1_x - 0, conv_s1_r_y + conv_s1_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_input_stencil_op_hcompute_conv_stencil_10_260
//	hw_input_stencil_op_hcompute_conv_stencil_10_261
//	hw_input_stencil_op_hcompute_conv_stencil_10_262
//	hw_input_stencil_op_hcompute_conv_stencil_10_263
//	hw_input_stencil_op_hcompute_conv_stencil_10_264
//	hw_input_stencil_op_hcompute_conv_stencil_10_265
//	hw_input_stencil_op_hcompute_conv_stencil_10_266
//	hw_input_stencil_op_hcompute_conv_stencil_10_267
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_10_260
    // hw_input_stencil_op_hcompute_conv_stencil_10_261
    // hw_input_stencil_op_hcompute_conv_stencil_10_262
    // hw_input_stencil_op_hcompute_conv_stencil_10_263
    // hw_input_stencil_op_hcompute_conv_stencil_10_264
    // hw_input_stencil_op_hcompute_conv_stencil_10_265
    // hw_input_stencil_op_hcompute_conv_stencil_10_266
    // hw_input_stencil_op_hcompute_conv_stencil_10_267

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_260_res = hw_input_stencil_op_hcompute_conv_stencil_10_260_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_260_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_261_res = hw_input_stencil_op_hcompute_conv_stencil_10_261_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_261_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_262_res = hw_input_stencil_op_hcompute_conv_stencil_10_262_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_262_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_263_res = hw_input_stencil_op_hcompute_conv_stencil_10_263_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_263_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_264_res = hw_input_stencil_op_hcompute_conv_stencil_10_264_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_264_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_265_res = hw_input_stencil_op_hcompute_conv_stencil_10_265_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_265_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_266_res = hw_input_stencil_op_hcompute_conv_stencil_10_266_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_266_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_267_res = hw_input_stencil_op_hcompute_conv_stencil_10_267_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_267_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_input_stencil_op_hcompute_conv_stencil_11_242
//	hw_input_stencil_op_hcompute_conv_stencil_11_243
//	hw_input_stencil_op_hcompute_conv_stencil_11_244
//	hw_input_stencil_op_hcompute_conv_stencil_11_245
//	hw_input_stencil_op_hcompute_conv_stencil_11_246
//	hw_input_stencil_op_hcompute_conv_stencil_11_247
//	hw_input_stencil_op_hcompute_conv_stencil_11_248
//	hw_input_stencil_op_hcompute_conv_stencil_11_249
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_11_242
    // hw_input_stencil_op_hcompute_conv_stencil_11_243
    // hw_input_stencil_op_hcompute_conv_stencil_11_244
    // hw_input_stencil_op_hcompute_conv_stencil_11_245
    // hw_input_stencil_op_hcompute_conv_stencil_11_246
    // hw_input_stencil_op_hcompute_conv_stencil_11_247
    // hw_input_stencil_op_hcompute_conv_stencil_11_248
    // hw_input_stencil_op_hcompute_conv_stencil_11_249

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_242_res = hw_input_stencil_op_hcompute_conv_stencil_11_242_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_242_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_243_res = hw_input_stencil_op_hcompute_conv_stencil_11_243_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_243_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_244_res = hw_input_stencil_op_hcompute_conv_stencil_11_244_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_244_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_245_res = hw_input_stencil_op_hcompute_conv_stencil_11_245_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_245_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_246_res = hw_input_stencil_op_hcompute_conv_stencil_11_246_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_246_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_247_res = hw_input_stencil_op_hcompute_conv_stencil_11_247_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_247_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_248_res = hw_input_stencil_op_hcompute_conv_stencil_11_248_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_248_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_249_res = hw_input_stencil_op_hcompute_conv_stencil_11_249_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_249_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_input_stencil_op_hcompute_conv_stencil_12_224
//	hw_input_stencil_op_hcompute_conv_stencil_12_225
//	hw_input_stencil_op_hcompute_conv_stencil_12_226
//	hw_input_stencil_op_hcompute_conv_stencil_12_227
//	hw_input_stencil_op_hcompute_conv_stencil_12_228
//	hw_input_stencil_op_hcompute_conv_stencil_12_229
//	hw_input_stencil_op_hcompute_conv_stencil_12_230
//	hw_input_stencil_op_hcompute_conv_stencil_12_231
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_12_224
    // hw_input_stencil_op_hcompute_conv_stencil_12_225
    // hw_input_stencil_op_hcompute_conv_stencil_12_226
    // hw_input_stencil_op_hcompute_conv_stencil_12_227
    // hw_input_stencil_op_hcompute_conv_stencil_12_228
    // hw_input_stencil_op_hcompute_conv_stencil_12_229
    // hw_input_stencil_op_hcompute_conv_stencil_12_230
    // hw_input_stencil_op_hcompute_conv_stencil_12_231

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_224_res = hw_input_stencil_op_hcompute_conv_stencil_12_224_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_224_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_225_res = hw_input_stencil_op_hcompute_conv_stencil_12_225_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_225_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_226_res = hw_input_stencil_op_hcompute_conv_stencil_12_226_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_226_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_227_res = hw_input_stencil_op_hcompute_conv_stencil_12_227_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_227_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_228_res = hw_input_stencil_op_hcompute_conv_stencil_12_228_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_228_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_229_res = hw_input_stencil_op_hcompute_conv_stencil_12_229_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_229_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_230_res = hw_input_stencil_op_hcompute_conv_stencil_12_230_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_230_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_231_res = hw_input_stencil_op_hcompute_conv_stencil_12_231_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_231_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_input_stencil_op_hcompute_conv_stencil_13_206
//	hw_input_stencil_op_hcompute_conv_stencil_13_207
//	hw_input_stencil_op_hcompute_conv_stencil_13_208
//	hw_input_stencil_op_hcompute_conv_stencil_13_209
//	hw_input_stencil_op_hcompute_conv_stencil_13_210
//	hw_input_stencil_op_hcompute_conv_stencil_13_211
//	hw_input_stencil_op_hcompute_conv_stencil_13_212
//	hw_input_stencil_op_hcompute_conv_stencil_13_213
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_13_206
    // hw_input_stencil_op_hcompute_conv_stencil_13_207
    // hw_input_stencil_op_hcompute_conv_stencil_13_208
    // hw_input_stencil_op_hcompute_conv_stencil_13_209
    // hw_input_stencil_op_hcompute_conv_stencil_13_210
    // hw_input_stencil_op_hcompute_conv_stencil_13_211
    // hw_input_stencil_op_hcompute_conv_stencil_13_212
    // hw_input_stencil_op_hcompute_conv_stencil_13_213

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_206_res = hw_input_stencil_op_hcompute_conv_stencil_13_206_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_206_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_207_res = hw_input_stencil_op_hcompute_conv_stencil_13_207_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_207_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_208_res = hw_input_stencil_op_hcompute_conv_stencil_13_208_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_208_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_209_res = hw_input_stencil_op_hcompute_conv_stencil_13_209_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_209_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_210_res = hw_input_stencil_op_hcompute_conv_stencil_13_210_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_210_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_211_res = hw_input_stencil_op_hcompute_conv_stencil_13_211_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_211_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_212_res = hw_input_stencil_op_hcompute_conv_stencil_13_212_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_212_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_213_res = hw_input_stencil_op_hcompute_conv_stencil_13_213_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_213_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_input_stencil_op_hcompute_conv_stencil_14_188
//	hw_input_stencil_op_hcompute_conv_stencil_14_189
//	hw_input_stencil_op_hcompute_conv_stencil_14_190
//	hw_input_stencil_op_hcompute_conv_stencil_14_191
//	hw_input_stencil_op_hcompute_conv_stencil_14_192
//	hw_input_stencil_op_hcompute_conv_stencil_14_193
//	hw_input_stencil_op_hcompute_conv_stencil_14_194
//	hw_input_stencil_op_hcompute_conv_stencil_14_195
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_14_188
    // hw_input_stencil_op_hcompute_conv_stencil_14_189
    // hw_input_stencil_op_hcompute_conv_stencil_14_190
    // hw_input_stencil_op_hcompute_conv_stencil_14_191
    // hw_input_stencil_op_hcompute_conv_stencil_14_192
    // hw_input_stencil_op_hcompute_conv_stencil_14_193
    // hw_input_stencil_op_hcompute_conv_stencil_14_194
    // hw_input_stencil_op_hcompute_conv_stencil_14_195

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_188_res = hw_input_stencil_op_hcompute_conv_stencil_14_188_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_188_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_189_res = hw_input_stencil_op_hcompute_conv_stencil_14_189_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_189_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_190_res = hw_input_stencil_op_hcompute_conv_stencil_14_190_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_190_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_191_res = hw_input_stencil_op_hcompute_conv_stencil_14_191_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_191_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_192_res = hw_input_stencil_op_hcompute_conv_stencil_14_192_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_192_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_193_res = hw_input_stencil_op_hcompute_conv_stencil_14_193_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_193_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_194_res = hw_input_stencil_op_hcompute_conv_stencil_14_194_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_194_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_195_res = hw_input_stencil_op_hcompute_conv_stencil_14_195_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_195_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_input_stencil_op_hcompute_conv_stencil_15_170
//	hw_input_stencil_op_hcompute_conv_stencil_15_171
//	hw_input_stencil_op_hcompute_conv_stencil_15_172
//	hw_input_stencil_op_hcompute_conv_stencil_15_173
//	hw_input_stencil_op_hcompute_conv_stencil_15_174
//	hw_input_stencil_op_hcompute_conv_stencil_15_175
//	hw_input_stencil_op_hcompute_conv_stencil_15_176
//	hw_input_stencil_op_hcompute_conv_stencil_15_177
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_15_170
    // hw_input_stencil_op_hcompute_conv_stencil_15_171
    // hw_input_stencil_op_hcompute_conv_stencil_15_172
    // hw_input_stencil_op_hcompute_conv_stencil_15_173
    // hw_input_stencil_op_hcompute_conv_stencil_15_174
    // hw_input_stencil_op_hcompute_conv_stencil_15_175
    // hw_input_stencil_op_hcompute_conv_stencil_15_176
    // hw_input_stencil_op_hcompute_conv_stencil_15_177

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_170_res = hw_input_stencil_op_hcompute_conv_stencil_15_170_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_170_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_171_res = hw_input_stencil_op_hcompute_conv_stencil_15_171_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_171_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_172_res = hw_input_stencil_op_hcompute_conv_stencil_15_172_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_172_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_173_res = hw_input_stencil_op_hcompute_conv_stencil_15_173_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_173_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_174_res = hw_input_stencil_op_hcompute_conv_stencil_15_174_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_174_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_175_res = hw_input_stencil_op_hcompute_conv_stencil_15_175_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_175_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_176_res = hw_input_stencil_op_hcompute_conv_stencil_15_176_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_176_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_177_res = hw_input_stencil_op_hcompute_conv_stencil_15_177_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_177_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_input_stencil_op_hcompute_conv_stencil_16_152
//	hw_input_stencil_op_hcompute_conv_stencil_16_153
//	hw_input_stencil_op_hcompute_conv_stencil_16_154
//	hw_input_stencil_op_hcompute_conv_stencil_16_155
//	hw_input_stencil_op_hcompute_conv_stencil_16_156
//	hw_input_stencil_op_hcompute_conv_stencil_16_157
//	hw_input_stencil_op_hcompute_conv_stencil_16_158
//	hw_input_stencil_op_hcompute_conv_stencil_16_159
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_16_152
    // hw_input_stencil_op_hcompute_conv_stencil_16_153
    // hw_input_stencil_op_hcompute_conv_stencil_16_154
    // hw_input_stencil_op_hcompute_conv_stencil_16_155
    // hw_input_stencil_op_hcompute_conv_stencil_16_156
    // hw_input_stencil_op_hcompute_conv_stencil_16_157
    // hw_input_stencil_op_hcompute_conv_stencil_16_158
    // hw_input_stencil_op_hcompute_conv_stencil_16_159

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_152_res = hw_input_stencil_op_hcompute_conv_stencil_16_152_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_152_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_153_res = hw_input_stencil_op_hcompute_conv_stencil_16_153_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_153_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_154_res = hw_input_stencil_op_hcompute_conv_stencil_16_154_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_154_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_155_res = hw_input_stencil_op_hcompute_conv_stencil_16_155_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_155_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_156_res = hw_input_stencil_op_hcompute_conv_stencil_16_156_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_156_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_157_res = hw_input_stencil_op_hcompute_conv_stencil_16_157_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_157_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_158_res = hw_input_stencil_op_hcompute_conv_stencil_16_158_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_158_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_159_res = hw_input_stencil_op_hcompute_conv_stencil_16_159_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_159_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_278
//	hw_input_stencil_op_hcompute_conv_stencil_1_279
//	hw_input_stencil_op_hcompute_conv_stencil_1_280
//	hw_input_stencil_op_hcompute_conv_stencil_1_281
//	hw_input_stencil_op_hcompute_conv_stencil_1_282
//	hw_input_stencil_op_hcompute_conv_stencil_1_283
//	hw_input_stencil_op_hcompute_conv_stencil_1_284
//	hw_input_stencil_op_hcompute_conv_stencil_1_285
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_1_278
    // hw_input_stencil_op_hcompute_conv_stencil_1_279
    // hw_input_stencil_op_hcompute_conv_stencil_1_280
    // hw_input_stencil_op_hcompute_conv_stencil_1_281
    // hw_input_stencil_op_hcompute_conv_stencil_1_282
    // hw_input_stencil_op_hcompute_conv_stencil_1_283
    // hw_input_stencil_op_hcompute_conv_stencil_1_284
    // hw_input_stencil_op_hcompute_conv_stencil_1_285

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_278_res = hw_input_stencil_op_hcompute_conv_stencil_1_278_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_278_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_279_res = hw_input_stencil_op_hcompute_conv_stencil_1_279_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_279_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_280_res = hw_input_stencil_op_hcompute_conv_stencil_1_280_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_280_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_281_res = hw_input_stencil_op_hcompute_conv_stencil_1_281_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_281_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_282_res = hw_input_stencil_op_hcompute_conv_stencil_1_282_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_282_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_283_res = hw_input_stencil_op_hcompute_conv_stencil_1_283_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_283_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_284_res = hw_input_stencil_op_hcompute_conv_stencil_1_284_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_284_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_285_res = hw_input_stencil_op_hcompute_conv_stencil_1_285_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_285_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_input_stencil_op_hcompute_conv_stencil_2_134
//	hw_input_stencil_op_hcompute_conv_stencil_2_135
//	hw_input_stencil_op_hcompute_conv_stencil_2_136
//	hw_input_stencil_op_hcompute_conv_stencil_2_137
//	hw_input_stencil_op_hcompute_conv_stencil_2_138
//	hw_input_stencil_op_hcompute_conv_stencil_2_139
//	hw_input_stencil_op_hcompute_conv_stencil_2_140
//	hw_input_stencil_op_hcompute_conv_stencil_2_141
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_2_134
    // hw_input_stencil_op_hcompute_conv_stencil_2_135
    // hw_input_stencil_op_hcompute_conv_stencil_2_136
    // hw_input_stencil_op_hcompute_conv_stencil_2_137
    // hw_input_stencil_op_hcompute_conv_stencil_2_138
    // hw_input_stencil_op_hcompute_conv_stencil_2_139
    // hw_input_stencil_op_hcompute_conv_stencil_2_140
    // hw_input_stencil_op_hcompute_conv_stencil_2_141

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_134_res = hw_input_stencil_op_hcompute_conv_stencil_2_134_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_134_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_135_res = hw_input_stencil_op_hcompute_conv_stencil_2_135_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_135_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_136_res = hw_input_stencil_op_hcompute_conv_stencil_2_136_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_136_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_137_res = hw_input_stencil_op_hcompute_conv_stencil_2_137_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_137_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_138_res = hw_input_stencil_op_hcompute_conv_stencil_2_138_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_138_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_139_res = hw_input_stencil_op_hcompute_conv_stencil_2_139_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_139_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_140_res = hw_input_stencil_op_hcompute_conv_stencil_2_140_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_140_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_141_res = hw_input_stencil_op_hcompute_conv_stencil_2_141_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_141_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_input_stencil_op_hcompute_conv_stencil_3_116
//	hw_input_stencil_op_hcompute_conv_stencil_3_117
//	hw_input_stencil_op_hcompute_conv_stencil_3_118
//	hw_input_stencil_op_hcompute_conv_stencil_3_119
//	hw_input_stencil_op_hcompute_conv_stencil_3_120
//	hw_input_stencil_op_hcompute_conv_stencil_3_121
//	hw_input_stencil_op_hcompute_conv_stencil_3_122
//	hw_input_stencil_op_hcompute_conv_stencil_3_123
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_3_116
    // hw_input_stencil_op_hcompute_conv_stencil_3_117
    // hw_input_stencil_op_hcompute_conv_stencil_3_118
    // hw_input_stencil_op_hcompute_conv_stencil_3_119
    // hw_input_stencil_op_hcompute_conv_stencil_3_120
    // hw_input_stencil_op_hcompute_conv_stencil_3_121
    // hw_input_stencil_op_hcompute_conv_stencil_3_122
    // hw_input_stencil_op_hcompute_conv_stencil_3_123

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_116_res = hw_input_stencil_op_hcompute_conv_stencil_3_116_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_116_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_117_res = hw_input_stencil_op_hcompute_conv_stencil_3_117_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_117_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_118_res = hw_input_stencil_op_hcompute_conv_stencil_3_118_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_118_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_119_res = hw_input_stencil_op_hcompute_conv_stencil_3_119_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_119_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_120_res = hw_input_stencil_op_hcompute_conv_stencil_3_120_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_120_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_121_res = hw_input_stencil_op_hcompute_conv_stencil_3_121_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_121_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_122_res = hw_input_stencil_op_hcompute_conv_stencil_3_122_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_122_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_123_res = hw_input_stencil_op_hcompute_conv_stencil_3_123_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_123_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_stencil_op_hcompute_conv_stencil_4_98
//	hw_input_stencil_op_hcompute_conv_stencil_4_99
//	hw_input_stencil_op_hcompute_conv_stencil_4_100
//	hw_input_stencil_op_hcompute_conv_stencil_4_101
//	hw_input_stencil_op_hcompute_conv_stencil_4_102
//	hw_input_stencil_op_hcompute_conv_stencil_4_103
//	hw_input_stencil_op_hcompute_conv_stencil_4_104
//	hw_input_stencil_op_hcompute_conv_stencil_4_105
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_4_98
    // hw_input_stencil_op_hcompute_conv_stencil_4_99
    // hw_input_stencil_op_hcompute_conv_stencil_4_100
    // hw_input_stencil_op_hcompute_conv_stencil_4_101
    // hw_input_stencil_op_hcompute_conv_stencil_4_102
    // hw_input_stencil_op_hcompute_conv_stencil_4_103
    // hw_input_stencil_op_hcompute_conv_stencil_4_104
    // hw_input_stencil_op_hcompute_conv_stencil_4_105

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_98_res = hw_input_stencil_op_hcompute_conv_stencil_4_98_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_98_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_99_res = hw_input_stencil_op_hcompute_conv_stencil_4_99_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_99_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_100_res = hw_input_stencil_op_hcompute_conv_stencil_4_100_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_100_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_101_res = hw_input_stencil_op_hcompute_conv_stencil_4_101_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_101_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_102_res = hw_input_stencil_op_hcompute_conv_stencil_4_102_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_102_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_103_res = hw_input_stencil_op_hcompute_conv_stencil_4_103_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_103_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_104_res = hw_input_stencil_op_hcompute_conv_stencil_4_104_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_104_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_105_res = hw_input_stencil_op_hcompute_conv_stencil_4_105_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_105_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_stencil_op_hcompute_conv_stencil_5_80
//	hw_input_stencil_op_hcompute_conv_stencil_5_81
//	hw_input_stencil_op_hcompute_conv_stencil_5_82
//	hw_input_stencil_op_hcompute_conv_stencil_5_83
//	hw_input_stencil_op_hcompute_conv_stencil_5_84
//	hw_input_stencil_op_hcompute_conv_stencil_5_85
//	hw_input_stencil_op_hcompute_conv_stencil_5_86
//	hw_input_stencil_op_hcompute_conv_stencil_5_87
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_5_80
    // hw_input_stencil_op_hcompute_conv_stencil_5_81
    // hw_input_stencil_op_hcompute_conv_stencil_5_82
    // hw_input_stencil_op_hcompute_conv_stencil_5_83
    // hw_input_stencil_op_hcompute_conv_stencil_5_84
    // hw_input_stencil_op_hcompute_conv_stencil_5_85
    // hw_input_stencil_op_hcompute_conv_stencil_5_86
    // hw_input_stencil_op_hcompute_conv_stencil_5_87

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_80_res = hw_input_stencil_op_hcompute_conv_stencil_5_80_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_80_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_81_res = hw_input_stencil_op_hcompute_conv_stencil_5_81_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_81_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_82_res = hw_input_stencil_op_hcompute_conv_stencil_5_82_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_82_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_83_res = hw_input_stencil_op_hcompute_conv_stencil_5_83_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_83_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_84_res = hw_input_stencil_op_hcompute_conv_stencil_5_84_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_84_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_85_res = hw_input_stencil_op_hcompute_conv_stencil_5_85_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_85_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_86_res = hw_input_stencil_op_hcompute_conv_stencil_5_86_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_86_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_87_res = hw_input_stencil_op_hcompute_conv_stencil_5_87_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_87_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_input_stencil_op_hcompute_conv_stencil_6_62
//	hw_input_stencil_op_hcompute_conv_stencil_6_63
//	hw_input_stencil_op_hcompute_conv_stencil_6_64
//	hw_input_stencil_op_hcompute_conv_stencil_6_65
//	hw_input_stencil_op_hcompute_conv_stencil_6_66
//	hw_input_stencil_op_hcompute_conv_stencil_6_67
//	hw_input_stencil_op_hcompute_conv_stencil_6_68
//	hw_input_stencil_op_hcompute_conv_stencil_6_69
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_6_62
    // hw_input_stencil_op_hcompute_conv_stencil_6_63
    // hw_input_stencil_op_hcompute_conv_stencil_6_64
    // hw_input_stencil_op_hcompute_conv_stencil_6_65
    // hw_input_stencil_op_hcompute_conv_stencil_6_66
    // hw_input_stencil_op_hcompute_conv_stencil_6_67
    // hw_input_stencil_op_hcompute_conv_stencil_6_68
    // hw_input_stencil_op_hcompute_conv_stencil_6_69

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_62_res = hw_input_stencil_op_hcompute_conv_stencil_6_62_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_62_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_63_res = hw_input_stencil_op_hcompute_conv_stencil_6_63_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_63_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_64_res = hw_input_stencil_op_hcompute_conv_stencil_6_64_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_64_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_65_res = hw_input_stencil_op_hcompute_conv_stencil_6_65_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_65_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_66_res = hw_input_stencil_op_hcompute_conv_stencil_6_66_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_66_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_67_res = hw_input_stencil_op_hcompute_conv_stencil_6_67_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_67_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_68_res = hw_input_stencil_op_hcompute_conv_stencil_6_68_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_68_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_69_res = hw_input_stencil_op_hcompute_conv_stencil_6_69_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_69_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_input_stencil_op_hcompute_conv_stencil_7_44
//	hw_input_stencil_op_hcompute_conv_stencil_7_45
//	hw_input_stencil_op_hcompute_conv_stencil_7_46
//	hw_input_stencil_op_hcompute_conv_stencil_7_47
//	hw_input_stencil_op_hcompute_conv_stencil_7_48
//	hw_input_stencil_op_hcompute_conv_stencil_7_49
//	hw_input_stencil_op_hcompute_conv_stencil_7_50
//	hw_input_stencil_op_hcompute_conv_stencil_7_51
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_7_44
    // hw_input_stencil_op_hcompute_conv_stencil_7_45
    // hw_input_stencil_op_hcompute_conv_stencil_7_46
    // hw_input_stencil_op_hcompute_conv_stencil_7_47
    // hw_input_stencil_op_hcompute_conv_stencil_7_48
    // hw_input_stencil_op_hcompute_conv_stencil_7_49
    // hw_input_stencil_op_hcompute_conv_stencil_7_50
    // hw_input_stencil_op_hcompute_conv_stencil_7_51

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_44_res = hw_input_stencil_op_hcompute_conv_stencil_7_44_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_44_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_45_res = hw_input_stencil_op_hcompute_conv_stencil_7_45_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_45_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_46_res = hw_input_stencil_op_hcompute_conv_stencil_7_46_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_46_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_47_res = hw_input_stencil_op_hcompute_conv_stencil_7_47_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_47_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_48_res = hw_input_stencil_op_hcompute_conv_stencil_7_48_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_48_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_49_res = hw_input_stencil_op_hcompute_conv_stencil_7_49_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_49_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_50_res = hw_input_stencil_op_hcompute_conv_stencil_7_50_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_50_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_51_res = hw_input_stencil_op_hcompute_conv_stencil_7_51_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_51_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_stencil_op_hcompute_conv_stencil_8_26
//	hw_input_stencil_op_hcompute_conv_stencil_8_27
//	hw_input_stencil_op_hcompute_conv_stencil_8_28
//	hw_input_stencil_op_hcompute_conv_stencil_8_29
//	hw_input_stencil_op_hcompute_conv_stencil_8_30
//	hw_input_stencil_op_hcompute_conv_stencil_8_31
//	hw_input_stencil_op_hcompute_conv_stencil_8_32
//	hw_input_stencil_op_hcompute_conv_stencil_8_33
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_8_26
    // hw_input_stencil_op_hcompute_conv_stencil_8_27
    // hw_input_stencil_op_hcompute_conv_stencil_8_28
    // hw_input_stencil_op_hcompute_conv_stencil_8_29
    // hw_input_stencil_op_hcompute_conv_stencil_8_30
    // hw_input_stencil_op_hcompute_conv_stencil_8_31
    // hw_input_stencil_op_hcompute_conv_stencil_8_32
    // hw_input_stencil_op_hcompute_conv_stencil_8_33

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_26_res = hw_input_stencil_op_hcompute_conv_stencil_8_26_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_26_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_27_res = hw_input_stencil_op_hcompute_conv_stencil_8_27_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_27_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_28_res = hw_input_stencil_op_hcompute_conv_stencil_8_28_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_28_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_29_res = hw_input_stencil_op_hcompute_conv_stencil_8_29_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_29_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_30_res = hw_input_stencil_op_hcompute_conv_stencil_8_30_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_30_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_31_res = hw_input_stencil_op_hcompute_conv_stencil_8_31_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_31_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_32_res = hw_input_stencil_op_hcompute_conv_stencil_8_32_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_32_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_33_res = hw_input_stencil_op_hcompute_conv_stencil_8_33_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_33_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_stencil_op_hcompute_conv_stencil_9_8
//	hw_input_stencil_op_hcompute_conv_stencil_9_9
//	hw_input_stencil_op_hcompute_conv_stencil_9_10
//	hw_input_stencil_op_hcompute_conv_stencil_9_11
//	hw_input_stencil_op_hcompute_conv_stencil_9_12
//	hw_input_stencil_op_hcompute_conv_stencil_9_13
//	hw_input_stencil_op_hcompute_conv_stencil_9_14
//	hw_input_stencil_op_hcompute_conv_stencil_9_15
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_9_8
    // hw_input_stencil_op_hcompute_conv_stencil_9_9
    // hw_input_stencil_op_hcompute_conv_stencil_9_10
    // hw_input_stencil_op_hcompute_conv_stencil_9_11
    // hw_input_stencil_op_hcompute_conv_stencil_9_12
    // hw_input_stencil_op_hcompute_conv_stencil_9_13
    // hw_input_stencil_op_hcompute_conv_stencil_9_14
    // hw_input_stencil_op_hcompute_conv_stencil_9_15

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_8_res = hw_input_stencil_op_hcompute_conv_stencil_9_8_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_8_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_9_res = hw_input_stencil_op_hcompute_conv_stencil_9_9_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_9_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_10_res = hw_input_stencil_op_hcompute_conv_stencil_9_10_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_10_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_11_res = hw_input_stencil_op_hcompute_conv_stencil_9_11_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_11_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_12_res = hw_input_stencil_op_hcompute_conv_stencil_9_12_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_12_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_13_res = hw_input_stencil_op_hcompute_conv_stencil_9_13_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_13_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_14_res = hw_input_stencil_op_hcompute_conv_stencil_9_14_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_14_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_15_res = hw_input_stencil_op_hcompute_conv_stencil_9_15_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_15_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_4
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_4_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_4_write(hw_input_stencil_op_hcompute_hw_input_stencil_4_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, dynamic_address);
}

#include "hw_classes.h"

struct hw_kernel_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 7], [0, 15], [0, 2], [0, 2]}
  hw_uint<16> RAM[8][16][3][3];
  inline hw_uint<16> read(int d0, int d1, int d2, int d3) {
    return RAM[d0][d1][d2][d3];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2, int d3) {
    RAM[d0][d1][d2][d3] = value;
  }

};

struct hw_kernel_stencil_cache {
  // # of banks: 1
  hw_kernel_stencil_all_inputs_to_all_outputs_cache hw_kernel_stencil_all_inputs_to_all_outputs;
};



inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_write(hw_uint<16>& hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
  hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, hw_kernel_s0_z - 0, hw_kernel_s0_w - 0, hw_kernel_s0_x - 0, hw_kernel_s0_y - 0);
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_268_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_268 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_269_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_269 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_270_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_270 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_271_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_271 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_272_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_272 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_273_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_273 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_274_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_274 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_275_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_275 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_250_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_250 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_251_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_251 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_252_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_252 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_253_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_253 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_254_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_254 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_255_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_255 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_256_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_256 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_257_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_257 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_232_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_232 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_233_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_233 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_234_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_234 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_235_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_235 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_236_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_236 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_237_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_237 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_238_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_238 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_239_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_239 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_214_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_214 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_215_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_215 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_216_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_216 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_217_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_217 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_218_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_218 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_219_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_219 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_220_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_220 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_221_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_221 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_196_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_196 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_197_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_197 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_198_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_198 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_199_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_199 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_200_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_200 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_201_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_201 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_202_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_202 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_203_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_203 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_178_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_178 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_179_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_179 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_180_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_180 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_181_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_181 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_182_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_182 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_183_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_183 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_184_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_184 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_185_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_185 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_160_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_160 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_161_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_161 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_162_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_162 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_163_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_163 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_164_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_164 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_165_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_165 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_166_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_166 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_167_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_167 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_286_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_286 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_287_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_287 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_288_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_288 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_289_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_289 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_290_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_290 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_291_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_291 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_292_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_292 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_293_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_293 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_142_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_142 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_143_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_143 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_144_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_144 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_145_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_145 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_146_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_146 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_147_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_147 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_148_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_148 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_149_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_149 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_124_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_124 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_125_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_125 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_126_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_126 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_127_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_127 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_128_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_128 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_129_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_129 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_130_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_130 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_131_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_131 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_106_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_106 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_107_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_107 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_108_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_108 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_109_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_109 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_110_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_110 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_111_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_111 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_112_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_112 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_113_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_113 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_88_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_88 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_89_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_89 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_90_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_90 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_91_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_91 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_92_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_92 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_93_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_93 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_94_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_94 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_95_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_95 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_70_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_70 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_71_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_71 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_72_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_72 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_73_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_73 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_74_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_74 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_75_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_75 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_76_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_76 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_77_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_77 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_52_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_52 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_53_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_53 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_54_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_54 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_55_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_55 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_56_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_56 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_57_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_57 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_58_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_58 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_59_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_59 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_34_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_34 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_35_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_35 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_36_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_36 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_37_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_37 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_38_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_38 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_39_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_39 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_40_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_40 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_41_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_41 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_16_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_16 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[0, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_17_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_17 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[1, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_18_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_18 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[2, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_19_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_19 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[3, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_20_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_20 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[4, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_21_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_21 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[5, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_22_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_22 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[6, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_23_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_23 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_stencil[7, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_268
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_269
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_270
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_271
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_272
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_273
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_274
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_275
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_268
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_269
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_270
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_271
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_272
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_273
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_274
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_275

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_268_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_268_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_268_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_269_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_269_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_269_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_270_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_270_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_270_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_271_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_271_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_271_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_272_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_272_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_272_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_273_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_273_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_273_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_274_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_274_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_274_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_275_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_275_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_275_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_250
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_251
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_252
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_253
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_254
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_255
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_256
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_257
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_250
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_251
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_252
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_253
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_254
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_255
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_256
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_257

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_250_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_250_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_250_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_251_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_251_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_251_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_252_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_252_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_252_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_253_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_253_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_253_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_254_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_254_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_254_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_255_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_255_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_255_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_256_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_256_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_256_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_257_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_257_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_257_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_232
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_233
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_234
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_235
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_236
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_237
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_238
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_239
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_232
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_233
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_234
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_235
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_236
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_237
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_238
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_239

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_232_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_232_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_232_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_233_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_233_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_233_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_234_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_234_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_234_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_235_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_235_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_235_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_236_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_236_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_236_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_237_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_237_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_237_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_238_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_238_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_238_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_239_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_239_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_239_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_214
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_215
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_216
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_217
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_218
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_219
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_220
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_221
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_214
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_215
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_216
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_217
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_218
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_219
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_220
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_221

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_214_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_214_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_214_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_215_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_215_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_215_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_216_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_216_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_216_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_217_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_217_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_217_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_218_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_218_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_218_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_219_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_219_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_219_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_220_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_220_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_220_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_221_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_221_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_221_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_196
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_197
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_198
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_199
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_200
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_201
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_202
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_203
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_196
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_197
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_198
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_199
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_200
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_201
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_202
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_203

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_196_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_196_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_196_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_197_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_197_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_197_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_198_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_198_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_198_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_199_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_199_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_199_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_200_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_200_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_200_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_201_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_201_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_201_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_202_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_202_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_202_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_203_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_203_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_203_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_178
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_179
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_180
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_181
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_182
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_183
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_184
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_185
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_178
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_179
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_180
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_181
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_182
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_183
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_184
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_185

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_178_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_178_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_178_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_179_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_179_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_179_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_180_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_180_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_180_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_181_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_181_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_181_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_182_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_182_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_182_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_183_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_183_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_183_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_184_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_184_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_184_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_185_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_185_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_185_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_160
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_161
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_162
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_163
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_164
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_165
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_166
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_167
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_160
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_161
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_162
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_163
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_164
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_165
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_166
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_167

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_160_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_160_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_160_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_161_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_161_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_161_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_162_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_162_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_162_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_163_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_163_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_163_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_164_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_164_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_164_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_165_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_165_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_165_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_166_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_166_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_166_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_167_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_167_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_167_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_286
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_287
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_288
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_289
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_290
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_291
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_292
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_293
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_286
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_287
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_288
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_289
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_290
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_291
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_292
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_293

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_286_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_286_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_286_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_287_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_287_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_287_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_288_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_288_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_288_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_289_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_289_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_289_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_290_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_290_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_290_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_291_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_291_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_291_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_292_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_292_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_292_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_293_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_293_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_293_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_142
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_143
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_144
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_145
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_146
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_147
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_148
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_149
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_142
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_143
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_144
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_145
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_146
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_147
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_148
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_149

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_142_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_142_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_142_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_143_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_143_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_143_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_144_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_144_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_144_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_145_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_145_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_145_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_146_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_146_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_146_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_147_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_147_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_147_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_148_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_148_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_148_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_149_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_149_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_149_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_124
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_125
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_126
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_127
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_128
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_129
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_130
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_131
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_124
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_125
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_126
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_127
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_128
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_129
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_130
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_131

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_124_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_124_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_124_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_125_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_125_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_125_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_126_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_126_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_126_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_127_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_127_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_127_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_128_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_128_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_128_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_129_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_129_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_129_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_130_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_130_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_130_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_131_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_131_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_131_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_106
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_107
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_108
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_109
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_110
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_111
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_112
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_113
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_106
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_107
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_108
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_109
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_110
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_111
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_112
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_113

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_106_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_106_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_106_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_107_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_107_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_107_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_108_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_108_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_108_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_109_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_109_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_109_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_110_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_110_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_110_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_111_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_111_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_111_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_112_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_112_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_112_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_113_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_113_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_113_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_88
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_89
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_90
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_91
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_92
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_93
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_94
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_95
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_88
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_89
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_90
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_91
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_92
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_93
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_94
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_95

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_88_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_88_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_88_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_89_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_89_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_89_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_90_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_90_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_90_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_91_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_91_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_91_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_92_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_92_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_92_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_93_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_93_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_93_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_94_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_94_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_94_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_95_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_95_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_95_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_70
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_71
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_72
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_73
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_74
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_75
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_76
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_77
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_70
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_71
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_72
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_73
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_74
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_75
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_76
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_77

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_70_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_70_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_70_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_71_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_71_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_71_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_72_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_72_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_72_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_73_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_73_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_73_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_74_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_74_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_74_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_75_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_75_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_75_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_76_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_76_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_76_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_77_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_77_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_77_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_52
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_53
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_54
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_55
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_56
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_57
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_58
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_59
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_52
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_53
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_54
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_55
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_56
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_57
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_58
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_59

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_52_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_52_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_52_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_53_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_53_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_53_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_54_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_54_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_54_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_55_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_55_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_55_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_56_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_56_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_56_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_57_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_57_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_57_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_58_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_58_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_58_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_59_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_59_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_59_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_34
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_35
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_36
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_37
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_38
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_39
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_40
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_41
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_34
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_35
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_36
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_37
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_38
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_39
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_40
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_41

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_34_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_34_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_34_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_35_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_35_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_35_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_36_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_36_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_36_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_37_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_37_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_37_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_38_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_38_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_38_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_39_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_39_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_39_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_40_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_40_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_40_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_41_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_41_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_41_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_16
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_17
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_18
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_19
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_20
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_21
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_22
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_23
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_16
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_17
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_18
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_19
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_20
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_21
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_22
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_23

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_16_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_16_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_16_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_17_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_17_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_17_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_18_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_18_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_18_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_19_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_19_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_19_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_20_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_20_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_20_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_21_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_21_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_21_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_22_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_22_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_22_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_23_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_23_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_23_res);
	return result;
}

// op_hcompute_hw_kernel_stencil_write
//	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2
inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_stencil_write, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res = op_hcompute_hw_kernel_stencil_write.extract<0, 15>();
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, dynamic_address);
}

// Total re-use buffer capacity: 334336 bits


// Operation logic
inline void op_hcompute_hw_input_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_copy_stencil, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z) {
  // Dynamic address computation

	// Consume: input_copy_stencil
	auto input_copy_stencil_hw_input_s0_z_c__hw_input_s0_x_c__hw_input_s0_y_value = input_copy_stencil.read();
	auto compute_result = hcompute_hw_input_stencil(input_copy_stencil_hw_input_s0_z_c__hw_input_s0_x_c__hw_input_s0_y_value);
	// Produce: hw_input_stencil
	hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(/* arg names */compute_result, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_kernel_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */kernel_copy_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z) {
  // Dynamic address computation

	// Consume: kernel_copy_stencil
	auto kernel_copy_stencil_hw_kernel_s0_z_c__hw_kernel_s0_w_c__hw_kernel_s0_x_c__hw_kernel_s0_y_value = kernel_copy_stencil.read();
	auto compute_result = hcompute_hw_kernel_stencil(kernel_copy_stencil_hw_kernel_s0_z_c__hw_kernel_s0_w_c__hw_kernel_s0_x_c__hw_kernel_s0_y_value);
	// Produce: hw_kernel_stencil
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(/* arg names */compute_result, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, 0);

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

inline void op_hcompute_conv_stencil_1(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__0_value = conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__0_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_1(conv_stencil_conv_s1_x_c__conv_s1_y_c__0_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__0_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_2(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__1_value = conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_1_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_1_c__1_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_2(conv_stencil_conv_s1_x_c__conv_s1_y_c__1_value, hw_input_stencil_1_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_1_c__1_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_3(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__2_value = conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__2_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_3(conv_stencil_conv_s1_x_c__conv_s1_y_c__2_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__2_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_4(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__3_value = conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__3_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_4(conv_stencil_conv_s1_x_c__conv_s1_y_c__3_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__3_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_5(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__4_value = conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__4_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_5(conv_stencil_conv_s1_x_c__conv_s1_y_c__4_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__4_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_6(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__5_value = conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__5_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_6(conv_stencil_conv_s1_x_c__conv_s1_y_c__5_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__5_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_7(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__6_value = conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__6_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_7(conv_stencil_conv_s1_x_c__conv_s1_y_c__6_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__6_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_8(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__7_value = conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__7_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_8(conv_stencil_conv_s1_x_c__conv_s1_y_c__7_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__7_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_9(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__8_value = conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__8_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_9(conv_stencil_conv_s1_x_c__conv_s1_y_c__8_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__8_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_10(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__9_value = conv_stencil_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__9_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_10(conv_stencil_conv_s1_x_c__conv_s1_y_c__9_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__9_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_10_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_11(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__10_value = conv_stencil_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__10_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_11(conv_stencil_conv_s1_x_c__conv_s1_y_c__10_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__10_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_11_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_12(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__11_value = conv_stencil_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__11_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_12(conv_stencil_conv_s1_x_c__conv_s1_y_c__11_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__11_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_12_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_13(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__12_value = conv_stencil_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_3_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_3_c__12_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_13(conv_stencil_conv_s1_x_c__conv_s1_y_c__12_value, hw_input_stencil_3_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_3_c__12_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_13_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_14(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__13_value = conv_stencil_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__13_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_14(conv_stencil_conv_s1_x_c__conv_s1_y_c__13_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__13_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_14_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_15(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__14_value = conv_stencil_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__14_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_15(conv_stencil_conv_s1_x_c__conv_s1_y_c__14_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__14_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_15_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_16(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__15_value = conv_stencil_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__15_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_16(conv_stencil_conv_s1_x_c__conv_s1_y_c__15_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__15_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_16_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_c__hw_output_s0_w_value = conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_c__hw_output_s0_w_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_resnet(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */kernel_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_resnet_debug.csv");
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

// schedule: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 12] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 13] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 9] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 2, conv_s0_y, 0, conv_s0_x, 0, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15; op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 8] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 14] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7; op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 10] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 11] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 15] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
//   { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_1(((i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_13[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 12] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_13(((-12 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_14[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 13] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_14(((-13 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_10[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 9] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_10(((-9 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_2[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_2(((-1 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 2, conv_s0_y, 0, conv_s0_x, 0, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
// Condition for op_hcompute_conv_stencil(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (15 - i7 >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_3(((-2 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-4 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (15 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0)))
//   { op_hcompute_conv_stencil_8[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_8(((-7 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_4(((-3 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_7(((-6 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_9[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 8] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_9(((-8 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_15[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 14] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_15(((-14 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7 }
// Condition for op_hcompute_hw_kernel_stencil(((i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (15 - i7 >= 0) && (i9 >= 0) && (7 - i9 >= 0)))
//   { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
// Condition for op_hcompute_hw_input_stencil(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (29 - i3 >= 0) && (i5 >= 0) && (29 - i5 >= 0) && (i7 >= 0) && (7 - i7 >= 0)))
//   { op_hcompute_conv_stencil_11[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 10] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_11(((-10 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_12[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 11] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_12(((-11 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_5(((-4 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_6[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_6(((-5 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))
//   { op_hcompute_conv_stencil_16[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 15] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_16(((-15 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0)))

  /*
{
  for (int c3 = 0; c3 <= 29; c3 += 1)
    for (int c5 = 0; c5 <= 29; c5 += 1)
      for (int c7 = 0; c7 <= 7; c7 += 1)
        op_hcompute_hw_input_stencil(0, c3, c5, c7);
  for (int c3 = 0; c3 <= 2; c3 += 1)
    for (int c5 = 0; c5 <= 2; c5 += 1)
      for (int c7 = 0; c7 <= 15; c7 += 1)
        for (int c9 = 0; c9 <= 7; c9 += 1)
          op_hcompute_hw_kernel_stencil(0, c3, c5, c7, c9);
  for (int c3 = 0; c3 <= 27; c3 += 1)
    for (int c5 = 0; c5 <= 27; c5 += 1)
      for (int c7 = 0; c7 <= 15; c7 += 1)
        op_hcompute_conv_stencil(0, c3, c5, c7);
  for (int c3 = 0; c3 <= 2; c3 += 1)
    for (int c5 = 0; c5 <= 2; c5 += 1)
      for (int c7 = 0; c7 <= 27; c7 += 1)
        for (int c9 = 0; c9 <= 27; c9 += 1) {
          op_hcompute_conv_stencil_1(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_2(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_3(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_4(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_5(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_6(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_7(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_8(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_9(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_10(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_11(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_12(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_13(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_14(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_15(0, c3, c5, c7, c9);
          op_hcompute_conv_stencil_16(0, c3, c5, c7, c9);
        }
  for (int c3 = 0; c3 <= 15; c3 += 1)
    for (int c5 = 0; c5 <= 27; c5 += 1)
      for (int c7 = 0; c7 <= 27; c7 += 1)
        op_hcompute_hw_output_stencil(0, c3, c5, c7);
}

  */
	{
	  for (int c3 = 0; c3 <= 29; c3 += 1)
	    for (int c5 = 0; c5 <= 29; c5 += 1)
	      for (int c7 = 0; c7 <= 7; c7 += 1)
	        op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c3, c5, c7);
	  for (int c3 = 0; c3 <= 2; c3 += 1)
	    for (int c5 = 0; c5 <= 2; c5 += 1)
	      for (int c7 = 0; c7 <= 15; c7 += 1)
	        for (int c9 = 0; c9 <= 7; c9 += 1)
	          op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, c3, c5, c7, c9);
	  for (int c3 = 0; c3 <= 27; c3 += 1)
	    for (int c5 = 0; c5 <= 27; c5 += 1)
	      for (int c7 = 0; c7 <= 15; c7 += 1)
	        op_hcompute_conv_stencil(conv_stencil, 0, c3, c5, c7);
	  for (int c3 = 0; c3 <= 2; c3 += 1)
	    for (int c5 = 0; c5 <= 2; c5 += 1)
	      for (int c7 = 0; c7 <= 27; c7 += 1)
	        for (int c9 = 0; c9 <= 27; c9 += 1) {
	          op_hcompute_conv_stencil_1(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_2(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_6(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_7(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_8(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_9(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_10(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_11(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_12(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_13(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_14(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_15(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_16(conv_stencil /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	        }
	  for (int c3 = 0; c3 <= 15; c3 += 1)
	    for (int c5 = 0; c5 <= 27; c5 += 1)
	      for (int c7 = 0; c7 <= 27; c7 += 1)
	        op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, c3, c5, c7);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_resnet_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */kernel_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_resnet(input_copy_stencil, kernel_copy_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 12544;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> input_copy_stencil[hw_input_s0_z, hw_input_s0_x, hw_input_s0_y] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
const int op_hcompute_hw_input_stencil_read_pipe0_num_transfers = 7200;
  // { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> kernel_copy_stencil[hw_kernel_s0_z, hw_kernel_s0_w, hw_kernel_s0_x, hw_kernel_s0_y] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7 }
const int op_hcompute_hw_kernel_stencil_read_pipe0_num_transfers = 1152;


extern "C" {

void unoptimized_resnet_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_kernel_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
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

  unoptimized_resnet_wrapper(op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_kernel_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_resnet_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_kernel_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_kernel_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_resnet(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_kernel_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

