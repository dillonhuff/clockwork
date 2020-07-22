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



inline void conv_stencil_op_hcompute_conv_stencil_236_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_236, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_236, conv_s0_x - 0, conv_s0_y - 0, conv_s0_w - 0);
}

inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_298_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_298 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> conv_stencil[0, conv_s1_y, conv_stencil_ld2] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15 }
  auto value_conv_stencil_op_hcompute_conv_stencil_236 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_y - 0, conv_stencil_ld2 - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_236;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_37_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_37 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_236 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(hw_output_s0_x_xi - 0, hw_output_s0_y_yi - 0, hw_output_s0_w - 0);
  return value_conv_stencil_op_hcompute_conv_stencil_236;
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
//	conv_stencil_op_hcompute_conv_stencil_236
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_236_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_236_write(conv_stencil_op_hcompute_conv_stencil_236_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_37
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_37

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_37_res = conv_stencil_op_hcompute_hw_output_stencil_37_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_37_res);
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

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_200_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_200, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_200, conv_s1_x - 0, conv_s1_y - 0, 9 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_218_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_218, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_218, conv_s1_x - 0, conv_s1_y - 0, 10 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_277_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_277, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_277, conv_s1_x - 0, conv_s1_y - 0, 11 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_0_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_0, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_0, conv_s1_x - 0, conv_s1_y - 0, 12 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_38_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_38, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_38, conv_s1_x - 0, conv_s1_y - 0, 13 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_56_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_56, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_56, conv_s1_x - 0, conv_s1_y - 0, 14 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_18_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_18, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_18, conv_s1_x - 0, conv_s1_y - 0, 15 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_237_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_237, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_237, conv_s1_x - 0, conv_s1_y - 0, 0 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_255_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_255, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_255, conv_s1_x - 0, conv_s1_y - 0, 1 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_74_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_74, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_74, conv_s1_x - 0, conv_s1_y - 0, 2 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_92_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_92, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_92, conv_s1_x - 0, conv_s1_y - 0, 3 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_110_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_110, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_110, conv_s1_x - 0, conv_s1_y - 0, 4 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_128_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_128, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_128, conv_s1_x - 0, conv_s1_y - 0, 5 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_146_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_146, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_146, conv_s1_x - 0, conv_s1_y - 0, 6 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_164_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_164, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_164, conv_s1_x - 0, conv_s1_y - 0, 7 - 0);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_182_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_182, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_182, conv_s1_x - 0, conv_s1_y - 0, 8 - 0);
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_296_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_296 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, conv_stencil_ld6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, conv_stencil_ld6 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_201_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_201 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 9 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_219_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_219 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 10] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 10 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_278_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_278 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 11] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 11 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_1_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_1 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 12] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 12 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_39_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_39 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 13] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 13 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_57_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_57 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 14] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 14 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_19_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_19 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 15] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 15 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_238_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_238 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 0 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_256_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_256 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 1 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_75_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_75 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 2 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_93_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_93 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 3 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_111_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_111 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 4 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_129_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_129 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 5 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_147_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_147 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 6 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_165_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_165 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(conv_s1_x - 0, conv_s1_y - 0, 7 - 0);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_297;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_183_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_183 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
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
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_201
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_201

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_201_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_201_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_201_res);
	return result;
}

// op_hcompute_conv_stencil_10_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_200
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_10_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_200_res = op_hcompute_conv_stencil_10_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_200_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_200_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_11_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_219
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_219

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_219_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_219_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_219_res);
	return result;
}

// op_hcompute_conv_stencil_11_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_218
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_11_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_218_res = op_hcompute_conv_stencil_11_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_218_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_218_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_12_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_278
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_278

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_278_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_278_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_278_res);
	return result;
}

// op_hcompute_conv_stencil_12_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_277
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_12_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_277_res = op_hcompute_conv_stencil_12_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_277_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_277_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_13_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_1
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_1

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_1_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_1_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_1_res);
	return result;
}

// op_hcompute_conv_stencil_13_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_0
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_13_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_0_res = op_hcompute_conv_stencil_13_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_0_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_0_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_14_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_39
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_39

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_39_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_39_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_39_res);
	return result;
}

// op_hcompute_conv_stencil_14_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_38
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_14_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_38_res = op_hcompute_conv_stencil_14_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_38_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_38_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_15_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_57
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_57

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_57_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_57_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_57_res);
	return result;
}

// op_hcompute_conv_stencil_15_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_56
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_15_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_56_res = op_hcompute_conv_stencil_15_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_56_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_56_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_16_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_19
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_19

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_19_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_19_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_19_res);
	return result;
}

// op_hcompute_conv_stencil_16_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_18
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_16_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_18_res = op_hcompute_conv_stencil_16_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_18_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_18_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_1_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_238
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_238

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_238_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_238_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_238_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_237
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_1_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_237_res = op_hcompute_conv_stencil_1_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_237_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_237_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_256
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_256

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_256_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_256_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_256_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_255
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_2_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_255_res = op_hcompute_conv_stencil_2_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_255_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_255_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_75
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_75

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_75_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_75_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_75_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_74
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_74_res = op_hcompute_conv_stencil_3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_74_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_74_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_93
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_93

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_93_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_93_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_93_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_92
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_4_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_92_res = op_hcompute_conv_stencil_4_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_92_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_92_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_111
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_111

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_111_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_111_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_111_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_110
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_5_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_110_res = op_hcompute_conv_stencil_5_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_110_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_110_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_129
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_129

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_129_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_129_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_129_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_128
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_6_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_128_res = op_hcompute_conv_stencil_6_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_128_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_128_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_147
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_147

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_147_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_147_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_147_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_146
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_146_res = op_hcompute_conv_stencil_7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_146_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_146_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_165
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_165

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_165_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_165_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_165_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_164
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_8_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_164_res = op_hcompute_conv_stencil_8_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_164_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_164_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_183
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_183

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_183_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_183_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_183_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_182
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_9_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_182_res = op_hcompute_conv_stencil_9_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_182_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_182_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
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



inline void hw_input_stencil_op_hcompute_hw_input_stencil_273_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_273, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.write(hw_input_stencil_op_hcompute_hw_input_stencil_273, hw_input_s0_z - 0, hw_input_s0_x - 0, hw_input_s0_y - 0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_202_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_202 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_203_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_203 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_204_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_204 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_205_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_205 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_206_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_206 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_207_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_207 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_208_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_208 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_209_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_209 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_220_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_220 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_221_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_221 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_222_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_222 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_223_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_223 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_224_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_224 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_225_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_225 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_226_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_226 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_227_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_227 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_279_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_279 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_280_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_280 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_281_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_281 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_282_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_282 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_283_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_283 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_284_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_284 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_285_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_285 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_286_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_286 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_2_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_2 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_3_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_3 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_4_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_4 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_5_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_5 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_6_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_6 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_7 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_8 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_9 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_40_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_40 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_41_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_41 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_42_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_42 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_43_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_43 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_44_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_44 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_45_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_45 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_46_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_46 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_47_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_47 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_58_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_58 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_59_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_59 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_60_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_60 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_61_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_61 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_62_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_62 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_63_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_63 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_64_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_64 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_65_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_65 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_20_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_20 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_21_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_21 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_22_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_22 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_23_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_23 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_24_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_24 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_25_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_25 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_26_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_26 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_27 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_239_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_239 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_240_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_240 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_241_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_241 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_242_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_242 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_243_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_243 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_244_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_244 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_245_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_245 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_246_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_246 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_257_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_257 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_258_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_258 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_259_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_259 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_260_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_260 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_261_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_261 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_262_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_262 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_263_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_263 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_264_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_264 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_76_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_76 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_77_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_77 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_78_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_78 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_79_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_79 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_80_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_80 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_81_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_81 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_82_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_82 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_83_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_83 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_100_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_100 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_101_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_101 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_94_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_94 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_95_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_95 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_96_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_96 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_97_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_97 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_98_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_98 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_99_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_99 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_112_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_112 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_113_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_113 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_114_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_114 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_115_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_115 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_116_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_116 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_117_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_117 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_118_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_118 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_119_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_119 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_130_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_130 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_131_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_131 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_132_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_132 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_133_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_133 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_134_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_134 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_135_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_135 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_136_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_136 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_137_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_137 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_148_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_148 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_149_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_149 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_150_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_150 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_151_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_151 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_152_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_152 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_153_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_153 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_154_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_154 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_155_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_155 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_166_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_166 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_167_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_167 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_168_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_168 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_169_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_169 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_170_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_170 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_171_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_171 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_172_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_172 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_173_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_173 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_184_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_184 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(0 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_185_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_185 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(1 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_186_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_186 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(2 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_187_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_187 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(3 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_188_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_188 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(4 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_189_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_189 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(5 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_190_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_190 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(6 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_191_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_191 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_273 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(7 - 0, conv_s1_x + conv_s1_r_x - 0, conv_s1_y + conv_s1_r_y - 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_273;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_input_stencil_op_hcompute_conv_stencil_10_202
//	hw_input_stencil_op_hcompute_conv_stencil_10_203
//	hw_input_stencil_op_hcompute_conv_stencil_10_204
//	hw_input_stencil_op_hcompute_conv_stencil_10_205
//	hw_input_stencil_op_hcompute_conv_stencil_10_206
//	hw_input_stencil_op_hcompute_conv_stencil_10_207
//	hw_input_stencil_op_hcompute_conv_stencil_10_208
//	hw_input_stencil_op_hcompute_conv_stencil_10_209
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_10_202
    // hw_input_stencil_op_hcompute_conv_stencil_10_203
    // hw_input_stencil_op_hcompute_conv_stencil_10_204
    // hw_input_stencil_op_hcompute_conv_stencil_10_205
    // hw_input_stencil_op_hcompute_conv_stencil_10_206
    // hw_input_stencil_op_hcompute_conv_stencil_10_207
    // hw_input_stencil_op_hcompute_conv_stencil_10_208
    // hw_input_stencil_op_hcompute_conv_stencil_10_209

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_202_res = hw_input_stencil_op_hcompute_conv_stencil_10_202_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_202_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_203_res = hw_input_stencil_op_hcompute_conv_stencil_10_203_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_203_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_204_res = hw_input_stencil_op_hcompute_conv_stencil_10_204_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_204_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_205_res = hw_input_stencil_op_hcompute_conv_stencil_10_205_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_205_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_206_res = hw_input_stencil_op_hcompute_conv_stencil_10_206_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_206_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_207_res = hw_input_stencil_op_hcompute_conv_stencil_10_207_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_207_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_208_res = hw_input_stencil_op_hcompute_conv_stencil_10_208_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_208_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_209_res = hw_input_stencil_op_hcompute_conv_stencil_10_209_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_209_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_input_stencil_op_hcompute_conv_stencil_11_220
//	hw_input_stencil_op_hcompute_conv_stencil_11_221
//	hw_input_stencil_op_hcompute_conv_stencil_11_222
//	hw_input_stencil_op_hcompute_conv_stencil_11_223
//	hw_input_stencil_op_hcompute_conv_stencil_11_224
//	hw_input_stencil_op_hcompute_conv_stencil_11_225
//	hw_input_stencil_op_hcompute_conv_stencil_11_226
//	hw_input_stencil_op_hcompute_conv_stencil_11_227
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_11_220
    // hw_input_stencil_op_hcompute_conv_stencil_11_221
    // hw_input_stencil_op_hcompute_conv_stencil_11_222
    // hw_input_stencil_op_hcompute_conv_stencil_11_223
    // hw_input_stencil_op_hcompute_conv_stencil_11_224
    // hw_input_stencil_op_hcompute_conv_stencil_11_225
    // hw_input_stencil_op_hcompute_conv_stencil_11_226
    // hw_input_stencil_op_hcompute_conv_stencil_11_227

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_220_res = hw_input_stencil_op_hcompute_conv_stencil_11_220_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_220_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_221_res = hw_input_stencil_op_hcompute_conv_stencil_11_221_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_221_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_222_res = hw_input_stencil_op_hcompute_conv_stencil_11_222_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_222_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_223_res = hw_input_stencil_op_hcompute_conv_stencil_11_223_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_223_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_224_res = hw_input_stencil_op_hcompute_conv_stencil_11_224_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_224_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_225_res = hw_input_stencil_op_hcompute_conv_stencil_11_225_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_225_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_226_res = hw_input_stencil_op_hcompute_conv_stencil_11_226_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_226_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_227_res = hw_input_stencil_op_hcompute_conv_stencil_11_227_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_227_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_input_stencil_op_hcompute_conv_stencil_12_279
//	hw_input_stencil_op_hcompute_conv_stencil_12_280
//	hw_input_stencil_op_hcompute_conv_stencil_12_281
//	hw_input_stencil_op_hcompute_conv_stencil_12_282
//	hw_input_stencil_op_hcompute_conv_stencil_12_283
//	hw_input_stencil_op_hcompute_conv_stencil_12_284
//	hw_input_stencil_op_hcompute_conv_stencil_12_285
//	hw_input_stencil_op_hcompute_conv_stencil_12_286
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_12_279
    // hw_input_stencil_op_hcompute_conv_stencil_12_280
    // hw_input_stencil_op_hcompute_conv_stencil_12_281
    // hw_input_stencil_op_hcompute_conv_stencil_12_282
    // hw_input_stencil_op_hcompute_conv_stencil_12_283
    // hw_input_stencil_op_hcompute_conv_stencil_12_284
    // hw_input_stencil_op_hcompute_conv_stencil_12_285
    // hw_input_stencil_op_hcompute_conv_stencil_12_286

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_279_res = hw_input_stencil_op_hcompute_conv_stencil_12_279_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_279_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_280_res = hw_input_stencil_op_hcompute_conv_stencil_12_280_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_280_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_281_res = hw_input_stencil_op_hcompute_conv_stencil_12_281_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_281_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_282_res = hw_input_stencil_op_hcompute_conv_stencil_12_282_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_282_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_283_res = hw_input_stencil_op_hcompute_conv_stencil_12_283_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_283_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_284_res = hw_input_stencil_op_hcompute_conv_stencil_12_284_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_284_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_285_res = hw_input_stencil_op_hcompute_conv_stencil_12_285_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_285_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_286_res = hw_input_stencil_op_hcompute_conv_stencil_12_286_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_286_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_input_stencil_op_hcompute_conv_stencil_13_2
//	hw_input_stencil_op_hcompute_conv_stencil_13_3
//	hw_input_stencil_op_hcompute_conv_stencil_13_4
//	hw_input_stencil_op_hcompute_conv_stencil_13_5
//	hw_input_stencil_op_hcompute_conv_stencil_13_6
//	hw_input_stencil_op_hcompute_conv_stencil_13_7
//	hw_input_stencil_op_hcompute_conv_stencil_13_8
//	hw_input_stencil_op_hcompute_conv_stencil_13_9
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_13_2
    // hw_input_stencil_op_hcompute_conv_stencil_13_3
    // hw_input_stencil_op_hcompute_conv_stencil_13_4
    // hw_input_stencil_op_hcompute_conv_stencil_13_5
    // hw_input_stencil_op_hcompute_conv_stencil_13_6
    // hw_input_stencil_op_hcompute_conv_stencil_13_7
    // hw_input_stencil_op_hcompute_conv_stencil_13_8
    // hw_input_stencil_op_hcompute_conv_stencil_13_9

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_2_res = hw_input_stencil_op_hcompute_conv_stencil_13_2_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_2_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_3_res = hw_input_stencil_op_hcompute_conv_stencil_13_3_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_3_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_4_res = hw_input_stencil_op_hcompute_conv_stencil_13_4_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_4_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_5_res = hw_input_stencil_op_hcompute_conv_stencil_13_5_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_5_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_6_res = hw_input_stencil_op_hcompute_conv_stencil_13_6_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_6_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_7_res = hw_input_stencil_op_hcompute_conv_stencil_13_7_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_7_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_8_res = hw_input_stencil_op_hcompute_conv_stencil_13_8_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_8_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_9_res = hw_input_stencil_op_hcompute_conv_stencil_13_9_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_9_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_input_stencil_op_hcompute_conv_stencil_14_40
//	hw_input_stencil_op_hcompute_conv_stencil_14_41
//	hw_input_stencil_op_hcompute_conv_stencil_14_42
//	hw_input_stencil_op_hcompute_conv_stencil_14_43
//	hw_input_stencil_op_hcompute_conv_stencil_14_44
//	hw_input_stencil_op_hcompute_conv_stencil_14_45
//	hw_input_stencil_op_hcompute_conv_stencil_14_46
//	hw_input_stencil_op_hcompute_conv_stencil_14_47
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_14_40
    // hw_input_stencil_op_hcompute_conv_stencil_14_41
    // hw_input_stencil_op_hcompute_conv_stencil_14_42
    // hw_input_stencil_op_hcompute_conv_stencil_14_43
    // hw_input_stencil_op_hcompute_conv_stencil_14_44
    // hw_input_stencil_op_hcompute_conv_stencil_14_45
    // hw_input_stencil_op_hcompute_conv_stencil_14_46
    // hw_input_stencil_op_hcompute_conv_stencil_14_47

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_40_res = hw_input_stencil_op_hcompute_conv_stencil_14_40_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_40_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_41_res = hw_input_stencil_op_hcompute_conv_stencil_14_41_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_41_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_42_res = hw_input_stencil_op_hcompute_conv_stencil_14_42_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_42_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_43_res = hw_input_stencil_op_hcompute_conv_stencil_14_43_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_43_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_44_res = hw_input_stencil_op_hcompute_conv_stencil_14_44_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_44_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_45_res = hw_input_stencil_op_hcompute_conv_stencil_14_45_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_45_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_46_res = hw_input_stencil_op_hcompute_conv_stencil_14_46_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_46_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_47_res = hw_input_stencil_op_hcompute_conv_stencil_14_47_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_47_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_input_stencil_op_hcompute_conv_stencil_15_58
//	hw_input_stencil_op_hcompute_conv_stencil_15_59
//	hw_input_stencil_op_hcompute_conv_stencil_15_60
//	hw_input_stencil_op_hcompute_conv_stencil_15_61
//	hw_input_stencil_op_hcompute_conv_stencil_15_62
//	hw_input_stencil_op_hcompute_conv_stencil_15_63
//	hw_input_stencil_op_hcompute_conv_stencil_15_64
//	hw_input_stencil_op_hcompute_conv_stencil_15_65
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_15_58
    // hw_input_stencil_op_hcompute_conv_stencil_15_59
    // hw_input_stencil_op_hcompute_conv_stencil_15_60
    // hw_input_stencil_op_hcompute_conv_stencil_15_61
    // hw_input_stencil_op_hcompute_conv_stencil_15_62
    // hw_input_stencil_op_hcompute_conv_stencil_15_63
    // hw_input_stencil_op_hcompute_conv_stencil_15_64
    // hw_input_stencil_op_hcompute_conv_stencil_15_65

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_58_res = hw_input_stencil_op_hcompute_conv_stencil_15_58_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_58_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_59_res = hw_input_stencil_op_hcompute_conv_stencil_15_59_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_59_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_60_res = hw_input_stencil_op_hcompute_conv_stencil_15_60_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_60_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_61_res = hw_input_stencil_op_hcompute_conv_stencil_15_61_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_61_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_62_res = hw_input_stencil_op_hcompute_conv_stencil_15_62_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_62_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_63_res = hw_input_stencil_op_hcompute_conv_stencil_15_63_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_63_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_64_res = hw_input_stencil_op_hcompute_conv_stencil_15_64_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_64_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_65_res = hw_input_stencil_op_hcompute_conv_stencil_15_65_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_65_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_input_stencil_op_hcompute_conv_stencil_16_20
//	hw_input_stencil_op_hcompute_conv_stencil_16_21
//	hw_input_stencil_op_hcompute_conv_stencil_16_22
//	hw_input_stencil_op_hcompute_conv_stencil_16_23
//	hw_input_stencil_op_hcompute_conv_stencil_16_24
//	hw_input_stencil_op_hcompute_conv_stencil_16_25
//	hw_input_stencil_op_hcompute_conv_stencil_16_26
//	hw_input_stencil_op_hcompute_conv_stencil_16_27
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_16_20
    // hw_input_stencil_op_hcompute_conv_stencil_16_21
    // hw_input_stencil_op_hcompute_conv_stencil_16_22
    // hw_input_stencil_op_hcompute_conv_stencil_16_23
    // hw_input_stencil_op_hcompute_conv_stencil_16_24
    // hw_input_stencil_op_hcompute_conv_stencil_16_25
    // hw_input_stencil_op_hcompute_conv_stencil_16_26
    // hw_input_stencil_op_hcompute_conv_stencil_16_27

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_20_res = hw_input_stencil_op_hcompute_conv_stencil_16_20_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_20_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_21_res = hw_input_stencil_op_hcompute_conv_stencil_16_21_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_21_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_22_res = hw_input_stencil_op_hcompute_conv_stencil_16_22_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_22_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_23_res = hw_input_stencil_op_hcompute_conv_stencil_16_23_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_23_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_24_res = hw_input_stencil_op_hcompute_conv_stencil_16_24_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_24_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_25_res = hw_input_stencil_op_hcompute_conv_stencil_16_25_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_25_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_26_res = hw_input_stencil_op_hcompute_conv_stencil_16_26_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_26_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_27_res = hw_input_stencil_op_hcompute_conv_stencil_16_27_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_27_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_239
//	hw_input_stencil_op_hcompute_conv_stencil_1_240
//	hw_input_stencil_op_hcompute_conv_stencil_1_241
//	hw_input_stencil_op_hcompute_conv_stencil_1_242
//	hw_input_stencil_op_hcompute_conv_stencil_1_243
//	hw_input_stencil_op_hcompute_conv_stencil_1_244
//	hw_input_stencil_op_hcompute_conv_stencil_1_245
//	hw_input_stencil_op_hcompute_conv_stencil_1_246
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_1_239
    // hw_input_stencil_op_hcompute_conv_stencil_1_240
    // hw_input_stencil_op_hcompute_conv_stencil_1_241
    // hw_input_stencil_op_hcompute_conv_stencil_1_242
    // hw_input_stencil_op_hcompute_conv_stencil_1_243
    // hw_input_stencil_op_hcompute_conv_stencil_1_244
    // hw_input_stencil_op_hcompute_conv_stencil_1_245
    // hw_input_stencil_op_hcompute_conv_stencil_1_246

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_239_res = hw_input_stencil_op_hcompute_conv_stencil_1_239_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_239_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_240_res = hw_input_stencil_op_hcompute_conv_stencil_1_240_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_240_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_241_res = hw_input_stencil_op_hcompute_conv_stencil_1_241_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_241_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_242_res = hw_input_stencil_op_hcompute_conv_stencil_1_242_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_242_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_243_res = hw_input_stencil_op_hcompute_conv_stencil_1_243_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_243_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_244_res = hw_input_stencil_op_hcompute_conv_stencil_1_244_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_244_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_245_res = hw_input_stencil_op_hcompute_conv_stencil_1_245_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_245_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_246_res = hw_input_stencil_op_hcompute_conv_stencil_1_246_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_246_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_input_stencil_op_hcompute_conv_stencil_2_257
//	hw_input_stencil_op_hcompute_conv_stencil_2_258
//	hw_input_stencil_op_hcompute_conv_stencil_2_259
//	hw_input_stencil_op_hcompute_conv_stencil_2_260
//	hw_input_stencil_op_hcompute_conv_stencil_2_261
//	hw_input_stencil_op_hcompute_conv_stencil_2_262
//	hw_input_stencil_op_hcompute_conv_stencil_2_263
//	hw_input_stencil_op_hcompute_conv_stencil_2_264
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_2_257
    // hw_input_stencil_op_hcompute_conv_stencil_2_258
    // hw_input_stencil_op_hcompute_conv_stencil_2_259
    // hw_input_stencil_op_hcompute_conv_stencil_2_260
    // hw_input_stencil_op_hcompute_conv_stencil_2_261
    // hw_input_stencil_op_hcompute_conv_stencil_2_262
    // hw_input_stencil_op_hcompute_conv_stencil_2_263
    // hw_input_stencil_op_hcompute_conv_stencil_2_264

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_257_res = hw_input_stencil_op_hcompute_conv_stencil_2_257_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_257_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_258_res = hw_input_stencil_op_hcompute_conv_stencil_2_258_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_258_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_259_res = hw_input_stencil_op_hcompute_conv_stencil_2_259_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_259_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_260_res = hw_input_stencil_op_hcompute_conv_stencil_2_260_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_260_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_261_res = hw_input_stencil_op_hcompute_conv_stencil_2_261_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_261_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_262_res = hw_input_stencil_op_hcompute_conv_stencil_2_262_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_262_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_263_res = hw_input_stencil_op_hcompute_conv_stencil_2_263_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_263_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_264_res = hw_input_stencil_op_hcompute_conv_stencil_2_264_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_264_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_input_stencil_op_hcompute_conv_stencil_3_76
//	hw_input_stencil_op_hcompute_conv_stencil_3_77
//	hw_input_stencil_op_hcompute_conv_stencil_3_78
//	hw_input_stencil_op_hcompute_conv_stencil_3_79
//	hw_input_stencil_op_hcompute_conv_stencil_3_80
//	hw_input_stencil_op_hcompute_conv_stencil_3_81
//	hw_input_stencil_op_hcompute_conv_stencil_3_82
//	hw_input_stencil_op_hcompute_conv_stencil_3_83
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_3_76
    // hw_input_stencil_op_hcompute_conv_stencil_3_77
    // hw_input_stencil_op_hcompute_conv_stencil_3_78
    // hw_input_stencil_op_hcompute_conv_stencil_3_79
    // hw_input_stencil_op_hcompute_conv_stencil_3_80
    // hw_input_stencil_op_hcompute_conv_stencil_3_81
    // hw_input_stencil_op_hcompute_conv_stencil_3_82
    // hw_input_stencil_op_hcompute_conv_stencil_3_83

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_76_res = hw_input_stencil_op_hcompute_conv_stencil_3_76_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_76_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_77_res = hw_input_stencil_op_hcompute_conv_stencil_3_77_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_77_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_78_res = hw_input_stencil_op_hcompute_conv_stencil_3_78_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_78_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_79_res = hw_input_stencil_op_hcompute_conv_stencil_3_79_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_79_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_80_res = hw_input_stencil_op_hcompute_conv_stencil_3_80_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_80_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_81_res = hw_input_stencil_op_hcompute_conv_stencil_3_81_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_81_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_82_res = hw_input_stencil_op_hcompute_conv_stencil_3_82_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_82_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_83_res = hw_input_stencil_op_hcompute_conv_stencil_3_83_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_83_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_stencil_op_hcompute_conv_stencil_4_94
//	hw_input_stencil_op_hcompute_conv_stencil_4_95
//	hw_input_stencil_op_hcompute_conv_stencil_4_96
//	hw_input_stencil_op_hcompute_conv_stencil_4_97
//	hw_input_stencil_op_hcompute_conv_stencil_4_98
//	hw_input_stencil_op_hcompute_conv_stencil_4_99
//	hw_input_stencil_op_hcompute_conv_stencil_4_100
//	hw_input_stencil_op_hcompute_conv_stencil_4_101
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_4_94
    // hw_input_stencil_op_hcompute_conv_stencil_4_95
    // hw_input_stencil_op_hcompute_conv_stencil_4_96
    // hw_input_stencil_op_hcompute_conv_stencil_4_97
    // hw_input_stencil_op_hcompute_conv_stencil_4_98
    // hw_input_stencil_op_hcompute_conv_stencil_4_99
    // hw_input_stencil_op_hcompute_conv_stencil_4_100
    // hw_input_stencil_op_hcompute_conv_stencil_4_101

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_94_res = hw_input_stencil_op_hcompute_conv_stencil_4_94_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_94_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_95_res = hw_input_stencil_op_hcompute_conv_stencil_4_95_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_95_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_96_res = hw_input_stencil_op_hcompute_conv_stencil_4_96_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_96_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_97_res = hw_input_stencil_op_hcompute_conv_stencil_4_97_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_97_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_98_res = hw_input_stencil_op_hcompute_conv_stencil_4_98_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_98_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_99_res = hw_input_stencil_op_hcompute_conv_stencil_4_99_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_99_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_100_res = hw_input_stencil_op_hcompute_conv_stencil_4_100_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_100_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_101_res = hw_input_stencil_op_hcompute_conv_stencil_4_101_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_101_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_stencil_op_hcompute_conv_stencil_5_112
//	hw_input_stencil_op_hcompute_conv_stencil_5_113
//	hw_input_stencil_op_hcompute_conv_stencil_5_114
//	hw_input_stencil_op_hcompute_conv_stencil_5_115
//	hw_input_stencil_op_hcompute_conv_stencil_5_116
//	hw_input_stencil_op_hcompute_conv_stencil_5_117
//	hw_input_stencil_op_hcompute_conv_stencil_5_118
//	hw_input_stencil_op_hcompute_conv_stencil_5_119
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_5_112
    // hw_input_stencil_op_hcompute_conv_stencil_5_113
    // hw_input_stencil_op_hcompute_conv_stencil_5_114
    // hw_input_stencil_op_hcompute_conv_stencil_5_115
    // hw_input_stencil_op_hcompute_conv_stencil_5_116
    // hw_input_stencil_op_hcompute_conv_stencil_5_117
    // hw_input_stencil_op_hcompute_conv_stencil_5_118
    // hw_input_stencil_op_hcompute_conv_stencil_5_119

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_112_res = hw_input_stencil_op_hcompute_conv_stencil_5_112_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_112_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_113_res = hw_input_stencil_op_hcompute_conv_stencil_5_113_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_113_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_114_res = hw_input_stencil_op_hcompute_conv_stencil_5_114_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_114_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_115_res = hw_input_stencil_op_hcompute_conv_stencil_5_115_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_115_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_116_res = hw_input_stencil_op_hcompute_conv_stencil_5_116_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_116_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_117_res = hw_input_stencil_op_hcompute_conv_stencil_5_117_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_117_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_118_res = hw_input_stencil_op_hcompute_conv_stencil_5_118_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_118_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_119_res = hw_input_stencil_op_hcompute_conv_stencil_5_119_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_119_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_input_stencil_op_hcompute_conv_stencil_6_130
//	hw_input_stencil_op_hcompute_conv_stencil_6_131
//	hw_input_stencil_op_hcompute_conv_stencil_6_132
//	hw_input_stencil_op_hcompute_conv_stencil_6_133
//	hw_input_stencil_op_hcompute_conv_stencil_6_134
//	hw_input_stencil_op_hcompute_conv_stencil_6_135
//	hw_input_stencil_op_hcompute_conv_stencil_6_136
//	hw_input_stencil_op_hcompute_conv_stencil_6_137
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_6_130
    // hw_input_stencil_op_hcompute_conv_stencil_6_131
    // hw_input_stencil_op_hcompute_conv_stencil_6_132
    // hw_input_stencil_op_hcompute_conv_stencil_6_133
    // hw_input_stencil_op_hcompute_conv_stencil_6_134
    // hw_input_stencil_op_hcompute_conv_stencil_6_135
    // hw_input_stencil_op_hcompute_conv_stencil_6_136
    // hw_input_stencil_op_hcompute_conv_stencil_6_137

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_130_res = hw_input_stencil_op_hcompute_conv_stencil_6_130_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_130_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_131_res = hw_input_stencil_op_hcompute_conv_stencil_6_131_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_131_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_132_res = hw_input_stencil_op_hcompute_conv_stencil_6_132_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_132_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_133_res = hw_input_stencil_op_hcompute_conv_stencil_6_133_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_133_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_134_res = hw_input_stencil_op_hcompute_conv_stencil_6_134_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_134_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_135_res = hw_input_stencil_op_hcompute_conv_stencil_6_135_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_135_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_136_res = hw_input_stencil_op_hcompute_conv_stencil_6_136_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_136_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_137_res = hw_input_stencil_op_hcompute_conv_stencil_6_137_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_137_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_input_stencil_op_hcompute_conv_stencil_7_148
//	hw_input_stencil_op_hcompute_conv_stencil_7_149
//	hw_input_stencil_op_hcompute_conv_stencil_7_150
//	hw_input_stencil_op_hcompute_conv_stencil_7_151
//	hw_input_stencil_op_hcompute_conv_stencil_7_152
//	hw_input_stencil_op_hcompute_conv_stencil_7_153
//	hw_input_stencil_op_hcompute_conv_stencil_7_154
//	hw_input_stencil_op_hcompute_conv_stencil_7_155
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_7_148
    // hw_input_stencil_op_hcompute_conv_stencil_7_149
    // hw_input_stencil_op_hcompute_conv_stencil_7_150
    // hw_input_stencil_op_hcompute_conv_stencil_7_151
    // hw_input_stencil_op_hcompute_conv_stencil_7_152
    // hw_input_stencil_op_hcompute_conv_stencil_7_153
    // hw_input_stencil_op_hcompute_conv_stencil_7_154
    // hw_input_stencil_op_hcompute_conv_stencil_7_155

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_148_res = hw_input_stencil_op_hcompute_conv_stencil_7_148_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_148_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_149_res = hw_input_stencil_op_hcompute_conv_stencil_7_149_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_149_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_150_res = hw_input_stencil_op_hcompute_conv_stencil_7_150_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_150_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_151_res = hw_input_stencil_op_hcompute_conv_stencil_7_151_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_151_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_152_res = hw_input_stencil_op_hcompute_conv_stencil_7_152_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_152_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_153_res = hw_input_stencil_op_hcompute_conv_stencil_7_153_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_153_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_154_res = hw_input_stencil_op_hcompute_conv_stencil_7_154_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_154_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_155_res = hw_input_stencil_op_hcompute_conv_stencil_7_155_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_155_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_stencil_op_hcompute_conv_stencil_8_166
//	hw_input_stencil_op_hcompute_conv_stencil_8_167
//	hw_input_stencil_op_hcompute_conv_stencil_8_168
//	hw_input_stencil_op_hcompute_conv_stencil_8_169
//	hw_input_stencil_op_hcompute_conv_stencil_8_170
//	hw_input_stencil_op_hcompute_conv_stencil_8_171
//	hw_input_stencil_op_hcompute_conv_stencil_8_172
//	hw_input_stencil_op_hcompute_conv_stencil_8_173
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_8_166
    // hw_input_stencil_op_hcompute_conv_stencil_8_167
    // hw_input_stencil_op_hcompute_conv_stencil_8_168
    // hw_input_stencil_op_hcompute_conv_stencil_8_169
    // hw_input_stencil_op_hcompute_conv_stencil_8_170
    // hw_input_stencil_op_hcompute_conv_stencil_8_171
    // hw_input_stencil_op_hcompute_conv_stencil_8_172
    // hw_input_stencil_op_hcompute_conv_stencil_8_173

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_166_res = hw_input_stencil_op_hcompute_conv_stencil_8_166_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_166_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_167_res = hw_input_stencil_op_hcompute_conv_stencil_8_167_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_167_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_168_res = hw_input_stencil_op_hcompute_conv_stencil_8_168_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_168_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_169_res = hw_input_stencil_op_hcompute_conv_stencil_8_169_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_169_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_170_res = hw_input_stencil_op_hcompute_conv_stencil_8_170_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_170_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_171_res = hw_input_stencil_op_hcompute_conv_stencil_8_171_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_171_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_172_res = hw_input_stencil_op_hcompute_conv_stencil_8_172_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_172_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_173_res = hw_input_stencil_op_hcompute_conv_stencil_8_173_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_173_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_stencil_op_hcompute_conv_stencil_9_184
//	hw_input_stencil_op_hcompute_conv_stencil_9_185
//	hw_input_stencil_op_hcompute_conv_stencil_9_186
//	hw_input_stencil_op_hcompute_conv_stencil_9_187
//	hw_input_stencil_op_hcompute_conv_stencil_9_188
//	hw_input_stencil_op_hcompute_conv_stencil_9_189
//	hw_input_stencil_op_hcompute_conv_stencil_9_190
//	hw_input_stencil_op_hcompute_conv_stencil_9_191
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_9_184
    // hw_input_stencil_op_hcompute_conv_stencil_9_185
    // hw_input_stencil_op_hcompute_conv_stencil_9_186
    // hw_input_stencil_op_hcompute_conv_stencil_9_187
    // hw_input_stencil_op_hcompute_conv_stencil_9_188
    // hw_input_stencil_op_hcompute_conv_stencil_9_189
    // hw_input_stencil_op_hcompute_conv_stencil_9_190
    // hw_input_stencil_op_hcompute_conv_stencil_9_191

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_184_res = hw_input_stencil_op_hcompute_conv_stencil_9_184_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_184_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_185_res = hw_input_stencil_op_hcompute_conv_stencil_9_185_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_185_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_186_res = hw_input_stencil_op_hcompute_conv_stencil_9_186_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_186_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_187_res = hw_input_stencil_op_hcompute_conv_stencil_9_187_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_187_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_188_res = hw_input_stencil_op_hcompute_conv_stencil_9_188_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_188_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_189_res = hw_input_stencil_op_hcompute_conv_stencil_9_189_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_189_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_190_res = hw_input_stencil_op_hcompute_conv_stencil_9_190_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_190_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_191_res = hw_input_stencil_op_hcompute_conv_stencil_9_191_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_191_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_273
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_273_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_273_write(hw_input_stencil_op_hcompute_hw_input_stencil_273_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, dynamic_address);
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



inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275_write(hw_uint<16>& hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
  hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275, hw_kernel_s0_z - 0, hw_kernel_s0_w - 0, hw_kernel_s0_x - 0, hw_kernel_s0_y - 0);
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_210_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_210 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_211_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_211 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_212_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_212 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_213_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_213 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_214_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_214 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_215_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_215 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_216_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_216 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_217_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_217 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 9 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_228_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_228 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_229_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_229 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_230_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_230 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_231_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_231 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_232_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_232 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_233_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_233 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_234_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_234 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_235_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_235 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 10 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_287_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_287 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_288_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_288 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_289_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_289 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_290_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_290 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_291_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_291 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_292_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_292 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_293_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_293 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_294_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_294 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 11 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_10_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_10 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_11_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_11 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_12_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_12 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_13_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_13 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_14_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_14 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_15_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_15 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_16_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_16 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_17_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_17 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 12 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_48_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_48 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_49_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_49 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_50_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_50 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_51_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_51 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_52_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_52 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_53_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_53 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_54_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_54 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_55_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_55 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 13 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_66_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_66 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_67_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_67 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_68_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_68 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_69_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_69 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_70_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_70 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_71_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_71 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_72_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_72 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_73_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_73 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 14 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_28_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_28 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_29_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_29 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_30_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_30 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_31_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_31 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_32_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_32 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_33_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_33 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_34_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_34 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_35_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_35 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 15 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_247_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_247 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_248_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_248 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_249_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_249 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_250_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_250 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_251_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_251 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_252_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_252 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_253_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_253 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_254_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_254 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 0 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_265_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_265 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_266_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_266 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_267_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_267 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_268_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_268 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_269_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_269 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_270_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_270 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_271_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_271 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_272_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_272 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 1 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_84_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_84 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_85_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_85 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_86_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_86 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_87_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_87 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_88_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_88 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_89_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_89 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_90_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_90 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_91_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_91 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 2 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_102_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_102 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_103_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_103 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_104_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_104 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_105_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_105 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_106_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_106 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_107_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_107 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_108_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_108 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_109_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_109 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 3 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_120_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_120 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_121_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_121 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_122_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_122 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_123_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_123 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_124_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_124 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_125_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_125 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_126_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_126 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_127_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_127 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 4 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_138_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_138 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_139_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_139 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_140_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_140 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_141_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_141 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_142_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_142 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_143_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_143 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_144_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_144 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_145_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_145 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 5 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_156_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_156 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_157_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_157 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_158_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_158 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_159_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_159 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_160_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_160 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_161_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_161 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_162_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_162 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_163_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_163 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 6 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_174_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_174 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_175_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_175 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_176_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_176 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_177_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_177 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_178_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_178 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_179_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_179 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_180_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_180 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_181_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_181 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 7 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_192_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_192 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(0 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_193_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_193 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(1 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_194_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_194 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(2 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_195_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_195 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(3 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_196_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_196 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(4 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_197_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_197 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(5 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_198_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_198 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(6 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_199_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_199 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(7 - 0, 8 - 0, conv_s1_r_x - 0, conv_s1_r_y - 0);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_210
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_211
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_212
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_213
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_214
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_215
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_216
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_217
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_210
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_211
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_212
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_213
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_214
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_215
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_216
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_217

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_210_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_210_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_210_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_211_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_211_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_211_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_212_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_212_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_212_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_213_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_213_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_213_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_214_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_214_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_214_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_215_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_215_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_215_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_216_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_216_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_216_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_217_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_217_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_217_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_228
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_229
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_230
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_231
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_232
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_233
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_234
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_235
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_228
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_229
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_230
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_231
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_232
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_233
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_234
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_235

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_228_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_228_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_228_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_229_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_229_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_229_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_230_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_230_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_230_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_231_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_231_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_231_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_232_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_232_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_232_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_233_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_233_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_233_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_234_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_234_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_234_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_235_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_235_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_235_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_287
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_288
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_289
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_290
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_291
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_292
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_293
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_294
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_287
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_288
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_289
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_290
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_291
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_292
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_293
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_294

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_287_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_287_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_287_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_288_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_288_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_288_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_289_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_289_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_289_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_290_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_290_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_290_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_291_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_291_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_291_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_292_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_292_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_292_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_293_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_293_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_293_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_294_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_294_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_294_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_10
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_11
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_12
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_13
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_14
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_15
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_16
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_17
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_10
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_11
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_12
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_13
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_14
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_15
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_16
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_17

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_10_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_10_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_10_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_11_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_11_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_11_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_12_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_12_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_12_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_13_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_13_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_13_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_14_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_14_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_14_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_15_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_15_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_15_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_16_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_16_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_16_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_17_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_17_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_17_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_48
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_49
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_50
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_51
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_52
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_53
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_54
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_55
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_48
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_49
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_50
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_51
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_52
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_53
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_54
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_55

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_48_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_48_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_48_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_49_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_49_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_49_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_50_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_50_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_50_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_51_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_51_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_51_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_52_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_52_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_52_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_53_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_53_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_53_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_54_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_54_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_54_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_55_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_55_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_55_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_66
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_67
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_68
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_69
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_70
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_71
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_72
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_73
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_66
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_67
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_68
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_69
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_70
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_71
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_72
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_73

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_66_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_66_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_66_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_67_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_67_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_67_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_68_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_68_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_68_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_69_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_69_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_69_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_70_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_70_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_70_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_71_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_71_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_71_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_72_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_72_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_72_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_73_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_73_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_73_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_28
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_29
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_30
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_31
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_32
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_33
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_34
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_35
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_28
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_29
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_30
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_31
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_32
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_33
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_34
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_35

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_28_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_28_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_28_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_29_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_29_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_29_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_30_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_30_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_30_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_31_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_31_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_31_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_32_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_32_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_32_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_33_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_33_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_33_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_34_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_34_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_34_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_35_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_35_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_35_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_247
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_248
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_249
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_250
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_251
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_252
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_253
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_254
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_247
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_248
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_249
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_250
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_251
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_252
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_253
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_254

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_247_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_247_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_247_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_248_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_248_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_248_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_249_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_249_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_249_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_250_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_250_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_250_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_251_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_251_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_251_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_252_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_252_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_252_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_253_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_253_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_253_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_254_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_254_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_254_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_265
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_266
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_267
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_268
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_269
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_270
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_271
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_272
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_265
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_266
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_267
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_268
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_269
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_270
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_271
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_272

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_265_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_265_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_265_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_266_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_266_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_266_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_267_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_267_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_267_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_268_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_268_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_268_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_269_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_269_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_269_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_270_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_270_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_270_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_271_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_271_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_271_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_272_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_272_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_272_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_84
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_85
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_86
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_87
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_88
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_89
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_90
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_91
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_84
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_85
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_86
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_87
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_88
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_89
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_90
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_91

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_84_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_84_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_84_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_85_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_85_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_85_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_86_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_86_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_86_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_87_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_87_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_87_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_88_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_88_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_88_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_89_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_89_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_89_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_90_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_90_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_90_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_91_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_91_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_91_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_102
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_103
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_104
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_105
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_106
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_107
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_108
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_109
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_102
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_103
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_104
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_105
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_106
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_107
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_108
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_109

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_102_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_102_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_102_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_103_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_103_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_103_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_104_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_104_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_104_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_105_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_105_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_105_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_106_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_106_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_106_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_107_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_107_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_107_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_108_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_108_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_108_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_109_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_109_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_109_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_120
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_121
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_122
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_123
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_124
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_125
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_126
//	hw_kernel_stencil_op_hcompute_conv_stencil_5_127
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_120
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_121
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_122
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_123
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_124
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_125
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_126
    // hw_kernel_stencil_op_hcompute_conv_stencil_5_127

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_120_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_120_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_120_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_121_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_121_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_121_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_122_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_122_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_122_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_123_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_123_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_123_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_124_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_124_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_124_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_125_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_125_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_125_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_126_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_126_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_126_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_127_res = hw_kernel_stencil_op_hcompute_conv_stencil_5_127_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_5_127_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_138
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_139
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_140
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_141
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_142
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_143
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_144
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_145
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_138
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_139
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_140
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_141
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_142
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_143
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_144
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_145

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_138_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_138_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_138_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_139_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_139_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_139_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_140_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_140_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_140_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_141_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_141_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_141_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_142_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_142_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_142_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_143_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_143_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_143_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_144_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_144_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_144_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_145_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_145_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_145_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_156
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_157
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_158
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_159
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_160
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_161
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_162
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_163
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_156
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_157
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_158
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_159
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_160
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_161
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_162
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_163

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_156_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_156_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_156_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_157_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_157_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_157_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_158_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_158_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_158_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_159_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_159_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_159_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_160_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_160_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_160_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_161_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_161_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_161_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_162_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_162_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_162_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_163_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_163_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_163_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_174
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_175
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_176
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_177
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_178
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_179
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_180
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_181
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_174
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_175
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_176
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_177
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_178
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_179
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_180
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_181

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_174_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_174_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_174_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_175_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_175_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_175_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_176_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_176_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_176_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_177_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_177_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_177_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_178_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_178_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_178_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_179_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_179_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_179_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_180_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_180_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_180_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_181_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_181_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_181_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_192
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_193
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_194
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_195
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_196
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_197
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_198
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_199
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_192
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_193
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_194
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_195
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_196
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_197
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_198
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_199

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_192_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_192_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_192_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_193_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_193_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_193_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_194_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_194_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_194_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_195_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_195_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_195_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_196_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_196_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_196_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_197_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_197_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_197_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_198_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_198_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_198_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_199_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_199_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_199_res);
	return result;
}

// op_hcompute_hw_kernel_stencil_write
//	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275
inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_stencil_write, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275_res = op_hcompute_hw_kernel_stencil_write.extract<0, 15>();
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275_write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_275_res, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, dynamic_address);
}



// Operation logic
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

// schedule: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 5, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 2, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 3, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 6, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 10, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> [0, 1, 27, conv_s1_y, 0, conv_stencil_ld2, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15; op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 20 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 7, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 8, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 21 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 19 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 1, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 2, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7; op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 23 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 18 + conv_s1_r_y, 9, conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 1, 27 + hw_output_s0_w, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 22 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [hw_kernel_s0_y, 0, hw_kernel_s0_x, 11 + hw_kernel_s0_w, 0, hw_kernel_s0_z, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7; op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 1, conv_s0_y, conv_s0_x, 1, 27 + conv_s0_w, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15; load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> [29, 0, 2 + conv_s1_y, conv_s1_x, 4, conv_stencil_ld6, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15 }
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
//   { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 21 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_13(((-4 + i6 == 0) && (i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-21 + i3 >= 0) && (23 - i3 >= 0) && (-5 + i5 >= 0) && (7 - i5 >= 0)))
//   { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 19 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_11(((-3 + i6 == 0) && (i4 == 0) && (i1 == 0) && (-2 + i0 >= 0) && (29 - i0 >= 0) && (-2 + i2 >= 0) && (29 - i2 >= 0) && (-19 + i3 >= 0) && (21 - i3 >= 0) && (-5 + i5 >= 0) && (7 - i5 >= 0)))
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
            if (c3 >= 19 && c3 <= 21)
              op_hcompute_conv_stencil_11(0, c0 - 2, c2 - 2, c3 - 19, c5 - 5);
            if (c3 <= 20) {
              op_hcompute_conv_stencil_10(0, c0 - 2, c2 - 2, c3 - 18, c5 - 5);
            } else {
              op_hcompute_conv_stencil_13(0, c0 - 2, c2 - 2, c3 - 21, c5 - 5);
            }
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
	            if (c3 >= 19 && c3 <= 21)
	              op_hcompute_conv_stencil_11(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 19, c5 - 5);
	            if (c3 <= 20) {
	              op_hcompute_conv_stencil_10(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 18, c5 - 5);
	            } else {
	              op_hcompute_conv_stencil_13(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c0 - 2, c2 - 2, c3 - 21, c5 - 5);
	            }
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
#endif //__VIVADO_SYNTH__

