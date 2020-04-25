#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "sum_float_opt_compute_units.h"

#include "hw_classes.h"

struct f_f_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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
  f_f_update_0_write0_merged_banks_1_cache f_f_update_0_write0_merged_banks_1;
};



inline void f_f_update_0_write0_write(hw_uint<32> & f_f_update_0_write0, f_cache& f, int d0, int d1) {
  f.f_f_update_0_write0_merged_banks_1.push(f_f_update_0_write0);
}

inline hw_uint<32>  sum_float_rd0_select(f_cache& f, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_float_rd0 read pattern: { sum_float_update_0[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_float_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { f_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: {  }
  auto value_f_f_update_0_write0 = f.f_f_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_f_f_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// f_update_0_write
//	f_f_update_0_write0
inline void f_f_update_0_write_bundle_write(hw_uint<32>& f_update_0_write, f_cache& f, int d0, int d1) {
	hw_uint<32>  f_f_update_0_write0_res = f_update_0_write.extract<0, 31>();
	f_f_update_0_write0_write(f_f_update_0_write0_res, f, d0, d1);
}

// sum_float_update_0_read
//	sum_float_rd0
inline hw_uint<32> f_sum_float_update_0_read_bundle_read(f_cache& f, int d0, int d1) {
  // # of ports in bundle: 1
    // sum_float_rd0

	hw_uint<32> result;
	hw_uint<32>  sum_float_rd0_res = sum_float_rd0_select(f, d0, d1);
	set_at<0, 32>(result, sum_float_rd0_res);
	return result;
}

#include "hw_classes.h"

struct u_u_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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
  u_u_update_0_write0_merged_banks_1_cache u_u_update_0_write0_merged_banks_1;
};



inline void u_u_update_0_write0_write(hw_uint<32> & u_u_update_0_write0, u_cache& u, int d0, int d1) {
  u.u_u_update_0_write0_merged_banks_1.push(u_u_update_0_write0);
}

inline hw_uint<32>  sum_float_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sum_float_rd0 read pattern: { sum_float_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sum_float_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // DD fold: {  }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// sum_float_update_0_read
//	sum_float_rd0
inline hw_uint<32> u_sum_float_update_0_read_bundle_read(u_cache& u, int d0, int d1) {
  // # of ports in bundle: 1
    // sum_float_rd0

	hw_uint<32> result;
	hw_uint<32>  sum_float_rd0_res = sum_float_rd0_select(u, d0, d1);
	set_at<0, 32>(result, sum_float_rd0_res);
	return result;
}

// u_update_0_write
//	u_u_update_0_write0
inline void u_u_update_0_write_bundle_write(hw_uint<32>& u_update_0_write, u_cache& u, int d0, int d1) {
	hw_uint<32>  u_u_update_0_write0_res = u_update_0_write.extract<0, 31>();
	u_u_update_0_write0_write(u_u_update_0_write0_res, u, d0, d1);
}



// Operation logic
inline void sum_float_update_0(f_cache& f, u_cache& u, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */sum_float, int d0, int d1) {
	// Consume: f
	auto f_0_c__0_value = f_sum_float_update_0_read_bundle_read(f/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "sum_float_update_0_f," << d0<< "," << d1<< "," <<  f_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: u
	auto u_0_c__0_value = u_sum_float_update_0_read_bundle_read(u/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "sum_float_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = fadd2_unrolled_1(f_0_c__0_value, u_0_c__0_value);
	// Produce: sum_float
	sum_float.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "sum_float_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void f_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */f_off_chip, f_cache& f, int d0, int d1) {
	// Consume: f_off_chip
	auto f_off_chip_0_c__0_value = f_off_chip.read();
	auto compute_result = id_unrolled_1(f_off_chip_0_c__0_value);
	// Produce: f
	f_f_update_0_write_bundle_write(compute_result, f, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "f_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void u_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */u_off_chip, u_cache& u, int d0, int d1) {
	// Consume: u_off_chip
	auto u_off_chip_0_c__0_value = u_off_chip.read();
	auto compute_result = id_unrolled_1(u_off_chip_0_c__0_value);
	// Produce: u
	u_u_update_0_write_bundle_write(compute_result, u, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "u_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
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
	
	for (int c0 = 0; c0 <= 29; c0++) {
	  for (int c1 = 0; c1 <= 29; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
	f_update_0(f_off_chip, f, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
	u_update_0(u_off_chip, u, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
	sum_float_update_0(f, u, sum_float, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

