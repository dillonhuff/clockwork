#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: conv_3_3_compute.h
#include "conv_3_3_compute.h"

struct conv_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 61]}
  hw_uint<16> RAM[62];
  inline hw_uint<16> read(int d0) {
    return RAM[d0];
  }



	inline void write(const hw_uint<16> value, int d0) {
    RAM[d0] = value;
  }

};

struct conv_stencil_cache {
  // Reader addrs...
    // { hcompute_hw_output_stencil[root = 0, hw_output_s0_x_xo] -> conv_stencil[hw_output_s0_x_xo] : 0 <= hw_output_s0_x_xo <= 61 }
  // # of banks: 1
  conv_stencil_all_inputs_to_all_outputs_cache conv_stencil_all_inputs_to_all_outputs;
};



inline void conv_stencil_hcompute_conv_stencil_1_4_write(hw_uint<16>& conv_stencil_hcompute_conv_stencil_1_4, conv_stencil_cache& conv_stencil, int root, int hw_output_s0_x_xo, int dynamic_address) {
  conv_stencil.conv_stencil_all_inputs_to_all_outputs.write(conv_stencil_hcompute_conv_stencil_1_4, ((1*hw_output_s0_x_xo)) - 0);
}

inline hw_uint<16> conv_stencil_hcompute_hw_output_stencil_1_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_x_xo, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_hcompute_hw_output_stencil_1 read pattern: { hcompute_hw_output_stencil[root = 0, hw_output_s0_x_xo] -> conv_stencil[hw_output_s0_x_xo] : 0 <= hw_output_s0_x_xo <= 61 }
  auto value_conv_stencil_hcompute_conv_stencil_1_4 = conv_stencil.conv_stencil_all_inputs_to_all_outputs.read(((1*hw_output_s0_x_xo)) - 0);
  return value_conv_stencil_hcompute_conv_stencil_1_4;
  return 0;
}

// # of bundles = 2
// hcompute_conv_stencil_1_write
//	conv_stencil_hcompute_conv_stencil_1_4
inline void conv_stencil_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int hw_output_s0_x_xo, int dynamic_address) {
	hw_uint<16> conv_stencil_hcompute_conv_stencil_1_4_res = hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_hcompute_conv_stencil_1_4_write(conv_stencil_hcompute_conv_stencil_1_4_res, conv_stencil, root, hw_output_s0_x_xo, dynamic_address);
}

// hcompute_hw_output_stencil_read
//	conv_stencil_hcompute_hw_output_stencil_1
inline hw_uint<16> conv_stencil_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_x_xo, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_hcompute_hw_output_stencil_1

	hw_uint<16> result;
	hw_uint<16> conv_stencil_hcompute_hw_output_stencil_1_res = conv_stencil_hcompute_hw_output_stencil_1_select(conv_stencil, root, hw_output_s0_x_xo, dynamic_address);
	set_at<0, 16>(result, conv_stencil_hcompute_hw_output_stencil_1_res);
	return result;
}

struct conv_stencil_init_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 61]}
  hw_uint<16> RAM[62];
  inline hw_uint<16> read(int d0) {
    return RAM[d0];
  }



	inline void write(const hw_uint<16> value, int d0) {
    RAM[d0] = value;
  }

};

struct conv_stencil_init_cache {
  // Reader addrs...
    // { hcompute_conv_stencil_1[root = 0, hw_output_s0_x_xo] -> conv_stencil_init[hw_output_s0_x_xo] : 0 <= hw_output_s0_x_xo <= 61 }
  // # of banks: 1
  conv_stencil_init_all_inputs_to_all_outputs_cache conv_stencil_init_all_inputs_to_all_outputs;
};



inline void conv_stencil_init_hcompute_conv_stencil_7_write(hw_uint<16>& conv_stencil_init_hcompute_conv_stencil_7, conv_stencil_init_cache& conv_stencil_init, int root, int hw_output_s0_x_xo, int dynamic_address) {
  conv_stencil_init.conv_stencil_init_all_inputs_to_all_outputs.write(conv_stencil_init_hcompute_conv_stencil_7, ((1*hw_output_s0_x_xo)) - 0);
}

inline hw_uint<16> conv_stencil_init_hcompute_conv_stencil_1_5_select(conv_stencil_init_cache& conv_stencil_init, int root, int hw_output_s0_x_xo, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_init_hcompute_conv_stencil_1_5 read pattern: { hcompute_conv_stencil_1[root = 0, hw_output_s0_x_xo] -> conv_stencil_init[hw_output_s0_x_xo] : 0 <= hw_output_s0_x_xo <= 61 }
  auto value_conv_stencil_init_hcompute_conv_stencil_7 = conv_stencil_init.conv_stencil_init_all_inputs_to_all_outputs.read(((1*hw_output_s0_x_xo)) - 0);
  return value_conv_stencil_init_hcompute_conv_stencil_7;
  return 0;
}

// # of bundles = 2
// hcompute_conv_stencil_1_read
//	conv_stencil_init_hcompute_conv_stencil_1_5
inline hw_uint<16> conv_stencil_init_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_init_cache& conv_stencil_init, int root, int hw_output_s0_x_xo, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_init_hcompute_conv_stencil_1_5

	hw_uint<16> result;
	hw_uint<16> conv_stencil_init_hcompute_conv_stencil_1_5_res = conv_stencil_init_hcompute_conv_stencil_1_5_select(conv_stencil_init, root, hw_output_s0_x_xo, dynamic_address);
	set_at<0, 16>(result, conv_stencil_init_hcompute_conv_stencil_1_5_res);
	return result;
}

// hcompute_conv_stencil_write
//	conv_stencil_init_hcompute_conv_stencil_7
inline void conv_stencil_init_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& hcompute_conv_stencil_write, conv_stencil_init_cache& conv_stencil_init, int root, int hw_output_s0_x_xo, int dynamic_address) {
	hw_uint<16> conv_stencil_init_hcompute_conv_stencil_7_res = hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_init_hcompute_conv_stencil_7_write(conv_stencil_init_hcompute_conv_stencil_7_res, conv_stencil_init, root, hw_output_s0_x_xo, dynamic_address);
}

struct hw_input_copy_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63]}
  hw_uint<16> RAM[64];
  inline hw_uint<16> read(int d0) {
    return RAM[d0];
  }



	inline void write(const hw_uint<16> value, int d0) {
    RAM[d0] = value;
  }

};

struct hw_input_copy_stencil_cache {
  // Reader addrs...
    // { hcompute_conv_stencil_1[root = 0, hw_output_s0_x_xo] -> hw_input_copy_stencil[hw_output_s0_x_xo] : 0 <= hw_output_s0_x_xo <= 61 }
  // # of banks: 1
  hw_input_copy_stencil_all_inputs_to_all_outputs_cache hw_input_copy_stencil_all_inputs_to_all_outputs;
};



inline void hw_input_copy_stencil_hcompute_hw_input_copy_stencil_2_write(hw_uint<16>& hw_input_copy_stencil_hcompute_hw_input_copy_stencil_2, hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_input_copy_s0_x, int dynamic_address) {
  hw_input_copy_stencil.hw_input_copy_stencil_all_inputs_to_all_outputs.write(hw_input_copy_stencil_hcompute_hw_input_copy_stencil_2, ((1*hw_input_copy_s0_x)) - 0);
}

inline hw_uint<16> hw_input_copy_stencil_hcompute_conv_stencil_1_6_select(hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_output_s0_x_xo, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_copy_stencil_hcompute_conv_stencil_1_6 read pattern: { hcompute_conv_stencil_1[root = 0, hw_output_s0_x_xo] -> hw_input_copy_stencil[hw_output_s0_x_xo] : 0 <= hw_output_s0_x_xo <= 61 }
  auto value_hw_input_copy_stencil_hcompute_hw_input_copy_stencil_2 = hw_input_copy_stencil.hw_input_copy_stencil_all_inputs_to_all_outputs.read(((1*hw_output_s0_x_xo)) - 0);
  return value_hw_input_copy_stencil_hcompute_hw_input_copy_stencil_2;
  return 0;
}

// # of bundles = 2
// hcompute_conv_stencil_1_read
//	hw_input_copy_stencil_hcompute_conv_stencil_1_6
inline hw_uint<16> hw_input_copy_stencil_hcompute_conv_stencil_1_read_bundle_read(hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_output_s0_x_xo, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_copy_stencil_hcompute_conv_stencil_1_6

	hw_uint<16> result;
	hw_uint<16> hw_input_copy_stencil_hcompute_conv_stencil_1_6_res = hw_input_copy_stencil_hcompute_conv_stencil_1_6_select(hw_input_copy_stencil, root, hw_output_s0_x_xo, dynamic_address);
	set_at<0, 16>(result, hw_input_copy_stencil_hcompute_conv_stencil_1_6_res);
	return result;
}

// hcompute_hw_input_copy_stencil_write
//	hw_input_copy_stencil_hcompute_hw_input_copy_stencil_2
inline void hw_input_copy_stencil_hcompute_hw_input_copy_stencil_write_bundle_write(hw_uint<16>& hcompute_hw_input_copy_stencil_write, hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_input_copy_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_copy_stencil_hcompute_hw_input_copy_stencil_2_res = hcompute_hw_input_copy_stencil_write.extract<0, 15>();
	hw_input_copy_stencil_hcompute_hw_input_copy_stencil_2_write(hw_input_copy_stencil_hcompute_hw_input_copy_stencil_2_res, hw_input_copy_stencil, root, hw_input_copy_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 3008 bits


// Operation logic
inline void hcompute_hw_input_copy_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil, hw_input_copy_stencil_cache& hw_input_copy_stencil, int root, int hw_input_copy_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil_hw_input_copy_s0_x_value = hw_input_stencil.read();
	auto compute_result = hcompute_hw_input_copy_stencil(hw_input_stencil_hw_input_copy_s0_x_value);
	// Produce: hw_input_copy_stencil
	hw_input_copy_stencil_hcompute_hw_input_copy_stencil_write_bundle_write(/* arg names */compute_result, hw_input_copy_stencil, root, hw_input_copy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_conv_stencil(conv_stencil_init_cache& conv_stencil_init, int root, int hw_output_s0_x_xo) {
  // Dynamic address computation

	auto compute_result = hcompute_conv_stencil();
	// Produce: conv_stencil_init
	conv_stencil_init_hcompute_conv_stencil_write_bundle_write(/* arg names */compute_result, conv_stencil_init, root, hw_output_s0_x_xo, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_conv_stencil_1(conv_stencil_init_cache& conv_stencil_init, hw_input_copy_stencil_cache& hw_input_copy_stencil, conv_stencil_cache& conv_stencil, int root, int hw_output_s0_x_xo) {
  // Dynamic address computation

	// Consume: conv_stencil_init
	auto conv_stencil_init_hw_output_s0_x_xo_value = conv_stencil_init_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_init/* source_delay */, root, hw_output_s0_x_xo, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_copy_stencil
	auto hw_input_copy_stencil_hw_output_s0_x_xo_value = hw_input_copy_stencil_hcompute_conv_stencil_1_read_bundle_read(hw_input_copy_stencil/* source_delay */, root, hw_output_s0_x_xo, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_conv_stencil_1(conv_stencil_init_hw_output_s0_x_xo_value, hw_input_copy_stencil_hw_output_s0_x_xo_value);
	// Produce: conv_stencil
	conv_stencil_hcompute_conv_stencil_1_write_bundle_write(/* arg names */compute_result, conv_stencil, root, hw_output_s0_x_xo, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_hw_output_stencil(conv_stencil_cache& conv_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_x_xo) {
  // Dynamic address computation

	// Consume: conv_stencil
	auto conv_stencil_hw_output_s0_x_xo_value = conv_stencil_hcompute_hw_output_stencil_read_bundle_read(conv_stencil/* source_delay */, root, hw_output_s0_x_xo, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(conv_stencil_hw_output_s0_x_xo_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_mini_conv_halide_fixed(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_mini_conv_halide_fixed_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  conv_stencil_cache conv_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  conv_stencil_init_cache conv_stencil_init;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_copy_stencil_cache hw_input_copy_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { hcompute_hw_input_copy_stencil[root = 0, hw_input_copy_s0_x] -> [0, 0, 0, hw_input_copy_s0_x, 0] : 0 <= hw_input_copy_s0_x <= 63; hcompute_conv_stencil_1[root = 0, hw_output_s0_x_xo] -> [0, 0, 1, hw_output_s0_x_xo, 1] : 0 <= hw_output_s0_x_xo <= 61; hcompute_hw_output_stencil[root = 0, hw_output_s0_x_xo] -> [0, 0, 1, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_x_xo <= 61; hcompute_conv_stencil[root = 0, hw_output_s0_x_xo] -> [0, 0, 1, hw_output_s0_x_xo, 0] : 0 <= hw_output_s0_x_xo <= 61 }
//   { hcompute_hw_input_copy_stencil[root = 0, hw_input_copy_s0_x] -> [0, 0, 0, hw_input_copy_s0_x, 0] : 0 <= hw_input_copy_s0_x <= 63 }
// Condition for hcompute_hw_input_copy_stencil(((((1*i4)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((63 + -1*i3)) >= 0)))
//   { hcompute_conv_stencil_1[root = 0, hw_output_s0_x_xo] -> [0, 0, 1, hw_output_s0_x_xo, 1] : 0 <= hw_output_s0_x_xo <= 61 }
// Condition for hcompute_conv_stencil_1(((((-1 + 1*i4)) == 0) && (((-1 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((61 + -1*i3)) >= 0)))
//   { hcompute_hw_output_stencil[root = 0, hw_output_s0_x_xo] -> [0, 0, 1, hw_output_s0_x_xo, 2] : 0 <= hw_output_s0_x_xo <= 61 }
// Condition for hcompute_hw_output_stencil(((((-2 + 1*i4)) == 0) && (((-1 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((61 + -1*i3)) >= 0)))
//   { hcompute_conv_stencil[root = 0, hw_output_s0_x_xo] -> [0, 0, 1, hw_output_s0_x_xo, 0] : 0 <= hw_output_s0_x_xo <= 61 }
// Condition for hcompute_conv_stencil(((((1*i4)) == 0) && (((-1 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((61 + -1*i3)) >= 0)))

	{
	  for (int c3 = 0; c3 <= 63; c3 += 1)
	    hcompute_hw_input_copy_stencil(hw_input_stencil /* buf name */, hw_input_copy_stencil, 0, c3);
	  for (int c3 = 0; c3 <= 61; c3 += 1) {
	    hcompute_conv_stencil(conv_stencil_init, 0, c3);
	    hcompute_conv_stencil_1(conv_stencil_init /* buf name */, hw_input_copy_stencil /* buf name */, conv_stencil, 0, c3);
	    hcompute_hw_output_stencil(conv_stencil /* buf name */, hw_output_stencil, 0, c3);
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_mini_conv_halide_fixed_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_mini_conv_halide_fixed(hw_input_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { hcompute_hw_input_copy_stencil[root = 0, hw_input_copy_s0_x] -> hw_input_stencil[hw_input_copy_s0_x] : 0 <= hw_input_copy_s0_x <= 63 }
const int hcompute_hw_input_copy_stencil_read_pipe0_num_transfers = 64;
  // { hcompute_hw_output_stencil[root = 0, hw_output_s0_x_xo] -> hw_output_stencil[hw_output_s0_x_xo] : 0 <= hw_output_s0_x_xo <= 61 }
const int hcompute_hw_output_stencil_write_pipe0_num_transfers = 62;


extern "C" {

void unoptimized_mini_conv_halide_fixed_accel(hw_uint<16>* hcompute_hw_input_copy_stencil_read_pipe0, hw_uint<16>* hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = hcompute_hw_input_copy_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = hcompute_hw_input_copy_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > hcompute_hw_input_copy_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(hcompute_hw_input_copy_stencil_read_pipe0, hcompute_hw_input_copy_stencil_read_pipe0_channel, hcompute_hw_input_copy_stencil_read_pipe0_num_transfers*size);

  unoptimized_mini_conv_halide_fixed_wrapper(hcompute_hw_input_copy_stencil_read_pipe0_channel, hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(hcompute_hw_output_stencil_write_pipe0, hcompute_hw_output_stencil_write_pipe0_channel, hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_mini_conv_halide_fixed_rdai(HWStream<hw_uint<16> >& hcompute_hw_input_copy_stencil_read_pipe0, HWStream<hw_uint<16> >&  hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = hcompute_hw_input_copy_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_mini_conv_halide_fixed(hcompute_hw_input_copy_stencil_read_pipe0, hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

