#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "jacobi2d_unrolled_2_opt_compute_units.h"

#include "hw_classes.h"

struct t1_t1_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-2, 16], [-1, 16]}
	// Capacity: 22
	// # of read delays: 5
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 8> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 9> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_10() {
		return f4;
	}

	inline hw_uint<32>  peek_11() {
		return f6;
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_21() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 9
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 9 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 8
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 8 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct t1_t1_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-1, 17], [-1, 16]}
	// Capacity: 22
	// # of read delays: 5
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 9> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 8> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_11() {
		return f4;
	}

	inline hw_uint<32>  peek_12() {
		return f6;
	}

	inline hw_uint<32>  peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_21() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 8
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 8 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 9
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 9 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct t1_cache {
  t1_t1_update_0_write0_merged_banks_4_cache t1_t1_update_0_write0_merged_banks_4;
  t1_t1_update_0_write1_merged_banks_4_cache t1_t1_update_0_write1_merged_banks_4;
};



inline void t1_t1_update_0_write0_write(hw_uint<32> & t1_t1_update_0_write0, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_update_0_write0_merged_banks_4.push(t1_t1_update_0_write0);
}

inline void t1_t1_update_0_write1_write(hw_uint<32> & t1_t1_update_0_write1, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_update_0_write1_merged_banks_4.push(t1_t1_update_0_write1);
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd0_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_2_rd0 read pattern: { jacobi2d_unrolled_2_update_0[d0, d1] -> t1[-1 + 2d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 8 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_2_update_0[d0, d1] -> 12 : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write1 = t1.t1_t1_update_0_write1_merged_banks_4.peek_12();
  return value_t1_t1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd1_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_2_rd1 read pattern: { jacobi2d_unrolled_2_update_0[d0, d1] -> t1[2d0, -1 + d1] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 8 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_2_update_0[d0, d1] -> 21 : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_4.peek_21();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd2_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_2_rd2 read pattern: { jacobi2d_unrolled_2_update_0[d0, d1] -> t1[2d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 8 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_2_update_0[d0, d1] -> 11 : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_4.peek_11();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd3_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_2_rd3 read pattern: { jacobi2d_unrolled_2_update_0[d0, d1] -> t1[2d0, 1 + d1] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 8 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_4.peek_1();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd4_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_2_rd4 read pattern: { jacobi2d_unrolled_2_update_0[d0, d1] -> t1[1 + 2d0, -1 + d1] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 8 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_2_update_0[d0, d1] -> 21 : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write1 = t1.t1_t1_update_0_write1_merged_banks_4.peek_21();
  return value_t1_t1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd5_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_2_rd5 read pattern: { jacobi2d_unrolled_2_update_0[d0, d1] -> t1[1 + 2d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 8 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_2_update_0[d0, d1] -> 11 : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write1 = t1.t1_t1_update_0_write1_merged_banks_4.peek_11();
  return value_t1_t1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd6_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_2_rd6 read pattern: { jacobi2d_unrolled_2_update_0[d0, d1] -> t1[1 + 2d0, 1 + d1] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 8 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write1 = t1.t1_t1_update_0_write1_merged_banks_4.peek_1();
  return value_t1_t1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd7_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_2_rd7 read pattern: { jacobi2d_unrolled_2_update_0[d0, d1] -> t1[2 + 2d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 8 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_2_update_0[d0, d1] -> 10 : 0 <= d0 <= 6 and 0 <= d1 <= 15; jacobi2d_unrolled_2_update_0[d0, d1] -> (3 + d0) : d0 = 7 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_4.peek_10();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// jacobi2d_unrolled_2_update_0_read
//	jacobi2d_unrolled_2_rd0
//	jacobi2d_unrolled_2_rd1
//	jacobi2d_unrolled_2_rd2
//	jacobi2d_unrolled_2_rd3
//	jacobi2d_unrolled_2_rd4
//	jacobi2d_unrolled_2_rd5
//	jacobi2d_unrolled_2_rd6
//	jacobi2d_unrolled_2_rd7
inline hw_uint<256> t1_jacobi2d_unrolled_2_update_0_read_bundle_read(t1_cache& t1, int d0, int d1) {
  // # of ports in bundle: 8
    // jacobi2d_unrolled_2_rd0
    // jacobi2d_unrolled_2_rd1
    // jacobi2d_unrolled_2_rd2
    // jacobi2d_unrolled_2_rd3
    // jacobi2d_unrolled_2_rd4
    // jacobi2d_unrolled_2_rd5
    // jacobi2d_unrolled_2_rd6
    // jacobi2d_unrolled_2_rd7

	hw_uint<256> result;
	hw_uint<32>  jacobi2d_unrolled_2_rd0_res = jacobi2d_unrolled_2_rd0_select(t1, d0, d1);
	set_at<0, 256>(result, jacobi2d_unrolled_2_rd0_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd1_res = jacobi2d_unrolled_2_rd1_select(t1, d0, d1);
	set_at<32, 256>(result, jacobi2d_unrolled_2_rd1_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd2_res = jacobi2d_unrolled_2_rd2_select(t1, d0, d1);
	set_at<64, 256>(result, jacobi2d_unrolled_2_rd2_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd3_res = jacobi2d_unrolled_2_rd3_select(t1, d0, d1);
	set_at<96, 256>(result, jacobi2d_unrolled_2_rd3_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd4_res = jacobi2d_unrolled_2_rd4_select(t1, d0, d1);
	set_at<128, 256>(result, jacobi2d_unrolled_2_rd4_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd5_res = jacobi2d_unrolled_2_rd5_select(t1, d0, d1);
	set_at<160, 256>(result, jacobi2d_unrolled_2_rd5_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd6_res = jacobi2d_unrolled_2_rd6_select(t1, d0, d1);
	set_at<192, 256>(result, jacobi2d_unrolled_2_rd6_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd7_res = jacobi2d_unrolled_2_rd7_select(t1, d0, d1);
	set_at<224, 256>(result, jacobi2d_unrolled_2_rd7_res);
	return result;
}

// t1_update_0_write
//	t1_t1_update_0_write0
//	t1_t1_update_0_write1
inline void t1_t1_update_0_write_bundle_write(hw_uint<64>& t1_update_0_write, t1_cache& t1, int d0, int d1) {
	hw_uint<32>  t1_t1_update_0_write0_res = t1_update_0_write.extract<0, 31>();
	t1_t1_update_0_write0_write(t1_t1_update_0_write0_res, t1, d0, d1);
	hw_uint<32>  t1_t1_update_0_write1_res = t1_update_0_write.extract<32, 63>();
	t1_t1_update_0_write1_write(t1_t1_update_0_write1_res, t1, d0, d1);
}



// Operation logic
inline void t1_update_0(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */t1_arg, t1_cache& t1, int d0, int d1) {
	// Consume: t1_arg
	auto t1_arg_0_c__0_value = t1_arg.read();
	auto compute_result = id_unrolled_2(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_update_0_write_bundle_write(compute_result, t1, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  hw_uint<32> debug_compute_result_lane_1;
  set_at<0, 32, 32>(debug_compute_result_lane_1, debug_compute_result.extract<32, 63>());
  *global_debug_handle << "t1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "t1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__
}

inline void jacobi2d_unrolled_2_update_0(t1_cache& t1, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */jacobi2d_unrolled_2, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_jacobi2d_unrolled_2_update_0_read_bundle_read(t1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "jacobi2d_unrolled_2_update_0_t1," << d0<< "," << d1<< "," <<  t1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = jacobi2d_compute_unrolled_2(t1_0_c__0_value);
	// Produce: jacobi2d_unrolled_2
	jacobi2d_unrolled_2.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  hw_uint<32> debug_compute_result_lane_1;
  set_at<0, 32, 32>(debug_compute_result_lane_1, debug_compute_result.extract<32, 63>());
  *global_debug_handle << "jacobi2d_unrolled_2_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "jacobi2d_unrolled_2_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void jacobi2d_unrolled_2_opt(HWStream<hw_uint<64> >& /* get_args num ports = 2 */t1_arg, HWStream<hw_uint<64> >& /* get_args num ports = 2 */jacobi2d_unrolled_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("jacobi2d_unrolled_2_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
	#ifdef __VIVADO_SYNTH__
	#pragma HLS inline recursive
	#endif // __VIVADO_SYNTH__
	
	for (int c0 = -1; c0 <= 16; c0++) {
	  for (int c1 = -1; c1 <= 8; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 8) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 16) && ((c0 - 0) % 1 == 0)) {
	t1_update_0(t1_arg, t1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 8) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 16) && ((c0 - 1) % 1 == 0)) {
	jacobi2d_unrolled_2_update_0(t1, jacobi2d_unrolled_2, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
