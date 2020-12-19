#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: simple_upsample_example_compute.h
#include "simple_upsample_example_compute.h"

#include "hw_classes.h"

struct A_ld0_0_to_A_us1_3_cache {
	// RAM Box: {[0, 9], [0, 9]}
	// Capacity: 10
	// # of read delays: 11
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	fifo<hw_uint<32> , 10> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(9 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct A_cache {
  // # of banks: 1
  A_ld0_0_to_A_us1_3_cache A_ld0_0_to_A_us1_3;
};



inline void A_ld0_0_write(hw_uint<32> & A_ld0_0, A_cache& A, int root, int ly, int lx, int dynamic_address) {
  A.A_ld0_0_to_A_us1_3.push(A_ld0_0);
}

inline hw_uint<32>  A_us1_3_select(A_cache& A, int root, int uy, int ux, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // A_us1_3 read pattern: { us1[root = 0, uy, ux] -> A[o0, o1] : 0 <= uy <= 19 and 0 <= ux <= 19 and -1 + ux <= 2o0 <= ux and -1 + uy <= 2o1 <= uy }
  // Read schedule : { us1[root = 0, uy, ux] -> [uy, ux, 1] : 0 <= uy <= 19 and 0 <= ux <= 19 }
  // Write schedule: { ld0[root = 0, ly, lx] -> [2ly, 2lx, 0] : 0 <= ly <= 9 and 0 <= lx <= 9 }
  auto value_A_ld0_0 = A.A_ld0_0_to_A_us1_3.peek(/* one reader or all rams */ ((-1 - uy) % 2 == 0 && 17 - ux >= 0) ? ((9 - floord(2*ux, 4))) : 0);
  return value_A_ld0_0;
  return 0;
}

// # of bundles = 2
// ld0_write
//	A_ld0_0
inline void A_ld0_write_bundle_write(hw_uint<32>& ld0_write, A_cache& A, int root, int ly, int lx, int dynamic_address) {
	hw_uint<32>  A_ld0_0_res = ld0_write.extract<0, 31>();
	A_ld0_0_write(A_ld0_0_res, A, root, ly, lx, dynamic_address);
}

// us1_read
//	A_us1_3
inline hw_uint<32> A_us1_read_bundle_read(A_cache& A, int root, int uy, int ux, int dynamic_address) {
  // # of ports in bundle: 1
    // A_us1_3

	hw_uint<32> result;
	hw_uint<32>  A_us1_3_res = A_us1_3_select(A, root, uy, ux, dynamic_address);
	set_at<0, 32>(result, A_us1_3_res);
	return result;
}



// Operation logic
inline void ld0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, A_cache& A, int root, int ly, int lx) {
  // Dynamic address computation

	// Consume: in
	auto in_lx_c__ly_value = in.read();
	// Produce: A
	A_ld0_write_bundle_write(/* arg names */in_lx_c__ly_value, A, root, ly, lx, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us1(A_cache& A, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int uy, int ux) {
  // Dynamic address computation

	// Consume: A
	auto A_floor_lp_ux__div__2_rp__c__floor_lp_uy__div__2_rp__value = A_us1_read_bundle_read(A/* source_delay */, root, uy, ux, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = simple_upsample_plus_one(A_floor_lp_ux__div__2_rp__c__floor_lp_uy__div__2_rp__value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void upsample_2d(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("upsample_2d_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  A_cache A;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { ld0[root = 0, ly, lx] -> [2ly, 2lx, 0] : 0 <= ly <= 9 and 0 <= lx <= 9; us1[root = 0, uy, ux] -> [uy, ux, 1] : 0 <= uy <= 19 and 0 <= ux <= 19 }
//   { ld0[root = 0, ly, lx] -> [2ly, 2lx, 0] : 0 <= ly <= 9 and 0 <= lx <= 9 }
// Condition for ld0(((-i0 + 2*floord(i0, 2) == 0) && (-i1 + 2*floord(i1, 2) == 0) && (i2 == 0) && (i0 >= 0) && (18 - i0 >= 0) && (i1 >= 0) && (18 - i1 >= 0)))
//   { us1[root = 0, uy, ux] -> [uy, ux, 1] : 0 <= uy <= 19 and 0 <= ux <= 19 }
// Condition for us1(((-1 + i2 == 0) && (i0 >= 0) && (19 - i0 >= 0) && (i1 >= 0) && (19 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 19; c0 += 1)
  for (int c1 = 0; c1 <= 19; c1 += 1) {
    if (c0 % 2 == 0 && c1 % 2 == 0)
      ld0(0, c0 / 2, c1 / 2);
    us1(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 19; c0 += 1)
	  for (int c1 = 0; c1 <= 19; c1 += 1) {
	    if (c0 % 2 == 0 && c1 % 2 == 0)
	      ld0(in /* buf name */, A, 0, c0 / 2, c1 / 2);
	    us1(A /* buf name */, out, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void upsample_2d_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    upsample_2d(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { ld0[root = 0, ly, lx] -> in[lx, ly] : 0 <= ly <= 9 and 0 <= lx <= 9 }
const int ld0_read_pipe0_num_transfers = 100;
  // { us1[root = 0, uy, ux] -> out[ux, uy] : 0 <= uy <= 19 and 0 <= ux <= 19 }
const int us1_write_pipe0_num_transfers = 400;


extern "C" {

void upsample_2d_accel(hw_uint<32>* ld0_read_pipe0, hw_uint<32>* us1_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = ld0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = us1_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = ld0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = us1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > ld0_read_pipe0_channel;
  static HWStream<hw_uint<32> > us1_write_pipe0_channel;

  burst_read<32>(ld0_read_pipe0, ld0_read_pipe0_channel, ld0_read_pipe0_num_transfers*size);

  upsample_2d_wrapper(ld0_read_pipe0_channel, us1_write_pipe0_channel, size);

  burst_write<32>(us1_write_pipe0, us1_write_pipe0_channel, us1_write_pipe0_num_transfers*size);
}

}
#endif //__VIVADO_SYNTH__

