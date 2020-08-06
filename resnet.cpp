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



inline void conv_stencil_op_hcompute_conv_stencil_4_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_4, conv_s0_x - 0, conv_s0_y - 0, conv_s0_w - 0);
}

inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_154_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_154 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> conv_stencil[0, conv_s1_y, conv_stencil_ld2] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15 }
  auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_y - 0, conv_stencil_ld2 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_4;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_60_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_60 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(hw_output_s0_x_xi - 0, hw_output_s0_y_yi - 0, hw_output_s0_w - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_4;
  return 0;
}

// # of bundles = 3
// load_to_conv_stencil_rb_at_conv_s1_x3_read
//	conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_154
inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_154

	hw_uint<16> result;
	hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_154_res = conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_154_select(conv_stencil, root, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_154_res);
	return result;
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_4
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_write(conv_stencil_op_hcompute_conv_stencil_4_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_60
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_60

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_60_res = conv_stencil_op_hcompute_hw_output_stencil_60_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_60_res);
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



inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153, 0 - 0, conv_s1_y - 0, conv_stencil_ld2 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0, conv_s1_x - 0, conv_s1_y - 0, conv_stencil_ld6 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_227_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_227, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_227, conv_s1_x - 0, conv_s1_y - 0, 9 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_173_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_173, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_173, conv_s1_x - 0, conv_s1_y - 0, 10 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_155_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_155, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_155, conv_s1_x - 0, conv_s1_y - 0, 11 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_263_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_263, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_263, conv_s1_x - 0, conv_s1_y - 0, 12 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_209_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_209, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_209, conv_s1_x - 0, conv_s1_y - 0, 13 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_61_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_61, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_61, conv_s1_x - 0, conv_s1_y - 0, 14 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_23_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_23, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_23, conv_s1_x - 0, conv_s1_y - 0, 15 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_5_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_5, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_5, conv_s1_x - 0, conv_s1_y - 0, 0 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_79_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_79, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_79, conv_s1_x - 0, conv_s1_y - 0, 1 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_97_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_97, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_97, conv_s1_x - 0, conv_s1_y - 0, 2 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_117_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_117, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_117, conv_s1_x - 0, conv_s1_y - 0, 3 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_135_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_135, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_135, conv_s1_x - 0, conv_s1_y - 0, 4 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_245_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_245, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_245, conv_s1_x - 0, conv_s1_y - 0, 5 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_41_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_41, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_41, conv_s1_x - 0, conv_s1_y - 0, 6 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_281_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_281, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_281, conv_s1_x - 0, conv_s1_y - 0, 7 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_191_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_191, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_191, conv_s1_x - 0, conv_s1_y - 0, 8 - 0);
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, conv_stencil_ld6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, conv_stencil_ld6 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_228_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_228 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 9 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_174_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_174 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 10] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 10 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_156_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_156 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 11] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 11 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_264_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_264 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 12] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 12 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_210_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_210 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 13] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 13 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_62_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_62 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 14] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 14 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_24_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_24 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 15] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 15 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 0 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_80_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_80 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 1 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_98_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_98 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 2 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_118_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_118 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 3 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_136_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_136 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 4 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_246_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_246 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 5 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_42_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_42 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 6 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_282_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_282 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 7 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_192_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_192 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 8 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153;
  return 0;
}

// # of bundles = 35
// load_to_conv_stencil_rb_at_conv_s1_x3_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153_res = load_to_conv_stencil_rb_at_conv_s1_x3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_153_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
}

// load_to_conv_stencil_rb_at_conv_s1_x7_read
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_res = conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_1_res);
	return result;
}

// load_to_conv_stencil_rb_at_conv_s1_x7_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_res = load_to_conv_stencil_rb_at_conv_s1_x7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_0_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
}

// op_hcompute_conv_stencil_10_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_228
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_228

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_228_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_228_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_228_res);
	return result;
}

// op_hcompute_conv_stencil_10_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_227
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_10_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_227_res = op_hcompute_conv_stencil_10_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_227_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_227_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_11_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_174
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_174

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_174_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_174_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_174_res);
	return result;
}

// op_hcompute_conv_stencil_11_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_173
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_11_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_173_res = op_hcompute_conv_stencil_11_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_173_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_173_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_12_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_156
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_156

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_156_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_156_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_156_res);
	return result;
}

// op_hcompute_conv_stencil_12_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_155
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_12_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_155_res = op_hcompute_conv_stencil_12_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_155_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_155_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_13_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_264
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_264

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_264_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_264_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_264_res);
	return result;
}

// op_hcompute_conv_stencil_13_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_263
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_13_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_263_res = op_hcompute_conv_stencil_13_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_263_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_263_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_14_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_210
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_210

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_210_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_210_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_210_res);
	return result;
}

// op_hcompute_conv_stencil_14_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_209
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_14_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_209_res = op_hcompute_conv_stencil_14_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_209_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_209_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_15_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_62
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_62

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_62_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_62_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_62_res);
	return result;
}

// op_hcompute_conv_stencil_15_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_61
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_15_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_61_res = op_hcompute_conv_stencil_15_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_61_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_61_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_16_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_24
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_24

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_24_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_24_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_24_res);
	return result;
}

// op_hcompute_conv_stencil_16_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_23
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_16_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_23_res = op_hcompute_conv_stencil_16_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_23_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_23_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_1_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_6_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_5
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_1_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_5_res = op_hcompute_conv_stencil_1_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_5_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_5_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_80
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_80

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_80_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_80_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_80_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_79
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_2_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_79_res = op_hcompute_conv_stencil_2_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_79_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_79_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_98
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_98

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_98_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_98_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_98_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_97
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_97_res = op_hcompute_conv_stencil_3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_97_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_97_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_118
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_118

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_118_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_118_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_118_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_117
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_4_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_117_res = op_hcompute_conv_stencil_4_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_117_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_117_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_136
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_136

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_136_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_136_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_136_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_135
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_5_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_135_res = op_hcompute_conv_stencil_5_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_135_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_135_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_246
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_246

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_246_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_246_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_246_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_245
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_6_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_245_res = op_hcompute_conv_stencil_6_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_245_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_245_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_42
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_42

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_42_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_42_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_42_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_41
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_41_res = op_hcompute_conv_stencil_7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_41_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_41_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_282
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_282

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_282_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_282_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_282_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_281
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_8_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_281_res = op_hcompute_conv_stencil_8_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_281_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_281_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_192
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_192

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_192_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_192_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_192_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_191
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_9_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_191_res = op_hcompute_conv_stencil_9_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_191_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_191_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
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



inline void hw_input_stencil_op_hcompute_hw_input_stencil_115_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_115, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.write(hw_input_stencil_op_hcompute_hw_input_stencil_115, hw_input_s0_z - 0, hw_input_s0_x - 0, hw_input_s0_y - 0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_229_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_229 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_230_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_230 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_231_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_231 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_232_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_232 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_233_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_233 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_234_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_234 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_235_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_235 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_236_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_236 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_175_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_175 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_176_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_176 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_177_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_177 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_178_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_178 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_179_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_179 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_180_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_180 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_181_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_181 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_182_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_182 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_157_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_157 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_158_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_158 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_159_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_159 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_160_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_160 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_161_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_161 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_162_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_162 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_163_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_163 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_164_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_164 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_265_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_265 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_266_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_266 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_267_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_267 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_268_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_268 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_269_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_269 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_270_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_270 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_271_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_271 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_272_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_272 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_211_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_211 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_212_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_212 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_213_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_213 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_214_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_214 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_215_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_215 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_216_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_216 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_217_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_217 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_218_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_218 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_63_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_63 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_64_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_64 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_65_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_65 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_66_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_66 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_67_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_67 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_68_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_68 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_69_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_69 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_70_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_70 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_25_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_25 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_26_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_26 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_27 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_28_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_28 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_29_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_29 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_30_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_30 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_31_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_31 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_32_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_32 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_10_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_10 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_11 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_12_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_12 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_13_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_13 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_14_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_14 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_7 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_8 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_9 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_81_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_81 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_82_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_82 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_83_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_83 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_84_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_84 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_85_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_85 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_86_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_86 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_87_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_87 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_88_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_88 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_100_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_100 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_101_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_101 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_102_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_102 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_103_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_103 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_104_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_104 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_105_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_105 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_106_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_106 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_99_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_99 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_119_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_119 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_120_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_120 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_121_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_121 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_122_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_122 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_123_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_123 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_124_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_124 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_125_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_125 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_126_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_126 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_137_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_137 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_138_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_138 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_139_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_139 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_140_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_140 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_141_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_141 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_142_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_142 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_143_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_143 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_144_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_144 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_247_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_247 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_248_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_248 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_249_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_249 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_250_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_250 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_251_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_251 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_252_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_252 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_253_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_253 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_254_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_254 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_43_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_43 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_44_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_44 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_45_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_45 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_46_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_46 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_47_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_47 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_48_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_48 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_49_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_49 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_50_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_50 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_283_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_283 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_284_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_284 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_285_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_285 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_286_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_286 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_287_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_287 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_288_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_288 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_289_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_289 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_290_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_290 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_193_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_193 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_194_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_194 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_195_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_195 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_196_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_196 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_197_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_197 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_198_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_198 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_199_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_199 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_200_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_200 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_115 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_115;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_input_stencil_op_hcompute_conv_stencil_10_229
//	hw_input_stencil_op_hcompute_conv_stencil_10_230
//	hw_input_stencil_op_hcompute_conv_stencil_10_231
//	hw_input_stencil_op_hcompute_conv_stencil_10_232
//	hw_input_stencil_op_hcompute_conv_stencil_10_233
//	hw_input_stencil_op_hcompute_conv_stencil_10_234
//	hw_input_stencil_op_hcompute_conv_stencil_10_235
//	hw_input_stencil_op_hcompute_conv_stencil_10_236
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_10_229
    // hw_input_stencil_op_hcompute_conv_stencil_10_230
    // hw_input_stencil_op_hcompute_conv_stencil_10_231
    // hw_input_stencil_op_hcompute_conv_stencil_10_232
    // hw_input_stencil_op_hcompute_conv_stencil_10_233
    // hw_input_stencil_op_hcompute_conv_stencil_10_234
    // hw_input_stencil_op_hcompute_conv_stencil_10_235
    // hw_input_stencil_op_hcompute_conv_stencil_10_236

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_229_res = hw_input_stencil_op_hcompute_conv_stencil_10_229_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_229_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_230_res = hw_input_stencil_op_hcompute_conv_stencil_10_230_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_230_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_231_res = hw_input_stencil_op_hcompute_conv_stencil_10_231_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_231_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_232_res = hw_input_stencil_op_hcompute_conv_stencil_10_232_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_232_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_233_res = hw_input_stencil_op_hcompute_conv_stencil_10_233_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_233_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_234_res = hw_input_stencil_op_hcompute_conv_stencil_10_234_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_234_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_235_res = hw_input_stencil_op_hcompute_conv_stencil_10_235_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_235_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_236_res = hw_input_stencil_op_hcompute_conv_stencil_10_236_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_236_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_input_stencil_op_hcompute_conv_stencil_11_175
//	hw_input_stencil_op_hcompute_conv_stencil_11_176
//	hw_input_stencil_op_hcompute_conv_stencil_11_177
//	hw_input_stencil_op_hcompute_conv_stencil_11_178
//	hw_input_stencil_op_hcompute_conv_stencil_11_179
//	hw_input_stencil_op_hcompute_conv_stencil_11_180
//	hw_input_stencil_op_hcompute_conv_stencil_11_181
//	hw_input_stencil_op_hcompute_conv_stencil_11_182
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_11_175
    // hw_input_stencil_op_hcompute_conv_stencil_11_176
    // hw_input_stencil_op_hcompute_conv_stencil_11_177
    // hw_input_stencil_op_hcompute_conv_stencil_11_178
    // hw_input_stencil_op_hcompute_conv_stencil_11_179
    // hw_input_stencil_op_hcompute_conv_stencil_11_180
    // hw_input_stencil_op_hcompute_conv_stencil_11_181
    // hw_input_stencil_op_hcompute_conv_stencil_11_182

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_175_res = hw_input_stencil_op_hcompute_conv_stencil_11_175_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_175_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_176_res = hw_input_stencil_op_hcompute_conv_stencil_11_176_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_176_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_177_res = hw_input_stencil_op_hcompute_conv_stencil_11_177_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_177_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_178_res = hw_input_stencil_op_hcompute_conv_stencil_11_178_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_178_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_179_res = hw_input_stencil_op_hcompute_conv_stencil_11_179_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_179_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_180_res = hw_input_stencil_op_hcompute_conv_stencil_11_180_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_180_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_181_res = hw_input_stencil_op_hcompute_conv_stencil_11_181_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_181_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_182_res = hw_input_stencil_op_hcompute_conv_stencil_11_182_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_182_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_input_stencil_op_hcompute_conv_stencil_12_157
//	hw_input_stencil_op_hcompute_conv_stencil_12_158
//	hw_input_stencil_op_hcompute_conv_stencil_12_159
//	hw_input_stencil_op_hcompute_conv_stencil_12_160
//	hw_input_stencil_op_hcompute_conv_stencil_12_161
//	hw_input_stencil_op_hcompute_conv_stencil_12_162
//	hw_input_stencil_op_hcompute_conv_stencil_12_163
//	hw_input_stencil_op_hcompute_conv_stencil_12_164
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_12_157
    // hw_input_stencil_op_hcompute_conv_stencil_12_158
    // hw_input_stencil_op_hcompute_conv_stencil_12_159
    // hw_input_stencil_op_hcompute_conv_stencil_12_160
    // hw_input_stencil_op_hcompute_conv_stencil_12_161
    // hw_input_stencil_op_hcompute_conv_stencil_12_162
    // hw_input_stencil_op_hcompute_conv_stencil_12_163
    // hw_input_stencil_op_hcompute_conv_stencil_12_164

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_157_res = hw_input_stencil_op_hcompute_conv_stencil_12_157_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_157_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_158_res = hw_input_stencil_op_hcompute_conv_stencil_12_158_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_158_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_159_res = hw_input_stencil_op_hcompute_conv_stencil_12_159_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_159_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_160_res = hw_input_stencil_op_hcompute_conv_stencil_12_160_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_160_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_161_res = hw_input_stencil_op_hcompute_conv_stencil_12_161_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_161_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_162_res = hw_input_stencil_op_hcompute_conv_stencil_12_162_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_162_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_163_res = hw_input_stencil_op_hcompute_conv_stencil_12_163_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_163_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_164_res = hw_input_stencil_op_hcompute_conv_stencil_12_164_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_164_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_input_stencil_op_hcompute_conv_stencil_13_265
//	hw_input_stencil_op_hcompute_conv_stencil_13_266
//	hw_input_stencil_op_hcompute_conv_stencil_13_267
//	hw_input_stencil_op_hcompute_conv_stencil_13_268
//	hw_input_stencil_op_hcompute_conv_stencil_13_269
//	hw_input_stencil_op_hcompute_conv_stencil_13_270
//	hw_input_stencil_op_hcompute_conv_stencil_13_271
//	hw_input_stencil_op_hcompute_conv_stencil_13_272
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_13_265
    // hw_input_stencil_op_hcompute_conv_stencil_13_266
    // hw_input_stencil_op_hcompute_conv_stencil_13_267
    // hw_input_stencil_op_hcompute_conv_stencil_13_268
    // hw_input_stencil_op_hcompute_conv_stencil_13_269
    // hw_input_stencil_op_hcompute_conv_stencil_13_270
    // hw_input_stencil_op_hcompute_conv_stencil_13_271
    // hw_input_stencil_op_hcompute_conv_stencil_13_272

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_265_res = hw_input_stencil_op_hcompute_conv_stencil_13_265_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_265_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_266_res = hw_input_stencil_op_hcompute_conv_stencil_13_266_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_266_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_267_res = hw_input_stencil_op_hcompute_conv_stencil_13_267_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_267_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_268_res = hw_input_stencil_op_hcompute_conv_stencil_13_268_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_268_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_269_res = hw_input_stencil_op_hcompute_conv_stencil_13_269_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_269_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_270_res = hw_input_stencil_op_hcompute_conv_stencil_13_270_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_270_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_271_res = hw_input_stencil_op_hcompute_conv_stencil_13_271_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_271_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_272_res = hw_input_stencil_op_hcompute_conv_stencil_13_272_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_272_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_input_stencil_op_hcompute_conv_stencil_14_211
//	hw_input_stencil_op_hcompute_conv_stencil_14_212
//	hw_input_stencil_op_hcompute_conv_stencil_14_213
//	hw_input_stencil_op_hcompute_conv_stencil_14_214
//	hw_input_stencil_op_hcompute_conv_stencil_14_215
//	hw_input_stencil_op_hcompute_conv_stencil_14_216
//	hw_input_stencil_op_hcompute_conv_stencil_14_217
//	hw_input_stencil_op_hcompute_conv_stencil_14_218
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_14_211
    // hw_input_stencil_op_hcompute_conv_stencil_14_212
    // hw_input_stencil_op_hcompute_conv_stencil_14_213
    // hw_input_stencil_op_hcompute_conv_stencil_14_214
    // hw_input_stencil_op_hcompute_conv_stencil_14_215
    // hw_input_stencil_op_hcompute_conv_stencil_14_216
    // hw_input_stencil_op_hcompute_conv_stencil_14_217
    // hw_input_stencil_op_hcompute_conv_stencil_14_218

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_211_res = hw_input_stencil_op_hcompute_conv_stencil_14_211_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_211_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_212_res = hw_input_stencil_op_hcompute_conv_stencil_14_212_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_212_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_213_res = hw_input_stencil_op_hcompute_conv_stencil_14_213_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_213_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_214_res = hw_input_stencil_op_hcompute_conv_stencil_14_214_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_214_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_215_res = hw_input_stencil_op_hcompute_conv_stencil_14_215_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_215_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_216_res = hw_input_stencil_op_hcompute_conv_stencil_14_216_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_216_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_217_res = hw_input_stencil_op_hcompute_conv_stencil_14_217_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_217_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_218_res = hw_input_stencil_op_hcompute_conv_stencil_14_218_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_218_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_input_stencil_op_hcompute_conv_stencil_15_63
//	hw_input_stencil_op_hcompute_conv_stencil_15_64
//	hw_input_stencil_op_hcompute_conv_stencil_15_65
//	hw_input_stencil_op_hcompute_conv_stencil_15_66
//	hw_input_stencil_op_hcompute_conv_stencil_15_67
//	hw_input_stencil_op_hcompute_conv_stencil_15_68
//	hw_input_stencil_op_hcompute_conv_stencil_15_69
//	hw_input_stencil_op_hcompute_conv_stencil_15_70
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_15_63
    // hw_input_stencil_op_hcompute_conv_stencil_15_64
    // hw_input_stencil_op_hcompute_conv_stencil_15_65
    // hw_input_stencil_op_hcompute_conv_stencil_15_66
    // hw_input_stencil_op_hcompute_conv_stencil_15_67
    // hw_input_stencil_op_hcompute_conv_stencil_15_68
    // hw_input_stencil_op_hcompute_conv_stencil_15_69
    // hw_input_stencil_op_hcompute_conv_stencil_15_70

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_63_res = hw_input_stencil_op_hcompute_conv_stencil_15_63_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_63_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_64_res = hw_input_stencil_op_hcompute_conv_stencil_15_64_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_64_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_65_res = hw_input_stencil_op_hcompute_conv_stencil_15_65_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_65_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_66_res = hw_input_stencil_op_hcompute_conv_stencil_15_66_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_66_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_67_res = hw_input_stencil_op_hcompute_conv_stencil_15_67_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_67_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_68_res = hw_input_stencil_op_hcompute_conv_stencil_15_68_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_68_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_69_res = hw_input_stencil_op_hcompute_conv_stencil_15_69_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_69_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_70_res = hw_input_stencil_op_hcompute_conv_stencil_15_70_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_70_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_input_stencil_op_hcompute_conv_stencil_16_25
//	hw_input_stencil_op_hcompute_conv_stencil_16_26
//	hw_input_stencil_op_hcompute_conv_stencil_16_27
//	hw_input_stencil_op_hcompute_conv_stencil_16_28
//	hw_input_stencil_op_hcompute_conv_stencil_16_29
//	hw_input_stencil_op_hcompute_conv_stencil_16_30
//	hw_input_stencil_op_hcompute_conv_stencil_16_31
//	hw_input_stencil_op_hcompute_conv_stencil_16_32
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_16_25
    // hw_input_stencil_op_hcompute_conv_stencil_16_26
    // hw_input_stencil_op_hcompute_conv_stencil_16_27
    // hw_input_stencil_op_hcompute_conv_stencil_16_28
    // hw_input_stencil_op_hcompute_conv_stencil_16_29
    // hw_input_stencil_op_hcompute_conv_stencil_16_30
    // hw_input_stencil_op_hcompute_conv_stencil_16_31
    // hw_input_stencil_op_hcompute_conv_stencil_16_32

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_25_res = hw_input_stencil_op_hcompute_conv_stencil_16_25_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_25_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_26_res = hw_input_stencil_op_hcompute_conv_stencil_16_26_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_26_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_27_res = hw_input_stencil_op_hcompute_conv_stencil_16_27_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_27_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_28_res = hw_input_stencil_op_hcompute_conv_stencil_16_28_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_28_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_29_res = hw_input_stencil_op_hcompute_conv_stencil_16_29_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_29_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_30_res = hw_input_stencil_op_hcompute_conv_stencil_16_30_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_30_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_31_res = hw_input_stencil_op_hcompute_conv_stencil_16_31_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_31_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_32_res = hw_input_stencil_op_hcompute_conv_stencil_16_32_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_32_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_7
//	hw_input_stencil_op_hcompute_conv_stencil_1_8
//	hw_input_stencil_op_hcompute_conv_stencil_1_9
//	hw_input_stencil_op_hcompute_conv_stencil_1_10
//	hw_input_stencil_op_hcompute_conv_stencil_1_11
//	hw_input_stencil_op_hcompute_conv_stencil_1_12
//	hw_input_stencil_op_hcompute_conv_stencil_1_13
//	hw_input_stencil_op_hcompute_conv_stencil_1_14
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_1_7
    // hw_input_stencil_op_hcompute_conv_stencil_1_8
    // hw_input_stencil_op_hcompute_conv_stencil_1_9
    // hw_input_stencil_op_hcompute_conv_stencil_1_10
    // hw_input_stencil_op_hcompute_conv_stencil_1_11
    // hw_input_stencil_op_hcompute_conv_stencil_1_12
    // hw_input_stencil_op_hcompute_conv_stencil_1_13
    // hw_input_stencil_op_hcompute_conv_stencil_1_14

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_res = hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_7_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_8_res = hw_input_stencil_op_hcompute_conv_stencil_1_8_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_8_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_9_res = hw_input_stencil_op_hcompute_conv_stencil_1_9_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_9_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_10_res = hw_input_stencil_op_hcompute_conv_stencil_1_10_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_10_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_res = hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_11_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_12_res = hw_input_stencil_op_hcompute_conv_stencil_1_12_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_12_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_13_res = hw_input_stencil_op_hcompute_conv_stencil_1_13_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_13_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_14_res = hw_input_stencil_op_hcompute_conv_stencil_1_14_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_14_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_input_stencil_op_hcompute_conv_stencil_2_81
//	hw_input_stencil_op_hcompute_conv_stencil_2_82
//	hw_input_stencil_op_hcompute_conv_stencil_2_83
//	hw_input_stencil_op_hcompute_conv_stencil_2_84
//	hw_input_stencil_op_hcompute_conv_stencil_2_85
//	hw_input_stencil_op_hcompute_conv_stencil_2_86
//	hw_input_stencil_op_hcompute_conv_stencil_2_87
//	hw_input_stencil_op_hcompute_conv_stencil_2_88
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_2_81
    // hw_input_stencil_op_hcompute_conv_stencil_2_82
    // hw_input_stencil_op_hcompute_conv_stencil_2_83
    // hw_input_stencil_op_hcompute_conv_stencil_2_84
    // hw_input_stencil_op_hcompute_conv_stencil_2_85
    // hw_input_stencil_op_hcompute_conv_stencil_2_86
    // hw_input_stencil_op_hcompute_conv_stencil_2_87
    // hw_input_stencil_op_hcompute_conv_stencil_2_88

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_81_res = hw_input_stencil_op_hcompute_conv_stencil_2_81_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_81_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_82_res = hw_input_stencil_op_hcompute_conv_stencil_2_82_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_82_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_83_res = hw_input_stencil_op_hcompute_conv_stencil_2_83_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_83_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_84_res = hw_input_stencil_op_hcompute_conv_stencil_2_84_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_84_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_85_res = hw_input_stencil_op_hcompute_conv_stencil_2_85_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_85_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_86_res = hw_input_stencil_op_hcompute_conv_stencil_2_86_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_86_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_87_res = hw_input_stencil_op_hcompute_conv_stencil_2_87_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_87_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_88_res = hw_input_stencil_op_hcompute_conv_stencil_2_88_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_88_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_input_stencil_op_hcompute_conv_stencil_3_99
//	hw_input_stencil_op_hcompute_conv_stencil_3_100
//	hw_input_stencil_op_hcompute_conv_stencil_3_101
//	hw_input_stencil_op_hcompute_conv_stencil_3_102
//	hw_input_stencil_op_hcompute_conv_stencil_3_103
//	hw_input_stencil_op_hcompute_conv_stencil_3_104
//	hw_input_stencil_op_hcompute_conv_stencil_3_105
//	hw_input_stencil_op_hcompute_conv_stencil_3_106
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_3_99
    // hw_input_stencil_op_hcompute_conv_stencil_3_100
    // hw_input_stencil_op_hcompute_conv_stencil_3_101
    // hw_input_stencil_op_hcompute_conv_stencil_3_102
    // hw_input_stencil_op_hcompute_conv_stencil_3_103
    // hw_input_stencil_op_hcompute_conv_stencil_3_104
    // hw_input_stencil_op_hcompute_conv_stencil_3_105
    // hw_input_stencil_op_hcompute_conv_stencil_3_106

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_99_res = hw_input_stencil_op_hcompute_conv_stencil_3_99_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_99_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_100_res = hw_input_stencil_op_hcompute_conv_stencil_3_100_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_100_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_101_res = hw_input_stencil_op_hcompute_conv_stencil_3_101_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_101_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_102_res = hw_input_stencil_op_hcompute_conv_stencil_3_102_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_102_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_103_res = hw_input_stencil_op_hcompute_conv_stencil_3_103_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_103_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_104_res = hw_input_stencil_op_hcompute_conv_stencil_3_104_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_104_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_105_res = hw_input_stencil_op_hcompute_conv_stencil_3_105_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_105_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_106_res = hw_input_stencil_op_hcompute_conv_stencil_3_106_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_106_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_stencil_op_hcompute_conv_stencil_4_119
//	hw_input_stencil_op_hcompute_conv_stencil_4_120
//	hw_input_stencil_op_hcompute_conv_stencil_4_121
//	hw_input_stencil_op_hcompute_conv_stencil_4_122
//	hw_input_stencil_op_hcompute_conv_stencil_4_123
//	hw_input_stencil_op_hcompute_conv_stencil_4_124
//	hw_input_stencil_op_hcompute_conv_stencil_4_125
//	hw_input_stencil_op_hcompute_conv_stencil_4_126
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_4_119
    // hw_input_stencil_op_hcompute_conv_stencil_4_120
    // hw_input_stencil_op_hcompute_conv_stencil_4_121
    // hw_input_stencil_op_hcompute_conv_stencil_4_122
    // hw_input_stencil_op_hcompute_conv_stencil_4_123
    // hw_input_stencil_op_hcompute_conv_stencil_4_124
    // hw_input_stencil_op_hcompute_conv_stencil_4_125
    // hw_input_stencil_op_hcompute_conv_stencil_4_126

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_119_res = hw_input_stencil_op_hcompute_conv_stencil_4_119_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_119_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_120_res = hw_input_stencil_op_hcompute_conv_stencil_4_120_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_120_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_121_res = hw_input_stencil_op_hcompute_conv_stencil_4_121_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_121_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_122_res = hw_input_stencil_op_hcompute_conv_stencil_4_122_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_122_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_123_res = hw_input_stencil_op_hcompute_conv_stencil_4_123_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_123_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_124_res = hw_input_stencil_op_hcompute_conv_stencil_4_124_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_124_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_125_res = hw_input_stencil_op_hcompute_conv_stencil_4_125_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_125_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_126_res = hw_input_stencil_op_hcompute_conv_stencil_4_126_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_126_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_stencil_op_hcompute_conv_stencil_5_137
//	hw_input_stencil_op_hcompute_conv_stencil_5_138
//	hw_input_stencil_op_hcompute_conv_stencil_5_139
//	hw_input_stencil_op_hcompute_conv_stencil_5_140
//	hw_input_stencil_op_hcompute_conv_stencil_5_141
//	hw_input_stencil_op_hcompute_conv_stencil_5_142
//	hw_input_stencil_op_hcompute_conv_stencil_5_143
//	hw_input_stencil_op_hcompute_conv_stencil_5_144
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_5_137
    // hw_input_stencil_op_hcompute_conv_stencil_5_138
    // hw_input_stencil_op_hcompute_conv_stencil_5_139
    // hw_input_stencil_op_hcompute_conv_stencil_5_140
    // hw_input_stencil_op_hcompute_conv_stencil_5_141
    // hw_input_stencil_op_hcompute_conv_stencil_5_142
    // hw_input_stencil_op_hcompute_conv_stencil_5_143
    // hw_input_stencil_op_hcompute_conv_stencil_5_144

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_137_res = hw_input_stencil_op_hcompute_conv_stencil_5_137_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_137_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_138_res = hw_input_stencil_op_hcompute_conv_stencil_5_138_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_138_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_139_res = hw_input_stencil_op_hcompute_conv_stencil_5_139_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_139_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_140_res = hw_input_stencil_op_hcompute_conv_stencil_5_140_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_140_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_141_res = hw_input_stencil_op_hcompute_conv_stencil_5_141_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_141_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_142_res = hw_input_stencil_op_hcompute_conv_stencil_5_142_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_142_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_143_res = hw_input_stencil_op_hcompute_conv_stencil_5_143_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_143_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_144_res = hw_input_stencil_op_hcompute_conv_stencil_5_144_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_144_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_input_stencil_op_hcompute_conv_stencil_6_247
//	hw_input_stencil_op_hcompute_conv_stencil_6_248
//	hw_input_stencil_op_hcompute_conv_stencil_6_249
//	hw_input_stencil_op_hcompute_conv_stencil_6_250
//	hw_input_stencil_op_hcompute_conv_stencil_6_251
//	hw_input_stencil_op_hcompute_conv_stencil_6_252
//	hw_input_stencil_op_hcompute_conv_stencil_6_253
//	hw_input_stencil_op_hcompute_conv_stencil_6_254
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_6_247
    // hw_input_stencil_op_hcompute_conv_stencil_6_248
    // hw_input_stencil_op_hcompute_conv_stencil_6_249
    // hw_input_stencil_op_hcompute_conv_stencil_6_250
    // hw_input_stencil_op_hcompute_conv_stencil_6_251
    // hw_input_stencil_op_hcompute_conv_stencil_6_252
    // hw_input_stencil_op_hcompute_conv_stencil_6_253
    // hw_input_stencil_op_hcompute_conv_stencil_6_254

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_247_res = hw_input_stencil_op_hcompute_conv_stencil_6_247_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_247_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_248_res = hw_input_stencil_op_hcompute_conv_stencil_6_248_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_248_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_249_res = hw_input_stencil_op_hcompute_conv_stencil_6_249_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_249_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_250_res = hw_input_stencil_op_hcompute_conv_stencil_6_250_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_250_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_251_res = hw_input_stencil_op_hcompute_conv_stencil_6_251_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_251_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_252_res = hw_input_stencil_op_hcompute_conv_stencil_6_252_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_252_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_253_res = hw_input_stencil_op_hcompute_conv_stencil_6_253_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_253_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_254_res = hw_input_stencil_op_hcompute_conv_stencil_6_254_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_254_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_input_stencil_op_hcompute_conv_stencil_7_43
//	hw_input_stencil_op_hcompute_conv_stencil_7_44
//	hw_input_stencil_op_hcompute_conv_stencil_7_45
//	hw_input_stencil_op_hcompute_conv_stencil_7_46
//	hw_input_stencil_op_hcompute_conv_stencil_7_47
//	hw_input_stencil_op_hcompute_conv_stencil_7_48
//	hw_input_stencil_op_hcompute_conv_stencil_7_49
//	hw_input_stencil_op_hcompute_conv_stencil_7_50
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_7_43
    // hw_input_stencil_op_hcompute_conv_stencil_7_44
    // hw_input_stencil_op_hcompute_conv_stencil_7_45
    // hw_input_stencil_op_hcompute_conv_stencil_7_46
    // hw_input_stencil_op_hcompute_conv_stencil_7_47
    // hw_input_stencil_op_hcompute_conv_stencil_7_48
    // hw_input_stencil_op_hcompute_conv_stencil_7_49
    // hw_input_stencil_op_hcompute_conv_stencil_7_50

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_43_res = hw_input_stencil_op_hcompute_conv_stencil_7_43_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_43_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_44_res = hw_input_stencil_op_hcompute_conv_stencil_7_44_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_44_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_45_res = hw_input_stencil_op_hcompute_conv_stencil_7_45_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_45_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_46_res = hw_input_stencil_op_hcompute_conv_stencil_7_46_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_46_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_47_res = hw_input_stencil_op_hcompute_conv_stencil_7_47_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_47_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_48_res = hw_input_stencil_op_hcompute_conv_stencil_7_48_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_48_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_49_res = hw_input_stencil_op_hcompute_conv_stencil_7_49_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_49_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_50_res = hw_input_stencil_op_hcompute_conv_stencil_7_50_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_50_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_stencil_op_hcompute_conv_stencil_8_283
//	hw_input_stencil_op_hcompute_conv_stencil_8_284
//	hw_input_stencil_op_hcompute_conv_stencil_8_285
//	hw_input_stencil_op_hcompute_conv_stencil_8_286
//	hw_input_stencil_op_hcompute_conv_stencil_8_287
//	hw_input_stencil_op_hcompute_conv_stencil_8_288
//	hw_input_stencil_op_hcompute_conv_stencil_8_289
//	hw_input_stencil_op_hcompute_conv_stencil_8_290
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_8_283
    // hw_input_stencil_op_hcompute_conv_stencil_8_284
    // hw_input_stencil_op_hcompute_conv_stencil_8_285
    // hw_input_stencil_op_hcompute_conv_stencil_8_286
    // hw_input_stencil_op_hcompute_conv_stencil_8_287
    // hw_input_stencil_op_hcompute_conv_stencil_8_288
    // hw_input_stencil_op_hcompute_conv_stencil_8_289
    // hw_input_stencil_op_hcompute_conv_stencil_8_290

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_283_res = hw_input_stencil_op_hcompute_conv_stencil_8_283_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_283_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_284_res = hw_input_stencil_op_hcompute_conv_stencil_8_284_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_284_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_285_res = hw_input_stencil_op_hcompute_conv_stencil_8_285_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_285_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_286_res = hw_input_stencil_op_hcompute_conv_stencil_8_286_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_286_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_287_res = hw_input_stencil_op_hcompute_conv_stencil_8_287_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_287_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_288_res = hw_input_stencil_op_hcompute_conv_stencil_8_288_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_288_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_289_res = hw_input_stencil_op_hcompute_conv_stencil_8_289_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_289_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_290_res = hw_input_stencil_op_hcompute_conv_stencil_8_290_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_290_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_stencil_op_hcompute_conv_stencil_9_193
//	hw_input_stencil_op_hcompute_conv_stencil_9_194
//	hw_input_stencil_op_hcompute_conv_stencil_9_195
//	hw_input_stencil_op_hcompute_conv_stencil_9_196
//	hw_input_stencil_op_hcompute_conv_stencil_9_197
//	hw_input_stencil_op_hcompute_conv_stencil_9_198
//	hw_input_stencil_op_hcompute_conv_stencil_9_199
//	hw_input_stencil_op_hcompute_conv_stencil_9_200
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_9_193
    // hw_input_stencil_op_hcompute_conv_stencil_9_194
    // hw_input_stencil_op_hcompute_conv_stencil_9_195
    // hw_input_stencil_op_hcompute_conv_stencil_9_196
    // hw_input_stencil_op_hcompute_conv_stencil_9_197
    // hw_input_stencil_op_hcompute_conv_stencil_9_198
    // hw_input_stencil_op_hcompute_conv_stencil_9_199
    // hw_input_stencil_op_hcompute_conv_stencil_9_200

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_193_res = hw_input_stencil_op_hcompute_conv_stencil_9_193_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_193_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_194_res = hw_input_stencil_op_hcompute_conv_stencil_9_194_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_194_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_195_res = hw_input_stencil_op_hcompute_conv_stencil_9_195_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_195_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_196_res = hw_input_stencil_op_hcompute_conv_stencil_9_196_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_196_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_197_res = hw_input_stencil_op_hcompute_conv_stencil_9_197_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_197_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_198_res = hw_input_stencil_op_hcompute_conv_stencil_9_198_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_198_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_199_res = hw_input_stencil_op_hcompute_conv_stencil_9_199_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_199_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_200_res = hw_input_stencil_op_hcompute_conv_stencil_9_200_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_200_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_115
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_115_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_115_write(hw_input_stencil_op_hcompute_hw_input_stencil_115_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, dynamic_address);
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

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_237_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_237 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_238_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_238 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_239_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_239 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_240_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_240 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_241_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_241 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_242_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_242 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_243_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_243 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_244_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_244 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_183_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_183 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_184_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_184 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_185_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_185 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_186_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_186 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_187_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_187 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_188_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_188 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_189_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_189 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_190_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_190 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_165_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_165 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_166_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_166 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_167_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_167 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_168_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_168 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_169_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_169 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_170_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_170 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_171_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_171 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_172_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_172 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_273_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_273 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_274_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_274 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_275_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_275 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_276_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_276 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_277_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_277 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_278_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_278 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_279_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_279 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_280_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_280 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_219_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_219 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_220_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_220 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_221_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_221 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_222_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_222 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_223_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_223 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_224_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_224 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_225_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_225 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_226_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_226 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_71_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_71 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_72_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_72 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_73_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_73 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_74_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_74 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_75_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_75 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_76_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_76 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_77_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_77 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_78_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_78 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_33_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_33 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_34_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_34 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_35_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_35 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_36_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_36 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_37_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_37 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_38_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_38 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_39_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_39 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_40_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_40 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_15_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_15 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_16_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_16 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_17_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_17 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_18_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_18 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_19_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_19 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_20_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_20 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_21_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_21 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_22_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_22 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_89_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_89 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_90_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_90 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_91_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_91 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_92_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_92 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_93_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_93 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_94_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_94 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_95_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_95 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_96_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_96 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_107_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_107 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_108_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_108 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_109_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_109 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_110_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_110 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_111_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_111 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_112_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_112 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_113_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_113 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_114_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_114 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_127_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_127 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_128_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_128 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_129_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_129 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_130_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_130 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_131_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_131 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_132_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_132 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_133_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_133 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_134_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_134 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_145_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_145 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_146_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_146 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_147_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_147 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_148_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_148 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_149_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_149 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_150_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_150 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_151_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_151 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_152_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_152 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_255_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_255 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_256_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_256 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_257_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_257 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_258_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_258 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_259_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_259 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_260_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_260 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_261_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_261 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_262_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_262 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_51_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_51 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_52_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_52 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_53_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_53 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_54_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_54 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_55_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_55 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_56_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_56 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_57_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_57 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_58_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_58 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_291_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_291 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_292_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_292 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_293_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_293 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_294_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_294 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_295_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_295 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_296_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_296 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_297_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_297 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_298_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_298 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_201_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_201 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_202_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_202 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_203_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_203 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_204_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_204 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_205_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_205 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_206_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_206 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_207_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_207 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_208_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_208 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_237
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_238
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_239
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_240
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_241
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_242
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_243
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_244
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_237
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_238
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_239
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_240
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_241
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_242
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_243
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_244

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_237_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_237_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_237_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_238_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_238_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_238_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_239_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_239_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_239_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_240_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_240_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_240_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_241_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_241_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_241_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_242_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_242_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_242_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_243_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_243_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_243_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_244_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_244_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_244_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_183
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_184
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_185
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_186
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_187
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_188
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_189
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_190
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_183
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_184
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_185
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_186
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_187
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_188
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_189
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_190

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_183_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_183_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_183_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_184_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_184_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_184_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_185_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_185_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_185_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_186_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_186_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_186_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_187_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_187_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_187_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_188_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_188_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_188_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_189_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_189_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_189_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_190_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_190_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_190_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_165
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_166
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_167
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_168
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_169
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_170
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_171
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_172
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_165
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_166
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_167
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_168
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_169
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_170
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_171
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_172

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_165_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_165_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_165_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_166_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_166_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_166_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_167_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_167_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_167_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_168_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_168_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_168_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_169_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_169_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_169_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_170_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_170_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_170_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_171_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_171_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_171_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_172_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_172_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_172_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_273
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_274
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_275
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_276
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_277
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_278
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_279
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_280
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_273
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_274
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_275
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_276
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_277
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_278
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_279
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_280

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_273_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_273_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_273_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_274_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_274_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_274_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_275_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_275_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_275_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_276_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_276_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_276_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_277_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_277_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_277_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_278_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_278_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_278_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_279_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_279_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_279_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_280_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_280_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_280_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_219
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_220
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_221
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_222
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_223
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_224
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_225
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_226
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_219
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_220
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_221
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_222
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_223
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_224
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_225
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_226

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_219_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_219_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_219_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_220_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_220_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_220_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_221_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_221_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_221_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_222_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_222_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_222_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_223_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_223_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_223_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_224_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_224_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_224_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_225_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_225_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_225_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_226_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_226_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_226_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_71
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_72
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_73
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_74
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_75
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_76
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_77
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_78
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_71
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_72
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_73
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_74
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_75
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_76
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_77
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_78

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_71_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_71_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_71_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_72_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_72_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_72_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_73_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_73_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_73_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_74_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_74_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_74_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_75_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_75_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_75_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_76_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_76_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_76_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_77_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_77_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_77_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_78_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_78_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_78_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_33
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_34
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_35
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_36
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_37
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_38
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_39
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_40
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_33
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_34
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_35
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_36
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_37
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_38
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_39
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_40

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_33_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_33_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_33_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_34_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_34_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_34_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_35_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_35_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_35_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_36_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_36_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_36_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_37_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_37_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_37_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_38_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_38_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_38_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_39_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_39_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_39_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_40_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_40_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_40_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_15
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_16
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_17
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_18
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_19
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_20
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_21
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_22
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_15
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_16
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_17
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_18
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_19
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_20
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_21
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_22

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_15_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_15_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_15_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_16_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_16_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_16_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_17_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_17_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_17_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_18_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_18_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_18_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_19_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_19_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_19_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_20_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_20_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_20_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_21_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_21_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_21_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_22_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_22_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_22_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_89
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_90
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_91
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_92
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_93
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_94
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_95
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_96
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_89
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_90
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_91
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_92
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_93
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_94
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_95
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_96

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_89_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_89_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_89_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_90_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_90_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_90_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_91_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_91_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_91_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_92_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_92_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_92_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_93_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_93_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_93_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_94_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_94_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_94_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_95_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_95_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_95_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_96_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_96_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_96_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_107
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_108
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_109
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_110
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_111
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_112
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_113
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_114
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_107
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_108
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_109
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_110
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_111
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_112
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_113
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_114

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_107_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_107_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_107_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_108_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_108_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_108_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_109_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_109_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_109_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_110_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_110_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_110_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_111_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_111_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_111_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_112_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_112_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_112_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_113_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_113_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_113_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_114_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_114_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_114_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_127
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_128
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_129
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_130
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_131
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_132
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_133
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_134
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_127
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_128
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_129
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_130
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_131
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_132
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_133
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_134

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_127_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_127_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_127_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_128_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_128_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_128_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_129_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_129_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_129_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_130_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_130_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_130_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_131_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_131_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_131_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_132_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_132_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_132_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_133_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_133_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_133_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_134_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_134_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_134_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_145
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_146
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_147
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_148
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_149
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_150
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_151
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_152
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_145
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_146
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_147
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_148
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_149
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_150
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_151
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_152

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_145_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_145_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_145_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_146_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_146_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_146_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_147_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_147_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_147_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_148_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_148_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_148_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_149_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_149_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_149_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_150_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_150_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_150_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_151_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_151_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_151_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_152_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_152_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_152_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_255
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_256
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_257
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_258
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_259
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_260
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_261
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_262
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_255
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_256
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_257
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_258
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_259
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_260
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_261
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_262

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_255_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_255_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_255_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_256_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_256_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_256_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_257_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_257_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_257_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_258_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_258_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_258_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_259_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_259_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_259_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_260_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_260_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_260_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_261_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_261_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_261_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_262_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_262_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_262_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_51
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_52
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_53
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_54
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_55
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_56
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_57
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_58
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_51
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_52
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_53
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_54
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_55
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_56
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_57
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_58

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_51_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_51_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_51_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_52_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_52_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_52_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_53_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_53_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_53_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_54_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_54_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_54_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_55_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_55_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_55_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_56_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_56_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_56_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_57_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_57_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_57_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_58_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_58_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_58_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_291
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_292
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_293
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_294
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_295
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_296
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_297
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_298
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_291
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_292
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_293
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_294
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_295
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_296
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_297
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_298

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_291_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_291_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_291_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_292_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_292_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_292_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_293_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_293_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_293_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_294_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_294_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_294_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_295_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_295_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_295_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_296_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_296_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_296_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_297_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_297_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_297_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_298_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_298_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_298_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_201
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_202
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_203
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_204
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_205
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_206
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_207
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_208
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_201
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_202
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_203
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_204
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_205
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_206
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_207
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_208

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_201_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_201_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_201_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_202_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_202_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_202_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_203_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_203_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_203_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_204_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_204_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_204_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_205_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_205_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_205_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_206_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_206_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_206_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_207_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_207_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_207_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_208_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_208_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_208_res);
	return result;
}

// op_hcompute_hw_kernel_stencil_write
//	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2
inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_stencil_write, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res = op_hcompute_hw_kernel_stencil_write.extract<0, 15>();
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_2_res, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, dynamic_address);
}



// Operation logic
inline void load_to_conv_stencil_rb_at_conv_s1_x7(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_stencil_ld4__p__conv_s1_x_c__conv_stencil_ld5__p__conv_s1_y_c__conv_stencil_ld6__p__0_value = conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_write_bundle_write(/* arg names */conv_stencil_rb_at_conv_s1_x_conv_stencil_ld4__p__conv_s1_x_c__conv_stencil_ld5__p__conv_s1_y_c__conv_stencil_ld6__p__0_value, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, 0);

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

inline void op_hcompute_conv_stencil_1(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__0_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_1(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__0_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__0_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_16(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__15_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_16(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__15_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__15_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_7(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__6_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_7(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__6_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__6_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

inline void op_hcompute_conv_stencil_15(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__14_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_15(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__14_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__14_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_2(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__1_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_2(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__1_value, hw_input_stencil_1_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_1_c__1_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_3(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__2_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_3(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__2_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__2_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

inline void op_hcompute_conv_stencil_4(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__3_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_4(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__3_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__3_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_5(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__4_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_5(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__4_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__4_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_conv_stencil_rb_at_conv_s1_x3(conv_stencil_cache& conv_stencil, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_conv_stencil_ld0__p__0_c__conv_stencil_ld1__p__conv_s1_y_c__conv_stencil_ld2__p__0_value = conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_read_bundle_read(conv_stencil/* source_delay */, root, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_write_bundle_write(/* arg names */conv_stencil_conv_stencil_ld0__p__0_c__conv_stencil_ld1__p__conv_s1_y_c__conv_stencil_ld2__p__0_value, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_12(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__11_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_12(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__11_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__11_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_11(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__10_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_11(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__10_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__10_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_9(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__8_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_9(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__8_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__8_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_14(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__13_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_14(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__13_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__13_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_10(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__9_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_10(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__9_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__9_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_6(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__5_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_6(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__5_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__5_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_13(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__12_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_13(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__12_value, hw_input_stencil_3_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_3_c__12_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_conv_stencil_8(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, hw_input_stencil_cache& hw_input_stencil, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x) {
  // Dynamic address computation

	// Consume: conv_stencil_rb_at_conv_s1_x
	auto conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__7_value = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_rb_at_conv_s1_x/* source_delay */, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

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

	auto compute_result = hcompute_conv_stencil_8(conv_stencil_rb_at_conv_s1_x_conv_s1_x_c__conv_s1_y_c__7_value, hw_input_stencil_0_c___lp_conv_s1_r_x__p__conv_s1_x_rp__c___lp_conv_s1_r_y__p__conv_s1_y_rp__value, hw_kernel_stencil_0_c__7_c__conv_s1_r_x_c__conv_s1_r_y_value);
	// Produce: conv_stencil_rb_at_conv_s1_x
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_write_bundle_write(/* arg names */compute_result, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void resnet(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */kernel_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

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
  hw_input_stencil_cache hw_input_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  hw_kernel_stencil_cache hw_kernel_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 6, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 2, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 3, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 5, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 10, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> [0, 1, 27, conv_s1_y, 0, conv_stencil_ld2, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15; op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 20 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 7, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 8, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 21 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 19 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 1, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 2, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7; op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 23 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 9, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 1, 27 + hw_output_s0_w, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 22 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [hw_kernel_s0_y, 0, hw_kernel_s0_x, 11 + hw_kernel_s0_w, 0, hw_kernel_s0_z, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7; op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 1, conv_s0_y, conv_s0_x, 1, 27 + conv_s0_w, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15; load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> [29, 0, 2 + conv_s1_y, conv_s1_x, 4, conv_stencil_ld6, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15 }
//   { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 6, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_1(((i6 == 0) && (-6 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 2, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_9(((i6 == 0) && (-2 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 3, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_4(((i6 == 0) && (-3 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 5, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_3(((i6 == 0) && (-5 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 10, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_6(((i6 == 0) && (-10 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_10(((-7 + i6 == 0) && (i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (-5 + i5 >= 0) && (7 - i5 >= 0)))
//   { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> [0, 1, 27, conv_s1_y, 0, conv_stencil_ld2, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15 }
// Condition for load_to_conv_stencil_rb_at_conv_s1_x3(((i6 == 0) && (i4 == 0) && (-27 + i2 == 0) && (-1 + i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (15 - i5 >= 0)))
//   { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 20 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_12(((-1 + i6 == 0) && (i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-20 + i3 >= 0) && (22 - i3 >= 0) && (-5 + i5 >= 0) && (7 - i5 >= 0)))
//   { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 7, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_5(((i6 == 0) && (-7 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 8, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_2(((i6 == 0) && (-8 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 21 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_13(((-3 + i6 == 0) && (i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-21 + i3 >= 0) && (23 - i3 >= 0) && (-5 + i5 >= 0) && (7 - i5 >= 0)))
//   { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 19 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_11(((-4 + i6 == 0) && (i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-19 + i3 >= 0) && (21 - i3 >= 0) && (-5 + i5 >= 0) && (7 - i5 >= 0)))
//   { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 1, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_7(((i6 == 0) && (-1 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 2, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
// Condition for op_hcompute_hw_input_stencil(((i6 == 0) && (i5 == 0) && (-2 + i1 == 0) && (i0 == 0) && (i2 >= 0) && (29 - i2 >= 0) && (i3 >= 0) && (29 - i3 >= 0) && (i4 >= 0) && (7 - i4 >= 0)))
//   { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 23 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_15(((-5 + i6 == 0) && (i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-23 + i3 >= 0) && (25 - i3 >= 0) && (-5 + i5 >= 0) && (7 - i5 >= 0)))
//   { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 9, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_8(((i6 == 0) && (-9 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 1, 27 + hw_output_s0_w, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil(((-1 + i6 == 0) && (-1 + i4 == 0) && (-1 + i1 == 0) && (i0 == 0) && (-27 + i2 >= 0) && (42 - i2 >= 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0)))
//   { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_16(((-2 + i6 == 0) && (i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-24 + i3 >= 0) && (26 - i3 >= 0) && (-5 + i5 >= 0) && (7 - i5 >= 0)))
//   { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 22 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_14(((-6 + i6 == 0) && (i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-22 + i3 >= 0) && (24 - i3 >= 0) && (-5 + i5 >= 0) && (7 - i5 >= 0)))
//   { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [hw_kernel_s0_y, 0, hw_kernel_s0_x, 11 + hw_kernel_s0_w, 0, hw_kernel_s0_z, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7 }
// Condition for op_hcompute_hw_kernel_stencil(((i6 == 0) && (i4 == 0) && (i1 == 0) && (i0 >= 0) && (2 - i0 >= 0) && (i2 >= 0) && (2 - i2 >= 0) && (-11 + i3 >= 0) && (26 - i3 >= 0) && (i5 >= 0) && (7 - i5 >= 0)))
//   { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 1, conv_s0_y, conv_s0_x, 1, 27 + conv_s0_w, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
// Condition for op_hcompute_conv_stencil(((i6 == 0) && (-1 + i4 == 0) && (-1 + i1 == 0) && (i0 == 0) && (i2 >= 0) && (27 - i2 >= 0) && (i3 >= 0) && (27 - i3 >= 0) && (-27 + i5 >= 0) && (42 - i5 >= 0)))
//   { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> [29, 0, 2 + conv_s1_y, conv_s1_x, 4, conv_stencil_ld6, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15 }
// Condition for load_to_conv_stencil_rb_at_conv_s1_x7(((i6 == 0) && (-4 + i4 == 0) && (i1 == 0) && (-29 + i0 == 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (15 - i5 >= 0)))

  /*
for (int c0 = 0; c0 <= 29; c0 += 1) {
  if (c0 >= 2) {
    if (c0 == 2)
      for (int c2 = 0; c2 <= 1; c2 += 1)
        for (int c3 = 11; c3 <= 26; c3 += 1)
          for (int c5 = 0; c5 <= 7; c5 += 1)
            op_hcompute_hw_kernel_stencil(0, 2, c2, c3 - 11, c5);
    for (int c2 = 2; c2 <= 29; c2 += 1) {
      if (c0 == 29) {
        for (int c3 = 0; c3 <= 17; c3 += 1)
          for (int c5 = 0; c5 <= 15; c5 += 1)
            load_to_conv_stencil_rb_at_conv_s1_x7(0, c2 - 2, c3, 0, 0, c5);
      } else if (c0 == 2 && c2 == 2) {
        for (int c3 = 11; c3 <= 17; c3 += 1)
          for (int c5 = 0; c5 <= 7; c5 += 1)
            op_hcompute_hw_kernel_stencil(0, 2, 2, c3 - 11, c5);
      }
      for (int c3 = 18; c3 <= 26; c3 += 1) {
        if (c0 == 2 && c2 == 2)
          for (int c5 = 0; c5 <= 4; c5 += 1)
            op_hcompute_hw_kernel_stencil(0, 2, 2, c3 - 11, c5);
        for (int c5 = 5; c5 <= 7; c5 += 1) {
          if (c0 == 2 && c2 == 2)
            op_hcompute_hw_kernel_stencil(0, 2, 2, c3 - 11, c5);
          if (c3 >= 24) {
            op_hcompute_conv_stencil_16(0, c0 - 2, c2 - 2, c3 - 24, c5 - 5);
          } else {
            if (c3 >= 20 && c3 <= 22)
              op_hcompute_conv_stencil_12(0, c0 - 2, c2 - 2, c3 - 20, c5 - 5);
            if (c3 >= 21)
              op_hcompute_conv_stencil_13(0, c0 - 2, c2 - 2, c3 - 21, c5 - 5);
            if (c3 >= 19 && c3 <= 21)
              op_hcompute_conv_stencil_11(0, c0 - 2, c2 - 2, c3 - 19, c5 - 5);
            if (c3 <= 20)
              op_hcompute_conv_stencil_10(0, c0 - 2, c2 - 2, c3 - 18, c5 - 5);
          }
          if (c3 >= 23 && c3 <= 25)
            op_hcompute_conv_stencil_15(0, c0 - 2, c2 - 2, c3 - 23, c5 - 5);
          if (c3 >= 22 && c3 <= 24)
            op_hcompute_conv_stencil_14(0, c0 - 2, c2 - 2, c3 - 22, c5 - 5);
        }
        if (c3 <= 20) {
          for (int c5 = 0; c5 <= 2; c5 += 1)
            op_hcompute_conv_stencil_7(0, c0 - 2, c2 - 2, c3 - 18, c5);
          for (int c5 = 0; c5 <= 2; c5 += 1)
            op_hcompute_conv_stencil_9(0, c0 - 2, c2 - 2, c3 - 18, c5);
          for (int c5 = 0; c5 <= 2; c5 += 1)
            op_hcompute_conv_stencil_4(0, c0 - 2, c2 - 2, c3 - 18, c5);
        }
        if (c0 == 29)
          for (int c5 = 0; c5 <= 15; c5 += 1)
            load_to_conv_stencil_rb_at_conv_s1_x7(0, c2 - 2, c3, 0, 0, c5);
        if (c3 <= 20) {
          for (int c5 = 0; c5 <= 2; c5 += 1)
            op_hcompute_conv_stencil_3(0, c0 - 2, c2 - 2, c3 - 18, c5);
          for (int c5 = 0; c5 <= 2; c5 += 1)
            op_hcompute_conv_stencil_1(0, c0 - 2, c2 - 2, c3 - 18, c5);
          for (int c5 = 0; c5 <= 2; c5 += 1)
            op_hcompute_conv_stencil_5(0, c0 - 2, c2 - 2, c3 - 18, c5);
          for (int c5 = 0; c5 <= 2; c5 += 1)
            op_hcompute_conv_stencil_2(0, c0 - 2, c2 - 2, c3 - 18, c5);
          for (int c5 = 0; c5 <= 2; c5 += 1)
            op_hcompute_conv_stencil_8(0, c0 - 2, c2 - 2, c3 - 18, c5);
          for (int c5 = 0; c5 <= 2; c5 += 1)
            op_hcompute_conv_stencil_6(0, c0 - 2, c2 - 2, c3 - 18, c5);
        }
      }
      if (c0 == 29)
        for (int c5 = 0; c5 <= 15; c5 += 1)
          load_to_conv_stencil_rb_at_conv_s1_x7(0, c2 - 2, 27, 0, 0, c5);
    }
  } else {
    for (int c2 = 0; c2 <= 2; c2 += 1)
      for (int c3 = 11; c3 <= 26; c3 += 1)
        for (int c5 = 0; c5 <= 7; c5 += 1)
          op_hcompute_hw_kernel_stencil(0, c0, c2, c3 - 11, c5);
  }
  if (c0 == 0) {
    for (int c2 = 0; c2 <= 42; c2 += 1)
      for (int c3 = 0; c3 <= 27; c3 += 1) {
        if (c2 == 27)
          for (int c5 = 0; c5 <= 15; c5 += 1)
            load_to_conv_stencil_rb_at_conv_s1_x3(0, c3, 0, 0, c5);
        if (c2 >= 28) {
          for (int c5 = 0; c5 <= 27; c5 += 1)
            op_hcompute_hw_output_stencil(0, c2 - 27, c3, c5);
        } else {
          if (c2 == 27)
            for (int c5 = 0; c5 <= 26; c5 += 1)
              op_hcompute_hw_output_stencil(0, 0, c3, c5);
          for (int c5 = 27; c5 <= 42; c5 += 1) {
            op_hcompute_conv_stencil(0, c2, c3, c5 - 27);
            if (c2 == 27 && c5 == 27)
              op_hcompute_hw_output_stencil(0, 0, c3, 27);
          }
        }
      }
    for (int c2 = 0; c2 <= 29; c2 += 1)
      for (int c3 = 0; c3 <= 29; c3 += 1)
        for (int c4 = 0; c4 <= 7; c4 += 1)
          op_hcompute_hw_input_stencil(0, c2, c3, c4);
  }
}

  */
	for (int c0 = 0; c0 <= 29; c0 += 1) {
	  if (c0 >= 2) {
	    if (c0 == 2)
	      for (int c2 = 0; c2 <= 1; c2 += 1)
	        for (int c3 = 11; c3 <= 26; c3 += 1)
	          for (int c5 = 0; c5 <= 7; c5 += 1)
	            op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, 2, c2, c3 - 11, c5);
	    for (int c2 = 2; c2 <= 29; c2 += 1) {
	      if (c0 == 29) {
	        for (int c3 = 0; c3 <= 17; c3 += 1)
	          for (int c5 = 0; c5 <= 15; c5 += 1)
	            load_to_conv_stencil_rb_at_conv_s1_x7(conv_stencil_rb_at_conv_s1_x /* buf name */, 0, c2 - 2, c3, 0, 0, c5);
	      } else if (c0 == 2 && c2 == 2) {
	        for (int c3 = 11; c3 <= 17; c3 += 1)
	          for (int c5 = 0; c5 <= 7; c5 += 1)
	            op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, 2, 2, c3 - 11, c5);
	      }
	      for (int c3 = 18; c3 <= 26; c3 += 1) {
	        if (c0 == 2 && c2 == 2)
	          for (int c5 = 0; c5 <= 4; c5 += 1)
	            op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, 2, 2, c3 - 11, c5);
	        for (int c5 = 5; c5 <= 7; c5 += 1) {
	          if (c0 == 2 && c2 == 2)
	            op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, 2, 2, c3 - 11, c5);
	          if (c3 >= 24) {
	            op_hcompute_conv_stencil_16(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 24, c5 - 5);
	          } else {
	            if (c3 >= 20 && c3 <= 22)
	              op_hcompute_conv_stencil_12(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 20, c5 - 5);
	            if (c3 >= 21)
	              op_hcompute_conv_stencil_13(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 21, c5 - 5);
	            if (c3 >= 19 && c3 <= 21)
	              op_hcompute_conv_stencil_11(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 19, c5 - 5);
	            if (c3 <= 20)
	              op_hcompute_conv_stencil_10(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5 - 5);
	          }
	          if (c3 >= 23 && c3 <= 25)
	            op_hcompute_conv_stencil_15(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 23, c5 - 5);
	          if (c3 >= 22 && c3 <= 24)
	            op_hcompute_conv_stencil_14(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 22, c5 - 5);
	        }
	        if (c3 <= 20) {
	          for (int c5 = 0; c5 <= 2; c5 += 1)
	            op_hcompute_conv_stencil_7(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
	          for (int c5 = 0; c5 <= 2; c5 += 1)
	            op_hcompute_conv_stencil_9(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
	          for (int c5 = 0; c5 <= 2; c5 += 1)
	            op_hcompute_conv_stencil_4(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
	        }
	        if (c0 == 29)
	          for (int c5 = 0; c5 <= 15; c5 += 1)
	            load_to_conv_stencil_rb_at_conv_s1_x7(conv_stencil_rb_at_conv_s1_x /* buf name */, 0, c2 - 2, c3, 0, 0, c5);
	        if (c3 <= 20) {
	          for (int c5 = 0; c5 <= 2; c5 += 1)
	            op_hcompute_conv_stencil_3(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
	          for (int c5 = 0; c5 <= 2; c5 += 1)
	            op_hcompute_conv_stencil_1(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
	          for (int c5 = 0; c5 <= 2; c5 += 1)
	            op_hcompute_conv_stencil_5(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
	          for (int c5 = 0; c5 <= 2; c5 += 1)
	            op_hcompute_conv_stencil_2(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
	          for (int c5 = 0; c5 <= 2; c5 += 1)
	            op_hcompute_conv_stencil_8(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
	          for (int c5 = 0; c5 <= 2; c5 += 1)
	            op_hcompute_conv_stencil_6(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
	        }
	      }
	      if (c0 == 29)
	        for (int c5 = 0; c5 <= 15; c5 += 1)
	          load_to_conv_stencil_rb_at_conv_s1_x7(conv_stencil_rb_at_conv_s1_x /* buf name */, 0, c2 - 2, 27, 0, 0, c5);
	    }
	  } else {
	    for (int c2 = 0; c2 <= 2; c2 += 1)
	      for (int c3 = 11; c3 <= 26; c3 += 1)
	        for (int c5 = 0; c5 <= 7; c5 += 1)
	          op_hcompute_hw_kernel_stencil(kernel_copy_stencil /* buf name */, hw_kernel_stencil, 0, c0, c2, c3 - 11, c5);
	  }
	  if (c0 == 0) {
	    for (int c2 = 0; c2 <= 42; c2 += 1)
	      for (int c3 = 0; c3 <= 27; c3 += 1) {
	        if (c2 == 27)
	          for (int c5 = 0; c5 <= 15; c5 += 1)
	            load_to_conv_stencil_rb_at_conv_s1_x3(conv_stencil /* buf name */, conv_stencil_rb_at_conv_s1_x, 0, c3, 0, 0, c5);
	        if (c2 >= 28) {
	          for (int c5 = 0; c5 <= 27; c5 += 1)
	            op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, c2 - 27, c3, c5);
	        } else {
	          if (c2 == 27)
	            for (int c5 = 0; c5 <= 26; c5 += 1)
	              op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, 0, c3, c5);
	          for (int c5 = 27; c5 <= 42; c5 += 1) {
	            op_hcompute_conv_stencil(conv_stencil, 0, c2, c3, c5 - 27);
	            if (c2 == 27 && c5 == 27)
	              op_hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, 0, c3, 27);
	          }
	        }
	      }
	    for (int c2 = 0; c2 <= 29; c2 += 1)
	      for (int c3 = 0; c3 <= 29; c3 += 1)
	        for (int c4 = 0; c4 <= 7; c4 += 1)
	          op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c2, c3, c4);
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void resnet_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */kernel_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    resnet(input_copy_stencil, kernel_copy_stencil, hw_output_stencil);
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

void resnet_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_kernel_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
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

  resnet_wrapper(op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_kernel_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void resnet_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_kernel_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_kernel_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  resnet(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_kernel_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

