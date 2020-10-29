#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: mp_naive_naive_compute_units.h
#include "mp_naive_naive_compute_units.h"

#include "hw_classes.h"

struct in_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 127], [0, 127], [0, 63]}
  hw_uint<32>  RAM[128][128][64];
  inline hw_uint<32>  read(int d0, int d1, int d2) {
    return RAM[d0][d1][d2];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1, int d2) {
    RAM[d0][d1][d2] = value;
  }

};

struct in_cache {
  // # of banks: 1
  in_all_inputs_to_all_outputs_cache in_all_inputs_to_all_outputs;
};



inline void in_in_update_0_write0_write(hw_uint<32> & in_in_update_0_write0, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write0, 2*d0 - 0, d1 - 0, d2 - 0);
}

inline void in_in_update_0_write1_write(hw_uint<32> & in_in_update_0_write1, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_all_inputs_to_all_outputs.write(in_in_update_0_write1, 1 + 2*d0 - 0, d1 - 0, d2 - 0);
}

inline hw_uint<32>  mp_naive_rd0_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp_naive_rd0 read pattern: { mp_naive_update_0[d0, d1, d2] -> in[2d0, 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2*d0 - 0, 2*d1 - 0, d2 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<32>  mp_naive_rd1_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp_naive_rd1 read pattern: { mp_naive_update_0[d0, d1, d2] -> in[2d0, 1 + 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(2*d0 - 0, 1 + 2*d1 - 0, d2 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<32>  mp_naive_rd2_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp_naive_rd2 read pattern: { mp_naive_update_0[d0, d1, d2] -> in[1 + 2d0, 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(1 + 2*d0 - 0, 2*d1 - 0, d2 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<32>  mp_naive_rd3_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp_naive_rd3 read pattern: { mp_naive_update_0[d0, d1, d2] -> in[1 + 2d0, 1 + 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_all_inputs_to_all_outputs.read(1 + 2*d0 - 0, 1 + 2*d1 - 0, d2 - 0);
  return value_in_in_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
inline void in_in_update_0_write_bundle_write(hw_uint<64>& in_update_0_write, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  in_in_update_0_write0_res = in_update_0_write.extract<0, 31>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write1_res = in_update_0_write.extract<32, 63>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1, d2, dynamic_address);
}

// mp_naive_update_0_read
//	mp_naive_rd0
//	mp_naive_rd1
//	mp_naive_rd2
//	mp_naive_rd3
inline hw_uint<128> in_mp_naive_update_0_read_bundle_read(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 4
    // mp_naive_rd0
    // mp_naive_rd1
    // mp_naive_rd2
    // mp_naive_rd3

	hw_uint<128> result;
	hw_uint<32>  mp_naive_rd0_res = mp_naive_rd0_select(in, d0, d1, d2, dynamic_address);
	set_at<0, 128>(result, mp_naive_rd0_res);
	hw_uint<32>  mp_naive_rd1_res = mp_naive_rd1_select(in, d0, d1, d2, dynamic_address);
	set_at<32, 128>(result, mp_naive_rd1_res);
	hw_uint<32>  mp_naive_rd2_res = mp_naive_rd2_select(in, d0, d1, d2, dynamic_address);
	set_at<64, 128>(result, mp_naive_rd2_res);
	hw_uint<32>  mp_naive_rd3_res = mp_naive_rd3_select(in, d0, d1, d2, dynamic_address);
	set_at<96, 128>(result, mp_naive_rd3_res);
	return result;
}

// Total re-use buffer capacity: 33554432 bits


// Operation logic
inline void in_update_0(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in_oc, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc_0_c__0_value = in_oc.read();
	auto compute_result = id_unrolled_2(in_oc_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mp_naive_update_0(in_cache& in, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */mp_naive, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_mp_naive_update_0_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = max_pool_2x2_unrolled_1(in_0_c__0_value);
	// Produce: mp_naive
	mp_naive.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void mp_naive_naive(HWStream<hw_uint<64> >& /* get_args num ports = 2 */in_oc, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mp_naive) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mp_naive_naive_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_update_0[d0, d1, d2] -> [1, d2, d1, d0] : 0 <= d0 <= 63 and 0 <= d1 <= 127 and 0 <= d2 <= 63; mp_naive_update_0[d0, d1, d2] -> [2, d2, d1, d0] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { in_update_0[d0, d1, d2] -> [1, d2, d1, d0] : 0 <= d0 <= 63 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
// Condition for in_update_0(((-1 + i0 == 0) && (i3 >= 0) && (63 - i3 >= 0) && (i2 >= 0) && (127 - i2 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { mp_naive_update_0[d0, d1, d2] -> [2, d2, d1, d0] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for mp_naive_update_0(((-2 + i0 == 0) && (i3 >= 0) && (63 - i3 >= 0) && (i2 >= 0) && (63 - i2 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))

  /*
{
  for (int c1 = 0; c1 <= 63; c1 += 1)
    for (int c2 = 0; c2 <= 127; c2 += 1)
      for (int c3 = 0; c3 <= 63; c3 += 1)
        in_update_0(c3, c2, c1);
  for (int c1 = 0; c1 <= 63; c1 += 1)
    for (int c2 = 0; c2 <= 63; c2 += 1)
      for (int c3 = 0; c3 <= 63; c3 += 1)
        mp_naive_update_0(c3, c2, c1);
}

  */
	{
	  for (int c1 = 0; c1 <= 63; c1 += 1)
	    for (int c2 = 0; c2 <= 127; c2 += 1)
	      for (int c3 = 0; c3 <= 63; c3 += 1)
	        in_update_0(in_oc /* buf name */, in, c3, c2, c1);
	  for (int c1 = 0; c1 <= 63; c1 += 1)
	    for (int c2 = 0; c2 <= 63; c2 += 1)
	      for (int c3 = 0; c3 <= 63; c3 += 1)
	        mp_naive_update_0(in /* buf name */, mp_naive, c3, c2, c1);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mp_naive_naive_wrapper(HWStream<hw_uint<64> >& /* get_args num ports = 2 */in_oc, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mp_naive, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    mp_naive_naive(in_oc, mp_naive);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0[root = 0, in_0, in_1, in_2] -> in_oc[0, 0] : 0 <= in_0 <= 63 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
const int in_update_0_read_pipe0_num_transfers = 524288;
  // { mp_naive_update_0[root = 0, mp_naive_0, mp_naive_1, mp_naive_2] -> mp_naive[0, 0] : 0 <= mp_naive_0 <= 63 and 0 <= mp_naive_1 <= 63 and 0 <= mp_naive_2 <= 63 }
const int mp_naive_update_0_write_pipe0_num_transfers = 262144;


extern "C" {

void mp_naive_naive_accel(hw_uint<64>* in_update_0_read_pipe0, hw_uint<32>* mp_naive_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = mp_naive_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = mp_naive_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<64> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > mp_naive_update_0_write_pipe0_channel;

  burst_read<64>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  mp_naive_naive_wrapper(in_update_0_read_pipe0_channel, mp_naive_update_0_write_pipe0_channel, size);

  burst_write<32>(mp_naive_update_0_write_pipe0, mp_naive_update_0_write_pipe0_channel, mp_naive_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void mp_naive_naive_rdai(HWStream<hw_uint<64> >& in_update_0_read_pipe0, HWStream<hw_uint<32> >&  mp_naive_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = mp_naive_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  mp_naive_naive(in_update_0_read_pipe0, mp_naive_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

