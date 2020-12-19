#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: h3_300MHz_1_opt_compute_units.h
#include "h3_300MHz_1_opt_compute_units.h"

struct in_cc_in_cc_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-1, 64], [0, 63]}
	// Capacity: 134
	// # of read delays: 6
  // 0, 1, 66, 67, 68, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 64> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 64> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_66() {
		return f4;
	}

	inline hw_uint<32>  peek_67() {
		return f6;
	}

	inline hw_uint<32>  peek_68() {
		return f8;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_133() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 64
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 64 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 64
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 64 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_cache {
  // # of banks: 1
  in_cc_in_cc_update_0_write0_merged_banks_5_cache in_cc_in_cc_update_0_write0_merged_banks_5;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.push(in_cc_in_cc_update_0_write0);
}

inline hw_uint<32>  h3_300MHz_1_rd0_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_300MHz_1_rd0 read pattern: { h3_300MHz_1_update_0[d0, d1] -> in_cc[-1 + d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { h3_300MHz_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 64 and -1 <= d1 <= 64 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_68();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_300MHz_1_rd1_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_300MHz_1_rd1 read pattern: { h3_300MHz_1_update_0[d0, d1] -> in_cc[d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { h3_300MHz_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 64 and -1 <= d1 <= 64 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_133();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_300MHz_1_rd2_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_300MHz_1_rd2 read pattern: { h3_300MHz_1_update_0[d0, d1] -> in_cc[d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { h3_300MHz_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 64 and -1 <= d1 <= 64 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_67();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_300MHz_1_rd3_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_300MHz_1_rd3 read pattern: { h3_300MHz_1_update_0[d0, d1] -> in_cc[d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { h3_300MHz_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 64 and -1 <= d1 <= 64 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_300MHz_1_rd4_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_300MHz_1_rd4 read pattern: { h3_300MHz_1_update_0[d0, d1] -> in_cc[1 + d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { h3_300MHz_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 64 and -1 <= d1 <= 64 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_66();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_300MHz_1_update_0_read
//	h3_300MHz_1_rd0
//	h3_300MHz_1_rd1
//	h3_300MHz_1_rd2
//	h3_300MHz_1_rd3
//	h3_300MHz_1_rd4
inline hw_uint<160> in_cc_h3_300MHz_1_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 5
    // h3_300MHz_1_rd0
    // h3_300MHz_1_rd1
    // h3_300MHz_1_rd2
    // h3_300MHz_1_rd3
    // h3_300MHz_1_rd4

	hw_uint<160> result;
	hw_uint<32>  h3_300MHz_1_rd0_res = h3_300MHz_1_rd0_select(in_cc, d0, d1, dynamic_address);
	set_at<0, 160>(result, h3_300MHz_1_rd0_res);
	hw_uint<32>  h3_300MHz_1_rd1_res = h3_300MHz_1_rd1_select(in_cc, d0, d1, dynamic_address);
	set_at<32, 160>(result, h3_300MHz_1_rd1_res);
	hw_uint<32>  h3_300MHz_1_rd2_res = h3_300MHz_1_rd2_select(in_cc, d0, d1, dynamic_address);
	set_at<64, 160>(result, h3_300MHz_1_rd2_res);
	hw_uint<32>  h3_300MHz_1_rd3_res = h3_300MHz_1_rd3_select(in_cc, d0, d1, dynamic_address);
	set_at<96, 160>(result, h3_300MHz_1_rd3_res);
	hw_uint<32>  h3_300MHz_1_rd4_res = h3_300MHz_1_rd4_select(in_cc, d0, d1, dynamic_address);
	set_at<128, 160>(result, h3_300MHz_1_rd4_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<32>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 4256 bits


// Operation logic
inline void in_cc_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, in_cc_cache& in_cc, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_1(in_0_c__0_value);
	// Produce: in_cc
	in_cc_in_cc_update_0_write_bundle_write(/* arg names */compute_result, in_cc, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_300MHz_1_update_0(in_cc_cache& in_cc, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */h3_300MHz_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_h3_300MHz_1_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_300MHz_1_generated_compute_unrolled_1(in_cc_0_c__0_value);
	// Produce: h3_300MHz_1
	h3_300MHz_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void h3_300MHz_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */h3_300MHz_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("h3_300MHz_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cc_cache in_cc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 64 and -1 <= d1 <= 64; h3_300MHz_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
//   { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 64 and -1 <= d1 <= 64 }
// Condition for in_cc_update_0(((-1 + i2 == 0) && (1 + i1 >= 0) && (64 - i1 >= 0) && (1 + i0 >= 0) && (64 - i0 >= 0)))
//   { h3_300MHz_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
// Condition for h3_300MHz_1_update_0(((-2 + i2 == 0) && (-1 + i1 >= 0) && (64 - i1 >= 0) && (-1 + i0 >= 0) && (64 - i0 >= 0)))

  /*
  // Schedules...
    // h3_300MHz_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // in_cc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = -1; c0 <= 64; c0++) {
  for (int c1 = -1; c1 <= 64; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-1 <= c1 && c1 <= 64) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 64) && ((c0 - 0) % 1 == 0)) {
      in_cc_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 64) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 64) && ((c0 - 1) % 1 == 0)) {
      h3_300MHz_1_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

  }
}

  */
	  // Schedules...
	    // h3_300MHz_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // in_cc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = -1; c0 <= 64; c0++) {
	  for (int c1 = -1; c1 <= 64; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 64) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 64) && ((c0 - 0) % 1 == 0)) {
	      in_cc_update_0(in /* buf name */, in_cc, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 64) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 64) && ((c0 - 1) % 1 == 0)) {
	      h3_300MHz_1_update_0(in_cc /* buf name */, h3_300MHz_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void h3_300MHz_1_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */h3_300MHz_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    h3_300MHz_1_opt(in, h3_300MHz_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { h3_300MHz_1_update_0[root = 0, h3_300MHz_1_0, h3_300MHz_1_1] -> h3_300MHz_1[0, 0] : 0 <= h3_300MHz_1_0 <= 63 and 0 <= h3_300MHz_1_1 <= 63 }
const int h3_300MHz_1_update_0_write_pipe0_num_transfers = 4096;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : -1 <= in_cc_0 <= 64 and -1 <= in_cc_1 <= 64 }
const int in_cc_update_0_read_pipe0_num_transfers = 4356;


extern "C" {

void h3_300MHz_1_opt_accel(hw_uint<32>* in_cc_update_0_read_pipe0, hw_uint<32>* h3_300MHz_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = h3_300MHz_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = h3_300MHz_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > h3_300MHz_1_update_0_write_pipe0_channel;

  burst_read<32>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  h3_300MHz_1_opt_wrapper(in_cc_update_0_read_pipe0_channel, h3_300MHz_1_update_0_write_pipe0_channel, size);

  burst_write<32>(h3_300MHz_1_update_0_write_pipe0, h3_300MHz_1_update_0_write_pipe0_channel, h3_300MHz_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void h3_300MHz_1_opt_rdai(HWStream<hw_uint<32> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<32> >&  h3_300MHz_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = h3_300MHz_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  h3_300MHz_1_opt(in_cc_update_0_read_pipe0, h3_300MHz_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

