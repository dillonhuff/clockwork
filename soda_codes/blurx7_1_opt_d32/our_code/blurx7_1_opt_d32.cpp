#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: blurx7_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "blurx7_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct input_input_update_0_sm8_012_4_to_input_load_to_input_to_gp_003_sm10_016_1_cache {
	// RAM Box: {[0, 1921], [0, 1079]}
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
    // { load_to_input_to_gp_003_sm10_016[root = 0, input_ld2, input_ld1] -> input[input_ld1, input_ld2] : 0 <= input_ld2 <= 1079 and 0 <= input_ld1 <= 1921 }
  // # of banks: 1
  input_input_update_0_sm8_012_4_to_input_load_to_input_to_gp_003_sm10_016_1_cache input_input_update_0_sm8_012_4_to_input_load_to_input_to_gp_003_sm10_016_1;
};



inline void input_input_update_0_sm8_012_4_write(hw_uint<16>& input_input_update_0_sm8_012_4, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_update_0_sm8_012_4_to_input_load_to_input_to_gp_003_sm10_016_1.push(input_input_update_0_sm8_012_4);
}

inline hw_uint<16> input_load_to_input_to_gp_003_sm10_016_1_select(input_cache& input, int root, int input_ld2, int input_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_load_to_input_to_gp_003_sm10_016_1 read pattern: { load_to_input_to_gp_003_sm10_016[root = 0, input_ld2, input_ld1] -> input[input_ld1, input_ld2] : 0 <= input_ld2 <= 1079 and 0 <= input_ld1 <= 1921 }
  // Read schedule : { load_to_input_to_gp_003_sm10_016[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  // Write schedule: { input_update_0_sm8_012[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_input_input_update_0_sm8_012_4 = input.input_input_update_0_sm8_012_4_to_input_load_to_input_to_gp_003_sm10_016_1.peek(/* one reader or all rams */ 0);
  return value_input_input_update_0_sm8_012_4;
  return 0;
}

// # of bundles = 2
// input_update_0_sm8_012_write
//	input_input_update_0_sm8_012_4
inline void input_input_update_0_sm8_012_write_bundle_write(hw_uint<16>& input_update_0_sm8_012_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_update_0_sm8_012_4_res = input_update_0_sm8_012_write.extract<0, 15>();
	input_input_update_0_sm8_012_4_write(input_input_update_0_sm8_012_4_res, input, root, input_0, input_1, dynamic_address);
}

// load_to_input_to_gp_003_sm10_016_read
//	input_load_to_input_to_gp_003_sm10_016_1
inline hw_uint<16> input_load_to_input_to_gp_003_sm10_016_read_bundle_read(input_cache& input, int root, int input_ld2, int input_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // input_load_to_input_to_gp_003_sm10_016_1

	hw_uint<16> result;
	hw_uint<16> input_load_to_input_to_gp_003_sm10_016_1_res = input_load_to_input_to_gp_003_sm10_016_1_select(input, root, input_ld2, input_ld1, dynamic_address);
	set_at<0, 16>(result, input_load_to_input_to_gp_003_sm10_016_1_res);
	return result;
}

struct input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_7_cache {
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

struct input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_8_cache {
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

struct input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_9_cache {
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

struct input_FIFO_buf4_cache {
  // Reader addrs...
    // { blurx7_1_update_0_sm9_014[root = 0, blurx7_1_0, blurx7_1_1] -> input_FIFO_buf4[blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
    // { blurx7_1_update_0_sm9_014[root = 0, blurx7_1_0, blurx7_1_1] -> input_FIFO_buf4[1 + blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
    // { blurx7_1_update_0_sm9_014[root = 0, blurx7_1_0, blurx7_1_1] -> input_FIFO_buf4[2 + blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
  // # of banks: 3
  input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_7_cache input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_7;
  input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_8_cache input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_8;
  input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_9_cache input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_9;
};



inline void input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_write(hw_uint<16>& input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2, input_FIFO_buf4_cache& input_FIFO_buf4, int root, int input_to_gp_00_ld6, int input_to_gp_00_ld5, int dynamic_address) {
  input_FIFO_buf4.input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_7.push(input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2);
  input_FIFO_buf4.input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_8.push(input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2);
  input_FIFO_buf4.input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_9.push(input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2);
}

inline hw_uint<16> input_FIFO_buf4_blurx7_1_update_0_sm9_014_7_select(input_FIFO_buf4_cache& input_FIFO_buf4, int root, int blurx7_1_0, int blurx7_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf4_blurx7_1_update_0_sm9_014_7 read pattern: { blurx7_1_update_0_sm9_014[root = 0, blurx7_1_0, blurx7_1_1] -> input_FIFO_buf4[blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
  // Read schedule : { blurx7_1_update_0_sm9_014[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_input_FIFO_buf47_sm11_018[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2 = input_FIFO_buf4.input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_7.peek(/* one reader or all rams */ 2);
  return value_input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2;
  return 0;
}

inline hw_uint<16> input_FIFO_buf4_blurx7_1_update_0_sm9_014_8_select(input_FIFO_buf4_cache& input_FIFO_buf4, int root, int blurx7_1_0, int blurx7_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf4_blurx7_1_update_0_sm9_014_8 read pattern: { blurx7_1_update_0_sm9_014[root = 0, blurx7_1_0, blurx7_1_1] -> input_FIFO_buf4[1 + blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
  // Read schedule : { blurx7_1_update_0_sm9_014[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_input_FIFO_buf47_sm11_018[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2 = input_FIFO_buf4.input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_8.peek(/* one reader or all rams */ 1);
  return value_input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2;
  return 0;
}

inline hw_uint<16> input_FIFO_buf4_blurx7_1_update_0_sm9_014_9_select(input_FIFO_buf4_cache& input_FIFO_buf4, int root, int blurx7_1_0, int blurx7_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_FIFO_buf4_blurx7_1_update_0_sm9_014_9 read pattern: { blurx7_1_update_0_sm9_014[root = 0, blurx7_1_0, blurx7_1_1] -> input_FIFO_buf4[2 + blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
  // Read schedule : { blurx7_1_update_0_sm9_014[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_input_FIFO_buf47_sm11_018[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
  auto value_input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2 = input_FIFO_buf4.input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_to_input_FIFO_buf4_blurx7_1_update_0_sm9_014_9.peek(/* one reader or all rams */ 0);
  return value_input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2;
  return 0;
}

// # of bundles = 2
// blurx7_1_update_0_sm9_014_read
//	input_FIFO_buf4_blurx7_1_update_0_sm9_014_7
//	input_FIFO_buf4_blurx7_1_update_0_sm9_014_8
//	input_FIFO_buf4_blurx7_1_update_0_sm9_014_9
inline hw_uint<48> input_FIFO_buf4_blurx7_1_update_0_sm9_014_read_bundle_read(input_FIFO_buf4_cache& input_FIFO_buf4, int root, int blurx7_1_0, int blurx7_1_1, int dynamic_address) {
  // # of ports in bundle: 3
    // input_FIFO_buf4_blurx7_1_update_0_sm9_014_7
    // input_FIFO_buf4_blurx7_1_update_0_sm9_014_8
    // input_FIFO_buf4_blurx7_1_update_0_sm9_014_9

	hw_uint<48> result;
	hw_uint<16> input_FIFO_buf4_blurx7_1_update_0_sm9_014_7_res = input_FIFO_buf4_blurx7_1_update_0_sm9_014_7_select(input_FIFO_buf4, root, blurx7_1_0, blurx7_1_1, dynamic_address);
	set_at<0, 48>(result, input_FIFO_buf4_blurx7_1_update_0_sm9_014_7_res);
	hw_uint<16> input_FIFO_buf4_blurx7_1_update_0_sm9_014_8_res = input_FIFO_buf4_blurx7_1_update_0_sm9_014_8_select(input_FIFO_buf4, root, blurx7_1_0, blurx7_1_1, dynamic_address);
	set_at<16, 48>(result, input_FIFO_buf4_blurx7_1_update_0_sm9_014_8_res);
	hw_uint<16> input_FIFO_buf4_blurx7_1_update_0_sm9_014_9_res = input_FIFO_buf4_blurx7_1_update_0_sm9_014_9_select(input_FIFO_buf4, root, blurx7_1_0, blurx7_1_1, dynamic_address);
	set_at<32, 48>(result, input_FIFO_buf4_blurx7_1_update_0_sm9_014_9_res);
	return result;
}

// load_to_input_FIFO_buf47_sm11_018_write
//	input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2
inline void input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_write_bundle_write(hw_uint<16>& load_to_input_FIFO_buf47_sm11_018_write, input_FIFO_buf4_cache& input_FIFO_buf4, int root, int input_to_gp_00_ld6, int input_to_gp_00_ld5, int dynamic_address) {
	hw_uint<16> input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_res = load_to_input_FIFO_buf47_sm11_018_write.extract<0, 15>();
	input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_write(input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_2_res, input_FIFO_buf4, root, input_to_gp_00_ld6, input_to_gp_00_ld5, dynamic_address);
}

// Total re-use buffer capacity: 48 bits
// Operation logic
inline void load_to_input_FIFO_buf47_sm11_018(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_00, input_FIFO_buf4_cache& input_FIFO_buf4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_to_gp_00
	auto input_to_gp_00__lp_1_m_input_to_gp_00_ld5__p__0_rp__c____input_to_gp_00_ld6_value = input_to_gp_00.read();
	// Produce: input_FIFO_buf4
	input_FIFO_buf4_load_to_input_FIFO_buf47_sm11_018_write_bundle_write(/* arg names */input_to_gp_00__lp_1_m_input_to_gp_00_ld5__p__0_rp__c____input_to_gp_00_ld6_value, input_FIFO_buf4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx7_1_update_0_sm9_014(input_FIFO_buf4_cache& input_FIFO_buf4, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */blurx7_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_FIFO_buf4
	auto input_FIFO_buf4_1_m__lp_1_m_blurx7_1_1__p__0_rp___p__0_p_0_c_____1_m_blurx7_1_0__p__0_p_0_value = input_FIFO_buf4_blurx7_1_update_0_sm9_014_read_bundle_read(input_FIFO_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx7_1_generated_compute_unrolled_1(input_FIFO_buf4_1_m__lp_1_m_blurx7_1_1__p__0_rp___p__0_p_0_c_____1_m_blurx7_1_0__p__0_p_0_value);
	// Produce: blurx7_1
	blurx7_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurx7_1_0_input_to_gp_00_ld6_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_00, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blurx7_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurx7_1_0_input_to_gp_00_ld6__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_FIFO_buf4_cache input_FIFO_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { blurx7_1_update_0_sm9_014[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_input_FIFO_buf47_sm11_018[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
//   { blurx7_1_update_0_sm9_014[d0 = 0, d1, d2] -> [0, d1, 2 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for blurx7_1_update_0_sm9_014(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1079 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { load_to_input_FIFO_buf47_sm11_018[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
// Condition for load_to_input_FIFO_buf47_sm11_018(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1079 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 3] : 0 <= i1 <= 1079 and 2 <= i2 <= 1921; [0, i1, i2, 2] : 0 <= i1 <= 1079 and 0 <= i2 <= 1921 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1079; i1++) {
	    for (int i2 = 0; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_FIFO_buf47_sm11_018(input_to_gp_00 /* buf name */, input_FIFO_buf4, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 2 }
	        // { [i0, i1, i2] : i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i2)) >= 0)))) {
	          blurx7_1_update_0_sm9_014(input_FIFO_buf4 /* buf name */, blurx7_1, 0, ((1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void input_update_0_sm8_012(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_arg, input_cache& input, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m__lp_1_m_input_1__p__0_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_1(input_arg_1_m__lp_1_m_input_1__p__0_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_update_0_sm8_012_write_bundle_write(/* arg names */compute_result, input, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_input_to_gp_003_sm10_016(input_cache& input, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_to_gp_00, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: input
	auto input__lp_1_m_input_ld1__p__0_rp__c____input_ld2_value = input_load_to_input_to_gp_003_sm10_016_read_bundle_read(input/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: input_to_gp_00
	input_to_gp_00.write(input__lp_1_m_input_ld1__p__0_rp__c____input_ld2_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_input_0_input_ld2_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_to_gp_00) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_input_0_input_ld2__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_input_to_gp_003_sm10_016[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921; input_update_0_sm8_012[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
//   { load_to_input_to_gp_003_sm10_016[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
// Condition for load_to_input_to_gp_003_sm10_016(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1079 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { input_update_0_sm8_012[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1079 and 0 <= d2 <= 1921 }
// Condition for input_update_0_sm8_012(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1079 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1079 and 0 <= i2 <= 1921 and 0 <= i3 <= 1 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1079; i1++) {
	    for (int i2 = 0; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          input_update_0_sm8_012(input_arg /* buf name */, input, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_input_to_gp_003_sm10_016(input /* buf name */, input_to_gp_00, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void blurx7_1_opt_d32(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blurx7_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blurx7_1_opt_d32_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match input_to_gp_00 = 512
// Bits to slack match input_to_gp_00 = 512
// Bits in internal re-use buffers               : 48 bits
// Bits in channels needed to guarantee causality: 0
// Bits in channels needed to match slack        : 512
  HWStream< hw_uint<16> > input_to_gp_00;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=input_to_gp_00.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_input_0_input_ld2_(input_arg, input_to_gp_00);
  Extracted_blurx7_1_0_input_to_gp_00_ld6_(input_to_gp_00, blurx7_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void blurx7_1_opt_d32_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_arg, HWStream<hw_uint<16> >& /* get_args num ports = 1 */blurx7_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    blurx7_1_opt_d32(input_arg, blurx7_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { blurx7_1_update_0_sm9_014[root = 0, blurx7_1_0, blurx7_1_1] -> blurx7_1[blurx7_1_1, blurx7_1_0] : 0 <= blurx7_1_0 <= 1079 and 0 <= blurx7_1_1 <= 1919 }
const int blurx7_1_update_0_sm9_014_write_pipe0_num_transfers = 2073600;
  // { input_update_0_sm8_012[root = 0, input_0, input_1] -> input_arg[input_1, input_0] : 0 <= input_0 <= 1079 and 0 <= input_1 <= 1921 }
const int input_update_0_sm8_012_read_pipe0_num_transfers = 2075760;


extern "C" {

void blurx7_1_opt_d32_accel(hw_uint<16>* input_update_0_sm8_012_read_pipe0, hw_uint<16>* blurx7_1_update_0_sm9_014_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_sm8_012_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = blurx7_1_update_0_sm9_014_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_sm8_012_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = blurx7_1_update_0_sm9_014_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > input_update_0_sm8_012_read_pipe0_channel;
  static HWStream<hw_uint<16> > blurx7_1_update_0_sm9_014_write_pipe0_channel;

  burst_read<16>(input_update_0_sm8_012_read_pipe0, input_update_0_sm8_012_read_pipe0_channel, input_update_0_sm8_012_read_pipe0_num_transfers*size);

  blurx7_1_opt_d32_wrapper(input_update_0_sm8_012_read_pipe0_channel, blurx7_1_update_0_sm9_014_write_pipe0_channel, size);

  burst_write<16>(blurx7_1_update_0_sm9_014_write_pipe0, blurx7_1_update_0_sm9_014_write_pipe0_channel, blurx7_1_update_0_sm9_014_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blurx7_1_opt_d32_rdai(HWStream<hw_uint<16> >& input_update_0_sm8_012_read_pipe0, HWStream<hw_uint<16> >&  blurx7_1_update_0_sm9_014_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_update_0_sm8_012_read_pipe0
#pragma HLS INTERFACE axis register port = blurx7_1_update_0_sm9_014_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blurx7_1_opt_d32(input_update_0_sm8_012_read_pipe0, blurx7_1_update_0_sm9_014_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

