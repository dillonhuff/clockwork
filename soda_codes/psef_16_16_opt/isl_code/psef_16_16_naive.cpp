#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "psef_16_16_naive_compute_units.h"

#include "hw_classes.h"

struct bright_bright_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 49
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 20> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 20> f11;
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

	inline hw_uint<16> peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_23() {
		return f6;
	}

	inline hw_uint<16> peek_24() {
		return f8;
	}

	inline hw_uint<16> peek_25() {
		return f10;
	}

	inline hw_uint<16> peek_45() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_46() {
		return f12;
	}

	inline hw_uint<16> peek_47() {
		return f14;
	}

	inline hw_uint<16> peek_48() {
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
    // cap: 1 reading from capacity: 20
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
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
    // cap: 1 reading from capacity: 20
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
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

struct bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 529
	// # of read delays: 362
	fifo<hw_uint<16>, 529> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(528 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_cache {
  bright_bright_update_0_write0_merged_banks_10_cache bright_bright_update_0_write0_merged_banks_10;
  bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_cache bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0;
};



inline void bright_bright_update_0_write0_write(hw_uint<16>& bright_bright_update_0_write0, bright_cache& bright, int d0, int d1) {
  bright.bright_bright_update_0_write0_merged_banks_10.push(bright_bright_update_0_write0);
  bright.bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0.push(bright_bright_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_1_rd0_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd0 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 48 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_48();
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
  // bright_gauss_blur_1_rd1 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 25 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_25();
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
  // bright_gauss_blur_1_rd2 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_2();
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
  // bright_gauss_blur_1_rd3 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 47 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_47();
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
  // bright_gauss_blur_1_rd4 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 24 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_24();
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
  // bright_gauss_blur_1_rd5 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_1();
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
  // bright_gauss_blur_1_rd6 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 46 : 0 <= d0 <= 19 and 0 <= d1 <= 20; bright_gauss_blur_1_update_0[d0, d1] -> (26 + d0) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_46();
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
  // bright_gauss_blur_1_rd7 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 23 : 0 <= d0 <= 19 and 0 <= d1 <= 20; bright_gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_23();
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
  // bright_gauss_blur_1_rd8 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_0();
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
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { bright_laplace_diff_0_update_0[i0, i1] -> [5, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_laplace_diff_0_update_0[d0, d1] -> ((528 - d0) - 23 * d1) : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0.peek(/* one reader or all rams */ ((528 - d0) - 23 * d1));
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
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { bright_weights_update_0[i0, i1] -> [1, i1, i0, 5, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_0();
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

struct bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0_cache {
	// RAM Box: {[0, 20], [0, 20]}
	// Capacity: 441
	// # of read delays: 440
	fifo<hw_uint<16>, 441> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(440 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_blur_1_cache {
  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0_cache bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0;
};



inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0.push(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0);
}

inline hw_uint<16> bright_gauss_ds_1_rd0_select(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_1_rd0 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // Read schedule : { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // Write schedule: { bright_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 2, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // DD fold: { bright_gauss_ds_1_update_0[d0, d1] -> ((440 - 2 * d0) - 42 * d1) : 0 <= d0 <= 9 and 0 <= d1 <= 9; bright_gauss_ds_1_update_0[d0, d1] -> (420 - 42 * d1) : d0 = 10 and 0 <= d1 <= 9; bright_gauss_ds_1_update_0[d0, d1] -> (20 - 2 * d0) : d1 = 10 and 0 <= d0 <= 9 }
  auto value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0 = bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0.peek(/* one reader or all rams */ (-10 + d1 == 0 && 9 - d0 >= 0) ? ((20 - 2 * d0)) : (-10 + d0 == 0 && 9 - d1 >= 0) ? ((420 - 42 * d1)) : (9 - d1 >= 0 && 9 - d0 >= 0) ? (((440 - 2 * d0) - 42 * d1)) : 0);
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
	// RAM Box: {[0, 8], [0, 8]}
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
  // bright_gauss_ds_2_rd0 read pattern: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // Read schedule : { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // Write schedule: { bright_gauss_blur_2_update_0[i0, i1] -> [2, 1, 2 + i1, 2 + i0, 1, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
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

struct bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 2], [0, 2]}
	// Capacity: 9
	// # of read delays: 8
	fifo<hw_uint<16>, 9> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(8 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_blur_3_cache {
  bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0_cache bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0;
};



inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(hw_uint<16>& bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
  bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0.push(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> bright_gauss_ds_3_rd0_select(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_3_rd0 read pattern: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Read schedule : { bright_gauss_ds_3_update_0[i0, i1] -> [4, 0, 0, 2, 1, i1, i0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // Write schedule: { bright_gauss_blur_3_update_0[i0, i1] -> [4, 0, 0, 2, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // DD fold: { bright_gauss_ds_3_update_0[d0, d1] -> 8 : d0 = 0 and d1 = 0; bright_gauss_ds_3_update_0[d0, d1] -> 6 : d0 = 1 and d1 = 0; bright_gauss_ds_3_update_0[d0, d1] -> 2 : d0 = 0 and d1 = 1 }
  auto value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0 = bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0.peek(/* one reader or all rams */ (-1 + d1 == 0 && d0 == 0) ? (2) : (d1 == 0 && -1 + d0 == 0) ? (6) : (d1 == 0 && d0 == 0) ? (8) : 0);
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

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 25
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 8> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 8> f11;
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

	inline hw_uint<16> peek_10() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_11() {
		return f6;
	}

	inline hw_uint<16> peek_12() {
		return f8;
	}

	inline hw_uint<16> peek_13() {
		return f10;
	}

	inline hw_uint<16> peek_21() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_22() {
		return f12;
	}

	inline hw_uint<16> peek_23() {
		return f14;
	}

	inline hw_uint<16> peek_24() {
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
    // cap: 1 reading from capacity: 8
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 8 reading from capacity: 1
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
    // cap: 1 reading from capacity: 8
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 8 reading from capacity: 1
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

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 121
	// # of read delays: 86
	fifo<hw_uint<16>, 121> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 121
	// # of read delays: 92
	fifo<hw_uint<16>, 121> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_cache {
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0;
};



inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_2_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd0 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [2, 1, 2 + i1, 2 + i0, 1, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 24 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_24();
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
  // bright_gauss_blur_2_rd1 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [2, 1, 2 + i1, 2 + i0, 1, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 13 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_13();
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
  // bright_gauss_blur_2_rd2 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [2, 1, 2 + i1, 2 + i0, 1, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
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
  // bright_gauss_blur_2_rd3 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [2, 1, 2 + i1, 2 + i0, 1, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 23 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_23();
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
  // bright_gauss_blur_2_rd4 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [2, 1, 2 + i1, 2 + i0, 1, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 12 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_12();
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
  // bright_gauss_blur_2_rd5 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [2, 1, 2 + i1, 2 + i0, 1, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
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
  // bright_gauss_blur_2_rd6 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [2, 1, 2 + i1, 2 + i0, 1, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 22 : 0 <= d0 <= 7 and 0 <= d1 <= 8; bright_gauss_blur_2_update_0[d0, d1] -> (14 + d0) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_22();
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
  // bright_gauss_blur_2_rd7 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [2, 1, 2 + i1, 2 + i0, 1, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 11 : 0 <= d0 <= 7 and 0 <= d1 <= 8; bright_gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_11();
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
  // bright_gauss_blur_2_rd8 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [2, 1, 2 + i1, 2 + i0, 1, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: {  }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
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
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { bright_laplace_diff_1_update_0[i0, i1] -> [3, 0, i1, i0, 1, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_laplace_diff_1_update_0[d0, d1] -> ((120 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0.peek(/* one reader or all rams */ ((120 - d0) - 11 * d1));
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
  // bright_laplace_us_0_rd0 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[o0, o1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[i0, i1] -> [5, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_laplace_us_0_update_0[d0, d1] -> ((120 - floor((d0)/2)) - 11 * floor((d1)/2)) : 0 <= d0 <= 15 and 2 <= d1 <= 15; bright_laplace_us_0_update_0[d0, d1] -> (120 - floor((d0)/2)) : 0 <= d0 <= 15 and 0 <= d1 <= 1 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.peek(/* one reader or all rams */ (1 - d1 >= 0) ? ((120 - floord(d0, 2))) : (-2 + d1 >= 0) ? (((120 - floord(d0, 2)) - 11 * floord(d1, 2))) : 0);
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

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 14
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

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd1_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 20
	// # of read delays: 14
	fifo<hw_uint<16>, 20> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(19 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd2_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 14
	fifo<hw_uint<16>, 15> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(14 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd3_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 24
	// # of read delays: 14
	fifo<hw_uint<16>, 24> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(23 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd4_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 19
	// # of read delays: 14
	fifo<hw_uint<16>, 19> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(18 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd5_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 14
	// # of read delays: 14
	fifo<hw_uint<16>, 14> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(13 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd6_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 23
	// # of read delays: 14
	fifo<hw_uint<16>, 23> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(22 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd7_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 18
	// # of read delays: 14
	fifo<hw_uint<16>, 18> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(17 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd8_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 13
	fifo<hw_uint<16>, 13> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 20
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

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 23
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

struct bright_gauss_ds_2_cache {
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd1_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd1;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd2_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd2;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd3_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd3;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd4_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd4;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd5_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd5;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd6_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd6;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd7_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd7;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd8_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd8;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0;
};



inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd1.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd2.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd3.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd4.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd5.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd6.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd7.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd8.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_3_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd0 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [4, 0, 0, 2, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> ((24 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd0.peek(/* one reader or all rams */ ((24 - d0) - 5 * d1));
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
  // bright_gauss_blur_3_rd1 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [4, 0, 0, 2, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> ((19 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd1.peek(/* one reader or all rams */ ((19 - d0) - 5 * d1));
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
  // bright_gauss_blur_3_rd2 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [4, 0, 0, 2, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> ((14 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 1; bright_gauss_blur_3_update_0[d0, d1] -> (4 - d0) : d1 = 2 and 0 <= d0 <= 2 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd2.peek(/* one reader or all rams */ (-2 + d1 == 0) ? ((4 - d0)) : (1 - d1 >= 0) ? (((14 - d0) - 5 * d1)) : 0);
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
  // bright_gauss_blur_3_rd3 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [4, 0, 0, 2, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> ((23 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd3.peek(/* one reader or all rams */ ((23 - d0) - 5 * d1));
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
  // bright_gauss_blur_3_rd4 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [4, 0, 0, 2, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> ((18 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd4.peek(/* one reader or all rams */ ((18 - d0) - 5 * d1));
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
  // bright_gauss_blur_3_rd5 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [4, 0, 0, 2, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> ((13 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 1; bright_gauss_blur_3_update_0[d0, d1] -> (3 - d0) : d1 = 2 and 0 <= d0 <= 2 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd5.peek(/* one reader or all rams */ (-2 + d1 == 0) ? ((3 - d0)) : (1 - d1 >= 0) ? (((13 - d0) - 5 * d1)) : 0);
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
  // bright_gauss_blur_3_rd6 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [4, 0, 0, 2, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> ((22 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 2; bright_gauss_blur_3_update_0[d0, d1] -> (20 - 5 * d1) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd6.peek(/* one reader or all rams */ (-2 + d0 == 0) ? ((20 - 5 * d1)) : (1 - d0 >= 0) ? (((22 - d0) - 5 * d1)) : 0);
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
  // bright_gauss_blur_3_rd7 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [4, 0, 0, 2, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> ((17 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 2; bright_gauss_blur_3_update_0[d0, d1] -> (15 - 5 * d1) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd7.peek(/* one reader or all rams */ (-2 + d0 == 0) ? ((15 - 5 * d1)) : (1 - d0 >= 0) ? (((17 - d0) - 5 * d1)) : 0);
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
  // bright_gauss_blur_3_rd8 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [4, 0, 0, 2, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> ((12 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 1; bright_gauss_blur_3_update_0[d0, d1] -> (10 - 5 * d1) : d0 = 2 and 0 <= d1 <= 1; bright_gauss_blur_3_update_0[d0, d1] -> (2 - d0) : d1 = 2 and 0 <= d0 <= 1 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_gauss_blur_3_rd8.peek(/* one reader or all rams */ (-2 + d1 == 0 && 1 - d0 >= 0) ? ((2 - d0)) : (-2 + d0 == 0 && 1 - d1 >= 0) ? ((10 - 5 * d1)) : (1 - d1 >= 0 && 1 - d0 >= 0) ? (((12 - d0) - 5 * d1)) : 0);
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
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { bright_laplace_diff_2_update_0[i0, i1] -> [4, 0, 0, 2, 3, i1, i0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_laplace_diff_2_update_0[d0, d1] -> ((24 - d0) - 5 * d1) : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* one reader or all rams */ ((24 - d0) - 5 * d1));
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
  // bright_laplace_us_1_rd0 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[o0, o1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_1_update_0[i0, i1] -> [3, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [2, 1, 2 + 2i1, 2 + 2i0, 2, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_laplace_us_1_update_0[d0, d1] -> ((24 - floor((d0)/2)) - 5 * floor((d1)/2)) : 0 <= d0 <= 7 and 2 <= d1 <= 7; bright_laplace_us_1_update_0[d0, d1] -> (24 - floor((d0)/2)) : 0 <= d0 <= 7 and 0 <= d1 <= 1 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.peek(/* one reader or all rams */ (1 - d1 >= 0) ? ((24 - floord(d0, 2))) : (-2 + d1 >= 0) ? (((24 - floord(d0, 2)) - 5 * floord(d1, 2))) : 0);
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
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 4
	// # of read delays: 4
	fifo<hw_uint<16>, 4> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 4
	// # of read delays: 4
	fifo<hw_uint<16>, 4> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_3_cache {
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0;
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> bright_laplace_us_2_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_2_rd0 read pattern: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_2_update_0[i0, i1] -> [4, 0, 0, 2, 2, i1, i0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { bright_gauss_ds_3_update_0[i0, i1] -> [4, 0, 0, 2, 1, i1, i0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // DD fold: { bright_laplace_us_2_update_0[d0, d1] -> 1 : d1 = 3 and 0 <= d0 <= 1; bright_laplace_us_2_update_0[d0, d1] -> 3 : 0 <= d0 <= 1 and 0 <= d1 <= 1; bright_laplace_us_2_update_0[d0, d1] -> 1 : d1 = 2 and 0 <= d0 <= 1; bright_laplace_us_2_update_0[d0, d1] -> 2 : 2 <= d0 <= 3 and 0 <= d1 <= 1 }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.peek(/* one reader or all rams */ (-2 + d1 >= 0 && 1 - d0 >= 0) ? (1) : (-2 + d0 >= 0 && 1 - d1 >= 0) ? (2) : (1 - d1 >= 0 && 1 - d0 >= 0) ? (3) : 0);
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
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Read schedule : { fused_level_3_update_0[i0, i1] -> [4, 0, 3, i1, i0, 0, 0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // Write schedule: { bright_gauss_ds_3_update_0[i0, i1] -> [4, 0, 0, 2, 1, i1, i0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // DD fold: { fused_level_3_update_0[d0, d1] -> 3 : d0 = 0 and d1 = 0; fused_level_3_update_0[d0, d1] -> 2 : d0 = 1 and d1 = 0; fused_level_3_update_0[d0, d1] -> 1 : d0 = 0 and d1 = 1 }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ (-1 + d1 == 0 && d0 == 0) ? (1) : (d1 == 0 && -1 + d0 == 0) ? (2) : (d1 == 0 && d0 == 0) ? (3) : 0);
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
	// RAM Box: {[0, 15], [0, 15]}
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
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { fused_level_0_update_0[i0, i1] -> [5, i1, i0, 2, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { bright_laplace_diff_0_update_0[i0, i1] -> [5, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
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

struct bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_diff_1_cache {
  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0;
};



inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(hw_uint<16>& bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.push(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0);
}

inline hw_uint<16> fused_level_1_rd0_select(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { fused_level_1_update_0[i0, i1] -> [4, 0, 0, 0, i1, i0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { bright_laplace_diff_1_update_0[i0, i1] -> [3, 0, i1, i0, 1, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // DD fold: { fused_level_1_update_0[d0, d1] -> ((63 - d0) - 8 * d1) : 0 <= d0 <= 6 and 0 <= d1 <= 6; fused_level_1_update_0[d0, d1] -> (56 - 8 * d1) : d0 = 7 and 0 <= d1 <= 6; fused_level_1_update_0[d0, d1] -> (7 - d0) : d1 = 7 and 0 <= d0 <= 6 }
  auto value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0 = bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ (-7 + d1 == 0 && 6 - d0 >= 0) ? ((7 - d0)) : (-7 + d0 == 0 && 6 - d1 >= 0) ? ((56 - 8 * d1)) : (6 - d1 >= 0 && 6 - d0 >= 0) ? (((63 - d0) - 8 * d1)) : 0);
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

struct bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 16
	// # of read delays: 16
	fifo<hw_uint<16>, 16> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_diff_2_cache {
  bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0;
};



inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(hw_uint<16>& bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
  bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.push(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0);
}

inline hw_uint<16> fused_level_2_rd0_select(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { fused_level_2_update_0[i0, i1] -> [4, 0, 1, i1, i0, 0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { bright_laplace_diff_2_update_0[i0, i1] -> [4, 0, 0, 2, 3, i1, i0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // DD fold: { fused_level_2_update_0[d0, d1] -> ((15 - d0) - 4 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2; fused_level_2_update_0[d0, d1] -> (12 - 4 * d1) : d0 = 3 and 0 <= d1 <= 2; fused_level_2_update_0[d0, d1] -> (3 - d0) : d1 = 3 and 0 <= d0 <= 2 }
  auto value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0 = bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (-3 + d1 == 0 && 2 - d0 >= 0) ? ((3 - d0)) : (-3 + d0 == 0 && 2 - d1 >= 0) ? ((12 - 4 * d1)) : (2 - d1 >= 0 && 2 - d0 >= 0) ? (((15 - d0) - 4 * d1)) : 0);
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
	// RAM Box: {[0, 15], [0, 15]}
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
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { bright_laplace_diff_0_update_0[i0, i1] -> [5, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { bright_laplace_us_0_update_0[i0, i1] -> [5, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
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
	// RAM Box: {[0, 7], [0, 7]}
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
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { bright_laplace_diff_1_update_0[i0, i1] -> [3, 0, i1, i0, 1, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { bright_laplace_us_1_update_0[i0, i1] -> [3, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
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

struct bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 16
	// # of read delays: 16
	fifo<hw_uint<16>, 16> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_us_2_cache {
  bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0;
};



inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(hw_uint<16>& bright_laplace_us_2_bright_laplace_us_2_update_0_write0, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
  bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0.push(bright_laplace_us_2_bright_laplace_us_2_update_0_write0);
}

inline hw_uint<16> bright_laplace_diff_2_rd0_select(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { bright_laplace_diff_2_update_0[i0, i1] -> [4, 0, 0, 2, 3, i1, i0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { bright_laplace_us_2_update_0[i0, i1] -> [4, 0, 0, 2, 2, i1, i0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // DD fold: { bright_laplace_diff_2_update_0[d0, d1] -> ((15 - d0) - 4 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2; bright_laplace_diff_2_update_0[d0, d1] -> (12 - 4 * d1) : d0 = 3 and 0 <= d1 <= 2; bright_laplace_diff_2_update_0[d0, d1] -> (3 - d0) : d1 = 3 and 0 <= d0 <= 2 }
  auto value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0 = bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-3 + d1 == 0 && 2 - d0 >= 0) ? ((3 - d0)) : (-3 + d0 == 0 && 2 - d1 >= 0) ? ((12 - 4 * d1)) : (2 - d1 >= 0 && 2 - d0 >= 0) ? (((15 - d0) - 4 * d1)) : 0);
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
	// RAM Box: {[0, 22], [0, 22]}
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
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { bright_weights_update_0[i0, i1] -> [1, i1, i0, 5, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> weight_sums_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { weight_sums_update_0[i0, i1] -> [1, i1, i0, 6, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { bright_weights_update_0[i0, i1] -> [1, i1, i0, 5, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
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

// weight_sums_update_0_read
//	weight_sums_rd0
inline hw_uint<16> bright_weights_weight_sums_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1) {
  // # of ports in bundle: 1
    // weight_sums_rd0

	hw_uint<16> result;
	hw_uint<16> weight_sums_rd0_res = weight_sums_rd0_select(bright_weights, d0, d1);
	set_at<0, 16>(result, weight_sums_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 529
	// # of read delays: 482
	fifo<hw_uint<16>, 529> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(528 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd1_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 506
	// # of read delays: 482
	fifo<hw_uint<16>, 506> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(505 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd2_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 483
	// # of read delays: 482
	fifo<hw_uint<16>, 483> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(482 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd3_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 528
	// # of read delays: 482
	fifo<hw_uint<16>, 528> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(527 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd4_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 505
	// # of read delays: 482
	fifo<hw_uint<16>, 505> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(504 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd5_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 482
	// # of read delays: 482
	fifo<hw_uint<16>, 482> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(481 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd6_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 527
	// # of read delays: 482
	fifo<hw_uint<16>, 527> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(526 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd7_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 504
	// # of read delays: 482
	fifo<hw_uint<16>, 504> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(503 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd8_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 481
	// # of read delays: 481
	fifo<hw_uint<16>, 481> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(480 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 529
	// # of read delays: 362
	fifo<hw_uint<16>, 529> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(528 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_cache {
  bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd0_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd0;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd1_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd1;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd2_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd2;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd3_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd3;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd4_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd4;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd5_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd5;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd6_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd6;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd7_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd7;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd8_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd8;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0;
};



inline void bright_weights_normed_bright_weights_normed_update_0_write0_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write0, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd0.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd1.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd2.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd3.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd4.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd5.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd6.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd7.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd8.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0.push(bright_weights_normed_bright_weights_normed_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd0 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> ((528 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd0.peek(/* one reader or all rams */ ((528 - d0) - 23 * d1));
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
  // bright_weights_normed_gauss_blur_1_rd1 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> ((505 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd1.peek(/* one reader or all rams */ ((505 - d0) - 23 * d1));
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
  // bright_weights_normed_gauss_blur_1_rd2 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> ((482 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 19; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (22 - d0) : d1 = 20 and 0 <= d0 <= 20 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd2.peek(/* one reader or all rams */ (-20 + d1 == 0) ? ((22 - d0)) : (19 - d1 >= 0) ? (((482 - d0) - 23 * d1)) : 0);
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
  // bright_weights_normed_gauss_blur_1_rd3 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> ((527 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd3.peek(/* one reader or all rams */ ((527 - d0) - 23 * d1));
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
  // bright_weights_normed_gauss_blur_1_rd4 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> ((504 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd4.peek(/* one reader or all rams */ ((504 - d0) - 23 * d1));
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
  // bright_weights_normed_gauss_blur_1_rd5 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> ((481 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 19; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (21 - d0) : d1 = 20 and 0 <= d0 <= 20 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd5.peek(/* one reader or all rams */ (-20 + d1 == 0) ? ((21 - d0)) : (19 - d1 >= 0) ? (((481 - d0) - 23 * d1)) : 0);
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
  // bright_weights_normed_gauss_blur_1_rd6 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> ((526 - d0) - 23 * d1) : 0 <= d0 <= 19 and 0 <= d1 <= 20; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (506 - 23 * d1) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd6.peek(/* one reader or all rams */ (-20 + d0 == 0) ? ((506 - 23 * d1)) : (19 - d0 >= 0) ? (((526 - d0) - 23 * d1)) : 0);
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
  // bright_weights_normed_gauss_blur_1_rd7 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> ((503 - d0) - 23 * d1) : 0 <= d0 <= 19 and 0 <= d1 <= 20; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (483 - 23 * d1) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd7.peek(/* one reader or all rams */ (-20 + d0 == 0) ? ((483 - 23 * d1)) : (19 - d0 >= 0) ? (((503 - d0) - 23 * d1)) : 0);
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
  // bright_weights_normed_gauss_blur_1_rd8 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> ((480 - d0) - 23 * d1) : 0 <= d0 <= 19 and 0 <= d1 <= 19; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (460 - 23 * d1) : d0 = 20 and 0 <= d1 <= 19; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (20 - d0) : d1 = 20 and 0 <= d0 <= 19 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_bright_weights_normed_gauss_blur_1_rd8.peek(/* one reader or all rams */ (-20 + d1 == 0 && 19 - d0 >= 0) ? ((20 - d0)) : (-20 + d0 == 0 && 19 - d1 >= 0) ? ((460 - 23 * d1)) : (19 - d1 >= 0 && 19 - d0 >= 0) ? (((480 - d0) - 23 * d1)) : 0);
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { fused_level_0_update_0[i0, i1] -> [5, i1, i0, 2, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> ((528 - d0) - 23 * d1) : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ ((528 - d0) - 23 * d1));
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

// bright_weights_normed_update_0_write
//	bright_weights_normed_bright_weights_normed_update_0_write0
inline void bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_update_0_write, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write0_res = bright_weights_normed_update_0_write.extract<0, 15>();
	bright_weights_normed_bright_weights_normed_update_0_write0_write(bright_weights_normed_bright_weights_normed_update_0_write0_res, bright_weights_normed, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<16> bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_0_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_weights_normed, d0, d1);
	set_at<0, 16>(result, fused_level_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 20], [0, 20]}
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
  // bright_weights_normed_gauss_ds_1_rd0 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // Read schedule : { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // Write schedule: { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2, 0, i1, i0, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
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

struct bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0_cache {
	// RAM Box: {[0, 8], [0, 8]}
	// Capacity: 81
	// # of read delays: 80
	fifo<hw_uint<16>, 81> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(80 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_blur_2_cache {
  bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0_cache bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0;
};



inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
  bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0.push(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_2_rd0 read pattern: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // Read schedule : { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // Write schedule: { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [2, 0, 4 + 2i1, 4 + 2i0, 2, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // DD fold: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> ((80 - 2 * d0) - 18 * d1) : 0 <= d0 <= 3 and 0 <= d1 <= 3; bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> (72 - 18 * d1) : d0 = 4 and 0 <= d1 <= 3; bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> (8 - 2 * d0) : d1 = 4 and 0 <= d0 <= 3 }
  auto value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0 = bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0.peek(/* one reader or all rams */ (-4 + d1 == 0 && 3 - d0 >= 0) ? ((8 - 2 * d0)) : (-4 + d0 == 0 && 3 - d1 >= 0) ? ((72 - 18 * d1)) : (3 - d1 >= 0 && 3 - d0 >= 0) ? (((80 - 2 * d0) - 18 * d1)) : 0);
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

struct bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 2], [0, 2]}
	// Capacity: 9
	// # of read delays: 8
	fifo<hw_uint<16>, 9> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(8 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_blur_3_cache {
  bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0_cache bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0;
};



inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
  bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0.push(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_3_rd0 read pattern: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Read schedule : { bright_weights_normed_gauss_ds_3_update_0[i0, i1] -> [4, 0, 2, 1, 1, i1, i0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // Write schedule: { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [4, 0, 2, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // DD fold: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> 8 : d0 = 0 and d1 = 0; bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> 6 : d0 = 1 and d1 = 0; bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> 2 : d0 = 0 and d1 = 1 }
  auto value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0 = bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0.peek(/* one reader or all rams */ (-1 + d1 == 0 && d0 == 0) ? (2) : (d1 == 0 && -1 + d0 == 0) ? (6) : (d1 == 0 && d0 == 0) ? (8) : 0);
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

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 25
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 8> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 8> f11;
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

	inline hw_uint<16> peek_10() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_11() {
		return f6;
	}

	inline hw_uint<16> peek_12() {
		return f8;
	}

	inline hw_uint<16> peek_13() {
		return f10;
	}

	inline hw_uint<16> peek_21() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_22() {
		return f12;
	}

	inline hw_uint<16> peek_23() {
		return f14;
	}

	inline hw_uint<16> peek_24() {
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
    // cap: 1 reading from capacity: 8
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 8 reading from capacity: 1
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
    // cap: 1 reading from capacity: 8
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 8 reading from capacity: 1
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

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 121
	// # of read delays: 86
	fifo<hw_uint<16>, 121> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_1_cache {
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9;
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0;
};



inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd0 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [2, 0, 4 + 2i1, 4 + 2i0, 2, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 24 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_24();
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
  // bright_weights_normed_gauss_blur_2_rd1 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [2, 0, 4 + 2i1, 4 + 2i0, 2, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 13 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_13();
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
  // bright_weights_normed_gauss_blur_2_rd2 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [2, 0, 4 + 2i1, 4 + 2i0, 2, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
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
  // bright_weights_normed_gauss_blur_2_rd3 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [2, 0, 4 + 2i1, 4 + 2i0, 2, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 23 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_23();
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
  // bright_weights_normed_gauss_blur_2_rd4 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [2, 0, 4 + 2i1, 4 + 2i0, 2, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 12 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_12();
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
  // bright_weights_normed_gauss_blur_2_rd5 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [2, 0, 4 + 2i1, 4 + 2i0, 2, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
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
  // bright_weights_normed_gauss_blur_2_rd6 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [2, 0, 4 + 2i1, 4 + 2i0, 2, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 22 : 0 <= d0 <= 7 and 0 <= d1 <= 8; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (14 + d0) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_22();
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
  // bright_weights_normed_gauss_blur_2_rd7 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [2, 0, 4 + 2i1, 4 + 2i0, 2, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 11 : 0 <= d0 <= 7 and 0 <= d1 <= 8; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_11();
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
  // bright_weights_normed_gauss_blur_2_rd8 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [2, 0, 4 + 2i1, 4 + 2i0, 2, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { fused_level_1_update_0[i0, i1] -> [4, 0, 0, 0, i1, i0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2, 0, 2i1, 2i0, 1, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { fused_level_1_update_0[d0, d1] -> ((120 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ ((120 - d0) - 11 * d1));
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
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

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 14
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

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd1_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 20
	// # of read delays: 14
	fifo<hw_uint<16>, 20> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(19 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd2_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 14
	fifo<hw_uint<16>, 15> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(14 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd3_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 24
	// # of read delays: 14
	fifo<hw_uint<16>, 24> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(23 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd4_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 19
	// # of read delays: 14
	fifo<hw_uint<16>, 19> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(18 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd5_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 14
	// # of read delays: 14
	fifo<hw_uint<16>, 14> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(13 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd6_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 23
	// # of read delays: 14
	fifo<hw_uint<16>, 23> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(22 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd7_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 18
	// # of read delays: 14
	fifo<hw_uint<16>, 18> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(17 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd8_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 13
	fifo<hw_uint<16>, 13> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 20
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

struct bright_weights_normed_gauss_ds_2_cache {
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd0_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd0;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd1_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd1;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd2_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd2;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd3_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd3;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd4_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd4;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd5_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd5;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd6_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd6;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd7_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd7;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd8_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd8;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
};



inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd0.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd1.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd2.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd3.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd4.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd5.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd6.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd7.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd8.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd0 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [4, 0, 2, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((24 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd0.peek(/* one reader or all rams */ ((24 - d0) - 5 * d1));
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
  // bright_weights_normed_gauss_blur_3_rd1 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [4, 0, 2, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((19 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd1.peek(/* one reader or all rams */ ((19 - d0) - 5 * d1));
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
  // bright_weights_normed_gauss_blur_3_rd2 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [4, 0, 2, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((14 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 1; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (4 - d0) : d1 = 2 and 0 <= d0 <= 2 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd2.peek(/* one reader or all rams */ (-2 + d1 == 0) ? ((4 - d0)) : (1 - d1 >= 0) ? (((14 - d0) - 5 * d1)) : 0);
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
  // bright_weights_normed_gauss_blur_3_rd3 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [4, 0, 2, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((23 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd3.peek(/* one reader or all rams */ ((23 - d0) - 5 * d1));
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
  // bright_weights_normed_gauss_blur_3_rd4 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [4, 0, 2, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((18 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd4.peek(/* one reader or all rams */ ((18 - d0) - 5 * d1));
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
  // bright_weights_normed_gauss_blur_3_rd5 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [4, 0, 2, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((13 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 1; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (3 - d0) : d1 = 2 and 0 <= d0 <= 2 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd5.peek(/* one reader or all rams */ (-2 + d1 == 0) ? ((3 - d0)) : (1 - d1 >= 0) ? (((13 - d0) - 5 * d1)) : 0);
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
  // bright_weights_normed_gauss_blur_3_rd6 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [4, 0, 2, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((22 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 2; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (20 - 5 * d1) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd6.peek(/* one reader or all rams */ (-2 + d0 == 0) ? ((20 - 5 * d1)) : (1 - d0 >= 0) ? (((22 - d0) - 5 * d1)) : 0);
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
  // bright_weights_normed_gauss_blur_3_rd7 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [4, 0, 2, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((17 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 2; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (15 - 5 * d1) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd7.peek(/* one reader or all rams */ (-2 + d0 == 0) ? ((15 - 5 * d1)) : (1 - d0 >= 0) ? (((17 - d0) - 5 * d1)) : 0);
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
  // bright_weights_normed_gauss_blur_3_rd8 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [4, 0, 2, 1, 0, i1, i0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((12 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 1; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (10 - 5 * d1) : d0 = 2 and 0 <= d1 <= 1; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (2 - d0) : d1 = 2 and 0 <= d0 <= 1 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_bright_weights_normed_gauss_blur_3_rd8.peek(/* one reader or all rams */ (-2 + d1 == 0 && 1 - d0 >= 0) ? ((2 - d0)) : (-2 + d0 == 0 && 1 - d1 >= 0) ? ((10 - 5 * d1)) : (1 - d1 >= 0 && 1 - d0 >= 0) ? (((12 - d0) - 5 * d1)) : 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { fused_level_2_update_0[i0, i1] -> [4, 0, 1, i1, i0, 0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [4, 0, 0, 3, i1, i0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { fused_level_2_update_0[d0, d1] -> ((24 - d0) - 5 * d1) : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ ((24 - d0) - 5 * d1));
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
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

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 4
	// # of read delays: 4
	fifo<hw_uint<16>, 4> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_3_cache {
  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
  bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Read schedule : { fused_level_3_update_0[i0, i1] -> [4, 0, 3, i1, i0, 0, 0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // Write schedule: { bright_weights_normed_gauss_ds_3_update_0[i0, i1] -> [4, 0, 2, 1, 1, i1, i0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // DD fold: { fused_level_3_update_0[d0, d1] -> 3 : d0 = 0 and d1 = 0; fused_level_3_update_0[d0, d1] -> 2 : d0 = 1 and d1 = 0; fused_level_3_update_0[d0, d1] -> 1 : d0 = 0 and d1 = 1 }
  auto value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0 = bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ (-1 + d1 == 0 && d0 == 0) ? (1) : (d1 == 0 && -1 + d0 == 0) ? (2) : (d1 == 0 && d0 == 0) ? (3) : 0);
  return value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_gauss_ds_3_update_0_write
//	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0
inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_update_0_write, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<16> bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res = bright_weights_normed_gauss_ds_3_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res, bright_weights_normed_gauss_ds_3, d0, d1);
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

struct dark_dark_update_0_write0_to_dark_gauss_blur_1_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 529
	// # of read delays: 482
	fifo<hw_uint<16>, 529> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(528 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_to_dark_gauss_blur_1_rd1_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 506
	// # of read delays: 482
	fifo<hw_uint<16>, 506> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(505 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_to_dark_gauss_blur_1_rd2_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 483
	// # of read delays: 482
	fifo<hw_uint<16>, 483> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(482 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_to_dark_gauss_blur_1_rd3_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 528
	// # of read delays: 482
	fifo<hw_uint<16>, 528> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(527 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_to_dark_gauss_blur_1_rd4_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 505
	// # of read delays: 482
	fifo<hw_uint<16>, 505> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(504 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_to_dark_gauss_blur_1_rd5_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 482
	// # of read delays: 482
	fifo<hw_uint<16>, 482> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(481 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_to_dark_gauss_blur_1_rd6_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 527
	// # of read delays: 482
	fifo<hw_uint<16>, 527> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(526 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_to_dark_gauss_blur_1_rd7_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 504
	// # of read delays: 482
	fifo<hw_uint<16>, 504> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(503 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_to_dark_gauss_blur_1_rd8_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 481
	// # of read delays: 481
	fifo<hw_uint<16>, 481> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(480 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 529
	// # of read delays: 362
	fifo<hw_uint<16>, 529> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(528 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_dark_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 22], [0, 22]}
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

struct dark_cache {
  dark_dark_update_0_write0_to_dark_gauss_blur_1_rd0_cache dark_dark_update_0_write0_to_dark_gauss_blur_1_rd0;
  dark_dark_update_0_write0_to_dark_gauss_blur_1_rd1_cache dark_dark_update_0_write0_to_dark_gauss_blur_1_rd1;
  dark_dark_update_0_write0_to_dark_gauss_blur_1_rd2_cache dark_dark_update_0_write0_to_dark_gauss_blur_1_rd2;
  dark_dark_update_0_write0_to_dark_gauss_blur_1_rd3_cache dark_dark_update_0_write0_to_dark_gauss_blur_1_rd3;
  dark_dark_update_0_write0_to_dark_gauss_blur_1_rd4_cache dark_dark_update_0_write0_to_dark_gauss_blur_1_rd4;
  dark_dark_update_0_write0_to_dark_gauss_blur_1_rd5_cache dark_dark_update_0_write0_to_dark_gauss_blur_1_rd5;
  dark_dark_update_0_write0_to_dark_gauss_blur_1_rd6_cache dark_dark_update_0_write0_to_dark_gauss_blur_1_rd6;
  dark_dark_update_0_write0_to_dark_gauss_blur_1_rd7_cache dark_dark_update_0_write0_to_dark_gauss_blur_1_rd7;
  dark_dark_update_0_write0_to_dark_gauss_blur_1_rd8_cache dark_dark_update_0_write0_to_dark_gauss_blur_1_rd8;
  dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_cache dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0;
  dark_dark_update_0_write0_merged_banks_1_cache dark_dark_update_0_write0_merged_banks_1;
};



inline void dark_dark_update_0_write0_write(hw_uint<16>& dark_dark_update_0_write0, dark_cache& dark, int d0, int d1) {
  dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd0.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd1.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd2.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd3.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd4.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd5.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd6.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd7.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd8.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_merged_banks_1.push(dark_dark_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_1_rd0_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd0 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [3, 1, 0, i1, i0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> ((528 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd0.peek(/* one reader or all rams */ ((528 - d0) - 23 * d1));
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
  // dark_gauss_blur_1_rd1 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [3, 1, 0, i1, i0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> ((505 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd1.peek(/* one reader or all rams */ ((505 - d0) - 23 * d1));
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
  // dark_gauss_blur_1_rd2 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [3, 1, 0, i1, i0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> ((482 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 19; dark_gauss_blur_1_update_0[d0, d1] -> (22 - d0) : d1 = 20 and 0 <= d0 <= 20 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd2.peek(/* one reader or all rams */ (-20 + d1 == 0) ? ((22 - d0)) : (19 - d1 >= 0) ? (((482 - d0) - 23 * d1)) : 0);
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
  // dark_gauss_blur_1_rd3 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [3, 1, 0, i1, i0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> ((527 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd3.peek(/* one reader or all rams */ ((527 - d0) - 23 * d1));
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
  // dark_gauss_blur_1_rd4 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [3, 1, 0, i1, i0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> ((504 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd4.peek(/* one reader or all rams */ ((504 - d0) - 23 * d1));
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
  // dark_gauss_blur_1_rd5 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [3, 1, 0, i1, i0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> ((481 - d0) - 23 * d1) : 0 <= d0 <= 20 and 0 <= d1 <= 19; dark_gauss_blur_1_update_0[d0, d1] -> (21 - d0) : d1 = 20 and 0 <= d0 <= 20 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd5.peek(/* one reader or all rams */ (-20 + d1 == 0) ? ((21 - d0)) : (19 - d1 >= 0) ? (((481 - d0) - 23 * d1)) : 0);
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
  // dark_gauss_blur_1_rd6 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [3, 1, 0, i1, i0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> ((526 - d0) - 23 * d1) : 0 <= d0 <= 19 and 0 <= d1 <= 20; dark_gauss_blur_1_update_0[d0, d1] -> (506 - 23 * d1) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd6.peek(/* one reader or all rams */ (-20 + d0 == 0) ? ((506 - 23 * d1)) : (19 - d0 >= 0) ? (((526 - d0) - 23 * d1)) : 0);
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
  // dark_gauss_blur_1_rd7 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [3, 1, 0, i1, i0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> ((503 - d0) - 23 * d1) : 0 <= d0 <= 19 and 0 <= d1 <= 20; dark_gauss_blur_1_update_0[d0, d1] -> (483 - 23 * d1) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd7.peek(/* one reader or all rams */ (-20 + d0 == 0) ? ((483 - 23 * d1)) : (19 - d0 >= 0) ? (((503 - d0) - 23 * d1)) : 0);
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
  // dark_gauss_blur_1_rd8 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [3, 1, 0, i1, i0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> ((480 - d0) - 23 * d1) : 0 <= d0 <= 19 and 0 <= d1 <= 19; dark_gauss_blur_1_update_0[d0, d1] -> (460 - 23 * d1) : d0 = 20 and 0 <= d1 <= 19; dark_gauss_blur_1_update_0[d0, d1] -> (20 - d0) : d1 = 20 and 0 <= d0 <= 19 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_gauss_blur_1_rd8.peek(/* one reader or all rams */ (-20 + d1 == 0 && 19 - d0 >= 0) ? ((20 - d0)) : (-20 + d0 == 0 && 19 - d1 >= 0) ? ((460 - 23 * d1)) : (19 - d1 >= 0 && 19 - d0 >= 0) ? (((480 - d0) - 23 * d1)) : 0);
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
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { dark_laplace_diff_0_update_0[i0, i1] -> [4, 1, i1, i0, 1, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_laplace_diff_0_update_0[d0, d1] -> ((528 - d0) - 23 * d1) : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0.peek(/* one reader or all rams */ ((528 - d0) - 23 * d1));
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
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { dark_weights_update_0[i0, i1] -> [1, i1, i0, 4, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: {  }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 20], [0, 20]}
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
  // dark_gauss_ds_1_rd0 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // Read schedule : { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // Write schedule: { dark_gauss_blur_1_update_0[i0, i1] -> [3, 1, 0, i1, i0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
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

struct dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0_cache {
	// RAM Box: {[0, 8], [0, 8]}
	// Capacity: 81
	// # of read delays: 80
	fifo<hw_uint<16>, 81> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(80 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_blur_2_cache {
  dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0_cache dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0;
};



inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(hw_uint<16>& dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
  dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0.push(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> dark_gauss_ds_2_rd0_select(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_2_rd0 read pattern: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // Read schedule : { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // Write schedule: { dark_gauss_blur_2_update_0[i0, i1] -> [3, 1, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // DD fold: { dark_gauss_ds_2_update_0[d0, d1] -> ((80 - 2 * d0) - 18 * d1) : 0 <= d0 <= 3 and 0 <= d1 <= 3; dark_gauss_ds_2_update_0[d0, d1] -> (72 - 18 * d1) : d0 = 4 and 0 <= d1 <= 3; dark_gauss_ds_2_update_0[d0, d1] -> (8 - 2 * d0) : d1 = 4 and 0 <= d0 <= 3 }
  auto value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0 = dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0.peek(/* one reader or all rams */ (-4 + d1 == 0 && 3 - d0 >= 0) ? ((8 - 2 * d0)) : (-4 + d0 == 0 && 3 - d1 >= 0) ? ((72 - 18 * d1)) : (3 - d1 >= 0 && 3 - d0 >= 0) ? (((80 - 2 * d0) - 18 * d1)) : 0);
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

struct dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 2], [0, 2]}
	// Capacity: 9
	// # of read delays: 8
	fifo<hw_uint<16>, 9> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(8 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_blur_3_cache {
  dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0_cache dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0;
};



inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(hw_uint<16>& dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
  dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0.push(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> dark_gauss_ds_3_rd0_select(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_3_rd0 read pattern: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Read schedule : { dark_gauss_ds_3_update_0[i0, i1] -> [3, 1, 4, i1, i0, 0, 0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // Write schedule: { dark_gauss_blur_3_update_0[i0, i1] -> [3, 1, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // DD fold: { dark_gauss_ds_3_update_0[d0, d1] -> 8 : d0 = 0 and d1 = 0; dark_gauss_ds_3_update_0[d0, d1] -> 6 : d0 = 1 and d1 = 0; dark_gauss_ds_3_update_0[d0, d1] -> 2 : d0 = 0 and d1 = 1 }
  auto value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0 = dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0.peek(/* one reader or all rams */ (-1 + d1 == 0 && d0 == 0) ? (2) : (d1 == 0 && -1 + d0 == 0) ? (6) : (d1 == 0 && d0 == 0) ? (8) : 0);
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

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 121
	// # of read delays: 98
	fifo<hw_uint<16>, 121> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd1_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 110
	// # of read delays: 98
	fifo<hw_uint<16>, 110> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(109 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd2_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 99
	// # of read delays: 98
	fifo<hw_uint<16>, 99> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(98 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd3_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 120
	// # of read delays: 98
	fifo<hw_uint<16>, 120> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(119 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd4_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 109
	// # of read delays: 98
	fifo<hw_uint<16>, 109> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(108 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd5_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 98
	// # of read delays: 98
	fifo<hw_uint<16>, 98> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(97 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd6_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 119
	// # of read delays: 98
	fifo<hw_uint<16>, 119> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(118 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd7_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 108
	// # of read delays: 98
	fifo<hw_uint<16>, 108> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(107 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd8_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 97
	// # of read delays: 97
	fifo<hw_uint<16>, 97> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(96 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 121
	// # of read delays: 86
	fifo<hw_uint<16>, 121> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 121
	// # of read delays: 92
	fifo<hw_uint<16>, 121> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_cache {
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd0;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd1_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd1;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd2_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd2;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd3_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd3;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd4_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd4;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd5_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd5;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd6_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd6;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd7_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd7;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd8_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd8;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0;
};



inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd1.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd2.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd3.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd4.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd5.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd6.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd7.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd8.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_2_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd0 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [3, 1, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> ((120 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd0.peek(/* one reader or all rams */ ((120 - d0) - 11 * d1));
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
  // dark_gauss_blur_2_rd1 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [3, 1, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> ((109 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd1.peek(/* one reader or all rams */ ((109 - d0) - 11 * d1));
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
  // dark_gauss_blur_2_rd2 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [3, 1, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> ((98 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 7; dark_gauss_blur_2_update_0[d0, d1] -> (10 - d0) : d1 = 8 and 0 <= d0 <= 8 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd2.peek(/* one reader or all rams */ (-8 + d1 == 0) ? ((10 - d0)) : (7 - d1 >= 0) ? (((98 - d0) - 11 * d1)) : 0);
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
  // dark_gauss_blur_2_rd3 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [3, 1, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> ((119 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd3.peek(/* one reader or all rams */ ((119 - d0) - 11 * d1));
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
  // dark_gauss_blur_2_rd4 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [3, 1, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> ((108 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd4.peek(/* one reader or all rams */ ((108 - d0) - 11 * d1));
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
  // dark_gauss_blur_2_rd5 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [3, 1, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> ((97 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 7; dark_gauss_blur_2_update_0[d0, d1] -> (9 - d0) : d1 = 8 and 0 <= d0 <= 8 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd5.peek(/* one reader or all rams */ (-8 + d1 == 0) ? ((9 - d0)) : (7 - d1 >= 0) ? (((97 - d0) - 11 * d1)) : 0);
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
  // dark_gauss_blur_2_rd6 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [3, 1, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> ((118 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 8; dark_gauss_blur_2_update_0[d0, d1] -> (110 - 11 * d1) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd6.peek(/* one reader or all rams */ (-8 + d0 == 0) ? ((110 - 11 * d1)) : (7 - d0 >= 0) ? (((118 - d0) - 11 * d1)) : 0);
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
  // dark_gauss_blur_2_rd7 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [3, 1, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> ((107 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 8; dark_gauss_blur_2_update_0[d0, d1] -> (99 - 11 * d1) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd7.peek(/* one reader or all rams */ (-8 + d0 == 0) ? ((99 - 11 * d1)) : (7 - d0 >= 0) ? (((107 - d0) - 11 * d1)) : 0);
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
  // dark_gauss_blur_2_rd8 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [3, 1, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> ((96 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 7; dark_gauss_blur_2_update_0[d0, d1] -> (88 - 11 * d1) : d0 = 8 and 0 <= d1 <= 7; dark_gauss_blur_2_update_0[d0, d1] -> (8 - d0) : d1 = 8 and 0 <= d0 <= 7 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_gauss_blur_2_rd8.peek(/* one reader or all rams */ (-8 + d1 == 0 && 7 - d0 >= 0) ? ((8 - d0)) : (-8 + d0 == 0 && 7 - d1 >= 0) ? ((88 - 11 * d1)) : (7 - d1 >= 0 && 7 - d0 >= 0) ? (((96 - d0) - 11 * d1)) : 0);
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
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { dark_laplace_diff_1_update_0[i0, i1] -> [3, 1, 7, i1, i0, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_laplace_diff_1_update_0[d0, d1] -> ((120 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0.peek(/* one reader or all rams */ ((120 - d0) - 11 * d1));
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
  // dark_laplace_us_0_rd0 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[o0, o1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[i0, i1] -> [4, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [3, 1, 0, 2i1, 2i0, 1, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_laplace_us_0_update_0[d0, d1] -> ((120 - floor((d0)/2)) - 11 * floor((d1)/2)) : 0 <= d0 <= 15 and 2 <= d1 <= 15; dark_laplace_us_0_update_0[d0, d1] -> (120 - floor((d0)/2)) : 0 <= d0 <= 15 and 0 <= d1 <= 1 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.peek(/* one reader or all rams */ (1 - d1 >= 0) ? ((120 - floord(d0, 2))) : (-2 + d1 >= 0) ? (((120 - floord(d0, 2)) - 11 * floord(d1, 2))) : 0);
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

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 14
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

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd1_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 20
	// # of read delays: 14
	fifo<hw_uint<16>, 20> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(19 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd2_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 14
	fifo<hw_uint<16>, 15> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(14 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd3_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 24
	// # of read delays: 14
	fifo<hw_uint<16>, 24> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(23 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd4_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 19
	// # of read delays: 14
	fifo<hw_uint<16>, 19> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(18 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd5_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 14
	// # of read delays: 14
	fifo<hw_uint<16>, 14> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(13 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd6_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 23
	// # of read delays: 14
	fifo<hw_uint<16>, 23> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(22 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd7_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 18
	// # of read delays: 14
	fifo<hw_uint<16>, 18> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(17 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd8_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 13
	fifo<hw_uint<16>, 13> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 20
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

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 23
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

struct dark_gauss_ds_2_cache {
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd1_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd1;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd2_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd2;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd3_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd3;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd4_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd4;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd5_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd5;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd6_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd6;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd7_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd7;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd8_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd8;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0;
};



inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd1.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd2.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd3.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd4.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd5.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd6.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd7.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd8.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_3_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd0 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [3, 1, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> ((24 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd0.peek(/* one reader or all rams */ ((24 - d0) - 5 * d1));
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
  // dark_gauss_blur_3_rd1 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [3, 1, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> ((19 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd1.peek(/* one reader or all rams */ ((19 - d0) - 5 * d1));
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
  // dark_gauss_blur_3_rd2 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [3, 1, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> ((14 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 1; dark_gauss_blur_3_update_0[d0, d1] -> (4 - d0) : d1 = 2 and 0 <= d0 <= 2 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd2.peek(/* one reader or all rams */ (-2 + d1 == 0) ? ((4 - d0)) : (1 - d1 >= 0) ? (((14 - d0) - 5 * d1)) : 0);
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
  // dark_gauss_blur_3_rd3 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [3, 1, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> ((23 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd3.peek(/* one reader or all rams */ ((23 - d0) - 5 * d1));
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
  // dark_gauss_blur_3_rd4 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [3, 1, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> ((18 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd4.peek(/* one reader or all rams */ ((18 - d0) - 5 * d1));
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
  // dark_gauss_blur_3_rd5 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [3, 1, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> ((13 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 1; dark_gauss_blur_3_update_0[d0, d1] -> (3 - d0) : d1 = 2 and 0 <= d0 <= 2 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd5.peek(/* one reader or all rams */ (-2 + d1 == 0) ? ((3 - d0)) : (1 - d1 >= 0) ? (((13 - d0) - 5 * d1)) : 0);
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
  // dark_gauss_blur_3_rd6 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [3, 1, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> ((22 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 2; dark_gauss_blur_3_update_0[d0, d1] -> (20 - 5 * d1) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd6.peek(/* one reader or all rams */ (-2 + d0 == 0) ? ((20 - 5 * d1)) : (1 - d0 >= 0) ? (((22 - d0) - 5 * d1)) : 0);
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
  // dark_gauss_blur_3_rd7 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [3, 1, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> ((17 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 2; dark_gauss_blur_3_update_0[d0, d1] -> (15 - 5 * d1) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd7.peek(/* one reader or all rams */ (-2 + d0 == 0) ? ((15 - 5 * d1)) : (1 - d0 >= 0) ? (((17 - d0) - 5 * d1)) : 0);
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
  // dark_gauss_blur_3_rd8 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [3, 1, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> ((12 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 1; dark_gauss_blur_3_update_0[d0, d1] -> (10 - 5 * d1) : d0 = 2 and 0 <= d1 <= 1; dark_gauss_blur_3_update_0[d0, d1] -> (2 - d0) : d1 = 2 and 0 <= d0 <= 1 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_gauss_blur_3_rd8.peek(/* one reader or all rams */ (-2 + d1 == 0 && 1 - d0 >= 0) ? ((2 - d0)) : (-2 + d0 == 0 && 1 - d1 >= 0) ? ((10 - 5 * d1)) : (1 - d1 >= 0 && 1 - d0 >= 0) ? (((12 - d0) - 5 * d1)) : 0);
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
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { dark_laplace_diff_2_update_0[i0, i1] -> [4, 0, 0, 1, i1, i0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_laplace_diff_2_update_0[d0, d1] -> ((24 - d0) - 5 * d1) : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* one reader or all rams */ ((24 - d0) - 5 * d1));
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
  // dark_laplace_us_1_rd0 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[o0, o1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_1_update_0[i0, i1] -> [3, 1, 6, i1, i0, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [3, 1, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_laplace_us_1_update_0[d0, d1] -> ((24 - floor((d0)/2)) - 5 * floor((d1)/2)) : 0 <= d0 <= 7 and 2 <= d1 <= 7; dark_laplace_us_1_update_0[d0, d1] -> (24 - floor((d0)/2)) : 0 <= d0 <= 7 and 0 <= d1 <= 1 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.peek(/* one reader or all rams */ (1 - d1 >= 0) ? ((24 - floord(d0, 2))) : (-2 + d1 >= 0) ? (((24 - floord(d0, 2)) - 5 * floord(d1, 2))) : 0);
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
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 4
	// # of read delays: 4
	fifo<hw_uint<16>, 4> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 4
	// # of read delays: 4
	fifo<hw_uint<16>, 4> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_3_cache {
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0;
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> dark_laplace_us_2_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_2_rd0 read pattern: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_2_update_0[i0, i1] -> [3, 1, 5, i1, i0, 0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { dark_gauss_ds_3_update_0[i0, i1] -> [3, 1, 4, i1, i0, 0, 0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // DD fold: { dark_laplace_us_2_update_0[d0, d1] -> 1 : d1 = 3 and 0 <= d0 <= 1; dark_laplace_us_2_update_0[d0, d1] -> 3 : 0 <= d0 <= 1 and 0 <= d1 <= 1; dark_laplace_us_2_update_0[d0, d1] -> 1 : d1 = 2 and 0 <= d0 <= 1; dark_laplace_us_2_update_0[d0, d1] -> 2 : 2 <= d0 <= 3 and 0 <= d1 <= 1 }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.peek(/* one reader or all rams */ (-2 + d1 >= 0 && 1 - d0 >= 0) ? (1) : (-2 + d0 >= 0 && 1 - d1 >= 0) ? (2) : (1 - d1 >= 0 && 1 - d0 >= 0) ? (3) : 0);
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
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Read schedule : { fused_level_3_update_0[i0, i1] -> [4, 0, 3, i1, i0, 0, 0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // Write schedule: { dark_gauss_ds_3_update_0[i0, i1] -> [3, 1, 4, i1, i0, 0, 0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // DD fold: { fused_level_3_update_0[d0, d1] -> 3 : d0 = 0 and d1 = 0; fused_level_3_update_0[d0, d1] -> 2 : d0 = 1 and d1 = 0; fused_level_3_update_0[d0, d1] -> 1 : d0 = 0 and d1 = 1 }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ (-1 + d1 == 0 && d0 == 0) ? (1) : (d1 == 0 && -1 + d0 == 0) ? (2) : (d1 == 0 && d0 == 0) ? (3) : 0);
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

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct dark_laplace_diff_0_cache {
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0;
};



inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0);
}

inline hw_uint<16> fused_level_0_rd0_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { fused_level_0_update_0[i0, i1] -> [5, i1, i0, 2, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { dark_laplace_diff_0_update_0[i0, i1] -> [4, 1, i1, i0, 1, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> ((255 - d0) - 16 * d1) : 0 <= d0 <= 14 and 0 <= d1 <= 14; fused_level_0_update_0[d0, d1] -> (240 - 16 * d1) : d0 = 15 and 0 <= d1 <= 14; fused_level_0_update_0[d0, d1] -> (15 - d0) : d1 = 15 and 0 <= d0 <= 14 }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ (-15 + d1 == 0 && 14 - d0 >= 0) ? ((15 - d0)) : (-15 + d0 == 0 && 14 - d1 >= 0) ? ((240 - 16 * d1)) : (14 - d1 >= 0 && 14 - d0 >= 0) ? (((255 - d0) - 16 * d1)) : 0);
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

struct dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_diff_1_cache {
  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0;
};



inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(hw_uint<16>& dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.push(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0);
}

inline hw_uint<16> fused_level_1_rd0_select(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { fused_level_1_update_0[i0, i1] -> [4, 0, 0, 0, i1, i0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { dark_laplace_diff_1_update_0[i0, i1] -> [3, 1, 7, i1, i0, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // DD fold: { fused_level_1_update_0[d0, d1] -> ((63 - d0) - 8 * d1) : 0 <= d0 <= 6 and 0 <= d1 <= 6; fused_level_1_update_0[d0, d1] -> (56 - 8 * d1) : d0 = 7 and 0 <= d1 <= 6; fused_level_1_update_0[d0, d1] -> (7 - d0) : d1 = 7 and 0 <= d0 <= 6 }
  auto value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0 = dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ (-7 + d1 == 0 && 6 - d0 >= 0) ? ((7 - d0)) : (-7 + d0 == 0 && 6 - d1 >= 0) ? ((56 - 8 * d1)) : (6 - d1 >= 0 && 6 - d0 >= 0) ? (((63 - d0) - 8 * d1)) : 0);
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

struct dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 16
	// # of read delays: 16
	fifo<hw_uint<16>, 16> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_diff_2_cache {
  dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0;
};



inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(hw_uint<16>& dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
  dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.push(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0);
}

inline hw_uint<16> fused_level_2_rd0_select(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { fused_level_2_update_0[i0, i1] -> [4, 0, 1, i1, i0, 0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { dark_laplace_diff_2_update_0[i0, i1] -> [4, 0, 0, 1, i1, i0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // DD fold: { fused_level_2_update_0[d0, d1] -> ((15 - d0) - 4 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2; fused_level_2_update_0[d0, d1] -> (12 - 4 * d1) : d0 = 3 and 0 <= d1 <= 2; fused_level_2_update_0[d0, d1] -> (3 - d0) : d1 = 3 and 0 <= d0 <= 2 }
  auto value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0 = dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (-3 + d1 == 0 && 2 - d0 >= 0) ? ((3 - d0)) : (-3 + d0 == 0 && 2 - d1 >= 0) ? ((12 - 4 * d1)) : (2 - d1 >= 0 && 2 - d0 >= 0) ? (((15 - d0) - 4 * d1)) : 0);
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
	// RAM Box: {[0, 15], [0, 15]}
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
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { dark_laplace_diff_0_update_0[i0, i1] -> [4, 1, i1, i0, 1, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { dark_laplace_us_0_update_0[i0, i1] -> [4, 1, i1, i0, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
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

struct dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_us_1_cache {
  dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0;
};



inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(hw_uint<16>& dark_laplace_us_1_dark_laplace_us_1_update_0_write0, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0.push(dark_laplace_us_1_dark_laplace_us_1_update_0_write0);
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { dark_laplace_diff_1_update_0[i0, i1] -> [3, 1, 7, i1, i0, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { dark_laplace_us_1_update_0[i0, i1] -> [3, 1, 6, i1, i0, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // DD fold: { dark_laplace_diff_1_update_0[d0, d1] -> ((63 - d0) - 8 * d1) : 0 <= d0 <= 6 and 0 <= d1 <= 6; dark_laplace_diff_1_update_0[d0, d1] -> (56 - 8 * d1) : d0 = 7 and 0 <= d1 <= 6; dark_laplace_diff_1_update_0[d0, d1] -> (7 - d0) : d1 = 7 and 0 <= d0 <= 6 }
  auto value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0 = dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0.peek(/* one reader or all rams */ (-7 + d1 == 0 && 6 - d0 >= 0) ? ((7 - d0)) : (-7 + d0 == 0 && 6 - d1 >= 0) ? ((56 - 8 * d1)) : (6 - d1 >= 0 && 6 - d0 >= 0) ? (((63 - d0) - 8 * d1)) : 0);
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

struct dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 16
	// # of read delays: 16
	fifo<hw_uint<16>, 16> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_us_2_cache {
  dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0;
};



inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(hw_uint<16>& dark_laplace_us_2_dark_laplace_us_2_update_0_write0, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
  dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0.push(dark_laplace_us_2_dark_laplace_us_2_update_0_write0);
}

inline hw_uint<16> dark_laplace_diff_2_rd0_select(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { dark_laplace_diff_2_update_0[i0, i1] -> [4, 0, 0, 1, i1, i0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { dark_laplace_us_2_update_0[i0, i1] -> [3, 1, 5, i1, i0, 0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // DD fold: { dark_laplace_diff_2_update_0[d0, d1] -> ((15 - d0) - 4 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2; dark_laplace_diff_2_update_0[d0, d1] -> (12 - 4 * d1) : d0 = 3 and 0 <= d1 <= 2; dark_laplace_diff_2_update_0[d0, d1] -> (3 - d0) : d1 = 3 and 0 <= d0 <= 2 }
  auto value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0 = dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-3 + d1 == 0 && 2 - d0 >= 0) ? ((3 - d0)) : (-3 + d0 == 0 && 2 - d1 >= 0) ? ((12 - 4 * d1)) : (2 - d1 >= 0 && 2 - d0 >= 0) ? (((15 - d0) - 4 * d1)) : 0);
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
	// RAM Box: {[0, 22], [0, 22]}
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

inline hw_uint<16> dark_weights_normed_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { dark_weights_update_0[i0, i1] -> [1, i1, i0, 4, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> weight_sums_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { weight_sums_update_0[i0, i1] -> [1, i1, i0, 6, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { dark_weights_update_0[i0, i1] -> [1, i1, i0, 4, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
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

// weight_sums_update_0_read
//	weight_sums_rd0
inline hw_uint<16> dark_weights_weight_sums_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1) {
  // # of ports in bundle: 1
    // weight_sums_rd0

	hw_uint<16> result;
	hw_uint<16> weight_sums_rd0_res = weight_sums_rd0_select(dark_weights, d0, d1);
	set_at<0, 16>(result, weight_sums_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 49
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 20> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 20> f11;
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

	inline hw_uint<16> peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_23() {
		return f6;
	}

	inline hw_uint<16> peek_24() {
		return f8;
	}

	inline hw_uint<16> peek_25() {
		return f10;
	}

	inline hw_uint<16> peek_45() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_46() {
		return f12;
	}

	inline hw_uint<16> peek_47() {
		return f14;
	}

	inline hw_uint<16> peek_48() {
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
    // cap: 1 reading from capacity: 20
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
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
    // cap: 1 reading from capacity: 20
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
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

struct dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 22], [0, 22]}
	// Capacity: 529
	// # of read delays: 362
	fifo<hw_uint<16>, 529> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(528 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_cache {
  dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_cache dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9;
  dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_cache dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0;
};



inline void dark_weights_normed_dark_weights_normed_update_0_write0_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write0, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.push(dark_weights_normed_dark_weights_normed_update_0_write0);
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0.push(dark_weights_normed_dark_weights_normed_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd0 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 8, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 48 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_48();
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
  // dark_weights_normed_gauss_blur_1_rd1 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 8, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 25 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_25();
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
  // dark_weights_normed_gauss_blur_1_rd2 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 8, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_2();
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
  // dark_weights_normed_gauss_blur_1_rd3 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 8, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 47 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_47();
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
  // dark_weights_normed_gauss_blur_1_rd4 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 8, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 24 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_24();
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
  // dark_weights_normed_gauss_blur_1_rd5 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 8, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_1();
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
  // dark_weights_normed_gauss_blur_1_rd6 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 8, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 46 : 0 <= d0 <= 19 and 0 <= d1 <= 20; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (26 + d0) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_46();
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
  // dark_weights_normed_gauss_blur_1_rd7 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 8, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 23 : 0 <= d0 <= 19 and 0 <= d1 <= 20; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 20 and 0 <= d1 <= 20 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_23();
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
  // dark_weights_normed_gauss_blur_1_rd8 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 20 and 0 <= d1 <= 20 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 8, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: {  }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_0();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { fused_level_0_update_0[i0, i1] -> [5, i1, i0, 2, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> ((528 - d0) - 23 * d1) : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ ((528 - d0) - 23 * d1));
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

// dark_weights_normed_update_0_write
//	dark_weights_normed_dark_weights_normed_update_0_write0
inline void dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_update_0_write, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write0_res = dark_weights_normed_update_0_write.extract<0, 15>();
	dark_weights_normed_dark_weights_normed_update_0_write0_write(dark_weights_normed_dark_weights_normed_update_0_write0_res, dark_weights_normed, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<16> dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_0_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_weights_normed, d0, d1);
	set_at<0, 16>(result, fused_level_0_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0_cache {
	// RAM Box: {[0, 20], [0, 20]}
	// Capacity: 441
	// # of read delays: 440
	fifo<hw_uint<16>, 441> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(440 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_blur_1_cache {
  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0_cache dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0;
};



inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0.push(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_1_rd0 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 10 and 0 <= d1 <= 10 }
  // Read schedule : { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // Write schedule: { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [1, 2 + i1, 2 + i0, 8, 0, 0, 0] : 0 <= i0 <= 20 and 0 <= i1 <= 20 }
  // DD fold: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> ((440 - 2 * d0) - 42 * d1) : 0 <= d0 <= 9 and 0 <= d1 <= 9; dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> (420 - 42 * d1) : d0 = 10 and 0 <= d1 <= 9; dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> (20 - 2 * d0) : d1 = 10 and 0 <= d0 <= 9 }
  auto value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0 = dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0.peek(/* one reader or all rams */ (-10 + d1 == 0 && 9 - d0 >= 0) ? ((20 - 2 * d0)) : (-10 + d0 == 0 && 9 - d1 >= 0) ? ((420 - 42 * d1)) : (9 - d1 >= 0 && 9 - d0 >= 0) ? (((440 - 2 * d0) - 42 * d1)) : 0);
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

struct dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0_cache {
	// RAM Box: {[0, 8], [0, 8]}
	// Capacity: 81
	// # of read delays: 80
	fifo<hw_uint<16>, 81> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(80 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_blur_2_cache {
  dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0_cache dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0;
};



inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
  dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0.push(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_2_rd0 read pattern: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 4 and 0 <= d1 <= 4 }
  // Read schedule : { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // Write schedule: { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [3, 2, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // DD fold: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> ((80 - 2 * d0) - 18 * d1) : 0 <= d0 <= 3 and 0 <= d1 <= 3; dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> (72 - 18 * d1) : d0 = 4 and 0 <= d1 <= 3; dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> (8 - 2 * d0) : d1 = 4 and 0 <= d0 <= 3 }
  auto value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0 = dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0.peek(/* one reader or all rams */ (-4 + d1 == 0 && 3 - d0 >= 0) ? ((8 - 2 * d0)) : (-4 + d0 == 0 && 3 - d1 >= 0) ? ((72 - 18 * d1)) : (3 - d1 >= 0 && 3 - d0 >= 0) ? (((80 - 2 * d0) - 18 * d1)) : 0);
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

struct dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 2], [0, 2]}
	// Capacity: 9
	// # of read delays: 8
	fifo<hw_uint<16>, 9> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(8 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_blur_3_cache {
  dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0_cache dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0;
};



inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
  dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0.push(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_3_rd0 read pattern: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Read schedule : { dark_weights_normed_gauss_ds_3_update_0[i0, i1] -> [4, 0, 2, 0, i1, i0, 0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // Write schedule: { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [3, 2, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // DD fold: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> 8 : d0 = 0 and d1 = 0; dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> 6 : d0 = 1 and d1 = 0; dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> 2 : d0 = 0 and d1 = 1 }
  auto value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0 = dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0.peek(/* one reader or all rams */ (-1 + d1 == 0 && d0 == 0) ? (2) : (d1 == 0 && -1 + d0 == 0) ? (6) : (d1 == 0 && d0 == 0) ? (8) : 0);
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

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 121
	// # of read delays: 98
	fifo<hw_uint<16>, 121> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd1_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 110
	// # of read delays: 98
	fifo<hw_uint<16>, 110> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(109 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd2_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 99
	// # of read delays: 98
	fifo<hw_uint<16>, 99> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(98 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd3_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 120
	// # of read delays: 98
	fifo<hw_uint<16>, 120> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(119 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd4_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 109
	// # of read delays: 98
	fifo<hw_uint<16>, 109> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(108 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd5_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 98
	// # of read delays: 98
	fifo<hw_uint<16>, 98> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(97 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd6_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 119
	// # of read delays: 98
	fifo<hw_uint<16>, 119> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(118 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd7_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 108
	// # of read delays: 98
	fifo<hw_uint<16>, 108> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(107 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd8_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 97
	// # of read delays: 97
	fifo<hw_uint<16>, 97> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(96 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 121
	// # of read delays: 86
	fifo<hw_uint<16>, 121> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(120 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_cache {
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd0_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd0;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd1_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd1;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd2_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd2;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd3_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd3;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd4_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd4;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd5_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd5;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd6_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd6;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd7_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd7;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd8_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd8;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0;
};



inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd0.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd1.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd2.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd3.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd4.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd5.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd6.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd7.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd8.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd0 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [3, 2, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> ((120 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd0.peek(/* one reader or all rams */ ((120 - d0) - 11 * d1));
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
  // dark_weights_normed_gauss_blur_2_rd1 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [3, 2, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> ((109 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd1.peek(/* one reader or all rams */ ((109 - d0) - 11 * d1));
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
  // dark_weights_normed_gauss_blur_2_rd2 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [3, 2, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> ((98 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 7; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (10 - d0) : d1 = 8 and 0 <= d0 <= 8 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd2.peek(/* one reader or all rams */ (-8 + d1 == 0) ? ((10 - d0)) : (7 - d1 >= 0) ? (((98 - d0) - 11 * d1)) : 0);
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
  // dark_weights_normed_gauss_blur_2_rd3 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [3, 2, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> ((119 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd3.peek(/* one reader or all rams */ ((119 - d0) - 11 * d1));
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
  // dark_weights_normed_gauss_blur_2_rd4 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [3, 2, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> ((108 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd4.peek(/* one reader or all rams */ ((108 - d0) - 11 * d1));
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
  // dark_weights_normed_gauss_blur_2_rd5 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [3, 2, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> ((97 - d0) - 11 * d1) : 0 <= d0 <= 8 and 0 <= d1 <= 7; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (9 - d0) : d1 = 8 and 0 <= d0 <= 8 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd5.peek(/* one reader or all rams */ (-8 + d1 == 0) ? ((9 - d0)) : (7 - d1 >= 0) ? (((97 - d0) - 11 * d1)) : 0);
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
  // dark_weights_normed_gauss_blur_2_rd6 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [3, 2, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> ((118 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 8; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (110 - 11 * d1) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd6.peek(/* one reader or all rams */ (-8 + d0 == 0) ? ((110 - 11 * d1)) : (7 - d0 >= 0) ? (((118 - d0) - 11 * d1)) : 0);
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
  // dark_weights_normed_gauss_blur_2_rd7 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [3, 2, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> ((107 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 8; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (99 - 11 * d1) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd7.peek(/* one reader or all rams */ (-8 + d0 == 0) ? ((99 - 11 * d1)) : (7 - d0 >= 0) ? (((107 - d0) - 11 * d1)) : 0);
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
  // dark_weights_normed_gauss_blur_2_rd8 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [3, 2, 1, i1, i0, 0, 0] : 0 <= i0 <= 8 and 0 <= i1 <= 8 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> ((96 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 7; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (88 - 11 * d1) : d0 = 8 and 0 <= d1 <= 7; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (8 - d0) : d1 = 8 and 0 <= d0 <= 7 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_dark_weights_normed_gauss_blur_2_rd8.peek(/* one reader or all rams */ (-8 + d1 == 0 && 7 - d0 >= 0) ? ((8 - d0)) : (-8 + d0 == 0 && 7 - d1 >= 0) ? ((88 - 11 * d1)) : (7 - d1 >= 0 && 7 - d0 >= 0) ? (((96 - d0) - 11 * d1)) : 0);
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { fused_level_1_update_0[i0, i1] -> [4, 0, 0, 0, i1, i0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [3, 2, 0, i1, i0, 0, 0] : 0 <= i0 <= 10 and 0 <= i1 <= 10 }
  // DD fold: { fused_level_1_update_0[d0, d1] -> ((120 - d0) - 11 * d1) : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ ((120 - d0) - 11 * d1));
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
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

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 14
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

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd1_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 20
	// # of read delays: 14
	fifo<hw_uint<16>, 20> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(19 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd2_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 15
	// # of read delays: 14
	fifo<hw_uint<16>, 15> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(14 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd3_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 24
	// # of read delays: 14
	fifo<hw_uint<16>, 24> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(23 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd4_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 19
	// # of read delays: 14
	fifo<hw_uint<16>, 19> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(18 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd5_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 14
	// # of read delays: 14
	fifo<hw_uint<16>, 14> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(13 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd6_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 23
	// # of read delays: 14
	fifo<hw_uint<16>, 23> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(22 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd7_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 18
	// # of read delays: 14
	fifo<hw_uint<16>, 18> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(17 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd8_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 13
	// # of read delays: 13
	fifo<hw_uint<16>, 13> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 4], [0, 4]}
	// Capacity: 25
	// # of read delays: 20
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

struct dark_weights_normed_gauss_ds_2_cache {
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd0_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd0;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd1_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd1;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd2_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd2;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd3_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd3;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd4_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd4;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd5_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd5;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd6_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd6;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd7_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd7;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd8_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd8;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
};



inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd0.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd1.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd2.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd3.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd4.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd5.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd6.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd7.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd8.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd0 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [3, 2, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((24 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd0.peek(/* one reader or all rams */ ((24 - d0) - 5 * d1));
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
  // dark_weights_normed_gauss_blur_3_rd1 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [3, 2, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((19 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd1.peek(/* one reader or all rams */ ((19 - d0) - 5 * d1));
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
  // dark_weights_normed_gauss_blur_3_rd2 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [3, 2, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((14 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 1; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (4 - d0) : d1 = 2 and 0 <= d0 <= 2 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd2.peek(/* one reader or all rams */ (-2 + d1 == 0) ? ((4 - d0)) : (1 - d1 >= 0) ? (((14 - d0) - 5 * d1)) : 0);
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
  // dark_weights_normed_gauss_blur_3_rd3 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [3, 2, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((23 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd3.peek(/* one reader or all rams */ ((23 - d0) - 5 * d1));
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
  // dark_weights_normed_gauss_blur_3_rd4 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [3, 2, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((18 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd4.peek(/* one reader or all rams */ ((18 - d0) - 5 * d1));
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
  // dark_weights_normed_gauss_blur_3_rd5 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [3, 2, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((13 - d0) - 5 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 1; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (3 - d0) : d1 = 2 and 0 <= d0 <= 2 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd5.peek(/* one reader or all rams */ (-2 + d1 == 0) ? ((3 - d0)) : (1 - d1 >= 0) ? (((13 - d0) - 5 * d1)) : 0);
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
  // dark_weights_normed_gauss_blur_3_rd6 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [3, 2, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((22 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 2; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (20 - 5 * d1) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd6.peek(/* one reader or all rams */ (-2 + d0 == 0) ? ((20 - 5 * d1)) : (1 - d0 >= 0) ? (((22 - d0) - 5 * d1)) : 0);
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
  // dark_weights_normed_gauss_blur_3_rd7 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [3, 2, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((17 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 2; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (15 - 5 * d1) : d0 = 2 and 0 <= d1 <= 2 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd7.peek(/* one reader or all rams */ (-2 + d0 == 0) ? ((15 - 5 * d1)) : (1 - d0 >= 0) ? (((17 - d0) - 5 * d1)) : 0);
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
  // dark_weights_normed_gauss_blur_3_rd8 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 2 and 0 <= d1 <= 2 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [3, 2, 3, i1, i0, 0, 0] : 0 <= i0 <= 2 and 0 <= i1 <= 2 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> ((12 - d0) - 5 * d1) : 0 <= d0 <= 1 and 0 <= d1 <= 1; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (10 - 5 * d1) : d0 = 2 and 0 <= d1 <= 1; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (2 - d0) : d1 = 2 and 0 <= d0 <= 1 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_dark_weights_normed_gauss_blur_3_rd8.peek(/* one reader or all rams */ (-2 + d1 == 0 && 1 - d0 >= 0) ? ((2 - d0)) : (-2 + d0 == 0 && 1 - d1 >= 0) ? ((10 - 5 * d1)) : (1 - d1 >= 0 && 1 - d0 >= 0) ? (((12 - d0) - 5 * d1)) : 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { fused_level_2_update_0[i0, i1] -> [4, 0, 1, i1, i0, 0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [3, 2, 2, i1, i0, 0, 0] : 0 <= i0 <= 4 and 0 <= i1 <= 4 }
  // DD fold: { fused_level_2_update_0[d0, d1] -> ((24 - d0) - 5 * d1) : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ ((24 - d0) - 5 * d1));
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
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

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 4
	// # of read delays: 4
	fifo<hw_uint<16>, 4> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_3_cache {
  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
  dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 1 and 0 <= d1 <= 1 }
  // Read schedule : { fused_level_3_update_0[i0, i1] -> [4, 0, 3, i1, i0, 0, 0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // Write schedule: { dark_weights_normed_gauss_ds_3_update_0[i0, i1] -> [4, 0, 2, 0, i1, i0, 0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // DD fold: { fused_level_3_update_0[d0, d1] -> 3 : d0 = 0 and d1 = 0; fused_level_3_update_0[d0, d1] -> 2 : d0 = 1 and d1 = 0; fused_level_3_update_0[d0, d1] -> 1 : d0 = 0 and d1 = 1 }
  auto value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0 = dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ (-1 + d1 == 0 && d0 == 0) ? (1) : (d1 == 0 && -1 + d0 == 0) ? (2) : (d1 == 0 && d0 == 0) ? (3) : 0);
  return value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_gauss_ds_3_update_0_write
//	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0
inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_update_0_write, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<16> dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res = dark_weights_normed_gauss_ds_3_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res, dark_weights_normed_gauss_ds_3, d0, d1);
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

struct final_merged_0_final_merged_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

inline hw_uint<16> psef_16_16_rd0_select(final_merged_0_cache& final_merged_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // psef_16_16_rd0 read pattern: { psef_16_16_update_0[d0, d1] -> final_merged_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { psef_16_16_update_0[i0, i1] -> [5, i1, i0, 4, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { final_merged_0_update_0[i0, i1] -> [5, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
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
// final_merged_0_update_0_write
//	final_merged_0_final_merged_0_update_0_write0
inline void final_merged_0_final_merged_0_update_0_write_bundle_write(hw_uint<16>& final_merged_0_update_0_write, final_merged_0_cache& final_merged_0, int d0, int d1) {
	hw_uint<16> final_merged_0_final_merged_0_update_0_write0_res = final_merged_0_update_0_write.extract<0, 15>();
	final_merged_0_final_merged_0_update_0_write0_write(final_merged_0_final_merged_0_update_0_write0_res, final_merged_0, d0, d1);
}

// psef_16_16_update_0_read
//	psef_16_16_rd0
inline hw_uint<16> final_merged_0_psef_16_16_update_0_read_bundle_read(final_merged_0_cache& final_merged_0, int d0, int d1) {
  // # of ports in bundle: 1
    // psef_16_16_rd0

	hw_uint<16> result;
	hw_uint<16> psef_16_16_rd0_res = psef_16_16_rd0_select(final_merged_0, d0, d1);
	set_at<0, 16>(result, psef_16_16_rd0_res);
	return result;
}

#include "hw_classes.h"

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 64
	// # of read delays: 65
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
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
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[o0, o1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[i0, i1] -> [5, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { final_merged_1_update_0[i0, i1] -> [4, 0, 5, i1, i0, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> ((63 - floor((d0)/2)) - 8 * floor((d1)/2)) : 0 <= d0 <= 13 and 2 <= d1 <= 13; final_merged_0_update_0[d0, d1] -> (63 - floor((d0)/2)) : 0 <= d0 <= 13 and 0 <= d1 <= 1; final_merged_0_update_0[d0, d1] -> (56 - 8 * floor((d1)/2)) : 14 <= d0 <= 15 and 0 <= d1 <= 13; final_merged_0_update_0[d0, d1] -> (7 - floor((d0)/2)) : d1 = 15 and 0 <= d0 <= 13; final_merged_0_update_0[d0, d1] -> (7 - floor((d0)/2)) : d1 = 14 and 0 <= d0 <= 13 }
  auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ (-14 + d1 >= 0 && 13 - d0 >= 0) ? ((7 - floord(d0, 2))) : (-14 + d0 >= 0 && 13 - d1 >= 0) ? ((56 - 8 * floord(d1, 2))) : (1 - d1 >= 0 && 13 - d0 >= 0) ? ((63 - floord(d0, 2))) : (13 - d1 >= 0 && 13 - d0 >= 0 && -2 + d1 >= 0) ? (((63 - floord(d0, 2)) - 8 * floord(d1, 2))) : 0);
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
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 16
	// # of read delays: 17
	fifo<hw_uint<16>, 16> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
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
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[o0, o1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_1_update_0[i0, i1] -> [4, 0, 5, i1, i0, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { final_merged_2_update_0[i0, i1] -> [4, 0, 4, i1, i0, 0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // DD fold: { final_merged_1_update_0[d0, d1] -> ((15 - floor((d0)/2)) - 4 * floor((d1)/2)) : 0 <= d0 <= 5 and 2 <= d1 <= 5; final_merged_1_update_0[d0, d1] -> (15 - floor((d0)/2)) : 0 <= d0 <= 5 and 0 <= d1 <= 1; final_merged_1_update_0[d0, d1] -> (12 - 4 * floor((d1)/2)) : 6 <= d0 <= 7 and 0 <= d1 <= 5; final_merged_1_update_0[d0, d1] -> (3 - floor((d0)/2)) : d1 = 7 and 0 <= d0 <= 5; final_merged_1_update_0[d0, d1] -> (3 - floor((d0)/2)) : d1 = 6 and 0 <= d0 <= 5 }
  auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ (-6 + d1 >= 0 && 5 - d0 >= 0) ? ((3 - floord(d0, 2))) : (-6 + d0 >= 0 && 5 - d1 >= 0) ? ((12 - 4 * floord(d1, 2))) : (1 - d1 >= 0 && 5 - d0 >= 0) ? ((15 - floord(d0, 2))) : (5 - d1 >= 0 && 5 - d0 >= 0 && -2 + d1 >= 0) ? (((15 - floord(d0, 2)) - 4 * floord(d1, 2))) : 0);
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

struct fused_level_0_fused_level_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct fused_level_0_cache {
  fused_level_0_fused_level_0_update_0_write0_merged_banks_1_cache fused_level_0_fused_level_0_update_0_write0_merged_banks_1;
};



inline void fused_level_0_fused_level_0_update_0_write0_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write0, fused_level_0_cache& fused_level_0, int d0, int d1) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write0_merged_banks_1.push(fused_level_0_fused_level_0_update_0_write0);
}

inline hw_uint<16> final_merged_0_rd0_select(fused_level_0_cache& fused_level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[d0, d1] : 0 <= d0 <= 15 and 0 <= d1 <= 15 }
  // Read schedule : { final_merged_0_update_0[i0, i1] -> [5, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // Write schedule: { fused_level_0_update_0[i0, i1] -> [5, i1, i0, 2, 0, 0, 0] : 0 <= i0 <= 15 and 0 <= i1 <= 15 }
  // DD fold: {  }
  auto value_fused_level_0_fused_level_0_update_0_write0 = fused_level_0.fused_level_0_fused_level_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 64
	// # of read delays: 64
	fifo<hw_uint<16>, 64> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(63 - offset);
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
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[d0, d1] : 0 <= d0 <= 7 and 0 <= d1 <= 7 }
  // Read schedule : { final_merged_1_update_0[i0, i1] -> [4, 0, 5, i1, i0, 0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // Write schedule: { fused_level_1_update_0[i0, i1] -> [4, 0, 0, 0, i1, i0, 0] : 0 <= i0 <= 7 and 0 <= i1 <= 7 }
  // DD fold: { final_merged_1_update_0[d0, d1] -> ((63 - d0) - 8 * d1) : 0 <= d0 <= 6 and 0 <= d1 <= 6; final_merged_1_update_0[d0, d1] -> (56 - 8 * d1) : d0 = 7 and 0 <= d1 <= 6; final_merged_1_update_0[d0, d1] -> (7 - d0) : d1 = 7 and 0 <= d0 <= 6 }
  auto value_fused_level_1_fused_level_1_update_0_write0 = fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ (-7 + d1 == 0 && 6 - d0 >= 0) ? ((7 - d0)) : (-7 + d0 == 0 && 6 - d1 >= 0) ? ((56 - 8 * d1)) : (6 - d1 >= 0 && 6 - d0 >= 0) ? (((63 - d0) - 8 * d1)) : 0);
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

struct fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0_cache {
	// RAM Box: {[0, 3], [0, 3]}
	// Capacity: 16
	// # of read delays: 16
	fifo<hw_uint<16>, 16> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_2_cache {
  fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0_cache fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0;
};



inline void fused_level_2_fused_level_2_update_0_write0_write(hw_uint<16>& fused_level_2_fused_level_2_update_0_write0, fused_level_2_cache& fused_level_2, int d0, int d1) {
  fused_level_2.fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0.push(fused_level_2_fused_level_2_update_0_write0);
}

inline hw_uint<16> final_merged_2_rd0_select(fused_level_2_cache& fused_level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { final_merged_2_update_0[i0, i1] -> [4, 0, 4, i1, i0, 0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { fused_level_2_update_0[i0, i1] -> [4, 0, 1, i1, i0, 0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // DD fold: { final_merged_2_update_0[d0, d1] -> ((15 - d0) - 4 * d1) : 0 <= d0 <= 2 and 0 <= d1 <= 2; final_merged_2_update_0[d0, d1] -> (12 - 4 * d1) : d0 = 3 and 0 <= d1 <= 2; final_merged_2_update_0[d0, d1] -> (3 - d0) : d1 = 3 and 0 <= d0 <= 2 }
  auto value_fused_level_2_fused_level_2_update_0_write0 = fused_level_2.fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0.peek(/* one reader or all rams */ (-3 + d1 == 0 && 2 - d0 >= 0) ? ((3 - d0)) : (-3 + d0 == 0 && 2 - d1 >= 0) ? ((12 - 4 * d1)) : (2 - d1 >= 0 && 2 - d0 >= 0) ? (((15 - d0) - 4 * d1)) : 0);
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
	// RAM Box: {[0, 1], [0, 1]}
	// Capacity: 4
	// # of read delays: 4
	fifo<hw_uint<16>, 4> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3 - offset);
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
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_2_update_0[i0, i1] -> [4, 0, 4, i1, i0, 0, 0] : 0 <= i0 <= 3 and 0 <= i1 <= 3 }
  // Write schedule: { fused_level_3_update_0[i0, i1] -> [4, 0, 3, i1, i0, 0, 0] : 0 <= i0 <= 1 and 0 <= i1 <= 1 }
  // DD fold: { final_merged_2_update_0[d0, d1] -> 1 : d1 = 3 and 0 <= d0 <= 1; final_merged_2_update_0[d0, d1] -> 3 : 0 <= d0 <= 1 and 0 <= d1 <= 1; final_merged_2_update_0[d0, d1] -> 1 : d1 = 2 and 0 <= d0 <= 1; final_merged_2_update_0[d0, d1] -> 2 : 2 <= d0 <= 3 and 0 <= d1 <= 1 }
  auto value_fused_level_3_fused_level_3_update_0_write0 = fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.peek(/* one reader or all rams */ (-2 + d1 >= 0 && 1 - d0 >= 0) ? (1) : (-2 + d0 >= 0 && 1 - d1 >= 0) ? (2) : (1 - d1 >= 0 && 1 - d0 >= 0) ? (3) : 0);
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
	// RAM Box: {[0, 22], [0, 22]}
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
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { bright_update_0[i0, i1] -> [1, i1, i0, 1, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { in_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
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
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { dark_update_0[i0, i1] -> [1, i1, i0, 3, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { in_update_0[i0, i1] -> [1, i1, i0, 0, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
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

#include "hw_classes.h"

struct weight_sums_weight_sums_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 22], [0, 22]}
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

struct weight_sums_cache {
  weight_sums_weight_sums_update_0_write0_merged_banks_2_cache weight_sums_weight_sums_update_0_write0_merged_banks_2;
};



inline void weight_sums_weight_sums_update_0_write0_write(hw_uint<16>& weight_sums_weight_sums_update_0_write0, weight_sums_cache& weight_sums, int d0, int d1) {
  weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.push(weight_sums_weight_sums_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { bright_weights_normed_update_0[i0, i1] -> [1, i1, i0, 9, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { weight_sums_update_0[i0, i1] -> [1, i1, i0, 6, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: {  }
  auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 22 and 0 <= d1 <= 22 }
  // Read schedule : { dark_weights_normed_update_0[i0, i1] -> [1, i1, i0, 7, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // Write schedule: { weight_sums_update_0[i0, i1] -> [1, i1, i0, 6, 0, 0, 0] : 0 <= i0 <= 22 and 0 <= i1 <= 22 }
  // DD fold: {  }
  auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
inline hw_uint<16> weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1) {
  // # of ports in bundle: 1
    // bright_weights_normed_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(weight_sums, d0, d1);
	set_at<0, 16>(result, bright_weights_normed_rd0_res);
	return result;
}

// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
inline hw_uint<16> weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1) {
  // # of ports in bundle: 1
    // dark_weights_normed_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(weight_sums, d0, d1);
	set_at<0, 16>(result, dark_weights_normed_rd0_res);
	return result;
}

// weight_sums_update_0_write
//	weight_sums_weight_sums_update_0_write0
inline void weight_sums_weight_sums_update_0_write_bundle_write(hw_uint<16>& weight_sums_update_0_write, weight_sums_cache& weight_sums, int d0, int d1) {
	hw_uint<16> weight_sums_weight_sums_update_0_write0_res = weight_sums_update_0_write.extract<0, 15>();
	weight_sums_weight_sums_update_0_write0_write(weight_sums_weight_sums_update_0_write0_res, weight_sums, d0, d1);
}



// Operation logic
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

	auto compute_result = merge_exposures_unrolled_1(bright_gauss_ds_3_0_c__0_value, dark_gauss_ds_3_0_c__0_value, bright_weights_normed_gauss_ds_3_0_c__0_value, dark_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: fused_level_3
	fused_level_3_fused_level_3_update_0_write_bundle_write(compute_result, fused_level_3, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_2_update_0(bright_laplace_diff_2_cache& bright_laplace_diff_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, fused_level_2_cache& fused_level_2, int d0, int d1) {
	// Consume: bright_laplace_diff_2
	auto bright_laplace_diff_2_0_c__0_value = bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_2
	auto dark_laplace_diff_2_0_c__0_value = dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_laplace_diff_2_0_c__0_value, dark_laplace_diff_2_0_c__0_value, bright_weights_normed_gauss_ds_2_0_c__0_value, dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: fused_level_2
	fused_level_2_fused_level_2_update_0_write_bundle_write(compute_result, fused_level_2, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_1_update_0(bright_laplace_diff_1_cache& bright_laplace_diff_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, fused_level_1_cache& fused_level_1, int d0, int d1) {
	// Consume: bright_laplace_diff_1
	auto bright_laplace_diff_1_0_c__0_value = bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_1
	auto dark_laplace_diff_1_0_c__0_value = dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_laplace_diff_1_0_c__0_value, dark_laplace_diff_1_0_c__0_value, bright_weights_normed_gauss_ds_1_0_c__0_value, dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: fused_level_1
	fused_level_1_fused_level_1_update_0_write_bundle_write(compute_result, fused_level_1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_0_update_0(bright_laplace_diff_0_cache& bright_laplace_diff_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, bright_weights_normed_cache& bright_weights_normed, dark_weights_normed_cache& dark_weights_normed, fused_level_0_cache& fused_level_0, int d0, int d1) {
	// Consume: bright_laplace_diff_0
	auto bright_laplace_diff_0_0_c__0_value = bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_0
	auto dark_laplace_diff_0_0_c__0_value = dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_laplace_diff_0_0_c__0_value, dark_laplace_diff_0_0_c__0_value, bright_weights_normed_0_c__0_value, dark_weights_normed_0_c__0_value);
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

	auto compute_result = add_unrolled_1(fused_level_3_0_c__0_value, fused_level_2_0_c__0_value);
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

	auto compute_result = add_unrolled_1(final_merged_2_0_c__0_value, fused_level_1_0_c__0_value);
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

	auto compute_result = add_unrolled_1(final_merged_1_0_c__0_value, fused_level_0_0_c__0_value);
	// Produce: final_merged_0
	final_merged_0_final_merged_0_update_0_write_bundle_write(compute_result, final_merged_0, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void psef_16_16_update_0(final_merged_0_cache& final_merged_0, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */psef_16_16, int d0, int d1) {
	// Consume: final_merged_0
	auto final_merged_0_0_c__0_value = final_merged_0_psef_16_16_update_0_read_bundle_read(final_merged_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(final_merged_0_0_c__0_value);
	// Produce: psef_16_16
	psef_16_16.write(compute_result);

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

inline void dark_weights_update_0(dark_cache& dark, dark_weights_cache& dark_weights, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_weights_update_0_read_bundle_read(dark/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = exposure_weight_unrolled_1(dark_0_c__0_value);
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

	auto compute_result = exposure_weight_unrolled_1(bright_0_c__0_value);
	// Produce: bright_weights
	bright_weights_bright_weights_update_0_write_bundle_write(compute_result, bright_weights, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void weight_sums_update_0(dark_weights_cache& dark_weights, bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_weight_sums_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_weight_sums_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_1(dark_weights_0_c__0_value, bright_weights_0_c__0_value);
	// Produce: weight_sums
	weight_sums_weight_sums_update_0_write_bundle_write(compute_result, weight_sums, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_update_0(dark_weights_cache& dark_weights, weight_sums_cache& weight_sums, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f_divide_unrolled_1(dark_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: dark_weights_normed
	dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(compute_result, dark_weights_normed, d0, d1);

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

inline void bright_weights_normed_update_0(bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f_divide_unrolled_1(bright_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: bright_weights_normed
	bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(compute_result, bright_weights_normed, d0, d1);

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

// Driver function
void psef_16_16_naive(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */psef_16_16, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("psef_16_16_naive_debug.csv");
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
  weight_sums_cache weight_sums;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < 1; epoch++) {
	{
	  for (int c1 = 0; c1 <= 22; c1 += 1)
	    for (int c2 = 0; c2 <= 22; c2 += 1) {
	in_update_0(in_off_chip, in, c2, c1);
	bright_update_0(in, bright, c2, c1);
	      if (c1 >= 2 && c2 >= 2)
	bright_gauss_blur_1_update_0(bright, bright_gauss_blur_1, c2 - 2, c1 - 2);
	dark_update_0(in, dark, c2, c1);
	dark_weights_update_0(dark, dark_weights, c2, c1);
	bright_weights_update_0(bright, bright_weights, c2, c1);
	weight_sums_update_0(dark_weights, bright_weights, weight_sums, c2, c1);
	dark_weights_normed_update_0(dark_weights, weight_sums, dark_weights_normed, c2, c1);
	      if (c1 >= 2 && c2 >= 2)
	dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed, dark_weights_normed_gauss_blur_1, c2 - 2, c1 - 2);
	bright_weights_normed_update_0(bright_weights, weight_sums, bright_weights_normed, c2, c1);
	    }
	  for (int c2 = 0; c2 <= 20; c2 += 1)
	    for (int c3 = 0; c3 <= 20; c3 += 1) {
	bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed, bright_weights_normed_gauss_blur_1, c3, c2);
	      if (c2 % 2 == 0 && c3 % 2 == 0) {
	bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1, c3 / 2, c2 / 2);
	        if (c2 >= 4 && c3 >= 4)
	bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2, (c3 / 2) - 2, (c2 / 2) - 2);
	      }
	    }
	  for (int c2 = 0; c2 <= 10; c2 += 1)
	    for (int c3 = 0; c3 <= 10; c3 += 1) {
	bright_gauss_ds_1_update_0(bright_gauss_blur_1, bright_gauss_ds_1, c3, c2);
	      if (c2 >= 2 && c3 >= 2) {
	bright_gauss_blur_2_update_0(bright_gauss_ds_1, bright_gauss_blur_2, c3 - 2, c2 - 2);
	        if (c2 % 2 == 0 && c3 % 2 == 0)
	bright_gauss_ds_2_update_0(bright_gauss_blur_2, bright_gauss_ds_2, (c3 / 2) - 1, (c2 / 2) - 1);
	      }
	    }
	  for (int c2 = 0; c2 <= 7; c2 += 1)
	    for (int c3 = 0; c3 <= 7; c3 += 1) {
	bright_laplace_us_1_update_0(bright_gauss_ds_2, bright_laplace_us_1, c3, c2);
	bright_laplace_diff_1_update_0(bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1, c3, c2);
	    }
	  for (int c3 = 0; c3 <= 20; c3 += 1)
	    for (int c4 = 0; c4 <= 20; c4 += 1) {
	dark_gauss_blur_1_update_0(dark, dark_gauss_blur_1, c4, c3);
	      if (c3 % 2 == 0 && c4 % 2 == 0)
	dark_gauss_ds_1_update_0(dark_gauss_blur_1, dark_gauss_ds_1, c4 / 2, c3 / 2);
	    }
	  for (int c3 = 0; c3 <= 8; c3 += 1)
	    for (int c4 = 0; c4 <= 8; c4 += 1)
	dark_gauss_blur_2_update_0(dark_gauss_ds_1, dark_gauss_blur_2, c4, c3);
	  for (int c3 = 0; c3 <= 4; c3 += 1)
	    for (int c4 = 0; c4 <= 4; c4 += 1)
	dark_gauss_ds_2_update_0(dark_gauss_blur_2, dark_gauss_ds_2, c4, c3);
	  for (int c3 = 0; c3 <= 2; c3 += 1)
	    for (int c4 = 0; c4 <= 2; c4 += 1)
	dark_gauss_blur_3_update_0(dark_gauss_ds_2, dark_gauss_blur_3, c4, c3);
	  for (int c3 = 0; c3 <= 1; c3 += 1)
	    for (int c4 = 0; c4 <= 1; c4 += 1)
	dark_gauss_ds_3_update_0(dark_gauss_blur_3, dark_gauss_ds_3, c4, c3);
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c4 = 0; c4 <= 3; c4 += 1)
	dark_laplace_us_2_update_0(dark_gauss_ds_3, dark_laplace_us_2, c4, c3);
	  for (int c3 = 0; c3 <= 7; c3 += 1)
	    for (int c4 = 0; c4 <= 7; c4 += 1)
	dark_laplace_us_1_update_0(dark_gauss_ds_2, dark_laplace_us_1, c4, c3);
	  for (int c3 = 0; c3 <= 7; c3 += 1)
	    for (int c4 = 0; c4 <= 7; c4 += 1)
	dark_laplace_diff_1_update_0(dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1, c4, c3);
	  for (int c3 = 0; c3 <= 10; c3 += 1)
	    for (int c4 = 0; c4 <= 10; c4 += 1)
	dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1, c4, c3);
	  for (int c3 = 0; c3 <= 8; c3 += 1)
	    for (int c4 = 0; c4 <= 8; c4 += 1)
	dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2, c4, c3);
	  for (int c3 = 0; c3 <= 4; c3 += 1)
	    for (int c4 = 0; c4 <= 4; c4 += 1)
	dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2, c4, c3);
	  for (int c3 = 0; c3 <= 2; c3 += 1)
	    for (int c4 = 0; c4 <= 2; c4 += 1)
	dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3, c4, c3);
	  for (int c4 = 0; c4 <= 7; c4 += 1)
	    for (int c5 = 0; c5 <= 7; c5 += 1)
	fused_level_1_update_0(bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1, fused_level_1, c5, c4);
	  for (int c4 = 0; c4 <= 3; c4 += 1)
	    for (int c5 = 0; c5 <= 3; c5 += 1)
	dark_laplace_diff_2_update_0(dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2, c5, c4);
	  for (int c5 = 0; c5 <= 2; c5 += 1)
	    for (int c6 = 0; c6 <= 2; c6 += 1)
	bright_gauss_blur_3_update_0(bright_gauss_ds_2, bright_gauss_blur_3, c6, c5);
	  for (int c5 = 0; c5 <= 1; c5 += 1)
	    for (int c6 = 0; c6 <= 1; c6 += 1)
	bright_gauss_ds_3_update_0(bright_gauss_blur_3, bright_gauss_ds_3, c6, c5);
	  for (int c5 = 0; c5 <= 3; c5 += 1)
	    for (int c6 = 0; c6 <= 3; c6 += 1)
	bright_laplace_us_2_update_0(bright_gauss_ds_3, bright_laplace_us_2, c6, c5);
	  for (int c5 = 0; c5 <= 3; c5 += 1)
	    for (int c6 = 0; c6 <= 3; c6 += 1)
	bright_laplace_diff_2_update_0(bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2, c6, c5);
	  for (int c4 = 0; c4 <= 4; c4 += 1)
	    for (int c5 = 0; c5 <= 4; c5 += 1)
	bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2, c5, c4);
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c4 = 0; c4 <= 3; c4 += 1)
	fused_level_2_update_0(bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2, fused_level_2, c4, c3);
	  for (int c4 = 0; c4 <= 1; c4 += 1)
	    for (int c5 = 0; c5 <= 1; c5 += 1)
	dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3, c5, c4);
	  for (int c5 = 0; c5 <= 2; c5 += 1)
	    for (int c6 = 0; c6 <= 2; c6 += 1)
	bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3, c6, c5);
	  for (int c5 = 0; c5 <= 1; c5 += 1)
	    for (int c6 = 0; c6 <= 1; c6 += 1)
	bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3, c6, c5);
	  for (int c3 = 0; c3 <= 1; c3 += 1)
	    for (int c4 = 0; c4 <= 1; c4 += 1)
	fused_level_3_update_0(bright_gauss_ds_3, dark_gauss_ds_3, bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3, fused_level_3, c4, c3);
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c4 = 0; c4 <= 3; c4 += 1)
	final_merged_2_update_0(fused_level_3, fused_level_2, final_merged_2, c4, c3);
	  for (int c3 = 0; c3 <= 7; c3 += 1)
	    for (int c4 = 0; c4 <= 7; c4 += 1)
	final_merged_1_update_0(final_merged_2, fused_level_1, final_merged_1, c4, c3);
	  for (int c2 = 0; c2 <= 15; c2 += 1)
	    for (int c3 = 0; c3 <= 15; c3 += 1) {
	dark_laplace_us_0_update_0(dark_gauss_ds_1, dark_laplace_us_0, c3, c2);
	dark_laplace_diff_0_update_0(dark, dark_laplace_us_0, dark_laplace_diff_0, c3, c2);
	    }
	  for (int c1 = 0; c1 <= 15; c1 += 1)
	    for (int c2 = 0; c2 <= 15; c2 += 1) {
	bright_laplace_us_0_update_0(bright_gauss_ds_1, bright_laplace_us_0, c2, c1);
	bright_laplace_diff_0_update_0(bright, bright_laplace_us_0, bright_laplace_diff_0, c2, c1);
	fused_level_0_update_0(bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed, dark_weights_normed, fused_level_0, c2, c1);
	final_merged_0_update_0(final_merged_1, fused_level_0, final_merged_0, c2, c1);
	psef_16_16_update_0(final_merged_0, psef_16_16, c2, c1);
	    }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void psef_16_16_naive(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */psef_16_16) {

  psef_16_16_naive(in_off_chip, psef_16_16, 1);
}
#ifdef __VIVADO_SYNTH__
#include "psef_16_16_naive.h"

const int in_update_0_read_num_transfers = 529;
const int psef_16_16_update_0_write_num_transfers = 256;


extern "C" {

static void read_in_update_0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = in_update_0_read_num_transfers*1;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_psef_16_16_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = psef_16_16_update_0_write_num_transfers*1;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void psef_16_16_naive_accel(hw_uint<16>* in_update_0_read, hw_uint<16>* psef_16_16_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = psef_16_16_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = psef_16_16_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > in_update_0_read_channel;
  static HWStream<hw_uint<16> > psef_16_16_update_0_write_channel;

  read_in_update_0_read(in_update_0_read, in_update_0_read_channel, size);

  psef_16_16_naive(in_update_0_read_channel, psef_16_16_update_0_write_channel, size);

  write_psef_16_16_update_0_write(psef_16_16_update_0_write, psef_16_16_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

