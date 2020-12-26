#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: float_stencil_1_opt_compute_units.h
#include "float_stencil_1_opt_compute_units.h"

struct in_cc_in_cc_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 31], [-1, 31]}
	// Capacity: 33
	// # of read delays: 2
  // 0, 32
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 31> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_32() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_cache {
  // # of banks: 1
  in_cc_in_cc_update_0_write0_merged_banks_2_cache in_cc_in_cc_update_0_write0_merged_banks_2;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_2.push(in_cc_in_cc_update_0_write0);
}

inline hw_uint<32>  float_stencil_1_rd0_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // float_stencil_1_rd0 read pattern: { float_stencil_1_update_0[d0, d1] -> in_cc[d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { float_stencil_1_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 31 and -1 <= d1 <= 31 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_2.peek_32();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  float_stencil_1_rd1_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // float_stencil_1_rd1 read pattern: { float_stencil_1_update_0[d0, d1] -> in_cc[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { float_stencil_1_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 31 and -1 <= d1 <= 31 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_2.peek_0();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

// # of bundles = 2
// float_stencil_1_update_0_read
//	float_stencil_1_rd0
//	float_stencil_1_rd1
inline hw_uint<64> in_cc_float_stencil_1_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // float_stencil_1_rd0
    // float_stencil_1_rd1

	hw_uint<64> result;
	hw_uint<32>  float_stencil_1_rd0_res = float_stencil_1_rd0_select(in_cc, d0, d1, dynamic_address);
	set_at<0, 64>(result, float_stencil_1_rd0_res);
	hw_uint<32>  float_stencil_1_rd1_res = float_stencil_1_rd1_select(in_cc, d0, d1, dynamic_address);
	set_at<32, 64>(result, float_stencil_1_rd1_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<32>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 1024 bits


// Operation logic
inline void float_stencil_1_update_0(in_cc_cache& in_cc, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */float_stencil_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_float_stencil_1_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = float_stencil_1_generated_compute_unrolled_1(in_cc_0_c__0_value);
	// Produce: float_stencil_1
	float_stencil_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

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

// Driver function
void float_stencil_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */float_stencil_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("float_stencil_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cc_cache in_cc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { float_stencil_1_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31; in_cc_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 31 and -1 <= d1 <= 31 }
//   { float_stencil_1_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
// Condition for float_stencil_1_update_0(((-2 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (i0 >= 0) && (31 - i0 >= 0)))
//   { in_cc_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 31 and -1 <= d1 <= 31 }
// Condition for in_cc_update_0(((-1 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (1 + i0 >= 0) && (31 - i0 >= 0)))

  /*
  // Schedules...
    // float_stencil_1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
    // in_cc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = -1; c0 <= 31; c0++) {
  for (int c1 = 0; c1 <= 31; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 31) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 31) && ((c0 - 0) % 1 == 0)) {
      in_cc_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 31) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 0) % 1 == 0)) {
      float_stencil_1_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

  }
}

  */
	  // Schedules...
	    // float_stencil_1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // in_cc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = -1; c0 <= 31; c0++) {
	  for (int c1 = 0; c1 <= 31; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 31) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 31) && ((c0 - 0) % 1 == 0)) {
	      in_cc_update_0(in /* buf name */, in_cc, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 31) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 0) % 1 == 0)) {
	      float_stencil_1_update_0(in_cc /* buf name */, float_stencil_1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void float_stencil_1_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */float_stencil_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    float_stencil_1_opt(in, float_stencil_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { float_stencil_1_update_0[root = 0, float_stencil_1_0, float_stencil_1_1] -> float_stencil_1[0, 0] : 0 <= float_stencil_1_0 <= 31 and 0 <= float_stencil_1_1 <= 31 }
const int float_stencil_1_update_0_write_pipe0_num_transfers = 1024;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : 0 <= in_cc_0 <= 31 and -1 <= in_cc_1 <= 31 }
const int in_cc_update_0_read_pipe0_num_transfers = 1056;


extern "C" {

void float_stencil_1_opt_accel(hw_uint<32>* in_cc_update_0_read_pipe0, hw_uint<32>* float_stencil_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = float_stencil_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = float_stencil_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > float_stencil_1_update_0_write_pipe0_channel;

  burst_read<32>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  float_stencil_1_opt_wrapper(in_cc_update_0_read_pipe0_channel, float_stencil_1_update_0_write_pipe0_channel, size);

  burst_write<32>(float_stencil_1_update_0_write_pipe0, float_stencil_1_update_0_write_pipe0_channel, float_stencil_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void float_stencil_1_opt_rdai(HWStream<hw_uint<32> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<32> >&  float_stencil_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = float_stencil_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  float_stencil_1_opt(in_cc_update_0_read_pipe0, float_stencil_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

