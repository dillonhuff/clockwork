#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: conv_3x3.h
#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_4_merged_banks_3_cache {
	// RAM Box: {[0, 31], [0, 7]}
	// Capacity: 65
	// # of read delays: 3
  // 0, 32, 64
	hw_uint<16> f0;
	fifo<hw_uint<16>, 31> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 31> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_31() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_32() {
		return f2;
	}

	inline hw_uint<16> peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_64() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f3.push(f2);
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

struct I_cache {
  // # of banks: 1
  I_I_id0_4_merged_banks_3_cache I_I_id0_4_merged_banks_3;
};



inline void I_I_id0_4_write(hw_uint<16>& I_I_id0_4, I_cache& I, int root, int id1, int id0, int dynamic_address) {
  I.I_I_id0_4_merged_banks_3.push(I_I_id0_4);
}

inline hw_uint<16> I_out_blur_30_1_select(I_cache& I, int root, int d1, int d0, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_out_blur_30_1 read pattern: { out_blur_30[root = 0, d1, d0] -> I[d0, d1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
  // Read schedule : { out_blur_30[root = 0, d1, d0] -> [2 + d1, d0, 1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
  // Write schedule: { I_id0[root = 0, id1, id0] -> [id1, id0, 0] : 0 <= id1 <= 7 and 0 <= id0 <= 31 }
  auto value_I_I_id0_4 = I.I_I_id0_4_merged_banks_3.peek_64();
  return value_I_I_id0_4;
  return 0;
}

inline hw_uint<16> I_out_blur_30_2_select(I_cache& I, int root, int d1, int d0, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_out_blur_30_2 read pattern: { out_blur_30[root = 0, d1, d0] -> I[d0, 1 + d1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
  // Read schedule : { out_blur_30[root = 0, d1, d0] -> [2 + d1, d0, 1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
  // Write schedule: { I_id0[root = 0, id1, id0] -> [id1, id0, 0] : 0 <= id1 <= 7 and 0 <= id0 <= 31 }
  auto value_I_I_id0_4 = I.I_I_id0_4_merged_banks_3.peek_32();
  return value_I_I_id0_4;
  return 0;
}

inline hw_uint<16> I_out_blur_30_3_select(I_cache& I, int root, int d1, int d0, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_out_blur_30_3 read pattern: { out_blur_30[root = 0, d1, d0] -> I[d0, 2 + d1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
  // Read schedule : { out_blur_30[root = 0, d1, d0] -> [2 + d1, d0, 1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
  // Write schedule: { I_id0[root = 0, id1, id0] -> [id1, id0, 0] : 0 <= id1 <= 7 and 0 <= id0 <= 31 }
  auto value_I_I_id0_4 = I.I_I_id0_4_merged_banks_3.peek_0();
  return value_I_I_id0_4;
  return 0;
}

// # of bundles = 2
// I_id0_write
//	I_I_id0_4
inline void I_I_id0_write_bundle_write(hw_uint<16>& I_id0_write, I_cache& I, int root, int id1, int id0, int dynamic_address) {
	hw_uint<16> I_I_id0_4_res = I_id0_write.extract<0, 15>();
	I_I_id0_4_write(I_I_id0_4_res, I, root, id1, id0, dynamic_address);
}

// out_blur_30_read
//	I_out_blur_30_1
//	I_out_blur_30_2
//	I_out_blur_30_3
inline hw_uint<48> I_out_blur_30_read_bundle_read(I_cache& I, int root, int d1, int d0, int dynamic_address) {
  // # of ports in bundle: 3
    // I_out_blur_30_1
    // I_out_blur_30_2
    // I_out_blur_30_3

	hw_uint<48> result;
	hw_uint<16> I_out_blur_30_1_res = I_out_blur_30_1_select(I, root, d1, d0, dynamic_address);
	set_at<0, 48>(result, I_out_blur_30_1_res);
	hw_uint<16> I_out_blur_30_2_res = I_out_blur_30_2_select(I, root, d1, d0, dynamic_address);
	set_at<16, 48>(result, I_out_blur_30_2_res);
	hw_uint<16> I_out_blur_30_3_res = I_out_blur_30_3_select(I, root, d1, d0, dynamic_address);
	set_at<32, 48>(result, I_out_blur_30_3_res);
	return result;
}

// Total re-use buffer capacity: 1024 bits


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

inline void out_blur_30(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out, int root, int d1, int d0) {
  // Dynamic address computation

	// Consume: I
	auto I_d0__p__0_c__d1__p__0_value = I_out_blur_30_read_bundle_read(I/* source_delay */, root, d1, d0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blur_3(I_d0__p__0_c__d1__p__0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void blur_x(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur_x_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  I_cache I;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { I_id0[root = 0, id1, id0] -> [id1, id0, 0] : 0 <= id1 <= 7 and 0 <= id0 <= 31; out_blur_30[root = 0, d1, d0] -> [2 + d1, d0, 1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
//   { I_id0[root = 0, id1, id0] -> [id1, id0, 0] : 0 <= id1 <= 7 and 0 <= id0 <= 31 }
// Condition for I_id0(((i2 == 0) && (i0 >= 0) && (7 - i0 >= 0) && (i1 >= 0) && (31 - i1 >= 0)))
//   { out_blur_30[root = 0, d1, d0] -> [2 + d1, d0, 1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
// Condition for out_blur_30(((-1 + i2 == 0) && (-2 + i0 >= 0) && (7 - i0 >= 0) && (i1 >= 0) && (31 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 7; c0 += 1)
  for (int c1 = 0; c1 <= 31; c1 += 1) {
    I_id0(0, c0, c1);
    if (c0 >= 2)
      out_blur_30(0, c0 - 2, c1);
  }

  */
	for (int c0 = 0; c0 <= 7; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    I_id0(in /* buf name */, I, 0, c0, c1);
	    if (c0 >= 2)
	      out_blur_30(I /* buf name */, out, 0, c0 - 2, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void blur_x_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    blur_x(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { I_id0[root = 0, id1, id0] -> in[id0, id1] : 0 <= id1 <= 7 and 0 <= id0 <= 31 }
const int I_id0_read_pipe0_num_transfers = 256;
  // { out_blur_30[root = 0, d1, d0] -> out[d0, d1] : 0 <= d1 <= 5 and 0 <= d0 <= 31 }
const int out_blur_30_write_pipe0_num_transfers = 192;


extern "C" {

void blur_x_accel(hw_uint<16>* I_id0_read_pipe0, hw_uint<16>* out_blur_30_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = I_id0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = out_blur_30_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = I_id0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = out_blur_30_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > I_id0_read_pipe0_channel;
  static HWStream<hw_uint<16> > out_blur_30_write_pipe0_channel;

  burst_read<16>(I_id0_read_pipe0, I_id0_read_pipe0_channel, I_id0_read_pipe0_num_transfers*size);

  blur_x_wrapper(I_id0_read_pipe0_channel, out_blur_30_write_pipe0_channel, size);

  burst_write<16>(out_blur_30_write_pipe0, out_blur_30_write_pipe0_channel, out_blur_30_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blur_x_rdai(HWStream<hw_uint<16> >& I_id0_read_pipe0, HWStream<hw_uint<16> >&  out_blur_30_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = I_id0_read_pipe0
#pragma HLS INTERFACE axis register port = out_blur_30_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blur_x(I_id0_read_pipe0, out_blur_30_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

