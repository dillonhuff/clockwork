#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: icsc_1s_1_opt_compute_units.h
#include "icsc_1s_1_opt_compute_units.h"

struct in_in_update_0_write0_to_stg0_rd0_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_cache {
  // # of banks: 1
  in_in_update_0_write0_to_stg0_rd0_cache in_in_update_0_write0_to_stg0_rd0;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_to_stg0_rd0.push(in_in_update_0_write0);
}

inline hw_uint<16> stg0_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd0 read pattern: { stg0_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { stg0_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_to_stg0_rd0.peek(/* one reader or all rams */ 0);
  return value_in_in_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<16>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, dynamic_address);
}

// stg0_update_0_read
//	stg0_rd0
inline hw_uint<16> in_stg0_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // stg0_rd0

	hw_uint<16> result;
	hw_uint<16> stg0_rd0_res = stg0_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 16>(result, stg0_rd0_res);
	return result;
}

struct stg0_stg0_update_0_write0_to_icsc_1s_1_rd0_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stg0_cache {
  // # of banks: 1
  stg0_stg0_update_0_write0_to_icsc_1s_1_rd0_cache stg0_stg0_update_0_write0_to_icsc_1s_1_rd0;
};



inline void stg0_stg0_update_0_write0_write(hw_uint<16>& stg0_stg0_update_0_write0, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write0_to_icsc_1s_1_rd0.push(stg0_stg0_update_0_write0);
}

inline hw_uint<16> icsc_1s_1_rd0_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_1s_1_rd0 read pattern: { icsc_1s_1_update_0[d0, d1] -> stg0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_1s_1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { stg0_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_to_icsc_1s_1_rd0.peek(/* one reader or all rams */ 0);
  return value_stg0_stg0_update_0_write0;
  return 0;
}

// # of bundles = 2
// icsc_1s_1_update_0_read
//	icsc_1s_1_rd0
inline hw_uint<16> stg0_icsc_1s_1_update_0_read_bundle_read(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // icsc_1s_1_rd0

	hw_uint<16> result;
	hw_uint<16> icsc_1s_1_rd0_res = icsc_1s_1_rd0_select(stg0, d0, d1, dynamic_address);
	set_at<0, 16>(result, icsc_1s_1_rd0_res);
	return result;
}

// stg0_update_0_write
//	stg0_stg0_update_0_write0
inline void stg0_stg0_update_0_write_bundle_write(hw_uint<16>& stg0_update_0_write, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg0_stg0_update_0_write0_res = stg0_update_0_write.extract<0, 15>();
	stg0_stg0_update_0_write0_write(stg0_stg0_update_0_write0_res, stg0, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void in_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = in_generated_compute_unrolled_1(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_update_0(in_cache& in, stg0_cache& stg0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_stg0_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_generated_compute_unrolled_1(in_0_c__0_value);
	// Produce: stg0
	stg0_stg0_update_0_write_bundle_write(/* arg names */compute_result, stg0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void icsc_1s_1_update_0(stg0_cache& stg0, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */icsc_1s_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0_0_c__0_value = stg0_icsc_1s_1_update_0_read_bundle_read(stg0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = icsc_1s_1_generated_compute_unrolled_1(stg0_0_c__0_value);
	// Produce: icsc_1s_1
	icsc_1s_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void icsc_1s_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */icsc_1s_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("icsc_1s_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg0_cache stg0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; icsc_1s_1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; stg0_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
//   { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for in_update_0(((-1 + i2 == 0) && (i1 >= 0) && (1919 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { icsc_1s_1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for icsc_1s_1_update_0(((-3 + i2 == 0) && (i1 >= 0) && (1919 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { stg0_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for stg0_update_0(((-2 + i2 == 0) && (i1 >= 0) && (1919 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))

  /*
  // Schedules...
    // icsc_1s_1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // stg0_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
for (int c0 = 0; c0 <= 1079; c0++) {
  for (int c1 = 0; c1 <= 1919; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 1919) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 1919) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
      stg0_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 1919) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
      icsc_1s_1_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

  }
}

  */
	  // Schedules...
	    // icsc_1s_1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // stg0_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	for (int c0 = 0; c0 <= 1079; c0++) {
	  for (int c1 = 0; c1 <= 1919; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 1919) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 1919) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	      stg0_update_0(in /* buf name */, stg0, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 1919) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	      icsc_1s_1_update_0(stg0 /* buf name */, icsc_1s_1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void icsc_1s_1_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */icsc_1s_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    icsc_1s_1_opt(in_off_chip, icsc_1s_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { icsc_1s_1_update_0[root = 0, icsc_1s_1_0, icsc_1s_1_1] -> icsc_1s_1[0, 0] : 0 <= icsc_1s_1_0 <= 1919 and 0 <= icsc_1s_1_1 <= 1079 }
const int icsc_1s_1_update_0_write_pipe0_num_transfers = 2073600;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 1919 and 0 <= in_1 <= 1079 }
const int in_update_0_read_pipe0_num_transfers = 2073600;


extern "C" {

void icsc_1s_1_opt_accel(hw_uint<16>* in_update_0_read_pipe0, hw_uint<16>* icsc_1s_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = icsc_1s_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = icsc_1s_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > icsc_1s_1_update_0_write_pipe0_channel;

  burst_read<16>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  icsc_1s_1_opt_wrapper(in_update_0_read_pipe0_channel, icsc_1s_1_update_0_write_pipe0_channel, size);

  burst_write<16>(icsc_1s_1_update_0_write_pipe0, icsc_1s_1_update_0_write_pipe0_channel, icsc_1s_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void icsc_1s_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  icsc_1s_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = icsc_1s_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  icsc_1s_1_opt(in_update_0_read_pipe0, icsc_1s_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

