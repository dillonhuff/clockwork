#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h
#include "clockwork_standard_compute_units.h"

struct in_pw_math_in_oc03_0_to_in_load_to_in_to_gp_0811_5_cache {
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
    // { load_to_in_to_gp_0811[root = 0, in_ld10, in_ld9] -> in[in_ld9, in_ld10] : 0 <= in_ld10 <= 127 and 0 <= in_ld9 <= 127 }
  // # of banks: 1
  in_pw_math_in_oc03_0_to_in_load_to_in_to_gp_0811_5_cache in_pw_math_in_oc03_0_to_in_load_to_in_to_gp_0811_5;
};



inline void in_pw_math_in_oc03_0_write(hw_uint<32> & in_pw_math_in_oc03_0, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc03_0_to_in_load_to_in_to_gp_0811_5.push(in_pw_math_in_oc03_0);
}

inline hw_uint<32>  in_load_to_in_to_gp_0811_5_select(in_cache& in, int root, int in_ld10, int in_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_load_to_in_to_gp_0811_5 read pattern: { load_to_in_to_gp_0811[root = 0, in_ld10, in_ld9] -> in[in_ld9, in_ld10] : 0 <= in_ld10 <= 127 and 0 <= in_ld9 <= 127 }
  // Read schedule : { load_to_in_to_gp_0811[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
  // Write schedule: { pw_math_in_oc03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
  auto value_in_pw_math_in_oc03_0 = in.in_pw_math_in_oc03_0_to_in_load_to_in_to_gp_0811_5.peek(/* one reader or all rams */ 0);
  return value_in_pw_math_in_oc03_0;
  return 0;
}

// # of bundles = 2
// load_to_in_to_gp_0811_read
//	in_load_to_in_to_gp_0811_5
inline hw_uint<32> in_load_to_in_to_gp_0811_read_bundle_read(in_cache& in, int root, int in_ld10, int in_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // in_load_to_in_to_gp_0811_5

	hw_uint<32> result;
	hw_uint<32>  in_load_to_in_to_gp_0811_5_res = in_load_to_in_to_gp_0811_5_select(in, root, in_ld10, in_ld9, dynamic_address);
	set_at<0, 32>(result, in_load_to_in_to_gp_0811_5_res);
	return result;
}

// pw_math_in_oc03_write
//	in_pw_math_in_oc03_0
inline void in_pw_math_in_oc03_write_bundle_write(hw_uint<32>& pw_math_in_oc03_write, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
	hw_uint<32>  in_pw_math_in_oc03_0_res = pw_math_in_oc03_write.extract<0, 31>();
	in_pw_math_in_oc03_0_write(in_pw_math_in_oc03_0_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
}

struct in_FIFO_buf12_load_to_in_FIFO_buf1215_6_to_in_FIFO_buf12_pw_math_in47_3_cache {
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

struct in_FIFO_buf12_cache {
  // Reader addrs...
    // { pw_math_in47[root = 0, pw_math_in45, pw_math_in46] -> in_FIFO_buf12[pw_math_in46, pw_math_in45] : 0 <= pw_math_in45 <= 127 and 0 <= pw_math_in46 <= 127 }
  // # of banks: 1
  in_FIFO_buf12_load_to_in_FIFO_buf1215_6_to_in_FIFO_buf12_pw_math_in47_3_cache in_FIFO_buf12_load_to_in_FIFO_buf1215_6_to_in_FIFO_buf12_pw_math_in47_3;
};



inline void in_FIFO_buf12_load_to_in_FIFO_buf1215_6_write(hw_uint<32> & in_FIFO_buf12_load_to_in_FIFO_buf1215_6, in_FIFO_buf12_cache& in_FIFO_buf12, int root, int in_to_gp_08_ld14, int in_to_gp_08_ld13, int dynamic_address) {
  in_FIFO_buf12.in_FIFO_buf12_load_to_in_FIFO_buf1215_6_to_in_FIFO_buf12_pw_math_in47_3.push(in_FIFO_buf12_load_to_in_FIFO_buf1215_6);
}

inline hw_uint<32>  in_FIFO_buf12_pw_math_in47_3_select(in_FIFO_buf12_cache& in_FIFO_buf12, int root, int pw_math_in45, int pw_math_in46, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf12_pw_math_in47_3 read pattern: { pw_math_in47[root = 0, pw_math_in45, pw_math_in46] -> in_FIFO_buf12[pw_math_in46, pw_math_in45] : 0 <= pw_math_in45 <= 127 and 0 <= pw_math_in46 <= 127 }
  // Read schedule : { pw_math_in47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
  // Write schedule: { load_to_in_FIFO_buf1215[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
  auto value_in_FIFO_buf12_load_to_in_FIFO_buf1215_6 = in_FIFO_buf12.in_FIFO_buf12_load_to_in_FIFO_buf1215_6_to_in_FIFO_buf12_pw_math_in47_3.peek(/* one reader or all rams */ 0);
  return value_in_FIFO_buf12_load_to_in_FIFO_buf1215_6;
  return 0;
}

// # of bundles = 2
// load_to_in_FIFO_buf1215_write
//	in_FIFO_buf12_load_to_in_FIFO_buf1215_6
inline void in_FIFO_buf12_load_to_in_FIFO_buf1215_write_bundle_write(hw_uint<32>& load_to_in_FIFO_buf1215_write, in_FIFO_buf12_cache& in_FIFO_buf12, int root, int in_to_gp_08_ld14, int in_to_gp_08_ld13, int dynamic_address) {
	hw_uint<32>  in_FIFO_buf12_load_to_in_FIFO_buf1215_6_res = load_to_in_FIFO_buf1215_write.extract<0, 31>();
	in_FIFO_buf12_load_to_in_FIFO_buf1215_6_write(in_FIFO_buf12_load_to_in_FIFO_buf1215_6_res, in_FIFO_buf12, root, in_to_gp_08_ld14, in_to_gp_08_ld13, dynamic_address);
}

// pw_math_in47_read
//	in_FIFO_buf12_pw_math_in47_3
inline hw_uint<32> in_FIFO_buf12_pw_math_in47_read_bundle_read(in_FIFO_buf12_cache& in_FIFO_buf12, int root, int pw_math_in45, int pw_math_in46, int dynamic_address) {
  // # of ports in bundle: 1
    // in_FIFO_buf12_pw_math_in47_3

	hw_uint<32> result;
	hw_uint<32>  in_FIFO_buf12_pw_math_in47_3_res = in_FIFO_buf12_pw_math_in47_3_select(in_FIFO_buf12, root, pw_math_in45, pw_math_in46, dynamic_address);
	set_at<0, 32>(result, in_FIFO_buf12_pw_math_in47_3_res);
	return result;
}

// Operation logic
inline void load_to_in_FIFO_buf1215(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_to_gp_08, in_FIFO_buf12_cache& in_FIFO_buf12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_to_gp_08
	auto in_to_gp_08_in_to_gp_08_ld13_c__in_to_gp_08_ld14_value = in_to_gp_08.read();
	// Produce: in_FIFO_buf12
	in_FIFO_buf12_load_to_in_FIFO_buf1215_write_bundle_write(/* arg names */in_to_gp_08_in_to_gp_08_ld13_c__in_to_gp_08_ld14_value, in_FIFO_buf12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_in47(in_FIFO_buf12_cache& in_FIFO_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_FIFO_buf12
	auto in_FIFO_buf12_pw_math_in46_c__pw_math_in45_value = in_FIFO_buf12_pw_math_in47_read_bundle_read(in_FIFO_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(in_FIFO_buf12_pw_math_in46_c__pw_math_in45_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_to_gp_08_ld14_pw_math_in45_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_to_gp_08, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_to_gp_08_ld14_pw_math_in45__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_FIFO_buf12_cache in_FIFO_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_in47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 127 and 0 <= d2 <= 127; load_to_in_FIFO_buf1215[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
//   { pw_math_in47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
// Condition for pw_math_in47(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((127 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { load_to_in_FIFO_buf1215[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
// Condition for load_to_in_FIFO_buf1215(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((127 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 127; c1 += 1)
	  for (int c2 = 0; c2 <= 127; c2 += 1) {
	    load_to_in_FIFO_buf1215(in_to_gp_08 /* buf name */, in_FIFO_buf12, 0, c1, c2);
	    pw_math_in47(in_FIFO_buf12 /* buf name */, out, 0, c1, c2);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_in_oc03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_oc, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc_pw_math_in_oc02_c__pw_math_in_oc01_value = in_oc.read();
	auto compute_result = id(in_oc_pw_math_in_oc02_c__pw_math_in_oc01_value);
	// Produce: in
	in_pw_math_in_oc03_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_to_gp_0811(in_cache& in, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_to_gp_08, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_in_ld9_c__in_ld10_value = in_load_to_in_to_gp_0811_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_to_gp_08
	in_to_gp_08.write(in_in_ld9_c__in_ld10_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_ld10_pw_math_in_oc01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_to_gp_08) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_ld10_pw_math_in_oc01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_in_to_gp_0811[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 127 and 0 <= d2 <= 127; pw_math_in_oc03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
//   { load_to_in_to_gp_0811[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
// Condition for load_to_in_to_gp_0811(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((127 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))
//   { pw_math_in_oc03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 127 and 0 <= d2 <= 127 }
// Condition for pw_math_in_oc03(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((127 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((127 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 127; c1 += 1)
	  for (int c2 = 0; c2 <= 127; c2 += 1) {
	    pw_math_in_oc03(in_oc /* buf name */, in, 0, c1, c2);
	    load_to_in_to_gp_0811(in /* buf name */, in_to_gp_08, 0, c1, c2);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void sc_dyn_7_32(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sc_dyn_7_32_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<32> > in_to_gp_08;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_to_gp_08.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_in_ld10_pw_math_in_oc01_(in_oc, in_to_gp_08);
  Extracted_in_to_gp_08_ld14_pw_math_in45_(in_to_gp_08, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sc_dyn_7_32_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sc_dyn_7_32(in_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 127 and 0 <= pw_math_in_oc02 <= 127 }
const int pw_math_in_oc03_read_pipe0_num_transfers = 16384;
  // { pw_math_in47[root = 0, pw_math_in45, pw_math_in46] -> out[pw_math_in46, pw_math_in45] : 0 <= pw_math_in45 <= 127 and 0 <= pw_math_in46 <= 127 }
const int pw_math_in47_write_pipe0_num_transfers = 16384;


extern "C" {

void sc_dyn_7_32_accel(hw_uint<32>* pw_math_in_oc03_read_pipe0, hw_uint<32>* pw_math_in47_write_pipe0, const int size) { 
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

  sc_dyn_7_32_wrapper(pw_math_in_oc03_read_pipe0_channel, pw_math_in47_write_pipe0_channel, size);

  burst_write<32>(pw_math_in47_write_pipe0, pw_math_in47_write_pipe0_channel, pw_math_in47_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sc_dyn_7_32_rdai(HWStream<hw_uint<32> >& pw_math_in_oc03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_in47_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in_oc03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_in47_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sc_dyn_7_32(pw_math_in_oc03_read_pipe0, pw_math_in47_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

