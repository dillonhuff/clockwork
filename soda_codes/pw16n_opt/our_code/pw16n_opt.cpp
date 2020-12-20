#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: pw16n_opt_compute_units.h
#include "pw16n_opt_compute_units.h"

#include "hw_classes.h"

struct input_input_update_0_write0_to_pw16n_rd0_cache {
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

struct input_cache {
  // # of banks: 1
  input_input_update_0_write0_to_pw16n_rd0_cache input_input_update_0_write0_to_pw16n_rd0;
};



inline void input_input_update_0_write0_write(hw_uint<16>& input_input_update_0_write0, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write0_to_pw16n_rd0.push(input_input_update_0_write0);
}

inline hw_uint<16> pw16n_rd0_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // pw16n_rd0 read pattern: { pw16n_update_0[d0, d1] -> input[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { pw16n_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_to_pw16n_rd0.peek(/* one reader or all rams */ 0);
  return value_input_input_update_0_write0;
  return 0;
}

// # of bundles = 2
// input_update_0_write
//	input_input_update_0_write0
inline void input_input_update_0_write_bundle_write(hw_uint<16>& input_update_0_write, input_cache& input, int d0, int d1, int dynamic_address) {
	hw_uint<16> input_input_update_0_write0_res = input_update_0_write.extract<0, 15>();
	input_input_update_0_write0_write(input_input_update_0_write0_res, input, d0, d1, dynamic_address);
}

// pw16n_update_0_read
//	pw16n_rd0
inline hw_uint<16> input_pw16n_update_0_read_bundle_read(input_cache& input, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // pw16n_rd0

	hw_uint<16> result;
	hw_uint<16> pw16n_rd0_res = pw16n_rd0_select(input, d0, d1, dynamic_address);
	set_at<0, 16>(result, pw16n_rd0_res);
	return result;
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void pw16n_update_0(input_cache& input, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */pw16n, int d0, int d1) {
  // Dynamic address computation

	// Consume: input
	auto input_0_c__0_value = input_pw16n_update_0_read_bundle_read(input/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw16n_generated_compute_unrolled_1(input_0_c__0_value);
	// Produce: pw16n
	pw16n.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void input_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int d0, int d1) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_0_c__0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_0_c__0_value);
	// Produce: input
	input_input_update_0_write_bundle_write(/* arg names */compute_result, input, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void pw16n_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */pw16n) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("pw16n_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; pw16n_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
//   { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for input_update_0(((-1 + i2 == 0) && (i1 >= 0) && (1919 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { pw16n_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for pw16n_update_0(((-2 + i2 == 0) && (i1 >= 0) && (1919 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))

  /*
for (int c0 = 0; c0 <= 1079; c0 += 1)
  for (int c1 = 0; c1 <= 1919; c1 += 1) {
    input_update_0(c1, c0);
    pw16n_update_0(c1, c0);
  }

  */
	for (int c0 = 0; c0 <= 1079; c0 += 1)
	  for (int c1 = 0; c1 <= 1919; c1 += 1) {
	    input_update_0(input_arg /* buf name */, input, c1, c0);
	    pw16n_update_0(input /* buf name */, pw16n, c1, c0);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void pw16n_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */pw16n, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    pw16n_opt(input_arg, pw16n);
  }
}
#ifdef __VIVADO_SYNTH__
  // { input_update_0[root = 0, input_0, input_1] -> input_arg[0, 0] : 0 <= input_0 <= 1919 and 0 <= input_1 <= 1079 }
const int input_update_0_read_pipe0_num_transfers = 2073600;
  // { pw16n_update_0[root = 0, pw16n_0, pw16n_1] -> pw16n[0, 0] : 0 <= pw16n_0 <= 1919 and 0 <= pw16n_1 <= 1079 }
const int pw16n_update_0_write_pipe0_num_transfers = 2073600;


extern "C" {

void pw16n_opt_accel(hw_uint<16>* input_update_0_read_pipe0, hw_uint<16>* pw16n_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw16n_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw16n_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > input_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > pw16n_update_0_write_pipe0_channel;

  burst_read<16>(input_update_0_read_pipe0, input_update_0_read_pipe0_channel, input_update_0_read_pipe0_num_transfers*size);

  pw16n_opt_wrapper(input_update_0_read_pipe0_channel, pw16n_update_0_write_pipe0_channel, size);

  burst_write<16>(pw16n_update_0_write_pipe0, pw16n_update_0_write_pipe0_channel, pw16n_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void pw16n_opt_rdai(HWStream<hw_uint<16> >& input_update_0_read_pipe0, HWStream<hw_uint<16> >&  pw16n_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = pw16n_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  pw16n_opt(input_update_0_read_pipe0, pw16n_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

