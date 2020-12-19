#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sum_float_opt_compute_units.h
#include "sum_float_opt_compute_units.h"

#include "hw_classes.h"

struct f_f_update_0_write0_to_sum_float_rd0_cache {
	// RAM Box: {[0, 29], [0, 29]}
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

struct f_cache {
  // # of banks: 1
  f_f_update_0_write0_to_sum_float_rd0_cache f_f_update_0_write0_to_sum_float_rd0;
};



inline void f_f_update_0_write0_write(hw_uint<32> & f_f_update_0_write0, f_cache& f, int d0, int d1, int dynamic_address) {
  f.f_f_update_0_write0_to_sum_float_rd0.push(f_f_update_0_write0);
}

inline hw_uint<32>  sum_float_rd0_select(f_cache& f, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_float_rd0 read pattern: { sum_float_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_float_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_to_sum_float_rd0.peek(/* one reader or all rams */ 0);
  return value_f_f_update_0_write0;
  return 0;
}

// # of bundles = 2
// f_update_0_write
//	f_f_update_0_write0
inline void f_f_update_0_write_bundle_write(hw_uint<32>& f_update_0_write, f_cache& f, int d0, int d1, int dynamic_address) {
	hw_uint<32>  f_f_update_0_write0_res = f_update_0_write.extract<0, 31>();
	f_f_update_0_write0_write(f_f_update_0_write0_res, f, d0, d1, dynamic_address);
}

// sum_float_update_0_read
//	sum_float_rd0
inline hw_uint<32> f_sum_float_update_0_read_bundle_read(f_cache& f, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // sum_float_rd0

	hw_uint<32> result;
	hw_uint<32>  sum_float_rd0_res = sum_float_rd0_select(f, d0, d1, dynamic_address);
	set_at<0, 32>(result, sum_float_rd0_res);
	return result;
}

#include "hw_classes.h"

struct u_u_update_0_write0_to_sum_float_rd0_cache {
	// RAM Box: {[0, 29], [0, 29]}
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

struct u_cache {
  // # of banks: 1
  u_u_update_0_write0_to_sum_float_rd0_cache u_u_update_0_write0_to_sum_float_rd0;
};



inline void u_u_update_0_write0_write(hw_uint<32> & u_u_update_0_write0, u_cache& u, int d0, int d1, int dynamic_address) {
  u.u_u_update_0_write0_to_sum_float_rd0.push(u_u_update_0_write0);
}

inline hw_uint<32>  sum_float_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_float_rd0 read pattern: { sum_float_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_float_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_to_sum_float_rd0.peek(/* one reader or all rams */ 0);
  return value_u_u_update_0_write0;
  return 0;
}

// # of bundles = 2
// sum_float_update_0_read
//	sum_float_rd0
inline hw_uint<32> u_sum_float_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // sum_float_rd0

	hw_uint<32> result;
	hw_uint<32>  sum_float_rd0_res = sum_float_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 32>(result, sum_float_rd0_res);
	return result;
}

// u_update_0_write
//	u_u_update_0_write0
inline void u_u_update_0_write_bundle_write(hw_uint<32>& u_update_0_write, u_cache& u, int d0, int d1, int dynamic_address) {
	hw_uint<32>  u_u_update_0_write0_res = u_update_0_write.extract<0, 31>();
	u_u_update_0_write0_write(u_u_update_0_write0_res, u, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void sum_float_update_0(f_cache& f, u_cache& u, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */sum_float, int d0, int d1) {
  // Dynamic address computation

	// Consume: f
	auto f_0_c__0_value = f_sum_float_update_0_read_bundle_read(f/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: u
	auto u_0_c__0_value = u_sum_float_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = fadd2_unrolled_1(f_0_c__0_value, u_0_c__0_value);
	// Produce: sum_float
	sum_float.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void f_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */f_off_chip, f_cache& f, int d0, int d1) {
  // Dynamic address computation

	// Consume: f_off_chip
	auto f_off_chip_0_c__0_value = f_off_chip.read();
	auto compute_result = id_unrolled_1(f_off_chip_0_c__0_value);
	// Produce: f
	f_f_update_0_write_bundle_write(/* arg names */compute_result, f, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void u_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */u_off_chip, u_cache& u, int d0, int d1) {
  // Dynamic address computation

	// Consume: u_off_chip
	auto u_off_chip_0_c__0_value = u_off_chip.read();
	auto compute_result = id_unrolled_1(u_off_chip_0_c__0_value);
	// Produce: u
	u_u_update_0_write_bundle_write(/* arg names */compute_result, u, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sum_float_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */sum_float) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sum_float_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  f_cache f;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  u_cache u;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 29 and 0 <= d1 <= 29; sum_float_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29; f_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
//   { u_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for u_update_0(((-3 + i2 == 0) && (i1 >= 0) && (29 - i1 >= 0) && (i0 >= 0) && (29 - i0 >= 0)))
//   { sum_float_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for sum_float_update_0(((-4 + i2 == 0) && (i1 >= 0) && (29 - i1 >= 0) && (i0 >= 0) && (29 - i0 >= 0)))
//   { f_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for f_update_0(((-1 + i2 == 0) && (i1 >= 0) && (29 - i1 >= 0) && (i0 >= 0) && (29 - i0 >= 0)))

  /*
  // Schedules...
    // f_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // f_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // sum_float_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*4]
    // u_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
    // u_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
for (int c0 = 0; c0 <= 29; c0++) {
  for (int c1 = 0; c1 <= 29; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
      f_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
      u_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
      sum_float_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

  }
}

  */
	  // Schedules...
	    // f_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // f_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // sum_float_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*4]
	    // u_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // u_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
	for (int c0 = 0; c0 <= 29; c0++) {
	  for (int c1 = 0; c1 <= 29; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
	      f_update_0(f_off_chip /* buf name */, f, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
	      u_update_0(u_off_chip /* buf name */, u, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
	      sum_float_update_0(f /* buf name */, u /* buf name */, sum_float, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sum_float_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */sum_float, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sum_float_opt(f_off_chip, u_off_chip, sum_float);
  }
}
#ifdef __VIVADO_SYNTH__
  // { f_update_0[root = 0, f_0, f_1] -> f_off_chip[0, 0] : 0 <= f_0 <= 29 and 0 <= f_1 <= 29 }
const int f_update_0_read_pipe0_num_transfers = 900;
  // { sum_float_update_0[root = 0, sum_float_0, sum_float_1] -> sum_float[0, 0] : 0 <= sum_float_0 <= 29 and 0 <= sum_float_1 <= 29 }
const int sum_float_update_0_write_pipe0_num_transfers = 900;
  // { u_update_0[root = 0, u_0, u_1] -> u_off_chip[0, 0] : 0 <= u_0 <= 29 and 0 <= u_1 <= 29 }
const int u_update_0_read_pipe0_num_transfers = 900;


extern "C" {

void sum_float_opt_accel(hw_uint<32>* f_update_0_read_pipe0, hw_uint<32>* u_update_0_read_pipe0, hw_uint<32>* sum_float_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = f_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = u_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = sum_float_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = f_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = u_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sum_float_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > f_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > u_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > sum_float_update_0_write_pipe0_channel;

  burst_read<32>(f_update_0_read_pipe0, f_update_0_read_pipe0_channel, f_update_0_read_pipe0_num_transfers*size);
  burst_read<32>(u_update_0_read_pipe0, u_update_0_read_pipe0_channel, u_update_0_read_pipe0_num_transfers*size);

  sum_float_opt_wrapper(f_update_0_read_pipe0_channel, u_update_0_read_pipe0_channel, sum_float_update_0_write_pipe0_channel, size);

  burst_write<32>(sum_float_update_0_write_pipe0, sum_float_update_0_write_pipe0_channel, sum_float_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sum_float_opt_rdai(HWStream<hw_uint<32> >& f_update_0_read_pipe0, HWStream<hw_uint<32> >& u_update_0_read_pipe0, HWStream<hw_uint<32> >&  sum_float_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = f_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = u_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = sum_float_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sum_float_opt(f_update_0_read_pipe0, u_update_0_read_pipe0, sum_float_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

