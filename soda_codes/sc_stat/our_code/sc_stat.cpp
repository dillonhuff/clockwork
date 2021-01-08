#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h
#include "clockwork_standard_compute_units.h"

struct in_pw_math_in_oc03_0_to_in_pw_math_in47_3_cache {
	// RAM Box: {[0, 127], [0, 127]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_cache {
  // Reader addrs...
    // { pw_math_in47[root = 0, pw_math_in45, pw_math_in46] -> in[pw_math_in46, pw_math_in45] : 0 <= pw_math_in45 <= 127 and 0 <= pw_math_in46 <= 127 }
  // # of banks: 1
  in_pw_math_in_oc03_0_to_in_pw_math_in47_3_cache in_pw_math_in_oc03_0_to_in_pw_math_in47_3;
};



inline void in_pw_math_in_oc03_0_write(hw_uint<32> & in_pw_math_in_oc03_0, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc03_0_to_in_pw_math_in47_3.push(in_pw_math_in_oc03_0);
}

inline hw_uint<32>  in_pw_math_in47_3_select(in_cache& in, int root, int pw_math_in45, int pw_math_in46, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_pw_math_in47_3 read pattern: { pw_math_in47[root = 0, pw_math_in45, pw_math_in46] -> in[pw_math_in46, pw_math_in45] : 0 <= pw_math_in45 <= 127 and 0 <= pw_math_in46 <= 127 }
  // Read schedule : { pw_math_in47[root = 0, pw_math_in45, pw_math_in46] -> [pw_math_in45, pw_math_in46, 1] : 0 <= pw_math_in45 <= 127 and 0 <= pw_math_in46 <= 127 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 127 and 0 <= pw_math_in_oc02 <= 127 }
  auto value_in_pw_math_in_oc03_0 = in.in_pw_math_in_oc03_0_to_in_pw_math_in47_3.peek(/* one reader or all rams */ 0);
  return value_in_pw_math_in_oc03_0;
  return 0;
}

// # of bundles = 2
// pw_math_in47_read
//	in_pw_math_in47_3
inline hw_uint<32> in_pw_math_in47_read_bundle_read(in_cache& in, int root, int pw_math_in45, int pw_math_in46, int dynamic_address) {
  // # of ports in bundle: 1
    // in_pw_math_in47_3

	hw_uint<32> result;
	hw_uint<32>  in_pw_math_in47_3_res = in_pw_math_in47_3_select(in, root, pw_math_in45, pw_math_in46, dynamic_address);
	set_at<0, 32>(result, in_pw_math_in47_3_res);
	return result;
}

// pw_math_in_oc03_write
//	in_pw_math_in_oc03_0
inline void in_pw_math_in_oc03_write_bundle_write(hw_uint<32>& pw_math_in_oc03_write, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
	hw_uint<32>  in_pw_math_in_oc03_0_res = pw_math_in_oc03_write.extract<0, 31>();
	in_pw_math_in_oc03_0_write(in_pw_math_in_oc03_0_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void pw_math_in47(in_cache& in, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int pw_math_in45, int pw_math_in46) {
  // Dynamic address computation

	// Consume: in
	auto in_pw_math_in46_c__pw_math_in45_value = in_pw_math_in47_read_bundle_read(in/* source_delay */, root, pw_math_in45, pw_math_in46, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(in_pw_math_in46_c__pw_math_in45_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_in_oc03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_oc, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc_pw_math_in_oc02_c__pw_math_in_oc01_value = in_oc.read();
	auto compute_result = id(in_oc_pw_math_in_oc02_c__pw_math_in_oc01_value);
	// Produce: in
	in_pw_math_in_oc03_write_bundle_write(/* arg names */compute_result, in, root, pw_math_in_oc01, pw_math_in_oc02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sc_stat(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sc_stat_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 127 and 0 <= pw_math_in_oc02 <= 127; pw_math_in47[root = 0, pw_math_in45, pw_math_in46] -> [pw_math_in45, pw_math_in46, 1] : 0 <= pw_math_in45 <= 127 and 0 <= pw_math_in46 <= 127 }
//   { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 127 and 0 <= pw_math_in_oc02 <= 127 }
// Condition for pw_math_in_oc03(((i2 == 0) && (i0 >= 0) && (127 - i0 >= 0) && (i1 >= 0) && (127 - i1 >= 0)))
//   { pw_math_in47[root = 0, pw_math_in45, pw_math_in46] -> [pw_math_in45, pw_math_in46, 1] : 0 <= pw_math_in45 <= 127 and 0 <= pw_math_in46 <= 127 }
// Condition for pw_math_in47(((-1 + i2 == 0) && (i0 >= 0) && (127 - i0 >= 0) && (i1 >= 0) && (127 - i1 >= 0)))

	for (int c0 = 0; c0 <= 127; c0 += 1)
	  for (int c1 = 0; c1 <= 127; c1 += 1) {
	    pw_math_in_oc03(in_oc /* buf name */, in, 0, c0, c1);
	    pw_math_in47(in /* buf name */, out, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sc_stat_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sc_stat(in_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 127 and 0 <= pw_math_in_oc02 <= 127 }
const int pw_math_in_oc03_read_pipe0_num_transfers = 16384;
  // { pw_math_in47[root = 0, pw_math_in45, pw_math_in46] -> out[pw_math_in46, pw_math_in45] : 0 <= pw_math_in45 <= 127 and 0 <= pw_math_in46 <= 127 }
const int pw_math_in47_write_pipe0_num_transfers = 16384;


extern "C" {

void sc_stat_accel(hw_uint<32>* pw_math_in_oc03_read_pipe0, hw_uint<32>* pw_math_in47_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in_oc03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_in47_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in_oc03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_in47_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > pw_math_in_oc03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_in47_write_pipe0_channel;

  burst_read<32>(pw_math_in_oc03_read_pipe0, pw_math_in_oc03_read_pipe0_channel, pw_math_in_oc03_read_pipe0_num_transfers*size);

  sc_stat_wrapper(pw_math_in_oc03_read_pipe0_channel, pw_math_in47_write_pipe0_channel, size);

  burst_write<32>(pw_math_in47_write_pipe0, pw_math_in47_write_pipe0_channel, pw_math_in47_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sc_stat_rdai(HWStream<hw_uint<32> >& pw_math_in_oc03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_in47_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in_oc03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_in47_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sc_stat(pw_math_in_oc03_read_pipe0, pw_math_in47_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

