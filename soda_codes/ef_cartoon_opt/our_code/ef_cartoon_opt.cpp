#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "ef_cartoon_opt_compute_units.h"

#include "hw_classes.h"

struct bright_bright_update_0_write0_merged_banks_11_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 417
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 204> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 204> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_206() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_207() {
		return f6;
	}

	inline hw_uint<16> peek_208() {
		return f8;
	}

	inline hw_uint<16> peek_209() {
		return f10;
	}

	inline hw_uint<16> peek_413() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_414() {
		return f12;
	}

	inline hw_uint<16> peek_415() {
		return f14;
	}

	inline hw_uint<16> peek_416() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 204
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 204 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 204
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 204 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_cache {
  bright_bright_update_0_write0_merged_banks_11_cache bright_bright_update_0_write0_merged_banks_11;
};



inline void bright_bright_update_0_write0_write(hw_uint<16>& bright_bright_update_0_write0, bright_cache& bright, int d0, int d1) {
  bright.bright_bright_update_0_write0_merged_banks_11.push(bright_bright_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_1_rd0_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd0 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 416 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_416();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd1_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd1 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 209 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_209();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd2_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd2 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_2();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd3_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd3 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 415 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_415();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd4_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd4 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 208 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_208();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd5_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd5 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd6_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd6 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 414 : 0 <= d0 <= 203 and 0 <= d1 <= 204; bright_gauss_blur_1_update_0[d0, d1] -> (210 + d0) : d0 = 204 and 0 <= d1 <= 204 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_414();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd7_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd7 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 207 : 0 <= d0 <= 203 and 0 <= d1 <= 204; bright_gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 204 and 0 <= d1 <= 204 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_207();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd8_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd8 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_0_rd0_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 55] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_laplace_diff_0_update_0[d0, d1] -> 416 : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_416();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_rd0_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Read schedule : { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// bright_gauss_blur_1_update_0_read
//	bright_gauss_blur_1_rd0
//	bright_gauss_blur_1_rd1
//	bright_gauss_blur_1_rd2
//	bright_gauss_blur_1_rd3
//	bright_gauss_blur_1_rd4
//	bright_gauss_blur_1_rd5
//	bright_gauss_blur_1_rd6
//	bright_gauss_blur_1_rd7
//	bright_gauss_blur_1_rd8
inline hw_uint<144> bright_bright_gauss_blur_1_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
  // # of ports in bundle: 9
    // bright_gauss_blur_1_rd0
    // bright_gauss_blur_1_rd1
    // bright_gauss_blur_1_rd2
    // bright_gauss_blur_1_rd3
    // bright_gauss_blur_1_rd4
    // bright_gauss_blur_1_rd5
    // bright_gauss_blur_1_rd6
    // bright_gauss_blur_1_rd7
    // bright_gauss_blur_1_rd8

	hw_uint<144> result;
	hw_uint<16> bright_gauss_blur_1_rd0_res = bright_gauss_blur_1_rd0_select(bright, d0, d1);
	set_at<0, 144>(result, bright_gauss_blur_1_rd0_res);
	hw_uint<16> bright_gauss_blur_1_rd1_res = bright_gauss_blur_1_rd1_select(bright, d0, d1);
	set_at<16, 144>(result, bright_gauss_blur_1_rd1_res);
	hw_uint<16> bright_gauss_blur_1_rd2_res = bright_gauss_blur_1_rd2_select(bright, d0, d1);
	set_at<32, 144>(result, bright_gauss_blur_1_rd2_res);
	hw_uint<16> bright_gauss_blur_1_rd3_res = bright_gauss_blur_1_rd3_select(bright, d0, d1);
	set_at<48, 144>(result, bright_gauss_blur_1_rd3_res);
	hw_uint<16> bright_gauss_blur_1_rd4_res = bright_gauss_blur_1_rd4_select(bright, d0, d1);
	set_at<64, 144>(result, bright_gauss_blur_1_rd4_res);
	hw_uint<16> bright_gauss_blur_1_rd5_res = bright_gauss_blur_1_rd5_select(bright, d0, d1);
	set_at<80, 144>(result, bright_gauss_blur_1_rd5_res);
	hw_uint<16> bright_gauss_blur_1_rd6_res = bright_gauss_blur_1_rd6_select(bright, d0, d1);
	set_at<96, 144>(result, bright_gauss_blur_1_rd6_res);
	hw_uint<16> bright_gauss_blur_1_rd7_res = bright_gauss_blur_1_rd7_select(bright, d0, d1);
	set_at<112, 144>(result, bright_gauss_blur_1_rd7_res);
	hw_uint<16> bright_gauss_blur_1_rd8_res = bright_gauss_blur_1_rd8_select(bright, d0, d1);
	set_at<128, 144>(result, bright_gauss_blur_1_rd8_res);
	return result;
}

// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
inline hw_uint<16> bright_bright_laplace_diff_0_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright, d0, d1);
	set_at<0, 16>(result, bright_laplace_diff_0_rd0_res);
	return result;
}

// bright_update_0_write
//	bright_bright_update_0_write0
inline void bright_bright_update_0_write_bundle_write(hw_uint<16>& bright_update_0_write, bright_cache& bright, int d0, int d1) {
	hw_uint<16> bright_bright_update_0_write0_res = bright_update_0_write.extract<0, 15>();
	bright_bright_update_0_write0_write(bright_bright_update_0_write0_res, bright, d0, d1);
}

// bright_weights_update_0_read
//	bright_weights_rd0
inline hw_uint<16> bright_bright_weights_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_rd0_res = bright_weights_rd0_select(bright, d0, d1);
	set_at<0, 16>(result, bright_weights_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 204], [0, 204]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_gauss_blur_1_cache {
  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_cache bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1.push(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0);
}

inline hw_uint<16> bright_gauss_ds_1_rd0_select(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_1_rd0 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // Read schedule : { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // Write schedule: { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 11] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // DD fold: {  }
  auto value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0 = bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_gauss_blur_1_update_0_write
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0
inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(hw_uint<16>& bright_gauss_blur_1_update_0_write, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	hw_uint<16> bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res = bright_gauss_blur_1_update_0_write.extract<0, 15>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res, bright_gauss_blur_1, d0, d1);
}

// bright_gauss_ds_1_update_0_read
//	bright_gauss_ds_1_rd0
inline hw_uint<16> bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_1_rd0_res = bright_gauss_ds_1_rd0_select(bright_gauss_blur_1, d0, d1);
	set_at<0, 16>(result, bright_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 100], [0, 100]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_gauss_blur_2_cache {
  bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_cache bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(hw_uint<16>& bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
  bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1.push(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> bright_gauss_ds_2_rd0_select(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_2_rd0 read pattern: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // Read schedule : { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // Write schedule: { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 19] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // DD fold: {  }
  auto value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0 = bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_gauss_blur_2_update_0_write
//	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0
inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& bright_gauss_blur_2_update_0_write, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	hw_uint<16> bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res = bright_gauss_blur_2_update_0_write.extract<0, 15>();
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res, bright_gauss_blur_2, d0, d1);
}

// bright_gauss_ds_2_update_0_read
//	bright_gauss_ds_2_rd0
inline hw_uint<16> bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_2_rd0_res = bright_gauss_ds_2_rd0_select(bright_gauss_blur_2, d0, d1);
	set_at<0, 16>(result, bright_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 48], [0, 48]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_gauss_blur_3_cache {
  bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_cache bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(hw_uint<16>& bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
  bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1.push(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> bright_gauss_ds_3_rd0_select(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_3_rd0 read pattern: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Read schedule : { bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 31] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Write schedule: { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 27] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // DD fold: {  }
  auto value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0 = bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_gauss_blur_3_update_0_write
//	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0
inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& bright_gauss_blur_3_update_0_write, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	hw_uint<16> bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res = bright_gauss_blur_3_update_0_write.extract<0, 15>();
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res, bright_gauss_blur_3, d0, d1);
}

// bright_gauss_ds_3_update_0_read
//	bright_gauss_ds_3_rd0
inline hw_uint<16> bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_3_rd0_res = bright_gauss_ds_3_rd0_select(bright_gauss_blur_3, d0, d1);
	set_at<0, 16>(result, bright_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 209
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 100> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 100> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_102() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_103() {
		return f6;
	}

	inline hw_uint<16> peek_104() {
		return f8;
	}

	inline hw_uint<16> peek_105() {
		return f10;
	}

	inline hw_uint<16> peek_205() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_206() {
		return f12;
	}

	inline hw_uint<16> peek_207() {
		return f14;
	}

	inline hw_uint<16> peek_208() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 100
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 100 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 100
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 100 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 103
	// # of read delays: 102
	fifo<hw_uint<16>, 103> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(102 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_cache {
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0;
};



inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_2_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd0 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 19] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 208 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_208();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd1 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 19] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 105 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_105();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd2_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd2 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 19] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_2();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd3_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd3 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 19] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 207 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_207();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd4_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd4 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 19] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 104 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_104();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd5_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd5 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 19] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd6_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd6 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 19] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 206 : 0 <= d0 <= 99 and 0 <= d1 <= 100; bright_gauss_blur_2_update_0[d0, d1] -> (106 + d0) : d0 = 100 and 0 <= d1 <= 100 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_206();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd7_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd7 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 19] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 103 : 0 <= d0 <= 99 and 0 <= d1 <= 100; bright_gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 100 and 0 <= d1 <= 100 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_103();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd8_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd8 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 19] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: {  }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_1_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 54] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_laplace_diff_1_update_0[d0, d1] -> 208 : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_208();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_us_0_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_0_rd0 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[o0, o1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 52] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 18] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_laplace_us_0_update_0[d0, d1] -> (102 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 199 and 0 < d1 <= 199 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((102 - floord(2*d0, 4))) : 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// bright_gauss_blur_2_update_0_read
//	bright_gauss_blur_2_rd0
//	bright_gauss_blur_2_rd1
//	bright_gauss_blur_2_rd2
//	bright_gauss_blur_2_rd3
//	bright_gauss_blur_2_rd4
//	bright_gauss_blur_2_rd5
//	bright_gauss_blur_2_rd6
//	bright_gauss_blur_2_rd7
//	bright_gauss_blur_2_rd8
inline hw_uint<144> bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 9
    // bright_gauss_blur_2_rd0
    // bright_gauss_blur_2_rd1
    // bright_gauss_blur_2_rd2
    // bright_gauss_blur_2_rd3
    // bright_gauss_blur_2_rd4
    // bright_gauss_blur_2_rd5
    // bright_gauss_blur_2_rd6
    // bright_gauss_blur_2_rd7
    // bright_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> bright_gauss_blur_2_rd0_res = bright_gauss_blur_2_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 144>(result, bright_gauss_blur_2_rd0_res);
	hw_uint<16> bright_gauss_blur_2_rd1_res = bright_gauss_blur_2_rd1_select(bright_gauss_ds_1, d0, d1);
	set_at<16, 144>(result, bright_gauss_blur_2_rd1_res);
	hw_uint<16> bright_gauss_blur_2_rd2_res = bright_gauss_blur_2_rd2_select(bright_gauss_ds_1, d0, d1);
	set_at<32, 144>(result, bright_gauss_blur_2_rd2_res);
	hw_uint<16> bright_gauss_blur_2_rd3_res = bright_gauss_blur_2_rd3_select(bright_gauss_ds_1, d0, d1);
	set_at<48, 144>(result, bright_gauss_blur_2_rd3_res);
	hw_uint<16> bright_gauss_blur_2_rd4_res = bright_gauss_blur_2_rd4_select(bright_gauss_ds_1, d0, d1);
	set_at<64, 144>(result, bright_gauss_blur_2_rd4_res);
	hw_uint<16> bright_gauss_blur_2_rd5_res = bright_gauss_blur_2_rd5_select(bright_gauss_ds_1, d0, d1);
	set_at<80, 144>(result, bright_gauss_blur_2_rd5_res);
	hw_uint<16> bright_gauss_blur_2_rd6_res = bright_gauss_blur_2_rd6_select(bright_gauss_ds_1, d0, d1);
	set_at<96, 144>(result, bright_gauss_blur_2_rd6_res);
	hw_uint<16> bright_gauss_blur_2_rd7_res = bright_gauss_blur_2_rd7_select(bright_gauss_ds_1, d0, d1);
	set_at<112, 144>(result, bright_gauss_blur_2_rd7_res);
	hw_uint<16> bright_gauss_blur_2_rd8_res = bright_gauss_blur_2_rd8_select(bright_gauss_ds_1, d0, d1);
	set_at<128, 144>(result, bright_gauss_blur_2_rd8_res);
	return result;
}

// bright_gauss_ds_1_update_0_write
//	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0
inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_1_update_0_write, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	hw_uint<16> bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res = bright_gauss_ds_1_update_0_write.extract<0, 15>();
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res, bright_gauss_ds_1, d0, d1);
}

// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<16> bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 16>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_0_update_0_read
//	bright_laplace_us_0_rd0
inline hw_uint<16> bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_laplace_us_0_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_us_0_rd0_res = bright_laplace_us_0_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 16>(result, bright_laplace_us_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 48> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 48> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_50() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_51() {
		return f6;
	}

	inline hw_uint<16> peek_52() {
		return f8;
	}

	inline hw_uint<16> peek_53() {
		return f10;
	}

	inline hw_uint<16> peek_101() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_102() {
		return f12;
	}

	inline hw_uint<16> peek_103() {
		return f14;
	}

	inline hw_uint<16> peek_104() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 48
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 48 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 48
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 48 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 54
	fifo<hw_uint<16>, 105> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(104 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 51
	// # of read delays: 52
	fifo<hw_uint<16>, 51> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(50 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_cache {
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0;
};



inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_3_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd0 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 27] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 104 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_104();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_3_rd1_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd1 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 27] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 53 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_53();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_3_rd2_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd2 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 27] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_3_rd3_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd3 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 27] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 103 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_103();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_3_rd4_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd4 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 27] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 52 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_52();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_3_rd5_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd5 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 27] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_3_rd6_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd6 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 27] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 102 : 0 <= d0 <= 47 and 0 <= d1 <= 48; bright_gauss_blur_3_update_0[d0, d1] -> (54 + d0) : d0 = 48 and 0 <= d1 <= 48 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_102();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_3_rd7_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd7 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 27] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 51 : 0 <= d0 <= 47 and 0 <= d1 <= 48; bright_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 48 and 0 <= d1 <= 48 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_51();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_3_rd8_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd8 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 27] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: {  }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_2_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 53] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_laplace_diff_2_update_0[d0, d1] -> 104 : 0 <= d0 <= 48 and 0 <= d1 <= 48; bright_laplace_diff_2_update_0[d0, d1] -> 103 : d0 = 49 and 0 <= d1 <= 48; bright_laplace_diff_2_update_0[d0, d1] -> (101 - d0) : d1 = 49 and 0 <= d0 <= 49 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-49 + d0 == 0 && 48 - d1 >= 0) ? (103) : (48 - d1 >= 0 && 48 - d0 >= 0) ? (104) : (-49 + d1 == 0) ? ((101 - d0)) : 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_us_1_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_1_rd0 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[o0, o1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 51] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 26] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_laplace_us_1_update_0[d0, d1] -> (50 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 99 and 0 < d1 <= 99 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((50 - floord(2*d0, 4))) : 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// bright_gauss_blur_3_update_0_read
//	bright_gauss_blur_3_rd0
//	bright_gauss_blur_3_rd1
//	bright_gauss_blur_3_rd2
//	bright_gauss_blur_3_rd3
//	bright_gauss_blur_3_rd4
//	bright_gauss_blur_3_rd5
//	bright_gauss_blur_3_rd6
//	bright_gauss_blur_3_rd7
//	bright_gauss_blur_3_rd8
inline hw_uint<144> bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 9
    // bright_gauss_blur_3_rd0
    // bright_gauss_blur_3_rd1
    // bright_gauss_blur_3_rd2
    // bright_gauss_blur_3_rd3
    // bright_gauss_blur_3_rd4
    // bright_gauss_blur_3_rd5
    // bright_gauss_blur_3_rd6
    // bright_gauss_blur_3_rd7
    // bright_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> bright_gauss_blur_3_rd0_res = bright_gauss_blur_3_rd0_select(bright_gauss_ds_2, d0, d1);
	set_at<0, 144>(result, bright_gauss_blur_3_rd0_res);
	hw_uint<16> bright_gauss_blur_3_rd1_res = bright_gauss_blur_3_rd1_select(bright_gauss_ds_2, d0, d1);
	set_at<16, 144>(result, bright_gauss_blur_3_rd1_res);
	hw_uint<16> bright_gauss_blur_3_rd2_res = bright_gauss_blur_3_rd2_select(bright_gauss_ds_2, d0, d1);
	set_at<32, 144>(result, bright_gauss_blur_3_rd2_res);
	hw_uint<16> bright_gauss_blur_3_rd3_res = bright_gauss_blur_3_rd3_select(bright_gauss_ds_2, d0, d1);
	set_at<48, 144>(result, bright_gauss_blur_3_rd3_res);
	hw_uint<16> bright_gauss_blur_3_rd4_res = bright_gauss_blur_3_rd4_select(bright_gauss_ds_2, d0, d1);
	set_at<64, 144>(result, bright_gauss_blur_3_rd4_res);
	hw_uint<16> bright_gauss_blur_3_rd5_res = bright_gauss_blur_3_rd5_select(bright_gauss_ds_2, d0, d1);
	set_at<80, 144>(result, bright_gauss_blur_3_rd5_res);
	hw_uint<16> bright_gauss_blur_3_rd6_res = bright_gauss_blur_3_rd6_select(bright_gauss_ds_2, d0, d1);
	set_at<96, 144>(result, bright_gauss_blur_3_rd6_res);
	hw_uint<16> bright_gauss_blur_3_rd7_res = bright_gauss_blur_3_rd7_select(bright_gauss_ds_2, d0, d1);
	set_at<112, 144>(result, bright_gauss_blur_3_rd7_res);
	hw_uint<16> bright_gauss_blur_3_rd8_res = bright_gauss_blur_3_rd8_select(bright_gauss_ds_2, d0, d1);
	set_at<128, 144>(result, bright_gauss_blur_3_rd8_res);
	return result;
}

// bright_gauss_ds_2_update_0_write
//	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0
inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_2_update_0_write, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	hw_uint<16> bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res = bright_gauss_ds_2_update_0_write.extract<0, 15>();
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res, bright_gauss_ds_2, d0, d1);
}

// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<16> bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_gauss_ds_2, d0, d1);
	set_at<0, 16>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_read
//	bright_laplace_us_1_rd0
inline hw_uint<16> bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_laplace_us_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_us_1_rd0_res = bright_laplace_us_1_rd0_select(bright_gauss_ds_2, d0, d1);
	set_at<0, 16>(result, bright_laplace_us_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 25
	// # of read delays: 26
	fifo<hw_uint<16>, 25> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(24 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_gauss_ds_3_cache {
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0;
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> bright_laplace_us_2_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_2_rd0 read pattern: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 50] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 31] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // DD fold: { bright_laplace_us_2_update_0[d0, d1] -> (24 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 47 and 0 < d1 <= 49 }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0);
  return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_3_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 56] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Write schedule: { bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 31] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // DD fold: {  }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// bright_gauss_ds_3_update_0_write
//	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0
inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_3_update_0_write, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	hw_uint<16> bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res = bright_gauss_ds_3_update_0_write.extract<0, 15>();
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res, bright_gauss_ds_3, d0, d1);
}

// bright_laplace_us_2_update_0_read
//	bright_laplace_us_2_rd0
inline hw_uint<16> bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_laplace_us_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_us_2_rd0_res = bright_laplace_us_2_rd0_select(bright_gauss_ds_3, d0, d1);
	set_at<0, 16>(result, bright_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(bright_gauss_ds_3, d0, d1);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_laplace_diff_0_cache {
  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_cache bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1;
};



inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(hw_uint<16>& bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0);
}

inline hw_uint<16> fused_level_0_rd0_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 59] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 55] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // DD fold: {  }
  auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_write
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0
inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(hw_uint<16>& bright_laplace_diff_0_update_0_write, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	hw_uint<16> bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res = bright_laplace_diff_0_update_0_write.extract<0, 15>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res, bright_laplace_diff_0, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<16> bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_0_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_laplace_diff_0, d0, d1);
	set_at<0, 16>(result, fused_level_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_laplace_diff_1_cache {
  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_cache bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1;
};



inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(hw_uint<16>& bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1.push(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0);
}

inline hw_uint<16> fused_level_1_rd0_select(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 58] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 54] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: {  }
  auto value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0 = bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_write
//	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0
inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(hw_uint<16>& bright_laplace_diff_1_update_0_write, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	hw_uint<16> bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res = bright_laplace_diff_1_update_0_write.extract<0, 15>();
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res, bright_laplace_diff_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_laplace_diff_1, d0, d1);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_laplace_diff_2_cache {
  bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_cache bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1;
};



inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(hw_uint<16>& bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
  bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1.push(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0);
}

inline hw_uint<16> fused_level_2_rd0_select(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 57] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 53] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // DD fold: {  }
  auto value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0 = bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_write
//	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0
inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(hw_uint<16>& bright_laplace_diff_2_update_0_write, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	hw_uint<16> bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res = bright_laplace_diff_2_update_0_write.extract<0, 15>();
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res, bright_laplace_diff_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(bright_laplace_diff_2, d0, d1);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_laplace_us_0_cache {
  bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_cache bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1;
};



inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(hw_uint<16>& bright_laplace_us_0_bright_laplace_us_0_update_0_write0, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write0);
}

inline hw_uint<16> bright_laplace_diff_0_rd0_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 55] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 52] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // DD fold: {  }
  auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
inline hw_uint<16> bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright_laplace_us_0, d0, d1);
	set_at<0, 16>(result, bright_laplace_diff_0_rd0_res);
	return result;
}

// bright_laplace_us_0_update_0_write
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write0
inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(hw_uint<16>& bright_laplace_us_0_update_0_write, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	hw_uint<16> bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res = bright_laplace_us_0_update_0_write.extract<0, 15>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res, bright_laplace_us_0, d0, d1);
}

#include "hw_classes.h"

struct bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_laplace_us_1_cache {
  bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_cache bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1;
};



inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(hw_uint<16>& bright_laplace_us_1_bright_laplace_us_1_update_0_write0, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
  bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1.push(bright_laplace_us_1_bright_laplace_us_1_update_0_write0);
}

inline hw_uint<16> bright_laplace_diff_1_rd0_select(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 54] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { bright_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 51] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: {  }
  auto value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0 = bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<16> bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_laplace_us_1, d0, d1);
	set_at<0, 16>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_write
//	bright_laplace_us_1_bright_laplace_us_1_update_0_write0
inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(hw_uint<16>& bright_laplace_us_1_update_0_write, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	hw_uint<16> bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res = bright_laplace_us_1_update_0_write.extract<0, 15>();
	bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res, bright_laplace_us_1, d0, d1);
}

#include "hw_classes.h"

struct bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_laplace_us_2_cache {
  bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_cache bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1;
};



inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(hw_uint<16>& bright_laplace_us_2_bright_laplace_us_2_update_0_write0, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
  bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1.push(bright_laplace_us_2_bright_laplace_us_2_update_0_write0);
}

inline hw_uint<16> bright_laplace_diff_2_rd0_select(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 53] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { bright_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 50] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // DD fold: {  }
  auto value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0 = bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<16> bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_laplace_us_2, d0, d1);
	set_at<0, 16>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_2_update_0_write
//	bright_laplace_us_2_bright_laplace_us_2_update_0_write0
inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(hw_uint<16>& bright_laplace_us_2_update_0_write, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	hw_uint<16> bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res = bright_laplace_us_2_update_0_write.extract<0, 15>();
	bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res, bright_laplace_us_2, d0, d1);
}

#include "hw_classes.h"

struct bright_weights_bright_weights_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct bright_weights_cache {
  bright_weights_bright_weights_update_0_write0_merged_banks_2_cache bright_weights_bright_weights_update_0_write0_merged_banks_2;
};



inline void bright_weights_bright_weights_update_0_write0_write(hw_uint<16>& bright_weights_bright_weights_update_0_write0, bright_weights_cache& bright_weights, int d0, int d1) {
  bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.push(bright_weights_bright_weights_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
inline hw_uint<16> bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(bright_weights, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_rd0_res);
	return result;
}

// bright_weights_update_0_write
//	bright_weights_bright_weights_update_0_write0
inline void bright_weights_bright_weights_update_0_write_bundle_write(hw_uint<16>& bright_weights_update_0_write, bright_weights_cache& bright_weights, int d0, int d1) {
	hw_uint<16> bright_weights_bright_weights_update_0_write0_res = bright_weights_update_0_write.extract<0, 15>();
	bright_weights_bright_weights_update_0_write0_write(bright_weights_bright_weights_update_0_write0_res, bright_weights, d0, d1);
}

// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
inline hw_uint<16> bright_weights_dark_weights_normed_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(bright_weights, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 417
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 204> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 204> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_206() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_207() {
		return f6;
	}

	inline hw_uint<16> peek_208() {
		return f8;
	}

	inline hw_uint<16> peek_209() {
		return f10;
	}

	inline hw_uint<16> peek_413() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_414() {
		return f12;
	}

	inline hw_uint<16> peek_415() {
		return f14;
	}

	inline hw_uint<16> peek_416() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 204
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 204 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 204
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 204 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_weights_normed_cache {
  bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10_cache bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10;
};



inline void bright_weights_normed_bright_weights_normed_update_0_write0_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write0, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.push(bright_weights_normed_bright_weights_normed_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd0 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 416 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_416();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd1 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 209 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_209();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd2 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_2();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd3 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 415 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_415();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd4 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 208 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_208();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd5 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd6 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 414 : 0 <= d0 <= 203 and 0 <= d1 <= 204; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (210 + d0) : d0 = 204 and 0 <= d1 <= 204 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_414();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd7 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 207 : 0 <= d0 <= 203 and 0 <= d1 <= 204; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 204 and 0 <= d1 <= 204 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_207();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd8 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_0();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_laplace_diff_0_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_laplace_diff_0_rd0 read pattern: { bright_weights_normed_laplace_diff_0_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { bright_weights_normed_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 49] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { bright_weights_normed_laplace_diff_0_update_0[d0, d1] -> 416 : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_416();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_1_update_0_read
//	bright_weights_normed_gauss_blur_1_rd0
//	bright_weights_normed_gauss_blur_1_rd1
//	bright_weights_normed_gauss_blur_1_rd2
//	bright_weights_normed_gauss_blur_1_rd3
//	bright_weights_normed_gauss_blur_1_rd4
//	bright_weights_normed_gauss_blur_1_rd5
//	bright_weights_normed_gauss_blur_1_rd6
//	bright_weights_normed_gauss_blur_1_rd7
//	bright_weights_normed_gauss_blur_1_rd8
inline hw_uint<144> bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // # of ports in bundle: 9
    // bright_weights_normed_gauss_blur_1_rd0
    // bright_weights_normed_gauss_blur_1_rd1
    // bright_weights_normed_gauss_blur_1_rd2
    // bright_weights_normed_gauss_blur_1_rd3
    // bright_weights_normed_gauss_blur_1_rd4
    // bright_weights_normed_gauss_blur_1_rd5
    // bright_weights_normed_gauss_blur_1_rd6
    // bright_weights_normed_gauss_blur_1_rd7
    // bright_weights_normed_gauss_blur_1_rd8

	hw_uint<144> result;
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_res = bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed, d0, d1);
	set_at<0, 144>(result, bright_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd1_res = bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed, d0, d1);
	set_at<16, 144>(result, bright_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd2_res = bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed, d0, d1);
	set_at<32, 144>(result, bright_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd3_res = bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed, d0, d1);
	set_at<48, 144>(result, bright_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd4_res = bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed, d0, d1);
	set_at<64, 144>(result, bright_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd5_res = bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed, d0, d1);
	set_at<80, 144>(result, bright_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd6_res = bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed, d0, d1);
	set_at<96, 144>(result, bright_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd7_res = bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed, d0, d1);
	set_at<112, 144>(result, bright_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd8_res = bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed, d0, d1);
	set_at<128, 144>(result, bright_weights_normed_gauss_blur_1_rd8_res);
	return result;
}

// bright_weights_normed_laplace_diff_0_update_0_read
//	bright_weights_normed_laplace_diff_0_rd0
inline hw_uint<16> bright_weights_normed_bright_weights_normed_laplace_diff_0_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_laplace_diff_0_rd0_res = bright_weights_normed_laplace_diff_0_rd0_select(bright_weights_normed, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_laplace_diff_0_rd0_res);
	return result;
}

// bright_weights_normed_update_0_write
//	bright_weights_normed_bright_weights_normed_update_0_write0
inline void bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_update_0_write, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write0_res = bright_weights_normed_update_0_write.extract<0, 15>();
	bright_weights_normed_bright_weights_normed_update_0_write0_write(bright_weights_normed_bright_weights_normed_update_0_write0_res, bright_weights_normed, d0, d1);
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 204], [0, 204]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_weights_normed_gauss_blur_1_cache {
  bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
  bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_1_rd0 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // Read schedule : { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // Write schedule: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 10] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0 = bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_1_update_0_write
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0
inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_update_0_write, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res, bright_weights_normed_gauss_blur_1, d0, d1);
}

// bright_weights_normed_gauss_ds_1_update_0_read
//	bright_weights_normed_gauss_ds_1_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_1_rd0_res = bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 100], [0, 100]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_weights_normed_gauss_blur_2_cache {
  bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
  bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_2_rd0 read pattern: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // Read schedule : { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // Write schedule: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 17] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0 = bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_2_update_0_write
//	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0
inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_blur_2_update_0_write, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<16> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res = bright_weights_normed_gauss_blur_2_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res, bright_weights_normed_gauss_blur_2, d0, d1);
}

// bright_weights_normed_gauss_ds_2_update_0_read
//	bright_weights_normed_gauss_ds_2_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_2_rd0_res = bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 48], [0, 48]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_weights_normed_gauss_blur_3_cache {
  bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
  bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_3_rd0 read pattern: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Read schedule : { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 30] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Write schedule: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 25] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0 = bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_3_update_0_write
//	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0
inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_blur_3_update_0_write, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	hw_uint<16> bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res = bright_weights_normed_gauss_blur_3_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res, bright_weights_normed_gauss_blur_3, d0, d1);
}

// bright_weights_normed_gauss_ds_3_update_0_read
//	bright_weights_normed_gauss_ds_3_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_3_rd0_res = bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 209
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 100> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 100> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_102() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_103() {
		return f6;
	}

	inline hw_uint<16> peek_104() {
		return f8;
	}

	inline hw_uint<16> peek_105() {
		return f10;
	}

	inline hw_uint<16> peek_205() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_206() {
		return f12;
	}

	inline hw_uint<16> peek_207() {
		return f14;
	}

	inline hw_uint<16> peek_208() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 100
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 100 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 100
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 100 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_bright_weights_normed_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 103
	// # of read delays: 102
	fifo<hw_uint<16>, 103> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(102 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_1_cache {
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10;
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_bright_weights_normed_laplace_us_0_rd0_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_bright_weights_normed_laplace_us_0_rd0;
};



inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_bright_weights_normed_laplace_us_0_rd0.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd0 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 17] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 208 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_208();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd1 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 17] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 105 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_105();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd2 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 17] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_2();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd3 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 17] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 207 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_207();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd4 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 17] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 104 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_104();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd5 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 17] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd6 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 17] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 206 : 0 <= d0 <= 99 and 0 <= d1 <= 100; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (106 + d0) : d0 = 100 and 0 <= d1 <= 100 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_206();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd7 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 17] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 103 : 0 <= d0 <= 99 and 0 <= d1 <= 100; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 100 and 0 <= d1 <= 100 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_103();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd8 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 17] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_laplace_diff_1_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_laplace_diff_1_rd0 read pattern: { bright_weights_normed_laplace_diff_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { bright_weights_normed_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 48] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_weights_normed_laplace_diff_1_update_0[d0, d1] -> 208 : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_208();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_laplace_us_0_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_laplace_us_0_rd0 read pattern: { bright_weights_normed_laplace_us_0_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[o0, o1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_weights_normed_laplace_us_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 46] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 16] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { bright_weights_normed_laplace_us_0_update_0[d0, d1] -> (102 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 199 and 0 < d1 <= 199 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_bright_weights_normed_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((102 - floord(2*d0, 4))) : 0);
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// bright_weights_normed_gauss_blur_2_update_0_read
//	bright_weights_normed_gauss_blur_2_rd0
//	bright_weights_normed_gauss_blur_2_rd1
//	bright_weights_normed_gauss_blur_2_rd2
//	bright_weights_normed_gauss_blur_2_rd3
//	bright_weights_normed_gauss_blur_2_rd4
//	bright_weights_normed_gauss_blur_2_rd5
//	bright_weights_normed_gauss_blur_2_rd6
//	bright_weights_normed_gauss_blur_2_rd7
//	bright_weights_normed_gauss_blur_2_rd8
inline hw_uint<144> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 9
    // bright_weights_normed_gauss_blur_2_rd0
    // bright_weights_normed_gauss_blur_2_rd1
    // bright_weights_normed_gauss_blur_2_rd2
    // bright_weights_normed_gauss_blur_2_rd3
    // bright_weights_normed_gauss_blur_2_rd4
    // bright_weights_normed_gauss_blur_2_rd5
    // bright_weights_normed_gauss_blur_2_rd6
    // bright_weights_normed_gauss_blur_2_rd7
    // bright_weights_normed_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_res = bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 144>(result, bright_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd1_res = bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<16, 144>(result, bright_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd2_res = bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<32, 144>(result, bright_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd3_res = bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<48, 144>(result, bright_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd4_res = bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<64, 144>(result, bright_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd5_res = bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<80, 144>(result, bright_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd6_res = bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<96, 144>(result, bright_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd7_res = bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<112, 144>(result, bright_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd8_res = bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<128, 144>(result, bright_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_1_update_0_write
//	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0
inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_update_0_write, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<16> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res = bright_weights_normed_gauss_ds_1_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res, bright_weights_normed_gauss_ds_1, d0, d1);
}

// bright_weights_normed_laplace_diff_1_update_0_read
//	bright_weights_normed_laplace_diff_1_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_1_bright_weights_normed_laplace_diff_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_laplace_diff_1_rd0_res = bright_weights_normed_laplace_diff_1_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_laplace_diff_1_rd0_res);
	return result;
}

// bright_weights_normed_laplace_us_0_update_0_read
//	bright_weights_normed_laplace_us_0_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_1_bright_weights_normed_laplace_us_0_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_laplace_us_0_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_laplace_us_0_rd0_res = bright_weights_normed_laplace_us_0_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_laplace_us_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 48> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 48> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_50() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_51() {
		return f6;
	}

	inline hw_uint<16> peek_52() {
		return f8;
	}

	inline hw_uint<16> peek_53() {
		return f10;
	}

	inline hw_uint<16> peek_101() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_102() {
		return f12;
	}

	inline hw_uint<16> peek_103() {
		return f14;
	}

	inline hw_uint<16> peek_104() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 48
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 48 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 48
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 48 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 54
	fifo<hw_uint<16>, 105> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(104 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 51
	// # of read delays: 52
	fifo<hw_uint<16>, 51> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(50 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_cache {
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_laplace_diff_2_rd0_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_laplace_diff_2_rd0;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_laplace_us_1_rd0_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_laplace_us_1_rd0;
};



inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_laplace_diff_2_rd0.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_laplace_us_1_rd0.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd0 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 25] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 104 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_104();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd1 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 25] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 53 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_53();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd2 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 25] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd3 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 25] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 103 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_103();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd4 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 25] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 52 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_52();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd5 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 25] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd6 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 25] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 102 : 0 <= d0 <= 47 and 0 <= d1 <= 48; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (54 + d0) : d0 = 48 and 0 <= d1 <= 48 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_102();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd7 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 25] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 51 : 0 <= d0 <= 47 and 0 <= d1 <= 48; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 48 and 0 <= d1 <= 48 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_51();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd8 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 25] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_laplace_diff_2_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_laplace_diff_2_rd0 read pattern: { bright_weights_normed_laplace_diff_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { bright_weights_normed_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 47] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_weights_normed_laplace_diff_2_update_0[d0, d1] -> 104 : 0 <= d0 <= 48 and 0 <= d1 <= 48; bright_weights_normed_laplace_diff_2_update_0[d0, d1] -> 103 : d0 = 49 and 0 <= d1 <= 48; bright_weights_normed_laplace_diff_2_update_0[d0, d1] -> (101 - d0) : d1 = 49 and 0 <= d0 <= 49 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-49 + d0 == 0 && 48 - d1 >= 0) ? (103) : (48 - d1 >= 0 && 48 - d0 >= 0) ? (104) : (-49 + d1 == 0) ? ((101 - d0)) : 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_laplace_us_1_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_laplace_us_1_rd0 read pattern: { bright_weights_normed_laplace_us_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[o0, o1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_weights_normed_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 45] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 24] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { bright_weights_normed_laplace_us_1_update_0[d0, d1] -> (50 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 99 and 0 < d1 <= 99 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((50 - floord(2*d0, 4))) : 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// bright_weights_normed_gauss_blur_3_update_0_read
//	bright_weights_normed_gauss_blur_3_rd0
//	bright_weights_normed_gauss_blur_3_rd1
//	bright_weights_normed_gauss_blur_3_rd2
//	bright_weights_normed_gauss_blur_3_rd3
//	bright_weights_normed_gauss_blur_3_rd4
//	bright_weights_normed_gauss_blur_3_rd5
//	bright_weights_normed_gauss_blur_3_rd6
//	bright_weights_normed_gauss_blur_3_rd7
//	bright_weights_normed_gauss_blur_3_rd8
inline hw_uint<144> bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 9
    // bright_weights_normed_gauss_blur_3_rd0
    // bright_weights_normed_gauss_blur_3_rd1
    // bright_weights_normed_gauss_blur_3_rd2
    // bright_weights_normed_gauss_blur_3_rd3
    // bright_weights_normed_gauss_blur_3_rd4
    // bright_weights_normed_gauss_blur_3_rd5
    // bright_weights_normed_gauss_blur_3_rd6
    // bright_weights_normed_gauss_blur_3_rd7
    // bright_weights_normed_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd0_res = bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 144>(result, bright_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd1_res = bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<16, 144>(result, bright_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd2_res = bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<32, 144>(result, bright_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd3_res = bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<48, 144>(result, bright_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd4_res = bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<64, 144>(result, bright_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd5_res = bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<80, 144>(result, bright_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd6_res = bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<96, 144>(result, bright_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd7_res = bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<112, 144>(result, bright_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd8_res = bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<128, 144>(result, bright_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_2_update_0_write
//	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0
inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_2_update_0_write, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<16> bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res = bright_weights_normed_gauss_ds_2_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res, bright_weights_normed_gauss_ds_2, d0, d1);
}

// bright_weights_normed_laplace_diff_2_update_0_read
//	bright_weights_normed_laplace_diff_2_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_2_bright_weights_normed_laplace_diff_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_laplace_diff_2_rd0_res = bright_weights_normed_laplace_diff_2_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_laplace_diff_2_rd0_res);
	return result;
}

// bright_weights_normed_laplace_us_1_update_0_read
//	bright_weights_normed_laplace_us_1_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_2_bright_weights_normed_laplace_us_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_laplace_us_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_laplace_us_1_rd0_res = bright_weights_normed_laplace_us_1_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_laplace_us_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_bright_weights_normed_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 25
	// # of read delays: 26
	fifo<hw_uint<16>, 25> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(24 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_weights_normed_gauss_ds_3_cache {
  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_bright_weights_normed_laplace_us_2_rd0_cache bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_bright_weights_normed_laplace_us_2_rd0;
  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
  bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_bright_weights_normed_laplace_us_2_rd0.push(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0);
  bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_laplace_us_2_rd0_select(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_laplace_us_2_rd0 read pattern: { bright_weights_normed_laplace_us_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[o0, o1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_weights_normed_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 44] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 30] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // DD fold: { bright_weights_normed_laplace_us_2_update_0[d0, d1] -> (24 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 47 and 0 < d1 <= 49 }
  auto value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0 = bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_bright_weights_normed_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0);
  return value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 56] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Write schedule: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 30] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0 = bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// bright_weights_normed_gauss_ds_3_update_0_write
//	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0
inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_update_0_write, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<16> bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res = bright_weights_normed_gauss_ds_3_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res, bright_weights_normed_gauss_ds_3, d0, d1);
}

// bright_weights_normed_laplace_us_2_update_0_read
//	bright_weights_normed_laplace_us_2_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_3_bright_weights_normed_laplace_us_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_laplace_us_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_laplace_us_2_rd0_res = bright_weights_normed_laplace_us_2_rd0_select(bright_weights_normed_gauss_ds_3, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3, d0, d1);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_weights_normed_laplace_diff_0_cache {
  bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0_merged_banks_1_cache bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0_write(hw_uint<16>& bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0, bright_weights_normed_laplace_diff_0_cache& bright_weights_normed_laplace_diff_0, int d0, int d1) {
  bright_weights_normed_laplace_diff_0.bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0_merged_banks_1.push(bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0);
}

inline hw_uint<16> fused_level_0_rd0_select(bright_weights_normed_laplace_diff_0_cache& bright_weights_normed_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed_laplace_diff_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 59] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { bright_weights_normed_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 49] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // DD fold: {  }
  auto value_bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0 = bright_weights_normed_laplace_diff_0.bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_laplace_diff_0_update_0_write
//	bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0
inline void bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_laplace_diff_0_update_0_write, bright_weights_normed_laplace_diff_0_cache& bright_weights_normed_laplace_diff_0, int d0, int d1) {
	hw_uint<16> bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0_res = bright_weights_normed_laplace_diff_0_update_0_write.extract<0, 15>();
	bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0_write(bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write0_res, bright_weights_normed_laplace_diff_0, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<16> bright_weights_normed_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_weights_normed_laplace_diff_0_cache& bright_weights_normed_laplace_diff_0, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_0_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_weights_normed_laplace_diff_0, d0, d1);
	set_at<0, 16>(result, fused_level_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_weights_normed_laplace_diff_1_cache {
  bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0_merged_banks_1_cache bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0, bright_weights_normed_laplace_diff_1_cache& bright_weights_normed_laplace_diff_1, int d0, int d1) {
  bright_weights_normed_laplace_diff_1.bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0_merged_banks_1.push(bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0);
}

inline hw_uint<16> fused_level_1_rd0_select(bright_weights_normed_laplace_diff_1_cache& bright_weights_normed_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_laplace_diff_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 58] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { bright_weights_normed_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 48] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: {  }
  auto value_bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0 = bright_weights_normed_laplace_diff_1.bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_laplace_diff_1_update_0_write
//	bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0
inline void bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_laplace_diff_1_update_0_write, bright_weights_normed_laplace_diff_1_cache& bright_weights_normed_laplace_diff_1, int d0, int d1) {
	hw_uint<16> bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0_res = bright_weights_normed_laplace_diff_1_update_0_write.extract<0, 15>();
	bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0_write(bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write0_res, bright_weights_normed_laplace_diff_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> bright_weights_normed_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_laplace_diff_1_cache& bright_weights_normed_laplace_diff_1, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_weights_normed_laplace_diff_1, d0, d1);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_weights_normed_laplace_diff_2_cache {
  bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0_merged_banks_1_cache bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0, bright_weights_normed_laplace_diff_2_cache& bright_weights_normed_laplace_diff_2, int d0, int d1) {
  bright_weights_normed_laplace_diff_2.bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0_merged_banks_1.push(bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0);
}

inline hw_uint<16> fused_level_2_rd0_select(bright_weights_normed_laplace_diff_2_cache& bright_weights_normed_laplace_diff_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_laplace_diff_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 57] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { bright_weights_normed_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 47] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // DD fold: {  }
  auto value_bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0 = bright_weights_normed_laplace_diff_2.bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_laplace_diff_2_update_0_write
//	bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0
inline void bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_laplace_diff_2_update_0_write, bright_weights_normed_laplace_diff_2_cache& bright_weights_normed_laplace_diff_2, int d0, int d1) {
	hw_uint<16> bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0_res = bright_weights_normed_laplace_diff_2_update_0_write.extract<0, 15>();
	bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0_write(bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write0_res, bright_weights_normed_laplace_diff_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> bright_weights_normed_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_laplace_diff_2_cache& bright_weights_normed_laplace_diff_2, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(bright_weights_normed_laplace_diff_2, d0, d1);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_weights_normed_laplace_us_0_cache {
  bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0_merged_banks_1_cache bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0_write(hw_uint<16>& bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0, bright_weights_normed_laplace_us_0_cache& bright_weights_normed_laplace_us_0, int d0, int d1) {
  bright_weights_normed_laplace_us_0.bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0_merged_banks_1.push(bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_laplace_diff_0_rd0_select(bright_weights_normed_laplace_us_0_cache& bright_weights_normed_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_laplace_diff_0_rd0 read pattern: { bright_weights_normed_laplace_diff_0_update_0[d0, d1] -> bright_weights_normed_laplace_us_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { bright_weights_normed_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 49] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { bright_weights_normed_laplace_us_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 46] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // DD fold: {  }
  auto value_bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0 = bright_weights_normed_laplace_us_0.bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_laplace_diff_0_update_0_read
//	bright_weights_normed_laplace_diff_0_rd0
inline hw_uint<16> bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_diff_0_update_0_read_bundle_read(bright_weights_normed_laplace_us_0_cache& bright_weights_normed_laplace_us_0, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_laplace_diff_0_rd0_res = bright_weights_normed_laplace_diff_0_rd0_select(bright_weights_normed_laplace_us_0, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_laplace_diff_0_rd0_res);
	return result;
}

// bright_weights_normed_laplace_us_0_update_0_write
//	bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0
inline void bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_laplace_us_0_update_0_write, bright_weights_normed_laplace_us_0_cache& bright_weights_normed_laplace_us_0, int d0, int d1) {
	hw_uint<16> bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0_res = bright_weights_normed_laplace_us_0_update_0_write.extract<0, 15>();
	bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0_write(bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write0_res, bright_weights_normed_laplace_us_0, d0, d1);
}

#include "hw_classes.h"

struct bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_weights_normed_laplace_us_1_cache {
  bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0_merged_banks_1_cache bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0, bright_weights_normed_laplace_us_1_cache& bright_weights_normed_laplace_us_1, int d0, int d1) {
  bright_weights_normed_laplace_us_1.bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0_merged_banks_1.push(bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_laplace_diff_1_rd0_select(bright_weights_normed_laplace_us_1_cache& bright_weights_normed_laplace_us_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_laplace_diff_1_rd0 read pattern: { bright_weights_normed_laplace_diff_1_update_0[d0, d1] -> bright_weights_normed_laplace_us_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { bright_weights_normed_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 48] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { bright_weights_normed_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 45] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: {  }
  auto value_bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0 = bright_weights_normed_laplace_us_1.bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_laplace_diff_1_update_0_read
//	bright_weights_normed_laplace_diff_1_rd0
inline hw_uint<16> bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_diff_1_update_0_read_bundle_read(bright_weights_normed_laplace_us_1_cache& bright_weights_normed_laplace_us_1, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_laplace_diff_1_rd0_res = bright_weights_normed_laplace_diff_1_rd0_select(bright_weights_normed_laplace_us_1, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_laplace_diff_1_rd0_res);
	return result;
}

// bright_weights_normed_laplace_us_1_update_0_write
//	bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0
inline void bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_laplace_us_1_update_0_write, bright_weights_normed_laplace_us_1_cache& bright_weights_normed_laplace_us_1, int d0, int d1) {
	hw_uint<16> bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0_res = bright_weights_normed_laplace_us_1_update_0_write.extract<0, 15>();
	bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0_write(bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write0_res, bright_weights_normed_laplace_us_1, d0, d1);
}

#include "hw_classes.h"

struct bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
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

struct bright_weights_normed_laplace_us_2_cache {
  bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0_merged_banks_1_cache bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0, bright_weights_normed_laplace_us_2_cache& bright_weights_normed_laplace_us_2, int d0, int d1) {
  bright_weights_normed_laplace_us_2.bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0_merged_banks_1.push(bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_laplace_diff_2_rd0_select(bright_weights_normed_laplace_us_2_cache& bright_weights_normed_laplace_us_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_laplace_diff_2_rd0 read pattern: { bright_weights_normed_laplace_diff_2_update_0[d0, d1] -> bright_weights_normed_laplace_us_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { bright_weights_normed_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 47] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { bright_weights_normed_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 44] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // DD fold: {  }
  auto value_bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0 = bright_weights_normed_laplace_us_2.bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_laplace_diff_2_update_0_read
//	bright_weights_normed_laplace_diff_2_rd0
inline hw_uint<16> bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_diff_2_update_0_read_bundle_read(bright_weights_normed_laplace_us_2_cache& bright_weights_normed_laplace_us_2, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_laplace_diff_2_rd0_res = bright_weights_normed_laplace_diff_2_rd0_select(bright_weights_normed_laplace_us_2, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_laplace_diff_2_rd0_res);
	return result;
}

// bright_weights_normed_laplace_us_2_update_0_write
//	bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0
inline void bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_laplace_us_2_update_0_write, bright_weights_normed_laplace_us_2_cache& bright_weights_normed_laplace_us_2, int d0, int d1) {
	hw_uint<16> bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0_res = bright_weights_normed_laplace_us_2_update_0_write.extract<0, 15>();
	bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0_write(bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write0_res, bright_weights_normed_laplace_us_2, d0, d1);
}

#include "hw_classes.h"

struct dark_dark_update_0_write0_merged_banks_11_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 417
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 204> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 204> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_206() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_207() {
		return f6;
	}

	inline hw_uint<16> peek_208() {
		return f8;
	}

	inline hw_uint<16> peek_209() {
		return f10;
	}

	inline hw_uint<16> peek_413() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_414() {
		return f12;
	}

	inline hw_uint<16> peek_415() {
		return f14;
	}

	inline hw_uint<16> peek_416() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 204
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 204 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 204
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 204 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_cache {
  dark_dark_update_0_write0_merged_banks_11_cache dark_dark_update_0_write0_merged_banks_11;
};



inline void dark_dark_update_0_write0_write(hw_uint<16>& dark_dark_update_0_write0, dark_cache& dark, int d0, int d1) {
  dark.dark_dark_update_0_write0_merged_banks_11.push(dark_dark_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_1_rd0_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd0 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 416 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_416();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd1_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd1 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 209 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_209();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd2_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd2 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_2();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd3_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd3 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 415 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_415();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd4_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd4 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 208 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_208();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd5_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd5 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd6_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd6 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 414 : 0 <= d0 <= 203 and 0 <= d1 <= 204; dark_gauss_blur_1_update_0[d0, d1] -> (210 + d0) : d0 = 204 and 0 <= d1 <= 204 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_414();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd7_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd7 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 207 : 0 <= d0 <= 203 and 0 <= d1 <= 204; dark_gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 204 and 0 <= d1 <= 204 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_207();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd8_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd8 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_0_rd0_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 43] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_laplace_diff_0_update_0[d0, d1] -> 416 : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_416();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_rd0_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Read schedule : { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// dark_gauss_blur_1_update_0_read
//	dark_gauss_blur_1_rd0
//	dark_gauss_blur_1_rd1
//	dark_gauss_blur_1_rd2
//	dark_gauss_blur_1_rd3
//	dark_gauss_blur_1_rd4
//	dark_gauss_blur_1_rd5
//	dark_gauss_blur_1_rd6
//	dark_gauss_blur_1_rd7
//	dark_gauss_blur_1_rd8
inline hw_uint<144> dark_dark_gauss_blur_1_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
  // # of ports in bundle: 9
    // dark_gauss_blur_1_rd0
    // dark_gauss_blur_1_rd1
    // dark_gauss_blur_1_rd2
    // dark_gauss_blur_1_rd3
    // dark_gauss_blur_1_rd4
    // dark_gauss_blur_1_rd5
    // dark_gauss_blur_1_rd6
    // dark_gauss_blur_1_rd7
    // dark_gauss_blur_1_rd8

	hw_uint<144> result;
	hw_uint<16> dark_gauss_blur_1_rd0_res = dark_gauss_blur_1_rd0_select(dark, d0, d1);
	set_at<0, 144>(result, dark_gauss_blur_1_rd0_res);
	hw_uint<16> dark_gauss_blur_1_rd1_res = dark_gauss_blur_1_rd1_select(dark, d0, d1);
	set_at<16, 144>(result, dark_gauss_blur_1_rd1_res);
	hw_uint<16> dark_gauss_blur_1_rd2_res = dark_gauss_blur_1_rd2_select(dark, d0, d1);
	set_at<32, 144>(result, dark_gauss_blur_1_rd2_res);
	hw_uint<16> dark_gauss_blur_1_rd3_res = dark_gauss_blur_1_rd3_select(dark, d0, d1);
	set_at<48, 144>(result, dark_gauss_blur_1_rd3_res);
	hw_uint<16> dark_gauss_blur_1_rd4_res = dark_gauss_blur_1_rd4_select(dark, d0, d1);
	set_at<64, 144>(result, dark_gauss_blur_1_rd4_res);
	hw_uint<16> dark_gauss_blur_1_rd5_res = dark_gauss_blur_1_rd5_select(dark, d0, d1);
	set_at<80, 144>(result, dark_gauss_blur_1_rd5_res);
	hw_uint<16> dark_gauss_blur_1_rd6_res = dark_gauss_blur_1_rd6_select(dark, d0, d1);
	set_at<96, 144>(result, dark_gauss_blur_1_rd6_res);
	hw_uint<16> dark_gauss_blur_1_rd7_res = dark_gauss_blur_1_rd7_select(dark, d0, d1);
	set_at<112, 144>(result, dark_gauss_blur_1_rd7_res);
	hw_uint<16> dark_gauss_blur_1_rd8_res = dark_gauss_blur_1_rd8_select(dark, d0, d1);
	set_at<128, 144>(result, dark_gauss_blur_1_rd8_res);
	return result;
}

// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
inline hw_uint<16> dark_dark_laplace_diff_0_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark, d0, d1);
	set_at<0, 16>(result, dark_laplace_diff_0_rd0_res);
	return result;
}

// dark_update_0_write
//	dark_dark_update_0_write0
inline void dark_dark_update_0_write_bundle_write(hw_uint<16>& dark_update_0_write, dark_cache& dark, int d0, int d1) {
	hw_uint<16> dark_dark_update_0_write0_res = dark_update_0_write.extract<0, 15>();
	dark_dark_update_0_write0_write(dark_dark_update_0_write0_res, dark, d0, d1);
}

// dark_weights_update_0_read
//	dark_weights_rd0
inline hw_uint<16> dark_dark_weights_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_rd0_res = dark_weights_rd0_select(dark, d0, d1);
	set_at<0, 16>(result, dark_weights_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 204], [0, 204]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_gauss_blur_1_cache {
  dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_cache dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
  dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1.push(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0);
}

inline hw_uint<16> dark_gauss_ds_1_rd0_select(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_1_rd0 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // Read schedule : { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // Write schedule: { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 9] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // DD fold: {  }
  auto value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0 = dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_gauss_blur_1_update_0_write
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0
inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(hw_uint<16>& dark_gauss_blur_1_update_0_write, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	hw_uint<16> dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res = dark_gauss_blur_1_update_0_write.extract<0, 15>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res, dark_gauss_blur_1, d0, d1);
}

// dark_gauss_ds_1_update_0_read
//	dark_gauss_ds_1_rd0
inline hw_uint<16> dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_1_rd0_res = dark_gauss_ds_1_rd0_select(dark_gauss_blur_1, d0, d1);
	set_at<0, 16>(result, dark_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 100], [0, 100]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_gauss_blur_2_cache {
  dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_cache dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(hw_uint<16>& dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
  dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1.push(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> dark_gauss_ds_2_rd0_select(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_2_rd0 read pattern: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // Read schedule : { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // Write schedule: { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 15] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // DD fold: {  }
  auto value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0 = dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_gauss_blur_2_update_0_write
//	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0
inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& dark_gauss_blur_2_update_0_write, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	hw_uint<16> dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res = dark_gauss_blur_2_update_0_write.extract<0, 15>();
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res, dark_gauss_blur_2, d0, d1);
}

// dark_gauss_ds_2_update_0_read
//	dark_gauss_ds_2_rd0
inline hw_uint<16> dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_2_rd0_res = dark_gauss_ds_2_rd0_select(dark_gauss_blur_2, d0, d1);
	set_at<0, 16>(result, dark_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 48], [0, 48]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_gauss_blur_3_cache {
  dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_cache dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(hw_uint<16>& dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
  dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1.push(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> dark_gauss_ds_3_rd0_select(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_3_rd0 read pattern: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Read schedule : { dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 29] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Write schedule: { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 23] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // DD fold: {  }
  auto value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0 = dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_gauss_blur_3_update_0_write
//	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0
inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& dark_gauss_blur_3_update_0_write, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	hw_uint<16> dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res = dark_gauss_blur_3_update_0_write.extract<0, 15>();
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res, dark_gauss_blur_3, d0, d1);
}

// dark_gauss_ds_3_update_0_read
//	dark_gauss_ds_3_rd0
inline hw_uint<16> dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_3_rd0_res = dark_gauss_ds_3_rd0_select(dark_gauss_blur_3, d0, d1);
	set_at<0, 16>(result, dark_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 209
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 100> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 100> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_102() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_103() {
		return f6;
	}

	inline hw_uint<16> peek_104() {
		return f8;
	}

	inline hw_uint<16> peek_105() {
		return f10;
	}

	inline hw_uint<16> peek_205() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_206() {
		return f12;
	}

	inline hw_uint<16> peek_207() {
		return f14;
	}

	inline hw_uint<16> peek_208() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 100
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 100 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 100
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 100 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 103
	// # of read delays: 102
	fifo<hw_uint<16>, 103> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(102 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_cache {
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0;
};



inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_2_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd0 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 15] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 208 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_208();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd1 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 15] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 105 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_105();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd2_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd2 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 15] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_2();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd3_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd3 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 15] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 207 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_207();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd4_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd4 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 15] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 104 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_104();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd5_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd5 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 15] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd6_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd6 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 15] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 206 : 0 <= d0 <= 99 and 0 <= d1 <= 100; dark_gauss_blur_2_update_0[d0, d1] -> (106 + d0) : d0 = 100 and 0 <= d1 <= 100 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_206();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd7_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd7 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 15] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 103 : 0 <= d0 <= 99 and 0 <= d1 <= 100; dark_gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 100 and 0 <= d1 <= 100 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_103();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd8_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd8 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 15] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: {  }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 42] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_laplace_diff_1_update_0[d0, d1] -> 208 : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_208();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_us_0_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_0_rd0 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[o0, o1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 40] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 14] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_laplace_us_0_update_0[d0, d1] -> (102 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 199 and 0 < d1 <= 199 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((102 - floord(2*d0, 4))) : 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// dark_gauss_blur_2_update_0_read
//	dark_gauss_blur_2_rd0
//	dark_gauss_blur_2_rd1
//	dark_gauss_blur_2_rd2
//	dark_gauss_blur_2_rd3
//	dark_gauss_blur_2_rd4
//	dark_gauss_blur_2_rd5
//	dark_gauss_blur_2_rd6
//	dark_gauss_blur_2_rd7
//	dark_gauss_blur_2_rd8
inline hw_uint<144> dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 9
    // dark_gauss_blur_2_rd0
    // dark_gauss_blur_2_rd1
    // dark_gauss_blur_2_rd2
    // dark_gauss_blur_2_rd3
    // dark_gauss_blur_2_rd4
    // dark_gauss_blur_2_rd5
    // dark_gauss_blur_2_rd6
    // dark_gauss_blur_2_rd7
    // dark_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> dark_gauss_blur_2_rd0_res = dark_gauss_blur_2_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 144>(result, dark_gauss_blur_2_rd0_res);
	hw_uint<16> dark_gauss_blur_2_rd1_res = dark_gauss_blur_2_rd1_select(dark_gauss_ds_1, d0, d1);
	set_at<16, 144>(result, dark_gauss_blur_2_rd1_res);
	hw_uint<16> dark_gauss_blur_2_rd2_res = dark_gauss_blur_2_rd2_select(dark_gauss_ds_1, d0, d1);
	set_at<32, 144>(result, dark_gauss_blur_2_rd2_res);
	hw_uint<16> dark_gauss_blur_2_rd3_res = dark_gauss_blur_2_rd3_select(dark_gauss_ds_1, d0, d1);
	set_at<48, 144>(result, dark_gauss_blur_2_rd3_res);
	hw_uint<16> dark_gauss_blur_2_rd4_res = dark_gauss_blur_2_rd4_select(dark_gauss_ds_1, d0, d1);
	set_at<64, 144>(result, dark_gauss_blur_2_rd4_res);
	hw_uint<16> dark_gauss_blur_2_rd5_res = dark_gauss_blur_2_rd5_select(dark_gauss_ds_1, d0, d1);
	set_at<80, 144>(result, dark_gauss_blur_2_rd5_res);
	hw_uint<16> dark_gauss_blur_2_rd6_res = dark_gauss_blur_2_rd6_select(dark_gauss_ds_1, d0, d1);
	set_at<96, 144>(result, dark_gauss_blur_2_rd6_res);
	hw_uint<16> dark_gauss_blur_2_rd7_res = dark_gauss_blur_2_rd7_select(dark_gauss_ds_1, d0, d1);
	set_at<112, 144>(result, dark_gauss_blur_2_rd7_res);
	hw_uint<16> dark_gauss_blur_2_rd8_res = dark_gauss_blur_2_rd8_select(dark_gauss_ds_1, d0, d1);
	set_at<128, 144>(result, dark_gauss_blur_2_rd8_res);
	return result;
}

// dark_gauss_ds_1_update_0_write
//	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0
inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_1_update_0_write, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	hw_uint<16> dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res = dark_gauss_ds_1_update_0_write.extract<0, 15>();
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res, dark_gauss_ds_1, d0, d1);
}

// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<16> dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 16>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_0_update_0_read
//	dark_laplace_us_0_rd0
inline hw_uint<16> dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_laplace_us_0_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_us_0_rd0_res = dark_laplace_us_0_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 16>(result, dark_laplace_us_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 48> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 48> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_50() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_51() {
		return f6;
	}

	inline hw_uint<16> peek_52() {
		return f8;
	}

	inline hw_uint<16> peek_53() {
		return f10;
	}

	inline hw_uint<16> peek_101() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_102() {
		return f12;
	}

	inline hw_uint<16> peek_103() {
		return f14;
	}

	inline hw_uint<16> peek_104() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 48
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 48 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 48
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 48 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 54
	fifo<hw_uint<16>, 105> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(104 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 51
	// # of read delays: 52
	fifo<hw_uint<16>, 51> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(50 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_cache {
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0;
};



inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_3_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd0 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 23] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 104 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_104();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_3_rd1_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd1 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 23] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 53 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_53();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_3_rd2_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd2 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 23] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_3_rd3_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd3 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 23] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 103 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_103();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_3_rd4_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd4 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 23] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 52 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_52();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_3_rd5_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd5 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 23] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_3_rd6_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd6 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 23] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 102 : 0 <= d0 <= 47 and 0 <= d1 <= 48; dark_gauss_blur_3_update_0[d0, d1] -> (54 + d0) : d0 = 48 and 0 <= d1 <= 48 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_102();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_3_rd7_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd7 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 23] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 51 : 0 <= d0 <= 47 and 0 <= d1 <= 48; dark_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 48 and 0 <= d1 <= 48 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_51();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_3_rd8_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd8 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 23] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: {  }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_2_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 41] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_laplace_diff_2_update_0[d0, d1] -> 104 : 0 <= d0 <= 48 and 0 <= d1 <= 48; dark_laplace_diff_2_update_0[d0, d1] -> 103 : d0 = 49 and 0 <= d1 <= 48; dark_laplace_diff_2_update_0[d0, d1] -> (101 - d0) : d1 = 49 and 0 <= d0 <= 49 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-49 + d0 == 0 && 48 - d1 >= 0) ? (103) : (48 - d1 >= 0 && 48 - d0 >= 0) ? (104) : (-49 + d1 == 0) ? ((101 - d0)) : 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_us_1_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_1_rd0 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[o0, o1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 39] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 22] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_laplace_us_1_update_0[d0, d1] -> (50 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 99 and 0 < d1 <= 99 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((50 - floord(2*d0, 4))) : 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// dark_gauss_blur_3_update_0_read
//	dark_gauss_blur_3_rd0
//	dark_gauss_blur_3_rd1
//	dark_gauss_blur_3_rd2
//	dark_gauss_blur_3_rd3
//	dark_gauss_blur_3_rd4
//	dark_gauss_blur_3_rd5
//	dark_gauss_blur_3_rd6
//	dark_gauss_blur_3_rd7
//	dark_gauss_blur_3_rd8
inline hw_uint<144> dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 9
    // dark_gauss_blur_3_rd0
    // dark_gauss_blur_3_rd1
    // dark_gauss_blur_3_rd2
    // dark_gauss_blur_3_rd3
    // dark_gauss_blur_3_rd4
    // dark_gauss_blur_3_rd5
    // dark_gauss_blur_3_rd6
    // dark_gauss_blur_3_rd7
    // dark_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> dark_gauss_blur_3_rd0_res = dark_gauss_blur_3_rd0_select(dark_gauss_ds_2, d0, d1);
	set_at<0, 144>(result, dark_gauss_blur_3_rd0_res);
	hw_uint<16> dark_gauss_blur_3_rd1_res = dark_gauss_blur_3_rd1_select(dark_gauss_ds_2, d0, d1);
	set_at<16, 144>(result, dark_gauss_blur_3_rd1_res);
	hw_uint<16> dark_gauss_blur_3_rd2_res = dark_gauss_blur_3_rd2_select(dark_gauss_ds_2, d0, d1);
	set_at<32, 144>(result, dark_gauss_blur_3_rd2_res);
	hw_uint<16> dark_gauss_blur_3_rd3_res = dark_gauss_blur_3_rd3_select(dark_gauss_ds_2, d0, d1);
	set_at<48, 144>(result, dark_gauss_blur_3_rd3_res);
	hw_uint<16> dark_gauss_blur_3_rd4_res = dark_gauss_blur_3_rd4_select(dark_gauss_ds_2, d0, d1);
	set_at<64, 144>(result, dark_gauss_blur_3_rd4_res);
	hw_uint<16> dark_gauss_blur_3_rd5_res = dark_gauss_blur_3_rd5_select(dark_gauss_ds_2, d0, d1);
	set_at<80, 144>(result, dark_gauss_blur_3_rd5_res);
	hw_uint<16> dark_gauss_blur_3_rd6_res = dark_gauss_blur_3_rd6_select(dark_gauss_ds_2, d0, d1);
	set_at<96, 144>(result, dark_gauss_blur_3_rd6_res);
	hw_uint<16> dark_gauss_blur_3_rd7_res = dark_gauss_blur_3_rd7_select(dark_gauss_ds_2, d0, d1);
	set_at<112, 144>(result, dark_gauss_blur_3_rd7_res);
	hw_uint<16> dark_gauss_blur_3_rd8_res = dark_gauss_blur_3_rd8_select(dark_gauss_ds_2, d0, d1);
	set_at<128, 144>(result, dark_gauss_blur_3_rd8_res);
	return result;
}

// dark_gauss_ds_2_update_0_write
//	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0
inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_2_update_0_write, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	hw_uint<16> dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res = dark_gauss_ds_2_update_0_write.extract<0, 15>();
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res, dark_gauss_ds_2, d0, d1);
}

// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<16> dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_gauss_ds_2, d0, d1);
	set_at<0, 16>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_read
//	dark_laplace_us_1_rd0
inline hw_uint<16> dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_laplace_us_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_us_1_rd0_res = dark_laplace_us_1_rd0_select(dark_gauss_ds_2, d0, d1);
	set_at<0, 16>(result, dark_laplace_us_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 25
	// # of read delays: 26
	fifo<hw_uint<16>, 25> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(24 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_gauss_ds_3_cache {
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0;
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> dark_laplace_us_2_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_2_rd0 read pattern: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 38] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 29] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // DD fold: { dark_laplace_us_2_update_0[d0, d1] -> (24 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 47 and 0 < d1 <= 49 }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0);
  return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_3_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 56] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Write schedule: { dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 29] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // DD fold: {  }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// dark_gauss_ds_3_update_0_write
//	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0
inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_3_update_0_write, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	hw_uint<16> dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res = dark_gauss_ds_3_update_0_write.extract<0, 15>();
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res, dark_gauss_ds_3, d0, d1);
}

// dark_laplace_us_2_update_0_read
//	dark_laplace_us_2_rd0
inline hw_uint<16> dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_laplace_us_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_us_2_rd0_res = dark_laplace_us_2_rd0_select(dark_gauss_ds_3, d0, d1);
	set_at<0, 16>(result, dark_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(dark_gauss_ds_3, d0, d1);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_laplace_diff_0_cache {
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1;
};



inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0);
}

inline hw_uint<16> fused_level_0_rd0_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 59] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 43] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // DD fold: {  }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_write
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0
inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(hw_uint<16>& dark_laplace_diff_0_update_0_write, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	hw_uint<16> dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res = dark_laplace_diff_0_update_0_write.extract<0, 15>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res, dark_laplace_diff_0, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<16> dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_0_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_laplace_diff_0, d0, d1);
	set_at<0, 16>(result, fused_level_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_laplace_diff_1_cache {
  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_cache dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1;
};



inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(hw_uint<16>& dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1.push(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0);
}

inline hw_uint<16> fused_level_1_rd0_select(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 58] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 42] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: {  }
  auto value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0 = dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_write
//	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0
inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(hw_uint<16>& dark_laplace_diff_1_update_0_write, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	hw_uint<16> dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res = dark_laplace_diff_1_update_0_write.extract<0, 15>();
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res, dark_laplace_diff_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_laplace_diff_1, d0, d1);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_laplace_diff_2_cache {
  dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_cache dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1;
};



inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(hw_uint<16>& dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
  dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1.push(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0);
}

inline hw_uint<16> fused_level_2_rd0_select(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 57] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 41] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // DD fold: {  }
  auto value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0 = dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_write
//	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0
inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(hw_uint<16>& dark_laplace_diff_2_update_0_write, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	hw_uint<16> dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res = dark_laplace_diff_2_update_0_write.extract<0, 15>();
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res, dark_laplace_diff_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(dark_laplace_diff_2, d0, d1);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_laplace_us_0_cache {
  dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_cache dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1;
};



inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(hw_uint<16>& dark_laplace_us_0_dark_laplace_us_0_update_0_write0, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write0);
}

inline hw_uint<16> dark_laplace_diff_0_rd0_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 43] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 40] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // DD fold: {  }
  auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
inline hw_uint<16> dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark_laplace_us_0, d0, d1);
	set_at<0, 16>(result, dark_laplace_diff_0_rd0_res);
	return result;
}

// dark_laplace_us_0_update_0_write
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write0
inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(hw_uint<16>& dark_laplace_us_0_update_0_write, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	hw_uint<16> dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res = dark_laplace_us_0_update_0_write.extract<0, 15>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res, dark_laplace_us_0, d0, d1);
}

#include "hw_classes.h"

struct dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_laplace_us_1_cache {
  dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_cache dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1;
};



inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(hw_uint<16>& dark_laplace_us_1_dark_laplace_us_1_update_0_write0, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1.push(dark_laplace_us_1_dark_laplace_us_1_update_0_write0);
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 42] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { dark_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 39] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: {  }
  auto value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0 = dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<16> dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_laplace_us_1, d0, d1);
	set_at<0, 16>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_write
//	dark_laplace_us_1_dark_laplace_us_1_update_0_write0
inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(hw_uint<16>& dark_laplace_us_1_update_0_write, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	hw_uint<16> dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res = dark_laplace_us_1_update_0_write.extract<0, 15>();
	dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res, dark_laplace_us_1, d0, d1);
}

#include "hw_classes.h"

struct dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_laplace_us_2_cache {
  dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_cache dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1;
};



inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(hw_uint<16>& dark_laplace_us_2_dark_laplace_us_2_update_0_write0, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
  dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1.push(dark_laplace_us_2_dark_laplace_us_2_update_0_write0);
}

inline hw_uint<16> dark_laplace_diff_2_rd0_select(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 41] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { dark_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 38] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // DD fold: {  }
  auto value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0 = dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<16> dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_laplace_us_2, d0, d1);
	set_at<0, 16>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_2_update_0_write
//	dark_laplace_us_2_dark_laplace_us_2_update_0_write0
inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(hw_uint<16>& dark_laplace_us_2_update_0_write, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	hw_uint<16> dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res = dark_laplace_us_2_update_0_write.extract<0, 15>();
	dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res, dark_laplace_us_2, d0, d1);
}

#include "hw_classes.h"

struct dark_weights_dark_weights_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct dark_weights_cache {
  dark_weights_dark_weights_update_0_write0_merged_banks_2_cache dark_weights_dark_weights_update_0_write0_merged_banks_2;
};



inline void dark_weights_dark_weights_update_0_write0_write(hw_uint<16>& dark_weights_dark_weights_update_0_write0, dark_weights_cache& dark_weights, int d0, int d1) {
  dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.push(dark_weights_dark_weights_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
inline hw_uint<16> dark_weights_bright_weights_normed_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(dark_weights, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_rd0_res);
	return result;
}

// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
inline hw_uint<16> dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(dark_weights, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_rd0_res);
	return result;
}

// dark_weights_update_0_write
//	dark_weights_dark_weights_update_0_write0
inline void dark_weights_dark_weights_update_0_write_bundle_write(hw_uint<16>& dark_weights_update_0_write, dark_weights_cache& dark_weights, int d0, int d1) {
	hw_uint<16> dark_weights_dark_weights_update_0_write0_res = dark_weights_update_0_write.extract<0, 15>();
	dark_weights_dark_weights_update_0_write0_write(dark_weights_dark_weights_update_0_write0_res, dark_weights, d0, d1);
}

#include "hw_classes.h"

struct dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 417
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 204> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 204> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_206() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_207() {
		return f6;
	}

	inline hw_uint<16> peek_208() {
		return f8;
	}

	inline hw_uint<16> peek_209() {
		return f10;
	}

	inline hw_uint<16> peek_413() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_414() {
		return f12;
	}

	inline hw_uint<16> peek_415() {
		return f14;
	}

	inline hw_uint<16> peek_416() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 204
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 204 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 204
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 204 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_weights_normed_cache {
  dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10_cache dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10;
};



inline void dark_weights_normed_dark_weights_normed_update_0_write0_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write0, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.push(dark_weights_normed_dark_weights_normed_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd0 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 416 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_416();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd1 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 209 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_209();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd2 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_2();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd3 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 415 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_415();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd4 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 208 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_208();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd5 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd6 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 414 : 0 <= d0 <= 203 and 0 <= d1 <= 204; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (210 + d0) : d0 = 204 and 0 <= d1 <= 204 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_414();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd7 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 207 : 0 <= d0 <= 203 and 0 <= d1 <= 204; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 204 and 0 <= d1 <= 204 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_207();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd8 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_0();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_laplace_diff_0_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_laplace_diff_0_rd0 read pattern: { dark_weights_normed_laplace_diff_0_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { dark_weights_normed_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 37] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: { dark_weights_normed_laplace_diff_0_update_0[d0, d1] -> 416 : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_416();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_1_update_0_read
//	dark_weights_normed_gauss_blur_1_rd0
//	dark_weights_normed_gauss_blur_1_rd1
//	dark_weights_normed_gauss_blur_1_rd2
//	dark_weights_normed_gauss_blur_1_rd3
//	dark_weights_normed_gauss_blur_1_rd4
//	dark_weights_normed_gauss_blur_1_rd5
//	dark_weights_normed_gauss_blur_1_rd6
//	dark_weights_normed_gauss_blur_1_rd7
//	dark_weights_normed_gauss_blur_1_rd8
inline hw_uint<144> dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // # of ports in bundle: 9
    // dark_weights_normed_gauss_blur_1_rd0
    // dark_weights_normed_gauss_blur_1_rd1
    // dark_weights_normed_gauss_blur_1_rd2
    // dark_weights_normed_gauss_blur_1_rd3
    // dark_weights_normed_gauss_blur_1_rd4
    // dark_weights_normed_gauss_blur_1_rd5
    // dark_weights_normed_gauss_blur_1_rd6
    // dark_weights_normed_gauss_blur_1_rd7
    // dark_weights_normed_gauss_blur_1_rd8

	hw_uint<144> result;
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_res = dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed, d0, d1);
	set_at<0, 144>(result, dark_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd1_res = dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed, d0, d1);
	set_at<16, 144>(result, dark_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd2_res = dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed, d0, d1);
	set_at<32, 144>(result, dark_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd3_res = dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed, d0, d1);
	set_at<48, 144>(result, dark_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd4_res = dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed, d0, d1);
	set_at<64, 144>(result, dark_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd5_res = dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed, d0, d1);
	set_at<80, 144>(result, dark_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd6_res = dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed, d0, d1);
	set_at<96, 144>(result, dark_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd7_res = dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed, d0, d1);
	set_at<112, 144>(result, dark_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd8_res = dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed, d0, d1);
	set_at<128, 144>(result, dark_weights_normed_gauss_blur_1_rd8_res);
	return result;
}

// dark_weights_normed_laplace_diff_0_update_0_read
//	dark_weights_normed_laplace_diff_0_rd0
inline hw_uint<16> dark_weights_normed_dark_weights_normed_laplace_diff_0_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_laplace_diff_0_rd0_res = dark_weights_normed_laplace_diff_0_rd0_select(dark_weights_normed, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_laplace_diff_0_rd0_res);
	return result;
}

// dark_weights_normed_update_0_write
//	dark_weights_normed_dark_weights_normed_update_0_write0
inline void dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_update_0_write, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write0_res = dark_weights_normed_update_0_write.extract<0, 15>();
	dark_weights_normed_dark_weights_normed_update_0_write0_write(dark_weights_normed_dark_weights_normed_update_0_write0_res, dark_weights_normed, d0, d1);
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 204], [0, 204]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_weights_normed_gauss_blur_1_cache {
  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_1_rd0 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // Read schedule : { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // Write schedule: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 8] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0 = dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_1_update_0_write
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0
inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_update_0_write, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res, dark_weights_normed_gauss_blur_1, d0, d1);
}

// dark_weights_normed_gauss_ds_1_update_0_read
//	dark_weights_normed_gauss_ds_1_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_res = dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 100], [0, 100]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_weights_normed_gauss_blur_2_cache {
  dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
  dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_2_rd0 read pattern: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // Read schedule : { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // Write schedule: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 13] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0 = dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_2_update_0_write
//	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0
inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_blur_2_update_0_write, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<16> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res = dark_weights_normed_gauss_blur_2_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res, dark_weights_normed_gauss_blur_2, d0, d1);
}

// dark_weights_normed_gauss_ds_2_update_0_read
//	dark_weights_normed_gauss_ds_2_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_2_rd0_res = dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 48], [0, 48]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_weights_normed_gauss_blur_3_cache {
  dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
  dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_3_rd0 read pattern: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Read schedule : { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 28] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Write schedule: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 21] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0 = dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_3_update_0_write
//	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0
inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_blur_3_update_0_write, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	hw_uint<16> dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res = dark_weights_normed_gauss_blur_3_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res, dark_weights_normed_gauss_blur_3, d0, d1);
}

// dark_weights_normed_gauss_ds_3_update_0_read
//	dark_weights_normed_gauss_ds_3_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_3_rd0_res = dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 209
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 100> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 100> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_102() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_103() {
		return f6;
	}

	inline hw_uint<16> peek_104() {
		return f8;
	}

	inline hw_uint<16> peek_105() {
		return f10;
	}

	inline hw_uint<16> peek_205() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_206() {
		return f12;
	}

	inline hw_uint<16> peek_207() {
		return f14;
	}

	inline hw_uint<16> peek_208() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 100
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 100 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 100
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 100 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 103
	// # of read delays: 102
	fifo<hw_uint<16>, 103> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(102 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_cache {
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_laplace_us_0_rd0_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_laplace_us_0_rd0;
};



inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_laplace_us_0_rd0.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd0 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 13] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 208 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_208();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd1 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 13] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 105 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_105();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd2 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 13] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_2();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd3 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 13] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 207 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_207();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd4 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 13] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 104 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_104();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd5 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 13] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd6 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 13] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 206 : 0 <= d0 <= 99 and 0 <= d1 <= 100; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (106 + d0) : d0 = 100 and 0 <= d1 <= 100 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_206();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd7 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 13] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 103 : 0 <= d0 <= 99 and 0 <= d1 <= 100; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 100 and 0 <= d1 <= 100 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_103();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd8 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 13] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_laplace_diff_1_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_laplace_diff_1_rd0 read pattern: { dark_weights_normed_laplace_diff_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { dark_weights_normed_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 36] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_weights_normed_laplace_diff_1_update_0[d0, d1] -> 208 : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_208();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_laplace_us_0_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_laplace_us_0_rd0 read pattern: { dark_weights_normed_laplace_us_0_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[o0, o1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_weights_normed_laplace_us_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 34] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 2 + 2d0, 12] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
  // DD fold: { dark_weights_normed_laplace_us_0_update_0[d0, d1] -> (102 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 199 and 0 < d1 <= 199 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((102 - floord(2*d0, 4))) : 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// dark_weights_normed_gauss_blur_2_update_0_read
//	dark_weights_normed_gauss_blur_2_rd0
//	dark_weights_normed_gauss_blur_2_rd1
//	dark_weights_normed_gauss_blur_2_rd2
//	dark_weights_normed_gauss_blur_2_rd3
//	dark_weights_normed_gauss_blur_2_rd4
//	dark_weights_normed_gauss_blur_2_rd5
//	dark_weights_normed_gauss_blur_2_rd6
//	dark_weights_normed_gauss_blur_2_rd7
//	dark_weights_normed_gauss_blur_2_rd8
inline hw_uint<144> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 9
    // dark_weights_normed_gauss_blur_2_rd0
    // dark_weights_normed_gauss_blur_2_rd1
    // dark_weights_normed_gauss_blur_2_rd2
    // dark_weights_normed_gauss_blur_2_rd3
    // dark_weights_normed_gauss_blur_2_rd4
    // dark_weights_normed_gauss_blur_2_rd5
    // dark_weights_normed_gauss_blur_2_rd6
    // dark_weights_normed_gauss_blur_2_rd7
    // dark_weights_normed_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_res = dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 144>(result, dark_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd1_res = dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<16, 144>(result, dark_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd2_res = dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<32, 144>(result, dark_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd3_res = dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<48, 144>(result, dark_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd4_res = dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<64, 144>(result, dark_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd5_res = dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<80, 144>(result, dark_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd6_res = dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<96, 144>(result, dark_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd7_res = dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<112, 144>(result, dark_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd8_res = dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<128, 144>(result, dark_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_1_update_0_write
//	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0
inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_update_0_write, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<16> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res = dark_weights_normed_gauss_ds_1_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res, dark_weights_normed_gauss_ds_1, d0, d1);
}

// dark_weights_normed_laplace_diff_1_update_0_read
//	dark_weights_normed_laplace_diff_1_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_1_dark_weights_normed_laplace_diff_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_laplace_diff_1_rd0_res = dark_weights_normed_laplace_diff_1_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_laplace_diff_1_rd0_res);
	return result;
}

// dark_weights_normed_laplace_us_0_update_0_read
//	dark_weights_normed_laplace_us_0_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_1_dark_weights_normed_laplace_us_0_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_laplace_us_0_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_laplace_us_0_rd0_res = dark_weights_normed_laplace_us_0_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_laplace_us_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 48> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 48> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_50() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_51() {
		return f6;
	}

	inline hw_uint<16> peek_52() {
		return f8;
	}

	inline hw_uint<16> peek_53() {
		return f10;
	}

	inline hw_uint<16> peek_101() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_102() {
		return f12;
	}

	inline hw_uint<16> peek_103() {
		return f14;
	}

	inline hw_uint<16> peek_104() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 48
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 48 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 48
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 48 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 54
	fifo<hw_uint<16>, 105> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(104 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 51
	// # of read delays: 52
	fifo<hw_uint<16>, 51> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(50 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_cache {
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_laplace_diff_2_rd0_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_laplace_diff_2_rd0;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_laplace_us_1_rd0_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_laplace_us_1_rd0;
};



inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_laplace_diff_2_rd0.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_laplace_us_1_rd0.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd0 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 21] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 104 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_104();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd1 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 21] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 53 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_53();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd2 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 21] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd3 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 21] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 103 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_103();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd4 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 21] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 52 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_52();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd5 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 21] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd6 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 21] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 102 : 0 <= d0 <= 47 and 0 <= d1 <= 48; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (54 + d0) : d0 = 48 and 0 <= d1 <= 48 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_102();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd7 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 21] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 51 : 0 <= d0 <= 47 and 0 <= d1 <= 48; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 48 and 0 <= d1 <= 48 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_51();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd8 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 21] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_laplace_diff_2_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_laplace_diff_2_rd0 read pattern: { dark_weights_normed_laplace_diff_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { dark_weights_normed_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 35] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_weights_normed_laplace_diff_2_update_0[d0, d1] -> 104 : 0 <= d0 <= 48 and 0 <= d1 <= 48; dark_weights_normed_laplace_diff_2_update_0[d0, d1] -> 103 : d0 = 49 and 0 <= d1 <= 48; dark_weights_normed_laplace_diff_2_update_0[d0, d1] -> (101 - d0) : d1 = 49 and 0 <= d0 <= 49 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-49 + d0 == 0 && 48 - d1 >= 0) ? (103) : (48 - d1 >= 0 && 48 - d0 >= 0) ? (104) : (-49 + d1 == 0) ? ((101 - d0)) : 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_laplace_us_1_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_laplace_us_1_rd0 read pattern: { dark_weights_normed_laplace_us_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[o0, o1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_weights_normed_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 33] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 6 + 4d0, 20] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
  // DD fold: { dark_weights_normed_laplace_us_1_update_0[d0, d1] -> (50 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 99 and 0 < d1 <= 99 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((50 - floord(2*d0, 4))) : 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// dark_weights_normed_gauss_blur_3_update_0_read
//	dark_weights_normed_gauss_blur_3_rd0
//	dark_weights_normed_gauss_blur_3_rd1
//	dark_weights_normed_gauss_blur_3_rd2
//	dark_weights_normed_gauss_blur_3_rd3
//	dark_weights_normed_gauss_blur_3_rd4
//	dark_weights_normed_gauss_blur_3_rd5
//	dark_weights_normed_gauss_blur_3_rd6
//	dark_weights_normed_gauss_blur_3_rd7
//	dark_weights_normed_gauss_blur_3_rd8
inline hw_uint<144> dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 9
    // dark_weights_normed_gauss_blur_3_rd0
    // dark_weights_normed_gauss_blur_3_rd1
    // dark_weights_normed_gauss_blur_3_rd2
    // dark_weights_normed_gauss_blur_3_rd3
    // dark_weights_normed_gauss_blur_3_rd4
    // dark_weights_normed_gauss_blur_3_rd5
    // dark_weights_normed_gauss_blur_3_rd6
    // dark_weights_normed_gauss_blur_3_rd7
    // dark_weights_normed_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd0_res = dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 144>(result, dark_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd1_res = dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<16, 144>(result, dark_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd2_res = dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<32, 144>(result, dark_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd3_res = dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<48, 144>(result, dark_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd4_res = dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<64, 144>(result, dark_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd5_res = dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<80, 144>(result, dark_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd6_res = dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<96, 144>(result, dark_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd7_res = dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<112, 144>(result, dark_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd8_res = dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<128, 144>(result, dark_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_2_update_0_write
//	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0
inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_2_update_0_write, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<16> dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res = dark_weights_normed_gauss_ds_2_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res, dark_weights_normed_gauss_ds_2, d0, d1);
}

// dark_weights_normed_laplace_diff_2_update_0_read
//	dark_weights_normed_laplace_diff_2_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_2_dark_weights_normed_laplace_diff_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_laplace_diff_2_rd0_res = dark_weights_normed_laplace_diff_2_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_laplace_diff_2_rd0_res);
	return result;
}

// dark_weights_normed_laplace_us_1_update_0_read
//	dark_weights_normed_laplace_us_1_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_2_dark_weights_normed_laplace_us_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_laplace_us_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_laplace_us_1_rd0_res = dark_weights_normed_laplace_us_1_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_laplace_us_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_dark_weights_normed_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 25
	// # of read delays: 26
	fifo<hw_uint<16>, 25> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(24 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_weights_normed_gauss_ds_3_cache {
  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_dark_weights_normed_laplace_us_2_rd0_cache dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_dark_weights_normed_laplace_us_2_rd0;
  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
  dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_dark_weights_normed_laplace_us_2_rd0.push(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0);
  dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_laplace_us_2_rd0_select(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_laplace_us_2_rd0 read pattern: { dark_weights_normed_laplace_us_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[o0, o1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_weights_normed_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 32] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 28] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // DD fold: { dark_weights_normed_laplace_us_2_update_0[d0, d1] -> (24 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 47 and 0 < d1 <= 49 }
  auto value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0 = dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_dark_weights_normed_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0);
  return value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 56] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // Write schedule: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 28] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0 = dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// dark_weights_normed_gauss_ds_3_update_0_write
//	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0
inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_update_0_write, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<16> dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res = dark_weights_normed_gauss_ds_3_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res, dark_weights_normed_gauss_ds_3, d0, d1);
}

// dark_weights_normed_laplace_us_2_update_0_read
//	dark_weights_normed_laplace_us_2_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_3_dark_weights_normed_laplace_us_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_laplace_us_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_laplace_us_2_rd0_res = dark_weights_normed_laplace_us_2_rd0_select(dark_weights_normed_gauss_ds_3, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3, d0, d1);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_weights_normed_laplace_diff_0_cache {
  dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0_merged_banks_1_cache dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0_write(hw_uint<16>& dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0, dark_weights_normed_laplace_diff_0_cache& dark_weights_normed_laplace_diff_0, int d0, int d1) {
  dark_weights_normed_laplace_diff_0.dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0_merged_banks_1.push(dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0);
}

inline hw_uint<16> fused_level_0_rd0_select(dark_weights_normed_laplace_diff_0_cache& dark_weights_normed_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed_laplace_diff_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 59] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { dark_weights_normed_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 37] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // DD fold: {  }
  auto value_dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0 = dark_weights_normed_laplace_diff_0.dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_laplace_diff_0_update_0_write
//	dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0
inline void dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_laplace_diff_0_update_0_write, dark_weights_normed_laplace_diff_0_cache& dark_weights_normed_laplace_diff_0, int d0, int d1) {
	hw_uint<16> dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0_res = dark_weights_normed_laplace_diff_0_update_0_write.extract<0, 15>();
	dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0_write(dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write0_res, dark_weights_normed_laplace_diff_0, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<16> dark_weights_normed_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_weights_normed_laplace_diff_0_cache& dark_weights_normed_laplace_diff_0, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_0_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_weights_normed_laplace_diff_0, d0, d1);
	set_at<0, 16>(result, fused_level_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_weights_normed_laplace_diff_1_cache {
  dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0_merged_banks_1_cache dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0, dark_weights_normed_laplace_diff_1_cache& dark_weights_normed_laplace_diff_1, int d0, int d1) {
  dark_weights_normed_laplace_diff_1.dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0_merged_banks_1.push(dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0);
}

inline hw_uint<16> fused_level_1_rd0_select(dark_weights_normed_laplace_diff_1_cache& dark_weights_normed_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_laplace_diff_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 58] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { dark_weights_normed_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 36] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: {  }
  auto value_dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0 = dark_weights_normed_laplace_diff_1.dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_laplace_diff_1_update_0_write
//	dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0
inline void dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_laplace_diff_1_update_0_write, dark_weights_normed_laplace_diff_1_cache& dark_weights_normed_laplace_diff_1, int d0, int d1) {
	hw_uint<16> dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0_res = dark_weights_normed_laplace_diff_1_update_0_write.extract<0, 15>();
	dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0_write(dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write0_res, dark_weights_normed_laplace_diff_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> dark_weights_normed_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_laplace_diff_1_cache& dark_weights_normed_laplace_diff_1, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_weights_normed_laplace_diff_1, d0, d1);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_weights_normed_laplace_diff_2_cache {
  dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0_merged_banks_1_cache dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0, dark_weights_normed_laplace_diff_2_cache& dark_weights_normed_laplace_diff_2, int d0, int d1) {
  dark_weights_normed_laplace_diff_2.dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0_merged_banks_1.push(dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0);
}

inline hw_uint<16> fused_level_2_rd0_select(dark_weights_normed_laplace_diff_2_cache& dark_weights_normed_laplace_diff_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_laplace_diff_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 57] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { dark_weights_normed_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 35] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // DD fold: {  }
  auto value_dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0 = dark_weights_normed_laplace_diff_2.dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_laplace_diff_2_update_0_write
//	dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0
inline void dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_laplace_diff_2_update_0_write, dark_weights_normed_laplace_diff_2_cache& dark_weights_normed_laplace_diff_2, int d0, int d1) {
	hw_uint<16> dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0_res = dark_weights_normed_laplace_diff_2_update_0_write.extract<0, 15>();
	dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0_write(dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write0_res, dark_weights_normed_laplace_diff_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> dark_weights_normed_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_laplace_diff_2_cache& dark_weights_normed_laplace_diff_2, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(dark_weights_normed_laplace_diff_2, d0, d1);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_weights_normed_laplace_us_0_cache {
  dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0_merged_banks_1_cache dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0_write(hw_uint<16>& dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0, dark_weights_normed_laplace_us_0_cache& dark_weights_normed_laplace_us_0, int d0, int d1) {
  dark_weights_normed_laplace_us_0.dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0_merged_banks_1.push(dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_laplace_diff_0_rd0_select(dark_weights_normed_laplace_us_0_cache& dark_weights_normed_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_laplace_diff_0_rd0 read pattern: { dark_weights_normed_laplace_diff_0_update_0[d0, d1] -> dark_weights_normed_laplace_us_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { dark_weights_normed_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 37] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { dark_weights_normed_laplace_us_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 34] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // DD fold: {  }
  auto value_dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0 = dark_weights_normed_laplace_us_0.dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_laplace_diff_0_update_0_read
//	dark_weights_normed_laplace_diff_0_rd0
inline hw_uint<16> dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_diff_0_update_0_read_bundle_read(dark_weights_normed_laplace_us_0_cache& dark_weights_normed_laplace_us_0, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_laplace_diff_0_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_laplace_diff_0_rd0_res = dark_weights_normed_laplace_diff_0_rd0_select(dark_weights_normed_laplace_us_0, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_laplace_diff_0_rd0_res);
	return result;
}

// dark_weights_normed_laplace_us_0_update_0_write
//	dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0
inline void dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_laplace_us_0_update_0_write, dark_weights_normed_laplace_us_0_cache& dark_weights_normed_laplace_us_0, int d0, int d1) {
	hw_uint<16> dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0_res = dark_weights_normed_laplace_us_0_update_0_write.extract<0, 15>();
	dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0_write(dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write0_res, dark_weights_normed_laplace_us_0, d0, d1);
}

#include "hw_classes.h"

struct dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_weights_normed_laplace_us_1_cache {
  dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0_merged_banks_1_cache dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0, dark_weights_normed_laplace_us_1_cache& dark_weights_normed_laplace_us_1, int d0, int d1) {
  dark_weights_normed_laplace_us_1.dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0_merged_banks_1.push(dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_laplace_diff_1_rd0_select(dark_weights_normed_laplace_us_1_cache& dark_weights_normed_laplace_us_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_laplace_diff_1_rd0 read pattern: { dark_weights_normed_laplace_diff_1_update_0[d0, d1] -> dark_weights_normed_laplace_us_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { dark_weights_normed_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 36] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { dark_weights_normed_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 33] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: {  }
  auto value_dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0 = dark_weights_normed_laplace_us_1.dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_laplace_diff_1_update_0_read
//	dark_weights_normed_laplace_diff_1_rd0
inline hw_uint<16> dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_diff_1_update_0_read_bundle_read(dark_weights_normed_laplace_us_1_cache& dark_weights_normed_laplace_us_1, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_laplace_diff_1_rd0_res = dark_weights_normed_laplace_diff_1_rd0_select(dark_weights_normed_laplace_us_1, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_laplace_diff_1_rd0_res);
	return result;
}

// dark_weights_normed_laplace_us_1_update_0_write
//	dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0
inline void dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_laplace_us_1_update_0_write, dark_weights_normed_laplace_us_1_cache& dark_weights_normed_laplace_us_1, int d0, int d1) {
	hw_uint<16> dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0_res = dark_weights_normed_laplace_us_1_update_0_write.extract<0, 15>();
	dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0_write(dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write0_res, dark_weights_normed_laplace_us_1, d0, d1);
}

#include "hw_classes.h"

struct dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
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

struct dark_weights_normed_laplace_us_2_cache {
  dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0_merged_banks_1_cache dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0, dark_weights_normed_laplace_us_2_cache& dark_weights_normed_laplace_us_2, int d0, int d1) {
  dark_weights_normed_laplace_us_2.dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0_merged_banks_1.push(dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_laplace_diff_2_rd0_select(dark_weights_normed_laplace_us_2_cache& dark_weights_normed_laplace_us_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_laplace_diff_2_rd0 read pattern: { dark_weights_normed_laplace_diff_2_update_0[d0, d1] -> dark_weights_normed_laplace_us_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { dark_weights_normed_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 35] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { dark_weights_normed_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 32] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // DD fold: {  }
  auto value_dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0 = dark_weights_normed_laplace_us_2.dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_laplace_diff_2_update_0_read
//	dark_weights_normed_laplace_diff_2_rd0
inline hw_uint<16> dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_diff_2_update_0_read_bundle_read(dark_weights_normed_laplace_us_2_cache& dark_weights_normed_laplace_us_2, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_laplace_diff_2_rd0_res = dark_weights_normed_laplace_diff_2_rd0_select(dark_weights_normed_laplace_us_2, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_laplace_diff_2_rd0_res);
	return result;
}

// dark_weights_normed_laplace_us_2_update_0_write
//	dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0
inline void dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_laplace_us_2_update_0_write, dark_weights_normed_laplace_us_2_cache& dark_weights_normed_laplace_us_2, int d0, int d1) {
	hw_uint<16> dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0_res = dark_weights_normed_laplace_us_2_update_0_write.extract<0, 15>();
	dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0_write(dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write0_res, dark_weights_normed_laplace_us_2, d0, d1);
}

#include "hw_classes.h"

struct final_merged_0_final_merged_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
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

struct final_merged_0_cache {
  final_merged_0_final_merged_0_update_0_write0_merged_banks_1_cache final_merged_0_final_merged_0_update_0_write0_merged_banks_1;
};



inline void final_merged_0_final_merged_0_update_0_write0_write(hw_uint<16>& final_merged_0_final_merged_0_update_0_write0, final_merged_0_cache& final_merged_0, int d0, int d1) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write0_merged_banks_1.push(final_merged_0_final_merged_0_update_0_write0);
}

inline hw_uint<16> ef_cartoon_rd0_select(final_merged_0_cache& final_merged_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ef_cartoon_rd0 read pattern: { ef_cartoon_update_0[d0, d1] -> final_merged_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { ef_cartoon_update_0[d0, d1] -> [14 + d1, 14 + d0, 63] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { final_merged_0_update_0[d0, d1] -> [14 + d1, 14 + d0, 62] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // DD fold: {  }
  auto value_final_merged_0_final_merged_0_update_0_write0 = final_merged_0.final_merged_0_final_merged_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_final_merged_0_final_merged_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// ef_cartoon_update_0_read
//	ef_cartoon_rd0
inline hw_uint<16> final_merged_0_ef_cartoon_update_0_read_bundle_read(final_merged_0_cache& final_merged_0, int d0, int d1) {
  // # of ports in bundle: 1
    // ef_cartoon_rd0

	hw_uint<16> result;
	hw_uint<16> ef_cartoon_rd0_res = ef_cartoon_rd0_select(final_merged_0, d0, d1);
	set_at<0, 16>(result, ef_cartoon_rd0_res);
	return result;
}

// final_merged_0_update_0_write
//	final_merged_0_final_merged_0_update_0_write0
inline void final_merged_0_final_merged_0_update_0_write_bundle_write(hw_uint<16>& final_merged_0_update_0_write, final_merged_0_cache& final_merged_0, int d0, int d1) {
	hw_uint<16> final_merged_0_final_merged_0_update_0_write0_res = final_merged_0_update_0_write.extract<0, 15>();
	final_merged_0_final_merged_0_update_0_write0_write(final_merged_0_final_merged_0_update_0_write0_res, final_merged_0, d0, d1);
}

#include "hw_classes.h"

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 100
	// # of read delays: 101
	fifo<hw_uint<16>, 100> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_1_cache {
  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0;
};



inline void final_merged_1_final_merged_1_update_0_write0_write(hw_uint<16>& final_merged_1_final_merged_1_update_0_write0, final_merged_1_cache& final_merged_1, int d0, int d1) {
  final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.push(final_merged_1_final_merged_1_update_0_write0);
}

inline hw_uint<16> final_merged_0_rd0_select(final_merged_1_cache& final_merged_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[o0, o1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 14 + d0, 62] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 14 + 2d0, 61] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> (99 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 197 and 0 < d1 <= 199 }
  auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 197 - d0 >= 0) ? ((99 - floord(2*d0, 4))) : 0);
  return value_final_merged_1_final_merged_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
inline hw_uint<16> final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1_cache& final_merged_1, int d0, int d1) {
  // # of ports in bundle: 1
    // final_merged_0_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_0_rd0_res = final_merged_0_rd0_select(final_merged_1, d0, d1);
	set_at<0, 16>(result, final_merged_0_rd0_res);
	return result;
}

// final_merged_1_update_0_write
//	final_merged_1_final_merged_1_update_0_write0
inline void final_merged_1_final_merged_1_update_0_write_bundle_write(hw_uint<16>& final_merged_1_update_0_write, final_merged_1_cache& final_merged_1, int d0, int d1) {
	hw_uint<16> final_merged_1_final_merged_1_update_0_write0_res = final_merged_1_update_0_write.extract<0, 15>();
	final_merged_1_final_merged_1_update_0_write0_write(final_merged_1_final_merged_1_update_0_write0_res, final_merged_1, d0, d1);
}

#include "hw_classes.h"

struct final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache {
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 50
	// # of read delays: 51
	fifo<hw_uint<16>, 50> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(49 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_2_cache {
  final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0;
};



inline void final_merged_2_final_merged_2_update_0_write0_write(hw_uint<16>& final_merged_2_final_merged_2_update_0_write0, final_merged_2_cache& final_merged_2, int d0, int d1) {
  final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.push(final_merged_2_final_merged_2_update_0_write0);
}

inline hw_uint<16> final_merged_1_rd0_select(final_merged_2_cache& final_merged_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[o0, o1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 14 + 2d0, 61] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 60] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // DD fold: { final_merged_1_update_0[d0, d1] -> (49 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 97 and 0 < d1 <= 99 }
  auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 97 - d0 >= 0) ? ((49 - floord(2*d0, 4))) : 0);
  return value_final_merged_2_final_merged_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<16> final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2_cache& final_merged_2, int d0, int d1) {
  // # of ports in bundle: 1
    // final_merged_1_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_1_rd0_res = final_merged_1_rd0_select(final_merged_2, d0, d1);
	set_at<0, 16>(result, final_merged_1_rd0_res);
	return result;
}

// final_merged_2_update_0_write
//	final_merged_2_final_merged_2_update_0_write0
inline void final_merged_2_final_merged_2_update_0_write_bundle_write(hw_uint<16>& final_merged_2_update_0_write, final_merged_2_cache& final_merged_2, int d0, int d1) {
	hw_uint<16> final_merged_2_final_merged_2_update_0_write0_res = final_merged_2_update_0_write.extract<0, 15>();
	final_merged_2_final_merged_2_update_0_write0_write(final_merged_2_final_merged_2_update_0_write0_res, final_merged_2, d0, d1);
}

#include "hw_classes.h"

struct fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 2413
	// # of read delays: 2413
	fifo<hw_uint<16>, 2413> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2412 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_cache {
  fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0_cache fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0;
};



inline void fused_level_0_fused_level_0_update_0_write0_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write0, fused_level_0_cache& fused_level_0, int d0, int d1) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.push(fused_level_0_fused_level_0_update_0_write0);
}

inline hw_uint<16> final_merged_0_rd0_select(fused_level_0_cache& fused_level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 14 + d0, 62] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // Write schedule: { fused_level_0_update_0[d0, d1] -> [2 + d1, 2 + d0, 59] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> ((39999 - d0) - 200 * d1) : 0 <= d0 <= 198 and 189 <= d1 <= 198; final_merged_0_update_0[d0, d1] -> (39800 - 200 * d1) : d0 = 199 and 189 <= d1 <= 198; final_merged_0_update_0[d0, d1] -> (2599 - d0) : 189 <= d0 <= 198 and 0 <= d1 <= 187; final_merged_0_update_0[d0, d1] -> 2400 : d0 = 199 and 0 <= d1 <= 187; final_merged_0_update_0[d0, d1] -> 2412 : 0 <= d0 <= 187 and 0 <= d1 <= 187; final_merged_0_update_0[d0, d1] -> 2411 : d0 = 188 and 0 <= d1 <= 187; final_merged_0_update_0[d0, d1] -> (2399 - d0) : d1 = 188 and 0 <= d0 <= 198 and (d0 >= 189 or d0 <= 188); final_merged_0_update_0[d0, d1] -> 2200 : d0 = 199 and d1 = 188; final_merged_0_update_0[d0, d1] -> (199 - d0) : d1 = 199 and 0 <= d0 <= 198 }
  auto value_fused_level_0_fused_level_0_update_0_write0 = fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ (-188 + d1 == 0 && -199 + d0 == 0) ? (2200) : (-199 + d0 == 0 && 187 - d1 >= 0) ? (2400) : (-188 + d0 == 0 && 187 - d1 >= 0) ? (2411) : (187 - d1 >= 0 && 187 - d0 >= 0) ? (2412) : (-199 + d1 == 0 && 198 - d0 >= 0) ? ((199 - d0)) : (-188 + d1 == 0 && 198 - d0 >= 0) ? ((2399 - d0)) : (-189 + d0 >= 0 && 198 - d0 >= 0 && 187 - d1 >= 0) ? ((2599 - d0)) : (-199 + d0 == 0 && -189 + d1 >= 0 && 198 - d1 >= 0) ? ((39800 - 200 * d1)) : (198 - d1 >= 0 && 198 - d0 >= 0 && -189 + d1 >= 0) ? (((39999 - d0) - 200 * d1)) : 0);
  return value_fused_level_0_fused_level_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
inline hw_uint<16> fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0_cache& fused_level_0, int d0, int d1) {
  // # of ports in bundle: 1
    // final_merged_0_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_0_rd0_res = final_merged_0_rd0_select(fused_level_0, d0, d1);
	set_at<0, 16>(result, final_merged_0_rd0_res);
	return result;
}

// fused_level_0_update_0_write
//	fused_level_0_fused_level_0_update_0_write0
inline void fused_level_0_fused_level_0_update_0_write_bundle_write(hw_uint<16>& fused_level_0_update_0_write, fused_level_0_cache& fused_level_0, int d0, int d1) {
	hw_uint<16> fused_level_0_fused_level_0_update_0_write0_res = fused_level_0_update_0_write.extract<0, 15>();
	fused_level_0_fused_level_0_update_0_write0_write(fused_level_0_fused_level_0_update_0_write0_res, fused_level_0, d0, d1);
}

#include "hw_classes.h"

struct fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 405
	// # of read delays: 405
	fifo<hw_uint<16>, 405> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(404 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_1_cache {
  fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0_cache fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0;
};



inline void fused_level_1_fused_level_1_update_0_write0_write(hw_uint<16>& fused_level_1_fused_level_1_update_0_write0, fused_level_1_cache& fused_level_1, int d0, int d1) {
  fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.push(fused_level_1_fused_level_1_update_0_write0);
}

inline hw_uint<16> final_merged_1_rd0_select(fused_level_1_cache& fused_level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 14 + 2d0, 61] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 6 + 2d0, 58] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: { final_merged_1_update_0[d0, d1] -> ((9999 - d0) - 100 * d1) : 0 <= d0 <= 98 and 97 <= d1 <= 98; final_merged_1_update_0[d0, d1] -> (9900 - 100 * d1) : d0 = 99 and 97 <= d1 <= 98; final_merged_1_update_0[d0, d1] -> (499 - d0) : 97 <= d0 <= 98 and 0 <= d1 <= 95; final_merged_1_update_0[d0, d1] -> 400 : d0 = 99 and 0 <= d1 <= 95; final_merged_1_update_0[d0, d1] -> 404 : 0 <= d0 <= 95 and 0 <= d1 <= 95; final_merged_1_update_0[d0, d1] -> 403 : d0 = 96 and 0 <= d1 <= 95; final_merged_1_update_0[d0, d1] -> (399 - d0) : d1 = 96 and 0 <= d0 <= 98 and (d0 >= 97 or d0 <= 96); final_merged_1_update_0[d0, d1] -> 300 : d0 = 99 and d1 = 96; final_merged_1_update_0[d0, d1] -> (99 - d0) : d1 = 99 and 0 <= d0 <= 98 }
  auto value_fused_level_1_fused_level_1_update_0_write0 = fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ (-96 + d1 == 0 && -99 + d0 == 0) ? (300) : (-99 + d0 == 0 && 95 - d1 >= 0) ? (400) : (-96 + d0 == 0 && 95 - d1 >= 0) ? (403) : (95 - d1 >= 0 && 95 - d0 >= 0) ? (404) : (-99 + d1 == 0 && 98 - d0 >= 0) ? ((99 - d0)) : (-96 + d1 == 0 && 98 - d0 >= 0) ? ((399 - d0)) : (-97 + d0 >= 0 && 98 - d0 >= 0 && 95 - d1 >= 0) ? ((499 - d0)) : (-99 + d0 == 0 && -97 + d1 >= 0 && 98 - d1 >= 0) ? ((9900 - 100 * d1)) : (98 - d1 >= 0 && 98 - d0 >= 0 && -97 + d1 >= 0) ? (((9999 - d0) - 100 * d1)) : 0);
  return value_fused_level_1_fused_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<16> fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1_cache& fused_level_1, int d0, int d1) {
  // # of ports in bundle: 1
    // final_merged_1_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_1_rd0_res = final_merged_1_rd0_select(fused_level_1, d0, d1);
	set_at<0, 16>(result, final_merged_1_rd0_res);
	return result;
}

// fused_level_1_update_0_write
//	fused_level_1_fused_level_1_update_0_write0
inline void fused_level_1_fused_level_1_update_0_write_bundle_write(hw_uint<16>& fused_level_1_update_0_write, fused_level_1_cache& fused_level_1, int d0, int d1) {
	hw_uint<16> fused_level_1_fused_level_1_update_0_write0_res = fused_level_1_update_0_write.extract<0, 15>();
	fused_level_1_fused_level_1_update_0_write0_write(fused_level_1_fused_level_1_update_0_write0_res, fused_level_1, d0, d1);
}

#include "hw_classes.h"

struct fused_level_2_fused_level_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
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

struct fused_level_2_cache {
  fused_level_2_fused_level_2_update_0_write0_merged_banks_1_cache fused_level_2_fused_level_2_update_0_write0_merged_banks_1;
};



inline void fused_level_2_fused_level_2_update_0_write0_write(hw_uint<16>& fused_level_2_fused_level_2_update_0_write0, fused_level_2_cache& fused_level_2, int d0, int d1) {
  fused_level_2.fused_level_2_fused_level_2_update_0_write0_merged_banks_1.push(fused_level_2_fused_level_2_update_0_write0);
}

inline hw_uint<16> final_merged_2_rd0_select(fused_level_2_cache& fused_level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Read schedule : { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 60] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 57] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // DD fold: {  }
  auto value_fused_level_2_fused_level_2_update_0_write0 = fused_level_2.fused_level_2_fused_level_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_fused_level_2_fused_level_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<16> fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2_cache& fused_level_2, int d0, int d1) {
  // # of ports in bundle: 1
    // final_merged_2_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_2, d0, d1);
	set_at<0, 16>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_2_update_0_write
//	fused_level_2_fused_level_2_update_0_write0
inline void fused_level_2_fused_level_2_update_0_write_bundle_write(hw_uint<16>& fused_level_2_update_0_write, fused_level_2_cache& fused_level_2, int d0, int d1) {
	hw_uint<16> fused_level_2_fused_level_2_update_0_write0_res = fused_level_2_update_0_write.extract<0, 15>();
	fused_level_2_fused_level_2_update_0_write0_write(fused_level_2_fused_level_2_update_0_write0_res, fused_level_2, d0, d1);
}

#include "hw_classes.h"

struct fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 25
	// # of read delays: 26
	fifo<hw_uint<16>, 25> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(24 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_3_cache {
  fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_cache fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0;
};



inline void fused_level_3_fused_level_3_update_0_write0_write(hw_uint<16>& fused_level_3_fused_level_3_update_0_write0, fused_level_3_cache& fused_level_3, int d0, int d1) {
  fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.push(fused_level_3_fused_level_3_update_0_write0);
}

inline hw_uint<16> final_merged_2_rd0_select(fused_level_3_cache& fused_level_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 14 + 4d0, 60] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
  // Write schedule: { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 14 + 8d0, 56] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
  // DD fold: { final_merged_2_update_0[d0, d1] -> (24 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 47 and 0 < d1 <= 49 }
  auto value_fused_level_3_fused_level_3_update_0_write0 = fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0);
  return value_fused_level_3_fused_level_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<16> fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3_cache& fused_level_3, int d0, int d1) {
  // # of ports in bundle: 1
    // final_merged_2_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_3, d0, d1);
	set_at<0, 16>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_3_update_0_write
//	fused_level_3_fused_level_3_update_0_write0
inline void fused_level_3_fused_level_3_update_0_write_bundle_write(hw_uint<16>& fused_level_3_update_0_write, fused_level_3_cache& fused_level_3, int d0, int d1) {
	hw_uint<16> fused_level_3_fused_level_3_update_0_write0_res = fused_level_3_update_0_write.extract<0, 15>();
	fused_level_3_fused_level_3_update_0_write0_write(fused_level_3_fused_level_3_update_0_write0_res, fused_level_3, d0, d1);
}

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_cache {
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline hw_uint<16> bright_rd0_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_rd0_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
  // DD fold: {  }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// bright_update_0_read
//	bright_rd0
inline hw_uint<16> in_bright_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_rd0

	hw_uint<16> result;
	hw_uint<16> bright_rd0_res = bright_rd0_select(in, d0, d1);
	set_at<0, 16>(result, bright_rd0_res);
	return result;
}

// dark_update_0_read
//	dark_rd0
inline hw_uint<16> in_dark_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_rd0

	hw_uint<16> result;
	hw_uint<16> dark_rd0_res = dark_rd0_select(in, d0, d1);
	set_at<0, 16>(result, dark_rd0_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<16>& in_update_0_write, in_cache& in, int d0, int d1) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1);
}



// Operation logic
inline void dark_gauss_blur_3_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_gauss_blur_3
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(compute_result, dark_gauss_blur_3, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_2
	auto bright_weights_normed_gauss_blur_2_0_c__0_value = bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_2
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_laplace_diff_1_update_0(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, dark_weights_normed_laplace_us_1_cache& dark_weights_normed_laplace_us_1, dark_weights_normed_laplace_diff_1_cache& dark_weights_normed_laplace_diff_1, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_dark_weights_normed_laplace_diff_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_laplace_us_1
	auto dark_weights_normed_laplace_us_1_0_c__0_value = dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_diff_1_update_0_read_bundle_read(dark_weights_normed_laplace_us_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_weights_normed_gauss_ds_1_0_c__0_value, dark_weights_normed_laplace_us_1_0_c__0_value);
	// Produce: dark_weights_normed_laplace_diff_1
	dark_weights_normed_laplace_diff_1_dark_weights_normed_laplace_diff_1_update_0_write_bundle_write(compute_result, dark_weights_normed_laplace_diff_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_1_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_laplace_us_1
	dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(compute_result, dark_laplace_us_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_1(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_update_0(in_cache& in, bright_cache& bright, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_bright_update_0_read_bundle_read(in/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(in_0_c__0_value);
	// Produce: bright
	bright_bright_update_0_write_bundle_write(compute_result, bright, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_update_0(in_cache& in, dark_cache& dark, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_dark_update_0_read_bundle_read(in/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = scale_exposure_unrolled_1(in_0_c__0_value);
	// Produce: dark
	dark_dark_update_0_write_bundle_write(compute_result, dark, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_update_0(dark_cache& dark, dark_weights_cache& dark_weights, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_weights_update_0_read_bundle_read(dark/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weight_unrolled_1(dark_0_c__0_value);
	// Produce: dark_weights
	dark_weights_dark_weights_update_0_write_bundle_write(compute_result, dark_weights, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_update_0(bright_cache& bright, bright_weights_cache& bright_weights, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_weights_update_0_read_bundle_read(bright/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weight_unrolled_1(bright_0_c__0_value);
	// Produce: bright_weights
	bright_weights_bright_weights_update_0_write_bundle_write(compute_result, bright_weights, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_update_0(dark_weights_cache& dark_weights, bright_weights_cache& bright_weights, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_dark_weights_normed_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_normalize_weights_unrolled_1(dark_weights_0_c__0_value, bright_weights_0_c__0_value);
	// Produce: dark_weights_normed
	dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(compute_result, dark_weights_normed, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_update_0(bright_weights_cache& bright_weights, dark_weights_cache& dark_weights, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_bright_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_normalize_weights_unrolled_1(bright_weights_0_c__0_value, dark_weights_0_c__0_value);
	// Produce: bright_weights_normed
	bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(compute_result, bright_weights_normed, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed_cache& dark_weights_normed, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_1
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_1_update_0(dark_cache& dark, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_gauss_blur_1_update_0_read_bundle_read(dark/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_0_c__0_value);
	// Produce: dark_gauss_blur_1
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(compute_result, dark_gauss_blur_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_1_update_0(bright_cache& bright, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_gauss_blur_1_update_0_read_bundle_read(bright/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_0_c__0_value);
	// Produce: bright_gauss_blur_1
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(compute_result, bright_gauss_blur_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed_cache& bright_weights_normed, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_1
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_1
	auto dark_weights_normed_gauss_blur_1_0_c__0_value = dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_1
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_2
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_1_update_0(dark_gauss_blur_1_cache& dark_gauss_blur_1, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// Consume: dark_gauss_blur_1
	auto dark_gauss_blur_1_0_c__0_value = dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_1_0_c__0_value);
	// Produce: dark_gauss_ds_1
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(compute_result, dark_gauss_ds_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_3
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_3, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_3_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_gauss_blur_3
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(compute_result, bright_gauss_blur_3, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_2_update_0(bright_gauss_blur_2_cache& bright_gauss_blur_2, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// Consume: bright_gauss_blur_2
	auto bright_gauss_blur_2_0_c__0_value = bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_2_0_c__0_value);
	// Produce: bright_gauss_ds_2
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(compute_result, bright_gauss_ds_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_3
	auto dark_weights_normed_gauss_blur_3_0_c__0_value = dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_3
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_3, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_3_update_0(dark_gauss_blur_3_cache& dark_gauss_blur_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	// Consume: dark_gauss_blur_3
	auto dark_gauss_blur_3_0_c__0_value = dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_3_0_c__0_value);
	// Produce: dark_gauss_ds_3
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(compute_result, dark_gauss_ds_3, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_laplace_diff_0_update_0(dark_weights_normed_cache& dark_weights_normed, dark_weights_normed_laplace_us_0_cache& dark_weights_normed_laplace_us_0, dark_weights_normed_laplace_diff_0_cache& dark_weights_normed_laplace_diff_0, int d0, int d1) {
	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_dark_weights_normed_laplace_diff_0_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_laplace_us_0
	auto dark_weights_normed_laplace_us_0_0_c__0_value = dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_diff_0_update_0_read_bundle_read(dark_weights_normed_laplace_us_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_weights_normed_0_c__0_value, dark_weights_normed_laplace_us_0_0_c__0_value);
	// Produce: dark_weights_normed_laplace_diff_0
	dark_weights_normed_laplace_diff_0_dark_weights_normed_laplace_diff_0_update_0_write_bundle_write(compute_result, dark_weights_normed_laplace_diff_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_2_update_0(dark_gauss_ds_3_cache& dark_gauss_ds_3, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_3_0_c__0_value);
	// Produce: dark_laplace_us_2
	dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(compute_result, dark_laplace_us_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_0_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_laplace_us_0
	dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(compute_result, dark_laplace_us_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_2_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_2_cache& dark_laplace_us_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_2
	auto dark_laplace_us_2_0_c__0_value = dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_gauss_ds_2_0_c__0_value, dark_laplace_us_2_0_c__0_value);
	// Produce: dark_laplace_diff_2
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(compute_result, dark_laplace_diff_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_2_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_gauss_blur_2
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(compute_result, dark_gauss_blur_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_3
	auto bright_weights_normed_gauss_blur_3_0_c__0_value = bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_3
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_3, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_1_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_1_cache& dark_laplace_us_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_1
	auto dark_laplace_us_1_0_c__0_value = dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_gauss_ds_1_0_c__0_value, dark_laplace_us_1_0_c__0_value);
	// Produce: dark_laplace_diff_1
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(compute_result, dark_laplace_diff_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_laplace_diff_2_update_0(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, bright_weights_normed_laplace_us_2_cache& bright_weights_normed_laplace_us_2, bright_weights_normed_laplace_diff_2_cache& bright_weights_normed_laplace_diff_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_bright_weights_normed_laplace_diff_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_laplace_us_2
	auto bright_weights_normed_laplace_us_2_0_c__0_value = bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_diff_2_update_0_read_bundle_read(bright_weights_normed_laplace_us_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_weights_normed_gauss_ds_2_0_c__0_value, bright_weights_normed_laplace_us_2_0_c__0_value);
	// Produce: bright_weights_normed_laplace_diff_2
	bright_weights_normed_laplace_diff_2_bright_weights_normed_laplace_diff_2_update_0_write_bundle_write(compute_result, bright_weights_normed_laplace_diff_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_laplace_diff_1_update_0(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, bright_weights_normed_laplace_us_1_cache& bright_weights_normed_laplace_us_1, bright_weights_normed_laplace_diff_1_cache& bright_weights_normed_laplace_diff_1, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_bright_weights_normed_laplace_diff_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_laplace_us_1
	auto bright_weights_normed_laplace_us_1_0_c__0_value = bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_diff_1_update_0_read_bundle_read(bright_weights_normed_laplace_us_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_weights_normed_gauss_ds_1_0_c__0_value, bright_weights_normed_laplace_us_1_0_c__0_value);
	// Produce: bright_weights_normed_laplace_diff_1
	bright_weights_normed_laplace_diff_1_bright_weights_normed_laplace_diff_1_update_0_write_bundle_write(compute_result, bright_weights_normed_laplace_diff_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_laplace_diff_0_update_0(bright_weights_normed_cache& bright_weights_normed, bright_weights_normed_laplace_us_0_cache& bright_weights_normed_laplace_us_0, bright_weights_normed_laplace_diff_0_cache& bright_weights_normed_laplace_diff_0, int d0, int d1) {
	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_bright_weights_normed_laplace_diff_0_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_laplace_us_0
	auto bright_weights_normed_laplace_us_0_0_c__0_value = bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_diff_0_update_0_read_bundle_read(bright_weights_normed_laplace_us_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_weights_normed_0_c__0_value, bright_weights_normed_laplace_us_0_0_c__0_value);
	// Produce: bright_weights_normed_laplace_diff_0
	bright_weights_normed_laplace_diff_0_bright_weights_normed_laplace_diff_0_update_0_write_bundle_write(compute_result, bright_weights_normed_laplace_diff_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_2_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_2_cache& bright_laplace_us_2, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_2
	auto bright_laplace_us_2_0_c__0_value = bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_gauss_ds_2_0_c__0_value, bright_laplace_us_2_0_c__0_value);
	// Produce: bright_laplace_diff_2
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(compute_result, bright_laplace_diff_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_3_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, fused_level_3_cache& fused_level_3, int d0, int d1) {
	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_3
	auto bright_weights_normed_gauss_ds_3_0_c__0_value = bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_3
	auto dark_weights_normed_gauss_ds_3_0_c__0_value = dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weighted_merge_unrolled_1(bright_gauss_ds_3_0_c__0_value, dark_gauss_ds_3_0_c__0_value, bright_weights_normed_gauss_ds_3_0_c__0_value, dark_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: fused_level_3
	fused_level_3_fused_level_3_update_0_write_bundle_write(compute_result, fused_level_3, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void ef_cartoon_update_0(final_merged_0_cache& final_merged_0, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */ef_cartoon, int d0, int d1) {
	// Consume: final_merged_0
	auto final_merged_0_0_c__0_value = final_merged_0_ef_cartoon_update_0_read_bundle_read(final_merged_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(final_merged_0_0_c__0_value);
	// Produce: ef_cartoon
	ef_cartoon.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_2
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_1
	auto bright_weights_normed_gauss_blur_1_0_c__0_value = bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_1
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_1_update_0(bright_gauss_blur_1_cache& bright_gauss_blur_1, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// Consume: bright_gauss_blur_1
	auto bright_gauss_blur_1_0_c__0_value = bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_1_0_c__0_value);
	// Produce: bright_gauss_ds_1
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(compute_result, bright_gauss_ds_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_2_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_gauss_blur_2
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(compute_result, bright_gauss_blur_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_2
	auto dark_weights_normed_gauss_blur_2_0_c__0_value = dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_2
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_3
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_3, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_2_update_0(dark_gauss_blur_2_cache& dark_gauss_blur_2, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// Consume: dark_gauss_blur_2
	auto dark_gauss_blur_2_0_c__0_value = dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_2_0_c__0_value);
	// Produce: dark_gauss_ds_2
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(compute_result, dark_gauss_ds_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_3_update_0(bright_gauss_blur_3_cache& bright_gauss_blur_3, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	// Consume: bright_gauss_blur_3
	auto bright_gauss_blur_3_0_c__0_value = bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_3_0_c__0_value);
	// Produce: bright_gauss_ds_3
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(compute_result, bright_gauss_ds_3, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_laplace_us_2_update_0(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, dark_weights_normed_laplace_us_2_cache& dark_weights_normed_laplace_us_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_3
	auto dark_weights_normed_gauss_ds_3_0_c__0_value = dark_weights_normed_gauss_ds_3_dark_weights_normed_laplace_us_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: dark_weights_normed_laplace_us_2
	dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_us_2_update_0_write_bundle_write(compute_result, dark_weights_normed_laplace_us_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_laplace_us_1_update_0(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, dark_weights_normed_laplace_us_1_cache& dark_weights_normed_laplace_us_1, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_dark_weights_normed_laplace_us_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: dark_weights_normed_laplace_us_1
	dark_weights_normed_laplace_us_1_dark_weights_normed_laplace_us_1_update_0_write_bundle_write(compute_result, dark_weights_normed_laplace_us_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_laplace_us_0_update_0(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, dark_weights_normed_laplace_us_0_cache& dark_weights_normed_laplace_us_0, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_dark_weights_normed_laplace_us_0_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: dark_weights_normed_laplace_us_0
	dark_weights_normed_laplace_us_0_dark_weights_normed_laplace_us_0_update_0_write_bundle_write(compute_result, dark_weights_normed_laplace_us_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_laplace_diff_2_update_0(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, dark_weights_normed_laplace_us_2_cache& dark_weights_normed_laplace_us_2, dark_weights_normed_laplace_diff_2_cache& dark_weights_normed_laplace_diff_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_dark_weights_normed_laplace_diff_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_laplace_us_2
	auto dark_weights_normed_laplace_us_2_0_c__0_value = dark_weights_normed_laplace_us_2_dark_weights_normed_laplace_diff_2_update_0_read_bundle_read(dark_weights_normed_laplace_us_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_weights_normed_gauss_ds_2_0_c__0_value, dark_weights_normed_laplace_us_2_0_c__0_value);
	// Produce: dark_weights_normed_laplace_diff_2
	dark_weights_normed_laplace_diff_2_dark_weights_normed_laplace_diff_2_update_0_write_bundle_write(compute_result, dark_weights_normed_laplace_diff_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_0_update_0(dark_cache& dark, dark_laplace_us_0_cache& dark_laplace_us_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_laplace_diff_0_update_0_read_bundle_read(dark/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_0
	auto dark_laplace_us_0_0_c__0_value = dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_0_c__0_value, dark_laplace_us_0_0_c__0_value);
	// Produce: dark_laplace_diff_0
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(compute_result, dark_laplace_diff_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_laplace_us_2_update_0(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, bright_weights_normed_laplace_us_2_cache& bright_weights_normed_laplace_us_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_3
	auto bright_weights_normed_gauss_ds_3_0_c__0_value = bright_weights_normed_gauss_ds_3_bright_weights_normed_laplace_us_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: bright_weights_normed_laplace_us_2
	bright_weights_normed_laplace_us_2_bright_weights_normed_laplace_us_2_update_0_write_bundle_write(compute_result, bright_weights_normed_laplace_us_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_laplace_us_0_update_0(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, bright_weights_normed_laplace_us_0_cache& bright_weights_normed_laplace_us_0, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_bright_weights_normed_laplace_us_0_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: bright_weights_normed_laplace_us_0
	bright_weights_normed_laplace_us_0_bright_weights_normed_laplace_us_0_update_0_write_bundle_write(compute_result, bright_weights_normed_laplace_us_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_laplace_us_1_update_0(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, bright_weights_normed_laplace_us_1_cache& bright_weights_normed_laplace_us_1, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_bright_weights_normed_laplace_us_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: bright_weights_normed_laplace_us_1
	bright_weights_normed_laplace_us_1_bright_weights_normed_laplace_us_1_update_0_write_bundle_write(compute_result, bright_weights_normed_laplace_us_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_2_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_3_0_c__0_value);
	// Produce: bright_laplace_us_2
	bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(compute_result, bright_laplace_us_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_1_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_laplace_us_1
	bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(compute_result, bright_laplace_us_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_0_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_laplace_us_0
	bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(compute_result, bright_laplace_us_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_1_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_1_cache& bright_laplace_us_1, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_1
	auto bright_laplace_us_1_0_c__0_value = bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_gauss_ds_1_0_c__0_value, bright_laplace_us_1_0_c__0_value);
	// Produce: bright_laplace_diff_1
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(compute_result, bright_laplace_diff_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_0_update_0(bright_cache& bright, bright_laplace_us_0_cache& bright_laplace_us_0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_laplace_diff_0_update_0_read_bundle_read(bright/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_0
	auto bright_laplace_us_0_0_c__0_value = bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_0_c__0_value, bright_laplace_us_0_0_c__0_value);
	// Produce: bright_laplace_diff_0
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(compute_result, bright_laplace_diff_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_2_update_0(bright_laplace_diff_2_cache& bright_laplace_diff_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, bright_weights_normed_laplace_diff_2_cache& bright_weights_normed_laplace_diff_2, dark_weights_normed_laplace_diff_2_cache& dark_weights_normed_laplace_diff_2, fused_level_2_cache& fused_level_2, int d0, int d1) {
	// Consume: bright_laplace_diff_2
	auto bright_laplace_diff_2_0_c__0_value = bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_2
	auto dark_laplace_diff_2_0_c__0_value = dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_laplace_diff_2
	auto bright_weights_normed_laplace_diff_2_0_c__0_value = bright_weights_normed_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_laplace_diff_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_laplace_diff_2
	auto dark_weights_normed_laplace_diff_2_0_c__0_value = dark_weights_normed_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_laplace_diff_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weighted_merge_unrolled_1(bright_laplace_diff_2_0_c__0_value, dark_laplace_diff_2_0_c__0_value, bright_weights_normed_laplace_diff_2_0_c__0_value, dark_weights_normed_laplace_diff_2_0_c__0_value);
	// Produce: fused_level_2
	fused_level_2_fused_level_2_update_0_write_bundle_write(compute_result, fused_level_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_1_update_0(bright_laplace_diff_1_cache& bright_laplace_diff_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, bright_weights_normed_laplace_diff_1_cache& bright_weights_normed_laplace_diff_1, dark_weights_normed_laplace_diff_1_cache& dark_weights_normed_laplace_diff_1, fused_level_1_cache& fused_level_1, int d0, int d1) {
	// Consume: bright_laplace_diff_1
	auto bright_laplace_diff_1_0_c__0_value = bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_1
	auto dark_laplace_diff_1_0_c__0_value = dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_laplace_diff_1
	auto bright_weights_normed_laplace_diff_1_0_c__0_value = bright_weights_normed_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_laplace_diff_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_laplace_diff_1
	auto dark_weights_normed_laplace_diff_1_0_c__0_value = dark_weights_normed_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_laplace_diff_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weighted_merge_unrolled_1(bright_laplace_diff_1_0_c__0_value, dark_laplace_diff_1_0_c__0_value, bright_weights_normed_laplace_diff_1_0_c__0_value, dark_weights_normed_laplace_diff_1_0_c__0_value);
	// Produce: fused_level_1
	fused_level_1_fused_level_1_update_0_write_bundle_write(compute_result, fused_level_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_0_update_0(bright_laplace_diff_0_cache& bright_laplace_diff_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, bright_weights_normed_laplace_diff_0_cache& bright_weights_normed_laplace_diff_0, dark_weights_normed_laplace_diff_0_cache& dark_weights_normed_laplace_diff_0, fused_level_0_cache& fused_level_0, int d0, int d1) {
	// Consume: bright_laplace_diff_0
	auto bright_laplace_diff_0_0_c__0_value = bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_0
	auto dark_laplace_diff_0_0_c__0_value = dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_laplace_diff_0
	auto bright_weights_normed_laplace_diff_0_0_c__0_value = bright_weights_normed_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_weights_normed_laplace_diff_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_laplace_diff_0
	auto dark_weights_normed_laplace_diff_0_0_c__0_value = dark_weights_normed_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_weights_normed_laplace_diff_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = psef_weighted_merge_unrolled_1(bright_laplace_diff_0_0_c__0_value, dark_laplace_diff_0_0_c__0_value, bright_weights_normed_laplace_diff_0_0_c__0_value, dark_weights_normed_laplace_diff_0_0_c__0_value);
	// Produce: fused_level_0
	fused_level_0_fused_level_0_update_0_write_bundle_write(compute_result, fused_level_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_2_update_0(fused_level_3_cache& fused_level_3, fused_level_2_cache& fused_level_2, final_merged_2_cache& final_merged_2, int d0, int d1) {
	// Consume: fused_level_3
	auto fused_level_3_0_c__0_value = fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_2
	auto fused_level_2_0_c__0_value = fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = average_unrolled_1(fused_level_3_0_c__0_value, fused_level_2_0_c__0_value);
	// Produce: final_merged_2
	final_merged_2_final_merged_2_update_0_write_bundle_write(compute_result, final_merged_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_1_update_0(final_merged_2_cache& final_merged_2, fused_level_1_cache& fused_level_1, final_merged_1_cache& final_merged_1, int d0, int d1) {
	// Consume: final_merged_2
	auto final_merged_2_0_c__0_value = final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_1
	auto fused_level_1_0_c__0_value = fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = average_unrolled_1(final_merged_2_0_c__0_value, fused_level_1_0_c__0_value);
	// Produce: final_merged_1
	final_merged_1_final_merged_1_update_0_write_bundle_write(compute_result, final_merged_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_0_update_0(final_merged_1_cache& final_merged_1, fused_level_0_cache& fused_level_0, final_merged_0_cache& final_merged_0, int d0, int d1) {
	// Consume: final_merged_1
	auto final_merged_1_0_c__0_value = final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_0
	auto fused_level_0_0_c__0_value = fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = average_unrolled_1(final_merged_1_0_c__0_value, fused_level_0_0_c__0_value);
	// Produce: final_merged_0
	final_merged_0_final_merged_0_update_0_write_bundle_write(compute_result, final_merged_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void ef_cartoon_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */ef_cartoon, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("ef_cartoon_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  bright_cache bright;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_1_cache bright_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_2_cache bright_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_3_cache bright_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_1_cache bright_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_2_cache bright_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_3_cache bright_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_0_cache bright_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_1_cache bright_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_2_cache bright_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_0_cache bright_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_1_cache bright_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_2_cache bright_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_cache bright_weights;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_cache bright_weights_normed;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_1_cache bright_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_2_cache bright_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_3_cache bright_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_1_cache bright_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_2_cache bright_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_3_cache bright_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_laplace_diff_0_cache bright_weights_normed_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_laplace_diff_1_cache bright_weights_normed_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_laplace_diff_2_cache bright_weights_normed_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_laplace_us_0_cache bright_weights_normed_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_laplace_us_1_cache bright_weights_normed_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_laplace_us_2_cache bright_weights_normed_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_cache dark;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_1_cache dark_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_2_cache dark_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_3_cache dark_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_1_cache dark_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_2_cache dark_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_3_cache dark_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_0_cache dark_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_1_cache dark_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_2_cache dark_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_0_cache dark_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_1_cache dark_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_2_cache dark_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_cache dark_weights;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_cache dark_weights_normed;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_1_cache dark_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_2_cache dark_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_3_cache dark_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_1_cache dark_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_2_cache dark_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_3_cache dark_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_laplace_diff_0_cache dark_weights_normed_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_laplace_diff_1_cache dark_weights_normed_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_laplace_diff_2_cache dark_weights_normed_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_laplace_us_0_cache dark_weights_normed_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_laplace_us_1_cache dark_weights_normed_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_laplace_us_2_cache dark_weights_normed_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_0_cache final_merged_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_1_cache final_merged_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_2_cache final_merged_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_0_cache fused_level_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_1_cache fused_level_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_2_cache fused_level_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_3_cache fused_level_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // bright_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*11]
	    // bright_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*19]
	    // bright_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*27]
	    // bright_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*2 + 1*2,1*18]
	    // bright_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*4 + 1*6,1*26]
	    // bright_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*8 + 1*14,1*31]
	    // bright_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*55]
	    // bright_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*54]
	    // bright_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*53]
	    // bright_laplace_us_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*52]
	    // bright_laplace_us_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*51]
	    // bright_laplace_us_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*50]
	    // bright_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
	    // bright_weights_normed_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*10]
	    // bright_weights_normed_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*17]
	    // bright_weights_normed_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*25]
	    // bright_weights_normed_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*2 + 1*2,1*16]
	    // bright_weights_normed_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*4 + 1*6,1*24]
	    // bright_weights_normed_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*8 + 1*14,1*30]
	    // bright_weights_normed_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*49]
	    // bright_weights_normed_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*48]
	    // bright_weights_normed_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*47]
	    // bright_weights_normed_laplace_us_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*46]
	    // bright_weights_normed_laplace_us_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*45]
	    // bright_weights_normed_laplace_us_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*44]
	    // bright_weights_normed_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*7]
	    // bright_weights_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*5]
	    // dark_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*9]
	    // dark_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*15]
	    // dark_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*23]
	    // dark_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*2 + 1*2,1*14]
	    // dark_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*4 + 1*6,1*22]
	    // dark_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*8 + 1*14,1*29]
	    // dark_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*43]
	    // dark_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*42]
	    // dark_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*41]
	    // dark_laplace_us_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*40]
	    // dark_laplace_us_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*39]
	    // dark_laplace_us_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*38]
	    // dark_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // dark_weights_normed_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*8]
	    // dark_weights_normed_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*13]
	    // dark_weights_normed_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*21]
	    // dark_weights_normed_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*2 + 1*2,1*12]
	    // dark_weights_normed_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*4 + 1*6,1*20]
	    // dark_weights_normed_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*8 + 1*14,1*28]
	    // dark_weights_normed_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*37]
	    // dark_weights_normed_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*36]
	    // dark_weights_normed_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*35]
	    // dark_weights_normed_laplace_us_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*34]
	    // dark_weights_normed_laplace_us_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*33]
	    // dark_weights_normed_laplace_us_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*32]
	    // dark_weights_normed_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*6]
	    // dark_weights_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*4]
	    // ef_cartoon_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*14,1*63]
	    // final_merged_0_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*14,1*62]
	    // final_merged_1_update_0 -> [1*d1*1*2 + 1*14,1*d0*1*2 + 1*14,1*61]
	    // final_merged_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*60]
	    // fused_level_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*59]
	    // fused_level_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*2 + 1*6,1*58]
	    // fused_level_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*4 + 1*14,1*57]
	    // fused_level_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*8 + 1*14,1*56]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = 0; c0 <= 213; c0++) {
	  for (int c1 = 0; c1 <= 213; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	in_update_0(in_off_chip, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	dark_update_0(in, dark, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	bright_update_0(in, bright, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	dark_weights_update_0(dark, dark_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	bright_weights_update_0(bright, bright_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	dark_weights_normed_update_0(dark_weights, bright_weights, dark_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	bright_weights_normed_update_0(bright_weights, dark_weights, bright_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 1 == 0)) {
	dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed, dark_weights_normed_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 1 == 0)) {
	dark_gauss_blur_1_update_0(dark, dark_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 1 == 0)) {
	bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed, bright_weights_normed_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 1 == 0)) {
	bright_gauss_blur_1_update_0(bright, bright_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 2 == 0)) {
	dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 2 == 0)) {
	dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 2 == 0)) {
	dark_gauss_ds_1_update_0(dark_gauss_blur_1, dark_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 2 == 0)) {
	dark_gauss_blur_2_update_0(dark_gauss_ds_1, dark_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 2 == 0)) {
	bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 2 == 0)) {
	bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 2 == 0)) {
	bright_gauss_ds_1_update_0(bright_gauss_blur_1, bright_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 2 == 0)) {
	bright_gauss_blur_2_update_0(bright_gauss_ds_1, bright_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 4 == 0)) {
	dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 4 == 0)) {
	dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 4 == 0)) {
	dark_gauss_ds_2_update_0(dark_gauss_blur_2, dark_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 4 == 0)) {
	dark_gauss_blur_3_update_0(dark_gauss_ds_2, dark_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 4 == 0)) {
	bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 4 == 0)) {
	bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 4 == 0)) {
	bright_gauss_ds_2_update_0(bright_gauss_blur_2, bright_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 4 == 0)) {
	bright_gauss_blur_3_update_0(bright_gauss_ds_2, bright_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 8 == 0)) {
	dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 8 == 0)) {
	dark_gauss_ds_3_update_0(dark_gauss_blur_3, dark_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 8 == 0)) {
	bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 8 == 0)) {
	bright_gauss_ds_3_update_0(bright_gauss_blur_3, bright_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	dark_weights_normed_laplace_us_2_update_0(dark_weights_normed_gauss_ds_3, dark_weights_normed_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 204) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 204) && ((c0 - 6) % 2 == 0)) {
	dark_weights_normed_laplace_us_1_update_0(dark_weights_normed_gauss_ds_2, dark_weights_normed_laplace_us_1, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 201) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 201) && ((c0 - 2) % 1 == 0)) {
	dark_weights_normed_laplace_us_0_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_laplace_us_0, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	dark_weights_normed_laplace_diff_2_update_0(dark_weights_normed_gauss_ds_2, dark_weights_normed_laplace_us_2, dark_weights_normed_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 204) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 204) && ((c0 - 6) % 2 == 0)) {
	dark_weights_normed_laplace_diff_1_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_laplace_us_1, dark_weights_normed_laplace_diff_1, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 201) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 201) && ((c0 - 2) % 1 == 0)) {
	dark_weights_normed_laplace_diff_0_update_0(dark_weights_normed, dark_weights_normed_laplace_us_0, dark_weights_normed_laplace_diff_0, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	dark_laplace_us_2_update_0(dark_gauss_ds_3, dark_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 204) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 204) && ((c0 - 6) % 2 == 0)) {
	dark_laplace_us_1_update_0(dark_gauss_ds_2, dark_laplace_us_1, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 201) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 201) && ((c0 - 2) % 1 == 0)) {
	dark_laplace_us_0_update_0(dark_gauss_ds_1, dark_laplace_us_0, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	dark_laplace_diff_2_update_0(dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 204) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 204) && ((c0 - 6) % 2 == 0)) {
	dark_laplace_diff_1_update_0(dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 201) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 201) && ((c0 - 2) % 1 == 0)) {
	dark_laplace_diff_0_update_0(dark, dark_laplace_us_0, dark_laplace_diff_0, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	bright_weights_normed_laplace_us_2_update_0(bright_weights_normed_gauss_ds_3, bright_weights_normed_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 204) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 204) && ((c0 - 6) % 2 == 0)) {
	bright_weights_normed_laplace_us_1_update_0(bright_weights_normed_gauss_ds_2, bright_weights_normed_laplace_us_1, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 201) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 201) && ((c0 - 2) % 1 == 0)) {
	bright_weights_normed_laplace_us_0_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_laplace_us_0, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	bright_weights_normed_laplace_diff_2_update_0(bright_weights_normed_gauss_ds_2, bright_weights_normed_laplace_us_2, bright_weights_normed_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 204) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 204) && ((c0 - 6) % 2 == 0)) {
	bright_weights_normed_laplace_diff_1_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_laplace_us_1, bright_weights_normed_laplace_diff_1, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 201) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 201) && ((c0 - 2) % 1 == 0)) {
	bright_weights_normed_laplace_diff_0_update_0(bright_weights_normed, bright_weights_normed_laplace_us_0, bright_weights_normed_laplace_diff_0, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	bright_laplace_us_2_update_0(bright_gauss_ds_3, bright_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 204) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 204) && ((c0 - 6) % 2 == 0)) {
	bright_laplace_us_1_update_0(bright_gauss_ds_2, bright_laplace_us_1, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 201) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 201) && ((c0 - 2) % 1 == 0)) {
	bright_laplace_us_0_update_0(bright_gauss_ds_1, bright_laplace_us_0, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	bright_laplace_diff_2_update_0(bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 204) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 204) && ((c0 - 6) % 2 == 0)) {
	bright_laplace_diff_1_update_0(bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 201) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 201) && ((c0 - 2) % 1 == 0)) {
	bright_laplace_diff_0_update_0(bright, bright_laplace_us_0, bright_laplace_diff_0, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 8 == 0)) {
	fused_level_3_update_0(bright_gauss_ds_3, dark_gauss_ds_3, bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3, fused_level_3, (c1 - 14) / 8, (c0 - 14) / 8);
	    }
	
	    if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	fused_level_2_update_0(bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_laplace_diff_2, dark_weights_normed_laplace_diff_2, fused_level_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((6 <= c1 && c1 <= 204) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 204) && ((c0 - 6) % 2 == 0)) {
	fused_level_1_update_0(bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_laplace_diff_1, dark_weights_normed_laplace_diff_1, fused_level_1, (c1 - 6) / 2, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 201) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 201) && ((c0 - 2) % 1 == 0)) {
	fused_level_0_update_0(bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed_laplace_diff_0, dark_weights_normed_laplace_diff_0, fused_level_0, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	final_merged_2_update_0(fused_level_3, fused_level_2, final_merged_2, (c1 - 14) / 4, (c0 - 14) / 4);
	    }
	
	    if ((14 <= c1 && c1 <= 212) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 212) && ((c0 - 14) % 2 == 0)) {
	final_merged_1_update_0(final_merged_2, fused_level_1, final_merged_1, (c1 - 14) / 2, (c0 - 14) / 2);
	    }
	
	    if ((14 <= c1 && c1 <= 213) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 213) && ((c0 - 14) % 1 == 0)) {
	final_merged_0_update_0(final_merged_1, fused_level_0, final_merged_0, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	    if ((14 <= c1 && c1 <= 213) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 213) && ((c0 - 14) % 1 == 0)) {
	ef_cartoon_update_0(final_merged_0, ef_cartoon, (c1 - 14) / 1, (c0 - 14) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void ef_cartoon_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */ef_cartoon) {

  ef_cartoon_opt(in_off_chip, ef_cartoon, 1);
}
#ifdef __VIVADO_SYNTH__
#include "ef_cartoon_opt.h"

const int ef_cartoon_update_0_write_num_transfers = 40000;
const int in_update_0_read_num_transfers = 42849;


extern "C" {

static void read_in_update_0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = in_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_ef_cartoon_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = ef_cartoon_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void ef_cartoon_opt_accel(hw_uint<16>* in_update_0_read, hw_uint<16>* ef_cartoon_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = ef_cartoon_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = ef_cartoon_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > in_update_0_read_channel;
  static HWStream<hw_uint<16> > ef_cartoon_update_0_write_channel;

  read_in_update_0_read(in_update_0_read, in_update_0_read_channel, size);

  ef_cartoon_opt(in_update_0_read_channel, ef_cartoon_update_0_write_channel, size);

  write_ef_cartoon_update_0_write(ef_cartoon_update_0_write, ef_cartoon_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

