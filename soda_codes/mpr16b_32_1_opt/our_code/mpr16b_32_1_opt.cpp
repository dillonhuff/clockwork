#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: mpr16b_32_1_opt_compute_units.h
#include "mpr16b_32_1_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 127], [0, 127], [0, 63]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 128, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 126> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_127() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_128() {
		return f4;
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 126
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 126 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  // # of banks: 1
  in_in_update_0_write0_merged_banks_4_cache in_in_update_0_write0_merged_banks_4;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_4.push(in_in_update_0_write0);
}

inline hw_uint<16> mpr16b_32_1_rd0_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_1_rd0 read pattern: { mpr16b_32_1_update_0[d0, d1, d2] -> in[2d0, 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_1_update_0[d0, d1, d2] -> [d2, 1 + 2d1, 1 + 2d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_129();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> mpr16b_32_1_rd1_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_1_rd1 read pattern: { mpr16b_32_1_update_0[d0, d1, d2] -> in[2d0, 1 + 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_1_update_0[d0, d1, d2] -> [d2, 1 + 2d1, 1 + 2d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> mpr16b_32_1_rd2_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_1_rd2 read pattern: { mpr16b_32_1_update_0[d0, d1, d2] -> in[1 + 2d0, 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_1_update_0[d0, d1, d2] -> [d2, 1 + 2d1, 1 + 2d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_128();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> mpr16b_32_1_rd3_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_1_rd3 read pattern: { mpr16b_32_1_update_0[d0, d1, d2] -> in[1 + 2d0, 1 + 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_1_update_0[d0, d1, d2] -> [d2, 1 + 2d1, 1 + 2d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<16>& in_update_0_write, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, d2, dynamic_address);
}

// mpr16b_32_1_update_0_read
//	mpr16b_32_1_rd0
//	mpr16b_32_1_rd1
//	mpr16b_32_1_rd2
//	mpr16b_32_1_rd3
inline hw_uint<64> in_mpr16b_32_1_update_0_read_bundle_read(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 4
    // mpr16b_32_1_rd0
    // mpr16b_32_1_rd1
    // mpr16b_32_1_rd2
    // mpr16b_32_1_rd3

	hw_uint<64> result;
	hw_uint<16> mpr16b_32_1_rd0_res = mpr16b_32_1_rd0_select(in, d0, d1, d2, dynamic_address);
	set_at<0, 64>(result, mpr16b_32_1_rd0_res);
	hw_uint<16> mpr16b_32_1_rd1_res = mpr16b_32_1_rd1_select(in, d0, d1, d2, dynamic_address);
	set_at<16, 64>(result, mpr16b_32_1_rd1_res);
	hw_uint<16> mpr16b_32_1_rd2_res = mpr16b_32_1_rd2_select(in, d0, d1, d2, dynamic_address);
	set_at<32, 64>(result, mpr16b_32_1_rd2_res);
	hw_uint<16> mpr16b_32_1_rd3_res = mpr16b_32_1_rd3_select(in, d0, d1, d2, dynamic_address);
	set_at<48, 64>(result, mpr16b_32_1_rd3_res);
	return result;
}

// Total re-use buffer capacity: 2064 bits


// Operation logic
inline void in_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_oc, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc_0_c__0_value = in_oc.read();
	auto compute_result = id_unrolled_1(in_oc_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mpr16b_32_1_update_0(in_cache& in, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */mpr16b_32_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_mpr16b_32_1_update_0_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = max_pool_2x2_unrolled_1(in_0_c__0_value);
	// Produce: mpr16b_32_1
	mpr16b_32_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void mpr16b_32_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */mpr16b_32_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mpr16b_32_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 63; mpr16b_32_1_update_0[d0, d1, d2] -> [d2, 1 + 2d1, 1 + 2d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
// Condition for in_update_0(((-1 + i3 == 0) && (i2 >= 0) && (127 - i2 >= 0) && (i1 >= 0) && (127 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))
//   { mpr16b_32_1_update_0[d0, d1, d2] -> [d2, 1 + 2d1, 1 + 2d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for mpr16b_32_1_update_0(((-1 - i2 + 2*floord(1 + i2, 2) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-2 + i3 == 0) && (-1 + i2 >= 0) && (127 - i2 >= 0) && (-1 + i1 >= 0) && (127 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))

  /*
  // Schedules...
    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // mpr16b_32_1_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*2 + 1*1,1*2]
for (int c0 = 0; c0 <= 63; c0++) {
  for (int c1 = 0; c1 <= 127; c1++) {
    for (int c2 = 0; c2 <= 127; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((0 <= c2 && c2 <= 127) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        in_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((1 <= c2 && c2 <= 127) && ((c2 - 1) % 2 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        mpr16b_32_1_update_0((c2 - 1) / 2, (c1 - 1) / 2, (c0 - 0) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // mpr16b_32_1_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*2 + 1*1,1*2]
	for (int c0 = 0; c0 <= 63; c0++) {
	  for (int c1 = 0; c1 <= 127; c1++) {
	    for (int c2 = 0; c2 <= 127; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c2 && c2 <= 127) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        in_update_0(in_oc /* buf name */, in, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((1 <= c2 && c2 <= 127) && ((c2 - 1) % 2 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        mpr16b_32_1_update_0(in /* buf name */, mpr16b_32_1, (c2 - 1) / 2, (c1 - 1) / 2, (c0 - 0) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mpr16b_32_1_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */mpr16b_32_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    mpr16b_32_1_opt(in_oc, mpr16b_32_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0[root = 0, in_0, in_1, in_2] -> in_oc[0, 0] : 0 <= in_0 <= 127 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
const int in_update_0_read_pipe0_num_transfers = 1048576;
  // { mpr16b_32_1_update_0[root = 0, mpr16b_32_1_0, mpr16b_32_1_1, mpr16b_32_1_2] -> mpr16b_32_1[0, 0] : 0 <= mpr16b_32_1_0 <= 63 and 0 <= mpr16b_32_1_1 <= 63 and 0 <= mpr16b_32_1_2 <= 63 }
const int mpr16b_32_1_update_0_write_pipe0_num_transfers = 262144;


extern "C" {

void mpr16b_32_1_opt_accel(hw_uint<16>* in_update_0_read_pipe0, hw_uint<16>* mpr16b_32_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = mpr16b_32_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = mpr16b_32_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > mpr16b_32_1_update_0_write_pipe0_channel;

  burst_read<16>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  mpr16b_32_1_opt_wrapper(in_update_0_read_pipe0_channel, mpr16b_32_1_update_0_write_pipe0_channel, size);

  burst_write<16>(mpr16b_32_1_update_0_write_pipe0, mpr16b_32_1_update_0_write_pipe0_channel, mpr16b_32_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void mpr16b_32_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  mpr16b_32_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = mpr16b_32_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  mpr16b_32_1_opt(in_update_0_read_pipe0, mpr16b_32_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

