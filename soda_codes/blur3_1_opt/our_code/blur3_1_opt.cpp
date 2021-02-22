#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: blur3_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "blur3_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_7_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
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

struct blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_8_cache {
	// RAM Box: {[1, 1080], [0, 1079]}
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

struct blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_9_cache {
	// RAM Box: {[2, 1081], [0, 1079]}
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

struct blurx_cache {
  // Reader addrs...
    // { blur3_1_update_0_sm2_07[root = 0, blur3_1_0, blur3_1_1] -> blurx[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
    // { blur3_1_update_0_sm2_07[root = 0, blur3_1_0, blur3_1_1] -> blurx[1 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
    // { blur3_1_update_0_sm2_07[root = 0, blur3_1_0, blur3_1_1] -> blurx[2 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // # of banks: 3
  blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_7_cache blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_7;
  blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_8_cache blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_8;
  blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_9_cache blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_9;
};



inline void blurx_blurx_update_0_sm1_05_2_write(hw_uint<16>& blurx_blurx_update_0_sm1_05_2, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_7.push(blurx_blurx_update_0_sm1_05_2);
  blurx.blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_8.push(blurx_blurx_update_0_sm1_05_2);
  blurx.blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_9.push(blurx_blurx_update_0_sm1_05_2);
}

inline hw_uint<16> blurx_blur3_1_update_0_sm2_07_7_select(blurx_cache& blurx, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur3_1_update_0_sm2_07_7 read pattern: { blur3_1_update_0_sm2_07[root = 0, blur3_1_0, blur3_1_1] -> blurx[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm2_07[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { blurx_update_0_sm1_05[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_blurx_update_0_sm1_05_2 = blurx.blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_7.peek(/* one reader or all rams */ 2);
  return value_blurx_blurx_update_0_sm1_05_2;
  return 0;
}

inline hw_uint<16> blurx_blur3_1_update_0_sm2_07_8_select(blurx_cache& blurx, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur3_1_update_0_sm2_07_8 read pattern: { blur3_1_update_0_sm2_07[root = 0, blur3_1_0, blur3_1_1] -> blurx[1 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm2_07[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { blurx_update_0_sm1_05[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_blurx_update_0_sm1_05_2 = blurx.blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_8.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_sm1_05_2;
  return 0;
}

inline hw_uint<16> blurx_blur3_1_update_0_sm2_07_9_select(blurx_cache& blurx, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur3_1_update_0_sm2_07_9 read pattern: { blur3_1_update_0_sm2_07[root = 0, blur3_1_0, blur3_1_1] -> blurx[2 + blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
  // Read schedule : { blur3_1_update_0_sm2_07[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { blurx_update_0_sm1_05[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_blurx_blurx_update_0_sm1_05_2 = blurx.blurx_blurx_update_0_sm1_05_2_to_blurx_blur3_1_update_0_sm2_07_9.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_update_0_sm1_05_2;
  return 0;
}

// # of bundles = 2
// blur3_1_update_0_sm2_07_read
//	blurx_blur3_1_update_0_sm2_07_7
//	blurx_blur3_1_update_0_sm2_07_8
//	blurx_blur3_1_update_0_sm2_07_9
inline hw_uint<48> blurx_blur3_1_update_0_sm2_07_read_bundle_read(blurx_cache& blurx, int root, int blur3_1_0, int blur3_1_1, int dynamic_address) {
  // # of ports in bundle: 3
    // blurx_blur3_1_update_0_sm2_07_7
    // blurx_blur3_1_update_0_sm2_07_8
    // blurx_blur3_1_update_0_sm2_07_9

	hw_uint<48> result;
	hw_uint<16> blurx_blur3_1_update_0_sm2_07_7_res = blurx_blur3_1_update_0_sm2_07_7_select(blurx, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<0, 48>(result, blurx_blur3_1_update_0_sm2_07_7_res);
	hw_uint<16> blurx_blur3_1_update_0_sm2_07_8_res = blurx_blur3_1_update_0_sm2_07_8_select(blurx, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<16, 48>(result, blurx_blur3_1_update_0_sm2_07_8_res);
	hw_uint<16> blurx_blur3_1_update_0_sm2_07_9_res = blurx_blur3_1_update_0_sm2_07_9_select(blurx, root, blur3_1_0, blur3_1_1, dynamic_address);
	set_at<32, 48>(result, blurx_blur3_1_update_0_sm2_07_9_res);
	return result;
}

// blurx_update_0_sm1_05_write
//	blurx_blurx_update_0_sm1_05_2
inline void blurx_blurx_update_0_sm1_05_write_bundle_write(hw_uint<16>& blurx_update_0_sm1_05_write, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
	hw_uint<16> blurx_blurx_update_0_sm1_05_2_res = blurx_update_0_sm1_05_write.extract<0, 15>();
	blurx_blurx_update_0_sm1_05_2_write(blurx_blurx_update_0_sm1_05_2_res, blurx, root, blurx_0, blurx_1, dynamic_address);
}

struct input_input_update_0_sm0_03_0_merged_banks_3_cache {
	// RAM Box: {[0, 1081], [0, 1081]}
	// Capacity: 2165
	// # of read delays: 3
  // 0, 1082, 2164
	hw_uint<16> f0;
	fifo<hw_uint<16>, 1081> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1081> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1081() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_1082() {
		return f2;
	}

	inline hw_uint<16> peek_2163() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_2164() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1081
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1081 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1081
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1081 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_cache {
  // Reader addrs...
    // { blurx_update_0_sm1_05[root = 0, blurx_0, blurx_1] -> input[blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
    // { blurx_update_0_sm1_05[root = 0, blurx_0, blurx_1] -> input[blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
    // { blurx_update_0_sm1_05[root = 0, blurx_0, blurx_1] -> input[blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // # of banks: 1
  input_input_update_0_sm0_03_0_merged_banks_3_cache input_input_update_0_sm0_03_0_merged_banks_3;
};



inline void input_input_update_0_sm0_03_0_write(hw_uint<16>& input_input_update_0_sm0_03_0, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_update_0_sm0_03_0_merged_banks_3.push(input_input_update_0_sm0_03_0);
}

inline hw_uint<16> input_blurx_update_0_sm1_05_3_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_update_0_sm1_05_3 read pattern: { blurx_update_0_sm1_05[root = 0, blurx_0, blurx_1] -> input[blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm1_05[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { input_update_0_sm0_03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_input_update_0_sm0_03_0 = input.input_input_update_0_sm0_03_0_merged_banks_3.peek_2164();
  return value_input_input_update_0_sm0_03_0;
  return 0;
}

inline hw_uint<16> input_blurx_update_0_sm1_05_4_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_update_0_sm1_05_4 read pattern: { blurx_update_0_sm1_05[root = 0, blurx_0, blurx_1] -> input[blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm1_05[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { input_update_0_sm0_03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_input_update_0_sm0_03_0 = input.input_input_update_0_sm0_03_0_merged_banks_3.peek_1082();
  return value_input_input_update_0_sm0_03_0;
  return 0;
}

inline hw_uint<16> input_blurx_update_0_sm1_05_5_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_update_0_sm1_05_5 read pattern: { blurx_update_0_sm1_05[root = 0, blurx_0, blurx_1] -> input[blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 1081 }
  // Read schedule : { blurx_update_0_sm1_05[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { input_update_0_sm0_03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_input_input_update_0_sm0_03_0 = input.input_input_update_0_sm0_03_0_merged_banks_3.peek_0();
  return value_input_input_update_0_sm0_03_0;
  return 0;
}

// # of bundles = 2
// blurx_update_0_sm1_05_read
//	input_blurx_update_0_sm1_05_3
//	input_blurx_update_0_sm1_05_4
//	input_blurx_update_0_sm1_05_5
inline hw_uint<48> input_blurx_update_0_sm1_05_read_bundle_read(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
  // # of ports in bundle: 3
    // input_blurx_update_0_sm1_05_3
    // input_blurx_update_0_sm1_05_4
    // input_blurx_update_0_sm1_05_5

	hw_uint<48> result;
	hw_uint<16> input_blurx_update_0_sm1_05_3_res = input_blurx_update_0_sm1_05_3_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<0, 48>(result, input_blurx_update_0_sm1_05_3_res);
	hw_uint<16> input_blurx_update_0_sm1_05_4_res = input_blurx_update_0_sm1_05_4_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<16, 48>(result, input_blurx_update_0_sm1_05_4_res);
	hw_uint<16> input_blurx_update_0_sm1_05_5_res = input_blurx_update_0_sm1_05_5_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<32, 48>(result, input_blurx_update_0_sm1_05_5_res);
	return result;
}

// input_update_0_sm0_03_write
//	input_input_update_0_sm0_03_0
inline void input_input_update_0_sm0_03_write_bundle_write(hw_uint<16>& input_update_0_sm0_03_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_update_0_sm0_03_0_res = input_update_0_sm0_03_write.extract<0, 15>();
	input_input_update_0_sm0_03_0_write(input_input_update_0_sm0_03_0_res, input, root, input_0, input_1, dynamic_address);
}

// Total re-use buffer capacity: 34672 bits


// Operation logic
inline void input_update_0_sm0_03(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int root, int input_0, int input_1) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m__lp_1_m_input_1__p__0_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_1_m__lp_1_m_input_1__p__0_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_update_0_sm0_03_write_bundle_write(/* arg names */compute_result, input, root, input_0, input_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx_update_0_sm1_05(input_cache& input, blurx_cache& blurx, int root, int blurx_0, int blurx_1) {
  // Dynamic address computation

	// Consume: input
	auto input_1_m__lp_1_m_blurx_1__p__0_rp___p__0_p_0_c_____1_m_blurx_0__p__0_p_0_value = input_blurx_update_0_sm1_05_read_bundle_read(input/* source_delay */, root, blurx_0, blurx_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_generated_compute_unrolled_1(input_1_m__lp_1_m_blurx_1__p__0_rp___p__0_p_0_c_____1_m_blurx_0__p__0_p_0_value);
	// Produce: blurx
	blurx_blurx_update_0_sm1_05_write_bundle_write(/* arg names */compute_result, blurx, root, blurx_0, blurx_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blur3_1_update_0_sm2_07(blurx_cache& blurx, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blur3_1, int root, int blur3_1_0, int blur3_1_1) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx_1_m__lp_1_m_blur3_1_1__p__0_rp___p__0_p_0_c_____1_m_blur3_1_0__p__0_p_0_value = blurx_blur3_1_update_0_sm2_07_read_bundle_read(blurx/* source_delay */, root, blur3_1_0, blur3_1_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blur3_1_generated_compute_unrolled_1(blurx_1_m__lp_1_m_blur3_1_1__p__0_rp___p__0_p_0_c_____1_m_blur3_1_0__p__0_p_0_value);
	// Produce: blur3_1
	blur3_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void blur3_1_opt(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur3_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur3_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_cache blurx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { blur3_1_update_0_sm2_07[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; blurx_update_0_sm1_05[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; input_update_0_sm0_03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
//   { blur3_1_update_0_sm2_07[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for blur3_1_update_0_sm2_07(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { blurx_update_0_sm1_05[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for blurx_update_0_sm1_05(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))
//   { input_update_0_sm0_03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for input_update_0_sm0_03(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1081 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 2] : 2 <= i1 <= 1081 and 2 <= i2 <= 1081; [0, i1, i2, 1] : 2 <= i1 <= 1081 and 0 <= i2 <= 1081; [0, i1, i2, 0] : 0 <= i1 <= 1081 and 0 <= i2 <= 1081 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1081; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          input_update_0_sm0_03(input_arg /* buf name */, input, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          blurx_update_0_sm1_05(input /* buf name */, blurx, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          blur3_1_update_0_sm2_07(blurx /* buf name */, blur3_1, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void blur3_1_opt_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blur3_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    blur3_1_opt(input_arg, blur3_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { blur3_1_update_0_sm2_07[root = 0, blur3_1_0, blur3_1_1] -> blur3_1[blur3_1_1, blur3_1_0] : 0 <= blur3_1_0 <= 1079 and 0 <= blur3_1_1 <= 1079 }
const int blur3_1_update_0_sm2_07_write_pipe0_num_transfers = 1166400;
  // { input_update_0_sm0_03[root = 0, input_0, input_1] -> input_arg[input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 1081 }
const int input_update_0_sm0_03_read_pipe0_num_transfers = 1170724;


extern "C" {

void blur3_1_opt_accel(hw_uint<16>* input_update_0_sm0_03_read_pipe0, hw_uint<16>* blur3_1_update_0_sm2_07_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_sm0_03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = blur3_1_update_0_sm2_07_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_sm0_03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = blur3_1_update_0_sm2_07_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > input_update_0_sm0_03_read_pipe0_channel;
  static HWStream<hw_uint<16> > blur3_1_update_0_sm2_07_write_pipe0_channel;

  burst_read<16>(input_update_0_sm0_03_read_pipe0, input_update_0_sm0_03_read_pipe0_channel, input_update_0_sm0_03_read_pipe0_num_transfers*size);

  blur3_1_opt_wrapper(input_update_0_sm0_03_read_pipe0_channel, blur3_1_update_0_sm2_07_write_pipe0_channel, size);

  burst_write<16>(blur3_1_update_0_sm2_07_write_pipe0, blur3_1_update_0_sm2_07_write_pipe0_channel, blur3_1_update_0_sm2_07_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blur3_1_opt_rdai(HWStream<hw_uint<16> >& input_update_0_sm0_03_read_pipe0, HWStream<hw_uint<16> >&  blur3_1_update_0_sm2_07_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_sm0_03_read_pipe0
#pragma HLS INTERFACE axis register port = blur3_1_update_0_sm2_07_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blur3_1_opt(input_update_0_sm0_03_read_pipe0, blur3_1_update_0_sm2_07_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__
