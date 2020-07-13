#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: bxy_mc_2_opt_compute_units.h
#include "bxy_mc_2_opt_compute_units.h"

#include "hw_classes.h"

struct blurx_blurx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1920], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1921], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_cache {
  blurx_blurx_update_0_write0_merged_banks_3_cache blurx_blurx_update_0_write0_merged_banks_3;
  blurx_blurx_update_0_write1_merged_banks_3_cache blurx_blurx_update_0_write1_merged_banks_3;
};



inline void blurx_blurx_update_0_write0_write(hw_uint<16>& blurx_blurx_update_0_write0, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write0_merged_banks_3.push(blurx_blurx_update_0_write0);
}

inline void blurx_blurx_update_0_write1_write(hw_uint<16>& blurx_blurx_update_0_write1, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  blurx.blurx_blurx_update_0_write1_merged_banks_3.push(blurx_blurx_update_0_write1);
}

inline hw_uint<16> bxy_mc_2_rd0_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_mc_2_rd0 read pattern: { bxy_mc_2_update_0[d0, d1] -> blurx[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_mc_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write0;
  return 0;
}

inline hw_uint<16> bxy_mc_2_rd1_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_mc_2_rd1 read pattern: { bxy_mc_2_update_0[d0, d1] -> blurx[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_mc_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write1;
  return 0;
}

inline hw_uint<16> bxy_mc_2_rd2_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_mc_2_rd2 read pattern: { bxy_mc_2_update_0[d0, d1] -> blurx[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_mc_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_3.peek_0();
  return value_blurx_blurx_update_0_write0;
  return 0;
}

inline hw_uint<16> bxy_mc_2_rd3_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_mc_2_rd3 read pattern: { bxy_mc_2_update_0[d0, d1] -> blurx[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_mc_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_3.peek_1();
  return value_blurx_blurx_update_0_write1;
  return 0;
}

inline hw_uint<16> bxy_mc_2_rd4_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_mc_2_rd4 read pattern: { bxy_mc_2_update_0[d0, d1] -> blurx[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_mc_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_3.peek_0();
  return value_blurx_blurx_update_0_write0;
  return 0;
}

inline hw_uint<16> bxy_mc_2_rd5_select(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bxy_mc_2_rd5 read pattern: { bxy_mc_2_update_0[d0, d1] -> blurx[3 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { bxy_mc_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_3.peek_0();
  return value_blurx_blurx_update_0_write1;
  return 0;
}

// # of bundles = 2
// blurx_update_0_write
//	blurx_blurx_update_0_write0
//	blurx_blurx_update_0_write1
inline void blurx_blurx_update_0_write_bundle_write(hw_uint<32>& blurx_update_0_write, blurx_cache& blurx, int d0, int d1, int dynamic_address) {
	hw_uint<16> blurx_blurx_update_0_write0_res = blurx_update_0_write.extract<0, 15>();
	blurx_blurx_update_0_write0_write(blurx_blurx_update_0_write0_res, blurx, d0, d1, dynamic_address);
	hw_uint<16> blurx_blurx_update_0_write1_res = blurx_update_0_write.extract<16, 31>();
	blurx_blurx_update_0_write1_write(blurx_blurx_update_0_write1_res, blurx, d0, d1, dynamic_address);
}

// bxy_mc_2_update_0_read
//	bxy_mc_2_rd0
//	bxy_mc_2_rd1
//	bxy_mc_2_rd2
//	bxy_mc_2_rd3
//	bxy_mc_2_rd4
//	bxy_mc_2_rd5
inline hw_uint<96> blurx_bxy_mc_2_update_0_read_bundle_read(blurx_cache& blurx, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 6
    // bxy_mc_2_rd0
    // bxy_mc_2_rd1
    // bxy_mc_2_rd2
    // bxy_mc_2_rd3
    // bxy_mc_2_rd4
    // bxy_mc_2_rd5

	hw_uint<96> result;
	hw_uint<16> bxy_mc_2_rd0_res = bxy_mc_2_rd0_select(blurx, d0, d1, dynamic_address);
	set_at<0, 96>(result, bxy_mc_2_rd0_res);
	hw_uint<16> bxy_mc_2_rd1_res = bxy_mc_2_rd1_select(blurx, d0, d1, dynamic_address);
	set_at<16, 96>(result, bxy_mc_2_rd1_res);
	hw_uint<16> bxy_mc_2_rd2_res = bxy_mc_2_rd2_select(blurx, d0, d1, dynamic_address);
	set_at<32, 96>(result, bxy_mc_2_rd2_res);
	hw_uint<16> bxy_mc_2_rd3_res = bxy_mc_2_rd3_select(blurx, d0, d1, dynamic_address);
	set_at<48, 96>(result, bxy_mc_2_rd3_res);
	hw_uint<16> bxy_mc_2_rd4_res = bxy_mc_2_rd4_select(blurx, d0, d1, dynamic_address);
	set_at<64, 96>(result, bxy_mc_2_rd4_res);
	hw_uint<16> bxy_mc_2_rd5_res = bxy_mc_2_rd5_select(blurx, d0, d1, dynamic_address);
	set_at<80, 96>(result, bxy_mc_2_rd5_res);
	return result;
}

#include "hw_classes.h"

struct input_input_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 1923
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 960> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 960> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_960() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_961() {
		return f2;
	}

	inline hw_uint<16> peek_1921() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1922() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 960
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 960
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 1923
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 960> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 960> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_960() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_961() {
		return f2;
	}

	inline hw_uint<16> peek_1921() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1922() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 960
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 960
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_cache {
  input_input_update_0_write0_merged_banks_3_cache input_input_update_0_write0_merged_banks_3;
  input_input_update_0_write1_merged_banks_3_cache input_input_update_0_write1_merged_banks_3;
};



inline void input_input_update_0_write0_write(hw_uint<16>& input_input_update_0_write0, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write0_merged_banks_3.push(input_input_update_0_write0);
}

inline void input_input_update_0_write1_write(hw_uint<16>& input_input_update_0_write1, input_cache& input, int d0, int d1, int dynamic_address) {
  input.input_input_update_0_write1_merged_banks_3.push(input_input_update_0_write1);
}

inline hw_uint<16> blurx_rd0_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd0 read pattern: { blurx_update_0[d0, d1] -> input[2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_1922();
  return value_input_input_update_0_write0;
  return 0;
}

inline hw_uint<16> blurx_rd1_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd1 read pattern: { blurx_update_0[d0, d1] -> input[2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_961();
  return value_input_input_update_0_write0;
  return 0;
}

inline hw_uint<16> blurx_rd2_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd2 read pattern: { blurx_update_0[d0, d1] -> input[2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_0();
  return value_input_input_update_0_write0;
  return 0;
}

inline hw_uint<16> blurx_rd3_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd3 read pattern: { blurx_update_0[d0, d1] -> input[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_1922();
  return value_input_input_update_0_write1;
  return 0;
}

inline hw_uint<16> blurx_rd4_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd4 read pattern: { blurx_update_0[d0, d1] -> input[1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_961();
  return value_input_input_update_0_write1;
  return 0;
}

inline hw_uint<16> blurx_rd5_select(input_cache& input, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd5 read pattern: { blurx_update_0[d0, d1] -> input[1 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_0();
  return value_input_input_update_0_write1;
  return 0;
}

// # of bundles = 2
// blurx_update_0_read
//	blurx_rd0
//	blurx_rd1
//	blurx_rd2
//	blurx_rd3
//	blurx_rd4
//	blurx_rd5
inline hw_uint<96> input_blurx_update_0_read_bundle_read(input_cache& input, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 6
    // blurx_rd0
    // blurx_rd1
    // blurx_rd2
    // blurx_rd3
    // blurx_rd4
    // blurx_rd5

	hw_uint<96> result;
	hw_uint<16> blurx_rd0_res = blurx_rd0_select(input, d0, d1, dynamic_address);
	set_at<0, 96>(result, blurx_rd0_res);
	hw_uint<16> blurx_rd1_res = blurx_rd1_select(input, d0, d1, dynamic_address);
	set_at<16, 96>(result, blurx_rd1_res);
	hw_uint<16> blurx_rd2_res = blurx_rd2_select(input, d0, d1, dynamic_address);
	set_at<32, 96>(result, blurx_rd2_res);
	hw_uint<16> blurx_rd3_res = blurx_rd3_select(input, d0, d1, dynamic_address);
	set_at<48, 96>(result, blurx_rd3_res);
	hw_uint<16> blurx_rd4_res = blurx_rd4_select(input, d0, d1, dynamic_address);
	set_at<64, 96>(result, blurx_rd4_res);
	hw_uint<16> blurx_rd5_res = blurx_rd5_select(input, d0, d1, dynamic_address);
	set_at<80, 96>(result, blurx_rd5_res);
	return result;
}

// input_update_0_write
//	input_input_update_0_write0
//	input_input_update_0_write1
inline void input_input_update_0_write_bundle_write(hw_uint<32>& input_update_0_write, input_cache& input, int d0, int d1, int dynamic_address) {
	hw_uint<16> input_input_update_0_write0_res = input_update_0_write.extract<0, 15>();
	input_input_update_0_write0_write(input_input_update_0_write0_res, input, d0, d1, dynamic_address);
	hw_uint<16> input_input_update_0_write1_res = input_update_0_write.extract<16, 31>();
	input_input_update_0_write1_write(input_input_update_0_write1_res, input, d0, d1, dynamic_address);
}



// Operation logic
inline void input_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */input_arg, input_cache& input, int d0, int d1) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_0_c__0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_2(input_arg_0_c__0_value);
	// Produce: input
	input_input_update_0_write_bundle_write(/* arg names */compute_result, input, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx_update_0(input_cache& input, blurx_cache& blurx, int d0, int d1) {
  // Dynamic address computation

	// Consume: input
	auto input_0_c__0_value = input_blurx_update_0_read_bundle_read(input/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_generated_compute_unrolled_2(input_0_c__0_value);
	// Produce: blurx
	blurx_blurx_update_0_write_bundle_write(/* arg names */compute_result, blurx, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bxy_mc_2_update_0(blurx_cache& blurx, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */bxy_mc_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx_0_c__0_value = blurx_bxy_mc_2_update_0_read_bundle_read(blurx/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = bxy_mc_2_generated_compute_unrolled_2(blurx_0_c__0_value);
	// Produce: bxy_mc_2
	bxy_mc_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void bxy_mc_2_opt(HWStream<hw_uint<32> >& /* get_args num ports = 2 */input_arg, HWStream<hw_uint<32> >& /* get_args num ports = 2 */bxy_mc_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("bxy_mc_2_opt_debug.csv");
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

// schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079; input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081; bxy_mc_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
//   { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
// Condition for blurx_update_0(((-2 + i2 == 0) && (i1 >= 0) && (960 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))
//   { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
// Condition for input_update_0(((-1 + i2 == 0) && (i1 >= 0) && (960 - i1 >= 0) && (i0 >= 0) && (1081 - i0 >= 0)))
//   { bxy_mc_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for bxy_mc_2_update_0(((-3 + i2 == 0) && (-1 + i1 >= 0) && (960 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))

  /*
for (int c0 = 0; c0 <= 1081; c0 += 1)
  for (int c1 = 0; c1 <= 960; c1 += 1) {
    input_update_0(c1, c0);
    if (c0 >= 2) {
      blurx_update_0(c1, c0 - 2);
      if (c1 >= 1)
        bxy_mc_2_update_0(c1 - 1, c0 - 2);
    }
  }

  */
	for (int c0 = 0; c0 <= 1081; c0 += 1)
	  for (int c1 = 0; c1 <= 960; c1 += 1) {
	    input_update_0(input_arg /* buf name */, input, c1, c0);
	    if (c0 >= 2) {
	      blurx_update_0(input /* buf name */, blurx, c1, c0 - 2);
	      if (c1 >= 1)
	        bxy_mc_2_update_0(blurx /* buf name */, bxy_mc_2, c1 - 1, c0 - 2);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
  // { bxy_mc_2_update_0[root = 0, bxy_mc_2_0, bxy_mc_2_1] -> bxy_mc_2[0, 0] : 0 <= bxy_mc_2_0 <= 959 and 0 <= bxy_mc_2_1 <= 1079 }
const int bxy_mc_2_update_0_write_num_transfers = 1036800;
  // { input_update_0[root = 0, input_0, input_1] -> input_arg[0, 0] : 0 <= input_0 <= 960 and 0 <= input_1 <= 1081 }
const int input_update_0_read_num_transfers = 1039802;


extern "C" {

static void read_input_update_0_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = input_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_bxy_mc_2_update_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = bxy_mc_2_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void bxy_mc_2_opt_accel(hw_uint<32>* input_update_0_read, hw_uint<32>* bxy_mc_2_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = bxy_mc_2_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = bxy_mc_2_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > input_update_0_read_channel;
  static HWStream<hw_uint<32> > bxy_mc_2_update_0_write_channel;

  read_input_update_0_read(input_update_0_read, input_update_0_read_channel, size);

  bxy_mc_2_opt(input_update_0_read_channel, bxy_mc_2_update_0_write_channel);

  write_bxy_mc_2_update_0_write(bxy_mc_2_update_0_write, bxy_mc_2_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

