#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "dummy_app_opt_compute_units.h"

#include "hw_classes.h"

struct u_u_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 29], [-1, 29]}
	// Capacity: 31
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 29> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_30() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct u_cache {
  u_u_update_0_write0_merged_banks_2_cache u_u_update_0_write0_merged_banks_2;
};



inline void u_u_update_0_write0_write(hw_uint<32> & u_u_update_0_write0, u_cache& u, int d0, int d1) {
  u.u_u_update_0_write0_merged_banks_2.push(u_u_update_0_write0);
}

inline hw_uint<32>  dummy_app_rd0_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dummy_app_rd0 read pattern: { dummy_app_update_0[d0, d1] -> u[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { dummy_app_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 29 and -1 <= d1 <= 29 }
  // DD fold: { dummy_app_update_0[d0, d1] -> 30 : 0 < d0 <= 28 and 0 <= d1 <= 29; dummy_app_update_0[d0, d1] -> (1 + d0) : d0 = 29 and 0 <= d1 <= 29; dummy_app_update_0[d0, d1] -> 30 : d0 = 0 and 0 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_2.peek_30();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  dummy_app_rd1_select(u_cache& u, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dummy_app_rd1 read pattern: { dummy_app_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { dummy_app_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 29 and -1 <= d1 <= 29 }
  // DD fold: {  }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_2.peek_0();
  return value_u_u_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dummy_app_update_0_read
//	dummy_app_rd0
//	dummy_app_rd1
inline hw_uint<64> u_dummy_app_update_0_read_bundle_read(u_cache& u, int d0, int d1) {
  // # of ports in bundle: 2
    // dummy_app_rd0
    // dummy_app_rd1

	hw_uint<64> result;
	hw_uint<32>  dummy_app_rd0_res = dummy_app_rd0_select(u, d0, d1);
	set_at<0, 64>(result, dummy_app_rd0_res);
	hw_uint<32>  dummy_app_rd1_res = dummy_app_rd1_select(u, d0, d1);
	set_at<32, 64>(result, dummy_app_rd1_res);
	return result;
}

// u_update_0_write
//	u_u_update_0_write0
inline void u_u_update_0_write_bundle_write(hw_uint<32>& u_update_0_write, u_cache& u, int d0, int d1) {
	hw_uint<32>  u_u_update_0_write0_res = u_update_0_write.extract<0, 31>();
	u_u_update_0_write0_write(u_u_update_0_write0_res, u, d0, d1);
}



// Operation logic
inline void dummy_app_update_0(u_cache& u, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */dummy_app, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_dummy_app_update_0_read_bundle_read(u/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dummy_app_update_0_u," << d0<< "," << d1<< "," <<  u_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = dummy_app_generated_compute_unrolled_1(u_0_c__0_value);
	// Produce: dummy_app
	dummy_app.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "dummy_app_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
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
void dummy_app_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */dummy_app) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("dummy_app_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  u_cache u;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
	#ifdef __VIVADO_SYNTH__
	#pragma HLS inline recursive
	#endif // __VIVADO_SYNTH__
	
	for (int c0 = -1; c0 <= 29; c0++) {
	  for (int c1 = 0; c1 <= 29; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
	u_update_0(u_off_chip, u, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
	dummy_app_update_0(u, dummy_app, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
#include "dummy_app_opt.h"

#define INPUT_SIZE 930
#define OUTPUT_SIZE 900
extern "C" {

static void read_input(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  for (int i = 0; i < INPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    v.write(input[i]);
  }
}

static void write_output(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    output[i] = v.read();
  }
}

void dummy_app_opt_accel(hw_uint<32>* u_update_0_read, hw_uint<32>* dummy_app_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = u_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = dummy_app_update_0_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = u_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = dummy_app_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > u_update_0_read_channel;
  static HWStream<hw_uint<32> > dummy_app_update_0_write_channel;

  read_input(u_update_0_read, u_update_0_read_channel, size);

  dummy_app_opt(u_update_0_read_channel, dummy_app_update_0_write_channel);

  write_output(dummy_app_update_0_write, dummy_app_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

