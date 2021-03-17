#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: cascade_compute.h
#include "cascade_compute.h"

struct conv1_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 61], [0, 61]}
  hw_uint<16> RAM[62][62];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct conv1_stencil_cache {
  // Reader addrs...
    // { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[1 + conv2_s1_y, 1 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
    // { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[1 + conv2_s1_y, 2 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
    // { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[2 + conv2_s1_y, conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
    // { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[2 + conv2_s1_y, 2 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
    // { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[2 + conv2_s1_y, 1 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
    // { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[conv2_s1_y, conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
    // { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[conv2_s1_y, 1 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
    // { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[conv2_s1_y, 2 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
    // { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[1 + conv2_s1_y, conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  // # of banks: 1
  conv1_stencil_all_inputs_to_all_outputs_cache conv1_stencil_all_inputs_to_all_outputs;
};



inline void conv1_stencil_op_hcompute_conv1_stencil_1_16_write(hw_uint<16>& conv1_stencil_op_hcompute_conv1_stencil_1_16, conv1_stencil_cache& conv1_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
  conv1_stencil.conv1_stencil_all_inputs_to_all_outputs.write(conv1_stencil_op_hcompute_conv1_stencil_1_16, ((1*conv1_s1_y)) - 0, ((1*conv1_s1_x)) - 0);
}

inline hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_10_select(conv1_stencil_cache& conv1_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv1_stencil_op_hcompute_conv2_stencil_1_10 read pattern: { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[1 + conv2_s1_y, 1 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  auto value_conv1_stencil_op_hcompute_conv1_stencil_1_16 = conv1_stencil.conv1_stencil_all_inputs_to_all_outputs.read(((1 + 1*conv2_s1_y)) - 0, ((1 + 1*conv2_s1_x)) - 0);
  return value_conv1_stencil_op_hcompute_conv1_stencil_1_16;
  return 0;
}

inline hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_11_select(conv1_stencil_cache& conv1_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv1_stencil_op_hcompute_conv2_stencil_1_11 read pattern: { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[1 + conv2_s1_y, 2 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  auto value_conv1_stencil_op_hcompute_conv1_stencil_1_16 = conv1_stencil.conv1_stencil_all_inputs_to_all_outputs.read(((1 + 1*conv2_s1_y)) - 0, ((2 + 1*conv2_s1_x)) - 0);
  return value_conv1_stencil_op_hcompute_conv1_stencil_1_16;
  return 0;
}

inline hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_12_select(conv1_stencil_cache& conv1_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv1_stencil_op_hcompute_conv2_stencil_1_12 read pattern: { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[2 + conv2_s1_y, conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  auto value_conv1_stencil_op_hcompute_conv1_stencil_1_16 = conv1_stencil.conv1_stencil_all_inputs_to_all_outputs.read(((2 + 1*conv2_s1_y)) - 0, ((1*conv2_s1_x)) - 0);
  return value_conv1_stencil_op_hcompute_conv1_stencil_1_16;
  return 0;
}

inline hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_13_select(conv1_stencil_cache& conv1_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv1_stencil_op_hcompute_conv2_stencil_1_13 read pattern: { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[2 + conv2_s1_y, 2 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  auto value_conv1_stencil_op_hcompute_conv1_stencil_1_16 = conv1_stencil.conv1_stencil_all_inputs_to_all_outputs.read(((2 + 1*conv2_s1_y)) - 0, ((2 + 1*conv2_s1_x)) - 0);
  return value_conv1_stencil_op_hcompute_conv1_stencil_1_16;
  return 0;
}

inline hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_5_select(conv1_stencil_cache& conv1_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv1_stencil_op_hcompute_conv2_stencil_1_5 read pattern: { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[2 + conv2_s1_y, 1 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  auto value_conv1_stencil_op_hcompute_conv1_stencil_1_16 = conv1_stencil.conv1_stencil_all_inputs_to_all_outputs.read(((2 + 1*conv2_s1_y)) - 0, ((1 + 1*conv2_s1_x)) - 0);
  return value_conv1_stencil_op_hcompute_conv1_stencil_1_16;
  return 0;
}

inline hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_6_select(conv1_stencil_cache& conv1_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv1_stencil_op_hcompute_conv2_stencil_1_6 read pattern: { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[conv2_s1_y, conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  auto value_conv1_stencil_op_hcompute_conv1_stencil_1_16 = conv1_stencil.conv1_stencil_all_inputs_to_all_outputs.read(((1*conv2_s1_y)) - 0, ((1*conv2_s1_x)) - 0);
  return value_conv1_stencil_op_hcompute_conv1_stencil_1_16;
  return 0;
}

inline hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_7_select(conv1_stencil_cache& conv1_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv1_stencil_op_hcompute_conv2_stencil_1_7 read pattern: { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[conv2_s1_y, 1 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  auto value_conv1_stencil_op_hcompute_conv1_stencil_1_16 = conv1_stencil.conv1_stencil_all_inputs_to_all_outputs.read(((1*conv2_s1_y)) - 0, ((1 + 1*conv2_s1_x)) - 0);
  return value_conv1_stencil_op_hcompute_conv1_stencil_1_16;
  return 0;
}

inline hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_8_select(conv1_stencil_cache& conv1_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv1_stencil_op_hcompute_conv2_stencil_1_8 read pattern: { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[conv2_s1_y, 2 + conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  auto value_conv1_stencil_op_hcompute_conv1_stencil_1_16 = conv1_stencil.conv1_stencil_all_inputs_to_all_outputs.read(((1*conv2_s1_y)) - 0, ((2 + 1*conv2_s1_x)) - 0);
  return value_conv1_stencil_op_hcompute_conv1_stencil_1_16;
  return 0;
}

inline hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_9_select(conv1_stencil_cache& conv1_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv1_stencil_op_hcompute_conv2_stencil_1_9 read pattern: { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv1_stencil[1 + conv2_s1_y, conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  auto value_conv1_stencil_op_hcompute_conv1_stencil_1_16 = conv1_stencil.conv1_stencil_all_inputs_to_all_outputs.read(((1 + 1*conv2_s1_y)) - 0, ((1*conv2_s1_x)) - 0);
  return value_conv1_stencil_op_hcompute_conv1_stencil_1_16;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv1_stencil_1_write
//	conv1_stencil_op_hcompute_conv1_stencil_1_16
inline void conv1_stencil_op_hcompute_conv1_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv1_stencil_1_write, conv1_stencil_cache& conv1_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
	hw_uint<16> conv1_stencil_op_hcompute_conv1_stencil_1_16_res = op_hcompute_conv1_stencil_1_write.extract<0, 15>();
	conv1_stencil_op_hcompute_conv1_stencil_1_16_write(conv1_stencil_op_hcompute_conv1_stencil_1_16_res, conv1_stencil, root, conv1_s1_y, conv1_s1_x, dynamic_address);
}

// op_hcompute_conv2_stencil_1_read
//	conv1_stencil_op_hcompute_conv2_stencil_1_5
//	conv1_stencil_op_hcompute_conv2_stencil_1_6
//	conv1_stencil_op_hcompute_conv2_stencil_1_7
//	conv1_stencil_op_hcompute_conv2_stencil_1_8
//	conv1_stencil_op_hcompute_conv2_stencil_1_9
//	conv1_stencil_op_hcompute_conv2_stencil_1_10
//	conv1_stencil_op_hcompute_conv2_stencil_1_11
//	conv1_stencil_op_hcompute_conv2_stencil_1_12
//	conv1_stencil_op_hcompute_conv2_stencil_1_13
inline hw_uint<144> conv1_stencil_op_hcompute_conv2_stencil_1_read_bundle_read(conv1_stencil_cache& conv1_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // conv1_stencil_op_hcompute_conv2_stencil_1_5
    // conv1_stencil_op_hcompute_conv2_stencil_1_6
    // conv1_stencil_op_hcompute_conv2_stencil_1_7
    // conv1_stencil_op_hcompute_conv2_stencil_1_8
    // conv1_stencil_op_hcompute_conv2_stencil_1_9
    // conv1_stencil_op_hcompute_conv2_stencil_1_10
    // conv1_stencil_op_hcompute_conv2_stencil_1_11
    // conv1_stencil_op_hcompute_conv2_stencil_1_12
    // conv1_stencil_op_hcompute_conv2_stencil_1_13

	hw_uint<144> result;
	hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_5_res = conv1_stencil_op_hcompute_conv2_stencil_1_5_select(conv1_stencil, root, conv2_s1_y, conv2_s1_x, dynamic_address);
	set_at<0, 144>(result, conv1_stencil_op_hcompute_conv2_stencil_1_5_res);
	hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_6_res = conv1_stencil_op_hcompute_conv2_stencil_1_6_select(conv1_stencil, root, conv2_s1_y, conv2_s1_x, dynamic_address);
	set_at<16, 144>(result, conv1_stencil_op_hcompute_conv2_stencil_1_6_res);
	hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_7_res = conv1_stencil_op_hcompute_conv2_stencil_1_7_select(conv1_stencil, root, conv2_s1_y, conv2_s1_x, dynamic_address);
	set_at<32, 144>(result, conv1_stencil_op_hcompute_conv2_stencil_1_7_res);
	hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_8_res = conv1_stencil_op_hcompute_conv2_stencil_1_8_select(conv1_stencil, root, conv2_s1_y, conv2_s1_x, dynamic_address);
	set_at<48, 144>(result, conv1_stencil_op_hcompute_conv2_stencil_1_8_res);
	hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_9_res = conv1_stencil_op_hcompute_conv2_stencil_1_9_select(conv1_stencil, root, conv2_s1_y, conv2_s1_x, dynamic_address);
	set_at<64, 144>(result, conv1_stencil_op_hcompute_conv2_stencil_1_9_res);
	hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_10_res = conv1_stencil_op_hcompute_conv2_stencil_1_10_select(conv1_stencil, root, conv2_s1_y, conv2_s1_x, dynamic_address);
	set_at<80, 144>(result, conv1_stencil_op_hcompute_conv2_stencil_1_10_res);
	hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_11_res = conv1_stencil_op_hcompute_conv2_stencil_1_11_select(conv1_stencil, root, conv2_s1_y, conv2_s1_x, dynamic_address);
	set_at<96, 144>(result, conv1_stencil_op_hcompute_conv2_stencil_1_11_res);
	hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_12_res = conv1_stencil_op_hcompute_conv2_stencil_1_12_select(conv1_stencil, root, conv2_s1_y, conv2_s1_x, dynamic_address);
	set_at<112, 144>(result, conv1_stencil_op_hcompute_conv2_stencil_1_12_res);
	hw_uint<16> conv1_stencil_op_hcompute_conv2_stencil_1_13_res = conv1_stencil_op_hcompute_conv2_stencil_1_13_select(conv1_stencil, root, conv2_s1_y, conv2_s1_x, dynamic_address);
	set_at<128, 144>(result, conv1_stencil_op_hcompute_conv2_stencil_1_13_res);
	return result;
}

struct conv1_stencil_clkwrk_dsa0_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 61], [0, 61]}
  hw_uint<16> RAM[62][62];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct conv1_stencil_clkwrk_dsa0_cache {
  // Reader addrs...
    // { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> conv1_stencil_clkwrk_dsa0[conv1_s1_y, conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  // # of banks: 1
  conv1_stencil_clkwrk_dsa0_all_inputs_to_all_outputs_cache conv1_stencil_clkwrk_dsa0_all_inputs_to_all_outputs;
};



inline void conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27_write(hw_uint<16>& conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27, conv1_stencil_clkwrk_dsa0_cache& conv1_stencil_clkwrk_dsa0, int root, int conv1_s0_y, int conv1_s0_x, int dynamic_address) {
  conv1_stencil_clkwrk_dsa0.conv1_stencil_clkwrk_dsa0_all_inputs_to_all_outputs.write(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27, ((1*conv1_s0_y)) - 0, ((1*conv1_s0_x)) - 0);
}

inline hw_uint<16> conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17_select(conv1_stencil_clkwrk_dsa0_cache& conv1_stencil_clkwrk_dsa0, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17 read pattern: { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> conv1_stencil_clkwrk_dsa0[conv1_s1_y, conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  auto value_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27 = conv1_stencil_clkwrk_dsa0.conv1_stencil_clkwrk_dsa0_all_inputs_to_all_outputs.read(((1*conv1_s1_y)) - 0, ((1*conv1_s1_x)) - 0);
  return value_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv1_stencil_1_read
//	conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17
inline hw_uint<16> conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_bundle_read(conv1_stencil_clkwrk_dsa0_cache& conv1_stencil_clkwrk_dsa0, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17

	hw_uint<16> result;
	hw_uint<16> conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17_res = conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17_select(conv1_stencil_clkwrk_dsa0, root, conv1_s1_y, conv1_s1_x, dynamic_address);
	set_at<0, 16>(result, conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_17_res);
	return result;
}

// op_hcompute_conv1_stencil_write
//	conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27
inline void conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv1_stencil_write, conv1_stencil_clkwrk_dsa0_cache& conv1_stencil_clkwrk_dsa0, int root, int conv1_s0_y, int conv1_s0_x, int dynamic_address) {
	hw_uint<16> conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27_res = op_hcompute_conv1_stencil_write.extract<0, 15>();
	conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27_write(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_27_res, conv1_stencil_clkwrk_dsa0, root, conv1_s0_y, conv1_s0_x, dynamic_address);
}

struct conv2_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 59], [0, 59]}
  hw_uint<16> RAM[60][60];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct conv2_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv2_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 59 and 0 <= hw_output_s0_x_xi <= 59 }
  // # of banks: 1
  conv2_stencil_all_inputs_to_all_outputs_cache conv2_stencil_all_inputs_to_all_outputs;
};



inline void conv2_stencil_op_hcompute_conv2_stencil_1_4_write(hw_uint<16>& conv2_stencil_op_hcompute_conv2_stencil_1_4, conv2_stencil_cache& conv2_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
  conv2_stencil.conv2_stencil_all_inputs_to_all_outputs.write(conv2_stencil_op_hcompute_conv2_stencil_1_4, ((1*conv2_s1_y)) - 0, ((1*conv2_s1_x)) - 0);
}

inline hw_uint<16> conv2_stencil_op_hcompute_hw_output_stencil_1_select(conv2_stencil_cache& conv2_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv2_stencil_op_hcompute_hw_output_stencil_1 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv2_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 59 and 0 <= hw_output_s0_x_xi <= 59 }
  auto value_conv2_stencil_op_hcompute_conv2_stencil_1_4 = conv2_stencil.conv2_stencil_all_inputs_to_all_outputs.read(((1*hw_output_s0_y_yi)) - 0, ((1*hw_output_s0_x_xi)) - 0);
  return value_conv2_stencil_op_hcompute_conv2_stencil_1_4;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv2_stencil_1_write
//	conv2_stencil_op_hcompute_conv2_stencil_1_4
inline void conv2_stencil_op_hcompute_conv2_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv2_stencil_1_write, conv2_stencil_cache& conv2_stencil, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
	hw_uint<16> conv2_stencil_op_hcompute_conv2_stencil_1_4_res = op_hcompute_conv2_stencil_1_write.extract<0, 15>();
	conv2_stencil_op_hcompute_conv2_stencil_1_4_write(conv2_stencil_op_hcompute_conv2_stencil_1_4_res, conv2_stencil, root, conv2_s1_y, conv2_s1_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv2_stencil_op_hcompute_hw_output_stencil_1
inline hw_uint<16> conv2_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv2_stencil_cache& conv2_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv2_stencil_op_hcompute_hw_output_stencil_1

	hw_uint<16> result;
	hw_uint<16> conv2_stencil_op_hcompute_hw_output_stencil_1_res = conv2_stencil_op_hcompute_hw_output_stencil_1_select(conv2_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv2_stencil_op_hcompute_hw_output_stencil_1_res);
	return result;
}

struct conv2_stencil_clkwrk_dsa1_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 59], [0, 59]}
  hw_uint<16> RAM[60][60];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct conv2_stencil_clkwrk_dsa1_cache {
  // Reader addrs...
    // { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv2_stencil_clkwrk_dsa1[conv2_s1_y, conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  // # of banks: 1
  conv2_stencil_clkwrk_dsa1_all_inputs_to_all_outputs_cache conv2_stencil_clkwrk_dsa1_all_inputs_to_all_outputs;
};



inline void conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15_write(hw_uint<16>& conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15, conv2_stencil_clkwrk_dsa1_cache& conv2_stencil_clkwrk_dsa1, int root, int conv2_s0_y, int conv2_s0_x, int dynamic_address) {
  conv2_stencil_clkwrk_dsa1.conv2_stencil_clkwrk_dsa1_all_inputs_to_all_outputs.write(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15, ((1*conv2_s0_y)) - 0, ((1*conv2_s0_x)) - 0);
}

inline hw_uint<16> conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14_select(conv2_stencil_clkwrk_dsa1_cache& conv2_stencil_clkwrk_dsa1, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14 read pattern: { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> conv2_stencil_clkwrk_dsa1[conv2_s1_y, conv2_s1_x] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
  auto value_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15 = conv2_stencil_clkwrk_dsa1.conv2_stencil_clkwrk_dsa1_all_inputs_to_all_outputs.read(((1*conv2_s1_y)) - 0, ((1*conv2_s1_x)) - 0);
  return value_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv2_stencil_1_read
//	conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14
inline hw_uint<16> conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_bundle_read(conv2_stencil_clkwrk_dsa1_cache& conv2_stencil_clkwrk_dsa1, int root, int conv2_s1_y, int conv2_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14

	hw_uint<16> result;
	hw_uint<16> conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14_res = conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14_select(conv2_stencil_clkwrk_dsa1, root, conv2_s1_y, conv2_s1_x, dynamic_address);
	set_at<0, 16>(result, conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_14_res);
	return result;
}

// op_hcompute_conv2_stencil_write
//	conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15
inline void conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv2_stencil_write, conv2_stencil_clkwrk_dsa1_cache& conv2_stencil_clkwrk_dsa1, int root, int conv2_s0_y, int conv2_s0_x, int dynamic_address) {
	hw_uint<16> conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15_res = op_hcompute_conv2_stencil_write.extract<0, 15>();
	conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15_write(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_15_res, conv2_stencil_clkwrk_dsa1, root, conv2_s0_y, conv2_s0_x, dynamic_address);
}

struct hw_input_global_wrapper_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63], [0, 63]}
  hw_uint<16> RAM[64][64];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct hw_input_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[conv1_s1_y, conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
    // { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[1 + conv1_s1_y, conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
    // { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[2 + conv1_s1_y, conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
    // { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[conv1_s1_y, 1 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
    // { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[1 + conv1_s1_y, 1 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
    // { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[2 + conv1_s1_y, 1 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
    // { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[conv1_s1_y, 2 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
    // { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[2 + conv1_s1_y, 2 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
    // { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[1 + conv1_s1_y, 2 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  // # of banks: 1
  hw_input_global_wrapper_stencil_all_inputs_to_all_outputs_cache hw_input_global_wrapper_stencil_all_inputs_to_all_outputs;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18 read pattern: { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[conv1_s1_y, conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv1_s1_y)) - 0, ((1*conv1_s1_x)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19 read pattern: { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[1 + conv1_s1_y, conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1 + 1*conv1_s1_y)) - 0, ((1*conv1_s1_x)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20 read pattern: { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[2 + conv1_s1_y, conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((2 + 1*conv1_s1_y)) - 0, ((1*conv1_s1_x)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21 read pattern: { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[conv1_s1_y, 1 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv1_s1_y)) - 0, ((1 + 1*conv1_s1_x)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22 read pattern: { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[1 + conv1_s1_y, 1 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1 + 1*conv1_s1_y)) - 0, ((1 + 1*conv1_s1_x)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23 read pattern: { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[2 + conv1_s1_y, 1 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((2 + 1*conv1_s1_y)) - 0, ((1 + 1*conv1_s1_x)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24 read pattern: { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[conv1_s1_y, 2 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv1_s1_y)) - 0, ((2 + 1*conv1_s1_x)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25 read pattern: { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[2 + conv1_s1_y, 2 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((2 + 1*conv1_s1_y)) - 0, ((2 + 1*conv1_s1_x)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26 read pattern: { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> hw_input_global_wrapper_stencil[1 + conv1_s1_y, 2 + conv1_s1_x] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1 + 1*conv1_s1_y)) - 0, ((2 + 1*conv1_s1_x)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv1_stencil_1_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18
//	hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19
//	hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20
//	hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21
//	hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22
//	hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23
//	hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24
//	hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25
//	hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26
inline hw_uint<144> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv1_s1_y, int conv1_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18
    // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19
    // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20
    // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21
    // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22
    // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23
    // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24
    // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25
    // hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26

	hw_uint<144> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18_res = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18_select(hw_input_global_wrapper_stencil, root, conv1_s1_y, conv1_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_18_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19_res = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19_select(hw_input_global_wrapper_stencil, root, conv1_s1_y, conv1_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_19_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20_res = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20_select(hw_input_global_wrapper_stencil, root, conv1_s1_y, conv1_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_20_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21_res = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21_select(hw_input_global_wrapper_stencil, root, conv1_s1_y, conv1_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_21_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22_res = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22_select(hw_input_global_wrapper_stencil, root, conv1_s1_y, conv1_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_22_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23_res = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23_select(hw_input_global_wrapper_stencil, root, conv1_s1_y, conv1_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_23_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24_res = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24_select(hw_input_global_wrapper_stencil, root, conv1_s1_y, conv1_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_24_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25_res = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25_select(hw_input_global_wrapper_stencil, root, conv1_s1_y, conv1_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_25_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26_res = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26_select(hw_input_global_wrapper_stencil, root, conv1_s1_y, conv1_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_26_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 303744 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_value = hw_input_stencil.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv1_stencil(conv1_stencil_clkwrk_dsa0_cache& conv1_stencil_clkwrk_dsa0, int root, int conv1_s0_y, int conv1_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv1_stencil();
	// Produce: conv1_stencil_clkwrk_dsa0
	conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_bundle_write(/* arg names */compute_result, conv1_stencil_clkwrk_dsa0, root, conv1_s0_y, conv1_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv1_stencil_1(conv1_stencil_clkwrk_dsa0_cache& conv1_stencil_clkwrk_dsa0, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, conv1_stencil_cache& conv1_stencil, int root, int conv1_s1_y, int conv1_s1_x) {
  // Dynamic address computation

	// Consume: conv1_stencil_clkwrk_dsa0
	auto conv1_stencil_clkwrk_dsa0_conv1_s1_y_c__conv1_s1_x_value = conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_bundle_read(conv1_stencil_clkwrk_dsa0/* source_delay */, root, conv1_s1_y, conv1_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_conv1_s1_y_c__conv1_s1_x_value = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, conv1_s1_y, conv1_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv1_stencil_1(conv1_stencil_clkwrk_dsa0_conv1_s1_y_c__conv1_s1_x_value, hw_input_global_wrapper_stencil_conv1_s1_y_c__conv1_s1_x_value);
	// Produce: conv1_stencil
	conv1_stencil_op_hcompute_conv1_stencil_1_write_bundle_write(/* arg names */compute_result, conv1_stencil, root, conv1_s1_y, conv1_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv2_stencil(conv2_stencil_clkwrk_dsa1_cache& conv2_stencil_clkwrk_dsa1, int root, int conv2_s0_y, int conv2_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv2_stencil();
	// Produce: conv2_stencil_clkwrk_dsa1
	conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_bundle_write(/* arg names */compute_result, conv2_stencil_clkwrk_dsa1, root, conv2_s0_y, conv2_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv2_stencil_1(conv1_stencil_cache& conv1_stencil, conv2_stencil_clkwrk_dsa1_cache& conv2_stencil_clkwrk_dsa1, conv2_stencil_cache& conv2_stencil, int root, int conv2_s1_y, int conv2_s1_x) {
  // Dynamic address computation

	// Consume: conv1_stencil
	auto conv1_stencil__lp_conv2_s1_y__p__2_rp__c___lp_conv2_s1_x__p__1_rp__value = conv1_stencil_op_hcompute_conv2_stencil_1_read_bundle_read(conv1_stencil/* source_delay */, root, conv2_s1_y, conv2_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: conv2_stencil_clkwrk_dsa1
	auto conv2_stencil_clkwrk_dsa1_conv2_s1_y_c__conv2_s1_x_value = conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_bundle_read(conv2_stencil_clkwrk_dsa1/* source_delay */, root, conv2_s1_y, conv2_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv2_stencil_1(conv1_stencil__lp_conv2_s1_y__p__2_rp__c___lp_conv2_s1_x__p__1_rp__value, conv2_stencil_clkwrk_dsa1_conv2_s1_y_c__conv2_s1_x_value);
	// Produce: conv2_stencil
	conv2_stencil_op_hcompute_conv2_stencil_1_write_bundle_write(/* arg names */compute_result, conv2_stencil, root, conv2_s1_y, conv2_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(conv2_stencil_cache& conv2_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: conv2_stencil
	auto conv2_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = conv2_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv2_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv2_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_cascade(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_cascade_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  conv1_stencil_cache conv1_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  conv1_stencil_clkwrk_dsa0_cache conv1_stencil_clkwrk_dsa0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  conv2_stencil_cache conv2_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  conv2_stencil_clkwrk_dsa1_cache conv2_stencil_clkwrk_dsa1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_conv1_stencil[root = 0, conv1_s0_y, conv1_s0_x] -> [0, 0, 1, conv1_s0_y, 0, conv1_s0_x, 0] : 0 <= conv1_s0_y <= 61 and 0 <= conv1_s0_x <= 61; op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> [0, 0, 4, conv2_s1_y, 0, conv2_s1_x, 0] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59; op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> [0, 0, 2, conv1_s1_y, 0, conv1_s1_x, 0] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61; op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63; op_hcompute_conv2_stencil[root = 0, conv2_s0_y, conv2_s0_x] -> [0, 0, 3, conv2_s0_y, 0, conv2_s0_x, 0] : 0 <= conv2_s0_y <= 59 and 0 <= conv2_s0_x <= 59; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 5, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 59 and 0 <= hw_output_s0_x_xi <= 59 }
//   { op_hcompute_conv1_stencil[root = 0, conv1_s0_y, conv1_s0_x] -> [0, 0, 1, conv1_s0_y, 0, conv1_s0_x, 0] : 0 <= conv1_s0_y <= 61 and 0 <= conv1_s0_x <= 61 }
// Condition for op_hcompute_conv1_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-1 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((61 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((61 + -1*i5)) >= 0)))
//   { op_hcompute_conv2_stencil_1[root = 0, conv2_s1_y, conv2_s1_x] -> [0, 0, 4, conv2_s1_y, 0, conv2_s1_x, 0] : 0 <= conv2_s1_y <= 59 and 0 <= conv2_s1_x <= 59 }
// Condition for op_hcompute_conv2_stencil_1(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-4 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((59 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((59 + -1*i5)) >= 0)))
//   { op_hcompute_conv1_stencil_1[root = 0, conv1_s1_y, conv1_s1_x] -> [0, 0, 2, conv1_s1_y, 0, conv1_s1_x, 0] : 0 <= conv1_s1_y <= 61 and 0 <= conv1_s1_x <= 61 }
// Condition for op_hcompute_conv1_stencil_1(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((61 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((61 + -1*i5)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((63 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((63 + -1*i5)) >= 0)))
//   { op_hcompute_conv2_stencil[root = 0, conv2_s0_y, conv2_s0_x] -> [0, 0, 3, conv2_s0_y, 0, conv2_s0_x, 0] : 0 <= conv2_s0_y <= 59 and 0 <= conv2_s0_x <= 59 }
// Condition for op_hcompute_conv2_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((59 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((59 + -1*i5)) >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 5, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 59 and 0 <= hw_output_s0_x_xi <= 59 }
// Condition for op_hcompute_hw_output_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-5 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((59 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((59 + -1*i5)) >= 0)))

	{
	  for (int c3 = 0; c3 <= 63; c3 += 1)
	    for (int c5 = 0; c5 <= 63; c5 += 1)
	      op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 61; c5 += 1)
	      op_hcompute_conv1_stencil(conv1_stencil_clkwrk_dsa0, 0, c3, c5);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 61; c5 += 1)
	      op_hcompute_conv1_stencil_1(conv1_stencil_clkwrk_dsa0 /* buf name */, hw_input_global_wrapper_stencil /* buf name */, conv1_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 59; c3 += 1)
	    for (int c5 = 0; c5 <= 59; c5 += 1)
	      op_hcompute_conv2_stencil(conv2_stencil_clkwrk_dsa1, 0, c3, c5);
	  for (int c3 = 0; c3 <= 59; c3 += 1)
	    for (int c5 = 0; c5 <= 59; c5 += 1)
	      op_hcompute_conv2_stencil_1(conv1_stencil /* buf name */, conv2_stencil_clkwrk_dsa1 /* buf name */, conv2_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 59; c3 += 1)
	    for (int c5 = 0; c5 <= 59; c5 += 1)
	      op_hcompute_hw_output_stencil(conv2_stencil /* buf name */, hw_output_stencil, 0, c3, c5);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_cascade_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_cascade(hw_input_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 4096;
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 59 and 0 <= hw_output_s0_x_xi <= 59 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 3600;


extern "C" {

void unoptimized_cascade_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers*size);

  unoptimized_cascade_wrapper(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_cascade_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_cascade(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

