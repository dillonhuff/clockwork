#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: resnet_compute.h
#include "resnet_compute.h"

struct conv_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 2], [0, 27], [0, 27]}
  hw_uint<16> RAM[3][28][28];
  inline hw_uint<16> read(int d0, int d1, int d2) {
    return RAM[d0][d1][d2];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2) {
    RAM[d0][d1][d2] = value;
  }

};

struct conv_stencil_cache {
  // Reader addrs...
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[0, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[1, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[2, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_w = 0, pad_pad_root_to_hw_output_s0_w_to_hw_output_s0_w = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_w <= 2 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // # of banks: 1
  conv_stencil_all_inputs_to_all_outputs_cache conv_stencil_all_inputs_to_all_outputs;
};



inline void conv_stencil_op_hcompute_conv_stencil_1_61_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_61, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_1_61, ((1)) - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_60_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2_60, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_2_60, ((2)) - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_3_42_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_3_42, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_3_42, 0 - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_24_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4_24, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_4_24, ((1)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_5_6_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_5_6, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_5_6, ((2)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_62_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_62, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_62, 0 - 0, ((1*conv_s0_y)) - 0, ((1*conv_s0_x)) - 0);
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_43_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_3_43 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[0, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_61 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(0 - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_61;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_25_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_4_25 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[1, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_61 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_61;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_7_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_5_7 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil[2, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_61 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((2)) - 0, ((1*conv_s1_y)) - 0, ((1*conv_s1_x)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_61;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_1_select(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_w, int pad_pad_root_to_hw_output_s0_w_to_hw_output_s0_w, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_1 read pattern: { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_w = 0, pad_pad_root_to_hw_output_s0_w_to_hw_output_s0_w = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_w <= 2 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_61 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*hw_output_s0_w)) - 0, ((1*hw_output_s0_y_yi)) - 0, ((1*hw_output_s0_x_xi)) - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_61;
  return 0;
}

// # of bundles = 10
// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_61
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_61_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_61_write(conv_stencil_op_hcompute_conv_stencil_1_61_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_op_hcompute_conv_stencil_2_60
inline void conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_2_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_60_res = op_hcompute_conv_stencil_2_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_60_write(conv_stencil_op_hcompute_conv_stencil_2_60_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_op_hcompute_conv_stencil_3_43
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_3_43

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_43_res = conv_stencil_op_hcompute_conv_stencil_3_43_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_3_43_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_op_hcompute_conv_stencil_3_42
inline void conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_3_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_42_res = op_hcompute_conv_stencil_3_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_3_42_write(conv_stencil_op_hcompute_conv_stencil_3_42_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_op_hcompute_conv_stencil_4_25
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_4_25

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_25_res = conv_stencil_op_hcompute_conv_stencil_4_25_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_4_25_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_op_hcompute_conv_stencil_4_24
inline void conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_4_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_24_res = op_hcompute_conv_stencil_4_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_24_write(conv_stencil_op_hcompute_conv_stencil_4_24_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_op_hcompute_conv_stencil_5_7
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_5_7

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_7_res = conv_stencil_op_hcompute_conv_stencil_5_7_select(conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_5_7_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_op_hcompute_conv_stencil_5_6
inline void conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_5_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_6_res = op_hcompute_conv_stencil_5_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_5_6_write(conv_stencil_op_hcompute_conv_stencil_5_6_res, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_62
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int pad_root_to_conv_s0_y, int pad_pad_root_to_conv_s0_y_to_conv_s0_y, int pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_62_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_62_write(conv_stencil_op_hcompute_conv_stencil_62_res, conv_stencil, root, pad_root_to_conv_s0_y, pad_pad_root_to_conv_s0_y_to_conv_s0_y, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_1
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int pad_root_to_hw_output_s0_w, int pad_pad_root_to_hw_output_s0_w_to_hw_output_s0_w, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_1

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_1_res = conv_stencil_op_hcompute_hw_output_stencil_1_select(conv_stencil, root, pad_root_to_hw_output_s0_w, pad_pad_root_to_hw_output_s0_w_to_hw_output_s0_w, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_1_res);
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
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  // # of banks: 1
  hw_input_global_wrapper_stencil_all_inputs_to_all_outputs_cache hw_input_global_wrapper_stencil_all_inputs_to_all_outputs;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int hw_input_global_wrapper_s0_z, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0, ((1*hw_input_global_wrapper_s0_z)) - 0);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((2)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((3)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((4)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((5)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((7)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((6)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y + 1*conv_s1_y)) - 0, ((1*conv_s1_r_x + 1*conv_s1_x)) - 0, ((1)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

// # of bundles = 4
// op_hcompute_conv_stencil_3_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_44_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_45_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_46_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_47_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_48_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_49_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_50_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_51_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_26_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_27_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_28_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_8_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_9_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_10_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_11_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_12_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_13_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_14_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_select(hw_input_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_15_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int hw_input_global_wrapper_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_res, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z, dynamic_address);
}

struct hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 2], [0, 2], [0, 2], [0, 7]}
  hw_uint<16> RAM[3][3][3][8];
  inline hw_uint<16> read(int d0, int d1, int d2, int d3) {
    return RAM[d0][d1][d2][d3];
  }



	inline void write(const hw_uint<16> value, int d0, int d1, int d2, int d3) {
    RAM[d0][d1][d2][d3] = value;
  }

};

struct hw_kernel_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
    // { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  // # of banks: 1
  hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs_cache hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs;
};



inline void hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_write(hw_uint<16>& hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_x, int hw_kernel_global_wrapper_s0_w, int hw_kernel_global_wrapper_s0_z, int dynamic_address) {
  hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2, ((1*hw_kernel_global_wrapper_s0_y)) - 0, ((1*hw_kernel_global_wrapper_s0_x)) - 0, ((1*hw_kernel_global_wrapper_s0_w)) - 0, ((1*hw_kernel_global_wrapper_s0_z)) - 0);
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59 read pattern: { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, 0 - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41 read pattern: { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((1)) - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((1)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((2)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((3)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((4)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((5)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((7)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23 read pattern: { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*conv_s1_r_y)) - 0, ((1*conv_s1_r_x)) - 0, ((2)) - 0, ((6)) - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2;
  return 0;
}

// # of bundles = 4
// op_hcompute_conv_stencil_3_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_52_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_53_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_54_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_55_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_56_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_57_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_58_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_59_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_16_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_17_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_18_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_19_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_20_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_21_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_22_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_select(hw_kernel_global_wrapper_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_23_res);
	return result;
}

// op_hcompute_hw_kernel_global_wrapper_stencil_write
//	hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2
inline void hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_global_wrapper_stencil_write, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_x, int hw_kernel_global_wrapper_s0_w, int hw_kernel_global_wrapper_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_res = op_hcompute_hw_kernel_global_wrapper_stencil_write.extract<0, 15>();
	hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_write(hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_2_res, hw_kernel_global_wrapper_stencil, root, pad_root_to_hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z, dynamic_address);
}

// Total re-use buffer capacity: 156288 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int pad_root_to_hw_input_global_wrapper_s0_y, int pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int hw_input_global_wrapper_s0_z) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__hw_input_global_wrapper_s0_z_value = hw_input_stencil.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__hw_input_global_wrapper_s0_z_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, pad_root_to_hw_input_global_wrapper_s0_y, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z, 0);

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

inline void op_hcompute_conv_stencil_3(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_0_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__0_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_3(conv_stencil_0_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__0_c__0_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_4(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_1_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__1_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__1_c__1_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_4(conv_stencil_1_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__1_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__1_c__1_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_5(conv_stencil_cache& conv_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int pad_root_to_conv_s1_r_y, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_2_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__2_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_5(conv_stencil_2_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__2_c__0_value);
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(/* arg names */compute_result, conv_stencil, root, pad_root_to_conv_s1_r_y, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int pad_root_to_hw_output_s0_w, int pad_pad_root_to_hw_output_s0_w_to_hw_output_s0_w, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_w_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, pad_root_to_hw_output_s0_w, pad_pad_root_to_hw_output_s0_w_to_hw_output_s0_w, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_hw_output_s0_w_c__hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void resnet(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_kernel_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("resnet_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  conv_stencil_cache conv_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_kernel_global_wrapper_stencil_cache hw_kernel_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0, hw_input_global_wrapper_s0_z, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 and 0 <= hw_input_global_wrapper_s0_z <= 7; op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_w = 0, pad_pad_root_to_hw_output_s0_w_to_hw_output_s0_w = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, 0, 0, 0, 0, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_w <= 2 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil_1[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 1] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, pad_root_to_hw_kernel_global_wrapper_s0_y = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [0, 0, 1, 0, 0, hw_kernel_global_wrapper_s0_y, 0, hw_kernel_global_wrapper_s0_x, 0, hw_kernel_global_wrapper_s0_w, 0, hw_kernel_global_wrapper_s0_z, 0] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 2 and 0 <= hw_kernel_global_wrapper_s0_z <= 7; op_hcompute_conv_stencil_2[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 2] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_conv_stencil[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
//   { op_hcompute_hw_input_global_wrapper_stencil[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [0, 0, 0, 0, 0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0, hw_input_global_wrapper_s0_z, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 and 0 <= hw_input_global_wrapper_s0_z <= 7 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i7)) >= 0) && (((29 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((29 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((7 + -1*i11)) >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_w = 0, pad_pad_root_to_hw_output_s0_w_to_hw_output_s0_w = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, 0, 0, 0, 0, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_w <= 2 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-4 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_5[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_5(((((-2 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_1[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 1] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_1(((((-1 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_3(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, pad_root_to_hw_kernel_global_wrapper_s0_y = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [0, 0, 1, 0, 0, hw_kernel_global_wrapper_s0_y, 0, hw_kernel_global_wrapper_s0_x, 0, hw_kernel_global_wrapper_s0_w, 0, hw_kernel_global_wrapper_s0_z, 0] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 2 and 0 <= hw_kernel_global_wrapper_s0_z <= 7 }
// Condition for op_hcompute_hw_kernel_global_wrapper_stencil(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-1 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((2 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((7 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_2[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 2] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_2(((((-2 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, pad_root_to_conv_s1_r_y = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [0, 0, 3, 0, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, conv_s1_y, 0, conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_4(((((-1 + 1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-3 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i5)) >= 0) && (((2 + -1*i5)) >= 0) && (((1*i7)) >= 0) && (((2 + -1*i7)) >= 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))
//   { op_hcompute_conv_stencil[root = 0, pad_root_to_conv_s0_y = 0, pad_pad_root_to_conv_s0_y_to_conv_s0_y = 0, pad_pad_pad_root_to_conv_s0_y_to_conv_s0_y_to_conv_s0_y = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, 0, 0, 0, 0, 0, conv_s0_y, 0, conv_s0_x, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil(((((1*i12)) == 0) && (((1*i10)) == 0) && (((1*i8)) == 0) && (((1*i7)) == 0) && (((1*i6)) == 0) && (((1*i5)) == 0) && (((1*i4)) == 0) && (((1*i3)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i9)) >= 0) && (((27 + -1*i9)) >= 0) && (((1*i11)) >= 0) && (((27 + -1*i11)) >= 0)))

	{
	  for (int c7 = 0; c7 <= 29; c7 += 1)
	    for (int c9 = 0; c9 <= 29; c9 += 1)
	      for (int c11 = 0; c11 <= 7; c11 += 1)
	        op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, 0, 0, c7, c9, c11);
	  for (int c5 = 0; c5 <= 2; c5 += 1)
	    for (int c7 = 0; c7 <= 2; c7 += 1)
	      for (int c9 = 0; c9 <= 2; c9 += 1)
	        for (int c11 = 0; c11 <= 7; c11 += 1)
	          op_hcompute_hw_kernel_global_wrapper_stencil(hw_kernel_stencil /* buf name */, hw_kernel_global_wrapper_stencil, 0, 0, c5, c7, c9, c11);
	  for (int c9 = 0; c9 <= 27; c9 += 1)
	    for (int c11 = 0; c11 <= 27; c11 += 1) {
	      op_hcompute_conv_stencil(conv_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_conv_stencil_1(conv_stencil, 0, 0, 0, 0, c9, c11);
	      op_hcompute_conv_stencil_2(conv_stencil, 0, 0, 0, 0, c9, c11);
	    }
	  for (int c5 = 0; c5 <= 2; c5 += 1)
	    for (int c7 = 0; c7 <= 2; c7 += 1)
	      for (int c9 = 0; c9 <= 27; c9 += 1)
	        for (int c11 = 0; c11 <= 27; c11 += 1) {
	          op_hcompute_conv_stencil_3(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	          op_hcompute_conv_stencil_4(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	          op_hcompute_conv_stencil_5(conv_stencil /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, 0, c5, c7, c9, c11);
	        }
	  for (int c7 = 0; c7 <= 2; c7 += 1)
	    for (int c9 = 0; c9 <= 27; c9 += 1)
	      for (int c11 = 0; c11 <= 27; c11 += 1)
	        op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, 0, 0, c7, c9, c11);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void resnet_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_kernel_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    resnet(hw_input_stencil, hw_kernel_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, pad_root_to_hw_input_global_wrapper_s0_y = 0, pad_pad_root_to_hw_input_global_wrapper_s0_y_to_hw_input_global_wrapper_s0_y = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> hw_input_stencil[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 and 0 <= hw_input_global_wrapper_s0_z <= 7 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 7200;
  // { op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, pad_root_to_hw_kernel_global_wrapper_s0_y = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> hw_kernel_stencil[hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 2 and 0 <= hw_kernel_global_wrapper_s0_z <= 7 }
const int op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_num_transfers = 216;
  // { op_hcompute_hw_output_stencil[root = 0, pad_root_to_hw_output_s0_w = 0, pad_pad_root_to_hw_output_s0_w_to_hw_output_s0_w = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_w <= 2 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 2352;


extern "C" {

void resnet_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0, op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_num_transfers*size);

  resnet_wrapper(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void resnet_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  resnet(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

