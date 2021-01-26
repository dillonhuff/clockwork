#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: pointwise_compute.h
#include "pointwise_compute.h"

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
    // { op_hcompute_mult_stencil[root = 0, mult_s0_y, mult_s0_x] -> hw_input_global_wrapper_stencil[mult_s0_y, mult_s0_x] : 0 <= mult_s0_y <= 63 and 0 <= mult_s0_x <= 63 }
  // # of banks: 1
  hw_input_global_wrapper_stencil_all_inputs_to_all_outputs_cache hw_input_global_wrapper_stencil_all_inputs_to_all_outputs;
};



inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_write(hw_uint<16>& hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
  hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4, ((1*hw_input_global_wrapper_s0_y)) - 0, ((1*hw_input_global_wrapper_s0_x)) - 0);
}

inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_select(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int mult_s0_y, int mult_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1 read pattern: { op_hcompute_mult_stencil[root = 0, mult_s0_y, mult_s0_x] -> hw_input_global_wrapper_stencil[mult_s0_y, mult_s0_x] : 0 <= mult_s0_y <= 63 and 0 <= mult_s0_x <= 63 }
  auto value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4 = hw_input_global_wrapper_stencil.hw_input_global_wrapper_stencil_all_inputs_to_all_outputs.read(((1*mult_s0_y)) - 0, ((1*mult_s0_x)) - 0);
  return value_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4;
  return 0;
}

// # of bundles = 2
// op_hcompute_hw_input_global_wrapper_stencil_write
//	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4
inline void hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_stencil_write, hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_res = op_hcompute_hw_input_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_4_res, hw_input_global_wrapper_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x, dynamic_address);
}

// op_hcompute_mult_stencil_read
//	hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1
inline hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_bundle_read(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, int root, int mult_s0_y, int mult_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_res = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_select(hw_input_global_wrapper_stencil, root, mult_s0_y, mult_s0_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_1_res);
	return result;
}

struct mult_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63], [0, 63]}
  hw_uint<16> RAM[64][64];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct mult_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> mult_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 63 and 0 <= hw_output_s0_x_xi <= 63 }
  // # of banks: 1
  mult_stencil_all_inputs_to_all_outputs_cache mult_stencil_all_inputs_to_all_outputs;
};



inline void mult_stencil_op_hcompute_mult_stencil_0_write(hw_uint<16>& mult_stencil_op_hcompute_mult_stencil_0, mult_stencil_cache& mult_stencil, int root, int mult_s0_y, int mult_s0_x, int dynamic_address) {
  mult_stencil.mult_stencil_all_inputs_to_all_outputs.write(mult_stencil_op_hcompute_mult_stencil_0, ((1*mult_s0_y)) - 0, ((1*mult_s0_x)) - 0);
}

inline hw_uint<16> mult_stencil_op_hcompute_hw_output_stencil_3_select(mult_stencil_cache& mult_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mult_stencil_op_hcompute_hw_output_stencil_3 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> mult_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 63 and 0 <= hw_output_s0_x_xi <= 63 }
  auto value_mult_stencil_op_hcompute_mult_stencil_0 = mult_stencil.mult_stencil_all_inputs_to_all_outputs.read(((1*hw_output_s0_y_yi)) - 0, ((1*hw_output_s0_x_xi)) - 0);
  return value_mult_stencil_op_hcompute_mult_stencil_0;
  return 0;
}

// # of bundles = 2
// op_hcompute_hw_output_stencil_read
//	mult_stencil_op_hcompute_hw_output_stencil_3
inline hw_uint<16> mult_stencil_op_hcompute_hw_output_stencil_read_bundle_read(mult_stencil_cache& mult_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // mult_stencil_op_hcompute_hw_output_stencil_3

	hw_uint<16> result;
	hw_uint<16> mult_stencil_op_hcompute_hw_output_stencil_3_res = mult_stencil_op_hcompute_hw_output_stencil_3_select(mult_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, mult_stencil_op_hcompute_hw_output_stencil_3_res);
	return result;
}

// op_hcompute_mult_stencil_write
//	mult_stencil_op_hcompute_mult_stencil_0
inline void mult_stencil_op_hcompute_mult_stencil_write_bundle_write(hw_uint<16>& op_hcompute_mult_stencil_write, mult_stencil_cache& mult_stencil, int root, int mult_s0_y, int mult_s0_x, int dynamic_address) {
	hw_uint<16> mult_stencil_op_hcompute_mult_stencil_0_res = op_hcompute_mult_stencil_write.extract<0, 15>();
	mult_stencil_op_hcompute_mult_stencil_0_write(mult_stencil_op_hcompute_mult_stencil_0_res, mult_stencil, root, mult_s0_y, mult_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 131072 bits


// Operation logic
inline void op_hcompute_hw_output_stencil(mult_stencil_cache& mult_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: mult_stencil
	auto mult_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = mult_stencil_op_hcompute_hw_output_stencil_read_bundle_read(mult_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(mult_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

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

inline void op_hcompute_mult_stencil(hw_input_global_wrapper_stencil_cache& hw_input_global_wrapper_stencil, mult_stencil_cache& mult_stencil, int root, int mult_s0_y, int mult_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_stencil
	auto hw_input_global_wrapper_stencil_mult_s0_y_c__mult_s0_x_value = hw_input_global_wrapper_stencil_op_hcompute_mult_stencil_read_bundle_read(hw_input_global_wrapper_stencil/* source_delay */, root, mult_s0_y, mult_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_mult_stencil(hw_input_global_wrapper_stencil_mult_s0_y_c__mult_s0_x_value);
	// Produce: mult_stencil
	mult_stencil_op_hcompute_mult_stencil_write_bundle_write(/* arg names */compute_result, mult_stencil, root, mult_s0_y, mult_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_pointwise(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_pointwise_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  hw_input_global_wrapper_stencil_cache hw_input_global_wrapper_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  mult_stencil_cache mult_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_mult_stencil[root = 0, mult_s0_y, mult_s0_x] -> [0, 0, 1, mult_s0_y, 0, mult_s0_x, 0] : 0 <= mult_s0_y <= 63 and 0 <= mult_s0_x <= 63; op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 2, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 63 and 0 <= hw_output_s0_x_xi <= 63 }
//   { op_hcompute_mult_stencil[root = 0, mult_s0_y, mult_s0_x] -> [0, 0, 1, mult_s0_y, 0, mult_s0_x, 0] : 0 <= mult_s0_y <= 63 and 0 <= mult_s0_x <= 63 }
// Condition for op_hcompute_mult_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-1 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((63 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((63 + -1*i5)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> [0, 0, 0, hw_input_global_wrapper_s0_y, 0, hw_input_global_wrapper_s0_x, 0] : 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63 }
// Condition for op_hcompute_hw_input_global_wrapper_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((63 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((63 + -1*i5)) >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 2, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 63 and 0 <= hw_output_s0_x_xi <= 63 }
// Condition for op_hcompute_hw_output_stencil(((((1*i6)) == 0) && (((1*i4)) == 0) && (((-2 + 1*i2)) == 0) && (((1*i1)) == 0) && (((1*i0)) == 0) && (((1*i3)) >= 0) && (((63 + -1*i3)) >= 0) && (((1*i5)) >= 0) && (((63 + -1*i5)) >= 0)))

	{
	  for (int c3 = 0; c3 <= 63; c3 += 1)
	    for (int c5 = 0; c5 <= 63; c5 += 1)
	      op_hcompute_hw_input_global_wrapper_stencil(hw_input_stencil /* buf name */, hw_input_global_wrapper_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 63; c3 += 1)
	    for (int c5 = 0; c5 <= 63; c5 += 1)
	      op_hcompute_mult_stencil(hw_input_global_wrapper_stencil /* buf name */, mult_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 63; c3 += 1)
	    for (int c5 = 0; c5 <= 63; c5 += 1)
	      op_hcompute_hw_output_stencil(mult_stencil /* buf name */, hw_output_stencil, 0, c3, c5);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_pointwise_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_pointwise(hw_input_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_input_global_wrapper_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] -> hw_input_stencil[hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x] : 0 <= hw_input_global_wrapper_s0_y <= 63 and 0 <= hw_input_global_wrapper_s0_x <= 63 }
const int op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_num_transfers = 4096;
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 63 and 0 <= hw_output_s0_x_xi <= 63 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 4096;


extern "C" {

void unoptimized_pointwise_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
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

  unoptimized_pointwise_wrapper(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_pointwise_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_pointwise(op_hcompute_hw_input_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

