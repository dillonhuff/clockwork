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



inline void conv_stencil_op_hcompute_conv_stencil_0_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_0, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_0, conv_s0_x - 0, conv_s0_y - 0, conv_s0_w - 0);
}

inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_298_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_298 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> conv_stencil[0, conv_s1_y, conv_stencil_ld2] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15 }
  auto value_conv_stencil_op_hcompute_conv_stencil_0 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_y - 0, conv_stencil_ld2 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_0;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_204_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_204 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_0 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(hw_output_s0_x_xi - 0, hw_output_s0_y_yi - 0, hw_output_s0_w - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_0;
  return 0;
}

// # of bundles = 3
// load_to_conv_stencil_rb_at_conv_s1_x3_read
//	conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_298
inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_298

	hw_uint<16> result;
	hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_298_res = conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_298_select(conv_stencil, root, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_298_res);
	return result;
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_0
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_0_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_0_write(conv_stencil_op_hcompute_conv_stencil_0_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_204
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_204

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_204_res = conv_stencil_op_hcompute_hw_output_stencil_204_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_204_res);
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



inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297, 0 - 0, conv_s1_y - 0, conv_stencil_ld2 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_295_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_295, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_295, conv_s1_x - 0, conv_s1_y - 0, conv_stencil_ld6 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_167_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_167, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_167, conv_s1_x - 0, conv_s1_y - 0, 9 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_41_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_41, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_41, conv_s1_x - 0, conv_s1_y - 0, 10 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205, conv_s1_x - 0, conv_s1_y - 0, 11 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_113_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_113, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_113, conv_s1_x - 0, conv_s1_y - 0, 12 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_131_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_131, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_131, conv_s1_x - 0, conv_s1_y - 0, 13 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_95_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_95, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_95, conv_s1_x - 0, conv_s1_y - 0, 14 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_185_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_185, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_185, conv_s1_x - 0, conv_s1_y - 0, 15 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_59_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_59, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_59, conv_s1_x - 0, conv_s1_y - 0, 0 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_77_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_77, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_77, conv_s1_x - 0, conv_s1_y - 0, 1 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_23_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_23, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_23, conv_s1_x - 0, conv_s1_y - 0, 2 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_223_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_223, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_223, conv_s1_x - 0, conv_s1_y - 0, 3 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_241_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_241, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_241, conv_s1_x - 0, conv_s1_y - 0, 4 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_3_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_3, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_3, conv_s1_x - 0, conv_s1_y - 0, 5 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_259_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_259, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_259, conv_s1_x - 0, conv_s1_y - 0, 6 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_277_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_277, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_277, conv_s1_x - 0, conv_s1_y - 0, 7 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_149_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_149, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_149, conv_s1_x - 0, conv_s1_y - 0, 8 - 0);
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_296_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_296 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, conv_stencil_ld6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, conv_stencil_ld6 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 9 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_42_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_42 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 10] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 10 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_206_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_206 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 11] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 11 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_114_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_114 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 12] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 12 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_132_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_132 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 13] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 13 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_96_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_96 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 14] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 14 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_186_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_186 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 15] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 15 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_60_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_60 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 0 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_78_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_78 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 1 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_24_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_24 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 2 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_224_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_224 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 3 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_242_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_242 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 4 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_4_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_4 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 5 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_260_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_260 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 6 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_278_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_278 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 7 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 8 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

// # of bundles = 35
// load_to_conv_stencil_rb_at_conv_s1_x3_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297_res = load_to_conv_stencil_rb_at_conv_s1_x3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
}

// load_to_conv_stencil_rb_at_conv_s1_x7_read
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_296
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_296

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_296_res = conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_296_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_296_res);
	return result;
}

// load_to_conv_stencil_rb_at_conv_s1_x7_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_295
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_295_res = load_to_conv_stencil_rb_at_conv_s1_x7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_295_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_295_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
}

// op_hcompute_conv_stencil_10_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_168_res);
	return result;
}

// op_hcompute_conv_stencil_10_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_167
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_10_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_167_res = op_hcompute_conv_stencil_10_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_167_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_167_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_11_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_42
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_42

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_42_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_42_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_42_res);
	return result;
}

// op_hcompute_conv_stencil_11_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_41
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_11_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_41_res = op_hcompute_conv_stencil_11_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_41_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_41_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_12_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_206
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_206

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_206_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_206_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_206_res);
	return result;
}

// op_hcompute_conv_stencil_12_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_12_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_res = op_hcompute_conv_stencil_12_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_205_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_13_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_114
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_114

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_114_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_114_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_114_res);
	return result;
}

// op_hcompute_conv_stencil_13_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_113
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_13_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_113_res = op_hcompute_conv_stencil_13_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_113_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_113_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_14_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_132
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_132

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_132_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_132_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_132_res);
	return result;
}

// op_hcompute_conv_stencil_14_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_131
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_14_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_131_res = op_hcompute_conv_stencil_14_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_131_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_131_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_15_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_96
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_96

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_96_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_96_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_96_res);
	return result;
}

// op_hcompute_conv_stencil_15_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_95
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_15_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_95_res = op_hcompute_conv_stencil_15_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_95_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_95_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_16_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_186
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_186

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_186_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_186_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_186_res);
	return result;
}

// op_hcompute_conv_stencil_16_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_185
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_16_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_185_res = op_hcompute_conv_stencil_16_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_185_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_185_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_1_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_60
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_60

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_60_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_60_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_60_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_59
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_1_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_59_res = op_hcompute_conv_stencil_1_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_59_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_59_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_78
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_78

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_78_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_78_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_78_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_77
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_2_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_77_res = op_hcompute_conv_stencil_2_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_77_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_77_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_24
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_24

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_24_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_24_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_24_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_23
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_23_res = op_hcompute_conv_stencil_3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_23_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_23_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_224
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_224

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_224_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_224_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_224_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_223
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_4_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_223_res = op_hcompute_conv_stencil_4_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_223_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_223_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_242
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_242

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_242_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_242_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_242_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_241
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_5_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_241_res = op_hcompute_conv_stencil_5_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_241_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_241_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_4
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_4

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_4_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_4_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_4_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_3
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_6_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_3_res = op_hcompute_conv_stencil_6_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_3_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_3_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_260
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_260

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_260_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_260_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_260_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_259
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_259_res = op_hcompute_conv_stencil_7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_259_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_259_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_278
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_278

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_278_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_278_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_278_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_277
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_8_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_277_res = op_hcompute_conv_stencil_8_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_277_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_277_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_150_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_149
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_9_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_149_res = op_hcompute_conv_stencil_9_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_149_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_149_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
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



inline void hw_input_stencil_op_hcompute_hw_input_stencil_21_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_21, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.write(hw_input_stencil_op_hcompute_hw_input_stencil_21, hw_input_s0_z - 0, hw_input_s0_x - 0, hw_input_s0_y - 0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_169_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_169 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_170_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_170 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_171_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_171 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_172_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_172 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_173_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_173 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_174_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_174 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_175_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_175 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_176_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_176 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_43_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_43 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_44_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_44 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_45_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_45 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_46_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_46 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_47_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_47 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_48_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_48 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_49_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_49 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_50_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_50 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_207_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_207 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_208_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_208 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_209_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_209 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_210_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_210 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_211_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_211 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_212_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_212 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_213_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_213 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_214_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_214 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_115_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_115 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_116_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_116 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_117_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_117 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_118_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_118 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_119_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_119 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_120_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_120 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_121_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_121 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_122_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_122 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_133_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_133 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_134_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_134 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_135_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_135 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_136_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_136 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_137_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_137 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_138_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_138 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_139_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_139 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_140_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_140 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_100_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_100 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_101_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_101 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_102_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_102 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_103_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_103 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_104_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_104 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_97_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_97 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_98_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_98 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_99_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_99 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_187_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_187 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_188_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_188 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_189_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_189 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_190_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_190 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_191_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_191 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_192_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_192 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_193_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_193 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_194_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_194 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_61_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_61 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_62_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_62 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_63_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_63 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_64_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_64 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_65_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_65 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_66_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_66 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_67_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_67 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_68_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_68 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_79_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_79 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_80_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_80 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_81_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_81 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_82_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_82 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_83_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_83 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_84_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_84 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_85_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_85 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_86_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_86 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_25_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_25 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_26_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_26 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_27 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_28_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_28 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_29_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_29 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_30_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_30 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_31_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_31 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_32_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_32 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_225_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_225 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_226_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_226 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_227_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_227 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_228_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_228 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_229_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_229 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_230_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_230 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_231_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_231 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_232_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_232 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_243_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_243 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_244_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_244 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_245_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_245 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_246_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_246 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_247_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_247 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_248_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_248 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_249_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_249 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_250_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_250 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_10_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_10 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_11 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_12_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_12 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_5_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_5 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_6_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_6 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_7 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_8 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_9 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_261_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_261 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_262_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_262 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_263_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_263 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_264_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_264 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_265_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_265 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_266_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_266 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_267_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_267 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_268_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_268 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_279_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_279 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_280_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_280 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_281_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_281 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_282_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_282 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_283_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_283 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_284_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_284 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_285_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_285 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_286_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_286 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_151_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_151 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_152_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_152 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_153_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_153 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_154_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_154 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_155_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_155 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_156_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_156 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_157_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_157 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_158_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_158 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_21 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_21;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_input_stencil_op_hcompute_conv_stencil_10_169
//	hw_input_stencil_op_hcompute_conv_stencil_10_170
//	hw_input_stencil_op_hcompute_conv_stencil_10_171
//	hw_input_stencil_op_hcompute_conv_stencil_10_172
//	hw_input_stencil_op_hcompute_conv_stencil_10_173
//	hw_input_stencil_op_hcompute_conv_stencil_10_174
//	hw_input_stencil_op_hcompute_conv_stencil_10_175
//	hw_input_stencil_op_hcompute_conv_stencil_10_176
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_10_169
    // hw_input_stencil_op_hcompute_conv_stencil_10_170
    // hw_input_stencil_op_hcompute_conv_stencil_10_171
    // hw_input_stencil_op_hcompute_conv_stencil_10_172
    // hw_input_stencil_op_hcompute_conv_stencil_10_173
    // hw_input_stencil_op_hcompute_conv_stencil_10_174
    // hw_input_stencil_op_hcompute_conv_stencil_10_175
    // hw_input_stencil_op_hcompute_conv_stencil_10_176

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_169_res = hw_input_stencil_op_hcompute_conv_stencil_10_169_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_169_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_170_res = hw_input_stencil_op_hcompute_conv_stencil_10_170_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_170_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_171_res = hw_input_stencil_op_hcompute_conv_stencil_10_171_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_171_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_172_res = hw_input_stencil_op_hcompute_conv_stencil_10_172_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_172_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_173_res = hw_input_stencil_op_hcompute_conv_stencil_10_173_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_173_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_174_res = hw_input_stencil_op_hcompute_conv_stencil_10_174_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_174_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_175_res = hw_input_stencil_op_hcompute_conv_stencil_10_175_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_175_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_176_res = hw_input_stencil_op_hcompute_conv_stencil_10_176_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_176_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_input_stencil_op_hcompute_conv_stencil_11_43
//	hw_input_stencil_op_hcompute_conv_stencil_11_44
//	hw_input_stencil_op_hcompute_conv_stencil_11_45
//	hw_input_stencil_op_hcompute_conv_stencil_11_46
//	hw_input_stencil_op_hcompute_conv_stencil_11_47
//	hw_input_stencil_op_hcompute_conv_stencil_11_48
//	hw_input_stencil_op_hcompute_conv_stencil_11_49
//	hw_input_stencil_op_hcompute_conv_stencil_11_50
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_11_43
    // hw_input_stencil_op_hcompute_conv_stencil_11_44
    // hw_input_stencil_op_hcompute_conv_stencil_11_45
    // hw_input_stencil_op_hcompute_conv_stencil_11_46
    // hw_input_stencil_op_hcompute_conv_stencil_11_47
    // hw_input_stencil_op_hcompute_conv_stencil_11_48
    // hw_input_stencil_op_hcompute_conv_stencil_11_49
    // hw_input_stencil_op_hcompute_conv_stencil_11_50

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_43_res = hw_input_stencil_op_hcompute_conv_stencil_11_43_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_43_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_44_res = hw_input_stencil_op_hcompute_conv_stencil_11_44_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_44_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_45_res = hw_input_stencil_op_hcompute_conv_stencil_11_45_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_45_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_46_res = hw_input_stencil_op_hcompute_conv_stencil_11_46_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_46_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_47_res = hw_input_stencil_op_hcompute_conv_stencil_11_47_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_47_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_48_res = hw_input_stencil_op_hcompute_conv_stencil_11_48_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_48_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_49_res = hw_input_stencil_op_hcompute_conv_stencil_11_49_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_49_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_50_res = hw_input_stencil_op_hcompute_conv_stencil_11_50_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_50_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_input_stencil_op_hcompute_conv_stencil_12_207
//	hw_input_stencil_op_hcompute_conv_stencil_12_208
//	hw_input_stencil_op_hcompute_conv_stencil_12_209
//	hw_input_stencil_op_hcompute_conv_stencil_12_210
//	hw_input_stencil_op_hcompute_conv_stencil_12_211
//	hw_input_stencil_op_hcompute_conv_stencil_12_212
//	hw_input_stencil_op_hcompute_conv_stencil_12_213
//	hw_input_stencil_op_hcompute_conv_stencil_12_214
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_12_207
    // hw_input_stencil_op_hcompute_conv_stencil_12_208
    // hw_input_stencil_op_hcompute_conv_stencil_12_209
    // hw_input_stencil_op_hcompute_conv_stencil_12_210
    // hw_input_stencil_op_hcompute_conv_stencil_12_211
    // hw_input_stencil_op_hcompute_conv_stencil_12_212
    // hw_input_stencil_op_hcompute_conv_stencil_12_213
    // hw_input_stencil_op_hcompute_conv_stencil_12_214

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_207_res = hw_input_stencil_op_hcompute_conv_stencil_12_207_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_207_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_208_res = hw_input_stencil_op_hcompute_conv_stencil_12_208_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_208_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_209_res = hw_input_stencil_op_hcompute_conv_stencil_12_209_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_209_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_210_res = hw_input_stencil_op_hcompute_conv_stencil_12_210_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_210_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_211_res = hw_input_stencil_op_hcompute_conv_stencil_12_211_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_211_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_212_res = hw_input_stencil_op_hcompute_conv_stencil_12_212_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_212_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_213_res = hw_input_stencil_op_hcompute_conv_stencil_12_213_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_213_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_214_res = hw_input_stencil_op_hcompute_conv_stencil_12_214_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_214_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_input_stencil_op_hcompute_conv_stencil_13_115
//	hw_input_stencil_op_hcompute_conv_stencil_13_116
//	hw_input_stencil_op_hcompute_conv_stencil_13_117
//	hw_input_stencil_op_hcompute_conv_stencil_13_118
//	hw_input_stencil_op_hcompute_conv_stencil_13_119
//	hw_input_stencil_op_hcompute_conv_stencil_13_120
//	hw_input_stencil_op_hcompute_conv_stencil_13_121
//	hw_input_stencil_op_hcompute_conv_stencil_13_122
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_13_115
    // hw_input_stencil_op_hcompute_conv_stencil_13_116
    // hw_input_stencil_op_hcompute_conv_stencil_13_117
    // hw_input_stencil_op_hcompute_conv_stencil_13_118
    // hw_input_stencil_op_hcompute_conv_stencil_13_119
    // hw_input_stencil_op_hcompute_conv_stencil_13_120
    // hw_input_stencil_op_hcompute_conv_stencil_13_121
    // hw_input_stencil_op_hcompute_conv_stencil_13_122

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_115_res = hw_input_stencil_op_hcompute_conv_stencil_13_115_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_115_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_116_res = hw_input_stencil_op_hcompute_conv_stencil_13_116_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_116_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_117_res = hw_input_stencil_op_hcompute_conv_stencil_13_117_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_117_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_118_res = hw_input_stencil_op_hcompute_conv_stencil_13_118_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_118_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_119_res = hw_input_stencil_op_hcompute_conv_stencil_13_119_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_119_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_120_res = hw_input_stencil_op_hcompute_conv_stencil_13_120_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_120_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_121_res = hw_input_stencil_op_hcompute_conv_stencil_13_121_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_121_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_122_res = hw_input_stencil_op_hcompute_conv_stencil_13_122_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_122_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_input_stencil_op_hcompute_conv_stencil_14_133
//	hw_input_stencil_op_hcompute_conv_stencil_14_134
//	hw_input_stencil_op_hcompute_conv_stencil_14_135
//	hw_input_stencil_op_hcompute_conv_stencil_14_136
//	hw_input_stencil_op_hcompute_conv_stencil_14_137
//	hw_input_stencil_op_hcompute_conv_stencil_14_138
//	hw_input_stencil_op_hcompute_conv_stencil_14_139
//	hw_input_stencil_op_hcompute_conv_stencil_14_140
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_14_133
    // hw_input_stencil_op_hcompute_conv_stencil_14_134
    // hw_input_stencil_op_hcompute_conv_stencil_14_135
    // hw_input_stencil_op_hcompute_conv_stencil_14_136
    // hw_input_stencil_op_hcompute_conv_stencil_14_137
    // hw_input_stencil_op_hcompute_conv_stencil_14_138
    // hw_input_stencil_op_hcompute_conv_stencil_14_139
    // hw_input_stencil_op_hcompute_conv_stencil_14_140

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_133_res = hw_input_stencil_op_hcompute_conv_stencil_14_133_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_133_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_134_res = hw_input_stencil_op_hcompute_conv_stencil_14_134_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_134_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_135_res = hw_input_stencil_op_hcompute_conv_stencil_14_135_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_135_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_136_res = hw_input_stencil_op_hcompute_conv_stencil_14_136_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_136_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_137_res = hw_input_stencil_op_hcompute_conv_stencil_14_137_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_137_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_138_res = hw_input_stencil_op_hcompute_conv_stencil_14_138_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_138_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_139_res = hw_input_stencil_op_hcompute_conv_stencil_14_139_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_139_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_140_res = hw_input_stencil_op_hcompute_conv_stencil_14_140_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_140_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_input_stencil_op_hcompute_conv_stencil_15_97
//	hw_input_stencil_op_hcompute_conv_stencil_15_98
//	hw_input_stencil_op_hcompute_conv_stencil_15_99
//	hw_input_stencil_op_hcompute_conv_stencil_15_100
//	hw_input_stencil_op_hcompute_conv_stencil_15_101
//	hw_input_stencil_op_hcompute_conv_stencil_15_102
//	hw_input_stencil_op_hcompute_conv_stencil_15_103
//	hw_input_stencil_op_hcompute_conv_stencil_15_104
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_15_97
    // hw_input_stencil_op_hcompute_conv_stencil_15_98
    // hw_input_stencil_op_hcompute_conv_stencil_15_99
    // hw_input_stencil_op_hcompute_conv_stencil_15_100
    // hw_input_stencil_op_hcompute_conv_stencil_15_101
    // hw_input_stencil_op_hcompute_conv_stencil_15_102
    // hw_input_stencil_op_hcompute_conv_stencil_15_103
    // hw_input_stencil_op_hcompute_conv_stencil_15_104

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_97_res = hw_input_stencil_op_hcompute_conv_stencil_15_97_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_97_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_98_res = hw_input_stencil_op_hcompute_conv_stencil_15_98_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_98_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_99_res = hw_input_stencil_op_hcompute_conv_stencil_15_99_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_99_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_100_res = hw_input_stencil_op_hcompute_conv_stencil_15_100_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_100_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_101_res = hw_input_stencil_op_hcompute_conv_stencil_15_101_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_101_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_102_res = hw_input_stencil_op_hcompute_conv_stencil_15_102_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_102_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_103_res = hw_input_stencil_op_hcompute_conv_stencil_15_103_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_103_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_104_res = hw_input_stencil_op_hcompute_conv_stencil_15_104_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_104_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_input_stencil_op_hcompute_conv_stencil_16_187
//	hw_input_stencil_op_hcompute_conv_stencil_16_188
//	hw_input_stencil_op_hcompute_conv_stencil_16_189
//	hw_input_stencil_op_hcompute_conv_stencil_16_190
//	hw_input_stencil_op_hcompute_conv_stencil_16_191
//	hw_input_stencil_op_hcompute_conv_stencil_16_192
//	hw_input_stencil_op_hcompute_conv_stencil_16_193
//	hw_input_stencil_op_hcompute_conv_stencil_16_194
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_16_187
    // hw_input_stencil_op_hcompute_conv_stencil_16_188
    // hw_input_stencil_op_hcompute_conv_stencil_16_189
    // hw_input_stencil_op_hcompute_conv_stencil_16_190
    // hw_input_stencil_op_hcompute_conv_stencil_16_191
    // hw_input_stencil_op_hcompute_conv_stencil_16_192
    // hw_input_stencil_op_hcompute_conv_stencil_16_193
    // hw_input_stencil_op_hcompute_conv_stencil_16_194

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_187_res = hw_input_stencil_op_hcompute_conv_stencil_16_187_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_187_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_188_res = hw_input_stencil_op_hcompute_conv_stencil_16_188_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_188_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_189_res = hw_input_stencil_op_hcompute_conv_stencil_16_189_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_189_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_190_res = hw_input_stencil_op_hcompute_conv_stencil_16_190_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_190_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_191_res = hw_input_stencil_op_hcompute_conv_stencil_16_191_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_191_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_192_res = hw_input_stencil_op_hcompute_conv_stencil_16_192_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_192_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_193_res = hw_input_stencil_op_hcompute_conv_stencil_16_193_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_193_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_194_res = hw_input_stencil_op_hcompute_conv_stencil_16_194_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_194_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_61
//	hw_input_stencil_op_hcompute_conv_stencil_1_62
//	hw_input_stencil_op_hcompute_conv_stencil_1_63
//	hw_input_stencil_op_hcompute_conv_stencil_1_64
//	hw_input_stencil_op_hcompute_conv_stencil_1_65
//	hw_input_stencil_op_hcompute_conv_stencil_1_66
//	hw_input_stencil_op_hcompute_conv_stencil_1_67
//	hw_input_stencil_op_hcompute_conv_stencil_1_68
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_1_61
    // hw_input_stencil_op_hcompute_conv_stencil_1_62
    // hw_input_stencil_op_hcompute_conv_stencil_1_63
    // hw_input_stencil_op_hcompute_conv_stencil_1_64
    // hw_input_stencil_op_hcompute_conv_stencil_1_65
    // hw_input_stencil_op_hcompute_conv_stencil_1_66
    // hw_input_stencil_op_hcompute_conv_stencil_1_67
    // hw_input_stencil_op_hcompute_conv_stencil_1_68

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_61_res = hw_input_stencil_op_hcompute_conv_stencil_1_61_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_61_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_62_res = hw_input_stencil_op_hcompute_conv_stencil_1_62_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_62_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_63_res = hw_input_stencil_op_hcompute_conv_stencil_1_63_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_63_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_64_res = hw_input_stencil_op_hcompute_conv_stencil_1_64_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_64_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_65_res = hw_input_stencil_op_hcompute_conv_stencil_1_65_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_65_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_66_res = hw_input_stencil_op_hcompute_conv_stencil_1_66_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_66_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_67_res = hw_input_stencil_op_hcompute_conv_stencil_1_67_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_67_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_68_res = hw_input_stencil_op_hcompute_conv_stencil_1_68_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_68_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_input_stencil_op_hcompute_conv_stencil_2_79
//	hw_input_stencil_op_hcompute_conv_stencil_2_80
//	hw_input_stencil_op_hcompute_conv_stencil_2_81
//	hw_input_stencil_op_hcompute_conv_stencil_2_82
//	hw_input_stencil_op_hcompute_conv_stencil_2_83
//	hw_input_stencil_op_hcompute_conv_stencil_2_84
//	hw_input_stencil_op_hcompute_conv_stencil_2_85
//	hw_input_stencil_op_hcompute_conv_stencil_2_86
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_2_79
    // hw_input_stencil_op_hcompute_conv_stencil_2_80
    // hw_input_stencil_op_hcompute_conv_stencil_2_81
    // hw_input_stencil_op_hcompute_conv_stencil_2_82
    // hw_input_stencil_op_hcompute_conv_stencil_2_83
    // hw_input_stencil_op_hcompute_conv_stencil_2_84
    // hw_input_stencil_op_hcompute_conv_stencil_2_85
    // hw_input_stencil_op_hcompute_conv_stencil_2_86

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_79_res = hw_input_stencil_op_hcompute_conv_stencil_2_79_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_79_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_80_res = hw_input_stencil_op_hcompute_conv_stencil_2_80_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_80_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_81_res = hw_input_stencil_op_hcompute_conv_stencil_2_81_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_81_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_82_res = hw_input_stencil_op_hcompute_conv_stencil_2_82_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_82_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_83_res = hw_input_stencil_op_hcompute_conv_stencil_2_83_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_83_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_84_res = hw_input_stencil_op_hcompute_conv_stencil_2_84_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_84_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_85_res = hw_input_stencil_op_hcompute_conv_stencil_2_85_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_85_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_86_res = hw_input_stencil_op_hcompute_conv_stencil_2_86_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_86_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_input_stencil_op_hcompute_conv_stencil_3_25
//	hw_input_stencil_op_hcompute_conv_stencil_3_26
//	hw_input_stencil_op_hcompute_conv_stencil_3_27
//	hw_input_stencil_op_hcompute_conv_stencil_3_28
//	hw_input_stencil_op_hcompute_conv_stencil_3_29
//	hw_input_stencil_op_hcompute_conv_stencil_3_30
//	hw_input_stencil_op_hcompute_conv_stencil_3_31
//	hw_input_stencil_op_hcompute_conv_stencil_3_32
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_3_25
    // hw_input_stencil_op_hcompute_conv_stencil_3_26
    // hw_input_stencil_op_hcompute_conv_stencil_3_27
    // hw_input_stencil_op_hcompute_conv_stencil_3_28
    // hw_input_stencil_op_hcompute_conv_stencil_3_29
    // hw_input_stencil_op_hcompute_conv_stencil_3_30
    // hw_input_stencil_op_hcompute_conv_stencil_3_31
    // hw_input_stencil_op_hcompute_conv_stencil_3_32

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_25_res = hw_input_stencil_op_hcompute_conv_stencil_3_25_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_25_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_26_res = hw_input_stencil_op_hcompute_conv_stencil_3_26_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_26_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_27_res = hw_input_stencil_op_hcompute_conv_stencil_3_27_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_27_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_28_res = hw_input_stencil_op_hcompute_conv_stencil_3_28_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_28_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_29_res = hw_input_stencil_op_hcompute_conv_stencil_3_29_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_29_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_30_res = hw_input_stencil_op_hcompute_conv_stencil_3_30_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_30_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_31_res = hw_input_stencil_op_hcompute_conv_stencil_3_31_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_31_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_32_res = hw_input_stencil_op_hcompute_conv_stencil_3_32_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_32_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_stencil_op_hcompute_conv_stencil_4_225
//	hw_input_stencil_op_hcompute_conv_stencil_4_226
//	hw_input_stencil_op_hcompute_conv_stencil_4_227
//	hw_input_stencil_op_hcompute_conv_stencil_4_228
//	hw_input_stencil_op_hcompute_conv_stencil_4_229
//	hw_input_stencil_op_hcompute_conv_stencil_4_230
//	hw_input_stencil_op_hcompute_conv_stencil_4_231
//	hw_input_stencil_op_hcompute_conv_stencil_4_232
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_4_225
    // hw_input_stencil_op_hcompute_conv_stencil_4_226
    // hw_input_stencil_op_hcompute_conv_stencil_4_227
    // hw_input_stencil_op_hcompute_conv_stencil_4_228
    // hw_input_stencil_op_hcompute_conv_stencil_4_229
    // hw_input_stencil_op_hcompute_conv_stencil_4_230
    // hw_input_stencil_op_hcompute_conv_stencil_4_231
    // hw_input_stencil_op_hcompute_conv_stencil_4_232

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_225_res = hw_input_stencil_op_hcompute_conv_stencil_4_225_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_225_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_226_res = hw_input_stencil_op_hcompute_conv_stencil_4_226_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_226_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_227_res = hw_input_stencil_op_hcompute_conv_stencil_4_227_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_227_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_228_res = hw_input_stencil_op_hcompute_conv_stencil_4_228_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_228_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_229_res = hw_input_stencil_op_hcompute_conv_stencil_4_229_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_229_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_230_res = hw_input_stencil_op_hcompute_conv_stencil_4_230_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_230_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_231_res = hw_input_stencil_op_hcompute_conv_stencil_4_231_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_231_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_232_res = hw_input_stencil_op_hcompute_conv_stencil_4_232_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_232_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_stencil_op_hcompute_conv_stencil_5_243
//	hw_input_stencil_op_hcompute_conv_stencil_5_244
//	hw_input_stencil_op_hcompute_conv_stencil_5_245
//	hw_input_stencil_op_hcompute_conv_stencil_5_246
//	hw_input_stencil_op_hcompute_conv_stencil_5_247
//	hw_input_stencil_op_hcompute_conv_stencil_5_248
//	hw_input_stencil_op_hcompute_conv_stencil_5_249
//	hw_input_stencil_op_hcompute_conv_stencil_5_250
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_5_243
    // hw_input_stencil_op_hcompute_conv_stencil_5_244
    // hw_input_stencil_op_hcompute_conv_stencil_5_245
    // hw_input_stencil_op_hcompute_conv_stencil_5_246
    // hw_input_stencil_op_hcompute_conv_stencil_5_247
    // hw_input_stencil_op_hcompute_conv_stencil_5_248
    // hw_input_stencil_op_hcompute_conv_stencil_5_249
    // hw_input_stencil_op_hcompute_conv_stencil_5_250

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_243_res = hw_input_stencil_op_hcompute_conv_stencil_5_243_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_243_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_244_res = hw_input_stencil_op_hcompute_conv_stencil_5_244_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_244_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_245_res = hw_input_stencil_op_hcompute_conv_stencil_5_245_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_245_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_246_res = hw_input_stencil_op_hcompute_conv_stencil_5_246_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_246_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_247_res = hw_input_stencil_op_hcompute_conv_stencil_5_247_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_247_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_248_res = hw_input_stencil_op_hcompute_conv_stencil_5_248_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_248_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_249_res = hw_input_stencil_op_hcompute_conv_stencil_5_249_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_249_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_250_res = hw_input_stencil_op_hcompute_conv_stencil_5_250_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_250_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_input_stencil_op_hcompute_conv_stencil_6_5
//	hw_input_stencil_op_hcompute_conv_stencil_6_6
//	hw_input_stencil_op_hcompute_conv_stencil_6_7
//	hw_input_stencil_op_hcompute_conv_stencil_6_8
//	hw_input_stencil_op_hcompute_conv_stencil_6_9
//	hw_input_stencil_op_hcompute_conv_stencil_6_10
//	hw_input_stencil_op_hcompute_conv_stencil_6_11
//	hw_input_stencil_op_hcompute_conv_stencil_6_12
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_6_5
    // hw_input_stencil_op_hcompute_conv_stencil_6_6
    // hw_input_stencil_op_hcompute_conv_stencil_6_7
    // hw_input_stencil_op_hcompute_conv_stencil_6_8
    // hw_input_stencil_op_hcompute_conv_stencil_6_9
    // hw_input_stencil_op_hcompute_conv_stencil_6_10
    // hw_input_stencil_op_hcompute_conv_stencil_6_11
    // hw_input_stencil_op_hcompute_conv_stencil_6_12

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_5_res = hw_input_stencil_op_hcompute_conv_stencil_6_5_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_5_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_6_res = hw_input_stencil_op_hcompute_conv_stencil_6_6_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_6_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_7_res = hw_input_stencil_op_hcompute_conv_stencil_6_7_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_7_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_8_res = hw_input_stencil_op_hcompute_conv_stencil_6_8_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_8_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_9_res = hw_input_stencil_op_hcompute_conv_stencil_6_9_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_9_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_10_res = hw_input_stencil_op_hcompute_conv_stencil_6_10_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_10_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_11_res = hw_input_stencil_op_hcompute_conv_stencil_6_11_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_11_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_12_res = hw_input_stencil_op_hcompute_conv_stencil_6_12_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_12_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_input_stencil_op_hcompute_conv_stencil_7_261
//	hw_input_stencil_op_hcompute_conv_stencil_7_262
//	hw_input_stencil_op_hcompute_conv_stencil_7_263
//	hw_input_stencil_op_hcompute_conv_stencil_7_264
//	hw_input_stencil_op_hcompute_conv_stencil_7_265
//	hw_input_stencil_op_hcompute_conv_stencil_7_266
//	hw_input_stencil_op_hcompute_conv_stencil_7_267
//	hw_input_stencil_op_hcompute_conv_stencil_7_268
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_7_261
    // hw_input_stencil_op_hcompute_conv_stencil_7_262
    // hw_input_stencil_op_hcompute_conv_stencil_7_263
    // hw_input_stencil_op_hcompute_conv_stencil_7_264
    // hw_input_stencil_op_hcompute_conv_stencil_7_265
    // hw_input_stencil_op_hcompute_conv_stencil_7_266
    // hw_input_stencil_op_hcompute_conv_stencil_7_267
    // hw_input_stencil_op_hcompute_conv_stencil_7_268

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_261_res = hw_input_stencil_op_hcompute_conv_stencil_7_261_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_261_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_262_res = hw_input_stencil_op_hcompute_conv_stencil_7_262_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_262_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_263_res = hw_input_stencil_op_hcompute_conv_stencil_7_263_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_263_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_264_res = hw_input_stencil_op_hcompute_conv_stencil_7_264_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_264_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_265_res = hw_input_stencil_op_hcompute_conv_stencil_7_265_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_265_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_266_res = hw_input_stencil_op_hcompute_conv_stencil_7_266_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_266_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_267_res = hw_input_stencil_op_hcompute_conv_stencil_7_267_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_267_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_268_res = hw_input_stencil_op_hcompute_conv_stencil_7_268_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_268_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_stencil_op_hcompute_conv_stencil_8_279
//	hw_input_stencil_op_hcompute_conv_stencil_8_280
//	hw_input_stencil_op_hcompute_conv_stencil_8_281
//	hw_input_stencil_op_hcompute_conv_stencil_8_282
//	hw_input_stencil_op_hcompute_conv_stencil_8_283
//	hw_input_stencil_op_hcompute_conv_stencil_8_284
//	hw_input_stencil_op_hcompute_conv_stencil_8_285
//	hw_input_stencil_op_hcompute_conv_stencil_8_286
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_8_279
    // hw_input_stencil_op_hcompute_conv_stencil_8_280
    // hw_input_stencil_op_hcompute_conv_stencil_8_281
    // hw_input_stencil_op_hcompute_conv_stencil_8_282
    // hw_input_stencil_op_hcompute_conv_stencil_8_283
    // hw_input_stencil_op_hcompute_conv_stencil_8_284
    // hw_input_stencil_op_hcompute_conv_stencil_8_285
    // hw_input_stencil_op_hcompute_conv_stencil_8_286

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_279_res = hw_input_stencil_op_hcompute_conv_stencil_8_279_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_279_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_280_res = hw_input_stencil_op_hcompute_conv_stencil_8_280_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_280_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_281_res = hw_input_stencil_op_hcompute_conv_stencil_8_281_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_281_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_282_res = hw_input_stencil_op_hcompute_conv_stencil_8_282_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_282_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_283_res = hw_input_stencil_op_hcompute_conv_stencil_8_283_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_283_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_284_res = hw_input_stencil_op_hcompute_conv_stencil_8_284_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_284_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_285_res = hw_input_stencil_op_hcompute_conv_stencil_8_285_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_285_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_286_res = hw_input_stencil_op_hcompute_conv_stencil_8_286_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_286_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_stencil_op_hcompute_conv_stencil_9_151
//	hw_input_stencil_op_hcompute_conv_stencil_9_152
//	hw_input_stencil_op_hcompute_conv_stencil_9_153
//	hw_input_stencil_op_hcompute_conv_stencil_9_154
//	hw_input_stencil_op_hcompute_conv_stencil_9_155
//	hw_input_stencil_op_hcompute_conv_stencil_9_156
//	hw_input_stencil_op_hcompute_conv_stencil_9_157
//	hw_input_stencil_op_hcompute_conv_stencil_9_158
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_9_151
    // hw_input_stencil_op_hcompute_conv_stencil_9_152
    // hw_input_stencil_op_hcompute_conv_stencil_9_153
    // hw_input_stencil_op_hcompute_conv_stencil_9_154
    // hw_input_stencil_op_hcompute_conv_stencil_9_155
    // hw_input_stencil_op_hcompute_conv_stencil_9_156
    // hw_input_stencil_op_hcompute_conv_stencil_9_157
    // hw_input_stencil_op_hcompute_conv_stencil_9_158

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_151_res = hw_input_stencil_op_hcompute_conv_stencil_9_151_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_151_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_152_res = hw_input_stencil_op_hcompute_conv_stencil_9_152_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_152_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_153_res = hw_input_stencil_op_hcompute_conv_stencil_9_153_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_153_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_154_res = hw_input_stencil_op_hcompute_conv_stencil_9_154_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_154_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_155_res = hw_input_stencil_op_hcompute_conv_stencil_9_155_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_155_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_156_res = hw_input_stencil_op_hcompute_conv_stencil_9_156_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_156_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_157_res = hw_input_stencil_op_hcompute_conv_stencil_9_157_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_157_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_158_res = hw_input_stencil_op_hcompute_conv_stencil_9_158_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_158_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_21
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_21_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_21_write(hw_input_stencil_op_hcompute_hw_input_stencil_21_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, dynamic_address);
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



inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1_write(hw_uint<16>& hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
  hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1, hw_kernel_s0_z - 0, hw_kernel_s0_w - 0, hw_kernel_s0_x - 0, hw_kernel_s0_y - 0);
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_177_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_177 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_178_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_178 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_179_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_179 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_180_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_180 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_181_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_181 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_182_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_182 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_183_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_183 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_184_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_184 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_51_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_51 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_52_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_52 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_53_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_53 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_54_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_54 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_55_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_55 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_56_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_56 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_57_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_57 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_58_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_58 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_215_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_215 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_216_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_216 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_217_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_217 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_218_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_218 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_219_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_219 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_220_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_220 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_221_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_221 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_222_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_222 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_123_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_123 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_124_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_124 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_125_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_125 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_126_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_126 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_127_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_127 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_128_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_128 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_129_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_129 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_130_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_130 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_141_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_141 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_142_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_142 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_143_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_143 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_144_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_144 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_145_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_145 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_146_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_146 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_147_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_147 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_148_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_148 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_105_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_105 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_106_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_106 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_107_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_107 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_108_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_108 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_109_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_109 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_110_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_110 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_111_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_111 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_112_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_112 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_195_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_195 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_196_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_196 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_197_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_197 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_198_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_198 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_199_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_199 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_200_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_200 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_201_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_201 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_202_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_202 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_69_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_69 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_70_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_70 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_71_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_71 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_72_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_72 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_73_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_73 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_74_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_74 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_75_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_75 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_76_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_76 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_87_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_87 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_88_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_88 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_89_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_89 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_90_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_90 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_91_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_91 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_92_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_92 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_93_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_93 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_94_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_94 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_33_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_33 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_34_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_34 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_35_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_35 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_36_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_36 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_37_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_37 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_38_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_38 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_39_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_39 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_40_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_40 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_233_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_233 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_234_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_234 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_235_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_235 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_236_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_236 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_237_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_237 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_238_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_238 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_239_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_239 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_240_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_240 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_251_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_251 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_252_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_252 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_253_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_253 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_254_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_254 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_255_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_255 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_256_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_256 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_257_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_257 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_258_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_258 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_13_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_13 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_14_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_14 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_15_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_15 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_16_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_16 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_17_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_17 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_18_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_18 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_19_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_19 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_20_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_20 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_269_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_269 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_270_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_270 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_271_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_271 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_272_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_272 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_273_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_273 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_274_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_274 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_275_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_275 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_276_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_276 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_287_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_287 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_288_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_288 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_289_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_289 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_290_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_290 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_291_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_291 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_292_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_292 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_293_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_293 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_294_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_294 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_159_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_159 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_160_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_160 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_161_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_161 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_162_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_162 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_163_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_163 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_164_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_164 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_165_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_165 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_166_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_166 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_177
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_178
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_179
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_180
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_181
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_182
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_183
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_184
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_177
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_178
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_179
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_180
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_181
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_182
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_183
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_184

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_177_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_177_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_177_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_178_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_178_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_178_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_179_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_179_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_179_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_180_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_180_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_180_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_181_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_181_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_181_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_182_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_182_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_182_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_183_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_183_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_183_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_184_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_184_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_184_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_51
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_52
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_53
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_54
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_55
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_56
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_57
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_58
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_51
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_52
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_53
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_54
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_55
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_56
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_57
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_58

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_51_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_51_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_51_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_52_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_52_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_52_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_53_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_53_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_53_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_54_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_54_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_54_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_55_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_55_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_55_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_56_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_56_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_56_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_57_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_57_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_57_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_58_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_58_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_58_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_215
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_216
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_217
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_218
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_219
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_220
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_221
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_222
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_215
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_216
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_217
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_218
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_219
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_220
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_221
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_222

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_215_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_215_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_215_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_216_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_216_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_216_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_217_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_217_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_217_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_218_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_218_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_218_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_219_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_219_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_219_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_220_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_220_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_220_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_221_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_221_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_221_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_222_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_222_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_222_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_123
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_124
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_125
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_126
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_127
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_128
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_129
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_130
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_123
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_124
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_125
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_126
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_127
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_128
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_129
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_130

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_123_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_123_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_123_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_124_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_124_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_124_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_125_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_125_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_125_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_126_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_126_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_126_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_127_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_127_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_127_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_128_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_128_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_128_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_129_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_129_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_129_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_130_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_130_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_130_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_141
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_142
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_143
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_144
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_145
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_146
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_147
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_148
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_141
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_142
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_143
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_144
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_145
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_146
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_147
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_148

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_141_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_141_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_141_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_142_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_142_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_142_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_143_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_143_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_143_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_144_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_144_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_144_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_145_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_145_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_145_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_146_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_146_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_146_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_147_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_147_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_147_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_148_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_148_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_148_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_105
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_106
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_107
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_108
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_109
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_110
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_111
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_112
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_105
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_106
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_107
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_108
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_109
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_110
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_111
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_112

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_105_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_105_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_105_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_106_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_106_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_106_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_107_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_107_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_107_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_108_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_108_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_108_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_109_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_109_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_109_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_110_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_110_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_110_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_111_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_111_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_111_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_112_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_112_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_112_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_195
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_196
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_197
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_198
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_199
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_200
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_201
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_202
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_195
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_196
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_197
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_198
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_199
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_200
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_201
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_202

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_195_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_195_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_195_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_196_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_196_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_196_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_197_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_197_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_197_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_198_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_198_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_198_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_199_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_199_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_199_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_200_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_200_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_200_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_201_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_201_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_201_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_202_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_202_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_202_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_69
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_70
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_71
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_72
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_73
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_74
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_75
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_76
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_69
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_70
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_71
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_72
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_73
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_74
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_75
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_76

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_69_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_69_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_69_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_70_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_70_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_70_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_71_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_71_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_71_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_72_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_72_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_72_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_73_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_73_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_73_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_74_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_74_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_74_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_75_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_75_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_75_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_76_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_76_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_76_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_87
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_88
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_89
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_90
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_91
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_92
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_93
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_94
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_87
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_88
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_89
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_90
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_91
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_92
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_93
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_94

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_87_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_87_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_87_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_88_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_88_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_88_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_89_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_89_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_89_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_90_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_90_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_90_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_91_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_91_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_91_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_92_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_92_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_92_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_93_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_93_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_93_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_94_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_94_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_94_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_33
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_34
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_35
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_36
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_37
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_38
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_39
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_40
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_33
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_34
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_35
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_36
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_37
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_38
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_39
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_40

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_33_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_33_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_33_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_34_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_34_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_34_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_35_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_35_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_35_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_36_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_36_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_36_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_37_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_37_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_37_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_38_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_38_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_38_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_39_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_39_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_39_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_40_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_40_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_40_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_233
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_234
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_235
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_236
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_237
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_238
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_239
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_240
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_233
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_234
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_235
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_236
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_237
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_238
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_239
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_240

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_233_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_233_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_233_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_234_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_234_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_234_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_235_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_235_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_235_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_236_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_236_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_236_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_237_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_237_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_237_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_238_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_238_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_238_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_239_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_239_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_239_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_240_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_240_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_240_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_251
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_252
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_253
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_254
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_255
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_256
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_257
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_258
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_251
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_252
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_253
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_254
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_255
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_256
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_257
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_258

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_251_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_251_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_251_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_252_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_252_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_252_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_253_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_253_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_253_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_254_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_254_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_254_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_255_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_255_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_255_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_256_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_256_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_256_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_257_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_257_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_257_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_258_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_258_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_258_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_13
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_14
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_15
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_16
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_17
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_18
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_19
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_20
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_13
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_14
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_15
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_16
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_17
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_18
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_19
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_20

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_13_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_13_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_13_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_14_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_14_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_14_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_15_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_15_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_15_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_16_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_16_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_16_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_17_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_17_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_17_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_18_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_18_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_18_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_19_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_19_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_19_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_20_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_20_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_20_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_269
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_270
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_271
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_272
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_273
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_274
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_275
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_276
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_269
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_270
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_271
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_272
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_273
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_274
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_275
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_276

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_269_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_269_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_269_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_270_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_270_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_270_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_271_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_271_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_271_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_272_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_272_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_272_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_273_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_273_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_273_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_274_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_274_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_274_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_275_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_275_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_275_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_276_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_276_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_276_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_287
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_288
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_289
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_290
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_291
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_292
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_293
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_294
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_287
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_288
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_289
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_290
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_291
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_292
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_293
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_294

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_287_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_287_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_287_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_288_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_288_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_288_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_289_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_289_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_289_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_290_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_290_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_290_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_291_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_291_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_291_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_292_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_292_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_292_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_293_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_293_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_293_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_294_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_294_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_294_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_159
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_160
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_161
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_162
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_163
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_164
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_165
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_166
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_159
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_160
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_161
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_162
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_163
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_164
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_165
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_166

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_159_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_159_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_159_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_160_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_160_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_160_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_161_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_161_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_161_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_162_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_162_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_162_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_163_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_163_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_163_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_164_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_164_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_164_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_165_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_165_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_165_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_166_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_166_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_166_res);
	return result;
}

// op_hcompute_hw_kernel_stencil_write
//	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1
inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_stencil_write, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1_res = op_hcompute_hw_kernel_stencil_write.extract<0, 15>();
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1_write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_1_res, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, dynamic_address);
}



// Operation logic
inline void op_hcompute_conv_stencil(conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil
	conv_stencil_op_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, 0);

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

// schedule: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 5, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 2, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 3, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 6, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 10, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> [0, 1, 27, conv_s1_y, 0, conv_stencil_ld2, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15; op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 20 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 7, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 8, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 21 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 19 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 1, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 2, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7; op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 23 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 9, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 1, 27 + hw_output_s0_w, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 22 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [hw_kernel_s0_y, 0, hw_kernel_s0_x, 11 + hw_kernel_s0_w, 0, hw_kernel_s0_z, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7; op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 1, conv_s0_y, conv_s0_x, 1, 27 + conv_s0_w, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15; load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> [29, 0, 2 + conv_s1_y, conv_s1_x, 4, conv_stencil_ld6, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15 }
//   { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 5, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_1(((i6 == 0) && (-5 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 2, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_9(((i6 == 0) && (-2 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 3, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_4(((i6 == 0) && (-3 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 6, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_3(((i6 == 0) && (-6 + i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-18 + i3 >= 0) && (20 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0)))
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
            op_hcompute_conv_stencil_1(0, c0 - 2, c2 - 2, c3 - 18, c5);
          for (int c5 = 0; c5 <= 2; c5 += 1)
            op_hcompute_conv_stencil_3(0, c0 - 2, c2 - 2, c3 - 18, c5);
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
	            op_hcompute_conv_stencil_1(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
	          for (int c5 = 0; c5 <= 2; c5 += 1)
	            op_hcompute_conv_stencil_3(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5);
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

