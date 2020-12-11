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



inline void conv_stencil_op_hcompute_conv_stencil_24_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_24, conv_stencil_cache& conv_stencil, int root, int conv_s0_w, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_24, conv_s0_y - 0, conv_s0_x - 0, conv_s0_w - 0);
}

inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_28_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_28 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> conv_stencil[conv_s1_y, 0, 4conv_s1_oc + conv_stencil_ld2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 3 }
  auto value_conv_stencil_op_hcompute_conv_stencil_24 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_s1_y - 0, 0 - 0, 4*conv_s1_oc + conv_stencil_ld2 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_24;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_1_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_1 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_24 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(hw_output_s0_y_yi - 0, hw_output_s0_x_xi - 0, hw_output_s0_w - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_24;
  return 0;
}

// # of bundles = 3
// load_to_conv_stencil_rb_at_conv_s1_x3_read
//	conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_28
inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_28

	hw_uint<16> result;
	hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_28_res = conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_28_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_28_res);
	return result;
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_24
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_w, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_24_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_24_write(conv_stencil_op_hcompute_conv_stencil_24_res, conv_stencil, root, conv_s0_w, conv_s0_y, conv_s0_x, dynamic_address);
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

struct conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
  hw_uint<32>  RAM[28][28][16];
  inline hw_uint<32>  read(int d0, int d1, int d2) {
    return RAM[d0][d1][d2];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1, int d2) {
    RAM[d0][d1][d2] = value;
  }

};

struct conv_stencil_rb_at_conv_s1_x_cache {
  // # of banks: 1
  conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs_cache conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs;
};



inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27, conv_s1_y - 0, 0 - 0, 4*conv_s1_oc + conv_stencil_ld2 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_25_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_25, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_25, conv_s1_y - 0, conv_s1_x - 0, 4*conv_s1_oc + conv_stencil_ld6 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6, conv_s1_y - 0, conv_s1_x - 0, 4*conv_s1_oc - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7, conv_s1_y - 0, conv_s1_x - 0, 1 + 4*conv_s1_oc - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_8_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_8, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_8, conv_s1_y - 0, conv_s1_x - 0, 2 + 4*conv_s1_oc - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_9_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_9, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_9, conv_s1_y - 0, conv_s1_x - 0, 3 + 4*conv_s1_oc - 0);
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_26_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_26 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> conv_stencil_rb_at_conv_s1_x[conv_s1_y, conv_s1_x, 4conv_s1_oc + conv_stencil_ld6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 3 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_y - 0, conv_s1_x - 0, 4*conv_s1_oc + conv_stencil_ld6 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_10_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_10 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> conv_stencil_rb_at_conv_s1_x[conv_s1_y, conv_s1_x, 4conv_s1_oc] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_y - 0, conv_s1_x - 0, 4*conv_s1_oc - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_15_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_15 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> conv_stencil_rb_at_conv_s1_x[conv_s1_y, conv_s1_x, 1 + 4conv_s1_oc] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_y - 0, conv_s1_x - 0, 1 + 4*conv_s1_oc - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_18_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_18 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> conv_stencil_rb_at_conv_s1_x[conv_s1_y, conv_s1_x, 2 + 4conv_s1_oc] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_y - 0, conv_s1_x - 0, 2 + 4*conv_s1_oc - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_21_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_21 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> conv_stencil_rb_at_conv_s1_x[conv_s1_y, conv_s1_x, 3 + 4conv_s1_oc] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_y - 0, conv_s1_x - 0, 3 + 4*conv_s1_oc - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27;
  return 0;
}

// # of bundles = 5
// load_to_conv_stencil_rb_at_conv_s1_x3_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27_res = load_to_conv_stencil_rb_at_conv_s1_x3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_27_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
}

// load_to_conv_stencil_rb_at_conv_s1_x7_read
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_26
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_26

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_26_res = conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_26_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_26_res);
	return result;
}

// load_to_conv_stencil_rb_at_conv_s1_x7_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_25
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_25_res = load_to_conv_stencil_rb_at_conv_s1_x7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_25_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_25_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
}

// op_hcompute_conv_stencil_1_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_10
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_15
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_18
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_21
inline hw_uint<128> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
  // # of ports in bundle: 4
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_10
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_15
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_18
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_21

	hw_uint<128> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_10_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_10_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<0, 128>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_10_res);
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_15_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_15_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<32, 128>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_15_res);
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_18_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_18_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<64, 128>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_18_res);
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_21_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_21_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<96, 128>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_21_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_8
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_9
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<128>& op_hcompute_conv_stencil_1_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_res = op_hcompute_conv_stencil_1_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_res = op_hcompute_conv_stencil_1_write.extract<32, 63>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_7_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_8_res = op_hcompute_conv_stencil_1_write.extract<64, 95>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_8_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_8_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_9_res = op_hcompute_conv_stencil_1_write.extract<96, 127>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_9_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_9_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
}

#include "hw_classes.h"

struct hw_input_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 31], [0, 31], [0, 7]}
  hw_uint<16> RAM[32][32][8];
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
  hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.write(hw_input_stencil_op_hcompute_hw_input_stencil_4, hw_input_s0_y - 0, hw_input_s0_x - 0, hw_input_s0_z - 0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_11 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> hw_input_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2conv_s1_ic] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 2*conv_s1_ic - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_13_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_13 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> hw_input_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1 + 2conv_s1_ic] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_4 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 1 + 2*conv_s1_ic - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_4;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_11
//	hw_input_stencil_op_hcompute_conv_stencil_1_13
inline hw_uint<32> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
  // # of ports in bundle: 2
    // hw_input_stencil_op_hcompute_conv_stencil_1_11
    // hw_input_stencil_op_hcompute_conv_stencil_1_13

	hw_uint<32> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_res = hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<0, 32>(result, hw_input_stencil_op_hcompute_conv_stencil_1_11_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_13_res = hw_input_stencil_op_hcompute_conv_stencil_1_13_select(hw_input_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<16, 32>(result, hw_input_stencil_op_hcompute_conv_stencil_1_13_res);
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
	// RAM Box: {[0, 2], [0, 2], [0, 15], [0, 7]}
  hw_uint<16> RAM[3][3][16][8];
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
  hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2, hw_kernel_s0_y - 0, hw_kernel_s0_x - 0, hw_kernel_s0_w - 0, hw_kernel_s0_z - 0);
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_12_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_12 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, 4conv_s1_oc, 2conv_s1_ic] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 4*conv_s1_oc - 0, 2*conv_s1_ic - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_14_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_14 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, 4conv_s1_oc, 1 + 2conv_s1_ic] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 4*conv_s1_oc - 0, 1 + 2*conv_s1_ic - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_16_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_16 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, 1 + 4conv_s1_oc, 2conv_s1_ic] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 1 + 4*conv_s1_oc - 0, 2*conv_s1_ic - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_17_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_17 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, 1 + 4conv_s1_oc, 1 + 2conv_s1_ic] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 1 + 4*conv_s1_oc - 0, 1 + 2*conv_s1_ic - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_19_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_19 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, 2 + 4conv_s1_oc, 2conv_s1_ic] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 2 + 4*conv_s1_oc - 0, 2*conv_s1_ic - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_20_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_20 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, 2 + 4conv_s1_oc, 1 + 2conv_s1_ic] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 2 + 4*conv_s1_oc - 0, 1 + 2*conv_s1_ic - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_22_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_22 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, 3 + 4conv_s1_oc, 2conv_s1_ic] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 3 + 4*conv_s1_oc - 0, 2*conv_s1_ic - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_23_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_23 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> hw_kernel_stencil[conv_s1_r_y, conv_s1_r_x, 3 + 4conv_s1_oc, 1 + 2conv_s1_ic] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 3 + 4*conv_s1_oc - 0, 1 + 2*conv_s1_ic - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

// # of bundles = 2
// op_hcompute_conv_stencil_1_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_12
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_14
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_16
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_17
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_19
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_20
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_22
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_23
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_12
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_14
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_16
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_17
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_19
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_20
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_22
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_23

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_12_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_12_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_12_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_14_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_14_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_14_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_16_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_16_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_16_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_17_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_17_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_17_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_19_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_19_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_19_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_20_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_20_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_20_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_22_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_22_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_22_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_23_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_23_select(hw_kernel_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_23_res);
	return result;
}

// op_hcompute_hw_kernel_stencil_write
//	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2
inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_stencil_write, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res = op_hcompute_hw_kernel_stencil_write.extract<0, 15>();
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, dynamic_address);
}

// Total re-use buffer capacity: 751616 bits


// Operation logic
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

inline void op_hcompute_conv_stencil_1(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_s1_ic) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_y_c__conv_s1_x_c__conv_s1_oc_m_4_p_0_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_p_conv_s1_ic_m_2_value = hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil__lp_conv_s1_r_y_rp__c___lp_conv_s1_r_x_rp__c__0_p_conv_s1_oc_m_4_c__0_p_conv_s1_ic_m_2_value = hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_1(conv_stencil_rb_at_conv_s1_x_conv_s1_y_c__conv_s1_x_c__conv_s1_oc_m_4_p_0_value, hw_input_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_p_conv_s1_ic_m_2_value, hw_kernel_stencil__lp_conv_s1_r_y_rp__c___lp_conv_s1_r_x_rp__c__0_p_conv_s1_oc_m_4_c__0_p_conv_s1_ic_m_2_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_conv_stencil_rb_at_conv_s1_x7(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_stencil_ld4__p__conv_s1_y_c__conv_stencil_ld5__p__conv_s1_x_c__conv_stencil_ld6__p__4_m_conv_s1_oc_value = conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_write_bundle_write(/* arg names */conv_stencil_rb_at_conv_s1_x_conv_stencil_ld4__p__conv_s1_y_c__conv_stencil_ld5__p__conv_s1_x_c__conv_stencil_ld6__p__4_m_conv_s1_oc_value, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil(conv_stencil_cache& conv_stencil, int root, int conv_s0_w, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s0_w, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__hw_output_s0_w_value = conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_c__hw_output_s0_w_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

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

inline void load_to_conv_stencil_rb_at_conv_s1_x3(conv_stencil_cache& conv_stencil, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_oc, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_stencil_ld0__p__conv_s1_y_c__conv_stencil_ld1__p__0_c__conv_stencil_ld2__p__4_m_conv_s1_oc_value = conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_write_bundle_write(/* arg names */conv_stencil_conv_stencil_ld0__p__conv_s1_y_c__conv_stencil_ld1__p__0_c__conv_stencil_ld2__p__4_m_conv_s1_oc_value, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, 0);

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
  conv_stencil_rb_at_conv_s1_x_cache conv_stencil_rb_at_conv_s1_x;
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

// schedule: { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_oc, 0, conv_s1_y, 0, 0, 0, 0, 0, conv_stencil_ld2, 0, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 3; op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_oc, 0, conv_s1_y, 1, conv_s1_x, 0, conv_s1_ic, 0, 0, 0, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3; op_hcompute_conv_stencil[root = 0, conv_s0_w, conv_s0_y, conv_s0_x] -> [0, 0, 2, conv_s0_w, 0, conv_s0_y, 0, conv_s0_x, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] : 0 <= conv_s0_w <= 15 and 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0, 0, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_input_s0_y <= 31 and 0 <= hw_input_s0_x <= 31 and 0 <= hw_input_s0_z <= 7; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_oc, 0, conv_s1_y, 1, conv_s1_x, 1, 0, 0, 0, 0, conv_stencil_ld6, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 3 }
//   { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_oc, 0, conv_s1_y, 0, 0, 0, 0, 0, conv_stencil_ld2, 0, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 3 }
// Condition for load_to_conv_stencil_rb_at_conv_s1_x3(((i18 == 0) && (i17 == 0) && (i16 == 0) && (i14 == 0) && (i13 == 0) && (i12 == 0) && (i11 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (3 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0) && (i15 >= 0) && (3 - i15 >= 0)))
//   { op_hcompute_conv_stencil_1[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_s1_ic] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_oc, 0, conv_s1_y, 1, conv_s1_x, 0, conv_s1_ic, 0, 0, 0, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_ic <= 3 }
// Condition for op_hcompute_conv_stencil_1(((i18 == 0) && (i17 == 0) && (i16 == 0) && (i15 == 0) && (i14 == 0) && (i12 == 0) && (-1 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (3 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0) && (i11 >= 0) && (27 - i11 >= 0) && (i13 >= 0) && (3 - i13 >= 0)))
//   { op_hcompute_conv_stencil[root = 0, conv_s0_w, conv_s0_y, conv_s0_x] -> [0, 0, 2, conv_s0_w, 0, conv_s0_y, 0, conv_s0_x, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] : 0 <= conv_s0_w <= 15 and 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil(((i18 == 0) && (i17 == 0) && (i16 == 0) && (i15 == 0) && (i14 == 0) && (i13 == 0) && (i12 == 0) && (i11 == 0) && (i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (15 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0)))
//   { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0, 0, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7 }
// Condition for op_hcompute_hw_kernel_stencil(((i18 == 0) && (i17 == 0) && (i16 == 0) && (i15 == 0) && (i14 == 0) && (i13 == 0) && (i12 == 0) && (i11 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (15 - i7 >= 0) && (i9 >= 0) && (7 - i9 >= 0)))
//   { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_input_s0_y <= 31 and 0 <= hw_input_s0_x <= 31 and 0 <= hw_input_s0_z <= 7 }
// Condition for op_hcompute_hw_input_stencil(((i18 == 0) && (i17 == 0) && (i16 == 0) && (i15 == 0) && (i14 == 0) && (i13 == 0) && (i12 == 0) && (i11 == 0) && (i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (31 - i3 >= 0) && (i5 >= 0) && (31 - i5 >= 0) && (i7 >= 0) && (7 - i7 >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil(((i18 == 0) && (i17 == 0) && (i16 == 0) && (i15 == 0) && (i14 == 0) && (i13 == 0) && (i12 == 0) && (i11 == 0) && (i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-4 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (15 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0)))
//   { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_oc, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> [0, 0, 3, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_oc, 0, conv_s1_y, 1, conv_s1_x, 1, 0, 0, 0, 0, conv_stencil_ld6, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_oc <= 3 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 3 }
// Condition for load_to_conv_stencil_rb_at_conv_s1_x7(((i18 == 0) && (i16 == 0) && (i15 == 0) && (i14 == 0) && (i13 == 0) && (-1 + i12 == 0) && (-1 + i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (3 - i7 >= 0) && (i9 >= 0) && (27 - i9 >= 0) && (i11 >= 0) && (27 - i11 >= 0) && (i17 >= 0) && (3 - i17 >= 0)))

  /*
{
  for (int c3 = 0; c3 <= 31; c3 += 1)
    for (int c5 = 0; c5 <= 31; c5 += 1)
      for (int c7 = 0; c7 <= 7; c7 += 1)
        op_hcompute_hw_input_stencil(0, c3, c5, c7);
  for (int c3 = 0; c3 <= 2; c3 += 1)
    for (int c5 = 0; c5 <= 2; c5 += 1)
      for (int c7 = 0; c7 <= 15; c7 += 1)
        for (int c9 = 0; c9 <= 7; c9 += 1)
          op_hcompute_hw_kernel_stencil(0, c3, c5, c7, c9);
  for (int c3 = 0; c3 <= 15; c3 += 1)
    for (int c5 = 0; c5 <= 27; c5 += 1)
      for (int c7 = 0; c7 <= 27; c7 += 1)
        op_hcompute_conv_stencil(0, c3, c5, c7);
  for (int c3 = 0; c3 <= 2; c3 += 1)
    for (int c5 = 0; c5 <= 2; c5 += 1)
      for (int c7 = 0; c7 <= 3; c7 += 1)
        for (int c9 = 0; c9 <= 27; c9 += 1) {
          for (int c15 = 0; c15 <= 3; c15 += 1)
            load_to_conv_stencil_rb_at_conv_s1_x3(0, c3, c5, c7, c9, 0, 0, c15);
          for (int c11 = 0; c11 <= 27; c11 += 1) {
            for (int c13 = 0; c13 <= 3; c13 += 1)
              op_hcompute_conv_stencil_1(0, c3, c5, c7, c9, c11, c13);
            for (int c17 = 0; c17 <= 3; c17 += 1)
              load_to_conv_stencil_rb_at_conv_s1_x7(0, c3, c5, c7, c9, c11, 0, 0, c17);
          }
        }
  for (int c3 = 0; c3 <= 15; c3 += 1)
    for (int c5 = 0; c5 <= 27; c5 += 1)
      for (int c7 = 0; c7 <= 27; c7 += 1)
        op_hcompute_hw_output_stencil(0, c3, c5, c7);
}

  */
	{
	  for (int c3 = 0; c3 <= 31; c3 += 1)
	    for (int c5 = 0; c5 <= 31; c5 += 1)
	      for (int c7 = 0; c7 <= 7; c7 += 1)
	        op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c3, c5, c7);
	  for (int c3 = 0; c3 <= 2; c3 += 1)
	    for (int c5 = 0; c5 <= 2; c5 += 1)
	      for (int c7 = 0; c7 <= 15; c7 += 1)
	        for (int c9 = 0; c9 <= 7; c9 += 1)
	          op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, c3, c5, c7, c9);
	  for (int c3 = 0; c3 <= 15; c3 += 1)
	    for (int c5 = 0; c5 <= 27; c5 += 1)
	      for (int c7 = 0; c7 <= 27; c7 += 1)
	        op_hcompute_conv_stencil(conv_stencil, 0, c3, c5, c7);
	  for (int c3 = 0; c3 <= 2; c3 += 1)
	    for (int c5 = 0; c5 <= 2; c5 += 1)
	      for (int c7 = 0; c7 <= 3; c7 += 1)
	        for (int c9 = 0; c9 <= 27; c9 += 1) {
	          for (int c15 = 0; c15 <= 3; c15 += 1)
	            load_to_conv_stencil_rb_at_conv_s1_x3(conv_stencil /* buf name */, conv_stencil_rb_at_conv_s1_x, 0, c3, c5, c7, c9, 0, 0, c15);
	          for (int c11 = 0; c11 <= 27; c11 += 1) {
	            for (int c13 = 0; c13 <= 3; c13 += 1)
	              op_hcompute_conv_stencil_1(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9, c11, c13);
	            for (int c17 = 0; c17 <= 3; c17 += 1)
	              load_to_conv_stencil_rb_at_conv_s1_x7(conv_stencil_rb_at_conv_s1_x /* buf name */, 0, c3, c5, c7, c9, c11, 0, 0, c17);
	          }
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
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 12544;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> input_copy_stencil[hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] : 0 <= hw_input_s0_y <= 31 and 0 <= hw_input_s0_x <= 31 and 0 <= hw_input_s0_z <= 7 }
const int op_hcompute_hw_input_stencil_read_pipe0_num_transfers = 8192;
  // { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> kernel_copy_stencil[hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7 }
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

