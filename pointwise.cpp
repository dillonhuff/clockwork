#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_0_merged_banks_1_cache {
	// RAM Box: {[0, 7], [0, 31]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_cache {
  I_I_id0_0_merged_banks_1_cache I_I_id0_0_merged_banks_1;
};



inline void I_I_id0_0_write(hw_uint<16>& I_I_id0_0, I_cache& I, int root, int id1, int id0) {
  I.I_I_id0_0_merged_banks_1.push(I_I_id0_0);
}

inline hw_uint<16> I_out_plus_one0_3_select(I_cache& I, int root, int d1, int d0) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_plus_one0_3 read pattern: { out_plus_one0[root = 0, d1, d0] -> I[d0, d1] : 0 <= d1 <= 31 and 0 <= d0 <= 7 }
  // Read schedule : { out_plus_one0[root = 0, d1, d0] -> [d1, d0, 1] : 0 <= d1 <= 31 and 0 <= d0 <= 7 }
  // Write schedule: { I_id0[root = 0, id1, id0] -> [id1, id0, 0] : 0 <= id1 <= 31 and 0 <= id0 <= 7 }
  // DD fold: {  }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// I_id0_write
//	I_I_id0_0
inline void I_I_id0_write_bundle_write(hw_uint<16>& I_id0_write, I_cache& I, int root, int id1, int id0) {
	hw_uint<16> I_I_id0_0_res = I_id0_write.extract<0, 15>();
	I_I_id0_0_write(I_I_id0_0_res, I, root, id1, id0);
}

// out_plus_one0_read
//	I_out_plus_one0_3
inline hw_uint<16> I_out_plus_one0_read_bundle_read(I_cache& I, int root, int d1, int d0) {
	hw_uint<16> result;
	hw_uint<16> I_out_plus_one0_3_res = I_out_plus_one0_3_select(I, root, d1, d0);
	set_at<0, 16>(result, I_out_plus_one0_3_res);
	return result;
}



// Operation logic
inline void I_id0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int id1, int id0) {
	// Consume: in
	auto in_id0_c__id1_value = in.read();
	auto compute_result = id(in_id0_c__id1_value);
	// Produce: I
	I_I_id0_write_bundle_write(compute_result, I, root, id1, id0);
#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "I_id0," << (1*root + 0) << ", " << id1<< "," << id0<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void out_plus_one0(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out, int root, int d1, int d0) {
	// Consume: I
	auto I_d0_c__d1_value = I_out_plus_one0_read_bundle_read(I/* source_delay */, root, d1, d0);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "out_plus_one0_I," << root<< "," << d1<< "," << d0<< "," <<  I_d0_c__d1_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = plus_one(I_d0_c__d1_value);
	// Produce: out
	out.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "out_plus_one0," << (1*root + 0) << ", " << d1<< "," << d0<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void pointwise(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("pointwise_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 7; c1 += 1) {
	I_id0(in, I, 0, c0, c1);
	out_plus_one0(I, out, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
