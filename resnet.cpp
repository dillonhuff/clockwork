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
  // # of banks: 1
  conv_stencil_all_inputs_to_all_outputs_cache conv_stencil_all_inputs_to_all_outputs;
};



inline void conv_stencil_op_hcompute_conv_stencil_1_7_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_7, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_1_7, 1 - 0, conv_s0_y - 0, conv_s0_x - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_8_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2_8, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_2_8, 2 - 0, conv_s0_y - 0, conv_s0_x - 0);
}

inline void conv_stencil_op_hcompute_conv_stencil_6_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_6, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_6, 0 - 0, conv_s0_y - 0, conv_s0_x - 0);
}

inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_66_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_66 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1 = 0, conv_stencil_ld2 = 0] -> conv_stencil[conv_stencil_ld0, conv_s1_y, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld0 <= 2 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_7 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(conv_stencil_ld0 - 0, conv_s1_y - 0, 0 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_7;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_64_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_64 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_w <= 2 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_1_7 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(hw_output_s0_w - 0, hw_output_s0_y_yi - 0, hw_output_s0_x_xi - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_1_7;
  return 0;
}

// # of bundles = 5
// load_to_conv_stencil_rb_at_conv_s1_x3_read
//	conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_66
inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_66

	hw_uint<16> result;
	hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_66_res = conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_66_select(conv_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_66_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_7
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_7_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_7_write(conv_stencil_op_hcompute_conv_stencil_1_7_res, conv_stencil, root, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_op_hcompute_conv_stencil_2_8
inline void conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_2_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_8_res = op_hcompute_conv_stencil_2_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_8_write(conv_stencil_op_hcompute_conv_stencil_2_8_res, conv_stencil, root, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_6
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_6_write(conv_stencil_op_hcompute_conv_stencil_6_res, conv_stencil, root, conv_s0_y, conv_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_64
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_64

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_64_res = conv_stencil_op_hcompute_hw_output_stencil_64_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_64_res);
	return result;
}

#include "hw_classes.h"

struct conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 2], [0, 27], [0, 27]}
  hw_uint<32>  RAM[3][28][28];
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



inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65, conv_stencil_ld0 - 0, conv_s1_y - 0, 0 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0, conv_stencil_ld4 - 0, conv_s1_y - 0, conv_s1_x - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_9_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_9, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_9, 0 - 0, conv_s1_y - 0, conv_s1_x - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_27_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_27, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_27, 1 - 0, conv_s1_y - 0, conv_s1_x - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_45_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_45, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_45, 2 - 0, conv_s1_y - 0, conv_s1_x - 0);
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5 = 0, conv_stencil_ld6 = 0] -> conv_stencil_rb_at_conv_s1_x[conv_stencil_ld4, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld4 <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_stencil_ld4 - 0, conv_s1_y - 0, conv_s1_x - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_10_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_10 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil_rb_at_conv_s1_x[0, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(0 - 0, conv_s1_y - 0, conv_s1_x - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_28_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_28 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil_rb_at_conv_s1_x[1, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(1 - 0, conv_s1_y - 0, conv_s1_x - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_46_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_46 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> conv_stencil_rb_at_conv_s1_x[2, conv_s1_y, conv_s1_x] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(2 - 0, conv_s1_y - 0, conv_s1_x - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65;
  return 0;
}

// # of bundles = 9
// load_to_conv_stencil_rb_at_conv_s1_x3_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65_res = load_to_conv_stencil_rb_at_conv_s1_x3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_65_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
}

// load_to_conv_stencil_rb_at_conv_s1_x7_read
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_res = conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_res);
	return result;
}

// load_to_conv_stencil_rb_at_conv_s1_x7_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_res = load_to_conv_stencil_rb_at_conv_s1_x7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_10
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_10

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_10_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_10_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_10_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_9
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_9_res = op_hcompute_conv_stencil_3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_9_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_9_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_28
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_28

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_28_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_28_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_28_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_27
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_4_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_27_res = op_hcompute_conv_stencil_4_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_27_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_27_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_46
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_46

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_46_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_46_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_46_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_45
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_5_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_45_res = op_hcompute_conv_stencil_5_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_45_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_45_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
}

#include "hw_classes.h"

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
  // # of banks: 1
  hw_input_global_wrapper_stencil_all_inputs_to_all_outputs_cache hw_input_global_wrapper_stencil_all_inputs_to_all_outputs;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int hw_input_global_wrapper_s0_z, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2, hw_input_global_wrapper_s0_y - 0, hw_input_global_wrapper_s0_x - 0, hw_input_global_wrapper_s0_z - 0);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_11_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_11 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_12_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_12 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 1 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_13_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_13 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 2 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_14_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_14 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 3 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_15_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_15 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 4 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_16_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_16 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 5 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_17_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_17 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 7 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_18_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_18 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 6 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 1 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 2 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 3 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 4 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 5 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_34 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 7 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_35 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 6 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_36 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_47_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_47 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 0 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_48_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_48 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 1 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_49_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_49 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 2 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_50_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_50 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 3 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_51_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_51 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 4 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_52_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_52 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 5 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_53_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_53 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 7 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_54_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_54 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_input_global_wrapper_stencil[conv_s1_r_y + conv_s1_y, conv_s1_r_x + conv_s1_x, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y + conv_s1_y - 0, conv_s1_r_x + conv_s1_x - 0, 6 - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2;
  return 0;
}

// # of bundles = 4
// op_hcompute_conv_stencil_3_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_11
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_12
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_13
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_14
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_15
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_16
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_17
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_18
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_11
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_12
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_13
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_14
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_15
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_16
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_17
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_18

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_11_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_11_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_11_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_12_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_12_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_12_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_13_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_13_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_13_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_14_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_14_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_14_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_15_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_15_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_15_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_16_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_16_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_16_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_17_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_17_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_17_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_18_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_18_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_18_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_34
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_35
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_36
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_34
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_35
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_36

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_29_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_30_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_31_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_32_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_33_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_34_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_35_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_36_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_47
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_48
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_49
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_50
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_51
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_52
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_53
//	hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_54
inline hw_uint<128> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_47
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_48
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_49
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_50
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_51
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_52
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_53
    // hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_54

	hw_uint<128> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_47_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_47_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_47_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_48_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_48_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_48_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_49_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_49_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_49_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_50_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_50_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_50_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_51_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_51_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_51_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_52_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_52_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_52_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_53_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_53_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_53_res);
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_54_res = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_54_select(hw_input_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_54_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int hw_input_global_wrapper_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_2_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z, dynamic_address);
}

#include "hw_classes.h"

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
  // # of banks: 1
  hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs_cache hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs;
};



inline void hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4_write(hw_uint<16>& hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_x, int hw_kernel_global_wrapper_s0_w, int hw_kernel_global_wrapper_s0_z, int dynamic_address) {
  hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4, hw_kernel_global_wrapper_s0_y - 0, hw_kernel_global_wrapper_s0_x - 0, hw_kernel_global_wrapper_s0_w - 0, hw_kernel_global_wrapper_s0_z - 0);
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_19_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_19 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 0 - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_20_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_20 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 0 - 0, 1 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_21_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_21 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 0 - 0, 2 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_22_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_22 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 0 - 0, 3 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_23_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_23 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 0 - 0, 4 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_24_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_24 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 0 - 0, 5 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_25_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_25 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 0 - 0, 7 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_26_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_26 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 0, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 0 - 0, 6 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 1 - 0, 1 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 1 - 0, 2 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 1 - 0, 3 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 1 - 0, 4 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 1 - 0, 5 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_42_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_42 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 1 - 0, 7 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_43_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_43 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 1 - 0, 6 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_44_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_44 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 1, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 1 - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_55_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_55 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 0] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 2 - 0, 0 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_56_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_56 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 2 - 0, 1 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_57_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_57 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 2 - 0, 2 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_58_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_58 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 2 - 0, 3 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_59_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_59 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 2 - 0, 4 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_60_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_60 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 2 - 0, 5 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_61_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_61 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 7] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 2 - 0, 7 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

inline hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_62_select(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_62 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> hw_kernel_global_wrapper_stencil[conv_s1_r_y, conv_s1_r_x, 2, 6] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
  auto value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4 = hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.read(conv_s1_r_y - 0, conv_s1_r_x - 0, 2 - 0, 6 - 0);
  return value_hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4;
  return 0;
}

// # of bundles = 4
// op_hcompute_conv_stencil_3_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_19
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_20
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_21
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_22
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_23
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_24
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_25
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_26
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_19
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_20
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_21
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_22
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_23
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_24
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_25
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_26

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_19_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_19_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_19_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_20_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_20_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_20_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_21_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_21_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_21_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_22_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_22_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_22_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_23_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_23_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_23_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_24_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_24_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_24_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_25_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_25_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_25_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_26_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_26_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_26_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_42
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_43
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_44
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_42
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_43
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_44

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_37_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_38_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_39_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_40_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_41_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_42_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_42_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_42_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_43_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_43_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_43_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_44_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_44_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_44_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_55
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_56
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_57
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_58
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_59
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_60
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_61
//	hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_62
inline hw_uint<128> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_55
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_56
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_57
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_58
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_59
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_60
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_61
    // hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_62

	hw_uint<128> result;
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_55_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_55_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_55_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_56_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_56_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_56_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_57_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_57_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_57_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_58_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_58_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_58_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_59_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_59_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_59_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_60_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_60_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_60_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_61_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_61_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_61_res);
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_62_res = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_62_select(hw_kernel_global_wrapper_stencil, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_62_res);
	return result;
}

// op_hcompute_hw_kernel_global_wrapper_stencil_write
//	hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4
inline void hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_global_wrapper_stencil_write, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_x, int hw_kernel_global_wrapper_s0_w, int hw_kernel_global_wrapper_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4_res = op_hcompute_hw_kernel_global_wrapper_stencil_write.extract<0, 15>();
	hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4_write(hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_4_res, hw_kernel_global_wrapper_stencil, root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z, dynamic_address);
}

// Total re-use buffer capacity: 231552 bits


// Operation logic
inline void load_to_conv_stencil_rb_at_conv_s1_x7(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_stencil_ld4__p__0_c__conv_stencil_ld5__p__conv_s1_y_c__conv_stencil_ld6__p__conv_s1_x_value = conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_write_bundle_write(/* arg names */conv_stencil_rb_at_conv_s1_x_conv_stencil_ld4__p__0_c__conv_stencil_ld5__p__conv_s1_y_c__conv_stencil_ld6__p__conv_s1_x_value, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_input_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int hw_input_global_wrapper_s0_z) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__hw_input_global_wrapper_s0_z_value = hw_input_stencil.read();
	auto compute_result = hcompute_hw_input_global_wrapper_stencil(hw_input_stencil_hw_input_global_wrapper_s0_y_c__hw_input_global_wrapper_s0_x_c__hw_input_global_wrapper_s0_z_value);
	// Produce: hw_input_global_wrapper_stencil
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_kernel_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_kernel_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int hw_kernel_global_wrapper_s0_y, int hw_kernel_global_wrapper_s0_x, int hw_kernel_global_wrapper_s0_w, int hw_kernel_global_wrapper_s0_z) {
  // Dynamic address computation

	// Consume: hw_kernel_stencil
	auto hw_kernel_stencil_hw_kernel_global_wrapper_s0_y_c__hw_kernel_global_wrapper_s0_x_c__hw_kernel_global_wrapper_s0_w_c__hw_kernel_global_wrapper_s0_z_value = hw_kernel_stencil.read();
	auto compute_result = hcompute_hw_kernel_global_wrapper_stencil(hw_kernel_stencil_hw_kernel_global_wrapper_s0_y_c__hw_kernel_global_wrapper_s0_x_c__hw_kernel_global_wrapper_s0_w_c__hw_kernel_global_wrapper_s0_z_value);
	// Produce: hw_kernel_global_wrapper_stencil
	hw_kernel_global_wrapper_stencil_op_hcompute_hw_kernel_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_kernel_global_wrapper_stencil, root, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil(conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_1(conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil_1();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_2(conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil_2();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s0_y, conv_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_3(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_0_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__0_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_3(conv_stencil_rb_at_conv_s1_x_0_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__0_c__0_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_4(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_1_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__1_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__1_c__1_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_4(conv_stencil_rb_at_conv_s1_x_1_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__1_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__1_c__1_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_5(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, hw_kernel_global_wrapper_stencil_cache& hw_kernel_global_wrapper_stencil, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_s1_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_2_c__conv_s1_y_c__conv_s1_x_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value = hw_input_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_kernel_global_wrapper_stencil
	auto hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__2_c__0_value = hw_kernel_global_wrapper_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_global_wrapper_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_5(conv_stencil_rb_at_conv_s1_x_2_c__conv_s1_y_c__conv_s1_x_value, hw_input_global_wrapper_stencil__lp_conv_s1_r_y__p__conv_s1_y_rp__c___lp_conv_s1_r_x__p__conv_s1_x_rp__c__0_value, hw_kernel_global_wrapper_stencil_conv_s1_r_y_c__conv_s1_r_x_c__2_c__0_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, 0);

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

inline void load_to_conv_stencil_rb_at_conv_s1_x3(conv_stencil_cache& conv_stencil, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_r_y, int conv_s1_r_x, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_stencil_ld0__p__0_c__conv_stencil_ld1__p__conv_s1_y_c__conv_stencil_ld2__p__0_value = conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_write_bundle_write(/* arg names */conv_stencil_conv_stencil_ld0__p__0_c__conv_stencil_ld1__p__conv_s1_y_c__conv_stencil_ld2__p__0_value, conv_stencil_rb_at_conv_s1_x, root, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, 0);

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
#pragma HLS array_partition variable=conv_stencil.conv_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  conv_stencil_rb_at_conv_s1_x_cache conv_stencil_rb_at_conv_s1_x;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  hw_kernel_global_wrapper_stencil_cache hw_kernel_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=hw_kernel_global_wrapper_stencil.hw_kernel_global_wrapper_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [0, 0, hw_input_global_wrapper_s0_y, 1, hw_input_global_wrapper_s0_x, 22 + hw_input_global_wrapper_s0_z, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 and 0 <= hw_input_global_wrapper_s0_z <= 7; op_hcompute_conv_stencil_1[root = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, conv_s0_y, conv_s0_x, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_conv_stencil_2[root = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 2, conv_s0_y, conv_s0_x, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [conv_s1_r_y, conv_s1_r_x, 27, 1, conv_s1_y, 2 + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 2 + hw_output_s0_w, 3, hw_output_s0_y_yi, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 2 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, 4, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z, 0] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 2 and 0 <= hw_kernel_global_wrapper_s0_z <= 7; op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [conv_s1_r_y, conv_s1_r_x, 27, 1, conv_s1_y, 2 + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27; load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1 = 0, conv_stencil_ld2 = 0] -> [0, conv_s1_r_y, 27 + conv_s1_r_x, 1, conv_s1_y, conv_stencil_ld0, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld0 <= 2; load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5 = 0, conv_stencil_ld6 = 0] -> [conv_s1_r_y, conv_s1_r_x, 27 + conv_s1_y, 1, conv_s1_x, 2 + conv_stencil_ld4, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld4 <= 2; op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 3, conv_s0_y, conv_s0_x, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27; op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [conv_s1_r_y, conv_s1_r_x, 27, 1, conv_s1_y, 2 + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
//   { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> [0, 0, hw_input_global_wrapper_s0_y, 1, hw_input_global_wrapper_s0_x, 22 + hw_input_global_wrapper_s0_z, 0] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 and 0 <= hw_input_global_wrapper_s0_z <= 7 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((i6 == 0) && (-1 + i3 == 0) && (i1 == 0) && (i0 == 0) && (i2 >= 0) && (29 - i2 >= 0) && (i4 >= 0) && (29 - i4 >= 0) && (-22 + i5 >= 0) && (29 - i5 >= 0)))
//   { op_hcompute_conv_stencil_1[root = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 0, conv_s0_y, conv_s0_x, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_1(((i6 == 0) && (i3 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i4 >= 0) && (27 - i4 >= 0) && (i5 >= 0) && (27 - i5 >= 0)))
//   { op_hcompute_conv_stencil_2[root = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 2, conv_s0_y, conv_s0_x, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil_2(((i6 == 0) && (-2 + i3 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i4 >= 0) && (27 - i4 >= 0) && (i5 >= 0) && (27 - i5 >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [conv_s1_r_y, conv_s1_r_x, 27, 1, conv_s1_y, 2 + conv_s1_x, 1] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_4(((-1 + i6 == 0) && (-1 + i3 == 0) && (-27 + i2 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i4 >= 0) && (27 - i4 >= 0) && (-2 + i5 >= 0) && (29 - i5 >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 2 + hw_output_s0_w, 3, hw_output_s0_y_yi, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 2 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil(((-1 + i6 == 0) && (-3 + i3 == 0) && (i1 == 0) && (i0 == 0) && (-2 + i2 >= 0) && (4 - i2 >= 0) && (i4 >= 0) && (27 - i4 >= 0) && (i5 >= 0) && (27 - i5 >= 0)))
//   { op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> [0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, 4, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z, 0] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 2 and 0 <= hw_kernel_global_wrapper_s0_z <= 7 }
// Condition for op_hcompute_hw_kernel_global_wrapper_stencil(((i6 == 0) && (-4 + i3 == 0) && (i0 == 0) && (i1 >= 0) && (2 - i1 >= 0) && (i2 >= 0) && (2 - i2 >= 0) && (i4 >= 0) && (2 - i4 >= 0) && (i5 >= 0) && (7 - i5 >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [conv_s1_r_y, conv_s1_r_x, 27, 1, conv_s1_y, 2 + conv_s1_x, 2] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_3(((-2 + i6 == 0) && (-1 + i3 == 0) && (-27 + i2 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i4 >= 0) && (27 - i4 >= 0) && (-2 + i5 >= 0) && (29 - i5 >= 0)))
//   { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1 = 0, conv_stencil_ld2 = 0] -> [0, conv_s1_r_y, 27 + conv_s1_r_x, 1, conv_s1_y, conv_stencil_ld0, 4] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld0 <= 2 }
// Condition for load_to_conv_stencil_rb_at_conv_s1_x3(((-4 + i6 == 0) && (-1 + i3 == 0) && (i0 == 0) && (i1 >= 0) && (2 - i1 >= 0) && (-27 + i2 >= 0) && (29 - i2 >= 0) && (i4 >= 0) && (27 - i4 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5 = 0, conv_stencil_ld6 = 0] -> [conv_s1_r_y, conv_s1_r_x, 27 + conv_s1_y, 1, conv_s1_x, 2 + conv_stencil_ld4, 3] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld4 <= 2 }
// Condition for load_to_conv_stencil_rb_at_conv_s1_x7(((-3 + i6 == 0) && (-1 + i3 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (-27 + i2 >= 0) && (54 - i2 >= 0) && (i4 >= 0) && (27 - i4 >= 0) && (-2 + i5 >= 0) && (4 - i5 >= 0)))
//   { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x] -> [0, 0, 2, 3, conv_s0_y, conv_s0_x, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 }
// Condition for op_hcompute_conv_stencil(((i6 == 0) && (-3 + i3 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i4 >= 0) && (27 - i4 >= 0) && (i5 >= 0) && (27 - i5 >= 0)))
//   { op_hcompute_conv_stencil_5[root = 0, conv_s1_r_y, conv_s1_r_x, conv_s1_y, conv_s1_x] -> [conv_s1_r_y, conv_s1_r_x, 27, 1, conv_s1_y, 2 + conv_s1_x, 5] : 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 and 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 }
// Condition for op_hcompute_conv_stencil_5(((-5 + i6 == 0) && (-1 + i3 == 0) && (-27 + i2 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i1 >= 0) && (2 - i1 >= 0) && (i4 >= 0) && (27 - i4 >= 0) && (-2 + i5 >= 0) && (29 - i5 >= 0)))

  /*
for (int c0 = 0; c0 <= 2; c0 += 1)
  for (int c1 = 0; c1 <= 2; c1 += 1) {
    if (c0 == 0) {
      for (int c2 = 0; c2 <= 2; c2 += 1) {
        if (c1 == 0 && c2 == 2)
          for (int c4 = 0; c4 <= 27; c4 += 1)
            for (int c5 = 0; c5 <= 27; c5 += 1)
              op_hcompute_conv_stencil_1(0, c4, c5);
        if (c1 == 0) {
          for (int c4 = 0; c4 <= 29; c4 += 1)
            for (int c5 = 22; c5 <= 29; c5 += 1)
              op_hcompute_hw_input_global_wrapper_stencil(0, c2, c4, c5 - 22);
          if (c2 == 2) {
            for (int c4 = 0; c4 <= 27; c4 += 1)
              for (int c5 = 0; c5 <= 27; c5 += 1)
                op_hcompute_conv_stencil_2(0, c4, c5);
            for (int c4 = 0; c4 <= 27; c4 += 1)
              for (int c5 = 0; c5 <= 27; c5 += 1) {
                op_hcompute_conv_stencil(0, c4, c5);
                op_hcompute_hw_output_stencil(0, 0, c4, c5);
              }
          }
        }
        for (int c4 = 0; c4 <= 2; c4 += 1)
          for (int c5 = 0; c5 <= 7; c5 += 1)
            op_hcompute_hw_kernel_global_wrapper_stencil(0, c1, c2, c4, c5);
      }
      if (c1 == 0)
        for (int c2 = 3; c2 <= 26; c2 += 1) {
          for (int c4 = 0; c4 <= 29; c4 += 1)
            for (int c5 = 22; c5 <= 29; c5 += 1)
              op_hcompute_hw_input_global_wrapper_stencil(0, c2, c4, c5 - 22);
          if (c2 <= 4)
            for (int c4 = 0; c4 <= 27; c4 += 1)
              for (int c5 = 0; c5 <= 27; c5 += 1)
                op_hcompute_hw_output_stencil(0, c2 - 2, c4, c5);
        }
    }
    for (int c2 = 27; c2 <= 54; c2 += 1) {
      for (int c4 = 0; c4 <= 27; c4 += 1) {
        if (c0 == 0 && c2 <= 29)
          for (int c5 = 0; c5 <= 1; c5 += 1)
            load_to_conv_stencil_rb_at_conv_s1_x3(0, c1, c2 - 27, c4, c5, 0, 0);
        for (int c5 = 2; c5 <= 4; c5 += 1) {
          if (c2 == 27) {
            op_hcompute_conv_stencil_4(0, c0, c1, c4, c5 - 2);
            op_hcompute_conv_stencil_3(0, c0, c1, c4, c5 - 2);
          }
          load_to_conv_stencil_rb_at_conv_s1_x7(0, c0, c1, c2 - 27, c4, c5 - 2, 0, 0);
          if (c0 == 0 && c2 <= 29 && c5 == 2)
            load_to_conv_stencil_rb_at_conv_s1_x3(0, c1, c2 - 27, c4, 2, 0, 0);
          if (c2 == 27)
            op_hcompute_conv_stencil_5(0, c0, c1, c4, c5 - 2);
        }
        if (c0 == 0 && c1 == 0 && c2 >= 28 && c2 <= 29) {
          for (int c5 = 22; c5 <= 29; c5 += 1)
            op_hcompute_hw_input_global_wrapper_stencil(0, c2, c4, c5 - 22);
        } else if (c2 == 27) {
          for (int c5 = 5; c5 <= 29; c5 += 1) {
            if (c0 == 0 && c1 == 0 && c5 >= 22)
              op_hcompute_hw_input_global_wrapper_stencil(0, 27, c4, c5 - 22);
            op_hcompute_conv_stencil_4(0, c0, c1, c4, c5 - 2);
            op_hcompute_conv_stencil_3(0, c0, c1, c4, c5 - 2);
            op_hcompute_conv_stencil_5(0, c0, c1, c4, c5 - 2);
          }
        }
      }
      if (c0 == 0 && c1 == 0 && c2 <= 29)
        for (int c4 = 28; c4 <= 29; c4 += 1)
          for (int c5 = 22; c5 <= 29; c5 += 1)
            op_hcompute_hw_input_global_wrapper_stencil(0, c2, c4, c5 - 22);
    }
  }

  */
	for (int c0 = 0; c0 <= 2; c0 += 1)
	  for (int c1 = 0; c1 <= 2; c1 += 1) {
	    if (c0 == 0) {
	      for (int c2 = 0; c2 <= 2; c2 += 1) {
	        if (c1 == 0 && c2 == 2)
	          for (int c4 = 0; c4 <= 27; c4 += 1)
	            for (int c5 = 0; c5 <= 27; c5 += 1)
	              op_hcompute_conv_stencil_1(conv_stencil, 0, c4, c5);
	        if (c1 == 0) {
	          for (int c4 = 0; c4 <= 29; c4 += 1)
	            for (int c5 = 22; c5 <= 29; c5 += 1)
	              op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c2, c4, c5 - 22);
	          if (c2 == 2) {
	            for (int c4 = 0; c4 <= 27; c4 += 1)
	              for (int c5 = 0; c5 <= 27; c5 += 1)
	                op_hcompute_conv_stencil_2(conv_stencil, 0, c4, c5);
	            for (int c4 = 0; c4 <= 27; c4 += 1)
	              for (int c5 = 0; c5 <= 27; c5 += 1) {
	                op_hcompute_conv_stencil(conv_stencil, 0, c4, c5);
	                op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, 0, c4, c5);
	              }
	          }
	        }
	        for (int c4 = 0; c4 <= 2; c4 += 1)
	          for (int c5 = 0; c5 <= 7; c5 += 1)
	            op_hcompute_hw_kernel_global_wrapper_stencil(hw_kernel_stencil /* buf name */, hw_kernel_global_wrapper_stencil, 0, c1, c2, c4, c5);
	      }
	      if (c1 == 0)
	        for (int c2 = 3; c2 <= 26; c2 += 1) {
	          for (int c4 = 0; c4 <= 29; c4 += 1)
	            for (int c5 = 22; c5 <= 29; c5 += 1)
	              op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c2, c4, c5 - 22);
	          if (c2 <= 4)
	            for (int c4 = 0; c4 <= 27; c4 += 1)
	              for (int c5 = 0; c5 <= 27; c5 += 1)
	                op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, c2 - 2, c4, c5);
	        }
	    }
	    for (int c2 = 27; c2 <= 54; c2 += 1) {
	      for (int c4 = 0; c4 <= 27; c4 += 1) {
	        if (c0 == 0 && c2 <= 29)
	          for (int c5 = 0; c5 <= 1; c5 += 1)
	            load_to_conv_stencil_rb_at_conv_s1_x3(conv_stencil /* buf name */, conv_stencil_rb_at_conv_s1_x, 0, c1, c2 - 27, c4, c5, 0, 0);
	        for (int c5 = 2; c5 <= 4; c5 += 1) {
	          if (c2 == 27) {
	            op_hcompute_conv_stencil_4(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, c0, c1, c4, c5 - 2);
	            op_hcompute_conv_stencil_3(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, c0, c1, c4, c5 - 2);
	          }
	          load_to_conv_stencil_rb_at_conv_s1_x7(conv_stencil_rb_at_conv_s1_x /* buf name */, 0, c0, c1, c2 - 27, c4, c5 - 2, 0, 0);
	          if (c0 == 0 && c2 <= 29 && c5 == 2)
	            load_to_conv_stencil_rb_at_conv_s1_x3(conv_stencil /* buf name */, conv_stencil_rb_at_conv_s1_x, 0, c1, c2 - 27, c4, 2, 0, 0);
	          if (c2 == 27)
	            op_hcompute_conv_stencil_5(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, c0, c1, c4, c5 - 2);
	        }
	        if (c0 == 0 && c1 == 0 && c2 >= 28 && c2 <= 29) {
	          for (int c5 = 22; c5 <= 29; c5 += 1)
	            op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c2, c4, c5 - 22);
	        } else if (c2 == 27) {
	          for (int c5 = 5; c5 <= 29; c5 += 1) {
	            if (c0 == 0 && c1 == 0 && c5 >= 22)
	              op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, 27, c4, c5 - 22);
	            op_hcompute_conv_stencil_4(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, c0, c1, c4, c5 - 2);
	            op_hcompute_conv_stencil_3(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, c0, c1, c4, c5 - 2);
	            op_hcompute_conv_stencil_5(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_global_wrapper_stencil /* buf name */, hw_kernel_global_wrapper_stencil /* buf name */, 0, c0, c1, c4, c5 - 2);
	          }
	        }
	      }
	      if (c0 == 0 && c1 == 0 && c2 <= 29)
	        for (int c4 = 28; c4 <= 29; c4 += 1)
	          for (int c5 = 22; c5 <= 29; c5 += 1)
	            op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c2, c4, c5 - 22);
	    }
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
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] -> hw_input_stencil[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_z] : 0 <= hw_input_global_wrapper_s0_y <= 29 and 0 <= hw_input_global_wrapper_s0_x <= 29 and 0 <= hw_input_global_wrapper_s0_z <= 7 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 7200;
  // { op_hcompute_hw_kernel_global_wrapper_stencil[root = 0, hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] -> hw_kernel_stencil[hw_kernel_global_wrapper_s0_y, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_z] : 0 <= hw_kernel_global_wrapper_s0_y <= 2 and 0 <= hw_kernel_global_wrapper_s0_x <= 2 and 0 <= hw_kernel_global_wrapper_s0_w <= 2 and 0 <= hw_kernel_global_wrapper_s0_z <= 7 }
const int op_hcompute_hw_kernel_global_wrapper_stencil_read_pipe0_num_transfers = 216;
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_w <= 2 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
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

