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
	// Capacity: 12544
  hw_uint<16> RAM[12544];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }

#endif //__VIVADO_SYNTH__


	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct conv_stencil_cache {
  conv_stencil_all_inputs_to_all_outputs_cache conv_stencil_all_inputs_to_all_outputs;
};



inline void conv_stencil_op_hcompute_conv_stencil_10_126_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_10_126, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_10_126, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_11_144_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_11_144, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_11_144, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_12_162_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_12_162, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_12_162, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_13_180_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_13_180, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_13_180, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_14_198_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_14_198, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_14_198, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_15_216_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_15_216, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_15_216, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_16_234_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_16_234, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_16_234, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_1_277_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_277, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_1_277, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_258_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_258, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_258, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_259_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2_259, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_2_259, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_3_0_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_3_0, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_3_0, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_18_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4_18, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_4_18, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_5_36_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_5_36, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_5_36, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_6_54_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_6_54, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_6_54, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_7_72_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_7_72, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_7_72, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_8_90_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_8_90, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_8_90, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 0) * 784);
}

inline void conv_stencil_op_hcompute_conv_stencil_9_108_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_9_108, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_9_108, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 0) * 784);
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_127_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_10_127 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_145_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_11_145 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 10] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_163_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_12_163 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 11] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_181_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_13_181 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 12] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_199_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_14_199 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 13] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_217_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_15_217 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 14] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_235_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_16_235 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 15] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_278_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_1_278 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_260_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_2_260 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_1_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_3_1 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_19_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_4_19 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_37_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_5_37 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_55_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_6_55 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_73_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_7_73 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_91_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_8_91 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_109_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_9_109 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_253_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_253 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_10_126 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_10_126;
  return 0;
}

// # of bundles = 34
// op_hcompute_conv_stencil_10_read
//	conv_stencil_op_hcompute_conv_stencil_10_127
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_10_127

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_127_res = conv_stencil_op_hcompute_conv_stencil_10_127_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_10_127_res);
	return result;
}

// op_hcompute_conv_stencil_10_write
//	conv_stencil_op_hcompute_conv_stencil_10_126
inline void conv_stencil_op_hcompute_conv_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_10_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_126_res = op_hcompute_conv_stencil_10_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_10_126_write(conv_stencil_op_hcompute_conv_stencil_10_126_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_11_read
//	conv_stencil_op_hcompute_conv_stencil_11_145
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_11_145

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_145_res = conv_stencil_op_hcompute_conv_stencil_11_145_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_11_145_res);
	return result;
}

// op_hcompute_conv_stencil_11_write
//	conv_stencil_op_hcompute_conv_stencil_11_144
inline void conv_stencil_op_hcompute_conv_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_11_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_144_res = op_hcompute_conv_stencil_11_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_11_144_write(conv_stencil_op_hcompute_conv_stencil_11_144_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_12_read
//	conv_stencil_op_hcompute_conv_stencil_12_163
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_12_163

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_163_res = conv_stencil_op_hcompute_conv_stencil_12_163_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_12_163_res);
	return result;
}

// op_hcompute_conv_stencil_12_write
//	conv_stencil_op_hcompute_conv_stencil_12_162
inline void conv_stencil_op_hcompute_conv_stencil_12_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_12_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_162_res = op_hcompute_conv_stencil_12_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_12_162_write(conv_stencil_op_hcompute_conv_stencil_12_162_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_13_read
//	conv_stencil_op_hcompute_conv_stencil_13_181
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_13_181

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_181_res = conv_stencil_op_hcompute_conv_stencil_13_181_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_13_181_res);
	return result;
}

// op_hcompute_conv_stencil_13_write
//	conv_stencil_op_hcompute_conv_stencil_13_180
inline void conv_stencil_op_hcompute_conv_stencil_13_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_13_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_180_res = op_hcompute_conv_stencil_13_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_13_180_write(conv_stencil_op_hcompute_conv_stencil_13_180_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_14_read
//	conv_stencil_op_hcompute_conv_stencil_14_199
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_14_199

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_199_res = conv_stencil_op_hcompute_conv_stencil_14_199_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_14_199_res);
	return result;
}

// op_hcompute_conv_stencil_14_write
//	conv_stencil_op_hcompute_conv_stencil_14_198
inline void conv_stencil_op_hcompute_conv_stencil_14_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_14_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_198_res = op_hcompute_conv_stencil_14_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_14_198_write(conv_stencil_op_hcompute_conv_stencil_14_198_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_15_read
//	conv_stencil_op_hcompute_conv_stencil_15_217
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_15_217

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_217_res = conv_stencil_op_hcompute_conv_stencil_15_217_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_15_217_res);
	return result;
}

// op_hcompute_conv_stencil_15_write
//	conv_stencil_op_hcompute_conv_stencil_15_216
inline void conv_stencil_op_hcompute_conv_stencil_15_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_15_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_216_res = op_hcompute_conv_stencil_15_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_15_216_write(conv_stencil_op_hcompute_conv_stencil_15_216_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_16_read
//	conv_stencil_op_hcompute_conv_stencil_16_235
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_16_235

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_235_res = conv_stencil_op_hcompute_conv_stencil_16_235_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_16_235_res);
	return result;
}

// op_hcompute_conv_stencil_16_write
//	conv_stencil_op_hcompute_conv_stencil_16_234
inline void conv_stencil_op_hcompute_conv_stencil_16_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_16_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_234_res = op_hcompute_conv_stencil_16_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_16_234_write(conv_stencil_op_hcompute_conv_stencil_16_234_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_1_read
//	conv_stencil_op_hcompute_conv_stencil_1_278
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_1_278

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_278_res = conv_stencil_op_hcompute_conv_stencil_1_278_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_1_278_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_277
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_277_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_277_write(conv_stencil_op_hcompute_conv_stencil_1_277_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_op_hcompute_conv_stencil_2_260
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_2_260

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_260_res = conv_stencil_op_hcompute_conv_stencil_2_260_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_2_260_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_op_hcompute_conv_stencil_2_259
inline void conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_2_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_259_res = op_hcompute_conv_stencil_2_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_259_write(conv_stencil_op_hcompute_conv_stencil_2_259_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_op_hcompute_conv_stencil_3_1
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_3_1

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_1_res = conv_stencil_op_hcompute_conv_stencil_3_1_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_3_1_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_op_hcompute_conv_stencil_3_0
inline void conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_3_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_0_res = op_hcompute_conv_stencil_3_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_3_0_write(conv_stencil_op_hcompute_conv_stencil_3_0_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_op_hcompute_conv_stencil_4_19
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_4_19

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_19_res = conv_stencil_op_hcompute_conv_stencil_4_19_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_4_19_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_op_hcompute_conv_stencil_4_18
inline void conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_4_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_18_res = op_hcompute_conv_stencil_4_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_18_write(conv_stencil_op_hcompute_conv_stencil_4_18_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_op_hcompute_conv_stencil_5_37
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_5_37

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_37_res = conv_stencil_op_hcompute_conv_stencil_5_37_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_5_37_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_op_hcompute_conv_stencil_5_36
inline void conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_5_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_36_res = op_hcompute_conv_stencil_5_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_5_36_write(conv_stencil_op_hcompute_conv_stencil_5_36_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_op_hcompute_conv_stencil_6_55
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_6_55

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_55_res = conv_stencil_op_hcompute_conv_stencil_6_55_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_6_55_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_op_hcompute_conv_stencil_6_54
inline void conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_6_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_54_res = op_hcompute_conv_stencil_6_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_6_54_write(conv_stencil_op_hcompute_conv_stencil_6_54_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_op_hcompute_conv_stencil_7_73
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_7_73

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_73_res = conv_stencil_op_hcompute_conv_stencil_7_73_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_7_73_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_op_hcompute_conv_stencil_7_72
inline void conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_7_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_72_res = op_hcompute_conv_stencil_7_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_7_72_write(conv_stencil_op_hcompute_conv_stencil_7_72_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_op_hcompute_conv_stencil_8_91
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_8_91

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_91_res = conv_stencil_op_hcompute_conv_stencil_8_91_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_8_91_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_op_hcompute_conv_stencil_8_90
inline void conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_8_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_90_res = op_hcompute_conv_stencil_8_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_8_90_write(conv_stencil_op_hcompute_conv_stencil_8_90_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_op_hcompute_conv_stencil_9_109
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_9_109

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_109_res = conv_stencil_op_hcompute_conv_stencil_9_109_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_9_109_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_op_hcompute_conv_stencil_9_108
inline void conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_9_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_108_res = op_hcompute_conv_stencil_9_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_9_108_write(conv_stencil_op_hcompute_conv_stencil_9_108_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_258
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_258_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_258_write(conv_stencil_op_hcompute_conv_stencil_258_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_253
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_253

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_253_res = conv_stencil_op_hcompute_hw_output_stencil_253_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_253_res);
	return result;
}

#include "hw_classes.h"

struct hw_input_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
  hw_uint<16> RAM[7200];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }

#endif //__VIVADO_SYNTH__


	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 7200)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 7200);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_input_stencil_cache {
  hw_input_stencil_all_inputs_to_all_outputs_cache hw_input_stencil_all_inputs_to_all_outputs;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_256_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_256, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.write(hw_input_stencil_op_hcompute_hw_input_stencil_256, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_128_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_128 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_129_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_129 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_130_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_130 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_131_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_131 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_132_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_132 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_133_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_133 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_134_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_134 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_135_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_135 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_146_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_146 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_147_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_147 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_148_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_148 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_149_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_149 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_150_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_150 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_151_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_151 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_152_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_152 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_153_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_153 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_164_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_164 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_165_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_165 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_166_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_166 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_167_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_167 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_168_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_168 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_169_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_169 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_170_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_170 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_171_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_171 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_182_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_182 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_183_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_183 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_184_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_184 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_185_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_185 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_186_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_186 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_187_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_187 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_188_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_188 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_189_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_189 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_200_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_200 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_201_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_201 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_202_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_202 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_203_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_203 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_204_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_204 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_205_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_205 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_206_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_206 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_207_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_207 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_218_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_218 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_219_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_219 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_220_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_220 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_221_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_221 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_222_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_222 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_223_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_223 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_224_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_224 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_225_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_225 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_236_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_236 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_237_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_237 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_238_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_238 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_239_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_239 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_240_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_240 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_241_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_241 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_242_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_242 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_243_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_243 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_279_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_279 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_280_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_280 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_281_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_281 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_282_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_282 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_283_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_283 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_284_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_284 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_285_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_285 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_286_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_286 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_261_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_261 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_262_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_262 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_263_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_263 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_264_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_264 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_265_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_265 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_266_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_266 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_267_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_267 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_268_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_268 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_2_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_2 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_3_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_3 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_4_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_4 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_5_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_5 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_6_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_6 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_7 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_8 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_9 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_20_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_20 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_21_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_21 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_22_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_22 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_23_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_23 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_24_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_24 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_25_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_25 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_26_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_26 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_27 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_38_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_38 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_39_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_39 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_40_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_40 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_41_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_41 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_42_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_42 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_43_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_43 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_44_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_44 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_45_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_45 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_56_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_56 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_57_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_57 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_58_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_58 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_59_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_59 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_60_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_60 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_61_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_61 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_62_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_62 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_63_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_63 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_74_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_74 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_75_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_75 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_76_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_76 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_77_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_77 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_78_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_78 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_79_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_79 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_80_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_80 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_81_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_81 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_92_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_92 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_93_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_93 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_94_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_94 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_95_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_95 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_96_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_96 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_97_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_97 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_98_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_98 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_99_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_99 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_110_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_110 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_111_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_111 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_112_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_112 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_113_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_113 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_114_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_114 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_115_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_115 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_116_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_116 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_117_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_117 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_256 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_256;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_input_stencil_op_hcompute_conv_stencil_10_128
//	hw_input_stencil_op_hcompute_conv_stencil_10_129
//	hw_input_stencil_op_hcompute_conv_stencil_10_130
//	hw_input_stencil_op_hcompute_conv_stencil_10_131
//	hw_input_stencil_op_hcompute_conv_stencil_10_132
//	hw_input_stencil_op_hcompute_conv_stencil_10_133
//	hw_input_stencil_op_hcompute_conv_stencil_10_134
//	hw_input_stencil_op_hcompute_conv_stencil_10_135
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_10_128
    // hw_input_stencil_op_hcompute_conv_stencil_10_129
    // hw_input_stencil_op_hcompute_conv_stencil_10_130
    // hw_input_stencil_op_hcompute_conv_stencil_10_131
    // hw_input_stencil_op_hcompute_conv_stencil_10_132
    // hw_input_stencil_op_hcompute_conv_stencil_10_133
    // hw_input_stencil_op_hcompute_conv_stencil_10_134
    // hw_input_stencil_op_hcompute_conv_stencil_10_135

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_128_res = hw_input_stencil_op_hcompute_conv_stencil_10_128_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_128_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_129_res = hw_input_stencil_op_hcompute_conv_stencil_10_129_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_129_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_130_res = hw_input_stencil_op_hcompute_conv_stencil_10_130_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_130_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_131_res = hw_input_stencil_op_hcompute_conv_stencil_10_131_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_131_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_132_res = hw_input_stencil_op_hcompute_conv_stencil_10_132_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_132_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_133_res = hw_input_stencil_op_hcompute_conv_stencil_10_133_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_133_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_134_res = hw_input_stencil_op_hcompute_conv_stencil_10_134_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_134_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_135_res = hw_input_stencil_op_hcompute_conv_stencil_10_135_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_135_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_input_stencil_op_hcompute_conv_stencil_11_146
//	hw_input_stencil_op_hcompute_conv_stencil_11_147
//	hw_input_stencil_op_hcompute_conv_stencil_11_148
//	hw_input_stencil_op_hcompute_conv_stencil_11_149
//	hw_input_stencil_op_hcompute_conv_stencil_11_150
//	hw_input_stencil_op_hcompute_conv_stencil_11_151
//	hw_input_stencil_op_hcompute_conv_stencil_11_152
//	hw_input_stencil_op_hcompute_conv_stencil_11_153
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_11_146
    // hw_input_stencil_op_hcompute_conv_stencil_11_147
    // hw_input_stencil_op_hcompute_conv_stencil_11_148
    // hw_input_stencil_op_hcompute_conv_stencil_11_149
    // hw_input_stencil_op_hcompute_conv_stencil_11_150
    // hw_input_stencil_op_hcompute_conv_stencil_11_151
    // hw_input_stencil_op_hcompute_conv_stencil_11_152
    // hw_input_stencil_op_hcompute_conv_stencil_11_153

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_146_res = hw_input_stencil_op_hcompute_conv_stencil_11_146_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_146_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_147_res = hw_input_stencil_op_hcompute_conv_stencil_11_147_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_147_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_148_res = hw_input_stencil_op_hcompute_conv_stencil_11_148_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_148_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_149_res = hw_input_stencil_op_hcompute_conv_stencil_11_149_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_149_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_150_res = hw_input_stencil_op_hcompute_conv_stencil_11_150_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_150_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_151_res = hw_input_stencil_op_hcompute_conv_stencil_11_151_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_151_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_152_res = hw_input_stencil_op_hcompute_conv_stencil_11_152_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_152_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_153_res = hw_input_stencil_op_hcompute_conv_stencil_11_153_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_153_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_input_stencil_op_hcompute_conv_stencil_12_164
//	hw_input_stencil_op_hcompute_conv_stencil_12_165
//	hw_input_stencil_op_hcompute_conv_stencil_12_166
//	hw_input_stencil_op_hcompute_conv_stencil_12_167
//	hw_input_stencil_op_hcompute_conv_stencil_12_168
//	hw_input_stencil_op_hcompute_conv_stencil_12_169
//	hw_input_stencil_op_hcompute_conv_stencil_12_170
//	hw_input_stencil_op_hcompute_conv_stencil_12_171
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_12_164
    // hw_input_stencil_op_hcompute_conv_stencil_12_165
    // hw_input_stencil_op_hcompute_conv_stencil_12_166
    // hw_input_stencil_op_hcompute_conv_stencil_12_167
    // hw_input_stencil_op_hcompute_conv_stencil_12_168
    // hw_input_stencil_op_hcompute_conv_stencil_12_169
    // hw_input_stencil_op_hcompute_conv_stencil_12_170
    // hw_input_stencil_op_hcompute_conv_stencil_12_171

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_164_res = hw_input_stencil_op_hcompute_conv_stencil_12_164_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_164_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_165_res = hw_input_stencil_op_hcompute_conv_stencil_12_165_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_165_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_166_res = hw_input_stencil_op_hcompute_conv_stencil_12_166_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_166_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_167_res = hw_input_stencil_op_hcompute_conv_stencil_12_167_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_167_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_168_res = hw_input_stencil_op_hcompute_conv_stencil_12_168_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_168_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_169_res = hw_input_stencil_op_hcompute_conv_stencil_12_169_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_169_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_170_res = hw_input_stencil_op_hcompute_conv_stencil_12_170_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_170_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_171_res = hw_input_stencil_op_hcompute_conv_stencil_12_171_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_171_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_input_stencil_op_hcompute_conv_stencil_13_182
//	hw_input_stencil_op_hcompute_conv_stencil_13_183
//	hw_input_stencil_op_hcompute_conv_stencil_13_184
//	hw_input_stencil_op_hcompute_conv_stencil_13_185
//	hw_input_stencil_op_hcompute_conv_stencil_13_186
//	hw_input_stencil_op_hcompute_conv_stencil_13_187
//	hw_input_stencil_op_hcompute_conv_stencil_13_188
//	hw_input_stencil_op_hcompute_conv_stencil_13_189
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_13_182
    // hw_input_stencil_op_hcompute_conv_stencil_13_183
    // hw_input_stencil_op_hcompute_conv_stencil_13_184
    // hw_input_stencil_op_hcompute_conv_stencil_13_185
    // hw_input_stencil_op_hcompute_conv_stencil_13_186
    // hw_input_stencil_op_hcompute_conv_stencil_13_187
    // hw_input_stencil_op_hcompute_conv_stencil_13_188
    // hw_input_stencil_op_hcompute_conv_stencil_13_189

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_182_res = hw_input_stencil_op_hcompute_conv_stencil_13_182_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_182_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_183_res = hw_input_stencil_op_hcompute_conv_stencil_13_183_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_183_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_184_res = hw_input_stencil_op_hcompute_conv_stencil_13_184_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_184_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_185_res = hw_input_stencil_op_hcompute_conv_stencil_13_185_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_185_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_186_res = hw_input_stencil_op_hcompute_conv_stencil_13_186_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_186_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_187_res = hw_input_stencil_op_hcompute_conv_stencil_13_187_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_187_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_188_res = hw_input_stencil_op_hcompute_conv_stencil_13_188_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_188_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_189_res = hw_input_stencil_op_hcompute_conv_stencil_13_189_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_189_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_input_stencil_op_hcompute_conv_stencil_14_200
//	hw_input_stencil_op_hcompute_conv_stencil_14_201
//	hw_input_stencil_op_hcompute_conv_stencil_14_202
//	hw_input_stencil_op_hcompute_conv_stencil_14_203
//	hw_input_stencil_op_hcompute_conv_stencil_14_204
//	hw_input_stencil_op_hcompute_conv_stencil_14_205
//	hw_input_stencil_op_hcompute_conv_stencil_14_206
//	hw_input_stencil_op_hcompute_conv_stencil_14_207
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_14_200
    // hw_input_stencil_op_hcompute_conv_stencil_14_201
    // hw_input_stencil_op_hcompute_conv_stencil_14_202
    // hw_input_stencil_op_hcompute_conv_stencil_14_203
    // hw_input_stencil_op_hcompute_conv_stencil_14_204
    // hw_input_stencil_op_hcompute_conv_stencil_14_205
    // hw_input_stencil_op_hcompute_conv_stencil_14_206
    // hw_input_stencil_op_hcompute_conv_stencil_14_207

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_200_res = hw_input_stencil_op_hcompute_conv_stencil_14_200_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_200_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_201_res = hw_input_stencil_op_hcompute_conv_stencil_14_201_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_201_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_202_res = hw_input_stencil_op_hcompute_conv_stencil_14_202_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_202_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_203_res = hw_input_stencil_op_hcompute_conv_stencil_14_203_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_203_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_204_res = hw_input_stencil_op_hcompute_conv_stencil_14_204_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_204_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_205_res = hw_input_stencil_op_hcompute_conv_stencil_14_205_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_205_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_206_res = hw_input_stencil_op_hcompute_conv_stencil_14_206_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_206_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_207_res = hw_input_stencil_op_hcompute_conv_stencil_14_207_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_207_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_input_stencil_op_hcompute_conv_stencil_15_218
//	hw_input_stencil_op_hcompute_conv_stencil_15_219
//	hw_input_stencil_op_hcompute_conv_stencil_15_220
//	hw_input_stencil_op_hcompute_conv_stencil_15_221
//	hw_input_stencil_op_hcompute_conv_stencil_15_222
//	hw_input_stencil_op_hcompute_conv_stencil_15_223
//	hw_input_stencil_op_hcompute_conv_stencil_15_224
//	hw_input_stencil_op_hcompute_conv_stencil_15_225
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_15_218
    // hw_input_stencil_op_hcompute_conv_stencil_15_219
    // hw_input_stencil_op_hcompute_conv_stencil_15_220
    // hw_input_stencil_op_hcompute_conv_stencil_15_221
    // hw_input_stencil_op_hcompute_conv_stencil_15_222
    // hw_input_stencil_op_hcompute_conv_stencil_15_223
    // hw_input_stencil_op_hcompute_conv_stencil_15_224
    // hw_input_stencil_op_hcompute_conv_stencil_15_225

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_218_res = hw_input_stencil_op_hcompute_conv_stencil_15_218_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_218_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_219_res = hw_input_stencil_op_hcompute_conv_stencil_15_219_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_219_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_220_res = hw_input_stencil_op_hcompute_conv_stencil_15_220_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_220_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_221_res = hw_input_stencil_op_hcompute_conv_stencil_15_221_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_221_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_222_res = hw_input_stencil_op_hcompute_conv_stencil_15_222_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_222_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_223_res = hw_input_stencil_op_hcompute_conv_stencil_15_223_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_223_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_224_res = hw_input_stencil_op_hcompute_conv_stencil_15_224_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_224_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_225_res = hw_input_stencil_op_hcompute_conv_stencil_15_225_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_225_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_input_stencil_op_hcompute_conv_stencil_16_236
//	hw_input_stencil_op_hcompute_conv_stencil_16_237
//	hw_input_stencil_op_hcompute_conv_stencil_16_238
//	hw_input_stencil_op_hcompute_conv_stencil_16_239
//	hw_input_stencil_op_hcompute_conv_stencil_16_240
//	hw_input_stencil_op_hcompute_conv_stencil_16_241
//	hw_input_stencil_op_hcompute_conv_stencil_16_242
//	hw_input_stencil_op_hcompute_conv_stencil_16_243
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_16_236
    // hw_input_stencil_op_hcompute_conv_stencil_16_237
    // hw_input_stencil_op_hcompute_conv_stencil_16_238
    // hw_input_stencil_op_hcompute_conv_stencil_16_239
    // hw_input_stencil_op_hcompute_conv_stencil_16_240
    // hw_input_stencil_op_hcompute_conv_stencil_16_241
    // hw_input_stencil_op_hcompute_conv_stencil_16_242
    // hw_input_stencil_op_hcompute_conv_stencil_16_243

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_236_res = hw_input_stencil_op_hcompute_conv_stencil_16_236_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_236_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_237_res = hw_input_stencil_op_hcompute_conv_stencil_16_237_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_237_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_238_res = hw_input_stencil_op_hcompute_conv_stencil_16_238_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_238_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_239_res = hw_input_stencil_op_hcompute_conv_stencil_16_239_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_239_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_240_res = hw_input_stencil_op_hcompute_conv_stencil_16_240_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_240_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_241_res = hw_input_stencil_op_hcompute_conv_stencil_16_241_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_241_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_242_res = hw_input_stencil_op_hcompute_conv_stencil_16_242_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_242_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_243_res = hw_input_stencil_op_hcompute_conv_stencil_16_243_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_243_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_279
//	hw_input_stencil_op_hcompute_conv_stencil_1_280
//	hw_input_stencil_op_hcompute_conv_stencil_1_281
//	hw_input_stencil_op_hcompute_conv_stencil_1_282
//	hw_input_stencil_op_hcompute_conv_stencil_1_283
//	hw_input_stencil_op_hcompute_conv_stencil_1_284
//	hw_input_stencil_op_hcompute_conv_stencil_1_285
//	hw_input_stencil_op_hcompute_conv_stencil_1_286
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_1_279
    // hw_input_stencil_op_hcompute_conv_stencil_1_280
    // hw_input_stencil_op_hcompute_conv_stencil_1_281
    // hw_input_stencil_op_hcompute_conv_stencil_1_282
    // hw_input_stencil_op_hcompute_conv_stencil_1_283
    // hw_input_stencil_op_hcompute_conv_stencil_1_284
    // hw_input_stencil_op_hcompute_conv_stencil_1_285
    // hw_input_stencil_op_hcompute_conv_stencil_1_286

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_279_res = hw_input_stencil_op_hcompute_conv_stencil_1_279_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_279_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_280_res = hw_input_stencil_op_hcompute_conv_stencil_1_280_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_280_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_281_res = hw_input_stencil_op_hcompute_conv_stencil_1_281_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_281_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_282_res = hw_input_stencil_op_hcompute_conv_stencil_1_282_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_282_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_283_res = hw_input_stencil_op_hcompute_conv_stencil_1_283_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_283_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_284_res = hw_input_stencil_op_hcompute_conv_stencil_1_284_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_284_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_285_res = hw_input_stencil_op_hcompute_conv_stencil_1_285_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_285_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_286_res = hw_input_stencil_op_hcompute_conv_stencil_1_286_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_286_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_input_stencil_op_hcompute_conv_stencil_2_261
//	hw_input_stencil_op_hcompute_conv_stencil_2_262
//	hw_input_stencil_op_hcompute_conv_stencil_2_263
//	hw_input_stencil_op_hcompute_conv_stencil_2_264
//	hw_input_stencil_op_hcompute_conv_stencil_2_265
//	hw_input_stencil_op_hcompute_conv_stencil_2_266
//	hw_input_stencil_op_hcompute_conv_stencil_2_267
//	hw_input_stencil_op_hcompute_conv_stencil_2_268
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_2_261
    // hw_input_stencil_op_hcompute_conv_stencil_2_262
    // hw_input_stencil_op_hcompute_conv_stencil_2_263
    // hw_input_stencil_op_hcompute_conv_stencil_2_264
    // hw_input_stencil_op_hcompute_conv_stencil_2_265
    // hw_input_stencil_op_hcompute_conv_stencil_2_266
    // hw_input_stencil_op_hcompute_conv_stencil_2_267
    // hw_input_stencil_op_hcompute_conv_stencil_2_268

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_261_res = hw_input_stencil_op_hcompute_conv_stencil_2_261_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_261_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_262_res = hw_input_stencil_op_hcompute_conv_stencil_2_262_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_262_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_263_res = hw_input_stencil_op_hcompute_conv_stencil_2_263_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_263_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_264_res = hw_input_stencil_op_hcompute_conv_stencil_2_264_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_264_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_265_res = hw_input_stencil_op_hcompute_conv_stencil_2_265_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_265_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_266_res = hw_input_stencil_op_hcompute_conv_stencil_2_266_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_266_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_267_res = hw_input_stencil_op_hcompute_conv_stencil_2_267_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_267_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_268_res = hw_input_stencil_op_hcompute_conv_stencil_2_268_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_268_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_input_stencil_op_hcompute_conv_stencil_3_2
//	hw_input_stencil_op_hcompute_conv_stencil_3_3
//	hw_input_stencil_op_hcompute_conv_stencil_3_4
//	hw_input_stencil_op_hcompute_conv_stencil_3_5
//	hw_input_stencil_op_hcompute_conv_stencil_3_6
//	hw_input_stencil_op_hcompute_conv_stencil_3_7
//	hw_input_stencil_op_hcompute_conv_stencil_3_8
//	hw_input_stencil_op_hcompute_conv_stencil_3_9
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_3_2
    // hw_input_stencil_op_hcompute_conv_stencil_3_3
    // hw_input_stencil_op_hcompute_conv_stencil_3_4
    // hw_input_stencil_op_hcompute_conv_stencil_3_5
    // hw_input_stencil_op_hcompute_conv_stencil_3_6
    // hw_input_stencil_op_hcompute_conv_stencil_3_7
    // hw_input_stencil_op_hcompute_conv_stencil_3_8
    // hw_input_stencil_op_hcompute_conv_stencil_3_9

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_2_res = hw_input_stencil_op_hcompute_conv_stencil_3_2_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_2_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_3_res = hw_input_stencil_op_hcompute_conv_stencil_3_3_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_3_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_4_res = hw_input_stencil_op_hcompute_conv_stencil_3_4_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_4_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_5_res = hw_input_stencil_op_hcompute_conv_stencil_3_5_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_5_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_6_res = hw_input_stencil_op_hcompute_conv_stencil_3_6_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_6_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_7_res = hw_input_stencil_op_hcompute_conv_stencil_3_7_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_7_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_8_res = hw_input_stencil_op_hcompute_conv_stencil_3_8_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_8_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_9_res = hw_input_stencil_op_hcompute_conv_stencil_3_9_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_9_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_stencil_op_hcompute_conv_stencil_4_20
//	hw_input_stencil_op_hcompute_conv_stencil_4_21
//	hw_input_stencil_op_hcompute_conv_stencil_4_22
//	hw_input_stencil_op_hcompute_conv_stencil_4_23
//	hw_input_stencil_op_hcompute_conv_stencil_4_24
//	hw_input_stencil_op_hcompute_conv_stencil_4_25
//	hw_input_stencil_op_hcompute_conv_stencil_4_26
//	hw_input_stencil_op_hcompute_conv_stencil_4_27
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_4_20
    // hw_input_stencil_op_hcompute_conv_stencil_4_21
    // hw_input_stencil_op_hcompute_conv_stencil_4_22
    // hw_input_stencil_op_hcompute_conv_stencil_4_23
    // hw_input_stencil_op_hcompute_conv_stencil_4_24
    // hw_input_stencil_op_hcompute_conv_stencil_4_25
    // hw_input_stencil_op_hcompute_conv_stencil_4_26
    // hw_input_stencil_op_hcompute_conv_stencil_4_27

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_20_res = hw_input_stencil_op_hcompute_conv_stencil_4_20_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_20_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_21_res = hw_input_stencil_op_hcompute_conv_stencil_4_21_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_21_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_22_res = hw_input_stencil_op_hcompute_conv_stencil_4_22_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_22_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_23_res = hw_input_stencil_op_hcompute_conv_stencil_4_23_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_23_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_24_res = hw_input_stencil_op_hcompute_conv_stencil_4_24_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_24_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_25_res = hw_input_stencil_op_hcompute_conv_stencil_4_25_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_25_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_26_res = hw_input_stencil_op_hcompute_conv_stencil_4_26_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_26_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_27_res = hw_input_stencil_op_hcompute_conv_stencil_4_27_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_27_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_stencil_op_hcompute_conv_stencil_5_38
//	hw_input_stencil_op_hcompute_conv_stencil_5_39
//	hw_input_stencil_op_hcompute_conv_stencil_5_40
//	hw_input_stencil_op_hcompute_conv_stencil_5_41
//	hw_input_stencil_op_hcompute_conv_stencil_5_42
//	hw_input_stencil_op_hcompute_conv_stencil_5_43
//	hw_input_stencil_op_hcompute_conv_stencil_5_44
//	hw_input_stencil_op_hcompute_conv_stencil_5_45
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_5_38
    // hw_input_stencil_op_hcompute_conv_stencil_5_39
    // hw_input_stencil_op_hcompute_conv_stencil_5_40
    // hw_input_stencil_op_hcompute_conv_stencil_5_41
    // hw_input_stencil_op_hcompute_conv_stencil_5_42
    // hw_input_stencil_op_hcompute_conv_stencil_5_43
    // hw_input_stencil_op_hcompute_conv_stencil_5_44
    // hw_input_stencil_op_hcompute_conv_stencil_5_45

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_38_res = hw_input_stencil_op_hcompute_conv_stencil_5_38_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_38_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_39_res = hw_input_stencil_op_hcompute_conv_stencil_5_39_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_39_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_40_res = hw_input_stencil_op_hcompute_conv_stencil_5_40_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_40_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_41_res = hw_input_stencil_op_hcompute_conv_stencil_5_41_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_41_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_42_res = hw_input_stencil_op_hcompute_conv_stencil_5_42_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_42_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_43_res = hw_input_stencil_op_hcompute_conv_stencil_5_43_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_43_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_44_res = hw_input_stencil_op_hcompute_conv_stencil_5_44_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_44_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_45_res = hw_input_stencil_op_hcompute_conv_stencil_5_45_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_45_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_input_stencil_op_hcompute_conv_stencil_6_56
//	hw_input_stencil_op_hcompute_conv_stencil_6_57
//	hw_input_stencil_op_hcompute_conv_stencil_6_58
//	hw_input_stencil_op_hcompute_conv_stencil_6_59
//	hw_input_stencil_op_hcompute_conv_stencil_6_60
//	hw_input_stencil_op_hcompute_conv_stencil_6_61
//	hw_input_stencil_op_hcompute_conv_stencil_6_62
//	hw_input_stencil_op_hcompute_conv_stencil_6_63
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_6_56
    // hw_input_stencil_op_hcompute_conv_stencil_6_57
    // hw_input_stencil_op_hcompute_conv_stencil_6_58
    // hw_input_stencil_op_hcompute_conv_stencil_6_59
    // hw_input_stencil_op_hcompute_conv_stencil_6_60
    // hw_input_stencil_op_hcompute_conv_stencil_6_61
    // hw_input_stencil_op_hcompute_conv_stencil_6_62
    // hw_input_stencil_op_hcompute_conv_stencil_6_63

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_56_res = hw_input_stencil_op_hcompute_conv_stencil_6_56_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_56_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_57_res = hw_input_stencil_op_hcompute_conv_stencil_6_57_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_57_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_58_res = hw_input_stencil_op_hcompute_conv_stencil_6_58_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_58_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_59_res = hw_input_stencil_op_hcompute_conv_stencil_6_59_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_59_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_60_res = hw_input_stencil_op_hcompute_conv_stencil_6_60_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_60_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_61_res = hw_input_stencil_op_hcompute_conv_stencil_6_61_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_61_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_62_res = hw_input_stencil_op_hcompute_conv_stencil_6_62_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_62_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_63_res = hw_input_stencil_op_hcompute_conv_stencil_6_63_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_63_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_input_stencil_op_hcompute_conv_stencil_7_74
//	hw_input_stencil_op_hcompute_conv_stencil_7_75
//	hw_input_stencil_op_hcompute_conv_stencil_7_76
//	hw_input_stencil_op_hcompute_conv_stencil_7_77
//	hw_input_stencil_op_hcompute_conv_stencil_7_78
//	hw_input_stencil_op_hcompute_conv_stencil_7_79
//	hw_input_stencil_op_hcompute_conv_stencil_7_80
//	hw_input_stencil_op_hcompute_conv_stencil_7_81
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_7_74
    // hw_input_stencil_op_hcompute_conv_stencil_7_75
    // hw_input_stencil_op_hcompute_conv_stencil_7_76
    // hw_input_stencil_op_hcompute_conv_stencil_7_77
    // hw_input_stencil_op_hcompute_conv_stencil_7_78
    // hw_input_stencil_op_hcompute_conv_stencil_7_79
    // hw_input_stencil_op_hcompute_conv_stencil_7_80
    // hw_input_stencil_op_hcompute_conv_stencil_7_81

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_74_res = hw_input_stencil_op_hcompute_conv_stencil_7_74_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_74_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_75_res = hw_input_stencil_op_hcompute_conv_stencil_7_75_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_75_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_76_res = hw_input_stencil_op_hcompute_conv_stencil_7_76_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_76_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_77_res = hw_input_stencil_op_hcompute_conv_stencil_7_77_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_77_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_78_res = hw_input_stencil_op_hcompute_conv_stencil_7_78_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_78_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_79_res = hw_input_stencil_op_hcompute_conv_stencil_7_79_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_79_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_80_res = hw_input_stencil_op_hcompute_conv_stencil_7_80_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_80_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_81_res = hw_input_stencil_op_hcompute_conv_stencil_7_81_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_81_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_stencil_op_hcompute_conv_stencil_8_92
//	hw_input_stencil_op_hcompute_conv_stencil_8_93
//	hw_input_stencil_op_hcompute_conv_stencil_8_94
//	hw_input_stencil_op_hcompute_conv_stencil_8_95
//	hw_input_stencil_op_hcompute_conv_stencil_8_96
//	hw_input_stencil_op_hcompute_conv_stencil_8_97
//	hw_input_stencil_op_hcompute_conv_stencil_8_98
//	hw_input_stencil_op_hcompute_conv_stencil_8_99
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_8_92
    // hw_input_stencil_op_hcompute_conv_stencil_8_93
    // hw_input_stencil_op_hcompute_conv_stencil_8_94
    // hw_input_stencil_op_hcompute_conv_stencil_8_95
    // hw_input_stencil_op_hcompute_conv_stencil_8_96
    // hw_input_stencil_op_hcompute_conv_stencil_8_97
    // hw_input_stencil_op_hcompute_conv_stencil_8_98
    // hw_input_stencil_op_hcompute_conv_stencil_8_99

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_92_res = hw_input_stencil_op_hcompute_conv_stencil_8_92_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_92_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_93_res = hw_input_stencil_op_hcompute_conv_stencil_8_93_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_93_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_94_res = hw_input_stencil_op_hcompute_conv_stencil_8_94_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_94_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_95_res = hw_input_stencil_op_hcompute_conv_stencil_8_95_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_95_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_96_res = hw_input_stencil_op_hcompute_conv_stencil_8_96_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_96_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_97_res = hw_input_stencil_op_hcompute_conv_stencil_8_97_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_97_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_98_res = hw_input_stencil_op_hcompute_conv_stencil_8_98_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_98_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_99_res = hw_input_stencil_op_hcompute_conv_stencil_8_99_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_99_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_stencil_op_hcompute_conv_stencil_9_110
//	hw_input_stencil_op_hcompute_conv_stencil_9_111
//	hw_input_stencil_op_hcompute_conv_stencil_9_112
//	hw_input_stencil_op_hcompute_conv_stencil_9_113
//	hw_input_stencil_op_hcompute_conv_stencil_9_114
//	hw_input_stencil_op_hcompute_conv_stencil_9_115
//	hw_input_stencil_op_hcompute_conv_stencil_9_116
//	hw_input_stencil_op_hcompute_conv_stencil_9_117
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_9_110
    // hw_input_stencil_op_hcompute_conv_stencil_9_111
    // hw_input_stencil_op_hcompute_conv_stencil_9_112
    // hw_input_stencil_op_hcompute_conv_stencil_9_113
    // hw_input_stencil_op_hcompute_conv_stencil_9_114
    // hw_input_stencil_op_hcompute_conv_stencil_9_115
    // hw_input_stencil_op_hcompute_conv_stencil_9_116
    // hw_input_stencil_op_hcompute_conv_stencil_9_117

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_110_res = hw_input_stencil_op_hcompute_conv_stencil_9_110_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_110_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_111_res = hw_input_stencil_op_hcompute_conv_stencil_9_111_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_111_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_112_res = hw_input_stencil_op_hcompute_conv_stencil_9_112_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_112_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_113_res = hw_input_stencil_op_hcompute_conv_stencil_9_113_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_113_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_114_res = hw_input_stencil_op_hcompute_conv_stencil_9_114_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_114_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_115_res = hw_input_stencil_op_hcompute_conv_stencil_9_115_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_115_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_116_res = hw_input_stencil_op_hcompute_conv_stencil_9_116_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_116_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_117_res = hw_input_stencil_op_hcompute_conv_stencil_9_117_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_117_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_256
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_256_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_256_write(hw_input_stencil_op_hcompute_hw_input_stencil_256_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, dynamic_address);
}

#include "hw_classes.h"

struct hw_kernel_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 7], [0, 15], [0, 2], [0, 2]}
	// Capacity: 1152
  hw_uint<16> RAM[1152];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 1152)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 1152);
    assert(addr >= 0);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }

#endif //__VIVADO_SYNTH__


	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 1152)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 1152);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct hw_kernel_stencil_cache {
  hw_kernel_stencil_all_inputs_to_all_outputs_cache hw_kernel_stencil_all_inputs_to_all_outputs;
};



inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254_write(hw_uint<16>& hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
  hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254, (hw_kernel_s0_z - 0) * 1 + (hw_kernel_s0_w - 0) * 8 + (hw_kernel_s0_x - 0) * 128 + (hw_kernel_s0_y - 0) * 384);
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_136_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_136 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_137_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_137 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_138_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_138 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_139_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_139 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_140_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_140 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_141_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_141 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_142_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_142 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_143_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_143 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_154_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_154 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_155_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_155 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_156_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_156 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_157_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_157 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_158_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_158 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_159_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_159 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_160_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_160 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_161_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_161 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_172_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_172 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_173_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_173 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_174_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_174 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_175_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_175 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_176_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_176 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_177_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_177 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_178_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_178 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_179_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_179 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_190_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_190 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_191_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_191 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_192_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_192 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_193_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_193 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_194_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_194 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_195_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_195 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_196_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_196 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_197_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_197 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_208_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_208 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_209_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_209 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_210_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_210 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_211_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_211 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_212_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_212 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_213_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_213 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_214_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_214 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_215_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_215 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_226_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_226 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_227_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_227 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_228_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_228 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_229_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_229 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_230_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_230 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_231_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_231 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_232_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_232 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_233_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_233 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_244_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_244 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_245_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_245 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_246_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_246 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_247_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_247 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_248_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_248 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_249_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_249 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_250_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_250 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_251_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_251 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_287_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_287 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_288_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_288 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_289_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_289 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_290_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_290 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_291_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_291 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_292_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_292 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_293_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_293 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_294_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_294 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_269_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_269 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_270_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_270 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_271_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_271 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_272_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_272 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_273_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_273 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_274_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_274 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_275_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_275 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_276_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_276 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_10_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_10 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_11_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_11 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_12_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_12 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_13_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_13 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_14_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_14 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_15_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_15 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_16_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_16 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_17_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_17 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_28_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_28 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_29_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_29 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_30_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_30 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_31_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_31 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_32_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_32 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_33_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_33 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_34_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_34 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_35_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_35 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_46_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_46 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_47_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_47 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_48_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_48 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_49_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_49 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_50_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_50 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_51_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_51 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_52_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_52 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_53_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_53 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_64_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_64 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_65_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_65 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_66_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_66 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_67_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_67 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_68_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_68 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_69_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_69 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_70_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_70 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_71_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_71 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_82_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_82 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_83_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_83 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_84_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_84 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_85_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_85 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_86_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_86 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_87_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_87 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_88_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_88 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_89_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_89 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_100_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_100 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_101_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_101 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_102_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_102 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_103_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_103 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_104_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_104 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_105_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_105 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_106_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_106 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_107_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_107 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_118_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_118 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_119_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_119 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_120_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_120 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_121_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_121 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_122_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_122 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_123_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_123 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_124_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_124 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_125_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_125 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_136
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_137
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_138
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_139
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_140
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_141
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_142
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_143
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_136
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_137
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_138
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_139
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_140
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_141
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_142
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_143

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_136_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_136_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_136_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_137_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_137_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_137_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_138_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_138_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_138_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_139_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_139_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_139_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_140_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_140_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_140_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_141_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_141_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_141_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_142_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_142_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_142_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_143_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_143_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_143_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_154
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_155
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_156
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_157
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_158
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_159
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_160
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_161
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_154
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_155
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_156
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_157
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_158
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_159
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_160
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_161

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_154_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_154_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_154_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_155_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_155_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_155_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_156_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_156_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_156_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_157_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_157_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_157_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_158_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_158_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_158_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_159_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_159_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_159_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_160_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_160_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_160_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_161_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_161_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_161_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_172
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_173
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_174
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_175
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_176
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_177
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_178
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_179
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_172
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_173
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_174
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_175
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_176
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_177
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_178
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_179

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_172_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_172_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_172_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_173_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_173_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_173_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_174_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_174_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_174_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_175_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_175_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_175_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_176_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_176_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_176_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_177_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_177_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_177_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_178_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_178_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_178_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_179_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_179_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_179_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_190
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_191
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_192
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_193
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_194
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_195
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_196
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_197
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_190
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_191
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_192
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_193
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_194
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_195
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_196
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_197

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_190_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_190_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_190_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_191_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_191_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_191_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_192_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_192_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_192_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_193_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_193_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_193_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_194_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_194_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_194_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_195_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_195_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_195_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_196_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_196_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_196_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_197_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_197_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_197_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_208
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_209
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_210
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_211
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_212
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_213
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_214
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_215
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_208
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_209
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_210
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_211
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_212
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_213
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_214
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_215

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_208_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_208_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_208_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_209_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_209_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_209_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_210_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_210_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_210_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_211_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_211_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_211_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_212_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_212_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_212_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_213_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_213_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_213_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_214_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_214_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_214_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_215_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_215_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_215_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_226
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_227
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_228
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_229
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_230
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_231
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_232
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_233
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_226
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_227
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_228
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_229
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_230
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_231
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_232
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_233

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_226_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_226_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_226_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_227_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_227_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_227_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_228_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_228_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_228_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_229_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_229_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_229_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_230_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_230_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_230_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_231_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_231_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_231_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_232_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_232_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_232_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_233_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_233_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_233_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_244
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_245
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_246
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_247
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_248
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_249
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_250
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_251
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_244
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_245
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_246
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_247
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_248
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_249
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_250
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_251

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_244_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_244_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_244_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_245_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_245_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_245_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_246_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_246_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_246_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_247_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_247_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_247_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_248_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_248_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_248_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_249_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_249_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_249_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_250_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_250_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_250_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_251_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_251_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_251_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_287
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_288
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_289
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_290
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_291
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_292
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_293
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_294
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_287
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_288
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_289
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_290
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_291
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_292
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_293
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_294

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_287_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_287_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_287_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_288_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_288_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_288_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_289_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_289_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_289_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_290_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_290_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_290_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_291_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_291_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_291_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_292_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_292_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_292_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_293_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_293_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_293_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_294_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_294_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_294_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_269
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_270
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_271
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_272
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_273
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_274
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_275
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_276
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_269
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_270
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_271
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_272
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_273
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_274
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_275
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_276

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_269_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_269_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_269_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_270_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_270_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_270_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_271_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_271_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_271_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_272_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_272_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_272_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_273_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_273_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_273_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_274_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_274_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_274_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_275_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_275_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_275_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_276_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_276_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_276_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_10
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_11
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_12
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_13
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_14
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_15
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_16
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_17
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_10
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_11
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_12
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_13
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_14
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_15
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_16
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_17

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_10_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_10_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_10_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_11_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_11_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_11_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_12_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_12_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_12_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_13_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_13_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_13_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_14_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_14_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_14_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_15_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_15_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_15_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_16_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_16_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_16_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_17_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_17_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_17_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_28
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_29
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_30
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_31
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_32
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_33
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_34
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_35
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_28
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_29
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_30
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_31
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_32
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_33
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_34
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_35

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_28_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_28_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_28_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_29_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_29_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_29_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_30_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_30_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_30_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_31_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_31_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_31_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_32_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_32_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_32_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_33_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_33_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_33_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_34_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_34_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_34_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_35_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_35_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_35_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_46
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_47
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_48
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_49
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_50
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_51
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_52
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_53
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_46
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_47
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_48
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_49
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_50
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_51
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_52
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_53

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_46_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_46_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_46_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_47_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_47_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_47_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_48_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_48_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_48_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_49_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_49_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_49_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_50_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_50_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_50_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_51_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_51_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_51_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_52_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_52_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_52_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_53_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_53_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_53_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_64
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_65
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_66
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_67
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_68
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_69
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_70
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_71
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_64
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_65
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_66
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_67
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_68
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_69
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_70
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_71

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_64_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_64_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_64_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_65_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_65_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_65_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_66_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_66_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_66_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_67_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_67_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_67_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_68_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_68_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_68_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_69_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_69_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_69_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_70_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_70_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_70_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_71_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_71_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_71_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_82
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_83
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_84
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_85
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_86
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_87
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_88
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_89
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_82
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_83
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_84
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_85
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_86
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_87
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_88
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_89

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_82_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_82_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_82_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_83_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_83_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_83_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_84_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_84_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_84_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_85_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_85_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_85_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_86_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_86_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_86_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_87_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_87_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_87_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_88_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_88_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_88_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_89_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_89_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_89_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_100
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_101
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_102
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_103
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_104
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_105
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_106
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_107
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_100
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_101
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_102
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_103
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_104
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_105
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_106
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_107

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_100_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_100_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_100_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_101_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_101_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_101_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_102_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_102_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_102_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_103_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_103_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_103_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_104_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_104_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_104_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_105_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_105_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_105_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_106_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_106_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_106_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_107_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_107_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_107_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_118
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_119
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_120
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_121
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_122
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_123
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_124
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_125
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_118
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_119
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_120
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_121
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_122
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_123
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_124
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_125

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_118_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_118_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_118_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_119_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_119_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_119_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_120_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_120_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_120_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_121_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_121_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_121_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_122_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_122_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_122_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_123_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_123_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_123_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_124_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_124_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_124_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_125_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_125_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_125_res);
	return result;
}

// op_hcompute_hw_kernel_stencil_write
//	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254
inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_stencil_write, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254_res = op_hcompute_hw_kernel_stencil_write.extract<0, 15>();
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254_write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_254_res, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, dynamic_address);
}



// Operation logic
inline void op_hcompute_conv_stencil_3(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__2_value = conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__2_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_3(conv_stencil_conv_s1_x_c__conv_s1_y_c__2_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__2_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_4(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__3_value = conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__3_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_4(conv_stencil_conv_s1_x_c__conv_s1_y_c__3_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__3_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_5(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__4_value = conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__4_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_5(conv_stencil_conv_s1_x_c__conv_s1_y_c__4_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__4_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_6(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__5_value = conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__5_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_6(conv_stencil_conv_s1_x_c__conv_s1_y_c__5_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__5_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_7(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__6_value = conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__6_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_7(conv_stencil_conv_s1_x_c__conv_s1_y_c__6_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__6_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_8(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__7_value = conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__7_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_8(conv_stencil_conv_s1_x_c__conv_s1_y_c__7_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__7_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_9(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__8_value = conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__8_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_9(conv_stencil_conv_s1_x_c__conv_s1_y_c__8_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__8_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_10(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__9_value = conv_stencil_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__9_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_10(conv_stencil_conv_s1_x_c__conv_s1_y_c__9_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__9_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_10_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_11(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__10_value = conv_stencil_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__10_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_11(conv_stencil_conv_s1_x_c__conv_s1_y_c__10_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__10_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_11_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_12(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__11_value = conv_stencil_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__11_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_12(conv_stencil_conv_s1_x_c__conv_s1_y_c__11_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__11_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_12_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_13(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__12_value = conv_stencil_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_3_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_3_c__12_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_13(conv_stencil_conv_s1_x_c__conv_s1_y_c__12_value, hw_input_stencil_3_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_3_c__12_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_13_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_14(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__13_value = conv_stencil_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__13_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_14(conv_stencil_conv_s1_x_c__conv_s1_y_c__13_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__13_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_14_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_15(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__14_value = conv_stencil_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__14_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_15(conv_stencil_conv_s1_x_c__conv_s1_y_c__14_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__14_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_15_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_16(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__15_value = conv_stencil_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__15_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_16(conv_stencil_conv_s1_x_c__conv_s1_y_c__15_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__15_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_16_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

inline void op_hcompute_conv_stencil(conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_2(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__1_value = conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_1_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_1_c__1_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_2(conv_stencil_conv_s1_x_c__conv_s1_y_c__1_value, hw_input_stencil_1_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_1_c__1_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_1(conv_stencil_cache& conv_stencil, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_s1_x_c__conv_s1_y_c__0_value = conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value = hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_0_c__0_c__conv_s1_r_x_c__conv_s1_r_y_value = hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_1(conv_stencil_conv_s1_x_c__conv_s1_y_c__0_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__0_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

// schedule: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 12] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 13] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 2, conv_s0_y, 0, conv_s0_x, 0, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15; op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 14] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7; op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 10] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7; op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 11] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 15] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
//   { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 12] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_13(((-12 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_1(((i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 13] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_14(((-13 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_10(((-9 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_2(((-1 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 2, conv_s0_y, 0, conv_s0_x, 0, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
// Condition for op_hcompute_conv_stencil(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (15 - i7 >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_3(((-2 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-4 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (15 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0)))
//   { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_8(((-7 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_4(((-3 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_7(((-6 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_9(((-8 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 14] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_15(((-14 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7 }
// Condition for op_hcompute_hw_kernel_stencil(((i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (15 - i7 >= 0) && (i9 >= 0) && (7 - i9 >= 0)))
//   { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 10] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_11(((-10 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
// Condition for op_hcompute_hw_input_stencil(((i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (29 - i3 >= 0) && (i5 >= 0) && (29 - i5 >= 0) && (i7 >= 0) && (7 - i7 >= 0)))
//   { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 11] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_12(((-11 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_5(((-4 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_6(((-5 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 0, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 15] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_16(((-15 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))

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
  for (int c3 = 0; c3 <= 27; c3 += 1)
    for (int c5 = 0; c5 <= 27; c5 += 1)
      for (int c7 = 0; c7 <= 2; c7 += 1)
        for (int c9 = 0; c9 <= 2; c9 += 1) {
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
	  for (int c3 = 0; c3 <= 27; c3 += 1)
	    for (int c5 = 0; c5 <= 27; c5 += 1)
	      for (int c7 = 0; c7 <= 2; c7 += 1)
	        for (int c9 = 0; c9 <= 2; c9 += 1) {
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

#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_write_num_transfers = 12544;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> input_copy_stencil[hw_input_s0_z, hw_input_s0_x, hw_input_s0_y] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
const int op_hcompute_hw_input_stencil_read_num_transfers = 7200;
  // { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> kernel_copy_stencil[hw_kernel_s0_z, hw_kernel_s0_w, hw_kernel_s0_x, hw_kernel_s0_y] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7 }
const int op_hcompute_hw_kernel_stencil_read_num_transfers = 1152;


extern "C" {

static void read_op_hcompute_hw_input_stencil_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = op_hcompute_hw_input_stencil_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void read_op_hcompute_hw_kernel_stencil_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = op_hcompute_hw_kernel_stencil_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_op_hcompute_hw_output_stencil_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = op_hcompute_hw_output_stencil_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void unoptimized_resnet_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read, hw_uint<16>* op_hcompute_hw_kernel_stencil_read, hw_uint<16>* op_hcompute_hw_output_stencil_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_stencil_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_kernel_stencil_read offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_stencil_read bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_kernel_stencil_read bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > op_hcompute_hw_input_stencil_read_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_kernel_stencil_read_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_channel;

  read_op_hcompute_hw_input_stencil_read(op_hcompute_hw_input_stencil_read, op_hcompute_hw_input_stencil_read_channel, size);
  read_op_hcompute_hw_kernel_stencil_read(op_hcompute_hw_kernel_stencil_read, op_hcompute_hw_kernel_stencil_read_channel, size);

  unoptimized_resnet(op_hcompute_hw_input_stencil_read_channel, op_hcompute_hw_kernel_stencil_read_channel, op_hcompute_hw_output_stencil_write_channel);

  write_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_write, op_hcompute_hw_output_stencil_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

