#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: blurx5_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "blurx5_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct input_input_1_merged12_0_merged_banks_3_cache {
	// RAM Box: {[1, 1919], [0, 1081]}
	// Capacity: 1921
	// # of read delays: 3
  // 0, 960, 1920
	hw_uint<16> f0;
	fifo<hw_uint<16>, 959> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 959> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_960() {
		return f2;
	}

	inline hw_uint<16> peek_1919() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1920() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 959
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 959 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 959
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 959 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged12_1_merged_banks_3_cache {
	// RAM Box: {[0, 1918], [0, 1081]}
	// Capacity: 1921
	// # of read delays: 3
  // 0, 960, 1920
	hw_uint<16> f0;
	fifo<hw_uint<16>, 959> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 959> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_960() {
		return f2;
	}

	inline hw_uint<16> peek_1919() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1920() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 959
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 959 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 959
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 959 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_cache {
  // Reader addrs...
    // { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[2blurx5_2_1, 1 + blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
    // { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[2blurx5_2_1, 2 + blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
    // { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[1 + 2blurx5_2_1, blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
    // { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[1 + 2blurx5_2_1, 1 + blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
    // { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[1 + 2blurx5_2_1, 2 + blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
    // { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[2blurx5_2_1, blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
  // # of banks: 2
  input_input_1_merged12_0_merged_banks_3_cache input_input_1_merged12_0_merged_banks_3;
  input_input_1_merged12_1_merged_banks_3_cache input_input_1_merged12_1_merged_banks_3;
};



inline void input_input_1_merged12_0_write(hw_uint<16>& input_input_1_merged12_0, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged12_0_merged_banks_3.push(input_input_1_merged12_0);
}

inline void input_input_1_merged12_1_write(hw_uint<16>& input_input_1_merged12_1, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged12_1_merged_banks_3.push(input_input_1_merged12_1);
}

inline hw_uint<16> input_blurx5_2_1_merged15_10_select(input_cache& input, int root, int blurx5_2_0, int blurx5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx5_2_1_merged15_10 read pattern: { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[2blurx5_2_1, 1 + blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
  // Read schedule : { blurx5_2_1_merged15[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { input_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 959 }
  auto value_input_input_1_merged12_1 = input.input_input_1_merged12_1_merged_banks_3.peek_960();
  return value_input_input_1_merged12_1;
  return 0;
}

inline hw_uint<16> input_blurx5_2_1_merged15_11_select(input_cache& input, int root, int blurx5_2_0, int blurx5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx5_2_1_merged15_11 read pattern: { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[2blurx5_2_1, 2 + blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
  // Read schedule : { blurx5_2_1_merged15[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { input_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 959 }
  auto value_input_input_1_merged12_1 = input.input_input_1_merged12_1_merged_banks_3.peek_0();
  return value_input_input_1_merged12_1;
  return 0;
}

inline hw_uint<16> input_blurx5_2_1_merged15_6_select(input_cache& input, int root, int blurx5_2_0, int blurx5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx5_2_1_merged15_6 read pattern: { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[1 + 2blurx5_2_1, blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
  // Read schedule : { blurx5_2_1_merged15[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { input_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 959 }
  auto value_input_input_1_merged12_0 = input.input_input_1_merged12_0_merged_banks_3.peek_1920();
  return value_input_input_1_merged12_0;
  return 0;
}

inline hw_uint<16> input_blurx5_2_1_merged15_7_select(input_cache& input, int root, int blurx5_2_0, int blurx5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx5_2_1_merged15_7 read pattern: { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[1 + 2blurx5_2_1, 1 + blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
  // Read schedule : { blurx5_2_1_merged15[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { input_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 959 }
  auto value_input_input_1_merged12_0 = input.input_input_1_merged12_0_merged_banks_3.peek_960();
  return value_input_input_1_merged12_0;
  return 0;
}

inline hw_uint<16> input_blurx5_2_1_merged15_8_select(input_cache& input, int root, int blurx5_2_0, int blurx5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx5_2_1_merged15_8 read pattern: { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[1 + 2blurx5_2_1, 2 + blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
  // Read schedule : { blurx5_2_1_merged15[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { input_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 959 }
  auto value_input_input_1_merged12_0 = input.input_input_1_merged12_0_merged_banks_3.peek_0();
  return value_input_input_1_merged12_0;
  return 0;
}

inline hw_uint<16> input_blurx5_2_1_merged15_9_select(input_cache& input, int root, int blurx5_2_0, int blurx5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx5_2_1_merged15_9 read pattern: { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> input[2blurx5_2_1, blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
  // Read schedule : { blurx5_2_1_merged15[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { input_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 959 }
  auto value_input_input_1_merged12_1 = input.input_input_1_merged12_1_merged_banks_3.peek_1920();
  return value_input_input_1_merged12_1;
  return 0;
}

// # of bundles = 2
// blurx5_2_1_merged15_read
//	input_blurx5_2_1_merged15_6
//	input_blurx5_2_1_merged15_7
//	input_blurx5_2_1_merged15_8
//	input_blurx5_2_1_merged15_9
//	input_blurx5_2_1_merged15_10
//	input_blurx5_2_1_merged15_11
inline hw_uint<96> input_blurx5_2_1_merged15_read_bundle_read(input_cache& input, int root, int blurx5_2_0, int blurx5_2_1, int dynamic_address) {
  // # of ports in bundle: 6
    // input_blurx5_2_1_merged15_6
    // input_blurx5_2_1_merged15_7
    // input_blurx5_2_1_merged15_8
    // input_blurx5_2_1_merged15_9
    // input_blurx5_2_1_merged15_10
    // input_blurx5_2_1_merged15_11

	hw_uint<96> result;
	hw_uint<16> input_blurx5_2_1_merged15_6_res = input_blurx5_2_1_merged15_6_select(input, root, blurx5_2_0, blurx5_2_1, dynamic_address);
	set_at<0, 96>(result, input_blurx5_2_1_merged15_6_res);
	hw_uint<16> input_blurx5_2_1_merged15_7_res = input_blurx5_2_1_merged15_7_select(input, root, blurx5_2_0, blurx5_2_1, dynamic_address);
	set_at<16, 96>(result, input_blurx5_2_1_merged15_7_res);
	hw_uint<16> input_blurx5_2_1_merged15_8_res = input_blurx5_2_1_merged15_8_select(input, root, blurx5_2_0, blurx5_2_1, dynamic_address);
	set_at<32, 96>(result, input_blurx5_2_1_merged15_8_res);
	hw_uint<16> input_blurx5_2_1_merged15_9_res = input_blurx5_2_1_merged15_9_select(input, root, blurx5_2_0, blurx5_2_1, dynamic_address);
	set_at<48, 96>(result, input_blurx5_2_1_merged15_9_res);
	hw_uint<16> input_blurx5_2_1_merged15_10_res = input_blurx5_2_1_merged15_10_select(input, root, blurx5_2_0, blurx5_2_1, dynamic_address);
	set_at<64, 96>(result, input_blurx5_2_1_merged15_10_res);
	hw_uint<16> input_blurx5_2_1_merged15_11_res = input_blurx5_2_1_merged15_11_select(input, root, blurx5_2_0, blurx5_2_1, dynamic_address);
	set_at<80, 96>(result, input_blurx5_2_1_merged15_11_res);
	return result;
}

// input_1_merged12_write
//	input_input_1_merged12_0
//	input_input_1_merged12_1
inline void input_input_1_merged12_write_bundle_write(hw_uint<32>& input_1_merged12_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_1_merged12_0_res = input_1_merged12_write.extract<0, 15>();
	input_input_1_merged12_0_write(input_input_1_merged12_0_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged12_1_res = input_1_merged12_write.extract<16, 31>();
	input_input_1_merged12_1_write(input_input_1_merged12_1_res, input, root, input_0, input_1, dynamic_address);
}

// Total re-use buffer capacity: 61440 bits


// Operation logic
inline void input_1_merged12(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */input_arg, input_cache& input, int root, int input_0, int input_1) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m__lp_2_m_input_1__p__1_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_1_cu10(input_arg_1_m__lp_2_m_input_1__p__1_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_1_merged12_write_bundle_write(/* arg names */compute_result, input, root, input_0, input_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx5_2_1_merged15(input_cache& input, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */blurx5_2, int root, int blurx5_2_0, int blurx5_2_1) {
  // Dynamic address computation

	// Consume: input
	auto input_1_m__lp_2_m_blurx5_2_1__p__1_rp___p__0_p_0_c_____1_m_blurx5_2_0__p__0_p_0_value = input_blurx5_2_1_merged15_read_bundle_read(input/* source_delay */, root, blurx5_2_0, blurx5_2_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx5_2_1_cu13(input_1_m__lp_2_m_blurx5_2_1__p__1_rp___p__0_p_0_c_____1_m_blurx5_2_0__p__0_p_0_value);
	// Produce: blurx5_2
	blurx5_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void blurx5_2_opt(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 2 */input_arg, HWStream<hw_uint<32> >& /* get_args num ports = 2 */blurx5_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blurx5_2_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { input_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 959; blurx5_2_1_merged15[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
//   { input_1_merged12[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 959 }
// Condition for input_1_merged12(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((959 + -1*i2)) >= 0)))
//   { blurx5_2_1_merged15[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
// Condition for blurx5_2_1_merged15(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((959 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 1] : 2 <= i1 <= 1081 and 0 <= i2 <= 959; [0, i1, i2, 0] : 0 <= i1 <= 1081 and 0 <= i2 <= 959 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 959; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          input_1_merged12(input_arg /* buf name */, input, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          blurx5_2_1_merged15(input /* buf name */, blurx5_2, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void blurx5_2_opt_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 2 */input_arg, HWStream<hw_uint<32> >& /* get_args num ports = 2 */blurx5_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    blurx5_2_opt(input_arg, blurx5_2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> blurx5_2[1 + 2blurx5_2_1, blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959; blurx5_2_1_merged15[root = 0, blurx5_2_0, blurx5_2_1] -> blurx5_2[2blurx5_2_1, blurx5_2_0] : 0 <= blurx5_2_0 <= 1079 and 0 <= blurx5_2_1 <= 959 }
const int blurx5_2_1_merged15_write_pipe0_num_transfers = 1036800;
  // { input_1_merged12[root = 0, input_0, input_1] -> input_arg[1 + 2input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 959; input_1_merged12[root = 0, input_0, input_1] -> input_arg[2input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 959 }
const int input_1_merged12_read_pipe0_num_transfers = 1038720;


extern "C" {

void blurx5_2_opt_accel(hw_uint<32>* input_1_merged12_read_pipe0, hw_uint<32>* blurx5_2_1_merged15_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_1_merged12_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurx5_2_1_merged15_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_1_merged12_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = blurx5_2_1_merged15_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > input_1_merged12_read_pipe0_channel;
  static HWStream<hw_uint<32> > blurx5_2_1_merged15_write_pipe0_channel;

  burst_read<32>(input_1_merged12_read_pipe0, input_1_merged12_read_pipe0_channel, input_1_merged12_read_pipe0_num_transfers*size);

  blurx5_2_opt_wrapper(input_1_merged12_read_pipe0_channel, blurx5_2_1_merged15_write_pipe0_channel, size);

  burst_write<32>(blurx5_2_1_merged15_write_pipe0, blurx5_2_1_merged15_write_pipe0_channel, blurx5_2_1_merged15_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blurx5_2_opt_rdai(HWStream<hw_uint<32> >& input_1_merged12_read_pipe0, HWStream<hw_uint<32> >&  blurx5_2_1_merged15_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_1_merged12_read_pipe0
#pragma HLS INTERFACE axis register port = blurx5_2_1_merged15_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blurx5_2_opt(input_1_merged12_read_pipe0, blurx5_2_1_merged15_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

