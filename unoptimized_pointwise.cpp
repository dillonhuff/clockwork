#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: conv_3x3.h
#include "conv_3x3.h"

#include "hw_classes.h"

struct I_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 7], [0, 31]}
  hw_uint<16> RAM[8][32];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct I_cache {
  // # of banks: 1
  I_all_inputs_to_all_outputs_cache I_all_inputs_to_all_outputs;
};



inline void I_I_id0_2_write(hw_uint<16>& I_I_id0_2, I_cache& I, int root, int id1, int id0, int dynamic_address) {
  I.I_all_inputs_to_all_outputs.write(I_I_id0_2, id0 - 0, id1 - 0);
}

inline hw_uint<16> I_out_plus_one0_1_select(I_cache& I, int root, int d1, int d0, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_out_plus_one0_1 read pattern: { out_plus_one0[root = 0, d1, d0] -> I[d0, d1] : 0 <= d1 <= 31 and 0 <= d0 <= 7 }
  auto value_I_I_id0_2 = I.I_all_inputs_to_all_outputs.read(d0 - 0, d1 - 0);
  return value_I_I_id0_2;
  return 0;
}

// # of bundles = 2
// I_id0_write
//	I_I_id0_2
inline void I_I_id0_write_bundle_write(hw_uint<16>& I_id0_write, I_cache& I, int root, int id1, int id0, int dynamic_address) {
	hw_uint<16> I_I_id0_2_res = I_id0_write.extract<0, 15>();
	I_I_id0_2_write(I_I_id0_2_res, I, root, id1, id0, dynamic_address);
}

// out_plus_one0_read
//	I_out_plus_one0_1
inline hw_uint<16> I_out_plus_one0_read_bundle_read(I_cache& I, int root, int d1, int d0, int dynamic_address) {
  // # of ports in bundle: 1
    // I_out_plus_one0_1

	hw_uint<16> result;
	hw_uint<16> I_out_plus_one0_1_res = I_out_plus_one0_1_select(I, root, d1, d0, dynamic_address);
	set_at<0, 16>(result, I_out_plus_one0_1_res);
	return result;
}

// Total re-use buffer capacity: 4096 bits


// Operation logic
inline void I_id0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int id1, int id0) {
  // Dynamic address computation

	// Consume: in
	auto in_id0_c__id1_value = in.read();
	auto compute_result = id(in_id0_c__id1_value);
	// Produce: I
	I_I_id0_write_bundle_write(/* arg names */compute_result, I, root, id1, id0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void out_plus_one0(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out, int root, int d1, int d0) {
  // Dynamic address computation

	// Consume: I
	auto I_d0_c__d1_value = I_out_plus_one0_read_bundle_read(I/* source_delay */, root, d1, d0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = plus_one(I_d0_c__d1_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_pointwise(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_pointwise_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  I_cache I;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { I_id0[root = 0, id1, id0] -> [0, 0, 0, id1, 0, id0, 0] : 0 <= id1 <= 31 and 0 <= id0 <= 7; out_plus_one0[root = 0, d1, d0] -> [0, 0, 1, d1, 0, d0, 0] : 0 <= d1 <= 31 and 0 <= d0 <= 7 }
//   { I_id0[root = 0, id1, id0] -> [0, 0, 0, id1, 0, id0, 0] : 0 <= id1 <= 31 and 0 <= id0 <= 7 }
// Condition for I_id0(((i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (31 - i3 >= 0) && (i5 >= 0) && (7 - i5 >= 0)))
//   { out_plus_one0[root = 0, d1, d0] -> [0, 0, 1, d1, 0, d0, 0] : 0 <= d1 <= 31 and 0 <= d0 <= 7 }
// Condition for out_plus_one0(((i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (31 - i3 >= 0) && (i5 >= 0) && (7 - i5 >= 0)))

  /*
{
  for (int c3 = 0; c3 <= 31; c3 += 1)
    for (int c5 = 0; c5 <= 7; c5 += 1)
      I_id0(0, c3, c5);
  for (int c3 = 0; c3 <= 31; c3 += 1)
    for (int c5 = 0; c5 <= 7; c5 += 1)
      out_plus_one0(0, c3, c5);
}

  */
	{
	  for (int c3 = 0; c3 <= 31; c3 += 1)
	    for (int c5 = 0; c5 <= 7; c5 += 1)
	      I_id0(in /* buf name */, I, 0, c3, c5);
	  for (int c3 = 0; c3 <= 31; c3 += 1)
	    for (int c5 = 0; c5 <= 7; c5 += 1)
	      out_plus_one0(I /* buf name */, out, 0, c3, c5);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_pointwise_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_pointwise(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { I_id0[root = 0, id1, id0] -> in[id0, id1] : 0 <= id1 <= 31 and 0 <= id0 <= 7 }
const int I_id0_read_pipe0_num_transfers = 256;
  // { out_plus_one0[root = 0, d1, d0] -> out[d0, d1] : 0 <= d1 <= 31 and 0 <= d0 <= 7 }
const int out_plus_one0_write_pipe0_num_transfers = 256;


extern "C" {

void unoptimized_pointwise_accel(hw_uint<16>* I_id0_read_pipe0, hw_uint<16>* out_plus_one0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = I_id0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = out_plus_one0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = I_id0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = out_plus_one0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > I_id0_read_pipe0_channel;
  static HWStream<hw_uint<16> > out_plus_one0_write_pipe0_channel;

  burst_read<16>(I_id0_read_pipe0, I_id0_read_pipe0_channel, I_id0_read_pipe0_num_transfers*size);

  unoptimized_pointwise_wrapper(I_id0_read_pipe0_channel, out_plus_one0_write_pipe0_channel, size);

  burst_write<16>(out_plus_one0_write_pipe0, out_plus_one0_write_pipe0_channel, out_plus_one0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_pointwise_rdai(HWStream<hw_uint<16> >& I_id0_read_pipe0, HWStream<hw_uint<16> >&  out_plus_one0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = I_id0_read_pipe0
#pragma HLS INTERFACE axis register port = out_plus_one0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_pointwise(I_id0_read_pipe0, out_plus_one0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

