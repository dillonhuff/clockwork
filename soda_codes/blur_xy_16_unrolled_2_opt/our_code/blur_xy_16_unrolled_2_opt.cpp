#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "blur_xy_16_unrolled_2_opt_compute_units.h"

#include "hw_classes.h"

struct blurx_blurx_update_0_write0_merged_banks_2_cache {
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

struct blurx_blurx_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[0, 1921], [0, 1079]}
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
  blurx_blurx_update_0_write0_merged_banks_2_cache blurx_blurx_update_0_write0_merged_banks_2;
  blurx_blurx_update_0_write1_merged_banks_2_cache blurx_blurx_update_0_write1_merged_banks_2;
};



inline void blurx_blurx_update_0_write0_write(hw_uint<16>& blurx_blurx_update_0_write0, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write0_merged_banks_2.push(blurx_blurx_update_0_write0);
}

inline void blurx_blurx_update_0_write1_write(hw_uint<16>& blurx_blurx_update_0_write1, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write1_merged_banks_2.push(blurx_blurx_update_0_write1);
}

inline hw_uint<16> blur_xy_16_unrolled_2_rd0_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_2_rd0 read pattern: { blur_xy_16_unrolled_2_update_0[d0, d1] -> blurx[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_2.peek_1();
  return value_blurx_blurx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_2_rd1_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_2_rd1 read pattern: { blur_xy_16_unrolled_2_update_0[d0, d1] -> blurx[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_2.peek_1();
  return value_blurx_blurx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_2_rd2_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_2_rd2 read pattern: { blur_xy_16_unrolled_2_update_0[d0, d1] -> blurx[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_2.peek_0();
  return value_blurx_blurx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_2_rd3_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_2_rd3 read pattern: { blur_xy_16_unrolled_2_update_0[d0, d1] -> blurx[3 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_2_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_2.peek_0();
  return value_blurx_blurx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blur_xy_16_unrolled_2_update_0_read
//	blur_xy_16_unrolled_2_rd0
//	blur_xy_16_unrolled_2_rd1
//	blur_xy_16_unrolled_2_rd2
//	blur_xy_16_unrolled_2_rd3
inline hw_uint<64> blurx_blur_xy_16_unrolled_2_update_0_read_bundle_read(blurx_cache& blurx, int d0, int d1) {
  // # of ports in bundle: 4
    // blur_xy_16_unrolled_2_rd0
    // blur_xy_16_unrolled_2_rd1
    // blur_xy_16_unrolled_2_rd2
    // blur_xy_16_unrolled_2_rd3

	hw_uint<64> result;
	hw_uint<16> blur_xy_16_unrolled_2_rd0_res = blur_xy_16_unrolled_2_rd0_select(blurx, d0, d1);
	set_at<0, 64>(result, blur_xy_16_unrolled_2_rd0_res);
	hw_uint<16> blur_xy_16_unrolled_2_rd1_res = blur_xy_16_unrolled_2_rd1_select(blurx, d0, d1);
	set_at<16, 64>(result, blur_xy_16_unrolled_2_rd1_res);
	hw_uint<16> blur_xy_16_unrolled_2_rd2_res = blur_xy_16_unrolled_2_rd2_select(blurx, d0, d1);
	set_at<32, 64>(result, blur_xy_16_unrolled_2_rd2_res);
	hw_uint<16> blur_xy_16_unrolled_2_rd3_res = blur_xy_16_unrolled_2_rd3_select(blurx, d0, d1);
	set_at<48, 64>(result, blur_xy_16_unrolled_2_rd3_res);
	return result;
}

// blurx_update_0_write
//	blurx_blurx_update_0_write0
//	blurx_blurx_update_0_write1
inline void blurx_blurx_update_0_write_bundle_write(hw_uint<32>& blurx_update_0_write, blurx_cache& blurx, int d0, int d1) {
	hw_uint<16> blurx_blurx_update_0_write0_res = blurx_update_0_write.extract<0, 15>();
	blurx_blurx_update_0_write0_write(blurx_blurx_update_0_write0_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write1_res = blurx_update_0_write.extract<16, 31>();
	blurx_blurx_update_0_write1_write(blurx_blurx_update_0_write1_res, blurx, d0, d1);
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
	// RAM Box: {[0, 1921], [0, 1081]}
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



inline void input_input_update_0_write0_write(hw_uint<16>& input_input_update_0_write0, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write0_merged_banks_3.push(input_input_update_0_write0);
}

inline void input_input_update_0_write1_write(hw_uint<16>& input_input_update_0_write1, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write1_merged_banks_3.push(input_input_update_0_write1);
}

inline hw_uint<16> blurx_rd0_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd0 read pattern: { blurx_update_0[d0, d1] -> input[2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 1922 : 0 < d0 <= 959 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (962 + d0) : d0 = 960 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 1922 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_1922();
  return value_input_input_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd1_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd1 read pattern: { blurx_update_0[d0, d1] -> input[2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 961 : 0 < d0 <= 959 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 960 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 961 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_961();
  return value_input_input_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd2_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd2 read pattern: { blurx_update_0[d0, d1] -> input[2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_0();
  return value_input_input_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd3_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd3 read pattern: { blurx_update_0[d0, d1] -> input[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 1922 : 0 < d0 <= 959 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (962 + d0) : d0 = 960 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 1922 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_1922();
  return value_input_input_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd4_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd4 read pattern: { blurx_update_0[d0, d1] -> input[1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 961 : 0 < d0 <= 959 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 960 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 961 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_961();
  return value_input_input_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd5_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd5 read pattern: { blurx_update_0[d0, d1] -> input[1 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write1 = input.input_input_update_0_write1_merged_banks_3.peek_0();
  return value_input_input_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blurx_update_0_read
//	blurx_rd0
//	blurx_rd1
//	blurx_rd2
//	blurx_rd3
//	blurx_rd4
//	blurx_rd5
inline hw_uint<96> input_blurx_update_0_read_bundle_read(input_cache& input, int d0, int d1) {
  // # of ports in bundle: 6
    // blurx_rd0
    // blurx_rd1
    // blurx_rd2
    // blurx_rd3
    // blurx_rd4
    // blurx_rd5

	hw_uint<96> result;
	hw_uint<16> blurx_rd0_res = blurx_rd0_select(input, d0, d1);
	set_at<0, 96>(result, blurx_rd0_res);
	hw_uint<16> blurx_rd1_res = blurx_rd1_select(input, d0, d1);
	set_at<16, 96>(result, blurx_rd1_res);
	hw_uint<16> blurx_rd2_res = blurx_rd2_select(input, d0, d1);
	set_at<32, 96>(result, blurx_rd2_res);
	hw_uint<16> blurx_rd3_res = blurx_rd3_select(input, d0, d1);
	set_at<48, 96>(result, blurx_rd3_res);
	hw_uint<16> blurx_rd4_res = blurx_rd4_select(input, d0, d1);
	set_at<64, 96>(result, blurx_rd4_res);
	hw_uint<16> blurx_rd5_res = blurx_rd5_select(input, d0, d1);
	set_at<80, 96>(result, blurx_rd5_res);
	return result;
}

// input_update_0_write
//	input_input_update_0_write0
//	input_input_update_0_write1
inline void input_input_update_0_write_bundle_write(hw_uint<32>& input_update_0_write, input_cache& input, int d0, int d1) {
	hw_uint<16> input_input_update_0_write0_res = input_update_0_write.extract<0, 15>();
	input_input_update_0_write0_write(input_input_update_0_write0_res, input, d0, d1);
	hw_uint<16> input_input_update_0_write1_res = input_update_0_write.extract<16, 31>();
	input_input_update_0_write1_write(input_input_update_0_write1_res, input, d0, d1);
}



// Operation logic
inline void input_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */input_arg, input_cache& input, int d0, int d1) {
	// Consume: input_arg
	auto input_arg_0_c__0_value = input_arg.read();
	auto compute_result = input_generated_compute_unrolled_2(input_arg_0_c__0_value);
	// Produce: input
	input_input_update_0_write_bundle_write(compute_result, input, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "input_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "input_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__
}

inline void blurx_update_0(input_cache& input, blurx_cache& blurx, int d0, int d1) {
	// Consume: input
	auto input_0_c__0_value = input_blurx_update_0_read_bundle_read(input/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blurx_update_0_input," << d0<< "," << d1<< "," <<  input_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = blurx_generated_compute_unrolled_2(input_0_c__0_value);
	// Produce: blurx
	blurx_blurx_update_0_write_bundle_write(compute_result, blurx, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "blurx_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blurx_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__
}

inline void blur_xy_16_unrolled_2_update_0(blurx_cache& blurx, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */blur_xy_16_unrolled_2, int d0, int d1) {
	// Consume: blurx
	auto blurx_0_c__0_value = blurx_blur_xy_16_unrolled_2_update_0_read_bundle_read(blurx/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blur_xy_16_unrolled_2_update_0_blurx," << d0<< "," << d1<< "," <<  blurx_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = blur_xy_16_unrolled_2_generated_compute_unrolled_2(blurx_0_c__0_value);
	// Produce: blur_xy_16_unrolled_2
	blur_xy_16_unrolled_2.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "blur_xy_16_unrolled_2_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blur_xy_16_unrolled_2_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void blur_xy_16_unrolled_2_opt(HWStream<hw_uint<32> >& /* get_args num ports = 2 */input_arg, HWStream<hw_uint<32> >& /* get_args num ports = 2 */blur_xy_16_unrolled_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur_xy_16_unrolled_2_opt_debug.csv");
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
	
	for (int c0 = 0; c0 <= 1081; c0++) {
	  for (int c1 = 0; c1 <= 960; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 960) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1081) && ((c0 - 0) % 1 == 0)) {
	input_update_0(input_arg, input, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 960) && ((c1 - 0) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	blurx_update_0(input, blurx, (c1 - 0) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	blur_xy_16_unrolled_2_update_0(blurx, blur_xy_16_unrolled_2, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
#include "blur_xy_16_unrolled_2_opt.h"

#define INPUT_SIZE 2079604
#define OUTPUT_SIZE 2073600

extern "C" {

static void read_input(hw_uint<32>* input, hls::stream<hw_uint<32>>& v, const int size) {
  for (int i = 0; i < INPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    v.write(input[i]);
  }
}

static void write_output(hw_uint<32>* output, hls::stream<hw_uint<32>>& v, const int size) {
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    output[i] = v.read();
  }
}

void blur_xy_16_unrolled_2_opt_accel(int* input_update_0_read_arg, int* blur_xy_16_unrolled_2_update_0_write_arg, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = blur_xy_16_unrolled_2_update_0_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = input_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = blur_xy_16_unrolled_2_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static hls::stream<hw_uint<32> > input_arg;
  static hls::stream<hw_uint<32> > blur_xy_16_unrolled_2;

  read_input(input_arg_arg, input_arg, size);

  blur_xy_16_unrolled_2_opt(input_arg, blur_xy_16_unrolled_2);

  write_output(blur_xy_16_unrolled_2_arg, blur_xy_16_unrolled_2, size);
}

}
#endif //__VIVADO_SYNTH__

