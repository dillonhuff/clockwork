#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: pw5_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "pw5_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct t1_t1_1_merged12_0_to_t1_pw5_2_1_merged15_6_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
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

struct t1_t1_1_merged12_1_to_t1_pw5_2_1_merged15_7_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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

struct t1_cache {
  // Reader addrs...
    // { pw5_2_1_merged15[root = 0, pw5_2_0, pw5_2_1] -> t1[1 + 2pw5_2_1, pw5_2_0] : 0 <= pw5_2_0 <= 1079 and 0 <= pw5_2_1 <= 959 }
    // { pw5_2_1_merged15[root = 0, pw5_2_0, pw5_2_1] -> t1[2pw5_2_1, pw5_2_0] : 0 <= pw5_2_0 <= 1079 and 0 <= pw5_2_1 <= 959 }
  // # of banks: 2
  t1_t1_1_merged12_0_to_t1_pw5_2_1_merged15_6_cache t1_t1_1_merged12_0_to_t1_pw5_2_1_merged15_6;
  t1_t1_1_merged12_1_to_t1_pw5_2_1_merged15_7_cache t1_t1_1_merged12_1_to_t1_pw5_2_1_merged15_7;
};



inline void t1_t1_1_merged12_0_write(hw_uint<32> & t1_t1_1_merged12_0, t1_cache& t1, int root, int t1_0, int t1_1, int dynamic_address) {
  t1.t1_t1_1_merged12_0_to_t1_pw5_2_1_merged15_6.push(t1_t1_1_merged12_0);
}

inline void t1_t1_1_merged12_1_write(hw_uint<32> & t1_t1_1_merged12_1, t1_cache& t1, int root, int t1_0, int t1_1, int dynamic_address) {
  t1.t1_t1_1_merged12_1_to_t1_pw5_2_1_merged15_7.push(t1_t1_1_merged12_1);
}

inline hw_uint<32>  t1_pw5_2_1_merged15_6_select(t1_cache& t1, int root, int pw5_2_0, int pw5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // t1_pw5_2_1_merged15_6 read pattern: { pw5_2_1_merged15[root = 0, pw5_2_0, pw5_2_1] -> t1[1 + 2pw5_2_1, pw5_2_0] : 0 <= pw5_2_0 <= 1079 and 0 <= pw5_2_1 <= 959 }
  // Read schedule : { pw5_2_1_merged15[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { t1_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  auto value_t1_t1_1_merged12_0 = t1.t1_t1_1_merged12_0_to_t1_pw5_2_1_merged15_6.peek(/* one reader or all rams */ 0);
  return value_t1_t1_1_merged12_0;
  return 0;
}

inline hw_uint<32>  t1_pw5_2_1_merged15_7_select(t1_cache& t1, int root, int pw5_2_0, int pw5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // t1_pw5_2_1_merged15_7 read pattern: { pw5_2_1_merged15[root = 0, pw5_2_0, pw5_2_1] -> t1[2pw5_2_1, pw5_2_0] : 0 <= pw5_2_0 <= 1079 and 0 <= pw5_2_1 <= 959 }
  // Read schedule : { pw5_2_1_merged15[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { t1_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  auto value_t1_t1_1_merged12_1 = t1.t1_t1_1_merged12_1_to_t1_pw5_2_1_merged15_7.peek(/* one reader or all rams */ 0);
  return value_t1_t1_1_merged12_1;
  return 0;
}

// # of bundles = 2
// pw5_2_1_merged15_read
//	t1_pw5_2_1_merged15_6
//	t1_pw5_2_1_merged15_7
inline hw_uint<64> t1_pw5_2_1_merged15_read_bundle_read(t1_cache& t1, int root, int pw5_2_0, int pw5_2_1, int dynamic_address) {
  // # of ports in bundle: 2
    // t1_pw5_2_1_merged15_6
    // t1_pw5_2_1_merged15_7

	hw_uint<64> result;
	hw_uint<32>  t1_pw5_2_1_merged15_6_res = t1_pw5_2_1_merged15_6_select(t1, root, pw5_2_0, pw5_2_1, dynamic_address);
	set_at<0, 64>(result, t1_pw5_2_1_merged15_6_res);
	hw_uint<32>  t1_pw5_2_1_merged15_7_res = t1_pw5_2_1_merged15_7_select(t1, root, pw5_2_0, pw5_2_1, dynamic_address);
	set_at<32, 64>(result, t1_pw5_2_1_merged15_7_res);
	return result;
}

// t1_1_merged12_write
//	t1_t1_1_merged12_0
//	t1_t1_1_merged12_1
inline void t1_t1_1_merged12_write_bundle_write(hw_uint<64>& t1_1_merged12_write, t1_cache& t1, int root, int t1_0, int t1_1, int dynamic_address) {
	hw_uint<32>  t1_t1_1_merged12_0_res = t1_1_merged12_write.extract<0, 31>();
	t1_t1_1_merged12_0_write(t1_t1_1_merged12_0_res, t1, root, t1_0, t1_1, dynamic_address);
	hw_uint<32>  t1_t1_1_merged12_1_res = t1_1_merged12_write.extract<32, 63>();
	t1_t1_1_merged12_1_write(t1_t1_1_merged12_1_res, t1, root, t1_0, t1_1, dynamic_address);
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void pw5_2_1_merged15(t1_cache& t1, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */pw5_2, int root, int pw5_2_0, int pw5_2_1) {
  // Dynamic address computation

	// Consume: t1
	auto t1_1_m__lp_2_m_pw5_2_1__p__1_rp___p__0_p_0_c_____1_m_pw5_2_0__p__0_p_0_value = t1_pw5_2_1_merged15_read_bundle_read(t1/* source_delay */, root, pw5_2_0, pw5_2_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw5_2_1_cu13(t1_1_m__lp_2_m_pw5_2_1__p__1_rp___p__0_p_0_c_____1_m_pw5_2_0__p__0_p_0_value);
	// Produce: pw5_2
	pw5_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void t1_1_merged12(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */t1_arg, t1_cache& t1, int root, int t1_0, int t1_1) {
  // Dynamic address computation

	// Consume: t1_arg
	auto t1_arg_1_m__lp_2_m_t1_1__p__1_rp___p__0_p_0_c_____1_m_t1_0__p__0_p_0_value = t1_arg.read();
	auto compute_result = t1_1_cu10(t1_arg_1_m__lp_2_m_t1_1__p__1_rp___p__0_p_0_c_____1_m_t1_0__p__0_p_0_value);
	// Produce: t1
	t1_t1_1_merged12_write_bundle_write(/* arg names */compute_result, t1, root, t1_0, t1_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void pw5_2_opt(HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */t1_arg, HWStream<hw_uint<64> >& /* get_args num ports = 2 */pw5_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("pw5_2_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw5_2_1_merged15[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959; t1_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
//   { pw5_2_1_merged15[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
// Condition for pw5_2_1_merged15(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1079 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((959 + -1*i2)) >= 0)))
//   { t1_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
// Condition for t1_1_merged12(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1079 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((959 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1079 and 0 <= i2 <= 959 and 0 <= i3 <= 1 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1079; i1++) {
	    for (int i2 = 0; i2 <= 959; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          t1_1_merged12(t1_arg /* buf name */, t1, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw5_2_1_merged15(t1 /* buf name */, pw5_2, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void pw5_2_opt_wrapper(HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */t1_arg, HWStream<hw_uint<64> >& /* get_args num ports = 2 */pw5_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    pw5_2_opt(t1_arg, pw5_2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw5_2_1_merged15[root = 0, pw5_2_0, pw5_2_1] -> pw5_2[1 + 2pw5_2_1, pw5_2_0] : 0 <= pw5_2_0 <= 1079 and 0 <= pw5_2_1 <= 959; pw5_2_1_merged15[root = 0, pw5_2_0, pw5_2_1] -> pw5_2[2pw5_2_1, pw5_2_0] : 0 <= pw5_2_0 <= 1079 and 0 <= pw5_2_1 <= 959 }
const int pw5_2_1_merged15_write_pipe0_num_transfers = 1036800;
  // { t1_1_merged12[root = 0, t1_0, t1_1] -> t1_arg[1 + 2t1_1, t1_0] : 0 <= t1_0 <= 1079 and 0 <= t1_1 <= 959; t1_1_merged12[root = 0, t1_0, t1_1] -> t1_arg[2t1_1, t1_0] : 0 <= t1_0 <= 1079 and 0 <= t1_1 <= 959 }
const int t1_1_merged12_read_pipe0_num_transfers = 1036800;


extern "C" {

void pw5_2_opt_accel(hw_uint<64>* t1_1_merged12_read_pipe0, hw_uint<64>* pw5_2_1_merged15_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = t1_1_merged12_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw5_2_1_merged15_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = t1_1_merged12_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw5_2_1_merged15_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<64> > t1_1_merged12_read_pipe0_channel;
  static HWStream<hw_uint<64> > pw5_2_1_merged15_write_pipe0_channel;

  burst_read<64>(t1_1_merged12_read_pipe0, t1_1_merged12_read_pipe0_channel, t1_1_merged12_read_pipe0_num_transfers*size);

  pw5_2_opt_wrapper(t1_1_merged12_read_pipe0_channel, pw5_2_1_merged15_write_pipe0_channel, size);

  burst_write<64>(pw5_2_1_merged15_write_pipe0, pw5_2_1_merged15_write_pipe0_channel, pw5_2_1_merged15_write_pipe0_num_transfers*size);
}

}
extern "C" {

void pw5_2_opt_rdai(HWStream<hw_uint<64> >& t1_1_merged12_read_pipe0, HWStream<hw_uint<64> >&  pw5_2_1_merged15_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = t1_1_merged12_read_pipe0
#pragma HLS INTERFACE axis register port = pw5_2_1_merged15_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  pw5_2_opt(t1_1_merged12_read_pipe0, pw5_2_1_merged15_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

