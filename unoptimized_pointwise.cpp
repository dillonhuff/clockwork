#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: conv_3x3.h
#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_2_to_I_out_plus_one0_1_cache {
	// RAM Box: {[0, 7], [0, 31]}
	// Capacity: 256
	// # of read delays: 256
	fifo<hw_uint<16>, 256> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(255 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_cache {
  I_I_id0_2_to_I_out_plus_one0_1_cache I_I_id0_2_to_I_out_plus_one0_1;
};



inline void I_I_id0_2_write(hw_uint<16>& I_I_id0_2, I_cache& I, int root, int id1, int id0, int dynamic_address) {
  I.I_I_id0_2_to_I_out_plus_one0_1.push(I_I_id0_2);
}

inline hw_uint<16> I_out_plus_one0_1_select(I_cache& I, int root, int d1, int d0, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_out_plus_one0_1 read pattern: { out_plus_one0[root = 0, d1, d0] -> I[d0, d1] : 0 <= d1 <= 31 and 0 <= d0 <= 7 }
  // Read schedule : { out_plus_one0[root = 0, d1, d0] -> [0, 0, 1, d1, 0, d0, 0] : 0 <= d1 <= 31 and 0 <= d0 <= 7 }
  // Write schedule: { I_id0[root = 0, id1, id0] -> [0, 0, 0, id1, 0, id0, 0] : 0 <= id1 <= 31 and 0 <= id0 <= 7 }
  // DD fold: { out_plus_one0[root, d1, d0] -> ((255 - 8 * d1) - d0) : root = 0 and 0 <= d1 <= 30 and 0 <= d0 <= 6; out_plus_one0[root, d1, d0] -> (248 - 8 * d1) : root = 0 and d0 = 7 and 0 <= d1 <= 30; out_plus_one0[root, d1, d0] -> (7 - d0) : root = 0 and d1 = 31 and 0 <= d0 <= 6 }
  auto value_I_I_id0_2 = I.I_I_id0_2_to_I_out_plus_one0_1.peek(/* one reader or all rams */ (-7 + d0 == 0 && 30 - d1 >= 0) ? ((248 - 8 * d1)) : (-31 + d1 == 0 && 6 - d0 >= 0) ? ((7 - d0)) : (6 - d0 >= 0 && 30 - d1 >= 0) ? (((255 - 8 * d1) - d0)) : 0);
  return value_I_I_id0_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " d1 = " << d1  << " d0 = " << d0  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
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



// Operation logic
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

#ifdef __VIVADO_SYNTH__
const int I_id0_read_num_transfers = 0;
const int out_plus_one0_write_num_transfers = 0;


extern "C" {

static void read_I_id0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = I_id0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_out_plus_one0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = out_plus_one0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void unoptimized_pointwise_accel(hw_uint<16>* I_id0_read, hw_uint<16>* out_plus_one0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = I_id0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = out_plus_one0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = I_id0_read bundle = control
#pragma HLS INTERFACE s_axilite port = out_plus_one0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > I_id0_read_channel;
  static HWStream<hw_uint<16> > out_plus_one0_write_channel;

  read_I_id0_read(I_id0_read, I_id0_read_channel, size);

  unoptimized_pointwise(I_id0_read_channel, out_plus_one0_write_channel, size);

  write_out_plus_one0_write(out_plus_one0_write, out_plus_one0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

