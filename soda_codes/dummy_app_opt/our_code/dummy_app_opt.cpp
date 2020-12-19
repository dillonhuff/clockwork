#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: dummy_app_opt_compute_units.h
#include "dummy_app_opt_compute_units.h"

#include "hw_classes.h"

struct u_u_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 29], [-1, 29]}
	// Capacity: 31
	// # of read delays: 2
  // 0, 30
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
  // # of banks: 1
  u_u_update_0_write0_merged_banks_2_cache u_u_update_0_write0_merged_banks_2;
};



inline void u_u_update_0_write0_write(hw_uint<32> & u_u_update_0_write0, u_cache& u, int d0, int d1, int dynamic_address) {
  u.u_u_update_0_write0_merged_banks_2.push(u_u_update_0_write0);
}

inline hw_uint<32>  dummy_app_rd0_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dummy_app_rd0 read pattern: { dummy_app_update_0[d0, d1] -> u[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { dummy_app_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 29 and -1 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_2.peek_30();
  return value_u_u_update_0_write0;
  return 0;
}

inline hw_uint<32>  dummy_app_rd1_select(u_cache& u, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dummy_app_rd1 read pattern: { dummy_app_update_0[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { dummy_app_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { u_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 29 and -1 <= d1 <= 29 }
  auto value_u_u_update_0_write0 = u.u_u_update_0_write0_merged_banks_2.peek_0();
  return value_u_u_update_0_write0;
  return 0;
}

// # of bundles = 2
// dummy_app_update_0_read
//	dummy_app_rd0
//	dummy_app_rd1
inline hw_uint<64> u_dummy_app_update_0_read_bundle_read(u_cache& u, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dummy_app_rd0
    // dummy_app_rd1

	hw_uint<64> result;
	hw_uint<32>  dummy_app_rd0_res = dummy_app_rd0_select(u, d0, d1, dynamic_address);
	set_at<0, 64>(result, dummy_app_rd0_res);
	hw_uint<32>  dummy_app_rd1_res = dummy_app_rd1_select(u, d0, d1, dynamic_address);
	set_at<32, 64>(result, dummy_app_rd1_res);
	return result;
}

// u_update_0_write
//	u_u_update_0_write0
inline void u_u_update_0_write_bundle_write(hw_uint<32>& u_update_0_write, u_cache& u, int d0, int d1, int dynamic_address) {
	hw_uint<32>  u_u_update_0_write0_res = u_update_0_write.extract<0, 31>();
	u_u_update_0_write0_write(u_u_update_0_write0_res, u, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 960 bits


// Operation logic
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

inline void dummy_app_update_0(u_cache& u, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */dummy_app, int d0, int d1) {
  // Dynamic address computation

	// Consume: u
	auto u_0_c__0_value = u_dummy_app_update_0_read_bundle_read(u/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = dummy_app_generated_compute_unrolled_1(u_0_c__0_value);
	// Produce: dummy_app
	dummy_app.write(compute_result);

#ifndef __VIVADO_SYNTH__
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

// schedule: { dummy_app_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29; u_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 29 and -1 <= d1 <= 29 }
//   { dummy_app_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
// Condition for dummy_app_update_0(((-2 + i2 == 0) && (i1 >= 0) && (29 - i1 >= 0) && (i0 >= 0) && (29 - i0 >= 0)))
//   { u_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 29 and -1 <= d1 <= 29 }
// Condition for u_update_0(((-1 + i2 == 0) && (i1 >= 0) && (29 - i1 >= 0) && (1 + i0 >= 0) && (29 - i0 >= 0)))

  /*
  // Schedules...
    // dummy_app_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
    // u_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // u_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
for (int c0 = -1; c0 <= 29; c0++) {
  for (int c1 = 0; c1 <= 29; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
      u_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
      dummy_app_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

  }
}

  */
	  // Schedules...
	    // dummy_app_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // u_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // u_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -1; c0 <= 29; c0++) {
	  for (int c1 = 0; c1 <= 29; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
	      u_update_0(u_off_chip /* buf name */, u, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 29) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 29) && ((c0 - 0) % 1 == 0)) {
	      dummy_app_update_0(u /* buf name */, dummy_app, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void dummy_app_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */dummy_app, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    dummy_app_opt(u_off_chip, dummy_app);
  }
}
#ifdef __VIVADO_SYNTH__
  // { dummy_app_update_0[root = 0, dummy_app_0, dummy_app_1] -> dummy_app[0, 0] : 0 <= dummy_app_0 <= 29 and 0 <= dummy_app_1 <= 29 }
const int dummy_app_update_0_write_pipe0_num_transfers = 900;
  // { u_update_0[root = 0, u_0, u_1] -> u_off_chip[0, 0] : 0 <= u_0 <= 29 and -1 <= u_1 <= 29 }
const int u_update_0_read_pipe0_num_transfers = 930;


extern "C" {

void dummy_app_opt_accel(hw_uint<32>* u_update_0_read_pipe0, hw_uint<32>* dummy_app_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = u_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = dummy_app_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = u_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = dummy_app_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > u_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > dummy_app_update_0_write_pipe0_channel;

  burst_read<32>(u_update_0_read_pipe0, u_update_0_read_pipe0_channel, u_update_0_read_pipe0_num_transfers*size);

  dummy_app_opt_wrapper(u_update_0_read_pipe0_channel, dummy_app_update_0_write_pipe0_channel, size);

  burst_write<32>(dummy_app_update_0_write_pipe0, dummy_app_update_0_write_pipe0_channel, dummy_app_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void dummy_app_opt_rdai(HWStream<hw_uint<32> >& u_update_0_read_pipe0, HWStream<hw_uint<32> >&  dummy_app_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = u_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = dummy_app_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  dummy_app_opt(u_update_0_read_pipe0, dummy_app_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

