#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: blurx7_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "blurx7_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_3_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 3
	// # of read delays: 2
  // 0, 2
	fifo<hw_uint<16>, 3> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_4_cache {
	// RAM Box: {[1, 1920], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_5_cache {
	// RAM Box: {[2, 1921], [0, 1079]}
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
  // Reader addrs...
    // { blurx7_1_update_0_sm1_04[root = 0, blurx7_1_0, blurx7_1_1] -> input[blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
    // { blurx7_1_update_0_sm1_04[root = 0, blurx7_1_0, blurx7_1_1] -> input[1 + blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
    // { blurx7_1_update_0_sm1_04[root = 0, blurx7_1_0, blurx7_1_1] -> input[2 + blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
  // # of banks: 3
  input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_3_cache input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_3;
  input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_4_cache input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_4;
  input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_5_cache input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_5;
};



inline void input_input_update_0_sm0_02_0_write(hw_uint<16>& input_input_update_0_sm0_02_0, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_3.push(input_input_update_0_sm0_02_0);
  input.input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_4.push(input_input_update_0_sm0_02_0);
  input.input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_5.push(input_input_update_0_sm0_02_0);
}

inline hw_uint<16> input_blurx7_1_update_0_sm1_04_3_select(input_cache& input, int root, int blurx7_1_0, int blurx7_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx7_1_update_0_sm1_04_3 read pattern: { blurx7_1_update_0_sm1_04[root = 0, blurx7_1_0, blurx7_1_1] -> input[blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
  // Read schedule : { blurx7_1_update_0_sm1_04[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { input_update_0_sm0_02[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_input_input_update_0_sm0_02_0 = input.input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_3.peek(/* one reader or all rams */ 2);
  return value_input_input_update_0_sm0_02_0;
  return 0;
}

inline hw_uint<16> input_blurx7_1_update_0_sm1_04_4_select(input_cache& input, int root, int blurx7_1_0, int blurx7_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx7_1_update_0_sm1_04_4 read pattern: { blurx7_1_update_0_sm1_04[root = 0, blurx7_1_0, blurx7_1_1] -> input[1 + blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
  // Read schedule : { blurx7_1_update_0_sm1_04[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { input_update_0_sm0_02[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_input_input_update_0_sm0_02_0 = input.input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_4.peek(/* one reader or all rams */ 1);
  return value_input_input_update_0_sm0_02_0;
  return 0;
}

inline hw_uint<16> input_blurx7_1_update_0_sm1_04_5_select(input_cache& input, int root, int blurx7_1_0, int blurx7_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx7_1_update_0_sm1_04_5 read pattern: { blurx7_1_update_0_sm1_04[root = 0, blurx7_1_0, blurx7_1_1] -> input[2 + blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
  // Read schedule : { blurx7_1_update_0_sm1_04[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { input_update_0_sm0_02[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_input_input_update_0_sm0_02_0 = input.input_input_update_0_sm0_02_0_to_input_blurx7_1_update_0_sm1_04_5.peek(/* one reader or all rams */ 0);
  return value_input_input_update_0_sm0_02_0;
  return 0;
}

// # of bundles = 2
// blurx7_1_update_0_sm1_04_read
//	input_blurx7_1_update_0_sm1_04_3
//	input_blurx7_1_update_0_sm1_04_4
//	input_blurx7_1_update_0_sm1_04_5
inline hw_uint<48> input_blurx7_1_update_0_sm1_04_read_bundle_read(input_cache& input, int root, int blurx7_1_0, int blurx7_1_1, int dynamic_address) {
  // # of ports in bundle: 3
    // input_blurx7_1_update_0_sm1_04_3
    // input_blurx7_1_update_0_sm1_04_4
    // input_blurx7_1_update_0_sm1_04_5

	hw_uint<48> result;
	hw_uint<16> input_blurx7_1_update_0_sm1_04_3_res = input_blurx7_1_update_0_sm1_04_3_select(input, root, blurx7_1_0, blurx7_1_1, dynamic_address);
	set_at<0, 48>(result, input_blurx7_1_update_0_sm1_04_3_res);
	hw_uint<16> input_blurx7_1_update_0_sm1_04_4_res = input_blurx7_1_update_0_sm1_04_4_select(input, root, blurx7_1_0, blurx7_1_1, dynamic_address);
	set_at<16, 48>(result, input_blurx7_1_update_0_sm1_04_4_res);
	hw_uint<16> input_blurx7_1_update_0_sm1_04_5_res = input_blurx7_1_update_0_sm1_04_5_select(input, root, blurx7_1_0, blurx7_1_1, dynamic_address);
	set_at<32, 48>(result, input_blurx7_1_update_0_sm1_04_5_res);
	return result;
}

// input_update_0_sm0_02_write
//	input_input_update_0_sm0_02_0
inline void input_input_update_0_sm0_02_write_bundle_write(hw_uint<16>& input_update_0_sm0_02_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_update_0_sm0_02_0_res = input_update_0_sm0_02_write.extract<0, 15>();
	input_input_update_0_sm0_02_0_write(input_input_update_0_sm0_02_0_res, input, root, input_0, input_1, dynamic_address);
}

// Total re-use buffer capacity: 48 bits


// Operation logic
inline void input_update_0_sm0_02(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int root, int input_0, int input_1) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m__lp_1_m_input_1__p__0_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_1_m__lp_1_m_input_1__p__0_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_update_0_sm0_02_write_bundle_write(/* arg names */compute_result, input, root, input_0, input_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx7_1_update_0_sm1_04(input_cache& input, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx7_1, int root, int blurx7_1_0, int blurx7_1_1) {
  // Dynamic address computation

	// Consume: input
	auto input_1_m__lp_1_m_blurx7_1_1__p__0_rp___p__0_p_0_c_____1_m_blurx7_1_0__p__0_p_0_value = input_blurx7_1_update_0_sm1_04_read_bundle_read(input/* source_delay */, root, blurx7_1_0, blurx7_1_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx7_1_generated_compute_unrolled_1(input_1_m__lp_1_m_blurx7_1_1__p__0_rp___p__0_p_0_c_____1_m_blurx7_1_0__p__0_p_0_value);
	// Produce: blurx7_1
	blurx7_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void blurx7_1_opt(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blurx7_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blurx7_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { input_update_0_sm0_02[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921; blurx7_1_update_0_sm1_04[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { input_update_0_sm0_02[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
// Condition for input_update_0_sm0_02(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1079 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { blurx7_1_update_0_sm1_04[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for blurx7_1_update_0_sm1_04(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1079 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 1] : 0 <= i1 <= 1079 and 2 <= i2 <= 1921; [0, i1, i2, 0] : 0 <= i1 <= 1079 and 0 <= i2 <= 1921 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1079; i1++) {
	    for (int i2 = 0; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          input_update_0_sm0_02(input_arg /* buf name */, input, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 2 }
	        // { [i0, i1, i2] : i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i2)) >= 0)))) {
	          blurx7_1_update_0_sm1_04(input /* buf name */, blurx7_1, 0, ((1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void blurx7_1_opt_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blurx7_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    blurx7_1_opt(input_arg, blurx7_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { blurx7_1_update_0_sm1_04[root = 0, blurx7_1_0, blurx7_1_1] -> blurx7_1[blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
const int blurx7_1_update_0_sm1_04_write_pipe0_num_transfers = 2073600;
  // { input_update_0_sm0_02[root = 0, input_0, input_1] -> input_arg[input_1, input_0] : 0 <= input_0 <= 1079 and 0 <= input_1 <= 1921 }
const int input_update_0_sm0_02_read_pipe0_num_transfers = 2075760;


extern "C" {

void blurx7_1_opt_accel(hw_uint<16>* input_update_0_sm0_02_read_pipe0, hw_uint<16>* blurx7_1_update_0_sm1_04_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_sm0_02_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurx7_1_update_0_sm1_04_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_sm0_02_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = blurx7_1_update_0_sm1_04_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > input_update_0_sm0_02_read_pipe0_channel;
  static HWStream<hw_uint<16> > blurx7_1_update_0_sm1_04_write_pipe0_channel;

  burst_read<16>(input_update_0_sm0_02_read_pipe0, input_update_0_sm0_02_read_pipe0_channel, input_update_0_sm0_02_read_pipe0_num_transfers*size);

  blurx7_1_opt_wrapper(input_update_0_sm0_02_read_pipe0_channel, blurx7_1_update_0_sm1_04_write_pipe0_channel, size);

  burst_write<16>(blurx7_1_update_0_sm1_04_write_pipe0, blurx7_1_update_0_sm1_04_write_pipe0_channel, blurx7_1_update_0_sm1_04_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blurx7_1_opt_rdai(HWStream<hw_uint<16> >& input_update_0_sm0_02_read_pipe0, HWStream<hw_uint<16> >&  blurx7_1_update_0_sm1_04_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_sm0_02_read_pipe0
#pragma HLS INTERFACE axis register port = blurx7_1_update_0_sm1_04_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blurx7_1_opt(input_update_0_sm0_02_read_pipe0, blurx7_1_update_0_sm1_04_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

