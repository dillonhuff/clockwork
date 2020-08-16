#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: up_sample_compute.h
#include "up_sample_compute.h"

#include "hw_classes.h"

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_cache {
	// RAM Box: {[0, 63], [0, 63], [0, 0]}
	// Capacity: 64
	// # of read delays: 65
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_cache {
  // # of banks: 1
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_0, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_select(hw_input_stencil_cache& hw_input_stencil, int root, int nearest_neighbor_s0_y, int nearest_neighbor_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3 read pattern: { op_hcompute_nearest_neighbor_stencil[root = 0, nearest_neighbor_s0_y, nearest_neighbor_s0_x] -> hw_input_stencil[o0, o1, 0] : 0 <= nearest_neighbor_s0_y <= 127 and 0 <= nearest_neighbor_s0_x <= 127 and -1 + nearest_neighbor_s0_x <= 2o0 <= nearest_neighbor_s0_x and -1 + nearest_neighbor_s0_y <= 2o1 <= nearest_neighbor_s0_y }
  // Read schedule : { op_hcompute_nearest_neighbor_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, 2d1, 2d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3.peek(/* one reader or all rams */ ((-1 - nearest_neighbor_s0_y) % 2 == 0 && 125 - nearest_neighbor_s0_x >= 0) ? ((63 - floord(2*nearest_neighbor_s0_x, 4))) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

// # of bundles = 2
// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_0
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_0_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_input_stencil_op_hcompute_hw_input_stencil_0_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, dynamic_address);
}

// op_hcompute_nearest_neighbor_stencil_read
//	hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3
inline hw_uint<16> hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int nearest_neighbor_s0_y, int nearest_neighbor_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3

	hw_uint<16> result;
	hw_uint<16> hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_res = hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_select(hw_input_stencil, root, nearest_neighbor_s0_y, nearest_neighbor_s0_x, dynamic_address);
	set_at<0, 16>(result, hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_res);
	return result;
}

#include "hw_classes.h"

struct nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2_to_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5_cache {
	// RAM Box: {[0, 127], [0, 127], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct nearest_neighbor_stencil_cache {
  // # of banks: 1
  nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2_to_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5_cache nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2_to_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5;
};



inline void nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2_write(hw_uint<16>& nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2, nearest_neighbor_stencil_cache& nearest_neighbor_stencil, int root, int nearest_neighbor_s0_y, int nearest_neighbor_s0_x, int dynamic_address) {
  nearest_neighbor_stencil.nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2_to_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5.push(nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2);
}

inline hw_uint<16> nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5_select(nearest_neighbor_stencil_cache& nearest_neighbor_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> nearest_neighbor_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, 0] : 0 <= hw_output_s0_y_yi <= 127 and 0 <= hw_output_s0_x_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_nearest_neighbor_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
  auto value_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2 = nearest_neighbor_stencil.nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2_to_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5.peek(/* one reader or all rams */ 0);
  return value_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2;
  return 0;
}

// # of bundles = 2
// op_hcompute_hw_output_stencil_read
//	nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5
inline hw_uint<16> nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_bundle_read(nearest_neighbor_stencil_cache& nearest_neighbor_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5

	hw_uint<16> result;
	hw_uint<16> nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5_res = nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5_select(nearest_neighbor_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, nearest_neighbor_stencil_op_hcompute_hw_output_stencil_5_res);
	return result;
}

// op_hcompute_nearest_neighbor_stencil_write
//	nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2
inline void nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_bundle_write(hw_uint<16>& op_hcompute_nearest_neighbor_stencil_write, nearest_neighbor_stencil_cache& nearest_neighbor_stencil, int root, int nearest_neighbor_s0_y, int nearest_neighbor_s0_x, int dynamic_address) {
	hw_uint<16> nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2_res = op_hcompute_nearest_neighbor_stencil_write.extract<0, 15>();
	nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2_write(nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_2_res, nearest_neighbor_stencil, root, nearest_neighbor_s0_y, nearest_neighbor_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 1008 bits


// Operation logic
inline void op_hcompute_hw_input_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_copy_stencil, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x) {
  // Dynamic address computation

	// Consume: input_copy_stencil
	auto input_copy_stencil_hw_input_s0_x_c__hw_input_s0_y_c__0_value = input_copy_stencil.read();
	auto compute_result = hcompute_hw_input_stencil(input_copy_stencil_hw_input_s0_x_c__hw_input_s0_y_c__0_value);
	// Produce: hw_input_stencil
	hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(/* arg names */compute_result, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_nearest_neighbor_stencil(hw_input_stencil_cache& hw_input_stencil, nearest_neighbor_stencil_cache& nearest_neighbor_stencil, int root, int nearest_neighbor_s0_y, int nearest_neighbor_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil
	auto hw_input_stencil_floor_lp__lp_nearest_neighbor_s0_x_div_2_rp__rp__c__floor_lp__lp_nearest_neighbor_s0_y_div_2_rp__rp__c__0_value = hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_bundle_read(hw_input_stencil/* source_delay */, root, nearest_neighbor_s0_y, nearest_neighbor_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_nearest_neighbor_stencil(hw_input_stencil_floor_lp__lp_nearest_neighbor_s0_x_div_2_rp__rp__c__floor_lp__lp_nearest_neighbor_s0_y_div_2_rp__rp__c__0_value);
	// Produce: nearest_neighbor_stencil
	nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_bundle_write(/* arg names */compute_result, nearest_neighbor_stencil, root, nearest_neighbor_s0_y, nearest_neighbor_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(nearest_neighbor_stencil_cache& nearest_neighbor_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: nearest_neighbor_stencil
	auto nearest_neighbor_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_c__0_value = nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_bundle_read(nearest_neighbor_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(nearest_neighbor_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_c__0_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void up_sample(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("up_sample_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  hw_input_stencil_cache hw_input_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  nearest_neighbor_stencil_cache nearest_neighbor_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, 2d1, 2d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63; op_hcompute_nearest_neighbor_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 127 and 0 <= d2 <= 127; op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
//   { op_hcompute_hw_input_stencil[d0 = 0, d1, d2] -> [0, 2d1, 2d2, 0] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for op_hcompute_hw_input_stencil(((-i1 + 2*floord(i1, 2) == 0) && (-i2 + 2*floord(i2, 2) == 0) && (i3 == 0) && (i0 == 0) && (i1 >= 0) && (126 - i1 >= 0) && (i2 >= 0) && (126 - i2 >= 0)))
//   { op_hcompute_nearest_neighbor_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
// Condition for op_hcompute_nearest_neighbor_stencil(((-1 + i3 == 0) && (i0 == 0) && (i1 >= 0) && (127 - i1 >= 0) && (i2 >= 0) && (127 - i2 >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_stencil(((-2 + i3 == 0) && (i0 == 0) && (i1 >= 0) && (127 - i1 >= 0) && (i2 >= 0) && (127 - i2 >= 0)))

  /*
for (int c1 = 0; c1 <= 127; c1 += 1)
  for (int c2 = 0; c2 <= 127; c2 += 1) {
    if (c1 % 2 == 0 && c2 % 2 == 0)
      op_hcompute_hw_input_stencil(0, c1 / 2, c2 / 2);
    op_hcompute_nearest_neighbor_stencil(0, c1, c2);
    op_hcompute_hw_output_stencil(0, c1, c2);
  }

  */
	for (int c1 = 0; c1 <= 127; c1 += 1)
	  for (int c2 = 0; c2 <= 127; c2 += 1) {
	    if (c1 % 2 == 0 && c2 % 2 == 0)
	      op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c1 / 2, c2 / 2);
	    op_hcompute_nearest_neighbor_stencil(hw_input_stencil /* buf name */, nearest_neighbor_stencil, 0, c1, c2);
	    op_hcompute_hw_output_stencil(nearest_neighbor_stencil /* buf name */, hw_output_stencil, 0, c1, c2);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void up_sample_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    up_sample(input_copy_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, 0] : 0 <= hw_output_s0_y_yi <= 127 and 0 <= hw_output_s0_x_xi <= 127 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 16384;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x] -> input_copy_stencil[hw_input_s0_x, hw_input_s0_y, 0] : 0 <= hw_input_s0_y <= 63 and 0 <= hw_input_s0_x <= 63 }
const int op_hcompute_hw_input_stencil_read_pipe0_num_transfers = 4096;


extern "C" {

void up_sample_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_input_stencil_read_pipe0_num_transfers*size);

  up_sample_wrapper(op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void up_sample_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  up_sample(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

