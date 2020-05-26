#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "psef_1920_1080_naive_compute_units.h"

#include "hw_classes.h"

struct bright_bright_update_0_write0_merged_banks_11_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 3857
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 1924> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 1924> f11;
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

	inline hw_uint<16> peek_1926() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1927() {
		return f6;
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}

	inline hw_uint<16> peek_3853() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_3854() {
		return f12;
	}

	inline hw_uint<16> peek_3855() {
		return f14;
	}

	inline hw_uint<16> peek_3856() {
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
    // cap: 1 reading from capacity: 1924
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1924
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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
  // bright_gauss_blur_1_rd0 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 3] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 3856 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_3856();
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
  // bright_gauss_blur_1_rd1 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 3] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1929 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_1929();
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
  // bright_gauss_blur_1_rd2 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 3] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
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
  // bright_gauss_blur_1_rd3 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 3] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 3855 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_3855();
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
  // bright_gauss_blur_1_rd4 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 3] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1928 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_1928();
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
  // bright_gauss_blur_1_rd5 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 3] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
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
  // bright_gauss_blur_1_rd6 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 3] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 3854 : 0 <= d0 <= 1923 and 0 <= d1 <= 1084; bright_gauss_blur_1_update_0[d0, d1] -> (1930 + d0) : d0 = 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_3854();
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
  // bright_gauss_blur_1_rd7 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 3] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1927 : 0 <= d0 <= 1923 and 0 <= d1 <= 1084; bright_gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 1924 and 0 <= d1 <= 1084 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_1927();
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
  // bright_gauss_blur_1_rd8 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 3] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { bright_laplace_diff_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 51] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_laplace_diff_0_update_0[d0, d1] -> 3856 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_3856();
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
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_weights_update_0[i0, i1] -> [i1, i0, 6] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // Write schedule: { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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
	// RAM Box: {[0, 1924], [0, 1084]}
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
  // bright_gauss_ds_1_rd0 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Read schedule : { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // Write schedule: { bright_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 3] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
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
	// RAM Box: {[0, 960], [0, 540]}
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
  // bright_gauss_ds_2_rd0 read pattern: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Read schedule : { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // Write schedule: { bright_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 19] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
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
	// RAM Box: {[0, 478], [0, 268]}
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
  // bright_gauss_ds_3_rd0 read pattern: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { bright_gauss_ds_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 22] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // Write schedule: { bright_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 21] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
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
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 1929
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 960> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 960> f11;
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

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1926() {
		return f12;
	}

	inline hw_uint<16> peek_1927() {
		return f14;
	}

	inline hw_uint<16> peek_1928() {
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
    // cap: 1 reading from capacity: 960
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 963
	// # of read delays: 962
	fifo<hw_uint<16>, 963> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(962 - offset);
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
  // bright_gauss_blur_2_rd0 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 19] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 1928 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
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
  // bright_gauss_blur_2_rd1 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 19] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
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
  // bright_gauss_blur_2_rd2 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 19] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
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
  // bright_gauss_blur_2_rd3 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 19] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 1927 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1927();
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
  // bright_gauss_blur_2_rd4 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 19] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
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
  // bright_gauss_blur_2_rd5 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 19] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
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
  // bright_gauss_blur_2_rd6 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 19] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 1926 : 0 <= d0 <= 959 and 0 <= d1 <= 540; bright_gauss_blur_2_update_0[d0, d1] -> (966 + d0) : d0 = 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1926();
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
  // bright_gauss_blur_2_rd7 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 19] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 963 : 0 <= d0 <= 959 and 0 <= d1 <= 540; bright_gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_963();
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
  // bright_gauss_blur_2_rd8 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 19] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
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
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { bright_laplace_diff_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 44] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_laplace_diff_1_update_0[d0, d1] -> 1928 : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
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
  // bright_laplace_us_0_rd0 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[o0, o1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 50] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { bright_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 18] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_laplace_us_0_update_0[d0, d1] -> (962 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 1919 and 0 < d1 <= 1079 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((962 - floord(2*d0, 4))) : 0);
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
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 478> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 478> f11;
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

	inline hw_uint<16> peek_480() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_481() {
		return f6;
	}

	inline hw_uint<16> peek_482() {
		return f8;
	}

	inline hw_uint<16> peek_483() {
		return f10;
	}

	inline hw_uint<16> peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_962() {
		return f12;
	}

	inline hw_uint<16> peek_963() {
		return f14;
	}

	inline hw_uint<16> peek_964() {
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
    // cap: 1 reading from capacity: 478
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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
    // cap: 1 reading from capacity: 478
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 484
	fifo<hw_uint<16>, 965> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(964 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 481
	// # of read delays: 482
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
  // bright_gauss_blur_3_rd0 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 21] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_964();
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
  // bright_gauss_blur_3_rd1 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 21] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 483 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_483();
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
  // bright_gauss_blur_3_rd2 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 21] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
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
  // bright_gauss_blur_3_rd3 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 21] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 963 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_963();
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
  // bright_gauss_blur_3_rd4 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 21] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 482 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_482();
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
  // bright_gauss_blur_3_rd5 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 21] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
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
  // bright_gauss_blur_3_rd6 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 21] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 962 : 0 <= d0 <= 477 and 0 <= d1 <= 268; bright_gauss_blur_3_update_0[d0, d1] -> (484 + d0) : d0 = 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_962();
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
  // bright_gauss_blur_3_rd7 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 21] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 481 : 0 <= d0 <= 477 and 0 <= d1 <= 268; bright_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_481();
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
  // bright_gauss_blur_3_rd8 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 21] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
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
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { bright_laplace_diff_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 24] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_laplace_diff_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 268; bright_laplace_diff_2_update_0[d0, d1] -> 963 : d0 = 479 and 0 <= d1 <= 268; bright_laplace_diff_2_update_0[d0, d1] -> (961 - d0) : d1 = 269 and 0 <= d0 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-479 + d0 == 0 && 268 - d1 >= 0) ? (963) : (268 - d1 >= 0 && 478 - d0 >= 0) ? (964) : (-269 + d1 == 0) ? ((961 - d0)) : 0);
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
  // bright_laplace_us_1_rd0 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[o0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 43] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { bright_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 20] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_laplace_us_1_update_0[d0, d1] -> (480 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 959 and 0 < d1 <= 539 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((480 - floord(2*d0, 4))) : 0);
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
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 240
	// # of read delays: 241
	fifo<hw_uint<16>, 240> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(239 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 239], [0, 134]}
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
  // bright_laplace_us_2_rd0 read pattern: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 23] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { bright_gauss_ds_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 22] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // DD fold: { bright_laplace_us_2_update_0[d0, d1] -> (239 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 477 and 0 < d1 <= 269 }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 477 - d0 >= 0) ? ((239 - floord(2*d0, 4))) : 0);
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
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { fused_level_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 38] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // Write schedule: { bright_gauss_ds_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 22] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
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
	// RAM Box: {[0, 1919], [0, 1079]}
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
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 52] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { bright_laplace_diff_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 51] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
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
	// RAM Box: {[0, 959], [0, 539]}
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
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { fused_level_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 47] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { bright_laplace_diff_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 44] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
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
	// RAM Box: {[0, 479], [0, 269]}
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
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { fused_level_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 25] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { bright_laplace_diff_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 24] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
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
	// RAM Box: {[0, 1919], [0, 1079]}
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
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { bright_laplace_diff_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 51] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { bright_laplace_us_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 50] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
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
	// RAM Box: {[0, 959], [0, 539]}
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
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { bright_laplace_diff_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 44] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { bright_laplace_us_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 43] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
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
	// RAM Box: {[0, 479], [0, 269]}
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
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { bright_laplace_diff_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 24] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { bright_laplace_us_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 23] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
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
	// RAM Box: {[0, 1926], [0, 1086]}
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
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // Write schedule: { bright_weights_update_0[i0, i1] -> [i1, i0, 6] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { weight_sums_update_0[i0, i1] -> [i1, i0, 7] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // Write schedule: { bright_weights_update_0[i0, i1] -> [i1, i0, 6] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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

struct bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 3857
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 1924> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 1924> f11;
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

	inline hw_uint<16> peek_1926() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1927() {
		return f6;
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}

	inline hw_uint<16> peek_3853() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_3854() {
		return f12;
	}

	inline hw_uint<16> peek_3855() {
		return f14;
	}

	inline hw_uint<16> peek_3856() {
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
    // cap: 1 reading from capacity: 1924
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1924
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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
  // bright_weights_normed_gauss_blur_1_rd0 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 32] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 3856 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_3856();
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
  // bright_weights_normed_gauss_blur_1_rd1 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 32] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1929 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_1929();
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
  // bright_weights_normed_gauss_blur_1_rd2 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 32] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
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
  // bright_weights_normed_gauss_blur_1_rd3 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 32] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 3855 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_3855();
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
  // bright_weights_normed_gauss_blur_1_rd4 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 32] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1928 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_1928();
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
  // bright_weights_normed_gauss_blur_1_rd5 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 32] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
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
  // bright_weights_normed_gauss_blur_1_rd6 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 32] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 3854 : 0 <= d0 <= 1923 and 0 <= d1 <= 1084; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (1930 + d0) : d0 = 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_3854();
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
  // bright_weights_normed_gauss_blur_1_rd7 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 32] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1927 : 0 <= d0 <= 1923 and 0 <= d1 <= 1084; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 1924 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_1927();
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
  // bright_weights_normed_gauss_blur_1_rd8 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 32] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: {  }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_0();
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
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 52] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> 3856 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_3856();
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
	// RAM Box: {[0, 1924], [0, 1084]}
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
  // bright_weights_normed_gauss_ds_1_rd0 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Read schedule : { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // Write schedule: { bright_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 32] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
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
	// RAM Box: {[0, 960], [0, 540]}
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
  // bright_weights_normed_gauss_ds_2_rd0 read pattern: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Read schedule : { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // Write schedule: { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 34] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
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
	// RAM Box: {[0, 478], [0, 268]}
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
  // bright_weights_normed_gauss_ds_3_rd0 read pattern: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { bright_weights_normed_gauss_ds_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 37] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // Write schedule: { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 36] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
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
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 1929
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 960> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 960> f11;
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

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1926() {
		return f12;
	}

	inline hw_uint<16> peek_1927() {
		return f14;
	}

	inline hw_uint<16> peek_1928() {
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
    // cap: 1 reading from capacity: 960
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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

struct bright_weights_normed_gauss_ds_1_cache {
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10;
};



inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd0 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 34] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1928 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
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
  // bright_weights_normed_gauss_blur_2_rd1 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 34] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
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
  // bright_weights_normed_gauss_blur_2_rd2 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 34] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
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
  // bright_weights_normed_gauss_blur_2_rd3 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 34] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1927 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1927();
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
  // bright_weights_normed_gauss_blur_2_rd4 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 34] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
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
  // bright_weights_normed_gauss_blur_2_rd5 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 34] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
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
  // bright_weights_normed_gauss_blur_2_rd6 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 34] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1926 : 0 <= d0 <= 959 and 0 <= d1 <= 540; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (966 + d0) : d0 = 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1926();
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
  // bright_weights_normed_gauss_blur_2_rd7 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 34] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 963 : 0 <= d0 <= 959 and 0 <= d1 <= 540; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_963();
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
  // bright_weights_normed_gauss_blur_2_rd8 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 34] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
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
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { fused_level_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 47] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 33] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { fused_level_1_update_0[d0, d1] -> 1928 : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
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

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 478> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 478> f11;
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

	inline hw_uint<16> peek_480() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_481() {
		return f6;
	}

	inline hw_uint<16> peek_482() {
		return f8;
	}

	inline hw_uint<16> peek_483() {
		return f10;
	}

	inline hw_uint<16> peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_962() {
		return f12;
	}

	inline hw_uint<16> peek_963() {
		return f14;
	}

	inline hw_uint<16> peek_964() {
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
    // cap: 1 reading from capacity: 478
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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
    // cap: 1 reading from capacity: 478
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 964
	// # of read delays: 483
	fifo<hw_uint<16>, 964> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(963 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_cache {
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
};



inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd0 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 36] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_964();
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
  // bright_weights_normed_gauss_blur_3_rd1 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 36] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 483 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_483();
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
  // bright_weights_normed_gauss_blur_3_rd2 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 36] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
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
  // bright_weights_normed_gauss_blur_3_rd3 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 36] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 963 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_963();
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
  // bright_weights_normed_gauss_blur_3_rd4 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 36] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 482 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_482();
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
  // bright_weights_normed_gauss_blur_3_rd5 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 36] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
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
  // bright_weights_normed_gauss_blur_3_rd6 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 36] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 962 : 0 <= d0 <= 477 and 0 <= d1 <= 268; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (484 + d0) : d0 = 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_962();
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
  // bright_weights_normed_gauss_blur_3_rd7 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 36] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 481 : 0 <= d0 <= 477 and 0 <= d1 <= 268; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_481();
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
  // bright_weights_normed_gauss_blur_3_rd8 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 36] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
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
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { fused_level_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 25] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 35] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { fused_level_2_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 268; fused_level_2_update_0[d0, d1] -> (961 - d0) : d1 = 269 and 0 <= d0 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (268 - d1 >= 0) ? (963) : (-269 + d1 == 0) ? ((961 - d0)) : 0);
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

struct bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 239], [0, 134]}
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
  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
  bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { fused_level_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 38] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // Write schedule: { bright_weights_normed_gauss_ds_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 37] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0 = bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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

struct dark_dark_update_0_write0_merged_banks_11_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 3857
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 1924> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 1924> f11;
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

	inline hw_uint<16> peek_1926() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1927() {
		return f6;
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}

	inline hw_uint<16> peek_3853() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_3854() {
		return f12;
	}

	inline hw_uint<16> peek_3855() {
		return f14;
	}

	inline hw_uint<16> peek_3856() {
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
    // cap: 1 reading from capacity: 1924
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1924
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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
  // dark_gauss_blur_1_rd0 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 10] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 3856 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_3856();
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
  // dark_gauss_blur_1_rd1 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 10] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1929 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_1929();
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
  // dark_gauss_blur_1_rd2 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 10] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
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
  // dark_gauss_blur_1_rd3 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 10] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 3855 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_3855();
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
  // dark_gauss_blur_1_rd4 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 10] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1928 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_1928();
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
  // dark_gauss_blur_1_rd5 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 10] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
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
  // dark_gauss_blur_1_rd6 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 10] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 3854 : 0 <= d0 <= 1923 and 0 <= d1 <= 1084; dark_gauss_blur_1_update_0[d0, d1] -> (1930 + d0) : d0 = 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_3854();
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
  // dark_gauss_blur_1_rd7 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 10] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1927 : 0 <= d0 <= 1923 and 0 <= d1 <= 1084; dark_gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 1924 and 0 <= d1 <= 1084 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_1927();
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
  // dark_gauss_blur_1_rd8 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 10] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { dark_laplace_diff_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 49] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_laplace_diff_0_update_0[d0, d1] -> 3856 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_3856();
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
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_weights_update_0[i0, i1] -> [i1, i0, 5] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // Write schedule: { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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
	// RAM Box: {[0, 1924], [0, 1084]}
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
  // dark_gauss_ds_1_rd0 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Read schedule : { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // Write schedule: { dark_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 10] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
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
	// RAM Box: {[0, 960], [0, 540]}
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
  // dark_gauss_ds_2_rd0 read pattern: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Read schedule : { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // Write schedule: { dark_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 12] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
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
	// RAM Box: {[0, 478], [0, 268]}
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
  // dark_gauss_ds_3_rd0 read pattern: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { dark_gauss_ds_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 15] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // Write schedule: { dark_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 14] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
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
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 1929
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 960> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 960> f11;
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

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1926() {
		return f12;
	}

	inline hw_uint<16> peek_1927() {
		return f14;
	}

	inline hw_uint<16> peek_1928() {
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
    // cap: 1 reading from capacity: 960
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 963
	// # of read delays: 962
	fifo<hw_uint<16>, 963> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(962 - offset);
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
  // dark_gauss_blur_2_rd0 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 12] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 1928 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
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
  // dark_gauss_blur_2_rd1 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 12] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
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
  // dark_gauss_blur_2_rd2 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 12] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
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
  // dark_gauss_blur_2_rd3 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 12] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 1927 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1927();
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
  // dark_gauss_blur_2_rd4 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 12] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
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
  // dark_gauss_blur_2_rd5 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 12] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
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
  // dark_gauss_blur_2_rd6 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 12] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 1926 : 0 <= d0 <= 959 and 0 <= d1 <= 540; dark_gauss_blur_2_update_0[d0, d1] -> (966 + d0) : d0 = 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1926();
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
  // dark_gauss_blur_2_rd7 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 12] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 963 : 0 <= d0 <= 959 and 0 <= d1 <= 540; dark_gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_963();
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
  // dark_gauss_blur_2_rd8 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 12] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
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
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { dark_laplace_diff_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 46] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_laplace_diff_1_update_0[d0, d1] -> 1928 : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
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
  // dark_laplace_us_0_rd0 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[o0, o1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 48] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { dark_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 11] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_laplace_us_0_update_0[d0, d1] -> (962 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 1919 and 0 < d1 <= 1079 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((962 - floord(2*d0, 4))) : 0);
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
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 478> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 478> f11;
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

	inline hw_uint<16> peek_480() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_481() {
		return f6;
	}

	inline hw_uint<16> peek_482() {
		return f8;
	}

	inline hw_uint<16> peek_483() {
		return f10;
	}

	inline hw_uint<16> peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_962() {
		return f12;
	}

	inline hw_uint<16> peek_963() {
		return f14;
	}

	inline hw_uint<16> peek_964() {
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
    // cap: 1 reading from capacity: 478
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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
    // cap: 1 reading from capacity: 478
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 484
	fifo<hw_uint<16>, 965> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(964 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 481
	// # of read delays: 482
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
  // dark_gauss_blur_3_rd0 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 14] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_964();
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
  // dark_gauss_blur_3_rd1 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 14] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 483 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_483();
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
  // dark_gauss_blur_3_rd2 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 14] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
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
  // dark_gauss_blur_3_rd3 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 14] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 963 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_963();
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
  // dark_gauss_blur_3_rd4 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 14] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 482 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_482();
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
  // dark_gauss_blur_3_rd5 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 14] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
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
  // dark_gauss_blur_3_rd6 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 14] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 962 : 0 <= d0 <= 477 and 0 <= d1 <= 268; dark_gauss_blur_3_update_0[d0, d1] -> (484 + d0) : d0 = 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_962();
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
  // dark_gauss_blur_3_rd7 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 14] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 481 : 0 <= d0 <= 477 and 0 <= d1 <= 268; dark_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_481();
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
  // dark_gauss_blur_3_rd8 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 14] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
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
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { dark_laplace_diff_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 17] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_laplace_diff_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 268; dark_laplace_diff_2_update_0[d0, d1] -> 963 : d0 = 479 and 0 <= d1 <= 268; dark_laplace_diff_2_update_0[d0, d1] -> (961 - d0) : d1 = 269 and 0 <= d0 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-479 + d0 == 0 && 268 - d1 >= 0) ? (963) : (268 - d1 >= 0 && 478 - d0 >= 0) ? (964) : (-269 + d1 == 0) ? ((961 - d0)) : 0);
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
  // dark_laplace_us_1_rd0 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[o0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 45] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { dark_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 13] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_laplace_us_1_update_0[d0, d1] -> (480 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 959 and 0 < d1 <= 539 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((480 - floord(2*d0, 4))) : 0);
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
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 240
	// # of read delays: 241
	fifo<hw_uint<16>, 240> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(239 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 239], [0, 134]}
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
  // dark_laplace_us_2_rd0 read pattern: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 16] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { dark_gauss_ds_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 15] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // DD fold: { dark_laplace_us_2_update_0[d0, d1] -> (239 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 477 and 0 < d1 <= 269 }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 477 - d0 >= 0) ? ((239 - floord(2*d0, 4))) : 0);
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
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { fused_level_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 38] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // Write schedule: { dark_gauss_ds_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 15] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
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
	// RAM Box: {[0, 1919], [0, 1079]}
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
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 52] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { dark_laplace_diff_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 49] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
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
	// RAM Box: {[0, 959], [0, 539]}
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
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { fused_level_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 47] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { dark_laplace_diff_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 46] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
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
	// RAM Box: {[0, 479], [0, 269]}
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
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { fused_level_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 25] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { dark_laplace_diff_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 17] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
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
	// RAM Box: {[0, 1919], [0, 1079]}
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
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { dark_laplace_diff_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 49] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { dark_laplace_us_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 48] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
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
	// RAM Box: {[0, 959], [0, 539]}
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
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { dark_laplace_diff_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 46] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { dark_laplace_us_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 45] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
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
	// RAM Box: {[0, 479], [0, 269]}
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
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { dark_laplace_diff_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 17] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { dark_laplace_us_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 16] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
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
	// RAM Box: {[0, 1926], [0, 1086]}
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
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // Write schedule: { dark_weights_update_0[i0, i1] -> [i1, i0, 5] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { weight_sums_update_0[i0, i1] -> [i1, i0, 7] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // Write schedule: { dark_weights_update_0[i0, i1] -> [i1, i0, 5] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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

struct dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 3857
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 1924> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 1924> f11;
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

	inline hw_uint<16> peek_1926() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1927() {
		return f6;
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}

	inline hw_uint<16> peek_3853() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_3854() {
		return f12;
	}

	inline hw_uint<16> peek_3855() {
		return f14;
	}

	inline hw_uint<16> peek_3856() {
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
    // cap: 1 reading from capacity: 1924
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1924
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
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
  // dark_weights_normed_gauss_blur_1_rd0 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 9] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 3856 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_3856();
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
  // dark_weights_normed_gauss_blur_1_rd1 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 9] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1929 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_1929();
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
  // dark_weights_normed_gauss_blur_1_rd2 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 9] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
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
  // dark_weights_normed_gauss_blur_1_rd3 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 9] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 3855 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_3855();
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
  // dark_weights_normed_gauss_blur_1_rd4 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 9] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1928 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_1928();
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
  // dark_weights_normed_gauss_blur_1_rd5 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 9] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
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
  // dark_weights_normed_gauss_blur_1_rd6 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 9] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 3854 : 0 <= d0 <= 1923 and 0 <= d1 <= 1084; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (1930 + d0) : d0 = 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_3854();
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
  // dark_weights_normed_gauss_blur_1_rd7 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 9] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1927 : 0 <= d0 <= 1923 and 0 <= d1 <= 1084; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (3 + d0) : d0 = 1924 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_1927();
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
  // dark_weights_normed_gauss_blur_1_rd8 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 1924 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 9] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: {  }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_0();
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
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 52] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> 3856 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_3856();
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

struct dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1924], [0, 1084]}
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
  // dark_weights_normed_gauss_ds_1_rd0 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Read schedule : { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // Write schedule: { dark_weights_normed_gauss_blur_1_update_0[i0, i1] -> [2 + i1, 2 + i0, 9] : 0 <= i0 <= 1924 and 0 <= i1 <= 1084 }
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
	// RAM Box: {[0, 960], [0, 540]}
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
  // dark_weights_normed_gauss_ds_2_rd0 read pattern: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Read schedule : { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // Write schedule: { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 27] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
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
	// RAM Box: {[0, 478], [0, 268]}
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
  // dark_weights_normed_gauss_ds_3_rd0 read pattern: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { dark_weights_normed_gauss_ds_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 30] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // Write schedule: { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 29] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
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
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 1929
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 960> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 960> f11;
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

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1926() {
		return f12;
	}

	inline hw_uint<16> peek_1927() {
		return f14;
	}

	inline hw_uint<16> peek_1928() {
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
    // cap: 1 reading from capacity: 960
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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

struct dark_weights_normed_gauss_ds_1_cache {
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10;
};



inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd0 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 27] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1928 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
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
  // dark_weights_normed_gauss_blur_2_rd1 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 27] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
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
  // dark_weights_normed_gauss_blur_2_rd2 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 27] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
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
  // dark_weights_normed_gauss_blur_2_rd3 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 27] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1927 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1927();
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
  // dark_weights_normed_gauss_blur_2_rd4 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 27] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
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
  // dark_weights_normed_gauss_blur_2_rd5 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 27] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
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
  // dark_weights_normed_gauss_blur_2_rd6 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 27] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1926 : 0 <= d0 <= 959 and 0 <= d1 <= 540; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (966 + d0) : d0 = 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1926();
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
  // dark_weights_normed_gauss_blur_2_rd7 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 27] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 963 : 0 <= d0 <= 959 and 0 <= d1 <= 540; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (3 + d0) : d0 = 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_963();
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
  // dark_weights_normed_gauss_blur_2_rd8 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 27] : 0 <= i0 <= 960 and 0 <= i1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
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
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { fused_level_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 47] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[i0, i1] -> [2 + 2i1, 2 + 2i0, 26] : 0 <= i0 <= 962 and 0 <= i1 <= 542 }
  // DD fold: { fused_level_1_update_0[d0, d1] -> 1928 : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
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

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 478> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 478> f11;
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

	inline hw_uint<16> peek_480() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_481() {
		return f6;
	}

	inline hw_uint<16> peek_482() {
		return f8;
	}

	inline hw_uint<16> peek_483() {
		return f10;
	}

	inline hw_uint<16> peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_962() {
		return f12;
	}

	inline hw_uint<16> peek_963() {
		return f14;
	}

	inline hw_uint<16> peek_964() {
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
    // cap: 1 reading from capacity: 478
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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
    // cap: 1 reading from capacity: 478
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 964
	// # of read delays: 483
	fifo<hw_uint<16>, 964> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(963 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_cache {
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
};



inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd0 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 29] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_964();
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
  // dark_weights_normed_gauss_blur_3_rd1 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 29] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 483 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_483();
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
  // dark_weights_normed_gauss_blur_3_rd2 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 29] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
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
  // dark_weights_normed_gauss_blur_3_rd3 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 29] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 963 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_963();
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
  // dark_weights_normed_gauss_blur_3_rd4 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 29] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 482 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_482();
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
  // dark_weights_normed_gauss_blur_3_rd5 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 29] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
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
  // dark_weights_normed_gauss_blur_3_rd6 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 29] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 962 : 0 <= d0 <= 477 and 0 <= d1 <= 268; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (484 + d0) : d0 = 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_962();
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
  // dark_weights_normed_gauss_blur_3_rd7 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 29] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 481 : 0 <= d0 <= 477 and 0 <= d1 <= 268; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_481();
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
  // dark_weights_normed_gauss_blur_3_rd8 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 29] : 0 <= i0 <= 478 and 0 <= i1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
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
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { fused_level_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 25] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[i0, i1] -> [6 + 4i1, 6 + 4i0, 28] : 0 <= i0 <= 480 and 0 <= i1 <= 270 }
  // DD fold: { fused_level_2_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 268; fused_level_2_update_0[d0, d1] -> (961 - d0) : d1 = 269 and 0 <= d0 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (268 - d1 >= 0) ? (963) : (-269 + d1 == 0) ? ((961 - d0)) : 0);
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

struct dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 239], [0, 134]}
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
  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
  dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { fused_level_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 38] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // Write schedule: { dark_weights_normed_gauss_ds_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 30] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0 = dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 1919], [0, 1079]}
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

inline hw_uint<16> psef_1920_1080_rd0_select(final_merged_0_cache& final_merged_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // psef_1920_1080_rd0 read pattern: { psef_1920_1080_update_0[d0, d1] -> final_merged_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { psef_1920_1080_update_0[i0, i1] -> [14 + i1, 14 + i0, 42] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { final_merged_0_update_0[i0, i1] -> [14 + i1, 14 + i0, 41] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
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

// psef_1920_1080_update_0_read
//	psef_1920_1080_rd0
inline hw_uint<16> final_merged_0_psef_1920_1080_update_0_read_bundle_read(final_merged_0_cache& final_merged_0, int d0, int d1) {
  // # of ports in bundle: 1
    // psef_1920_1080_rd0

	hw_uint<16> result;
	hw_uint<16> psef_1920_1080_rd0_res = psef_1920_1080_rd0_select(final_merged_0, d0, d1);
	set_at<0, 16>(result, psef_1920_1080_rd0_res);
	return result;
}

#include "hw_classes.h"

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache {
	// RAM Box: {[0, 959], [0, 539]}
	// Capacity: 960
	// # of read delays: 961
	fifo<hw_uint<16>, 960> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(959 - offset);
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
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[o0, o1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[i0, i1] -> [14 + i1, 14 + i0, 41] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { final_merged_1_update_0[i0, i1] -> [14 + 2i1, 14 + 2i0, 40] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> (959 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 1917 and 0 < d1 <= 1079 }
  auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 1917 - d0 >= 0) ? ((959 - floord(2*d0, 4))) : 0);
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
	// RAM Box: {[0, 479], [0, 269]}
	// Capacity: 480
	// # of read delays: 481
	fifo<hw_uint<16>, 480> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(479 - offset);
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
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[o0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_1_update_0[i0, i1] -> [14 + 2i1, 14 + 2i0, 40] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { final_merged_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 39] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // DD fold: { final_merged_1_update_0[d0, d1] -> (479 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 957 and 0 < d1 <= 539 }
  auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 957 - d0 >= 0) ? ((479 - floord(2*d0, 4))) : 0);
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
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 23052
	// # of read delays: 23052
	fifo<hw_uint<16>, 23052> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(23051 - offset);
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
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { final_merged_0_update_0[i0, i1] -> [14 + i1, 14 + i0, 41] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // Write schedule: { fused_level_0_update_0[i0, i1] -> [2 + i1, 2 + i0, 52] : 0 <= i0 <= 1919 and 0 <= i1 <= 1079 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> ((2073599 - d0) - 1920 * d1) : 0 <= d0 <= 1918 and 1069 <= d1 <= 1078; final_merged_0_update_0[d0, d1] -> (2071680 - 1920 * d1) : d0 = 1919 and 1069 <= d1 <= 1078; final_merged_0_update_0[d0, d1] -> (24959 - d0) : 1909 <= d0 <= 1918 and 0 <= d1 <= 1067; final_merged_0_update_0[d0, d1] -> 23040 : d0 = 1919 and 0 <= d1 <= 1067; final_merged_0_update_0[d0, d1] -> 23051 : 0 <= d0 <= 1908 and 0 <= d1 <= 1067; final_merged_0_update_0[d0, d1] -> (23039 - d0) : d1 = 1068 and 0 <= d0 <= 1918 and (d0 <= 1908 or d0 >= 1909); final_merged_0_update_0[d0, d1] -> 21120 : d0 = 1919 and d1 = 1068; final_merged_0_update_0[d0, d1] -> (1919 - d0) : d1 = 1079 and 0 <= d0 <= 1918 }
  auto value_fused_level_0_fused_level_0_update_0_write0 = fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ (-1068 + d1 == 0 && -1919 + d0 == 0) ? (21120) : (-1919 + d0 == 0 && 1067 - d1 >= 0) ? (23040) : (1067 - d1 >= 0 && 1908 - d0 >= 0) ? (23051) : (-1079 + d1 == 0 && 1918 - d0 >= 0) ? ((1919 - d0)) : (-1068 + d1 == 0 && 1918 - d0 >= 0) ? ((23039 - d0)) : (-1909 + d0 >= 0 && 1918 - d0 >= 0 && 1067 - d1 >= 0) ? ((24959 - d0)) : (-1919 + d0 == 0 && -1069 + d1 >= 0 && 1078 - d1 >= 0) ? ((2071680 - 1920 * d1)) : (1078 - d1 >= 0 && 1918 - d0 >= 0 && -1069 + d1 >= 0) ? (((2073599 - d0) - 1920 * d1)) : 0);
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
	// RAM Box: {[0, 959], [0, 539]}
	// Capacity: 3844
	// # of read delays: 3844
	fifo<hw_uint<16>, 3844> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3843 - offset);
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
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { final_merged_1_update_0[i0, i1] -> [14 + 2i1, 14 + 2i0, 40] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // Write schedule: { fused_level_1_update_0[i0, i1] -> [6 + 2i1, 6 + 2i0, 47] : 0 <= i0 <= 959 and 0 <= i1 <= 539 }
  // DD fold: { final_merged_1_update_0[d0, d1] -> ((518399 - d0) - 960 * d1) : 0 <= d0 <= 958 and 537 <= d1 <= 538; final_merged_1_update_0[d0, d1] -> (517440 - 960 * d1) : d0 = 959 and 537 <= d1 <= 538; final_merged_1_update_0[d0, d1] -> (4799 - d0) : 957 <= d0 <= 958 and 0 <= d1 <= 535; final_merged_1_update_0[d0, d1] -> 3840 : d0 = 959 and 0 <= d1 <= 535; final_merged_1_update_0[d0, d1] -> 3843 : 0 <= d0 <= 956 and 0 <= d1 <= 535; final_merged_1_update_0[d0, d1] -> (3839 - d0) : d1 = 536 and 0 <= d0 <= 958 and (d0 <= 956 or d0 >= 957); final_merged_1_update_0[d0, d1] -> 2880 : d0 = 959 and d1 = 536; final_merged_1_update_0[d0, d1] -> (959 - d0) : d1 = 539 and 0 <= d0 <= 958 }
  auto value_fused_level_1_fused_level_1_update_0_write0 = fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ (-536 + d1 == 0 && -959 + d0 == 0) ? (2880) : (-959 + d0 == 0 && 535 - d1 >= 0) ? (3840) : (535 - d1 >= 0 && 956 - d0 >= 0) ? (3843) : (-539 + d1 == 0 && 958 - d0 >= 0) ? ((959 - d0)) : (-536 + d1 == 0 && 958 - d0 >= 0) ? ((3839 - d0)) : (-957 + d0 >= 0 && 958 - d0 >= 0 && 535 - d1 >= 0) ? ((4799 - d0)) : (-959 + d0 == 0 && -537 + d1 >= 0 && 538 - d1 >= 0) ? ((517440 - 960 * d1)) : (538 - d1 >= 0 && 958 - d0 >= 0 && -537 + d1 >= 0) ? (((518399 - d0) - 960 * d1)) : 0);
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
	// RAM Box: {[0, 479], [0, 269]}
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
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { final_merged_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 39] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { fused_level_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 25] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
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
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 240
	// # of read delays: 241
	fifo<hw_uint<16>, 240> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(239 - offset);
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
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_2_update_0[i0, i1] -> [14 + 4i1, 14 + 4i0, 39] : 0 <= i0 <= 479 and 0 <= i1 <= 269 }
  // Write schedule: { fused_level_3_update_0[i0, i1] -> [14 + 8i1, 14 + 8i0, 38] : 0 <= i0 <= 239 and 0 <= i1 <= 134 }
  // DD fold: { final_merged_2_update_0[d0, d1] -> (239 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 477 and 0 < d1 <= 269 }
  auto value_fused_level_3_fused_level_3_update_0_write0 = fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 477 - d0 >= 0) ? ((239 - floord(2*d0, 4))) : 0);
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
	// RAM Box: {[0, 1926], [0, 1086]}
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
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_update_0[i0, i1] -> [i1, i0, 2] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // Write schedule: { in_update_0[i0, i1] -> [i1, i0, 1] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_update_0[i0, i1] -> [i1, i0, 4] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // Write schedule: { in_update_0[i0, i1] -> [i1, i0, 1] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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
	// RAM Box: {[0, 1926], [0, 1086]}
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
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_weights_normed_update_0[i0, i1] -> [i1, i0, 31] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // Write schedule: { weight_sums_update_0[i0, i1] -> [i1, i0, 7] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 1926 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_weights_normed_update_0[i0, i1] -> [i1, i0, 8] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
  // Write schedule: { weight_sums_update_0[i0, i1] -> [i1, i0, 7] : 0 <= i0 <= 1926 and 0 <= i1 <= 1086 }
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

inline void in_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_1(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1);

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

inline void psef_1920_1080_update_0(final_merged_0_cache& final_merged_0, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */psef_1920_1080, int d0, int d1) {
	// Consume: final_merged_0
	auto final_merged_0_0_c__0_value = final_merged_0_psef_1920_1080_update_0_read_bundle_read(final_merged_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(final_merged_0_0_c__0_value);
	// Produce: psef_1920_1080
	psef_1920_1080.write(compute_result);

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

// Driver function
void psef_1920_1080_naive(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */psef_1920_1080, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("psef_1920_1080_naive_debug.csv");
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
	for (int c0 = 0; c0 <= 1093; c0 += 1) {
	  if (c0 >= 1087) {
	    for (int c1 = 14; c1 <= 1933; c1 += 1) {
	      if (c0 == 1090 && (c1 + 2) % 4 == 0) {
	dark_laplace_us_2_update_0(dark_gauss_ds_3, dark_laplace_us_2, (c1 - 14) / 4, 269);
	dark_laplace_diff_2_update_0(dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2, (c1 - 14) / 4, 269);
	bright_laplace_us_2_update_0(bright_gauss_ds_3, bright_laplace_us_2, (c1 - 14) / 4, 269);
	bright_laplace_diff_2_update_0(bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2, (c1 - 14) / 4, 269);
	fused_level_2_update_0(bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2, fused_level_2, (c1 - 14) / 4, 269);
	final_merged_2_update_0(fused_level_3, fused_level_2, final_merged_2, (c1 - 14) / 4, 269);
	      }
	      if (c0 % 2 == 0 && c1 % 2 == 0)
	final_merged_1_update_0(final_merged_2, fused_level_1, final_merged_1, (c1 / 2) - 7, (c0 / 2) - 7);
	final_merged_0_update_0(final_merged_1, fused_level_0, final_merged_0, c1 - 14, c0 - 14);
	psef_1920_1080_update_0(final_merged_0, psef_1920_1080, c1 - 14, c0 - 14);
	    }
	  } else {
	    for (int c1 = 0; c1 <= 1926; c1 += 1) {
	in_update_0(in_off_chip, in, c1, c0);
	bright_update_0(in, bright, c1, c0);
	      if (c0 >= 2 && c1 >= 2)
	bright_gauss_blur_1_update_0(bright, bright_gauss_blur_1, c1 - 2, c0 - 2);
	dark_update_0(in, dark, c1, c0);
	dark_weights_update_0(dark, dark_weights, c1, c0);
	bright_weights_update_0(bright, bright_weights, c1, c0);
	weight_sums_update_0(dark_weights, bright_weights, weight_sums, c1, c0);
	dark_weights_normed_update_0(dark_weights, weight_sums, dark_weights_normed, c1, c0);
	      if (c0 >= 2 && c1 >= 2) {
	dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed, dark_weights_normed_gauss_blur_1, c1 - 2, c0 - 2);
	dark_gauss_blur_1_update_0(dark, dark_gauss_blur_1, c1 - 2, c0 - 2);
	        if (c0 % 2 == 0 && c1 % 2 == 0) {
	dark_gauss_ds_1_update_0(dark_gauss_blur_1, dark_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	          if (c0 >= 6 && c1 >= 6) {
	dark_gauss_blur_2_update_0(dark_gauss_ds_1, dark_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	            if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
	dark_gauss_ds_2_update_0(dark_gauss_blur_2, dark_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	              if (c0 >= 14 && c1 >= 14) {
	dark_gauss_blur_3_update_0(dark_gauss_ds_2, dark_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	                if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0)
	dark_gauss_ds_3_update_0(dark_gauss_blur_3, dark_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	dark_laplace_us_2_update_0(dark_gauss_ds_3, dark_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	dark_laplace_diff_2_update_0(dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	              }
	            }
	          }
	bright_gauss_ds_1_update_0(bright_gauss_blur_1, bright_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	          if (c0 >= 6 && c1 >= 6) {
	bright_gauss_blur_2_update_0(bright_gauss_ds_1, bright_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	            if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
	bright_gauss_ds_2_update_0(bright_gauss_blur_2, bright_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	              if (c0 >= 14 && c1 >= 14) {
	bright_gauss_blur_3_update_0(bright_gauss_ds_2, bright_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	                if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0)
	bright_gauss_ds_3_update_0(bright_gauss_blur_3, bright_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	bright_laplace_us_2_update_0(bright_gauss_ds_3, bright_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	bright_laplace_diff_2_update_0(bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	fused_level_2_update_0(bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2, fused_level_2, (c1 - 14) / 4, (c0 - 14) / 4);
	              }
	            }
	          }
	dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	          if (c0 >= 6 && c1 >= 6) {
	dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	            if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
	dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	              if (c0 >= 14 && c1 >= 14) {
	dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	                if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0)
	dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	              }
	            }
	          }
	        }
	      }
	bright_weights_normed_update_0(bright_weights, weight_sums, bright_weights_normed, c1, c0);
	      if (c0 >= 2 && c1 >= 2) {
	bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed, bright_weights_normed_gauss_blur_1, c1 - 2, c0 - 2);
	        if (c0 % 2 == 0 && c1 % 2 == 0) {
	bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	          if (c0 >= 6 && c1 >= 6) {
	bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	            if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
	bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	              if (c0 >= 14 && c1 >= 14) {
	bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	                if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0) {
	bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	fused_level_3_update_0(bright_gauss_ds_3, dark_gauss_ds_3, bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3, fused_level_3, (c1 - 14) / 8, (c0 - 14) / 8);
	                }
	final_merged_2_update_0(fused_level_3, fused_level_2, final_merged_2, (c1 - 14) / 4, (c0 - 14) / 4);
	              }
	            }
	            if (c0 >= 14 && c1 >= 14)
	final_merged_1_update_0(final_merged_2, fused_level_1, final_merged_1, (c1 / 2) - 7, (c0 / 2) - 7);
	          }
	        }
	        if (c0 >= 14 && c1 >= 14) {
	final_merged_0_update_0(final_merged_1, fused_level_0, final_merged_0, c1 - 14, c0 - 14);
	psef_1920_1080_update_0(final_merged_0, psef_1920_1080, c1 - 14, c0 - 14);
	        }
	        if (c0 >= 6 && c0 <= 1084 && c1 >= 6 && c1 <= 1924 && c0 % 2 == 0 && c1 % 2 == 0) {
	bright_laplace_us_1_update_0(bright_gauss_ds_2, bright_laplace_us_1, (c1 / 2) - 3, (c0 / 2) - 3);
	bright_laplace_diff_1_update_0(bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1, (c1 / 2) - 3, (c0 / 2) - 3);
	dark_laplace_us_1_update_0(dark_gauss_ds_2, dark_laplace_us_1, (c1 / 2) - 3, (c0 / 2) - 3);
	dark_laplace_diff_1_update_0(dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1, (c1 / 2) - 3, (c0 / 2) - 3);
	fused_level_1_update_0(bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1, fused_level_1, (c1 / 2) - 3, (c0 / 2) - 3);
	        }
	        if (c0 <= 1081 && c1 <= 1921) {
	dark_laplace_us_0_update_0(dark_gauss_ds_1, dark_laplace_us_0, c1 - 2, c0 - 2);
	dark_laplace_diff_0_update_0(dark, dark_laplace_us_0, dark_laplace_diff_0, c1 - 2, c0 - 2);
	bright_laplace_us_0_update_0(bright_gauss_ds_1, bright_laplace_us_0, c1 - 2, c0 - 2);
	bright_laplace_diff_0_update_0(bright, bright_laplace_us_0, bright_laplace_diff_0, c1 - 2, c0 - 2);
	fused_level_0_update_0(bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed, dark_weights_normed, fused_level_0, c1 - 2, c0 - 2);
	        }
	      }
	    }
	    if (c0 >= 14)
	      for (int c1 = 1927; c1 <= 1933; c1 += 1) {
	        if (c1 == 1930 && (c0 + 2) % 4 == 0) {
	dark_laplace_us_2_update_0(dark_gauss_ds_3, dark_laplace_us_2, 479, (c0 - 14) / 4);
	dark_laplace_diff_2_update_0(dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2, 479, (c0 - 14) / 4);
	bright_laplace_us_2_update_0(bright_gauss_ds_3, bright_laplace_us_2, 479, (c0 - 14) / 4);
	bright_laplace_diff_2_update_0(bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2, 479, (c0 - 14) / 4);
	fused_level_2_update_0(bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2, fused_level_2, 479, (c0 - 14) / 4);
	final_merged_2_update_0(fused_level_3, fused_level_2, final_merged_2, 479, (c0 - 14) / 4);
	        }
	        if (c0 % 2 == 0 && c1 % 2 == 0)
	final_merged_1_update_0(final_merged_2, fused_level_1, final_merged_1, (c1 / 2) - 7, (c0 / 2) - 7);
	final_merged_0_update_0(final_merged_1, fused_level_0, final_merged_0, c1 - 14, c0 - 14);
	psef_1920_1080_update_0(final_merged_0, psef_1920_1080, c1 - 14, c0 - 14);
	      }
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void psef_1920_1080_naive(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */psef_1920_1080) {

  psef_1920_1080_naive(in_off_chip, psef_1920_1080, 1);
}
#ifdef __VIVADO_SYNTH__
//#include "psef_1920_1080_naive.h"

const int in_update_0_read_num_transfers = 2094649;
const int psef_1920_1080_update_0_write_num_transfers = 2073600;


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

static void write_psef_1920_1080_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = psef_1920_1080_update_0_write_num_transfers*1;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void psef_1920_1080_naive_accel(hw_uint<16>* in_update_0_read, hw_uint<16>* psef_1920_1080_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = psef_1920_1080_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = psef_1920_1080_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > in_update_0_read_channel;
  static HWStream<hw_uint<16> > psef_1920_1080_update_0_write_channel;

  read_in_update_0_read(in_update_0_read, in_update_0_read_channel, size);

  psef_1920_1080_naive(in_update_0_read_channel, psef_1920_1080_update_0_write_channel, size);

  write_psef_1920_1080_update_0_write(psef_1920_1080_update_0_write, psef_1920_1080_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

