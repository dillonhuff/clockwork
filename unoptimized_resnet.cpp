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
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



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
  // # of banks: 1
  conv_stencil_all_inputs_to_all_outputs_cache conv_stencil_all_inputs_to_all_outputs;
};



inline void conv_stencil_op_hcompute_conv_stencil_2_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_op_hcompute_conv_stencil_2, (conv_s0_x - 0) * 1 + (conv_s0_y - 0) * 28 + (conv_s0_w - 0) * 784);
}

inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_296_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_296 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> conv_stencil[0, conv_s1_y, conv_stencil_ld2] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15 }
  auto value_conv_stencil_op_hcompute_conv_stencil_2 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_2;
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_150_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_150 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  auto value_conv_stencil_op_hcompute_conv_stencil_2 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 28 + (hw_output_s0_w - 0) * 784);
  return value_conv_stencil_op_hcompute_conv_stencil_2;
  return 0;
}

// # of bundles = 3
// load_to_conv_stencil_rb_at_conv_s1_x3_read
//	conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_296
inline hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_296

	hw_uint<16> result;
	hw_uint<16> conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_296_res = conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_296_select(conv_stencil, root, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
	set_at<0, 16>(result, conv_stencil_load_to_conv_stencil_rb_at_conv_s1_x3_296_res);
	return result;
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_2
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_write(conv_stencil_op_hcompute_conv_stencil_2_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_150
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_150

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_150_res = conv_stencil_op_hcompute_hw_output_stencil_150_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_150_res);
	return result;
}

#include "hw_classes.h"

struct conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
  hw_uint<32>  RAM[12544];
  inline hw_uint<32>  read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 12544)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 12544);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<32>  value, const int addr) {
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

struct conv_stencil_rb_at_conv_s1_x_cache {
  // # of banks: 1
  conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs_cache conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs;
};



inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295, (0 - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld2 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_297_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_297, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_297, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_259_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_259, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_259, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_277_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_277, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_277, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_169_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_169, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_169, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_77_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_77, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_77, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_95_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_95, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_95, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_113_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_113, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_113, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_131_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_131, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_131, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_3_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_3, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_3, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_23_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_23, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_23, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_41_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_41, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_41, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_59_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_59, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_59, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_241_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_241, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_241, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_205_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_205, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_205, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_187_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_187, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_187, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_151_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_151, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_151, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 0) * 784);
}

inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_223_write(hw_uint<32> & conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_223, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_223, (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 0) * 784);
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_298_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_298 read pattern: { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, conv_stencil_ld6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (conv_stencil_ld6 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_260_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_260 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (9 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_278_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_278 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 10] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (10 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_170_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_170 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 11] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (11 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_78_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_78 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 12] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (12 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_96_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_96 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 13] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (13 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_114_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_114 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 14] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (14 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_132_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_132 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 15] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (15 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_4_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_4 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (0 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (1 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_42_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_42 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (2 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_60_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_60 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (3 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_242_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_5_242 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (4 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_206_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_206 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (5 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_188_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_188 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (6 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_152_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_152 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (7 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

inline hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_224_select(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_224 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil_rb_at_conv_s1_x[conv_s1_x, conv_s1_y, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295 = conv_stencil_rb_at_conv_s1_x.conv_stencil_rb_at_conv_s1_x_all_inputs_to_all_outputs.read(/*ram type address*/ (conv_s1_x - 0) * 1 + (conv_s1_y - 0) * 28 + (8 - 0) * 784);
  return value_conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295;
  return 0;
}

// # of bundles = 35
// load_to_conv_stencil_rb_at_conv_s1_x3_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_stencil_ld0, int conv_stencil_ld1, int conv_stencil_ld2, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295_res = load_to_conv_stencil_rb_at_conv_s1_x3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x3_295_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_stencil_ld0, conv_stencil_ld1, conv_stencil_ld2, dynamic_address);
}

// load_to_conv_stencil_rb_at_conv_s1_x7_read
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_298
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_298

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_298_res = conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_298_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_298_res);
	return result;
}

// load_to_conv_stencil_rb_at_conv_s1_x7_write
//	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_297
inline void conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_write_bundle_write(hw_uint<32>& load_to_conv_stencil_rb_at_conv_s1_x7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_stencil_ld4, int conv_stencil_ld5, int conv_stencil_ld6, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_297_res = load_to_conv_stencil_rb_at_conv_s1_x7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_297_write(conv_stencil_rb_at_conv_s1_x_load_to_conv_stencil_rb_at_conv_s1_x7_297_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_stencil_ld4, conv_stencil_ld5, conv_stencil_ld6, dynamic_address);
}

// op_hcompute_conv_stencil_10_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_260
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_260

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_260_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_260_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_260_res);
	return result;
}

// op_hcompute_conv_stencil_10_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_259
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_10_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_259_res = op_hcompute_conv_stencil_10_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_259_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_10_259_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_11_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_278
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_278

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_278_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_278_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_278_res);
	return result;
}

// op_hcompute_conv_stencil_11_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_277
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_11_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_277_res = op_hcompute_conv_stencil_11_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_277_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_11_277_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_12_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_170
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_170

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_170_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_170_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_170_res);
	return result;
}

// op_hcompute_conv_stencil_12_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_169
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_12_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_169_res = op_hcompute_conv_stencil_12_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_169_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_12_169_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_13_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_78
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_78

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_78_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_78_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_78_res);
	return result;
}

// op_hcompute_conv_stencil_13_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_77
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_13_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_77_res = op_hcompute_conv_stencil_13_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_77_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_13_77_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_14_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_96
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_96

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_96_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_96_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_96_res);
	return result;
}

// op_hcompute_conv_stencil_14_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_95
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_14_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_95_res = op_hcompute_conv_stencil_14_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_95_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_14_95_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_15_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_114
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_114

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_114_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_114_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_114_res);
	return result;
}

// op_hcompute_conv_stencil_15_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_113
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_15_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_113_res = op_hcompute_conv_stencil_15_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_113_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_15_113_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_16_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_132
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_132

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_132_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_132_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_132_res);
	return result;
}

// op_hcompute_conv_stencil_16_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_131
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_16_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_131_res = op_hcompute_conv_stencil_16_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_131_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_16_131_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_1_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_4
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_4

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_4_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_4_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_4_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_3
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_1_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_3_res = op_hcompute_conv_stencil_1_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_3_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_1_3_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_24_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_23
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_2_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_23_res = op_hcompute_conv_stencil_2_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_23_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_2_23_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_42
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_42

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_42_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_42_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_42_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_41
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_3_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_41_res = op_hcompute_conv_stencil_3_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_41_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_3_41_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_60
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_60

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_60_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_60_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_60_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_59
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_4_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_59_res = op_hcompute_conv_stencil_4_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_59_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_4_59_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
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
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_206
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_206

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_206_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_206_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_206_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_205
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_6_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_205_res = op_hcompute_conv_stencil_6_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_205_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_6_205_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_188
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_188

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_188_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_188_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_188_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_187
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_7_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_187_res = op_hcompute_conv_stencil_7_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_187_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_7_187_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_152
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_152

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_152_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_152_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_152_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_151
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_8_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_151_res = op_hcompute_conv_stencil_8_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_151_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_8_151_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_224
inline hw_uint<32> conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_224

	hw_uint<32> result;
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_224_res = conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_224_select(conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 32>(result, conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_224_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_223
inline void conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<32>& op_hcompute_conv_stencil_9_write, conv_stencil_rb_at_conv_s1_x_cache& conv_stencil_rb_at_conv_s1_x, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<32>  conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_223_res = op_hcompute_conv_stencil_9_write.extract<0, 31>();
	conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_223_write(conv_stencil_rb_at_conv_s1_x_op_hcompute_conv_stencil_9_223_res, conv_stencil_rb_at_conv_s1_x, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
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
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



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
  // # of banks: 1
  hw_input_stencil_all_inputs_to_all_outputs_cache hw_input_stencil_all_inputs_to_all_outputs;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_0, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_z - 0) * 1 + (hw_input_s0_x - 0) * 8 + (hw_input_s0_y - 0) * 240);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_261_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_261 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_262_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_262 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_263_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_263 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_264_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_264 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_265_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_265 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_266_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_266 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_267_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_267 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_268_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_268 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_279_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_279 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_280_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_280 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_281_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_281 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_282_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_282 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_283_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_283 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_284_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_284 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_285_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_285 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_286_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_286 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_171_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_171 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_172_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_172 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_173_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_173 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_174_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_174 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_175_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_175 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_176_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_176 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_177_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_177 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_178_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_178 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_79_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_79 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_80_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_80 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_81_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_81 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_82_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_82 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_83_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_83 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_84_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_84 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_85_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_85 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_86_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_86 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_100_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_100 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_101_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_101 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_102_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_102 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_103_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_103 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_104_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_104 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_97_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_97 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_98_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_98 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_99_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_99 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_115_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_115 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_116_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_116 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_117_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_117 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_118_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_118 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_119_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_119 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_120_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_120 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_121_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_121 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_122_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_122 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_133_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_133 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_134_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_134 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_135_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_135 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_136_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_136 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_137_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_137 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_138_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_138 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_139_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_139 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_140_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_140 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_10_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_10 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_11 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_12_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_12 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_5_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_5 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_6_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_6 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_7 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_8 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_9 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_25_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_25 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_26_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_26 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_27 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_28_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_28 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_29_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_29 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_30_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_30 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_31_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_31 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_32_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_32 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_43_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_43 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_44_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_44 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_45_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_45 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_46_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_46 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_47_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_47 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_48_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_48 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_49_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_49 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_50_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_50 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_61_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_61 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_62_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_62 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_63_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_63 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_64_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_64 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_65_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_65 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_66_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_66 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_67_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_67 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_68_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_68 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_243_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_243 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_244_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_244 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_245_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_245 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_246_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_246 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_247_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_247 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_248_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_248 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_249_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_249 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_250_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_250 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_207_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_207 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_208_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_208 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_209_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_209 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_210_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_210 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_211_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_211 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_212_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_212 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_213_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_213 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_214_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_214 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_189_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_189 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_190_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_190 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_191_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_191 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_192_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_192 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_193_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_193 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_194_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_194 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_195_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_195 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_196_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_196 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_153_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_153 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_154_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_154 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_155_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_155 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_156_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_156 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_157_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_157 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_158_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_158 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_159_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_159 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_160_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_160 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_225_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_225 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_226_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_226 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_227_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_227 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_228_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_228 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_229_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_229 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_230_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_230 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_231_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_231 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_232_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_232 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (conv_s1_x + conv_s1_r_x - 0) * 8 + (conv_s1_y + conv_s1_r_y - 0) * 240);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_input_stencil_op_hcompute_conv_stencil_10_261
//	hw_input_stencil_op_hcompute_conv_stencil_10_262
//	hw_input_stencil_op_hcompute_conv_stencil_10_263
//	hw_input_stencil_op_hcompute_conv_stencil_10_264
//	hw_input_stencil_op_hcompute_conv_stencil_10_265
//	hw_input_stencil_op_hcompute_conv_stencil_10_266
//	hw_input_stencil_op_hcompute_conv_stencil_10_267
//	hw_input_stencil_op_hcompute_conv_stencil_10_268
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_10_261
    // hw_input_stencil_op_hcompute_conv_stencil_10_262
    // hw_input_stencil_op_hcompute_conv_stencil_10_263
    // hw_input_stencil_op_hcompute_conv_stencil_10_264
    // hw_input_stencil_op_hcompute_conv_stencil_10_265
    // hw_input_stencil_op_hcompute_conv_stencil_10_266
    // hw_input_stencil_op_hcompute_conv_stencil_10_267
    // hw_input_stencil_op_hcompute_conv_stencil_10_268

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_261_res = hw_input_stencil_op_hcompute_conv_stencil_10_261_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_261_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_262_res = hw_input_stencil_op_hcompute_conv_stencil_10_262_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_262_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_263_res = hw_input_stencil_op_hcompute_conv_stencil_10_263_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_263_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_264_res = hw_input_stencil_op_hcompute_conv_stencil_10_264_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_264_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_265_res = hw_input_stencil_op_hcompute_conv_stencil_10_265_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_265_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_266_res = hw_input_stencil_op_hcompute_conv_stencil_10_266_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_266_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_267_res = hw_input_stencil_op_hcompute_conv_stencil_10_267_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_267_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_268_res = hw_input_stencil_op_hcompute_conv_stencil_10_268_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_268_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_input_stencil_op_hcompute_conv_stencil_11_279
//	hw_input_stencil_op_hcompute_conv_stencil_11_280
//	hw_input_stencil_op_hcompute_conv_stencil_11_281
//	hw_input_stencil_op_hcompute_conv_stencil_11_282
//	hw_input_stencil_op_hcompute_conv_stencil_11_283
//	hw_input_stencil_op_hcompute_conv_stencil_11_284
//	hw_input_stencil_op_hcompute_conv_stencil_11_285
//	hw_input_stencil_op_hcompute_conv_stencil_11_286
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_11_279
    // hw_input_stencil_op_hcompute_conv_stencil_11_280
    // hw_input_stencil_op_hcompute_conv_stencil_11_281
    // hw_input_stencil_op_hcompute_conv_stencil_11_282
    // hw_input_stencil_op_hcompute_conv_stencil_11_283
    // hw_input_stencil_op_hcompute_conv_stencil_11_284
    // hw_input_stencil_op_hcompute_conv_stencil_11_285
    // hw_input_stencil_op_hcompute_conv_stencil_11_286

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_279_res = hw_input_stencil_op_hcompute_conv_stencil_11_279_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_279_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_280_res = hw_input_stencil_op_hcompute_conv_stencil_11_280_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_280_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_281_res = hw_input_stencil_op_hcompute_conv_stencil_11_281_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_281_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_282_res = hw_input_stencil_op_hcompute_conv_stencil_11_282_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_282_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_283_res = hw_input_stencil_op_hcompute_conv_stencil_11_283_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_283_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_284_res = hw_input_stencil_op_hcompute_conv_stencil_11_284_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_284_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_285_res = hw_input_stencil_op_hcompute_conv_stencil_11_285_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_285_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_286_res = hw_input_stencil_op_hcompute_conv_stencil_11_286_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_286_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_input_stencil_op_hcompute_conv_stencil_12_171
//	hw_input_stencil_op_hcompute_conv_stencil_12_172
//	hw_input_stencil_op_hcompute_conv_stencil_12_173
//	hw_input_stencil_op_hcompute_conv_stencil_12_174
//	hw_input_stencil_op_hcompute_conv_stencil_12_175
//	hw_input_stencil_op_hcompute_conv_stencil_12_176
//	hw_input_stencil_op_hcompute_conv_stencil_12_177
//	hw_input_stencil_op_hcompute_conv_stencil_12_178
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_12_171
    // hw_input_stencil_op_hcompute_conv_stencil_12_172
    // hw_input_stencil_op_hcompute_conv_stencil_12_173
    // hw_input_stencil_op_hcompute_conv_stencil_12_174
    // hw_input_stencil_op_hcompute_conv_stencil_12_175
    // hw_input_stencil_op_hcompute_conv_stencil_12_176
    // hw_input_stencil_op_hcompute_conv_stencil_12_177
    // hw_input_stencil_op_hcompute_conv_stencil_12_178

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_171_res = hw_input_stencil_op_hcompute_conv_stencil_12_171_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_171_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_172_res = hw_input_stencil_op_hcompute_conv_stencil_12_172_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_172_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_173_res = hw_input_stencil_op_hcompute_conv_stencil_12_173_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_173_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_174_res = hw_input_stencil_op_hcompute_conv_stencil_12_174_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_174_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_175_res = hw_input_stencil_op_hcompute_conv_stencil_12_175_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_175_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_176_res = hw_input_stencil_op_hcompute_conv_stencil_12_176_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_176_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_177_res = hw_input_stencil_op_hcompute_conv_stencil_12_177_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_177_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_178_res = hw_input_stencil_op_hcompute_conv_stencil_12_178_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_178_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_input_stencil_op_hcompute_conv_stencil_13_79
//	hw_input_stencil_op_hcompute_conv_stencil_13_80
//	hw_input_stencil_op_hcompute_conv_stencil_13_81
//	hw_input_stencil_op_hcompute_conv_stencil_13_82
//	hw_input_stencil_op_hcompute_conv_stencil_13_83
//	hw_input_stencil_op_hcompute_conv_stencil_13_84
//	hw_input_stencil_op_hcompute_conv_stencil_13_85
//	hw_input_stencil_op_hcompute_conv_stencil_13_86
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_13_79
    // hw_input_stencil_op_hcompute_conv_stencil_13_80
    // hw_input_stencil_op_hcompute_conv_stencil_13_81
    // hw_input_stencil_op_hcompute_conv_stencil_13_82
    // hw_input_stencil_op_hcompute_conv_stencil_13_83
    // hw_input_stencil_op_hcompute_conv_stencil_13_84
    // hw_input_stencil_op_hcompute_conv_stencil_13_85
    // hw_input_stencil_op_hcompute_conv_stencil_13_86

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_79_res = hw_input_stencil_op_hcompute_conv_stencil_13_79_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_79_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_80_res = hw_input_stencil_op_hcompute_conv_stencil_13_80_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_80_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_81_res = hw_input_stencil_op_hcompute_conv_stencil_13_81_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_81_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_82_res = hw_input_stencil_op_hcompute_conv_stencil_13_82_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_82_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_83_res = hw_input_stencil_op_hcompute_conv_stencil_13_83_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_83_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_84_res = hw_input_stencil_op_hcompute_conv_stencil_13_84_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_84_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_85_res = hw_input_stencil_op_hcompute_conv_stencil_13_85_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_85_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_86_res = hw_input_stencil_op_hcompute_conv_stencil_13_86_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_86_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_input_stencil_op_hcompute_conv_stencil_14_97
//	hw_input_stencil_op_hcompute_conv_stencil_14_98
//	hw_input_stencil_op_hcompute_conv_stencil_14_99
//	hw_input_stencil_op_hcompute_conv_stencil_14_100
//	hw_input_stencil_op_hcompute_conv_stencil_14_101
//	hw_input_stencil_op_hcompute_conv_stencil_14_102
//	hw_input_stencil_op_hcompute_conv_stencil_14_103
//	hw_input_stencil_op_hcompute_conv_stencil_14_104
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_14_97
    // hw_input_stencil_op_hcompute_conv_stencil_14_98
    // hw_input_stencil_op_hcompute_conv_stencil_14_99
    // hw_input_stencil_op_hcompute_conv_stencil_14_100
    // hw_input_stencil_op_hcompute_conv_stencil_14_101
    // hw_input_stencil_op_hcompute_conv_stencil_14_102
    // hw_input_stencil_op_hcompute_conv_stencil_14_103
    // hw_input_stencil_op_hcompute_conv_stencil_14_104

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_97_res = hw_input_stencil_op_hcompute_conv_stencil_14_97_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_97_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_98_res = hw_input_stencil_op_hcompute_conv_stencil_14_98_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_98_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_99_res = hw_input_stencil_op_hcompute_conv_stencil_14_99_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_99_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_100_res = hw_input_stencil_op_hcompute_conv_stencil_14_100_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_100_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_101_res = hw_input_stencil_op_hcompute_conv_stencil_14_101_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_101_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_102_res = hw_input_stencil_op_hcompute_conv_stencil_14_102_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_102_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_103_res = hw_input_stencil_op_hcompute_conv_stencil_14_103_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_103_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_104_res = hw_input_stencil_op_hcompute_conv_stencil_14_104_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_104_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_input_stencil_op_hcompute_conv_stencil_15_115
//	hw_input_stencil_op_hcompute_conv_stencil_15_116
//	hw_input_stencil_op_hcompute_conv_stencil_15_117
//	hw_input_stencil_op_hcompute_conv_stencil_15_118
//	hw_input_stencil_op_hcompute_conv_stencil_15_119
//	hw_input_stencil_op_hcompute_conv_stencil_15_120
//	hw_input_stencil_op_hcompute_conv_stencil_15_121
//	hw_input_stencil_op_hcompute_conv_stencil_15_122
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_15_115
    // hw_input_stencil_op_hcompute_conv_stencil_15_116
    // hw_input_stencil_op_hcompute_conv_stencil_15_117
    // hw_input_stencil_op_hcompute_conv_stencil_15_118
    // hw_input_stencil_op_hcompute_conv_stencil_15_119
    // hw_input_stencil_op_hcompute_conv_stencil_15_120
    // hw_input_stencil_op_hcompute_conv_stencil_15_121
    // hw_input_stencil_op_hcompute_conv_stencil_15_122

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_115_res = hw_input_stencil_op_hcompute_conv_stencil_15_115_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_115_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_116_res = hw_input_stencil_op_hcompute_conv_stencil_15_116_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_116_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_117_res = hw_input_stencil_op_hcompute_conv_stencil_15_117_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_117_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_118_res = hw_input_stencil_op_hcompute_conv_stencil_15_118_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_118_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_119_res = hw_input_stencil_op_hcompute_conv_stencil_15_119_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_119_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_120_res = hw_input_stencil_op_hcompute_conv_stencil_15_120_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_120_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_121_res = hw_input_stencil_op_hcompute_conv_stencil_15_121_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_121_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_122_res = hw_input_stencil_op_hcompute_conv_stencil_15_122_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_122_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_input_stencil_op_hcompute_conv_stencil_16_133
//	hw_input_stencil_op_hcompute_conv_stencil_16_134
//	hw_input_stencil_op_hcompute_conv_stencil_16_135
//	hw_input_stencil_op_hcompute_conv_stencil_16_136
//	hw_input_stencil_op_hcompute_conv_stencil_16_137
//	hw_input_stencil_op_hcompute_conv_stencil_16_138
//	hw_input_stencil_op_hcompute_conv_stencil_16_139
//	hw_input_stencil_op_hcompute_conv_stencil_16_140
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_16_133
    // hw_input_stencil_op_hcompute_conv_stencil_16_134
    // hw_input_stencil_op_hcompute_conv_stencil_16_135
    // hw_input_stencil_op_hcompute_conv_stencil_16_136
    // hw_input_stencil_op_hcompute_conv_stencil_16_137
    // hw_input_stencil_op_hcompute_conv_stencil_16_138
    // hw_input_stencil_op_hcompute_conv_stencil_16_139
    // hw_input_stencil_op_hcompute_conv_stencil_16_140

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_133_res = hw_input_stencil_op_hcompute_conv_stencil_16_133_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_133_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_134_res = hw_input_stencil_op_hcompute_conv_stencil_16_134_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_134_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_135_res = hw_input_stencil_op_hcompute_conv_stencil_16_135_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_135_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_136_res = hw_input_stencil_op_hcompute_conv_stencil_16_136_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_136_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_137_res = hw_input_stencil_op_hcompute_conv_stencil_16_137_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_137_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_138_res = hw_input_stencil_op_hcompute_conv_stencil_16_138_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_138_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_139_res = hw_input_stencil_op_hcompute_conv_stencil_16_139_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_139_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_140_res = hw_input_stencil_op_hcompute_conv_stencil_16_140_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_140_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_5
//	hw_input_stencil_op_hcompute_conv_stencil_1_6
//	hw_input_stencil_op_hcompute_conv_stencil_1_7
//	hw_input_stencil_op_hcompute_conv_stencil_1_8
//	hw_input_stencil_op_hcompute_conv_stencil_1_9
//	hw_input_stencil_op_hcompute_conv_stencil_1_10
//	hw_input_stencil_op_hcompute_conv_stencil_1_11
//	hw_input_stencil_op_hcompute_conv_stencil_1_12
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_1_5
    // hw_input_stencil_op_hcompute_conv_stencil_1_6
    // hw_input_stencil_op_hcompute_conv_stencil_1_7
    // hw_input_stencil_op_hcompute_conv_stencil_1_8
    // hw_input_stencil_op_hcompute_conv_stencil_1_9
    // hw_input_stencil_op_hcompute_conv_stencil_1_10
    // hw_input_stencil_op_hcompute_conv_stencil_1_11
    // hw_input_stencil_op_hcompute_conv_stencil_1_12

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_5_res = hw_input_stencil_op_hcompute_conv_stencil_1_5_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_5_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_6_res = hw_input_stencil_op_hcompute_conv_stencil_1_6_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_6_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_res = hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_7_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_8_res = hw_input_stencil_op_hcompute_conv_stencil_1_8_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_8_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_9_res = hw_input_stencil_op_hcompute_conv_stencil_1_9_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_9_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_10_res = hw_input_stencil_op_hcompute_conv_stencil_1_10_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_10_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_res = hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_11_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_12_res = hw_input_stencil_op_hcompute_conv_stencil_1_12_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_12_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_input_stencil_op_hcompute_conv_stencil_2_25
//	hw_input_stencil_op_hcompute_conv_stencil_2_26
//	hw_input_stencil_op_hcompute_conv_stencil_2_27
//	hw_input_stencil_op_hcompute_conv_stencil_2_28
//	hw_input_stencil_op_hcompute_conv_stencil_2_29
//	hw_input_stencil_op_hcompute_conv_stencil_2_30
//	hw_input_stencil_op_hcompute_conv_stencil_2_31
//	hw_input_stencil_op_hcompute_conv_stencil_2_32
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_2_25
    // hw_input_stencil_op_hcompute_conv_stencil_2_26
    // hw_input_stencil_op_hcompute_conv_stencil_2_27
    // hw_input_stencil_op_hcompute_conv_stencil_2_28
    // hw_input_stencil_op_hcompute_conv_stencil_2_29
    // hw_input_stencil_op_hcompute_conv_stencil_2_30
    // hw_input_stencil_op_hcompute_conv_stencil_2_31
    // hw_input_stencil_op_hcompute_conv_stencil_2_32

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_25_res = hw_input_stencil_op_hcompute_conv_stencil_2_25_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_25_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_26_res = hw_input_stencil_op_hcompute_conv_stencil_2_26_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_26_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_27_res = hw_input_stencil_op_hcompute_conv_stencil_2_27_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_27_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_28_res = hw_input_stencil_op_hcompute_conv_stencil_2_28_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_28_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_29_res = hw_input_stencil_op_hcompute_conv_stencil_2_29_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_29_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_30_res = hw_input_stencil_op_hcompute_conv_stencil_2_30_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_30_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_31_res = hw_input_stencil_op_hcompute_conv_stencil_2_31_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_31_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_32_res = hw_input_stencil_op_hcompute_conv_stencil_2_32_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_32_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_input_stencil_op_hcompute_conv_stencil_3_43
//	hw_input_stencil_op_hcompute_conv_stencil_3_44
//	hw_input_stencil_op_hcompute_conv_stencil_3_45
//	hw_input_stencil_op_hcompute_conv_stencil_3_46
//	hw_input_stencil_op_hcompute_conv_stencil_3_47
//	hw_input_stencil_op_hcompute_conv_stencil_3_48
//	hw_input_stencil_op_hcompute_conv_stencil_3_49
//	hw_input_stencil_op_hcompute_conv_stencil_3_50
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_3_43
    // hw_input_stencil_op_hcompute_conv_stencil_3_44
    // hw_input_stencil_op_hcompute_conv_stencil_3_45
    // hw_input_stencil_op_hcompute_conv_stencil_3_46
    // hw_input_stencil_op_hcompute_conv_stencil_3_47
    // hw_input_stencil_op_hcompute_conv_stencil_3_48
    // hw_input_stencil_op_hcompute_conv_stencil_3_49
    // hw_input_stencil_op_hcompute_conv_stencil_3_50

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_43_res = hw_input_stencil_op_hcompute_conv_stencil_3_43_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_43_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_44_res = hw_input_stencil_op_hcompute_conv_stencil_3_44_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_44_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_45_res = hw_input_stencil_op_hcompute_conv_stencil_3_45_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_45_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_46_res = hw_input_stencil_op_hcompute_conv_stencil_3_46_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_46_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_47_res = hw_input_stencil_op_hcompute_conv_stencil_3_47_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_47_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_48_res = hw_input_stencil_op_hcompute_conv_stencil_3_48_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_48_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_49_res = hw_input_stencil_op_hcompute_conv_stencil_3_49_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_49_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_50_res = hw_input_stencil_op_hcompute_conv_stencil_3_50_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_50_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_stencil_op_hcompute_conv_stencil_4_61
//	hw_input_stencil_op_hcompute_conv_stencil_4_62
//	hw_input_stencil_op_hcompute_conv_stencil_4_63
//	hw_input_stencil_op_hcompute_conv_stencil_4_64
//	hw_input_stencil_op_hcompute_conv_stencil_4_65
//	hw_input_stencil_op_hcompute_conv_stencil_4_66
//	hw_input_stencil_op_hcompute_conv_stencil_4_67
//	hw_input_stencil_op_hcompute_conv_stencil_4_68
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_4_61
    // hw_input_stencil_op_hcompute_conv_stencil_4_62
    // hw_input_stencil_op_hcompute_conv_stencil_4_63
    // hw_input_stencil_op_hcompute_conv_stencil_4_64
    // hw_input_stencil_op_hcompute_conv_stencil_4_65
    // hw_input_stencil_op_hcompute_conv_stencil_4_66
    // hw_input_stencil_op_hcompute_conv_stencil_4_67
    // hw_input_stencil_op_hcompute_conv_stencil_4_68

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_61_res = hw_input_stencil_op_hcompute_conv_stencil_4_61_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_61_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_62_res = hw_input_stencil_op_hcompute_conv_stencil_4_62_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_62_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_63_res = hw_input_stencil_op_hcompute_conv_stencil_4_63_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_63_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_64_res = hw_input_stencil_op_hcompute_conv_stencil_4_64_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_64_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_65_res = hw_input_stencil_op_hcompute_conv_stencil_4_65_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_65_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_66_res = hw_input_stencil_op_hcompute_conv_stencil_4_66_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_66_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_67_res = hw_input_stencil_op_hcompute_conv_stencil_4_67_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_67_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_68_res = hw_input_stencil_op_hcompute_conv_stencil_4_68_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_68_res);
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
//	hw_input_stencil_op_hcompute_conv_stencil_6_207
//	hw_input_stencil_op_hcompute_conv_stencil_6_208
//	hw_input_stencil_op_hcompute_conv_stencil_6_209
//	hw_input_stencil_op_hcompute_conv_stencil_6_210
//	hw_input_stencil_op_hcompute_conv_stencil_6_211
//	hw_input_stencil_op_hcompute_conv_stencil_6_212
//	hw_input_stencil_op_hcompute_conv_stencil_6_213
//	hw_input_stencil_op_hcompute_conv_stencil_6_214
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_6_207
    // hw_input_stencil_op_hcompute_conv_stencil_6_208
    // hw_input_stencil_op_hcompute_conv_stencil_6_209
    // hw_input_stencil_op_hcompute_conv_stencil_6_210
    // hw_input_stencil_op_hcompute_conv_stencil_6_211
    // hw_input_stencil_op_hcompute_conv_stencil_6_212
    // hw_input_stencil_op_hcompute_conv_stencil_6_213
    // hw_input_stencil_op_hcompute_conv_stencil_6_214

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_207_res = hw_input_stencil_op_hcompute_conv_stencil_6_207_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_207_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_208_res = hw_input_stencil_op_hcompute_conv_stencil_6_208_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_208_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_209_res = hw_input_stencil_op_hcompute_conv_stencil_6_209_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_209_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_210_res = hw_input_stencil_op_hcompute_conv_stencil_6_210_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_210_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_211_res = hw_input_stencil_op_hcompute_conv_stencil_6_211_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_211_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_212_res = hw_input_stencil_op_hcompute_conv_stencil_6_212_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_212_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_213_res = hw_input_stencil_op_hcompute_conv_stencil_6_213_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_213_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_214_res = hw_input_stencil_op_hcompute_conv_stencil_6_214_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_214_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_input_stencil_op_hcompute_conv_stencil_7_189
//	hw_input_stencil_op_hcompute_conv_stencil_7_190
//	hw_input_stencil_op_hcompute_conv_stencil_7_191
//	hw_input_stencil_op_hcompute_conv_stencil_7_192
//	hw_input_stencil_op_hcompute_conv_stencil_7_193
//	hw_input_stencil_op_hcompute_conv_stencil_7_194
//	hw_input_stencil_op_hcompute_conv_stencil_7_195
//	hw_input_stencil_op_hcompute_conv_stencil_7_196
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_7_189
    // hw_input_stencil_op_hcompute_conv_stencil_7_190
    // hw_input_stencil_op_hcompute_conv_stencil_7_191
    // hw_input_stencil_op_hcompute_conv_stencil_7_192
    // hw_input_stencil_op_hcompute_conv_stencil_7_193
    // hw_input_stencil_op_hcompute_conv_stencil_7_194
    // hw_input_stencil_op_hcompute_conv_stencil_7_195
    // hw_input_stencil_op_hcompute_conv_stencil_7_196

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_189_res = hw_input_stencil_op_hcompute_conv_stencil_7_189_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_189_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_190_res = hw_input_stencil_op_hcompute_conv_stencil_7_190_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_190_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_191_res = hw_input_stencil_op_hcompute_conv_stencil_7_191_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_191_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_192_res = hw_input_stencil_op_hcompute_conv_stencil_7_192_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_192_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_193_res = hw_input_stencil_op_hcompute_conv_stencil_7_193_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_193_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_194_res = hw_input_stencil_op_hcompute_conv_stencil_7_194_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_194_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_195_res = hw_input_stencil_op_hcompute_conv_stencil_7_195_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_195_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_196_res = hw_input_stencil_op_hcompute_conv_stencil_7_196_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_196_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_stencil_op_hcompute_conv_stencil_8_153
//	hw_input_stencil_op_hcompute_conv_stencil_8_154
//	hw_input_stencil_op_hcompute_conv_stencil_8_155
//	hw_input_stencil_op_hcompute_conv_stencil_8_156
//	hw_input_stencil_op_hcompute_conv_stencil_8_157
//	hw_input_stencil_op_hcompute_conv_stencil_8_158
//	hw_input_stencil_op_hcompute_conv_stencil_8_159
//	hw_input_stencil_op_hcompute_conv_stencil_8_160
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_8_153
    // hw_input_stencil_op_hcompute_conv_stencil_8_154
    // hw_input_stencil_op_hcompute_conv_stencil_8_155
    // hw_input_stencil_op_hcompute_conv_stencil_8_156
    // hw_input_stencil_op_hcompute_conv_stencil_8_157
    // hw_input_stencil_op_hcompute_conv_stencil_8_158
    // hw_input_stencil_op_hcompute_conv_stencil_8_159
    // hw_input_stencil_op_hcompute_conv_stencil_8_160

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_153_res = hw_input_stencil_op_hcompute_conv_stencil_8_153_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_153_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_154_res = hw_input_stencil_op_hcompute_conv_stencil_8_154_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_154_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_155_res = hw_input_stencil_op_hcompute_conv_stencil_8_155_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_155_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_156_res = hw_input_stencil_op_hcompute_conv_stencil_8_156_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_156_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_157_res = hw_input_stencil_op_hcompute_conv_stencil_8_157_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_157_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_158_res = hw_input_stencil_op_hcompute_conv_stencil_8_158_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_158_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_159_res = hw_input_stencil_op_hcompute_conv_stencil_8_159_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_159_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_160_res = hw_input_stencil_op_hcompute_conv_stencil_8_160_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_160_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_stencil_op_hcompute_conv_stencil_9_225
//	hw_input_stencil_op_hcompute_conv_stencil_9_226
//	hw_input_stencil_op_hcompute_conv_stencil_9_227
//	hw_input_stencil_op_hcompute_conv_stencil_9_228
//	hw_input_stencil_op_hcompute_conv_stencil_9_229
//	hw_input_stencil_op_hcompute_conv_stencil_9_230
//	hw_input_stencil_op_hcompute_conv_stencil_9_231
//	hw_input_stencil_op_hcompute_conv_stencil_9_232
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_9_225
    // hw_input_stencil_op_hcompute_conv_stencil_9_226
    // hw_input_stencil_op_hcompute_conv_stencil_9_227
    // hw_input_stencil_op_hcompute_conv_stencil_9_228
    // hw_input_stencil_op_hcompute_conv_stencil_9_229
    // hw_input_stencil_op_hcompute_conv_stencil_9_230
    // hw_input_stencil_op_hcompute_conv_stencil_9_231
    // hw_input_stencil_op_hcompute_conv_stencil_9_232

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_225_res = hw_input_stencil_op_hcompute_conv_stencil_9_225_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_225_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_226_res = hw_input_stencil_op_hcompute_conv_stencil_9_226_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_226_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_227_res = hw_input_stencil_op_hcompute_conv_stencil_9_227_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_227_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_228_res = hw_input_stencil_op_hcompute_conv_stencil_9_228_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_228_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_229_res = hw_input_stencil_op_hcompute_conv_stencil_9_229_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_229_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_230_res = hw_input_stencil_op_hcompute_conv_stencil_9_230_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_230_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_231_res = hw_input_stencil_op_hcompute_conv_stencil_9_231_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_231_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_232_res = hw_input_stencil_op_hcompute_conv_stencil_9_232_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_232_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_0
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_0_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_input_stencil_op_hcompute_hw_input_stencil_0_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, dynamic_address);
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
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



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
  // # of banks: 1
  hw_kernel_stencil_all_inputs_to_all_outputs_cache hw_kernel_stencil_all_inputs_to_all_outputs;
};



inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21_write(hw_uint<16>& hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
  hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21, (hw_kernel_s0_z - 0) * 1 + (hw_kernel_s0_w - 0) * 8 + (hw_kernel_s0_x - 0) * 128 + (hw_kernel_s0_y - 0) * 384);
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_269_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_269 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_270_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_270 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_271_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_271 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_272_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_272 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_273_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_273 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_274_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_274 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_275_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_275 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_276_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_10_276 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 9, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (9 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_287_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_287 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_288_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_288 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_289_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_289 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_290_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_290 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_291_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_291 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_292_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_292 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_293_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_293 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_294_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_11_294 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 10, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (10 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_179_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_179 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_180_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_180 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_181_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_181 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_182_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_182 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_183_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_183 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_184_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_184 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_185_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_185 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_186_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_12_186 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 11, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (11 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_87_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_87 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_88_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_88 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_89_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_89 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_90_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_90 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_91_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_91 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_92_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_92 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_93_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_93 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_94_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_13_94 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 12, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (12 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_105_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_105 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_106_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_106 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_107_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_107 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_108_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_108 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_109_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_109 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_110_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_110 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_111_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_111 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_112_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_14_112 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 13, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (13 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_123_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_123 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_124_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_124 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_125_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_125 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_126_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_126 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_127_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_127 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_128_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_128 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_129_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_129 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_130_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_15_130 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 14, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (14 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_141_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_141 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_142_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_142 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_143_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_143 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_144_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_144 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_145_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_145 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_146_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_146 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_147_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_147 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_148_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_16_148 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 15, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (15 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_13_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_13 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_14_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_14 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_15_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_15 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_16_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_16 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_17_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_17 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_18_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_18 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_19_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_19 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_20_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_1_20 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 0, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (0 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_33_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_33 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_34_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_34 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_35_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_35 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_36_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_36 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_37_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_37 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_38_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_38 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_39_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_39 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_40_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_2_40 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 1, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (1 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_51_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_51 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_52_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_52 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_53_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_53 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_54_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_54 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_55_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_55 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_56_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_56 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_57_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_57 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_58_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_3_58 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 2, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (2 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_69_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_69 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_70_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_70 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_71_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_71 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_72_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_72 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_73_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_73 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_74_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_74 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_75_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_75 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_76_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_4_76 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 3, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (3 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_251_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_251 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_252_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_252 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_253_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_253 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_254_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_254 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_255_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_255 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_256_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_256 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_257_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_257 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_5_258_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_5_258 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 4, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (4 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_215_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_215 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_216_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_216 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_217_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_217 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_218_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_218 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_219_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_219 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_220_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_220 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_221_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_221 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_222_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_6_222 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 5, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (5 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_197_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_197 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_198_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_198 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_199_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_199 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_200_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_200 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_201_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_201 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_202_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_202 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_203_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_203 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_204_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_7_204 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 6, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (6 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_161_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_161 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_162_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_162 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_163_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_163 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_164_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_164 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_165_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_165 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_166_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_166 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_167_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_167 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_168_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_8_168 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 7, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (7 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_233_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_233 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[0, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (0 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_234_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_234 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[1, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_235_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_235 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[2, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (2 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_236_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_236 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[3, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (3 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_237_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_237 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[4, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (4 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_238_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_238 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[5, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (5 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_239_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_239 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[6, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (6 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

inline hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_240_select(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_kernel_stencil_op_hcompute_conv_stencil_9_240 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_kernel_stencil[7, 8, conv_s1_r_x, conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  auto value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21 = hw_kernel_stencil.hw_kernel_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (7 - 0) * 1 + (8 - 0) * 8 + (conv_s1_r_x - 0) * 128 + (conv_s1_r_y - 0) * 384);
  return value_hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_269
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_270
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_271
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_272
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_273
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_274
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_275
//	hw_kernel_stencil_op_hcompute_conv_stencil_10_276
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_269
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_270
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_271
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_272
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_273
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_274
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_275
    // hw_kernel_stencil_op_hcompute_conv_stencil_10_276

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_269_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_269_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_269_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_270_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_270_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_270_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_271_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_271_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_271_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_272_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_272_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_272_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_273_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_273_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_273_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_274_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_274_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_274_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_275_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_275_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_275_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_10_276_res = hw_kernel_stencil_op_hcompute_conv_stencil_10_276_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_10_276_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_287
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_288
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_289
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_290
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_291
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_292
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_293
//	hw_kernel_stencil_op_hcompute_conv_stencil_11_294
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_287
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_288
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_289
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_290
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_291
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_292
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_293
    // hw_kernel_stencil_op_hcompute_conv_stencil_11_294

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_287_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_287_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_287_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_288_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_288_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_288_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_289_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_289_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_289_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_290_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_290_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_290_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_291_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_291_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_291_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_292_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_292_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_292_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_293_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_293_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_293_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_11_294_res = hw_kernel_stencil_op_hcompute_conv_stencil_11_294_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_11_294_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_179
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_180
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_181
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_182
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_183
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_184
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_185
//	hw_kernel_stencil_op_hcompute_conv_stencil_12_186
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_179
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_180
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_181
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_182
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_183
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_184
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_185
    // hw_kernel_stencil_op_hcompute_conv_stencil_12_186

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_179_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_179_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_179_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_180_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_180_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_180_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_181_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_181_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_181_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_182_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_182_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_182_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_183_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_183_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_183_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_184_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_184_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_184_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_185_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_185_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_185_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_12_186_res = hw_kernel_stencil_op_hcompute_conv_stencil_12_186_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_12_186_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_87
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_88
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_89
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_90
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_91
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_92
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_93
//	hw_kernel_stencil_op_hcompute_conv_stencil_13_94
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_87
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_88
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_89
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_90
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_91
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_92
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_93
    // hw_kernel_stencil_op_hcompute_conv_stencil_13_94

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_87_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_87_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_87_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_88_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_88_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_88_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_89_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_89_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_89_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_90_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_90_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_90_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_91_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_91_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_91_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_92_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_92_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_92_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_93_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_93_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_93_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_13_94_res = hw_kernel_stencil_op_hcompute_conv_stencil_13_94_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_13_94_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_105
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_106
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_107
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_108
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_109
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_110
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_111
//	hw_kernel_stencil_op_hcompute_conv_stencil_14_112
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_105
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_106
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_107
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_108
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_109
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_110
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_111
    // hw_kernel_stencil_op_hcompute_conv_stencil_14_112

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_105_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_105_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_105_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_106_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_106_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_106_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_107_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_107_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_107_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_108_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_108_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_108_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_109_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_109_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_109_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_110_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_110_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_110_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_111_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_111_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_111_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_14_112_res = hw_kernel_stencil_op_hcompute_conv_stencil_14_112_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_14_112_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_123
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_124
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_125
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_126
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_127
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_128
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_129
//	hw_kernel_stencil_op_hcompute_conv_stencil_15_130
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_123
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_124
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_125
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_126
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_127
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_128
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_129
    // hw_kernel_stencil_op_hcompute_conv_stencil_15_130

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_123_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_123_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_123_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_124_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_124_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_124_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_125_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_125_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_125_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_126_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_126_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_126_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_127_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_127_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_127_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_128_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_128_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_128_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_129_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_129_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_129_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_15_130_res = hw_kernel_stencil_op_hcompute_conv_stencil_15_130_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_15_130_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_141
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_142
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_143
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_144
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_145
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_146
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_147
//	hw_kernel_stencil_op_hcompute_conv_stencil_16_148
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_141
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_142
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_143
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_144
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_145
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_146
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_147
    // hw_kernel_stencil_op_hcompute_conv_stencil_16_148

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_141_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_141_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_141_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_142_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_142_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_142_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_143_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_143_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_143_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_144_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_144_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_144_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_145_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_145_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_145_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_146_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_146_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_146_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_147_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_147_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_147_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_16_148_res = hw_kernel_stencil_op_hcompute_conv_stencil_16_148_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_16_148_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_13
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_14
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_15
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_16
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_17
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_18
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_19
//	hw_kernel_stencil_op_hcompute_conv_stencil_1_20
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_13
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_14
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_15
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_16
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_17
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_18
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_19
    // hw_kernel_stencil_op_hcompute_conv_stencil_1_20

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_13_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_13_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_13_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_14_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_14_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_14_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_15_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_15_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_15_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_16_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_16_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_16_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_17_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_17_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_17_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_18_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_18_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_18_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_19_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_19_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_19_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_1_20_res = hw_kernel_stencil_op_hcompute_conv_stencil_1_20_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_1_20_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_33
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_34
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_35
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_36
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_37
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_38
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_39
//	hw_kernel_stencil_op_hcompute_conv_stencil_2_40
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_33
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_34
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_35
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_36
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_37
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_38
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_39
    // hw_kernel_stencil_op_hcompute_conv_stencil_2_40

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_33_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_33_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_33_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_34_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_34_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_34_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_35_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_35_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_35_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_36_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_36_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_36_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_37_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_37_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_37_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_38_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_38_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_38_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_39_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_39_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_39_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_2_40_res = hw_kernel_stencil_op_hcompute_conv_stencil_2_40_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_2_40_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_51
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_52
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_53
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_54
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_55
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_56
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_57
//	hw_kernel_stencil_op_hcompute_conv_stencil_3_58
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_51
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_52
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_53
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_54
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_55
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_56
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_57
    // hw_kernel_stencil_op_hcompute_conv_stencil_3_58

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_51_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_51_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_51_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_52_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_52_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_52_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_53_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_53_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_53_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_54_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_54_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_54_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_55_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_55_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_55_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_56_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_56_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_56_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_57_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_57_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_57_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_3_58_res = hw_kernel_stencil_op_hcompute_conv_stencil_3_58_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_3_58_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_69
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_70
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_71
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_72
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_73
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_74
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_75
//	hw_kernel_stencil_op_hcompute_conv_stencil_4_76
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_69
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_70
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_71
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_72
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_73
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_74
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_75
    // hw_kernel_stencil_op_hcompute_conv_stencil_4_76

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_69_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_69_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_69_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_70_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_70_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_70_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_71_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_71_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_71_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_72_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_72_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_72_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_73_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_73_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_73_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_74_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_74_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_74_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_75_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_75_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_75_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_4_76_res = hw_kernel_stencil_op_hcompute_conv_stencil_4_76_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_4_76_res);
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
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_215
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_216
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_217
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_218
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_219
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_220
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_221
//	hw_kernel_stencil_op_hcompute_conv_stencil_6_222
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_215
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_216
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_217
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_218
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_219
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_220
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_221
    // hw_kernel_stencil_op_hcompute_conv_stencil_6_222

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_215_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_215_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_215_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_216_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_216_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_216_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_217_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_217_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_217_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_218_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_218_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_218_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_219_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_219_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_219_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_220_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_220_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_220_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_221_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_221_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_221_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_6_222_res = hw_kernel_stencil_op_hcompute_conv_stencil_6_222_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_6_222_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_197
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_198
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_199
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_200
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_201
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_202
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_203
//	hw_kernel_stencil_op_hcompute_conv_stencil_7_204
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_197
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_198
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_199
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_200
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_201
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_202
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_203
    // hw_kernel_stencil_op_hcompute_conv_stencil_7_204

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_197_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_197_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_197_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_198_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_198_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_198_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_199_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_199_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_199_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_200_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_200_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_200_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_201_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_201_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_201_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_202_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_202_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_202_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_203_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_203_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_203_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_7_204_res = hw_kernel_stencil_op_hcompute_conv_stencil_7_204_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_7_204_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_161
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_162
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_163
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_164
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_165
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_166
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_167
//	hw_kernel_stencil_op_hcompute_conv_stencil_8_168
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_161
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_162
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_163
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_164
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_165
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_166
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_167
    // hw_kernel_stencil_op_hcompute_conv_stencil_8_168

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_161_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_161_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_161_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_162_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_162_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_162_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_163_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_163_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_163_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_164_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_164_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_164_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_165_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_165_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_165_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_166_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_166_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_166_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_167_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_167_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_167_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_8_168_res = hw_kernel_stencil_op_hcompute_conv_stencil_8_168_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_8_168_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_233
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_234
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_235
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_236
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_237
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_238
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_239
//	hw_kernel_stencil_op_hcompute_conv_stencil_9_240
inline hw_uint<128> hw_kernel_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_kernel_stencil_cache& hw_kernel_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_233
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_234
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_235
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_236
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_237
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_238
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_239
    // hw_kernel_stencil_op_hcompute_conv_stencil_9_240

	hw_uint<128> result;
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_233_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_233_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_233_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_234_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_234_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_234_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_235_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_235_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_235_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_236_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_236_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_236_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_237_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_237_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_237_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_238_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_238_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_238_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_239_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_239_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_239_res);
	hw_uint<16> hw_kernel_stencil_op_hcompute_conv_stencil_9_240_res = hw_kernel_stencil_op_hcompute_conv_stencil_9_240_select(hw_kernel_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_kernel_stencil_op_hcompute_conv_stencil_9_240_res);
	return result;
}

// op_hcompute_hw_kernel_stencil_write
//	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21
inline void hw_kernel_stencil_op_hcompute_hw_kernel_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_kernel_stencil_write, hw_kernel_stencil_cache& hw_kernel_stencil, int root, int hw_kernel_s0_y, int hw_kernel_s0_x, int hw_kernel_s0_w, int hw_kernel_s0_z, int dynamic_address) {
	hw_uint<16> hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21_res = op_hcompute_hw_kernel_stencil_write.extract<0, 15>();
	hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21_write(hw_kernel_stencil_op_hcompute_hw_kernel_stencil_21_res, hw_kernel_stencil, root, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z, dynamic_address);
}



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

// schedule: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 14, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 6, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 5, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 8, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> [0, 0, 3, conv_s1_y, 0, 0, 0, 0, 0, conv_stencil_ld2, 0, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15; op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 11, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 1, 0, 0, 0, 0, conv_stencil_ld6, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15; op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 10, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 15, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 2, conv_s0_y, 0, conv_s0_x, 0, conv_s0_w, 0, 0, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15; op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 4, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 12, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 1, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 7, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 13, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 2, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 3, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0, 0, 0] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7; op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7; op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2; op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 9, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
//   { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 14, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_15(((i12 == 0) && (i11 == 0) && (-14 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 6, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_7(((i12 == 0) && (i11 == 0) && (-6 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 5, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_6(((i12 == 0) && (i11 == 0) && (-5 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 8, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_9(((i12 == 0) && (i11 == 0) && (-8 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { load_to_conv_stencil_rb_at_conv_s1_x3[root = 0, conv_s1_y, conv_stencil_ld0 = 0, conv_stencil_ld1 = 0, conv_stencil_ld2] -> [0, 0, 3, conv_s1_y, 0, 0, 0, 0, 0, conv_stencil_ld2, 0, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_stencil_ld2 <= 15 }
// Condition for load_to_conv_stencil_rb_at_conv_s1_x3(((i12 == 0) && (i11 == 0) && (i10 == 0) && (i8 == 0) && (i7 == 0) && (i6 == 0) && (i5 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i9 >= 0) && (15 - i9 >= 0)))
//   { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 11, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_12(((i12 == 0) && (i11 == 0) && (-11 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { load_to_conv_stencil_rb_at_conv_s1_x7[root = 0, conv_s1_y, conv_s1_x, conv_stencil_ld4 = 0, conv_stencil_ld5 = 0, conv_stencil_ld6] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 1, 0, 0, 0, 0, conv_stencil_ld6, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_stencil_ld6 <= 15 }
// Condition for load_to_conv_stencil_rb_at_conv_s1_x7(((i12 == 0) && (i10 == 0) && (i9 == 0) && (i8 == 0) && (i7 == 0) && (-1 + i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i11 >= 0) && (15 - i11 >= 0)))
//   { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 10, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_11(((i12 == 0) && (i11 == 0) && (-10 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 15, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_16(((i12 == 0) && (i11 == 0) && (-15 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 0, 2, conv_s0_y, 0, conv_s0_x, 0, conv_s0_w, 0, 0, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
// Condition for op_hcompute_conv_stencil(((i12 == 0) && (i11 == 0) && (i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (15 - i7 >= 0)))
//   { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 4, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_5(((i12 == 0) && (i11 == 0) && (-4 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 12, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_13(((i12 == 0) && (i11 == 0) && (-12 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 1, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_2(((i12 == 0) && (i11 == 0) && (-1 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 7, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_8(((i12 == 0) && (i11 == 0) && (-7 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 13, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_14(((i12 == 0) && (i11 == 0) && (-13 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 2, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_3(((i12 == 0) && (i11 == 0) && (-2 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 3, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_4(((i12 == 0) && (i11 == 0) && (-3 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_w, 0, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0, 0, 0, 0, 0] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
// Condition for op_hcompute_hw_output_stencil(((i12 == 0) && (i11 == 0) && (i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-4 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (15 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (27 - i7 >= 0)))
//   { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0, hw_input_s0_z, 0, 0, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
// Condition for op_hcompute_hw_input_stencil(((i12 == 0) && (i11 == 0) && (i10 == 0) && (i9 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (29 - i3 >= 0) && (i5 >= 0) && (29 - i5 >= 0) && (i7 >= 0) && (7 - i7 >= 0)))
//   { op_hcompute_hw_kernel_stencil[root = 0, hw_kernel_s0_y, hw_kernel_s0_x, hw_kernel_s0_w, hw_kernel_s0_z] -> [0, 0, 1, hw_kernel_s0_y, 0, hw_kernel_s0_x, 0, hw_kernel_s0_w, 0, hw_kernel_s0_z, 0, 0, 0] : 0 <= hw_kernel_s0_y <= 2 and 0 <= hw_kernel_s0_x <= 2 and 0 <= hw_kernel_s0_w <= 15 and 0 <= hw_kernel_s0_z <= 7 }
// Condition for op_hcompute_hw_kernel_stencil(((i12 == 0) && (i11 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (2 - i3 >= 0) && (i5 >= 0) && (2 - i5 >= 0) && (i7 >= 0) && (15 - i7 >= 0) && (i9 >= 0) && (7 - i9 >= 0)))
//   { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 0, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_1(((i12 == 0) && (i11 == 0) && (i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))
//   { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [0, 0, 3, conv_s1_y, 1, conv_s1_x, 0, conv_s1_r_y, 0, conv_s1_r_x, 9, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
// Condition for op_hcompute_conv_stencil_10(((i12 == 0) && (i11 == 0) && (-9 + i10 == 0) && (i8 == 0) && (i6 == 0) && (-1 + i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (27 - i3 >= 0) && (i5 >= 0) && (27 - i5 >= 0) && (i7 >= 0) && (2 - i7 >= 0) && (i9 >= 0) && (2 - i9 >= 0)))

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
  for (int c3 = 0; c3 <= 27; c3 += 1) {
    for (int c9 = 0; c9 <= 15; c9 += 1)
      load_to_conv_stencil_rb_at_conv_s1_x3(0, c3, 0, 0, c9);
    for (int c5 = 0; c5 <= 27; c5 += 1) {
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
      for (int c11 = 0; c11 <= 15; c11 += 1)
        load_to_conv_stencil_rb_at_conv_s1_x7(0, c3, c5, 0, 0, c11);
    }
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
	  for (int c3 = 0; c3 <= 27; c3 += 1) {
	    for (int c9 = 0; c9 <= 15; c9 += 1)
	      load_to_conv_stencil_rb_at_conv_s1_x3(conv_stencil /* buf name */, conv_stencil_rb_at_conv_s1_x, 0, c3, 0, 0, c9);
	    for (int c5 = 0; c5 <= 27; c5 += 1) {
	      for (int c7 = 0; c7 <= 2; c7 += 1)
	        for (int c9 = 0; c9 <= 2; c9 += 1) {
	          op_hcompute_conv_stencil_1(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_2(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_3(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_4(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_5(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_6(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_7(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_8(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_9(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_10(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_11(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_12(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_13(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_14(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_15(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	          op_hcompute_conv_stencil_16(conv_stencil_rb_at_conv_s1_x /* buf name */, hw_input_stencil /* buf name */, hw_kernel_stencil /* buf name */, 0, c3, c5, c7, c9);
	        }
	      for (int c11 = 0; c11 <= 15; c11 += 1)
	        load_to_conv_stencil_rb_at_conv_s1_x7(conv_stencil_rb_at_conv_s1_x /* buf name */, 0, c3, c5, 0, 0, c11);
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

