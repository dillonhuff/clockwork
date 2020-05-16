#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "psefn_4_opt_compute_units.h"

#include "hw_classes.h"

struct bright_bright_update_0_write0_merged_banks_11_cache {
	// RAM Box: {[0, 1928], [0, 1926]}
	// Capacity: 968
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 481> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
		return f6;
	}

	inline hw_uint<16> peek_965() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_bright_update_0_write1_merged_banks_11_cache {
	// RAM Box: {[1, 1929], [0, 1926]}
	// Capacity: 968
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 481> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
		return f6;
	}

	inline hw_uint<16> peek_965() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_bright_update_0_write2_merged_banks_11_cache {
	// RAM Box: {[2, 1930], [0, 1926]}
	// Capacity: 968
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 482> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 482> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_484() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_967() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_bright_update_0_write3_merged_banks_11_cache {
	// RAM Box: {[3, 1931], [0, 1926]}
	// Capacity: 968
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 482> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 482> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_484() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_967() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f3.push(f2);
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
  bright_bright_update_0_write1_merged_banks_11_cache bright_bright_update_0_write1_merged_banks_11;
  bright_bright_update_0_write2_merged_banks_11_cache bright_bright_update_0_write2_merged_banks_11;
  bright_bright_update_0_write3_merged_banks_11_cache bright_bright_update_0_write3_merged_banks_11;
};



inline void bright_bright_update_0_write0_write(hw_uint<16>& bright_bright_update_0_write0, bright_cache& bright, int d0, int d1) {
  bright.bright_bright_update_0_write0_merged_banks_11.push(bright_bright_update_0_write0);
}

inline void bright_bright_update_0_write1_write(hw_uint<16>& bright_bright_update_0_write1, bright_cache& bright, int d0, int d1) {
  bright.bright_bright_update_0_write1_merged_banks_11.push(bright_bright_update_0_write1);
}

inline void bright_bright_update_0_write2_write(hw_uint<16>& bright_bright_update_0_write2, bright_cache& bright, int d0, int d1) {
  bright.bright_bright_update_0_write2_merged_banks_11.push(bright_bright_update_0_write2);
}

inline void bright_bright_update_0_write3_write(hw_uint<16>& bright_bright_update_0_write3, bright_cache& bright, int d0, int d1) {
  bright.bright_bright_update_0_write3_merged_banks_11.push(bright_bright_update_0_write3);
}

inline hw_uint<16> bright_gauss_blur_1_rd0_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd0 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_967();
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
  // bright_gauss_blur_1_rd1 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_484();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd10_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd10 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_484();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd11_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd11 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd12_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd12 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd13_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd13 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_484();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd14_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd14 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd15_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd15 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd16_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd16 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_484();
  return value_bright_bright_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd17_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd17 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd18_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd18 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd19_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd19 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_484();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd2_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd2 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd20_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd20 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd21_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd21 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd22_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd22 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_484();
  return value_bright_bright_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd23_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd23 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd24_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd24 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[4 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_966();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd25_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd25 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[4 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_483();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd26_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd26 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[4 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd27_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd27 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd28_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd28 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_484();
  return value_bright_bright_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd29_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd29 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd3_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd3 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd30_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd30 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[4 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_966();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd31_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd31 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[4 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_483();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd32_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd32 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[4 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd33_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd33 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[5 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_966();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd34_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd34 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[5 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_483();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd35_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd35 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[5 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd4_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd4 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_484();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd5_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd5 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd6_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd6 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd7_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd7 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_484();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd8_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd8 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_1_rd9_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd9 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_0_rd0_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_laplace_diff_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_0_rd1_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd1 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_laplace_diff_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_0_rd2_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd2 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_laplace_diff_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_0_rd3_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd3 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_laplace_diff_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_967();
  return value_bright_bright_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_rd0_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_rd1_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_rd1 read pattern: { bright_weights_update_0[d0, d1] -> bright[1 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_rd2_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_rd2 read pattern: { bright_weights_update_0[d0, d1] -> bright[2 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_rd3_select(bright_cache& bright, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_rd3 read pattern: { bright_weights_update_0[d0, d1] -> bright[3 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write3;
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
//	bright_gauss_blur_1_rd9
//	bright_gauss_blur_1_rd10
//	bright_gauss_blur_1_rd11
//	bright_gauss_blur_1_rd12
//	bright_gauss_blur_1_rd13
//	bright_gauss_blur_1_rd14
//	bright_gauss_blur_1_rd15
//	bright_gauss_blur_1_rd16
//	bright_gauss_blur_1_rd17
//	bright_gauss_blur_1_rd18
//	bright_gauss_blur_1_rd19
//	bright_gauss_blur_1_rd20
//	bright_gauss_blur_1_rd21
//	bright_gauss_blur_1_rd22
//	bright_gauss_blur_1_rd23
//	bright_gauss_blur_1_rd24
//	bright_gauss_blur_1_rd25
//	bright_gauss_blur_1_rd26
//	bright_gauss_blur_1_rd27
//	bright_gauss_blur_1_rd28
//	bright_gauss_blur_1_rd29
//	bright_gauss_blur_1_rd30
//	bright_gauss_blur_1_rd31
//	bright_gauss_blur_1_rd32
//	bright_gauss_blur_1_rd33
//	bright_gauss_blur_1_rd34
//	bright_gauss_blur_1_rd35
inline hw_uint<576> bright_bright_gauss_blur_1_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
  // # of ports in bundle: 36
    // bright_gauss_blur_1_rd0
    // bright_gauss_blur_1_rd1
    // bright_gauss_blur_1_rd2
    // bright_gauss_blur_1_rd3
    // bright_gauss_blur_1_rd4
    // bright_gauss_blur_1_rd5
    // bright_gauss_blur_1_rd6
    // bright_gauss_blur_1_rd7
    // bright_gauss_blur_1_rd8
    // bright_gauss_blur_1_rd9
    // bright_gauss_blur_1_rd10
    // bright_gauss_blur_1_rd11
    // bright_gauss_blur_1_rd12
    // bright_gauss_blur_1_rd13
    // bright_gauss_blur_1_rd14
    // bright_gauss_blur_1_rd15
    // bright_gauss_blur_1_rd16
    // bright_gauss_blur_1_rd17
    // bright_gauss_blur_1_rd18
    // bright_gauss_blur_1_rd19
    // bright_gauss_blur_1_rd20
    // bright_gauss_blur_1_rd21
    // bright_gauss_blur_1_rd22
    // bright_gauss_blur_1_rd23
    // bright_gauss_blur_1_rd24
    // bright_gauss_blur_1_rd25
    // bright_gauss_blur_1_rd26
    // bright_gauss_blur_1_rd27
    // bright_gauss_blur_1_rd28
    // bright_gauss_blur_1_rd29
    // bright_gauss_blur_1_rd30
    // bright_gauss_blur_1_rd31
    // bright_gauss_blur_1_rd32
    // bright_gauss_blur_1_rd33
    // bright_gauss_blur_1_rd34
    // bright_gauss_blur_1_rd35

	hw_uint<576> result;
	hw_uint<16> bright_gauss_blur_1_rd0_res = bright_gauss_blur_1_rd0_select(bright, d0, d1);
	set_at<0, 576>(result, bright_gauss_blur_1_rd0_res);
	hw_uint<16> bright_gauss_blur_1_rd1_res = bright_gauss_blur_1_rd1_select(bright, d0, d1);
	set_at<16, 576>(result, bright_gauss_blur_1_rd1_res);
	hw_uint<16> bright_gauss_blur_1_rd2_res = bright_gauss_blur_1_rd2_select(bright, d0, d1);
	set_at<32, 576>(result, bright_gauss_blur_1_rd2_res);
	hw_uint<16> bright_gauss_blur_1_rd3_res = bright_gauss_blur_1_rd3_select(bright, d0, d1);
	set_at<48, 576>(result, bright_gauss_blur_1_rd3_res);
	hw_uint<16> bright_gauss_blur_1_rd4_res = bright_gauss_blur_1_rd4_select(bright, d0, d1);
	set_at<64, 576>(result, bright_gauss_blur_1_rd4_res);
	hw_uint<16> bright_gauss_blur_1_rd5_res = bright_gauss_blur_1_rd5_select(bright, d0, d1);
	set_at<80, 576>(result, bright_gauss_blur_1_rd5_res);
	hw_uint<16> bright_gauss_blur_1_rd6_res = bright_gauss_blur_1_rd6_select(bright, d0, d1);
	set_at<96, 576>(result, bright_gauss_blur_1_rd6_res);
	hw_uint<16> bright_gauss_blur_1_rd7_res = bright_gauss_blur_1_rd7_select(bright, d0, d1);
	set_at<112, 576>(result, bright_gauss_blur_1_rd7_res);
	hw_uint<16> bright_gauss_blur_1_rd8_res = bright_gauss_blur_1_rd8_select(bright, d0, d1);
	set_at<128, 576>(result, bright_gauss_blur_1_rd8_res);
	hw_uint<16> bright_gauss_blur_1_rd9_res = bright_gauss_blur_1_rd9_select(bright, d0, d1);
	set_at<144, 576>(result, bright_gauss_blur_1_rd9_res);
	hw_uint<16> bright_gauss_blur_1_rd10_res = bright_gauss_blur_1_rd10_select(bright, d0, d1);
	set_at<160, 576>(result, bright_gauss_blur_1_rd10_res);
	hw_uint<16> bright_gauss_blur_1_rd11_res = bright_gauss_blur_1_rd11_select(bright, d0, d1);
	set_at<176, 576>(result, bright_gauss_blur_1_rd11_res);
	hw_uint<16> bright_gauss_blur_1_rd12_res = bright_gauss_blur_1_rd12_select(bright, d0, d1);
	set_at<192, 576>(result, bright_gauss_blur_1_rd12_res);
	hw_uint<16> bright_gauss_blur_1_rd13_res = bright_gauss_blur_1_rd13_select(bright, d0, d1);
	set_at<208, 576>(result, bright_gauss_blur_1_rd13_res);
	hw_uint<16> bright_gauss_blur_1_rd14_res = bright_gauss_blur_1_rd14_select(bright, d0, d1);
	set_at<224, 576>(result, bright_gauss_blur_1_rd14_res);
	hw_uint<16> bright_gauss_blur_1_rd15_res = bright_gauss_blur_1_rd15_select(bright, d0, d1);
	set_at<240, 576>(result, bright_gauss_blur_1_rd15_res);
	hw_uint<16> bright_gauss_blur_1_rd16_res = bright_gauss_blur_1_rd16_select(bright, d0, d1);
	set_at<256, 576>(result, bright_gauss_blur_1_rd16_res);
	hw_uint<16> bright_gauss_blur_1_rd17_res = bright_gauss_blur_1_rd17_select(bright, d0, d1);
	set_at<272, 576>(result, bright_gauss_blur_1_rd17_res);
	hw_uint<16> bright_gauss_blur_1_rd18_res = bright_gauss_blur_1_rd18_select(bright, d0, d1);
	set_at<288, 576>(result, bright_gauss_blur_1_rd18_res);
	hw_uint<16> bright_gauss_blur_1_rd19_res = bright_gauss_blur_1_rd19_select(bright, d0, d1);
	set_at<304, 576>(result, bright_gauss_blur_1_rd19_res);
	hw_uint<16> bright_gauss_blur_1_rd20_res = bright_gauss_blur_1_rd20_select(bright, d0, d1);
	set_at<320, 576>(result, bright_gauss_blur_1_rd20_res);
	hw_uint<16> bright_gauss_blur_1_rd21_res = bright_gauss_blur_1_rd21_select(bright, d0, d1);
	set_at<336, 576>(result, bright_gauss_blur_1_rd21_res);
	hw_uint<16> bright_gauss_blur_1_rd22_res = bright_gauss_blur_1_rd22_select(bright, d0, d1);
	set_at<352, 576>(result, bright_gauss_blur_1_rd22_res);
	hw_uint<16> bright_gauss_blur_1_rd23_res = bright_gauss_blur_1_rd23_select(bright, d0, d1);
	set_at<368, 576>(result, bright_gauss_blur_1_rd23_res);
	hw_uint<16> bright_gauss_blur_1_rd24_res = bright_gauss_blur_1_rd24_select(bright, d0, d1);
	set_at<384, 576>(result, bright_gauss_blur_1_rd24_res);
	hw_uint<16> bright_gauss_blur_1_rd25_res = bright_gauss_blur_1_rd25_select(bright, d0, d1);
	set_at<400, 576>(result, bright_gauss_blur_1_rd25_res);
	hw_uint<16> bright_gauss_blur_1_rd26_res = bright_gauss_blur_1_rd26_select(bright, d0, d1);
	set_at<416, 576>(result, bright_gauss_blur_1_rd26_res);
	hw_uint<16> bright_gauss_blur_1_rd27_res = bright_gauss_blur_1_rd27_select(bright, d0, d1);
	set_at<432, 576>(result, bright_gauss_blur_1_rd27_res);
	hw_uint<16> bright_gauss_blur_1_rd28_res = bright_gauss_blur_1_rd28_select(bright, d0, d1);
	set_at<448, 576>(result, bright_gauss_blur_1_rd28_res);
	hw_uint<16> bright_gauss_blur_1_rd29_res = bright_gauss_blur_1_rd29_select(bright, d0, d1);
	set_at<464, 576>(result, bright_gauss_blur_1_rd29_res);
	hw_uint<16> bright_gauss_blur_1_rd30_res = bright_gauss_blur_1_rd30_select(bright, d0, d1);
	set_at<480, 576>(result, bright_gauss_blur_1_rd30_res);
	hw_uint<16> bright_gauss_blur_1_rd31_res = bright_gauss_blur_1_rd31_select(bright, d0, d1);
	set_at<496, 576>(result, bright_gauss_blur_1_rd31_res);
	hw_uint<16> bright_gauss_blur_1_rd32_res = bright_gauss_blur_1_rd32_select(bright, d0, d1);
	set_at<512, 576>(result, bright_gauss_blur_1_rd32_res);
	hw_uint<16> bright_gauss_blur_1_rd33_res = bright_gauss_blur_1_rd33_select(bright, d0, d1);
	set_at<528, 576>(result, bright_gauss_blur_1_rd33_res);
	hw_uint<16> bright_gauss_blur_1_rd34_res = bright_gauss_blur_1_rd34_select(bright, d0, d1);
	set_at<544, 576>(result, bright_gauss_blur_1_rd34_res);
	hw_uint<16> bright_gauss_blur_1_rd35_res = bright_gauss_blur_1_rd35_select(bright, d0, d1);
	set_at<560, 576>(result, bright_gauss_blur_1_rd35_res);
	return result;
}

// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
//	bright_laplace_diff_0_rd1
//	bright_laplace_diff_0_rd2
//	bright_laplace_diff_0_rd3
inline hw_uint<64> bright_bright_laplace_diff_0_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
  // # of ports in bundle: 4
    // bright_laplace_diff_0_rd0
    // bright_laplace_diff_0_rd1
    // bright_laplace_diff_0_rd2
    // bright_laplace_diff_0_rd3

	hw_uint<64> result;
	hw_uint<16> bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright, d0, d1);
	set_at<0, 64>(result, bright_laplace_diff_0_rd0_res);
	hw_uint<16> bright_laplace_diff_0_rd1_res = bright_laplace_diff_0_rd1_select(bright, d0, d1);
	set_at<16, 64>(result, bright_laplace_diff_0_rd1_res);
	hw_uint<16> bright_laplace_diff_0_rd2_res = bright_laplace_diff_0_rd2_select(bright, d0, d1);
	set_at<32, 64>(result, bright_laplace_diff_0_rd2_res);
	hw_uint<16> bright_laplace_diff_0_rd3_res = bright_laplace_diff_0_rd3_select(bright, d0, d1);
	set_at<48, 64>(result, bright_laplace_diff_0_rd3_res);
	return result;
}

// bright_update_0_write
//	bright_bright_update_0_write0
//	bright_bright_update_0_write1
//	bright_bright_update_0_write2
//	bright_bright_update_0_write3
inline void bright_bright_update_0_write_bundle_write(hw_uint<64>& bright_update_0_write, bright_cache& bright, int d0, int d1) {
	hw_uint<16> bright_bright_update_0_write0_res = bright_update_0_write.extract<0, 15>();
	bright_bright_update_0_write0_write(bright_bright_update_0_write0_res, bright, d0, d1);
	hw_uint<16> bright_bright_update_0_write1_res = bright_update_0_write.extract<16, 31>();
	bright_bright_update_0_write1_write(bright_bright_update_0_write1_res, bright, d0, d1);
	hw_uint<16> bright_bright_update_0_write2_res = bright_update_0_write.extract<32, 47>();
	bright_bright_update_0_write2_write(bright_bright_update_0_write2_res, bright, d0, d1);
	hw_uint<16> bright_bright_update_0_write3_res = bright_update_0_write.extract<48, 63>();
	bright_bright_update_0_write3_write(bright_bright_update_0_write3_res, bright, d0, d1);
}

// bright_weights_update_0_read
//	bright_weights_rd0
//	bright_weights_rd1
//	bright_weights_rd2
//	bright_weights_rd3
inline hw_uint<64> bright_bright_weights_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
  // # of ports in bundle: 4
    // bright_weights_rd0
    // bright_weights_rd1
    // bright_weights_rd2
    // bright_weights_rd3

	hw_uint<64> result;
	hw_uint<16> bright_weights_rd0_res = bright_weights_rd0_select(bright, d0, d1);
	set_at<0, 64>(result, bright_weights_rd0_res);
	hw_uint<16> bright_weights_rd1_res = bright_weights_rd1_select(bright, d0, d1);
	set_at<16, 64>(result, bright_weights_rd1_res);
	hw_uint<16> bright_weights_rd2_res = bright_weights_rd2_select(bright, d0, d1);
	set_at<32, 64>(result, bright_weights_rd2_res);
	hw_uint<16> bright_weights_rd3_res = bright_weights_rd3_select(bright, d0, d1);
	set_at<48, 64>(result, bright_weights_rd3_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1924], [0, 1924]}
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

struct bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1926], [0, 1924]}
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
  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2_merged_banks_1_cache bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2_merged_banks_1;
};



inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1.push(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0);
}

inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
}

inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2_merged_banks_1.push(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2);
}

inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write3_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write3, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
}

inline hw_uint<16> bright_gauss_ds_1_rd0_select(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_1_rd0 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[4d0, 2d1] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Read schedule : { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Write schedule: { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // DD fold: {  }
  auto value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0 = bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_ds_1_rd1_select(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_1_rd1 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2 + 4d0, 2d1] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Read schedule : { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Write schedule: { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 10] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // DD fold: {  }
  auto value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2 = bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_gauss_blur_1_update_0_write
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write3
inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(hw_uint<64>& bright_gauss_blur_1_update_0_write, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	hw_uint<16> bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res = bright_gauss_blur_1_update_0_write.extract<0, 15>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res, bright_gauss_blur_1, d0, d1);
	hw_uint<16> bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_res = bright_gauss_blur_1_update_0_write.extract<16, 31>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_res, bright_gauss_blur_1, d0, d1);
	hw_uint<16> bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2_res = bright_gauss_blur_1_update_0_write.extract<32, 47>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write2_res, bright_gauss_blur_1, d0, d1);
	hw_uint<16> bright_gauss_blur_1_bright_gauss_blur_1_update_0_write3_res = bright_gauss_blur_1_update_0_write.extract<48, 63>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write3_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write3_res, bright_gauss_blur_1, d0, d1);
}

// bright_gauss_ds_1_update_0_read
//	bright_gauss_ds_1_rd0
//	bright_gauss_ds_1_rd1
inline hw_uint<32> bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  // # of ports in bundle: 2
    // bright_gauss_ds_1_rd0
    // bright_gauss_ds_1_rd1

	hw_uint<32> result;
	hw_uint<16> bright_gauss_ds_1_rd0_res = bright_gauss_ds_1_rd0_select(bright_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, bright_gauss_ds_1_rd0_res);
	hw_uint<16> bright_gauss_ds_1_rd1_res = bright_gauss_ds_1_rd1_select(bright_gauss_blur_1, d0, d1);
	set_at<16, 32>(result, bright_gauss_ds_1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 960], [0, 960]}
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

inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write1_write(hw_uint<16>& bright_gauss_blur_2_bright_gauss_blur_2_update_0_write1, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
}

inline hw_uint<16> bright_gauss_ds_2_rd0_select(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_2_rd0 read pattern: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // Read schedule : { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // Write schedule: { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
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
//	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write1
inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& bright_gauss_blur_2_update_0_write, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	hw_uint<16> bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res = bright_gauss_blur_2_update_0_write.extract<0, 15>();
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res, bright_gauss_blur_2, d0, d1);
	hw_uint<16> bright_gauss_blur_2_bright_gauss_blur_2_update_0_write1_res = bright_gauss_blur_2_update_0_write.extract<16, 31>();
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write1_write(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write1_res, bright_gauss_blur_2, d0, d1);
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
	// RAM Box: {[0, 478], [0, 478]}
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
  // bright_gauss_ds_3_rd0 read pattern: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Read schedule : { bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 30] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Write schedule: { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
	// RAM Box: {[0, 962], [0, 962]}
	// Capacity: 966
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 480> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 480> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}

	inline hw_uint<16> peek_483() {
		return f6;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 962], [0, 962]}
	// Capacity: 482
	// # of read delays: 481
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

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1_cache {
	// RAM Box: {[0, 962], [0, 962]}
	// Capacity: 482
	// # of read delays: 481
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

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10_cache {
	// RAM Box: {[1, 963], [0, 962]}
	// Capacity: 966
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 480> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 480> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}

	inline hw_uint<16> peek_483() {
		return f6;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_to_bright_laplace_us_0_rd2_cache {
	// RAM Box: {[1, 963], [0, 962]}
	// Capacity: 482
	// # of read delays: 481
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

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_to_bright_laplace_us_0_rd3_cache {
	// RAM Box: {[1, 963], [0, 962]}
	// Capacity: 482
	// # of read delays: 481
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

struct bright_gauss_ds_1_cache {
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_to_bright_laplace_us_0_rd2_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_to_bright_laplace_us_0_rd2;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_to_bright_laplace_us_0_rd3_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_to_bright_laplace_us_0_rd3;
};



inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
}

inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_write(hw_uint<16>& bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_to_bright_laplace_us_0_rd2.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_to_bright_laplace_us_0_rd3.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1);
}

inline hw_uint<16> bright_gauss_blur_2_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd0 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
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
  // bright_gauss_blur_2_rd1 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_483();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd10_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd10 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.peek_483();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd11_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd11 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.peek_1();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd12_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd12 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd13_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd13 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_482();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd14_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd14 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd15_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd15 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[3 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.peek_964();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd16_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd16 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[3 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.peek_482();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd17_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd17 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[3 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.peek_0();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd2_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd2 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
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
  // bright_gauss_blur_2_rd3 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd4_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd4 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.peek_483();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd5_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd5 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.peek_1();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd6_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd6 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
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
  // bright_gauss_blur_2_rd7 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_482();
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
  // bright_gauss_blur_2_rd8 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_gauss_blur_2_rd9_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd9 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 16] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_1_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 43] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_laplace_diff_1_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_1_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd1 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 43] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_laplace_diff_1_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_us_0_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_0_rd0 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_laplace_us_0_update_0[d0, d1] -> (481 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 1919 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((481 - d0)) : 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_us_0_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_0_rd1 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_laplace_us_0_update_0[d0, d1] -> (481 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 1919 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((481 - d0)) : 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_us_0_rd2_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_0_rd2 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[1 + 2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_laplace_us_0_update_0[d0, d1] -> (481 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 1919 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_to_bright_laplace_us_0_rd2.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((481 - d0)) : 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_us_0_rd3_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_0_rd3 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[1 + 2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 15] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_laplace_us_0_update_0[d0, d1] -> (481 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 1919 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_to_bright_laplace_us_0_rd3.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((481 - d0)) : 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1;
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
//	bright_gauss_blur_2_rd9
//	bright_gauss_blur_2_rd10
//	bright_gauss_blur_2_rd11
//	bright_gauss_blur_2_rd12
//	bright_gauss_blur_2_rd13
//	bright_gauss_blur_2_rd14
//	bright_gauss_blur_2_rd15
//	bright_gauss_blur_2_rd16
//	bright_gauss_blur_2_rd17
inline hw_uint<288> bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 18
    // bright_gauss_blur_2_rd0
    // bright_gauss_blur_2_rd1
    // bright_gauss_blur_2_rd2
    // bright_gauss_blur_2_rd3
    // bright_gauss_blur_2_rd4
    // bright_gauss_blur_2_rd5
    // bright_gauss_blur_2_rd6
    // bright_gauss_blur_2_rd7
    // bright_gauss_blur_2_rd8
    // bright_gauss_blur_2_rd9
    // bright_gauss_blur_2_rd10
    // bright_gauss_blur_2_rd11
    // bright_gauss_blur_2_rd12
    // bright_gauss_blur_2_rd13
    // bright_gauss_blur_2_rd14
    // bright_gauss_blur_2_rd15
    // bright_gauss_blur_2_rd16
    // bright_gauss_blur_2_rd17

	hw_uint<288> result;
	hw_uint<16> bright_gauss_blur_2_rd0_res = bright_gauss_blur_2_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, bright_gauss_blur_2_rd0_res);
	hw_uint<16> bright_gauss_blur_2_rd1_res = bright_gauss_blur_2_rd1_select(bright_gauss_ds_1, d0, d1);
	set_at<16, 288>(result, bright_gauss_blur_2_rd1_res);
	hw_uint<16> bright_gauss_blur_2_rd2_res = bright_gauss_blur_2_rd2_select(bright_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, bright_gauss_blur_2_rd2_res);
	hw_uint<16> bright_gauss_blur_2_rd3_res = bright_gauss_blur_2_rd3_select(bright_gauss_ds_1, d0, d1);
	set_at<48, 288>(result, bright_gauss_blur_2_rd3_res);
	hw_uint<16> bright_gauss_blur_2_rd4_res = bright_gauss_blur_2_rd4_select(bright_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, bright_gauss_blur_2_rd4_res);
	hw_uint<16> bright_gauss_blur_2_rd5_res = bright_gauss_blur_2_rd5_select(bright_gauss_ds_1, d0, d1);
	set_at<80, 288>(result, bright_gauss_blur_2_rd5_res);
	hw_uint<16> bright_gauss_blur_2_rd6_res = bright_gauss_blur_2_rd6_select(bright_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, bright_gauss_blur_2_rd6_res);
	hw_uint<16> bright_gauss_blur_2_rd7_res = bright_gauss_blur_2_rd7_select(bright_gauss_ds_1, d0, d1);
	set_at<112, 288>(result, bright_gauss_blur_2_rd7_res);
	hw_uint<16> bright_gauss_blur_2_rd8_res = bright_gauss_blur_2_rd8_select(bright_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, bright_gauss_blur_2_rd8_res);
	hw_uint<16> bright_gauss_blur_2_rd9_res = bright_gauss_blur_2_rd9_select(bright_gauss_ds_1, d0, d1);
	set_at<144, 288>(result, bright_gauss_blur_2_rd9_res);
	hw_uint<16> bright_gauss_blur_2_rd10_res = bright_gauss_blur_2_rd10_select(bright_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, bright_gauss_blur_2_rd10_res);
	hw_uint<16> bright_gauss_blur_2_rd11_res = bright_gauss_blur_2_rd11_select(bright_gauss_ds_1, d0, d1);
	set_at<176, 288>(result, bright_gauss_blur_2_rd11_res);
	hw_uint<16> bright_gauss_blur_2_rd12_res = bright_gauss_blur_2_rd12_select(bright_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, bright_gauss_blur_2_rd12_res);
	hw_uint<16> bright_gauss_blur_2_rd13_res = bright_gauss_blur_2_rd13_select(bright_gauss_ds_1, d0, d1);
	set_at<208, 288>(result, bright_gauss_blur_2_rd13_res);
	hw_uint<16> bright_gauss_blur_2_rd14_res = bright_gauss_blur_2_rd14_select(bright_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, bright_gauss_blur_2_rd14_res);
	hw_uint<16> bright_gauss_blur_2_rd15_res = bright_gauss_blur_2_rd15_select(bright_gauss_ds_1, d0, d1);
	set_at<240, 288>(result, bright_gauss_blur_2_rd15_res);
	hw_uint<16> bright_gauss_blur_2_rd16_res = bright_gauss_blur_2_rd16_select(bright_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, bright_gauss_blur_2_rd16_res);
	hw_uint<16> bright_gauss_blur_2_rd17_res = bright_gauss_blur_2_rd17_select(bright_gauss_ds_1, d0, d1);
	set_at<272, 288>(result, bright_gauss_blur_2_rd17_res);
	return result;
}

// bright_gauss_ds_1_update_0_write
//	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0
//	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1
inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& bright_gauss_ds_1_update_0_write, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	hw_uint<16> bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res = bright_gauss_ds_1_update_0_write.extract<0, 15>();
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res, bright_gauss_ds_1, d0, d1);
	hw_uint<16> bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_res = bright_gauss_ds_1_update_0_write.extract<16, 31>();
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_write(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write1_res, bright_gauss_ds_1, d0, d1);
}

// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
//	bright_laplace_diff_1_rd1
inline hw_uint<32> bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 2
    // bright_laplace_diff_1_rd0
    // bright_laplace_diff_1_rd1

	hw_uint<32> result;
	hw_uint<16> bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_1_rd0_res);
	hw_uint<16> bright_laplace_diff_1_rd1_res = bright_laplace_diff_1_rd1_select(bright_gauss_ds_1, d0, d1);
	set_at<16, 32>(result, bright_laplace_diff_1_rd1_res);
	return result;
}

// bright_laplace_us_0_update_0_read
//	bright_laplace_us_0_rd0
//	bright_laplace_us_0_rd1
//	bright_laplace_us_0_rd2
//	bright_laplace_us_0_rd3
inline hw_uint<64> bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 4
    // bright_laplace_us_0_rd0
    // bright_laplace_us_0_rd1
    // bright_laplace_us_0_rd2
    // bright_laplace_us_0_rd3

	hw_uint<64> result;
	hw_uint<16> bright_laplace_us_0_rd0_res = bright_laplace_us_0_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 64>(result, bright_laplace_us_0_rd0_res);
	hw_uint<16> bright_laplace_us_0_rd1_res = bright_laplace_us_0_rd1_select(bright_gauss_ds_1, d0, d1);
	set_at<16, 64>(result, bright_laplace_us_0_rd1_res);
	hw_uint<16> bright_laplace_us_0_rd2_res = bright_laplace_us_0_rd2_select(bright_gauss_ds_1, d0, d1);
	set_at<32, 64>(result, bright_laplace_us_0_rd2_res);
	hw_uint<16> bright_laplace_us_0_rd3_res = bright_laplace_us_0_rd3_select(bright_gauss_ds_1, d0, d1);
	set_at<48, 64>(result, bright_laplace_us_0_rd3_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [0, 480]}
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
	// RAM Box: {[0, 480], [0, 480]}
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
	// RAM Box: {[0, 480], [0, 480]}
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

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd1_cache {
	// RAM Box: {[0, 480], [0, 480]}
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

struct bright_gauss_ds_2_cache {
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd1_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd1;
};



inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd1.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_3_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd0 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_gauss_blur_3_rd1 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 483 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_gauss_blur_3_rd2 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_gauss_blur_3_rd3 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 963 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_gauss_blur_3_rd4 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 482 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_gauss_blur_3_rd5 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_gauss_blur_3_rd6 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 962 : 0 <= d0 <= 477 and 0 <= d1 <= 478; bright_gauss_blur_3_update_0[d0, d1] -> (484 + d0) : d0 = 478 and 0 <= d1 <= 478 }
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
  // bright_gauss_blur_3_rd7 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_gauss_blur_3_update_0[d0, d1] -> 481 : 0 <= d0 <= 477 and 0 <= d1 <= 478; bright_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 478 and 0 <= d1 <= 478 }
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
  // bright_gauss_blur_3_rd8 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
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
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Read schedule : { bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 42] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_laplace_diff_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 478; bright_laplace_diff_2_update_0[d0, d1] -> 963 : d0 = 479 and 0 <= d1 <= 478; bright_laplace_diff_2_update_0[d0, d1] -> (961 - d0) : d1 = 479 and 0 <= d0 <= 479 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-479 + d0 == 0 && 478 - d1 >= 0) ? (963) : (478 - d1 >= 0 && 478 - d0 >= 0) ? (964) : (-479 + d1 == 0) ? ((961 - d0)) : 0);
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
  // bright_laplace_us_1_rd0 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 40] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_laplace_us_1_update_0[d0, d1] -> (480 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 959 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((480 - d0)) : 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_us_1_rd1_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_1_rd1 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 40] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_laplace_us_1_update_0[d0, d1] -> (480 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 959 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((480 - d0)) : 0);
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
//	bright_laplace_us_1_rd1
inline hw_uint<32> bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 2
    // bright_laplace_us_1_rd0
    // bright_laplace_us_1_rd1

	hw_uint<32> result;
	hw_uint<16> bright_laplace_us_1_rd0_res = bright_laplace_us_1_rd0_select(bright_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, bright_laplace_us_1_rd0_res);
	hw_uint<16> bright_laplace_us_1_rd1_res = bright_laplace_us_1_rd1_select(bright_gauss_ds_2, d0, d1);
	set_at<16, 32>(result, bright_laplace_us_1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 239], [0, 239]}
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
	// RAM Box: {[0, 239], [0, 239]}
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
  // bright_laplace_us_2_rd0 read pattern: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 39] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 30] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // DD fold: { bright_laplace_us_2_update_0[d0, d1] -> (239 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 477 and 0 < d1 <= 479 }
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
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 45] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Write schedule: { bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 30] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
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
	// RAM Box: {[0, 1916], [0, 1919]}
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

struct bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1919]}
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

struct bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1919]}
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

struct bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1919]}
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
  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_merged_banks_1_cache bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_merged_banks_1;
  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2_merged_banks_1_cache bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2_merged_banks_1;
  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3_merged_banks_1_cache bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3_merged_banks_1;
};



inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(hw_uint<16>& bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0);
}

inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_write(hw_uint<16>& bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_merged_banks_1.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1);
}

inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2_write(hw_uint<16>& bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2_merged_banks_1.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2);
}

inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3_write(hw_uint<16>& bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3_merged_banks_1.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3);
}

inline hw_uint<16> fused_level_0_rd0_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd1_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd2_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd2 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd3_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd3 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_write
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3
inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(hw_uint<64>& bright_laplace_diff_0_update_0_write, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	hw_uint<16> bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res = bright_laplace_diff_0_update_0_write.extract<0, 15>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res, bright_laplace_diff_0, d0, d1);
	hw_uint<16> bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_res = bright_laplace_diff_0_update_0_write.extract<16, 31>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_res, bright_laplace_diff_0, d0, d1);
	hw_uint<16> bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2_res = bright_laplace_diff_0_update_0_write.extract<32, 47>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write2_res, bright_laplace_diff_0, d0, d1);
	hw_uint<16> bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3_res = bright_laplace_diff_0_update_0_write.extract<48, 63>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write3_res, bright_laplace_diff_0, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
//	fused_level_0_rd2
//	fused_level_0_rd3
inline hw_uint<64> bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  // # of ports in bundle: 4
    // fused_level_0_rd0
    // fused_level_0_rd1
    // fused_level_0_rd2
    // fused_level_0_rd3

	hw_uint<64> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_laplace_diff_0, d0, d1);
	set_at<0, 64>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(bright_laplace_diff_0, d0, d1);
	set_at<16, 64>(result, fused_level_0_rd1_res);
	hw_uint<16> fused_level_0_rd2_res = fused_level_0_rd2_select(bright_laplace_diff_0, d0, d1);
	set_at<32, 64>(result, fused_level_0_rd2_res);
	hw_uint<16> fused_level_0_rd3_res = fused_level_0_rd3_select(bright_laplace_diff_0, d0, d1);
	set_at<48, 64>(result, fused_level_0_rd3_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 958], [0, 959]}
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

struct bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 959], [0, 959]}
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
  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1_merged_banks_1_cache bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1_merged_banks_1;
};



inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(hw_uint<16>& bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1.push(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0);
}

inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1_write(hw_uint<16>& bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1_merged_banks_1.push(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1);
}

inline hw_uint<16> fused_level_1_rd0_select(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 47] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 43] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: {  }
  auto value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0 = bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_1_rd1_select(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd1 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 47] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 43] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: {  }
  auto value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1 = bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_write
//	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0
//	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1
inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(hw_uint<32>& bright_laplace_diff_1_update_0_write, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	hw_uint<16> bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res = bright_laplace_diff_1_update_0_write.extract<0, 15>();
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res, bright_laplace_diff_1, d0, d1);
	hw_uint<16> bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1_res = bright_laplace_diff_1_update_0_write.extract<16, 31>();
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1_write(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write1_res, bright_laplace_diff_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
//	fused_level_1_rd1
inline hw_uint<32> bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  // # of ports in bundle: 2
    // fused_level_1_rd0
    // fused_level_1_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_laplace_diff_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	hw_uint<16> fused_level_1_rd1_res = fused_level_1_rd1_select(bright_laplace_diff_1, d0, d1);
	set_at<16, 32>(result, fused_level_1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 479], [0, 479]}
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
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 46] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 42] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
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
	// RAM Box: {[0, 1916], [0, 1919]}
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

struct bright_laplace_us_0_bright_laplace_us_0_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1919]}
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

struct bright_laplace_us_0_bright_laplace_us_0_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1919]}
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

struct bright_laplace_us_0_bright_laplace_us_0_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1919]}
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
  bright_laplace_us_0_bright_laplace_us_0_update_0_write1_merged_banks_1_cache bright_laplace_us_0_bright_laplace_us_0_update_0_write1_merged_banks_1;
  bright_laplace_us_0_bright_laplace_us_0_update_0_write2_merged_banks_1_cache bright_laplace_us_0_bright_laplace_us_0_update_0_write2_merged_banks_1;
  bright_laplace_us_0_bright_laplace_us_0_update_0_write3_merged_banks_1_cache bright_laplace_us_0_bright_laplace_us_0_update_0_write3_merged_banks_1;
};



inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(hw_uint<16>& bright_laplace_us_0_bright_laplace_us_0_update_0_write0, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write0);
}

inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write1_write(hw_uint<16>& bright_laplace_us_0_bright_laplace_us_0_update_0_write1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write1_merged_banks_1.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write1);
}

inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write2_write(hw_uint<16>& bright_laplace_us_0_bright_laplace_us_0_update_0_write2, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write2_merged_banks_1.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write2);
}

inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write3_write(hw_uint<16>& bright_laplace_us_0_bright_laplace_us_0_update_0_write3, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write3_merged_banks_1.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write3);
}

inline hw_uint<16> bright_laplace_diff_0_rd0_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_0_rd1_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd1 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write1 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_0_rd2_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd2 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write2 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_0_rd3_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd3 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 44] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write3 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
//	bright_laplace_diff_0_rd1
//	bright_laplace_diff_0_rd2
//	bright_laplace_diff_0_rd3
inline hw_uint<64> bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  // # of ports in bundle: 4
    // bright_laplace_diff_0_rd0
    // bright_laplace_diff_0_rd1
    // bright_laplace_diff_0_rd2
    // bright_laplace_diff_0_rd3

	hw_uint<64> result;
	hw_uint<16> bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright_laplace_us_0, d0, d1);
	set_at<0, 64>(result, bright_laplace_diff_0_rd0_res);
	hw_uint<16> bright_laplace_diff_0_rd1_res = bright_laplace_diff_0_rd1_select(bright_laplace_us_0, d0, d1);
	set_at<16, 64>(result, bright_laplace_diff_0_rd1_res);
	hw_uint<16> bright_laplace_diff_0_rd2_res = bright_laplace_diff_0_rd2_select(bright_laplace_us_0, d0, d1);
	set_at<32, 64>(result, bright_laplace_diff_0_rd2_res);
	hw_uint<16> bright_laplace_diff_0_rd3_res = bright_laplace_diff_0_rd3_select(bright_laplace_us_0, d0, d1);
	set_at<48, 64>(result, bright_laplace_diff_0_rd3_res);
	return result;
}

// bright_laplace_us_0_update_0_write
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write0
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write1
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write2
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write3
inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(hw_uint<64>& bright_laplace_us_0_update_0_write, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	hw_uint<16> bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res = bright_laplace_us_0_update_0_write.extract<0, 15>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res, bright_laplace_us_0, d0, d1);
	hw_uint<16> bright_laplace_us_0_bright_laplace_us_0_update_0_write1_res = bright_laplace_us_0_update_0_write.extract<16, 31>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write1_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write1_res, bright_laplace_us_0, d0, d1);
	hw_uint<16> bright_laplace_us_0_bright_laplace_us_0_update_0_write2_res = bright_laplace_us_0_update_0_write.extract<32, 47>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write2_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write2_res, bright_laplace_us_0, d0, d1);
	hw_uint<16> bright_laplace_us_0_bright_laplace_us_0_update_0_write3_res = bright_laplace_us_0_update_0_write.extract<48, 63>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write3_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write3_res, bright_laplace_us_0, d0, d1);
}

#include "hw_classes.h"

struct bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 958], [0, 959]}
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

struct bright_laplace_us_1_bright_laplace_us_1_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 959], [0, 959]}
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
  bright_laplace_us_1_bright_laplace_us_1_update_0_write1_merged_banks_1_cache bright_laplace_us_1_bright_laplace_us_1_update_0_write1_merged_banks_1;
};



inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(hw_uint<16>& bright_laplace_us_1_bright_laplace_us_1_update_0_write0, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
  bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1.push(bright_laplace_us_1_bright_laplace_us_1_update_0_write0);
}

inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write1_write(hw_uint<16>& bright_laplace_us_1_bright_laplace_us_1_update_0_write1, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
  bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write1_merged_banks_1.push(bright_laplace_us_1_bright_laplace_us_1_update_0_write1);
}

inline hw_uint<16> bright_laplace_diff_1_rd0_select(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 43] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { bright_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 40] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: {  }
  auto value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0 = bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_laplace_diff_1_rd1_select(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd1 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 43] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { bright_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 40] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: {  }
  auto value_bright_laplace_us_1_bright_laplace_us_1_update_0_write1 = bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_1_bright_laplace_us_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
//	bright_laplace_diff_1_rd1
inline hw_uint<32> bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
  // # of ports in bundle: 2
    // bright_laplace_diff_1_rd0
    // bright_laplace_diff_1_rd1

	hw_uint<32> result;
	hw_uint<16> bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_laplace_us_1, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_1_rd0_res);
	hw_uint<16> bright_laplace_diff_1_rd1_res = bright_laplace_diff_1_rd1_select(bright_laplace_us_1, d0, d1);
	set_at<16, 32>(result, bright_laplace_diff_1_rd1_res);
	return result;
}

// bright_laplace_us_1_update_0_write
//	bright_laplace_us_1_bright_laplace_us_1_update_0_write0
//	bright_laplace_us_1_bright_laplace_us_1_update_0_write1
inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(hw_uint<32>& bright_laplace_us_1_update_0_write, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	hw_uint<16> bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res = bright_laplace_us_1_update_0_write.extract<0, 15>();
	bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res, bright_laplace_us_1, d0, d1);
	hw_uint<16> bright_laplace_us_1_bright_laplace_us_1_update_0_write1_res = bright_laplace_us_1_update_0_write.extract<16, 31>();
	bright_laplace_us_1_bright_laplace_us_1_update_0_write1_write(bright_laplace_us_1_bright_laplace_us_1_update_0_write1_res, bright_laplace_us_1, d0, d1);
}

#include "hw_classes.h"

struct bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 479], [0, 479]}
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
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Read schedule : { bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 42] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { bright_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 39] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
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
	// RAM Box: {[0, 1928], [0, 1926]}
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

struct bright_weights_bright_weights_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1929], [0, 1926]}
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

struct bright_weights_bright_weights_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 1930], [0, 1926]}
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

struct bright_weights_bright_weights_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 1931], [0, 1926]}
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
  bright_weights_bright_weights_update_0_write1_merged_banks_2_cache bright_weights_bright_weights_update_0_write1_merged_banks_2;
  bright_weights_bright_weights_update_0_write2_merged_banks_2_cache bright_weights_bright_weights_update_0_write2_merged_banks_2;
  bright_weights_bright_weights_update_0_write3_merged_banks_2_cache bright_weights_bright_weights_update_0_write3_merged_banks_2;
};



inline void bright_weights_bright_weights_update_0_write0_write(hw_uint<16>& bright_weights_bright_weights_update_0_write0, bright_weights_cache& bright_weights, int d0, int d1) {
  bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.push(bright_weights_bright_weights_update_0_write0);
}

inline void bright_weights_bright_weights_update_0_write1_write(hw_uint<16>& bright_weights_bright_weights_update_0_write1, bright_weights_cache& bright_weights, int d0, int d1) {
  bright_weights.bright_weights_bright_weights_update_0_write1_merged_banks_2.push(bright_weights_bright_weights_update_0_write1);
}

inline void bright_weights_bright_weights_update_0_write2_write(hw_uint<16>& bright_weights_bright_weights_update_0_write2, bright_weights_cache& bright_weights, int d0, int d1) {
  bright_weights.bright_weights_bright_weights_update_0_write2_merged_banks_2.push(bright_weights_bright_weights_update_0_write2);
}

inline void bright_weights_bright_weights_update_0_write3_write(hw_uint<16>& bright_weights_bright_weights_update_0_write3, bright_weights_cache& bright_weights, int d0, int d1) {
  bright_weights.bright_weights_bright_weights_update_0_write3_merged_banks_2.push(bright_weights_bright_weights_update_0_write3);
}

inline hw_uint<16> bright_weights_normed_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_rd1_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd1 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[1 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write1 = bright_weights.bright_weights_bright_weights_update_0_write1_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_rd2_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd2 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[2 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write2 = bright_weights.bright_weights_bright_weights_update_0_write2_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_rd3_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd3 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[3 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write3 = bright_weights.bright_weights_bright_weights_update_0_write3_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> weight_sums_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> weight_sums_rd1_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd1 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[1 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write1 = bright_weights.bright_weights_bright_weights_update_0_write1_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> weight_sums_rd2_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd2 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[2 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write2 = bright_weights.bright_weights_bright_weights_update_0_write2_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> weight_sums_rd3_select(bright_weights_cache& bright_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd3 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[3 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_bright_weights_update_0_write3 = bright_weights.bright_weights_bright_weights_update_0_write3_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
//	bright_weights_normed_rd1
//	bright_weights_normed_rd2
//	bright_weights_normed_rd3
inline hw_uint<64> bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1) {
  // # of ports in bundle: 4
    // bright_weights_normed_rd0
    // bright_weights_normed_rd1
    // bright_weights_normed_rd2
    // bright_weights_normed_rd3

	hw_uint<64> result;
	hw_uint<16> bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(bright_weights, d0, d1);
	set_at<0, 64>(result, bright_weights_normed_rd0_res);
	hw_uint<16> bright_weights_normed_rd1_res = bright_weights_normed_rd1_select(bright_weights, d0, d1);
	set_at<16, 64>(result, bright_weights_normed_rd1_res);
	hw_uint<16> bright_weights_normed_rd2_res = bright_weights_normed_rd2_select(bright_weights, d0, d1);
	set_at<32, 64>(result, bright_weights_normed_rd2_res);
	hw_uint<16> bright_weights_normed_rd3_res = bright_weights_normed_rd3_select(bright_weights, d0, d1);
	set_at<48, 64>(result, bright_weights_normed_rd3_res);
	return result;
}

// bright_weights_update_0_write
//	bright_weights_bright_weights_update_0_write0
//	bright_weights_bright_weights_update_0_write1
//	bright_weights_bright_weights_update_0_write2
//	bright_weights_bright_weights_update_0_write3
inline void bright_weights_bright_weights_update_0_write_bundle_write(hw_uint<64>& bright_weights_update_0_write, bright_weights_cache& bright_weights, int d0, int d1) {
	hw_uint<16> bright_weights_bright_weights_update_0_write0_res = bright_weights_update_0_write.extract<0, 15>();
	bright_weights_bright_weights_update_0_write0_write(bright_weights_bright_weights_update_0_write0_res, bright_weights, d0, d1);
	hw_uint<16> bright_weights_bright_weights_update_0_write1_res = bright_weights_update_0_write.extract<16, 31>();
	bright_weights_bright_weights_update_0_write1_write(bright_weights_bright_weights_update_0_write1_res, bright_weights, d0, d1);
	hw_uint<16> bright_weights_bright_weights_update_0_write2_res = bright_weights_update_0_write.extract<32, 47>();
	bright_weights_bright_weights_update_0_write2_write(bright_weights_bright_weights_update_0_write2_res, bright_weights, d0, d1);
	hw_uint<16> bright_weights_bright_weights_update_0_write3_res = bright_weights_update_0_write.extract<48, 63>();
	bright_weights_bright_weights_update_0_write3_write(bright_weights_bright_weights_update_0_write3_res, bright_weights, d0, d1);
}

// weight_sums_update_0_read
//	weight_sums_rd0
//	weight_sums_rd1
//	weight_sums_rd2
//	weight_sums_rd3
inline hw_uint<64> bright_weights_weight_sums_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1) {
  // # of ports in bundle: 4
    // weight_sums_rd0
    // weight_sums_rd1
    // weight_sums_rd2
    // weight_sums_rd3

	hw_uint<64> result;
	hw_uint<16> weight_sums_rd0_res = weight_sums_rd0_select(bright_weights, d0, d1);
	set_at<0, 64>(result, weight_sums_rd0_res);
	hw_uint<16> weight_sums_rd1_res = weight_sums_rd1_select(bright_weights, d0, d1);
	set_at<16, 64>(result, weight_sums_rd1_res);
	hw_uint<16> weight_sums_rd2_res = weight_sums_rd2_select(bright_weights, d0, d1);
	set_at<32, 64>(result, weight_sums_rd2_res);
	hw_uint<16> weight_sums_rd3_res = weight_sums_rd3_select(bright_weights, d0, d1);
	set_at<48, 64>(result, weight_sums_rd3_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 1928], [0, 1926]}
	// Capacity: 968
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 481> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
		return f6;
	}

	inline hw_uint<16> peek_965() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10_cache {
	// RAM Box: {[1, 1929], [0, 1926]}
	// Capacity: 968
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 481> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
		return f6;
	}

	inline hw_uint<16> peek_965() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10_cache {
	// RAM Box: {[2, 1930], [0, 1926]}
	// Capacity: 968
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 482> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 482> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_484() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_967() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10_cache {
	// RAM Box: {[3, 1931], [0, 1926]}
	// Capacity: 968
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 482> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 482> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_484() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_967() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f3.push(f2);
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
  bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10_cache bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10;
  bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10_cache bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10;
  bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10_cache bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10;
};



inline void bright_weights_normed_bright_weights_normed_update_0_write0_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write0, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.push(bright_weights_normed_bright_weights_normed_update_0_write0);
}

inline void bright_weights_normed_bright_weights_normed_update_0_write1_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write1, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.push(bright_weights_normed_bright_weights_normed_update_0_write1);
}

inline void bright_weights_normed_bright_weights_normed_update_0_write2_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write2, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.push(bright_weights_normed_bright_weights_normed_update_0_write2);
}

inline void bright_weights_normed_bright_weights_normed_update_0_write3_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write3, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.push(bright_weights_normed_bright_weights_normed_update_0_write3);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd0 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_967();
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
  // bright_weights_normed_gauss_blur_1_rd1 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_484();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd10_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd10 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_484();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd11_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd11 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd12_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd12 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write2 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd13_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd13 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write2 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.peek_484();
  return value_bright_weights_normed_bright_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd14_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd14 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write2 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd15_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd15 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write3 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd16_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd16 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write3 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.peek_484();
  return value_bright_weights_normed_bright_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd17_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd17 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write3 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd18_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd18 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write2 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd19_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd19 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write2 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.peek_484();
  return value_bright_weights_normed_bright_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd2 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd20_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd20 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write2 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd21_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd21 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write3 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd22_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd22 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write3 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.peek_484();
  return value_bright_weights_normed_bright_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd23_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd23 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write3 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd24_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd24 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[4 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_966();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd25_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd25 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[4 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_483();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd26_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd26 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[4 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_0();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd27_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd27 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write3 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd28_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd28 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write3 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.peek_484();
  return value_bright_weights_normed_bright_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd29_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd29 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write3 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd3 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd30_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd30 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[4 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_966();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd31_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd31 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[4 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_483();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd32_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd32 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[4 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_0();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd33_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd33 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[5 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_966();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd34_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd34 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[5 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_483();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd35_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd35 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[5 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_0();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd4 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_484();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd5 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd6 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write2 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd7 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write2 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.peek_484();
  return value_bright_weights_normed_bright_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd8 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write2 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd9_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd9 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd1_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd2_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd2 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write2 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write2_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd3_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd3 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write3 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write3_merged_banks_10.peek_967();
  return value_bright_weights_normed_bright_weights_normed_update_0_write3;
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
//	bright_weights_normed_gauss_blur_1_rd9
//	bright_weights_normed_gauss_blur_1_rd10
//	bright_weights_normed_gauss_blur_1_rd11
//	bright_weights_normed_gauss_blur_1_rd12
//	bright_weights_normed_gauss_blur_1_rd13
//	bright_weights_normed_gauss_blur_1_rd14
//	bright_weights_normed_gauss_blur_1_rd15
//	bright_weights_normed_gauss_blur_1_rd16
//	bright_weights_normed_gauss_blur_1_rd17
//	bright_weights_normed_gauss_blur_1_rd18
//	bright_weights_normed_gauss_blur_1_rd19
//	bright_weights_normed_gauss_blur_1_rd20
//	bright_weights_normed_gauss_blur_1_rd21
//	bright_weights_normed_gauss_blur_1_rd22
//	bright_weights_normed_gauss_blur_1_rd23
//	bright_weights_normed_gauss_blur_1_rd24
//	bright_weights_normed_gauss_blur_1_rd25
//	bright_weights_normed_gauss_blur_1_rd26
//	bright_weights_normed_gauss_blur_1_rd27
//	bright_weights_normed_gauss_blur_1_rd28
//	bright_weights_normed_gauss_blur_1_rd29
//	bright_weights_normed_gauss_blur_1_rd30
//	bright_weights_normed_gauss_blur_1_rd31
//	bright_weights_normed_gauss_blur_1_rd32
//	bright_weights_normed_gauss_blur_1_rd33
//	bright_weights_normed_gauss_blur_1_rd34
//	bright_weights_normed_gauss_blur_1_rd35
inline hw_uint<576> bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // # of ports in bundle: 36
    // bright_weights_normed_gauss_blur_1_rd0
    // bright_weights_normed_gauss_blur_1_rd1
    // bright_weights_normed_gauss_blur_1_rd2
    // bright_weights_normed_gauss_blur_1_rd3
    // bright_weights_normed_gauss_blur_1_rd4
    // bright_weights_normed_gauss_blur_1_rd5
    // bright_weights_normed_gauss_blur_1_rd6
    // bright_weights_normed_gauss_blur_1_rd7
    // bright_weights_normed_gauss_blur_1_rd8
    // bright_weights_normed_gauss_blur_1_rd9
    // bright_weights_normed_gauss_blur_1_rd10
    // bright_weights_normed_gauss_blur_1_rd11
    // bright_weights_normed_gauss_blur_1_rd12
    // bright_weights_normed_gauss_blur_1_rd13
    // bright_weights_normed_gauss_blur_1_rd14
    // bright_weights_normed_gauss_blur_1_rd15
    // bright_weights_normed_gauss_blur_1_rd16
    // bright_weights_normed_gauss_blur_1_rd17
    // bright_weights_normed_gauss_blur_1_rd18
    // bright_weights_normed_gauss_blur_1_rd19
    // bright_weights_normed_gauss_blur_1_rd20
    // bright_weights_normed_gauss_blur_1_rd21
    // bright_weights_normed_gauss_blur_1_rd22
    // bright_weights_normed_gauss_blur_1_rd23
    // bright_weights_normed_gauss_blur_1_rd24
    // bright_weights_normed_gauss_blur_1_rd25
    // bright_weights_normed_gauss_blur_1_rd26
    // bright_weights_normed_gauss_blur_1_rd27
    // bright_weights_normed_gauss_blur_1_rd28
    // bright_weights_normed_gauss_blur_1_rd29
    // bright_weights_normed_gauss_blur_1_rd30
    // bright_weights_normed_gauss_blur_1_rd31
    // bright_weights_normed_gauss_blur_1_rd32
    // bright_weights_normed_gauss_blur_1_rd33
    // bright_weights_normed_gauss_blur_1_rd34
    // bright_weights_normed_gauss_blur_1_rd35

	hw_uint<576> result;
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_res = bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed, d0, d1);
	set_at<0, 576>(result, bright_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd1_res = bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed, d0, d1);
	set_at<16, 576>(result, bright_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd2_res = bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed, d0, d1);
	set_at<32, 576>(result, bright_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd3_res = bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed, d0, d1);
	set_at<48, 576>(result, bright_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd4_res = bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed, d0, d1);
	set_at<64, 576>(result, bright_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd5_res = bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed, d0, d1);
	set_at<80, 576>(result, bright_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd6_res = bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed, d0, d1);
	set_at<96, 576>(result, bright_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd7_res = bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed, d0, d1);
	set_at<112, 576>(result, bright_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd8_res = bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed, d0, d1);
	set_at<128, 576>(result, bright_weights_normed_gauss_blur_1_rd8_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd9_res = bright_weights_normed_gauss_blur_1_rd9_select(bright_weights_normed, d0, d1);
	set_at<144, 576>(result, bright_weights_normed_gauss_blur_1_rd9_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd10_res = bright_weights_normed_gauss_blur_1_rd10_select(bright_weights_normed, d0, d1);
	set_at<160, 576>(result, bright_weights_normed_gauss_blur_1_rd10_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd11_res = bright_weights_normed_gauss_blur_1_rd11_select(bright_weights_normed, d0, d1);
	set_at<176, 576>(result, bright_weights_normed_gauss_blur_1_rd11_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd12_res = bright_weights_normed_gauss_blur_1_rd12_select(bright_weights_normed, d0, d1);
	set_at<192, 576>(result, bright_weights_normed_gauss_blur_1_rd12_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd13_res = bright_weights_normed_gauss_blur_1_rd13_select(bright_weights_normed, d0, d1);
	set_at<208, 576>(result, bright_weights_normed_gauss_blur_1_rd13_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd14_res = bright_weights_normed_gauss_blur_1_rd14_select(bright_weights_normed, d0, d1);
	set_at<224, 576>(result, bright_weights_normed_gauss_blur_1_rd14_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd15_res = bright_weights_normed_gauss_blur_1_rd15_select(bright_weights_normed, d0, d1);
	set_at<240, 576>(result, bright_weights_normed_gauss_blur_1_rd15_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd16_res = bright_weights_normed_gauss_blur_1_rd16_select(bright_weights_normed, d0, d1);
	set_at<256, 576>(result, bright_weights_normed_gauss_blur_1_rd16_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd17_res = bright_weights_normed_gauss_blur_1_rd17_select(bright_weights_normed, d0, d1);
	set_at<272, 576>(result, bright_weights_normed_gauss_blur_1_rd17_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd18_res = bright_weights_normed_gauss_blur_1_rd18_select(bright_weights_normed, d0, d1);
	set_at<288, 576>(result, bright_weights_normed_gauss_blur_1_rd18_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd19_res = bright_weights_normed_gauss_blur_1_rd19_select(bright_weights_normed, d0, d1);
	set_at<304, 576>(result, bright_weights_normed_gauss_blur_1_rd19_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd20_res = bright_weights_normed_gauss_blur_1_rd20_select(bright_weights_normed, d0, d1);
	set_at<320, 576>(result, bright_weights_normed_gauss_blur_1_rd20_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd21_res = bright_weights_normed_gauss_blur_1_rd21_select(bright_weights_normed, d0, d1);
	set_at<336, 576>(result, bright_weights_normed_gauss_blur_1_rd21_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd22_res = bright_weights_normed_gauss_blur_1_rd22_select(bright_weights_normed, d0, d1);
	set_at<352, 576>(result, bright_weights_normed_gauss_blur_1_rd22_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd23_res = bright_weights_normed_gauss_blur_1_rd23_select(bright_weights_normed, d0, d1);
	set_at<368, 576>(result, bright_weights_normed_gauss_blur_1_rd23_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd24_res = bright_weights_normed_gauss_blur_1_rd24_select(bright_weights_normed, d0, d1);
	set_at<384, 576>(result, bright_weights_normed_gauss_blur_1_rd24_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd25_res = bright_weights_normed_gauss_blur_1_rd25_select(bright_weights_normed, d0, d1);
	set_at<400, 576>(result, bright_weights_normed_gauss_blur_1_rd25_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd26_res = bright_weights_normed_gauss_blur_1_rd26_select(bright_weights_normed, d0, d1);
	set_at<416, 576>(result, bright_weights_normed_gauss_blur_1_rd26_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd27_res = bright_weights_normed_gauss_blur_1_rd27_select(bright_weights_normed, d0, d1);
	set_at<432, 576>(result, bright_weights_normed_gauss_blur_1_rd27_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd28_res = bright_weights_normed_gauss_blur_1_rd28_select(bright_weights_normed, d0, d1);
	set_at<448, 576>(result, bright_weights_normed_gauss_blur_1_rd28_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd29_res = bright_weights_normed_gauss_blur_1_rd29_select(bright_weights_normed, d0, d1);
	set_at<464, 576>(result, bright_weights_normed_gauss_blur_1_rd29_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd30_res = bright_weights_normed_gauss_blur_1_rd30_select(bright_weights_normed, d0, d1);
	set_at<480, 576>(result, bright_weights_normed_gauss_blur_1_rd30_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd31_res = bright_weights_normed_gauss_blur_1_rd31_select(bright_weights_normed, d0, d1);
	set_at<496, 576>(result, bright_weights_normed_gauss_blur_1_rd31_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd32_res = bright_weights_normed_gauss_blur_1_rd32_select(bright_weights_normed, d0, d1);
	set_at<512, 576>(result, bright_weights_normed_gauss_blur_1_rd32_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd33_res = bright_weights_normed_gauss_blur_1_rd33_select(bright_weights_normed, d0, d1);
	set_at<528, 576>(result, bright_weights_normed_gauss_blur_1_rd33_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd34_res = bright_weights_normed_gauss_blur_1_rd34_select(bright_weights_normed, d0, d1);
	set_at<544, 576>(result, bright_weights_normed_gauss_blur_1_rd34_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd35_res = bright_weights_normed_gauss_blur_1_rd35_select(bright_weights_normed, d0, d1);
	set_at<560, 576>(result, bright_weights_normed_gauss_blur_1_rd35_res);
	return result;
}

// bright_weights_normed_update_0_write
//	bright_weights_normed_bright_weights_normed_update_0_write0
//	bright_weights_normed_bright_weights_normed_update_0_write1
//	bright_weights_normed_bright_weights_normed_update_0_write2
//	bright_weights_normed_bright_weights_normed_update_0_write3
inline void bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(hw_uint<64>& bright_weights_normed_update_0_write, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write0_res = bright_weights_normed_update_0_write.extract<0, 15>();
	bright_weights_normed_bright_weights_normed_update_0_write0_write(bright_weights_normed_bright_weights_normed_update_0_write0_res, bright_weights_normed, d0, d1);
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write1_res = bright_weights_normed_update_0_write.extract<16, 31>();
	bright_weights_normed_bright_weights_normed_update_0_write1_write(bright_weights_normed_bright_weights_normed_update_0_write1_res, bright_weights_normed, d0, d1);
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write2_res = bright_weights_normed_update_0_write.extract<32, 47>();
	bright_weights_normed_bright_weights_normed_update_0_write2_write(bright_weights_normed_bright_weights_normed_update_0_write2_res, bright_weights_normed, d0, d1);
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write3_res = bright_weights_normed_update_0_write.extract<48, 63>();
	bright_weights_normed_bright_weights_normed_update_0_write3_write(bright_weights_normed_bright_weights_normed_update_0_write3_res, bright_weights_normed, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
//	fused_level_0_rd2
//	fused_level_0_rd3
inline hw_uint<64> bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // # of ports in bundle: 4
    // fused_level_0_rd0
    // fused_level_0_rd1
    // fused_level_0_rd2
    // fused_level_0_rd3

	hw_uint<64> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_weights_normed, d0, d1);
	set_at<0, 64>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(bright_weights_normed, d0, d1);
	set_at<16, 64>(result, fused_level_0_rd1_res);
	hw_uint<16> fused_level_0_rd2_res = fused_level_0_rd2_select(bright_weights_normed, d0, d1);
	set_at<32, 64>(result, fused_level_0_rd2_res);
	hw_uint<16> fused_level_0_rd3_res = fused_level_0_rd3_select(bright_weights_normed, d0, d1);
	set_at<48, 64>(result, fused_level_0_rd3_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1924], [0, 1924]}
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

struct bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1926], [0, 1924]}
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
  bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2_merged_banks_1_cache bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2_merged_banks_1;
};



inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
  bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0);
}

inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
}

inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
  bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2_merged_banks_1.push(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2);
}

inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write3_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write3, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
}

inline hw_uint<16> bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_1_rd0 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[4d0, 2d1] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Read schedule : { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Write schedule: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0 = bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_ds_1_rd1_select(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_1_rd1 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2 + 4d0, 2d1] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Read schedule : { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Write schedule: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2 = bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_1_update_0_write
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write3
inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<64>& bright_weights_normed_gauss_blur_1_update_0_write, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res, bright_weights_normed_gauss_blur_1, d0, d1);
	hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<16, 31>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_res, bright_weights_normed_gauss_blur_1, d0, d1);
	hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<32, 47>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write2_res, bright_weights_normed_gauss_blur_1, d0, d1);
	hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write3_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<48, 63>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write3_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write3_res, bright_weights_normed_gauss_blur_1, d0, d1);
}

// bright_weights_normed_gauss_ds_1_update_0_read
//	bright_weights_normed_gauss_ds_1_rd0
//	bright_weights_normed_gauss_ds_1_rd1
inline hw_uint<32> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
  // # of ports in bundle: 2
    // bright_weights_normed_gauss_ds_1_rd0
    // bright_weights_normed_gauss_ds_1_rd1

	hw_uint<32> result;
	hw_uint<16> bright_weights_normed_gauss_ds_1_rd0_res = bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_gauss_ds_1_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_ds_1_rd1_res = bright_weights_normed_gauss_ds_1_rd1_select(bright_weights_normed_gauss_blur_1, d0, d1);
	set_at<16, 32>(result, bright_weights_normed_gauss_ds_1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 960], [0, 960]}
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

inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write1_write(hw_uint<16>& bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write1, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
}

inline hw_uint<16> bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_2_rd0 read pattern: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // Read schedule : { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // Write schedule: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
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
//	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write1
inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_blur_2_update_0_write, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<16> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res = bright_weights_normed_gauss_blur_2_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res, bright_weights_normed_gauss_blur_2, d0, d1);
	hw_uint<16> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write1_res = bright_weights_normed_gauss_blur_2_update_0_write.extract<16, 31>();
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write1_write(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write1_res, bright_weights_normed_gauss_blur_2, d0, d1);
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
	// RAM Box: {[0, 478], [0, 478]}
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
  // bright_weights_normed_gauss_ds_3_rd0 read pattern: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Read schedule : { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 38] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Write schedule: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 29] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
	// RAM Box: {[0, 962], [0, 962]}
	// Capacity: 966
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 480> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 480> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}

	inline hw_uint<16> peek_483() {
		return f6;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10_cache {
	// RAM Box: {[1, 963], [0, 962]}
	// Capacity: 966
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 480> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 480> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}

	inline hw_uint<16> peek_483() {
		return f6;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f3.push(f2);
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
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10;
};



inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
}

inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd0 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
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
  // bright_weights_normed_gauss_blur_2_rd1 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_483();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd10_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd10 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_483();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd11_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd11 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_1();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd12_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd12 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd13_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd13 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_482();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd14_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd14 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd15_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd15 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[3 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_964();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd16_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd16 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[3 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_482();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd17_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd17 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[3 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_0();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd2 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
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
  // bright_weights_normed_gauss_blur_2_rd3 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd4 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_483();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd5 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_1();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd6 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
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
  // bright_weights_normed_gauss_blur_2_rd7 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_482();
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
  // bright_weights_normed_gauss_blur_2_rd8 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd9_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd9 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 22] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 47] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { fused_level_1_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_1_rd1_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd1 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 47] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { fused_level_1_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1;
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
//	bright_weights_normed_gauss_blur_2_rd9
//	bright_weights_normed_gauss_blur_2_rd10
//	bright_weights_normed_gauss_blur_2_rd11
//	bright_weights_normed_gauss_blur_2_rd12
//	bright_weights_normed_gauss_blur_2_rd13
//	bright_weights_normed_gauss_blur_2_rd14
//	bright_weights_normed_gauss_blur_2_rd15
//	bright_weights_normed_gauss_blur_2_rd16
//	bright_weights_normed_gauss_blur_2_rd17
inline hw_uint<288> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 18
    // bright_weights_normed_gauss_blur_2_rd0
    // bright_weights_normed_gauss_blur_2_rd1
    // bright_weights_normed_gauss_blur_2_rd2
    // bright_weights_normed_gauss_blur_2_rd3
    // bright_weights_normed_gauss_blur_2_rd4
    // bright_weights_normed_gauss_blur_2_rd5
    // bright_weights_normed_gauss_blur_2_rd6
    // bright_weights_normed_gauss_blur_2_rd7
    // bright_weights_normed_gauss_blur_2_rd8
    // bright_weights_normed_gauss_blur_2_rd9
    // bright_weights_normed_gauss_blur_2_rd10
    // bright_weights_normed_gauss_blur_2_rd11
    // bright_weights_normed_gauss_blur_2_rd12
    // bright_weights_normed_gauss_blur_2_rd13
    // bright_weights_normed_gauss_blur_2_rd14
    // bright_weights_normed_gauss_blur_2_rd15
    // bright_weights_normed_gauss_blur_2_rd16
    // bright_weights_normed_gauss_blur_2_rd17

	hw_uint<288> result;
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_res = bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, bright_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd1_res = bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<16, 288>(result, bright_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd2_res = bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, bright_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd3_res = bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<48, 288>(result, bright_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd4_res = bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, bright_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd5_res = bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<80, 288>(result, bright_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd6_res = bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, bright_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd7_res = bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<112, 288>(result, bright_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd8_res = bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, bright_weights_normed_gauss_blur_2_rd8_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd9_res = bright_weights_normed_gauss_blur_2_rd9_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<144, 288>(result, bright_weights_normed_gauss_blur_2_rd9_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd10_res = bright_weights_normed_gauss_blur_2_rd10_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, bright_weights_normed_gauss_blur_2_rd10_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd11_res = bright_weights_normed_gauss_blur_2_rd11_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<176, 288>(result, bright_weights_normed_gauss_blur_2_rd11_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd12_res = bright_weights_normed_gauss_blur_2_rd12_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, bright_weights_normed_gauss_blur_2_rd12_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd13_res = bright_weights_normed_gauss_blur_2_rd13_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<208, 288>(result, bright_weights_normed_gauss_blur_2_rd13_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd14_res = bright_weights_normed_gauss_blur_2_rd14_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, bright_weights_normed_gauss_blur_2_rd14_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd15_res = bright_weights_normed_gauss_blur_2_rd15_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<240, 288>(result, bright_weights_normed_gauss_blur_2_rd15_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd16_res = bright_weights_normed_gauss_blur_2_rd16_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, bright_weights_normed_gauss_blur_2_rd16_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd17_res = bright_weights_normed_gauss_blur_2_rd17_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<272, 288>(result, bright_weights_normed_gauss_blur_2_rd17_res);
	return result;
}

// bright_weights_normed_gauss_ds_1_update_0_write
//	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0
//	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1
inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_ds_1_update_0_write, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<16> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res = bright_weights_normed_gauss_ds_1_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res, bright_weights_normed_gauss_ds_1, d0, d1);
	hw_uint<16> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_res = bright_weights_normed_gauss_ds_1_update_0_write.extract<16, 31>();
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_write(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write1_res, bright_weights_normed_gauss_ds_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
//	fused_level_1_rd1
inline hw_uint<32> bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 2
    // fused_level_1_rd0
    // fused_level_1_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	hw_uint<16> fused_level_1_rd1_res = fused_level_1_rd1_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<16, 32>(result, fused_level_1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [0, 480]}
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
	// RAM Box: {[0, 480], [0, 480]}
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
  // bright_weights_normed_gauss_blur_3_rd0 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 29] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_weights_normed_gauss_blur_3_rd1 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 29] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 483 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_weights_normed_gauss_blur_3_rd2 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 29] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_weights_normed_gauss_blur_3_rd3 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 29] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 963 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_weights_normed_gauss_blur_3_rd4 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 29] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 482 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_weights_normed_gauss_blur_3_rd5 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 29] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // bright_weights_normed_gauss_blur_3_rd6 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 29] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 962 : 0 <= d0 <= 477 and 0 <= d1 <= 478; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (484 + d0) : d0 = 478 and 0 <= d1 <= 478 }
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
  // bright_weights_normed_gauss_blur_3_rd7 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 29] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> 481 : 0 <= d0 <= 477 and 0 <= d1 <= 478; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 478 and 0 <= d1 <= 478 }
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
  // bright_weights_normed_gauss_blur_3_rd8 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 29] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
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
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 46] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 28] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { fused_level_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 478; fused_level_2_update_0[d0, d1] -> 963 : d0 = 479 and 0 <= d1 <= 478; fused_level_2_update_0[d0, d1] -> (961 - d0) : d1 = 479 and 0 <= d0 <= 479 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (-479 + d0 == 0 && 478 - d1 >= 0) ? (963) : (478 - d1 >= 0 && 478 - d0 >= 0) ? (964) : (-479 + d1 == 0) ? ((961 - d0)) : 0);
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
	// RAM Box: {[0, 239], [0, 239]}
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
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 45] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Write schedule: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 38] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
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
	// RAM Box: {[0, 1928], [0, 1926]}
	// Capacity: 968
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 481> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
		return f6;
	}

	inline hw_uint<16> peek_965() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_dark_update_0_write1_merged_banks_11_cache {
	// RAM Box: {[1, 1929], [0, 1926]}
	// Capacity: 968
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 481> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
		return f6;
	}

	inline hw_uint<16> peek_965() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_dark_update_0_write2_merged_banks_11_cache {
	// RAM Box: {[2, 1930], [0, 1926]}
	// Capacity: 968
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 482> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 482> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_484() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_967() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_dark_update_0_write3_merged_banks_11_cache {
	// RAM Box: {[3, 1931], [0, 1926]}
	// Capacity: 968
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 482> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 482> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_484() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_967() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f3.push(f2);
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
  dark_dark_update_0_write1_merged_banks_11_cache dark_dark_update_0_write1_merged_banks_11;
  dark_dark_update_0_write2_merged_banks_11_cache dark_dark_update_0_write2_merged_banks_11;
  dark_dark_update_0_write3_merged_banks_11_cache dark_dark_update_0_write3_merged_banks_11;
};



inline void dark_dark_update_0_write0_write(hw_uint<16>& dark_dark_update_0_write0, dark_cache& dark, int d0, int d1) {
  dark.dark_dark_update_0_write0_merged_banks_11.push(dark_dark_update_0_write0);
}

inline void dark_dark_update_0_write1_write(hw_uint<16>& dark_dark_update_0_write1, dark_cache& dark, int d0, int d1) {
  dark.dark_dark_update_0_write1_merged_banks_11.push(dark_dark_update_0_write1);
}

inline void dark_dark_update_0_write2_write(hw_uint<16>& dark_dark_update_0_write2, dark_cache& dark, int d0, int d1) {
  dark.dark_dark_update_0_write2_merged_banks_11.push(dark_dark_update_0_write2);
}

inline void dark_dark_update_0_write3_write(hw_uint<16>& dark_dark_update_0_write3, dark_cache& dark, int d0, int d1) {
  dark.dark_dark_update_0_write3_merged_banks_11.push(dark_dark_update_0_write3);
}

inline hw_uint<16> dark_gauss_blur_1_rd0_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd0 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_967();
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
  // dark_gauss_blur_1_rd1 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_484();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd10_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd10 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_484();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd11_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd11 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd12_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd12 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd13_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd13 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_484();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd14_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd14 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd15_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd15 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd16_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd16 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_484();
  return value_dark_dark_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd17_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd17 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd18_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd18 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd19_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd19 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_484();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd2_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd2 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd20_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd20 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd21_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd21 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd22_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd22 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_484();
  return value_dark_dark_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd23_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd23 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd24_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd24 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[4 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_966();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd25_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd25 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[4 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_483();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd26_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd26 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[4 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd27_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd27 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd28_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd28 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_484();
  return value_dark_dark_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd29_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd29 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd3_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd3 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd30_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd30 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[4 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_966();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd31_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd31 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[4 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_483();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd32_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd32 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[4 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd33_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd33 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[5 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_966();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd34_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd34 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[5 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_483();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd35_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd35 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[5 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd4_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd4 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_484();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd5_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd5 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd6_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd6 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd7_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd7 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_484();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd8_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd8 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_1_rd9_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd9 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_0_rd0_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_laplace_diff_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_0_rd1_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd1 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_laplace_diff_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_0_rd2_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd2 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_laplace_diff_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_0_rd3_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd3 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_laplace_diff_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_967();
  return value_dark_dark_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_rd0_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_rd1_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_rd1 read pattern: { dark_weights_update_0[d0, d1] -> dark[1 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_rd2_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_rd2 read pattern: { dark_weights_update_0[d0, d1] -> dark[2 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_rd3_select(dark_cache& dark, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_rd3 read pattern: { dark_weights_update_0[d0, d1] -> dark[3 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write3;
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
//	dark_gauss_blur_1_rd9
//	dark_gauss_blur_1_rd10
//	dark_gauss_blur_1_rd11
//	dark_gauss_blur_1_rd12
//	dark_gauss_blur_1_rd13
//	dark_gauss_blur_1_rd14
//	dark_gauss_blur_1_rd15
//	dark_gauss_blur_1_rd16
//	dark_gauss_blur_1_rd17
//	dark_gauss_blur_1_rd18
//	dark_gauss_blur_1_rd19
//	dark_gauss_blur_1_rd20
//	dark_gauss_blur_1_rd21
//	dark_gauss_blur_1_rd22
//	dark_gauss_blur_1_rd23
//	dark_gauss_blur_1_rd24
//	dark_gauss_blur_1_rd25
//	dark_gauss_blur_1_rd26
//	dark_gauss_blur_1_rd27
//	dark_gauss_blur_1_rd28
//	dark_gauss_blur_1_rd29
//	dark_gauss_blur_1_rd30
//	dark_gauss_blur_1_rd31
//	dark_gauss_blur_1_rd32
//	dark_gauss_blur_1_rd33
//	dark_gauss_blur_1_rd34
//	dark_gauss_blur_1_rd35
inline hw_uint<576> dark_dark_gauss_blur_1_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
  // # of ports in bundle: 36
    // dark_gauss_blur_1_rd0
    // dark_gauss_blur_1_rd1
    // dark_gauss_blur_1_rd2
    // dark_gauss_blur_1_rd3
    // dark_gauss_blur_1_rd4
    // dark_gauss_blur_1_rd5
    // dark_gauss_blur_1_rd6
    // dark_gauss_blur_1_rd7
    // dark_gauss_blur_1_rd8
    // dark_gauss_blur_1_rd9
    // dark_gauss_blur_1_rd10
    // dark_gauss_blur_1_rd11
    // dark_gauss_blur_1_rd12
    // dark_gauss_blur_1_rd13
    // dark_gauss_blur_1_rd14
    // dark_gauss_blur_1_rd15
    // dark_gauss_blur_1_rd16
    // dark_gauss_blur_1_rd17
    // dark_gauss_blur_1_rd18
    // dark_gauss_blur_1_rd19
    // dark_gauss_blur_1_rd20
    // dark_gauss_blur_1_rd21
    // dark_gauss_blur_1_rd22
    // dark_gauss_blur_1_rd23
    // dark_gauss_blur_1_rd24
    // dark_gauss_blur_1_rd25
    // dark_gauss_blur_1_rd26
    // dark_gauss_blur_1_rd27
    // dark_gauss_blur_1_rd28
    // dark_gauss_blur_1_rd29
    // dark_gauss_blur_1_rd30
    // dark_gauss_blur_1_rd31
    // dark_gauss_blur_1_rd32
    // dark_gauss_blur_1_rd33
    // dark_gauss_blur_1_rd34
    // dark_gauss_blur_1_rd35

	hw_uint<576> result;
	hw_uint<16> dark_gauss_blur_1_rd0_res = dark_gauss_blur_1_rd0_select(dark, d0, d1);
	set_at<0, 576>(result, dark_gauss_blur_1_rd0_res);
	hw_uint<16> dark_gauss_blur_1_rd1_res = dark_gauss_blur_1_rd1_select(dark, d0, d1);
	set_at<16, 576>(result, dark_gauss_blur_1_rd1_res);
	hw_uint<16> dark_gauss_blur_1_rd2_res = dark_gauss_blur_1_rd2_select(dark, d0, d1);
	set_at<32, 576>(result, dark_gauss_blur_1_rd2_res);
	hw_uint<16> dark_gauss_blur_1_rd3_res = dark_gauss_blur_1_rd3_select(dark, d0, d1);
	set_at<48, 576>(result, dark_gauss_blur_1_rd3_res);
	hw_uint<16> dark_gauss_blur_1_rd4_res = dark_gauss_blur_1_rd4_select(dark, d0, d1);
	set_at<64, 576>(result, dark_gauss_blur_1_rd4_res);
	hw_uint<16> dark_gauss_blur_1_rd5_res = dark_gauss_blur_1_rd5_select(dark, d0, d1);
	set_at<80, 576>(result, dark_gauss_blur_1_rd5_res);
	hw_uint<16> dark_gauss_blur_1_rd6_res = dark_gauss_blur_1_rd6_select(dark, d0, d1);
	set_at<96, 576>(result, dark_gauss_blur_1_rd6_res);
	hw_uint<16> dark_gauss_blur_1_rd7_res = dark_gauss_blur_1_rd7_select(dark, d0, d1);
	set_at<112, 576>(result, dark_gauss_blur_1_rd7_res);
	hw_uint<16> dark_gauss_blur_1_rd8_res = dark_gauss_blur_1_rd8_select(dark, d0, d1);
	set_at<128, 576>(result, dark_gauss_blur_1_rd8_res);
	hw_uint<16> dark_gauss_blur_1_rd9_res = dark_gauss_blur_1_rd9_select(dark, d0, d1);
	set_at<144, 576>(result, dark_gauss_blur_1_rd9_res);
	hw_uint<16> dark_gauss_blur_1_rd10_res = dark_gauss_blur_1_rd10_select(dark, d0, d1);
	set_at<160, 576>(result, dark_gauss_blur_1_rd10_res);
	hw_uint<16> dark_gauss_blur_1_rd11_res = dark_gauss_blur_1_rd11_select(dark, d0, d1);
	set_at<176, 576>(result, dark_gauss_blur_1_rd11_res);
	hw_uint<16> dark_gauss_blur_1_rd12_res = dark_gauss_blur_1_rd12_select(dark, d0, d1);
	set_at<192, 576>(result, dark_gauss_blur_1_rd12_res);
	hw_uint<16> dark_gauss_blur_1_rd13_res = dark_gauss_blur_1_rd13_select(dark, d0, d1);
	set_at<208, 576>(result, dark_gauss_blur_1_rd13_res);
	hw_uint<16> dark_gauss_blur_1_rd14_res = dark_gauss_blur_1_rd14_select(dark, d0, d1);
	set_at<224, 576>(result, dark_gauss_blur_1_rd14_res);
	hw_uint<16> dark_gauss_blur_1_rd15_res = dark_gauss_blur_1_rd15_select(dark, d0, d1);
	set_at<240, 576>(result, dark_gauss_blur_1_rd15_res);
	hw_uint<16> dark_gauss_blur_1_rd16_res = dark_gauss_blur_1_rd16_select(dark, d0, d1);
	set_at<256, 576>(result, dark_gauss_blur_1_rd16_res);
	hw_uint<16> dark_gauss_blur_1_rd17_res = dark_gauss_blur_1_rd17_select(dark, d0, d1);
	set_at<272, 576>(result, dark_gauss_blur_1_rd17_res);
	hw_uint<16> dark_gauss_blur_1_rd18_res = dark_gauss_blur_1_rd18_select(dark, d0, d1);
	set_at<288, 576>(result, dark_gauss_blur_1_rd18_res);
	hw_uint<16> dark_gauss_blur_1_rd19_res = dark_gauss_blur_1_rd19_select(dark, d0, d1);
	set_at<304, 576>(result, dark_gauss_blur_1_rd19_res);
	hw_uint<16> dark_gauss_blur_1_rd20_res = dark_gauss_blur_1_rd20_select(dark, d0, d1);
	set_at<320, 576>(result, dark_gauss_blur_1_rd20_res);
	hw_uint<16> dark_gauss_blur_1_rd21_res = dark_gauss_blur_1_rd21_select(dark, d0, d1);
	set_at<336, 576>(result, dark_gauss_blur_1_rd21_res);
	hw_uint<16> dark_gauss_blur_1_rd22_res = dark_gauss_blur_1_rd22_select(dark, d0, d1);
	set_at<352, 576>(result, dark_gauss_blur_1_rd22_res);
	hw_uint<16> dark_gauss_blur_1_rd23_res = dark_gauss_blur_1_rd23_select(dark, d0, d1);
	set_at<368, 576>(result, dark_gauss_blur_1_rd23_res);
	hw_uint<16> dark_gauss_blur_1_rd24_res = dark_gauss_blur_1_rd24_select(dark, d0, d1);
	set_at<384, 576>(result, dark_gauss_blur_1_rd24_res);
	hw_uint<16> dark_gauss_blur_1_rd25_res = dark_gauss_blur_1_rd25_select(dark, d0, d1);
	set_at<400, 576>(result, dark_gauss_blur_1_rd25_res);
	hw_uint<16> dark_gauss_blur_1_rd26_res = dark_gauss_blur_1_rd26_select(dark, d0, d1);
	set_at<416, 576>(result, dark_gauss_blur_1_rd26_res);
	hw_uint<16> dark_gauss_blur_1_rd27_res = dark_gauss_blur_1_rd27_select(dark, d0, d1);
	set_at<432, 576>(result, dark_gauss_blur_1_rd27_res);
	hw_uint<16> dark_gauss_blur_1_rd28_res = dark_gauss_blur_1_rd28_select(dark, d0, d1);
	set_at<448, 576>(result, dark_gauss_blur_1_rd28_res);
	hw_uint<16> dark_gauss_blur_1_rd29_res = dark_gauss_blur_1_rd29_select(dark, d0, d1);
	set_at<464, 576>(result, dark_gauss_blur_1_rd29_res);
	hw_uint<16> dark_gauss_blur_1_rd30_res = dark_gauss_blur_1_rd30_select(dark, d0, d1);
	set_at<480, 576>(result, dark_gauss_blur_1_rd30_res);
	hw_uint<16> dark_gauss_blur_1_rd31_res = dark_gauss_blur_1_rd31_select(dark, d0, d1);
	set_at<496, 576>(result, dark_gauss_blur_1_rd31_res);
	hw_uint<16> dark_gauss_blur_1_rd32_res = dark_gauss_blur_1_rd32_select(dark, d0, d1);
	set_at<512, 576>(result, dark_gauss_blur_1_rd32_res);
	hw_uint<16> dark_gauss_blur_1_rd33_res = dark_gauss_blur_1_rd33_select(dark, d0, d1);
	set_at<528, 576>(result, dark_gauss_blur_1_rd33_res);
	hw_uint<16> dark_gauss_blur_1_rd34_res = dark_gauss_blur_1_rd34_select(dark, d0, d1);
	set_at<544, 576>(result, dark_gauss_blur_1_rd34_res);
	hw_uint<16> dark_gauss_blur_1_rd35_res = dark_gauss_blur_1_rd35_select(dark, d0, d1);
	set_at<560, 576>(result, dark_gauss_blur_1_rd35_res);
	return result;
}

// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
//	dark_laplace_diff_0_rd1
//	dark_laplace_diff_0_rd2
//	dark_laplace_diff_0_rd3
inline hw_uint<64> dark_dark_laplace_diff_0_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
  // # of ports in bundle: 4
    // dark_laplace_diff_0_rd0
    // dark_laplace_diff_0_rd1
    // dark_laplace_diff_0_rd2
    // dark_laplace_diff_0_rd3

	hw_uint<64> result;
	hw_uint<16> dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark, d0, d1);
	set_at<0, 64>(result, dark_laplace_diff_0_rd0_res);
	hw_uint<16> dark_laplace_diff_0_rd1_res = dark_laplace_diff_0_rd1_select(dark, d0, d1);
	set_at<16, 64>(result, dark_laplace_diff_0_rd1_res);
	hw_uint<16> dark_laplace_diff_0_rd2_res = dark_laplace_diff_0_rd2_select(dark, d0, d1);
	set_at<32, 64>(result, dark_laplace_diff_0_rd2_res);
	hw_uint<16> dark_laplace_diff_0_rd3_res = dark_laplace_diff_0_rd3_select(dark, d0, d1);
	set_at<48, 64>(result, dark_laplace_diff_0_rd3_res);
	return result;
}

// dark_update_0_write
//	dark_dark_update_0_write0
//	dark_dark_update_0_write1
//	dark_dark_update_0_write2
//	dark_dark_update_0_write3
inline void dark_dark_update_0_write_bundle_write(hw_uint<64>& dark_update_0_write, dark_cache& dark, int d0, int d1) {
	hw_uint<16> dark_dark_update_0_write0_res = dark_update_0_write.extract<0, 15>();
	dark_dark_update_0_write0_write(dark_dark_update_0_write0_res, dark, d0, d1);
	hw_uint<16> dark_dark_update_0_write1_res = dark_update_0_write.extract<16, 31>();
	dark_dark_update_0_write1_write(dark_dark_update_0_write1_res, dark, d0, d1);
	hw_uint<16> dark_dark_update_0_write2_res = dark_update_0_write.extract<32, 47>();
	dark_dark_update_0_write2_write(dark_dark_update_0_write2_res, dark, d0, d1);
	hw_uint<16> dark_dark_update_0_write3_res = dark_update_0_write.extract<48, 63>();
	dark_dark_update_0_write3_write(dark_dark_update_0_write3_res, dark, d0, d1);
}

// dark_weights_update_0_read
//	dark_weights_rd0
//	dark_weights_rd1
//	dark_weights_rd2
//	dark_weights_rd3
inline hw_uint<64> dark_dark_weights_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
  // # of ports in bundle: 4
    // dark_weights_rd0
    // dark_weights_rd1
    // dark_weights_rd2
    // dark_weights_rd3

	hw_uint<64> result;
	hw_uint<16> dark_weights_rd0_res = dark_weights_rd0_select(dark, d0, d1);
	set_at<0, 64>(result, dark_weights_rd0_res);
	hw_uint<16> dark_weights_rd1_res = dark_weights_rd1_select(dark, d0, d1);
	set_at<16, 64>(result, dark_weights_rd1_res);
	hw_uint<16> dark_weights_rd2_res = dark_weights_rd2_select(dark, d0, d1);
	set_at<32, 64>(result, dark_weights_rd2_res);
	hw_uint<16> dark_weights_rd3_res = dark_weights_rd3_select(dark, d0, d1);
	set_at<48, 64>(result, dark_weights_rd3_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1924], [0, 1924]}
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

struct dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1926], [0, 1924]}
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
  dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2_merged_banks_1_cache dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2_merged_banks_1;
};



inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
  dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1.push(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0);
}

inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_write(hw_uint<16>& dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
}

inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2_write(hw_uint<16>& dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
  dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2_merged_banks_1.push(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2);
}

inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write3_write(hw_uint<16>& dark_gauss_blur_1_dark_gauss_blur_1_update_0_write3, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
}

inline hw_uint<16> dark_gauss_ds_1_rd0_select(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_1_rd0 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[4d0, 2d1] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Read schedule : { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Write schedule: { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // DD fold: {  }
  auto value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0 = dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_ds_1_rd1_select(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_1_rd1 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2 + 4d0, 2d1] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Read schedule : { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Write schedule: { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 8] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // DD fold: {  }
  auto value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2 = dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_gauss_blur_1_update_0_write
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write3
inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(hw_uint<64>& dark_gauss_blur_1_update_0_write, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	hw_uint<16> dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res = dark_gauss_blur_1_update_0_write.extract<0, 15>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res, dark_gauss_blur_1, d0, d1);
	hw_uint<16> dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_res = dark_gauss_blur_1_update_0_write.extract<16, 31>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_res, dark_gauss_blur_1, d0, d1);
	hw_uint<16> dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2_res = dark_gauss_blur_1_update_0_write.extract<32, 47>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write2_res, dark_gauss_blur_1, d0, d1);
	hw_uint<16> dark_gauss_blur_1_dark_gauss_blur_1_update_0_write3_res = dark_gauss_blur_1_update_0_write.extract<48, 63>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write3_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write3_res, dark_gauss_blur_1, d0, d1);
}

// dark_gauss_ds_1_update_0_read
//	dark_gauss_ds_1_rd0
//	dark_gauss_ds_1_rd1
inline hw_uint<32> dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
  // # of ports in bundle: 2
    // dark_gauss_ds_1_rd0
    // dark_gauss_ds_1_rd1

	hw_uint<32> result;
	hw_uint<16> dark_gauss_ds_1_rd0_res = dark_gauss_ds_1_rd0_select(dark_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, dark_gauss_ds_1_rd0_res);
	hw_uint<16> dark_gauss_ds_1_rd1_res = dark_gauss_ds_1_rd1_select(dark_gauss_blur_1, d0, d1);
	set_at<16, 32>(result, dark_gauss_ds_1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 960], [0, 960]}
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

inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write1_write(hw_uint<16>& dark_gauss_blur_2_dark_gauss_blur_2_update_0_write1, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
}

inline hw_uint<16> dark_gauss_ds_2_rd0_select(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_2_rd0 read pattern: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // Read schedule : { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // Write schedule: { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
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
//	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write1
inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& dark_gauss_blur_2_update_0_write, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	hw_uint<16> dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res = dark_gauss_blur_2_update_0_write.extract<0, 15>();
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res, dark_gauss_blur_2, d0, d1);
	hw_uint<16> dark_gauss_blur_2_dark_gauss_blur_2_update_0_write1_res = dark_gauss_blur_2_update_0_write.extract<16, 31>();
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write1_write(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write1_res, dark_gauss_blur_2, d0, d1);
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
	// RAM Box: {[0, 478], [0, 478]}
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
  // dark_gauss_ds_3_rd0 read pattern: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Read schedule : { dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 27] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Write schedule: { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 20] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
	// RAM Box: {[0, 962], [0, 962]}
	// Capacity: 966
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 480> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 480> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}

	inline hw_uint<16> peek_483() {
		return f6;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 962], [0, 962]}
	// Capacity: 482
	// # of read delays: 481
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

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1_cache {
	// RAM Box: {[0, 962], [0, 962]}
	// Capacity: 482
	// # of read delays: 481
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

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10_cache {
	// RAM Box: {[1, 963], [0, 962]}
	// Capacity: 966
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 480> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 480> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}

	inline hw_uint<16> peek_483() {
		return f6;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_to_dark_laplace_us_0_rd2_cache {
	// RAM Box: {[1, 963], [0, 962]}
	// Capacity: 482
	// # of read delays: 481
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

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_to_dark_laplace_us_0_rd3_cache {
	// RAM Box: {[1, 963], [0, 962]}
	// Capacity: 482
	// # of read delays: 481
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

struct dark_gauss_ds_1_cache {
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_to_dark_laplace_us_0_rd2_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_to_dark_laplace_us_0_rd2;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_to_dark_laplace_us_0_rd3_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_to_dark_laplace_us_0_rd3;
};



inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
}

inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_write(hw_uint<16>& dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_to_dark_laplace_us_0_rd2.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_to_dark_laplace_us_0_rd3.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1);
}

inline hw_uint<16> dark_gauss_blur_2_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd0 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
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
  // dark_gauss_blur_2_rd1 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_483();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd10_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd10 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.peek_483();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd11_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd11 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.peek_1();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd12_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd12 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd13_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd13 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_482();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd14_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd14 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd15_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd15 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[3 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.peek_964();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd16_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd16 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[3 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.peek_482();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd17_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd17 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[3 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.peek_0();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd2_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd2 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
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
  // dark_gauss_blur_2_rd3 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd4_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd4 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.peek_483();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd5_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd5 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.peek_1();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd6_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd6 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
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
  // dark_gauss_blur_2_rd7 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_482();
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
  // dark_gauss_blur_2_rd8 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_gauss_blur_2_rd9_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd9 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 13] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 36] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_laplace_diff_1_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_1_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd1 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 36] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_laplace_diff_1_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_us_0_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_0_rd0 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 34] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_laplace_us_0_update_0[d0, d1] -> (481 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 1919 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((481 - d0)) : 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_us_0_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_0_rd1 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 34] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_laplace_us_0_update_0[d0, d1] -> (481 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 1919 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((481 - d0)) : 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_us_0_rd2_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_0_rd2 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[1 + 2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 34] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_laplace_us_0_update_0[d0, d1] -> (481 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 1919 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_to_dark_laplace_us_0_rd2.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((481 - d0)) : 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_us_0_rd3_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_0_rd3 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[1 + 2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 34] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 12] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_laplace_us_0_update_0[d0, d1] -> (481 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 1919 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_to_dark_laplace_us_0_rd3.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((481 - d0)) : 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1;
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
//	dark_gauss_blur_2_rd9
//	dark_gauss_blur_2_rd10
//	dark_gauss_blur_2_rd11
//	dark_gauss_blur_2_rd12
//	dark_gauss_blur_2_rd13
//	dark_gauss_blur_2_rd14
//	dark_gauss_blur_2_rd15
//	dark_gauss_blur_2_rd16
//	dark_gauss_blur_2_rd17
inline hw_uint<288> dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 18
    // dark_gauss_blur_2_rd0
    // dark_gauss_blur_2_rd1
    // dark_gauss_blur_2_rd2
    // dark_gauss_blur_2_rd3
    // dark_gauss_blur_2_rd4
    // dark_gauss_blur_2_rd5
    // dark_gauss_blur_2_rd6
    // dark_gauss_blur_2_rd7
    // dark_gauss_blur_2_rd8
    // dark_gauss_blur_2_rd9
    // dark_gauss_blur_2_rd10
    // dark_gauss_blur_2_rd11
    // dark_gauss_blur_2_rd12
    // dark_gauss_blur_2_rd13
    // dark_gauss_blur_2_rd14
    // dark_gauss_blur_2_rd15
    // dark_gauss_blur_2_rd16
    // dark_gauss_blur_2_rd17

	hw_uint<288> result;
	hw_uint<16> dark_gauss_blur_2_rd0_res = dark_gauss_blur_2_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, dark_gauss_blur_2_rd0_res);
	hw_uint<16> dark_gauss_blur_2_rd1_res = dark_gauss_blur_2_rd1_select(dark_gauss_ds_1, d0, d1);
	set_at<16, 288>(result, dark_gauss_blur_2_rd1_res);
	hw_uint<16> dark_gauss_blur_2_rd2_res = dark_gauss_blur_2_rd2_select(dark_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, dark_gauss_blur_2_rd2_res);
	hw_uint<16> dark_gauss_blur_2_rd3_res = dark_gauss_blur_2_rd3_select(dark_gauss_ds_1, d0, d1);
	set_at<48, 288>(result, dark_gauss_blur_2_rd3_res);
	hw_uint<16> dark_gauss_blur_2_rd4_res = dark_gauss_blur_2_rd4_select(dark_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, dark_gauss_blur_2_rd4_res);
	hw_uint<16> dark_gauss_blur_2_rd5_res = dark_gauss_blur_2_rd5_select(dark_gauss_ds_1, d0, d1);
	set_at<80, 288>(result, dark_gauss_blur_2_rd5_res);
	hw_uint<16> dark_gauss_blur_2_rd6_res = dark_gauss_blur_2_rd6_select(dark_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, dark_gauss_blur_2_rd6_res);
	hw_uint<16> dark_gauss_blur_2_rd7_res = dark_gauss_blur_2_rd7_select(dark_gauss_ds_1, d0, d1);
	set_at<112, 288>(result, dark_gauss_blur_2_rd7_res);
	hw_uint<16> dark_gauss_blur_2_rd8_res = dark_gauss_blur_2_rd8_select(dark_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, dark_gauss_blur_2_rd8_res);
	hw_uint<16> dark_gauss_blur_2_rd9_res = dark_gauss_blur_2_rd9_select(dark_gauss_ds_1, d0, d1);
	set_at<144, 288>(result, dark_gauss_blur_2_rd9_res);
	hw_uint<16> dark_gauss_blur_2_rd10_res = dark_gauss_blur_2_rd10_select(dark_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, dark_gauss_blur_2_rd10_res);
	hw_uint<16> dark_gauss_blur_2_rd11_res = dark_gauss_blur_2_rd11_select(dark_gauss_ds_1, d0, d1);
	set_at<176, 288>(result, dark_gauss_blur_2_rd11_res);
	hw_uint<16> dark_gauss_blur_2_rd12_res = dark_gauss_blur_2_rd12_select(dark_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, dark_gauss_blur_2_rd12_res);
	hw_uint<16> dark_gauss_blur_2_rd13_res = dark_gauss_blur_2_rd13_select(dark_gauss_ds_1, d0, d1);
	set_at<208, 288>(result, dark_gauss_blur_2_rd13_res);
	hw_uint<16> dark_gauss_blur_2_rd14_res = dark_gauss_blur_2_rd14_select(dark_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, dark_gauss_blur_2_rd14_res);
	hw_uint<16> dark_gauss_blur_2_rd15_res = dark_gauss_blur_2_rd15_select(dark_gauss_ds_1, d0, d1);
	set_at<240, 288>(result, dark_gauss_blur_2_rd15_res);
	hw_uint<16> dark_gauss_blur_2_rd16_res = dark_gauss_blur_2_rd16_select(dark_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, dark_gauss_blur_2_rd16_res);
	hw_uint<16> dark_gauss_blur_2_rd17_res = dark_gauss_blur_2_rd17_select(dark_gauss_ds_1, d0, d1);
	set_at<272, 288>(result, dark_gauss_blur_2_rd17_res);
	return result;
}

// dark_gauss_ds_1_update_0_write
//	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0
//	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1
inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& dark_gauss_ds_1_update_0_write, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	hw_uint<16> dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res = dark_gauss_ds_1_update_0_write.extract<0, 15>();
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res, dark_gauss_ds_1, d0, d1);
	hw_uint<16> dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_res = dark_gauss_ds_1_update_0_write.extract<16, 31>();
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_write(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write1_res, dark_gauss_ds_1, d0, d1);
}

// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
//	dark_laplace_diff_1_rd1
inline hw_uint<32> dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 2
    // dark_laplace_diff_1_rd0
    // dark_laplace_diff_1_rd1

	hw_uint<32> result;
	hw_uint<16> dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_1_rd0_res);
	hw_uint<16> dark_laplace_diff_1_rd1_res = dark_laplace_diff_1_rd1_select(dark_gauss_ds_1, d0, d1);
	set_at<16, 32>(result, dark_laplace_diff_1_rd1_res);
	return result;
}

// dark_laplace_us_0_update_0_read
//	dark_laplace_us_0_rd0
//	dark_laplace_us_0_rd1
//	dark_laplace_us_0_rd2
//	dark_laplace_us_0_rd3
inline hw_uint<64> dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 4
    // dark_laplace_us_0_rd0
    // dark_laplace_us_0_rd1
    // dark_laplace_us_0_rd2
    // dark_laplace_us_0_rd3

	hw_uint<64> result;
	hw_uint<16> dark_laplace_us_0_rd0_res = dark_laplace_us_0_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 64>(result, dark_laplace_us_0_rd0_res);
	hw_uint<16> dark_laplace_us_0_rd1_res = dark_laplace_us_0_rd1_select(dark_gauss_ds_1, d0, d1);
	set_at<16, 64>(result, dark_laplace_us_0_rd1_res);
	hw_uint<16> dark_laplace_us_0_rd2_res = dark_laplace_us_0_rd2_select(dark_gauss_ds_1, d0, d1);
	set_at<32, 64>(result, dark_laplace_us_0_rd2_res);
	hw_uint<16> dark_laplace_us_0_rd3_res = dark_laplace_us_0_rd3_select(dark_gauss_ds_1, d0, d1);
	set_at<48, 64>(result, dark_laplace_us_0_rd3_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [0, 480]}
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
	// RAM Box: {[0, 480], [0, 480]}
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
	// RAM Box: {[0, 480], [0, 480]}
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

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd1_cache {
	// RAM Box: {[0, 480], [0, 480]}
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

struct dark_gauss_ds_2_cache {
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd1_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd1;
};



inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd1.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_3_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd0 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 20] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_gauss_blur_3_rd1 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 20] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 483 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_gauss_blur_3_rd2 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 20] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_gauss_blur_3_rd3 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 20] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 963 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_gauss_blur_3_rd4 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 20] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 482 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_gauss_blur_3_rd5 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 20] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_gauss_blur_3_rd6 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 20] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 962 : 0 <= d0 <= 477 and 0 <= d1 <= 478; dark_gauss_blur_3_update_0[d0, d1] -> (484 + d0) : d0 = 478 and 0 <= d1 <= 478 }
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
  // dark_gauss_blur_3_rd7 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 20] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_gauss_blur_3_update_0[d0, d1] -> 481 : 0 <= d0 <= 477 and 0 <= d1 <= 478; dark_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 478 and 0 <= d1 <= 478 }
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
  // dark_gauss_blur_3_rd8 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 20] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
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
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Read schedule : { dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 35] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_laplace_diff_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 478; dark_laplace_diff_2_update_0[d0, d1] -> 963 : d0 = 479 and 0 <= d1 <= 478; dark_laplace_diff_2_update_0[d0, d1] -> (961 - d0) : d1 = 479 and 0 <= d0 <= 479 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-479 + d0 == 0 && 478 - d1 >= 0) ? (963) : (478 - d1 >= 0 && 478 - d0 >= 0) ? (964) : (-479 + d1 == 0) ? ((961 - d0)) : 0);
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
  // dark_laplace_us_1_rd0 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 33] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_laplace_us_1_update_0[d0, d1] -> (480 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 959 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((480 - d0)) : 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_us_1_rd1_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_1_rd1 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 33] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 19] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_laplace_us_1_update_0[d0, d1] -> (480 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 479 and 0 < d1 <= 959 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((480 - d0)) : 0);
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
//	dark_laplace_us_1_rd1
inline hw_uint<32> dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // # of ports in bundle: 2
    // dark_laplace_us_1_rd0
    // dark_laplace_us_1_rd1

	hw_uint<32> result;
	hw_uint<16> dark_laplace_us_1_rd0_res = dark_laplace_us_1_rd0_select(dark_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, dark_laplace_us_1_rd0_res);
	hw_uint<16> dark_laplace_us_1_rd1_res = dark_laplace_us_1_rd1_select(dark_gauss_ds_2, d0, d1);
	set_at<16, 32>(result, dark_laplace_us_1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 239], [0, 239]}
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
	// RAM Box: {[0, 239], [0, 239]}
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
  // dark_laplace_us_2_rd0 read pattern: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 32] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 27] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // DD fold: { dark_laplace_us_2_update_0[d0, d1] -> (239 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 477 and 0 < d1 <= 479 }
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
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 45] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Write schedule: { dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 27] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
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
	// RAM Box: {[0, 1916], [0, 1919]}
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

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1919]}
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

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1919]}
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

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1919]}
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
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_merged_banks_1_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_merged_banks_1;
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2_merged_banks_1_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2_merged_banks_1;
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3_merged_banks_1_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3_merged_banks_1;
};



inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0);
}

inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_merged_banks_1.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1);
}

inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2_merged_banks_1.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2);
}

inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3_merged_banks_1.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3);
}

inline hw_uint<16> fused_level_0_rd0_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd1_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd2_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd2 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd3_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd3 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_write
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3
inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(hw_uint<64>& dark_laplace_diff_0_update_0_write, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	hw_uint<16> dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res = dark_laplace_diff_0_update_0_write.extract<0, 15>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res, dark_laplace_diff_0, d0, d1);
	hw_uint<16> dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_res = dark_laplace_diff_0_update_0_write.extract<16, 31>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_res, dark_laplace_diff_0, d0, d1);
	hw_uint<16> dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2_res = dark_laplace_diff_0_update_0_write.extract<32, 47>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write2_res, dark_laplace_diff_0, d0, d1);
	hw_uint<16> dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3_res = dark_laplace_diff_0_update_0_write.extract<48, 63>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write3_res, dark_laplace_diff_0, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
//	fused_level_0_rd2
//	fused_level_0_rd3
inline hw_uint<64> dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  // # of ports in bundle: 4
    // fused_level_0_rd0
    // fused_level_0_rd1
    // fused_level_0_rd2
    // fused_level_0_rd3

	hw_uint<64> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_laplace_diff_0, d0, d1);
	set_at<0, 64>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(dark_laplace_diff_0, d0, d1);
	set_at<16, 64>(result, fused_level_0_rd1_res);
	hw_uint<16> fused_level_0_rd2_res = fused_level_0_rd2_select(dark_laplace_diff_0, d0, d1);
	set_at<32, 64>(result, fused_level_0_rd2_res);
	hw_uint<16> fused_level_0_rd3_res = fused_level_0_rd3_select(dark_laplace_diff_0, d0, d1);
	set_at<48, 64>(result, fused_level_0_rd3_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 958], [0, 959]}
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

struct dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 959], [0, 959]}
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
  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1_merged_banks_1_cache dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1_merged_banks_1;
};



inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(hw_uint<16>& dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1.push(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0);
}

inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1_write(hw_uint<16>& dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1_merged_banks_1.push(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1);
}

inline hw_uint<16> fused_level_1_rd0_select(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 47] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 36] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: {  }
  auto value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0 = dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_1_rd1_select(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd1 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 47] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 36] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: {  }
  auto value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1 = dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_write
//	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0
//	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1
inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(hw_uint<32>& dark_laplace_diff_1_update_0_write, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	hw_uint<16> dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res = dark_laplace_diff_1_update_0_write.extract<0, 15>();
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res, dark_laplace_diff_1, d0, d1);
	hw_uint<16> dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1_res = dark_laplace_diff_1_update_0_write.extract<16, 31>();
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1_write(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write1_res, dark_laplace_diff_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
//	fused_level_1_rd1
inline hw_uint<32> dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  // # of ports in bundle: 2
    // fused_level_1_rd0
    // fused_level_1_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_laplace_diff_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	hw_uint<16> fused_level_1_rd1_res = fused_level_1_rd1_select(dark_laplace_diff_1, d0, d1);
	set_at<16, 32>(result, fused_level_1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 479], [0, 479]}
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
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 46] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 35] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
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
	// RAM Box: {[0, 1916], [0, 1919]}
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

struct dark_laplace_us_0_dark_laplace_us_0_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1919]}
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

struct dark_laplace_us_0_dark_laplace_us_0_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1919]}
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

struct dark_laplace_us_0_dark_laplace_us_0_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1919]}
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
  dark_laplace_us_0_dark_laplace_us_0_update_0_write1_merged_banks_1_cache dark_laplace_us_0_dark_laplace_us_0_update_0_write1_merged_banks_1;
  dark_laplace_us_0_dark_laplace_us_0_update_0_write2_merged_banks_1_cache dark_laplace_us_0_dark_laplace_us_0_update_0_write2_merged_banks_1;
  dark_laplace_us_0_dark_laplace_us_0_update_0_write3_merged_banks_1_cache dark_laplace_us_0_dark_laplace_us_0_update_0_write3_merged_banks_1;
};



inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(hw_uint<16>& dark_laplace_us_0_dark_laplace_us_0_update_0_write0, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write0);
}

inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write1_write(hw_uint<16>& dark_laplace_us_0_dark_laplace_us_0_update_0_write1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write1_merged_banks_1.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write1);
}

inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write2_write(hw_uint<16>& dark_laplace_us_0_dark_laplace_us_0_update_0_write2, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write2_merged_banks_1.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write2);
}

inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write3_write(hw_uint<16>& dark_laplace_us_0_dark_laplace_us_0_update_0_write3, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write3_merged_banks_1.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write3);
}

inline hw_uint<16> dark_laplace_diff_0_rd0_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 34] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_0_rd1_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd1 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 34] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write1 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_0_rd2_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd2 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 34] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write2 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_0_rd3_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd3 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 37] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 34] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write3 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
//	dark_laplace_diff_0_rd1
//	dark_laplace_diff_0_rd2
//	dark_laplace_diff_0_rd3
inline hw_uint<64> dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  // # of ports in bundle: 4
    // dark_laplace_diff_0_rd0
    // dark_laplace_diff_0_rd1
    // dark_laplace_diff_0_rd2
    // dark_laplace_diff_0_rd3

	hw_uint<64> result;
	hw_uint<16> dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark_laplace_us_0, d0, d1);
	set_at<0, 64>(result, dark_laplace_diff_0_rd0_res);
	hw_uint<16> dark_laplace_diff_0_rd1_res = dark_laplace_diff_0_rd1_select(dark_laplace_us_0, d0, d1);
	set_at<16, 64>(result, dark_laplace_diff_0_rd1_res);
	hw_uint<16> dark_laplace_diff_0_rd2_res = dark_laplace_diff_0_rd2_select(dark_laplace_us_0, d0, d1);
	set_at<32, 64>(result, dark_laplace_diff_0_rd2_res);
	hw_uint<16> dark_laplace_diff_0_rd3_res = dark_laplace_diff_0_rd3_select(dark_laplace_us_0, d0, d1);
	set_at<48, 64>(result, dark_laplace_diff_0_rd3_res);
	return result;
}

// dark_laplace_us_0_update_0_write
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write0
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write1
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write2
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write3
inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(hw_uint<64>& dark_laplace_us_0_update_0_write, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	hw_uint<16> dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res = dark_laplace_us_0_update_0_write.extract<0, 15>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res, dark_laplace_us_0, d0, d1);
	hw_uint<16> dark_laplace_us_0_dark_laplace_us_0_update_0_write1_res = dark_laplace_us_0_update_0_write.extract<16, 31>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write1_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write1_res, dark_laplace_us_0, d0, d1);
	hw_uint<16> dark_laplace_us_0_dark_laplace_us_0_update_0_write2_res = dark_laplace_us_0_update_0_write.extract<32, 47>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write2_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write2_res, dark_laplace_us_0, d0, d1);
	hw_uint<16> dark_laplace_us_0_dark_laplace_us_0_update_0_write3_res = dark_laplace_us_0_update_0_write.extract<48, 63>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write3_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write3_res, dark_laplace_us_0, d0, d1);
}

#include "hw_classes.h"

struct dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 958], [0, 959]}
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

struct dark_laplace_us_1_dark_laplace_us_1_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 959], [0, 959]}
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
  dark_laplace_us_1_dark_laplace_us_1_update_0_write1_merged_banks_1_cache dark_laplace_us_1_dark_laplace_us_1_update_0_write1_merged_banks_1;
};



inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(hw_uint<16>& dark_laplace_us_1_dark_laplace_us_1_update_0_write0, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1.push(dark_laplace_us_1_dark_laplace_us_1_update_0_write0);
}

inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write1_write(hw_uint<16>& dark_laplace_us_1_dark_laplace_us_1_update_0_write1, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write1_merged_banks_1.push(dark_laplace_us_1_dark_laplace_us_1_update_0_write1);
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 36] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { dark_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 33] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: {  }
  auto value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0 = dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_laplace_diff_1_rd1_select(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd1 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 36] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { dark_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 33] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: {  }
  auto value_dark_laplace_us_1_dark_laplace_us_1_update_0_write1 = dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_1_dark_laplace_us_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
//	dark_laplace_diff_1_rd1
inline hw_uint<32> dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  // # of ports in bundle: 2
    // dark_laplace_diff_1_rd0
    // dark_laplace_diff_1_rd1

	hw_uint<32> result;
	hw_uint<16> dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_laplace_us_1, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_1_rd0_res);
	hw_uint<16> dark_laplace_diff_1_rd1_res = dark_laplace_diff_1_rd1_select(dark_laplace_us_1, d0, d1);
	set_at<16, 32>(result, dark_laplace_diff_1_rd1_res);
	return result;
}

// dark_laplace_us_1_update_0_write
//	dark_laplace_us_1_dark_laplace_us_1_update_0_write0
//	dark_laplace_us_1_dark_laplace_us_1_update_0_write1
inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(hw_uint<32>& dark_laplace_us_1_update_0_write, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	hw_uint<16> dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res = dark_laplace_us_1_update_0_write.extract<0, 15>();
	dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res, dark_laplace_us_1, d0, d1);
	hw_uint<16> dark_laplace_us_1_dark_laplace_us_1_update_0_write1_res = dark_laplace_us_1_update_0_write.extract<16, 31>();
	dark_laplace_us_1_dark_laplace_us_1_update_0_write1_write(dark_laplace_us_1_dark_laplace_us_1_update_0_write1_res, dark_laplace_us_1, d0, d1);
}

#include "hw_classes.h"

struct dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 479], [0, 479]}
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
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Read schedule : { dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 35] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { dark_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 32] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
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
	// RAM Box: {[0, 1928], [0, 1926]}
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

struct dark_weights_dark_weights_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1929], [0, 1926]}
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

struct dark_weights_dark_weights_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 1930], [0, 1926]}
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

struct dark_weights_dark_weights_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 1931], [0, 1926]}
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
  dark_weights_dark_weights_update_0_write1_merged_banks_2_cache dark_weights_dark_weights_update_0_write1_merged_banks_2;
  dark_weights_dark_weights_update_0_write2_merged_banks_2_cache dark_weights_dark_weights_update_0_write2_merged_banks_2;
  dark_weights_dark_weights_update_0_write3_merged_banks_2_cache dark_weights_dark_weights_update_0_write3_merged_banks_2;
};



inline void dark_weights_dark_weights_update_0_write0_write(hw_uint<16>& dark_weights_dark_weights_update_0_write0, dark_weights_cache& dark_weights, int d0, int d1) {
  dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.push(dark_weights_dark_weights_update_0_write0);
}

inline void dark_weights_dark_weights_update_0_write1_write(hw_uint<16>& dark_weights_dark_weights_update_0_write1, dark_weights_cache& dark_weights, int d0, int d1) {
  dark_weights.dark_weights_dark_weights_update_0_write1_merged_banks_2.push(dark_weights_dark_weights_update_0_write1);
}

inline void dark_weights_dark_weights_update_0_write2_write(hw_uint<16>& dark_weights_dark_weights_update_0_write2, dark_weights_cache& dark_weights, int d0, int d1) {
  dark_weights.dark_weights_dark_weights_update_0_write2_merged_banks_2.push(dark_weights_dark_weights_update_0_write2);
}

inline void dark_weights_dark_weights_update_0_write3_write(hw_uint<16>& dark_weights_dark_weights_update_0_write3, dark_weights_cache& dark_weights, int d0, int d1) {
  dark_weights.dark_weights_dark_weights_update_0_write3_merged_banks_2.push(dark_weights_dark_weights_update_0_write3);
}

inline hw_uint<16> dark_weights_normed_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_rd1_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd1 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[1 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write1 = dark_weights.dark_weights_dark_weights_update_0_write1_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_rd2_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd2 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[2 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write2 = dark_weights.dark_weights_dark_weights_update_0_write2_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_rd3_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd3 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[3 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write3 = dark_weights.dark_weights_dark_weights_update_0_write3_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> weight_sums_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> weight_sums_rd1_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd1 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[1 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write1 = dark_weights.dark_weights_dark_weights_update_0_write1_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> weight_sums_rd2_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd2 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[2 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write2 = dark_weights.dark_weights_dark_weights_update_0_write2_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> weight_sums_rd3_select(dark_weights_cache& dark_weights, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd3 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[3 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_dark_weights_update_0_write3 = dark_weights.dark_weights_dark_weights_update_0_write3_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
//	dark_weights_normed_rd1
//	dark_weights_normed_rd2
//	dark_weights_normed_rd3
inline hw_uint<64> dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1) {
  // # of ports in bundle: 4
    // dark_weights_normed_rd0
    // dark_weights_normed_rd1
    // dark_weights_normed_rd2
    // dark_weights_normed_rd3

	hw_uint<64> result;
	hw_uint<16> dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(dark_weights, d0, d1);
	set_at<0, 64>(result, dark_weights_normed_rd0_res);
	hw_uint<16> dark_weights_normed_rd1_res = dark_weights_normed_rd1_select(dark_weights, d0, d1);
	set_at<16, 64>(result, dark_weights_normed_rd1_res);
	hw_uint<16> dark_weights_normed_rd2_res = dark_weights_normed_rd2_select(dark_weights, d0, d1);
	set_at<32, 64>(result, dark_weights_normed_rd2_res);
	hw_uint<16> dark_weights_normed_rd3_res = dark_weights_normed_rd3_select(dark_weights, d0, d1);
	set_at<48, 64>(result, dark_weights_normed_rd3_res);
	return result;
}

// dark_weights_update_0_write
//	dark_weights_dark_weights_update_0_write0
//	dark_weights_dark_weights_update_0_write1
//	dark_weights_dark_weights_update_0_write2
//	dark_weights_dark_weights_update_0_write3
inline void dark_weights_dark_weights_update_0_write_bundle_write(hw_uint<64>& dark_weights_update_0_write, dark_weights_cache& dark_weights, int d0, int d1) {
	hw_uint<16> dark_weights_dark_weights_update_0_write0_res = dark_weights_update_0_write.extract<0, 15>();
	dark_weights_dark_weights_update_0_write0_write(dark_weights_dark_weights_update_0_write0_res, dark_weights, d0, d1);
	hw_uint<16> dark_weights_dark_weights_update_0_write1_res = dark_weights_update_0_write.extract<16, 31>();
	dark_weights_dark_weights_update_0_write1_write(dark_weights_dark_weights_update_0_write1_res, dark_weights, d0, d1);
	hw_uint<16> dark_weights_dark_weights_update_0_write2_res = dark_weights_update_0_write.extract<32, 47>();
	dark_weights_dark_weights_update_0_write2_write(dark_weights_dark_weights_update_0_write2_res, dark_weights, d0, d1);
	hw_uint<16> dark_weights_dark_weights_update_0_write3_res = dark_weights_update_0_write.extract<48, 63>();
	dark_weights_dark_weights_update_0_write3_write(dark_weights_dark_weights_update_0_write3_res, dark_weights, d0, d1);
}

// weight_sums_update_0_read
//	weight_sums_rd0
//	weight_sums_rd1
//	weight_sums_rd2
//	weight_sums_rd3
inline hw_uint<64> dark_weights_weight_sums_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1) {
  // # of ports in bundle: 4
    // weight_sums_rd0
    // weight_sums_rd1
    // weight_sums_rd2
    // weight_sums_rd3

	hw_uint<64> result;
	hw_uint<16> weight_sums_rd0_res = weight_sums_rd0_select(dark_weights, d0, d1);
	set_at<0, 64>(result, weight_sums_rd0_res);
	hw_uint<16> weight_sums_rd1_res = weight_sums_rd1_select(dark_weights, d0, d1);
	set_at<16, 64>(result, weight_sums_rd1_res);
	hw_uint<16> weight_sums_rd2_res = weight_sums_rd2_select(dark_weights, d0, d1);
	set_at<32, 64>(result, weight_sums_rd2_res);
	hw_uint<16> weight_sums_rd3_res = weight_sums_rd3_select(dark_weights, d0, d1);
	set_at<48, 64>(result, weight_sums_rd3_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 1928], [0, 1926]}
	// Capacity: 968
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 481> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
		return f6;
	}

	inline hw_uint<16> peek_965() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10_cache {
	// RAM Box: {[1, 1929], [0, 1926]}
	// Capacity: 968
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 481> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
		return f6;
	}

	inline hw_uint<16> peek_965() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10_cache {
	// RAM Box: {[2, 1930], [0, 1926]}
	// Capacity: 968
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 482> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 482> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_484() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_967() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10_cache {
	// RAM Box: {[3, 1931], [0, 1926]}
	// Capacity: 968
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 482> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 482> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_484() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_967() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 482
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 482 reading from capacity: 1
    f3.push(f2);
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
  dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10_cache dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10;
  dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10_cache dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10;
  dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10_cache dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10;
};



inline void dark_weights_normed_dark_weights_normed_update_0_write0_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write0, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.push(dark_weights_normed_dark_weights_normed_update_0_write0);
}

inline void dark_weights_normed_dark_weights_normed_update_0_write1_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write1, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.push(dark_weights_normed_dark_weights_normed_update_0_write1);
}

inline void dark_weights_normed_dark_weights_normed_update_0_write2_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write2, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.push(dark_weights_normed_dark_weights_normed_update_0_write2);
}

inline void dark_weights_normed_dark_weights_normed_update_0_write3_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write3, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.push(dark_weights_normed_dark_weights_normed_update_0_write3);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd0 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_967();
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
  // dark_weights_normed_gauss_blur_1_rd1 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_484();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd10_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd10 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_484();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd11_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd11 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd12_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd12 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write2 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd13_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd13 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write2 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.peek_484();
  return value_dark_weights_normed_dark_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd14_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd14 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write2 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd15_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd15 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write3 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd16_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd16 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write3 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.peek_484();
  return value_dark_weights_normed_dark_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd17_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd17 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write3 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd18_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd18 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write2 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd19_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd19 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write2 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.peek_484();
  return value_dark_weights_normed_dark_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd2 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd20_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd20 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write2 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd21_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd21 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write3 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd22_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd22 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write3 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.peek_484();
  return value_dark_weights_normed_dark_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd23_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd23 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write3 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd24_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd24 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[4 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_966();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd25_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd25 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[4 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_483();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd26_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd26 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[4 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_0();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd27_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd27 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write3 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd28_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd28 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write3 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.peek_484();
  return value_dark_weights_normed_dark_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd29_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd29 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write3 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd3 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd30_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd30 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[4 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_966();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd31_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd31 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[4 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_483();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd32_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd32 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[4 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_0();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd33_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd33 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[5 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 966 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (485 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_966();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd34_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd34 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[5 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1924; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> (2 + d0) : d0 = 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_483();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd35_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd35 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[5 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_0();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd4 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_484();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd5 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd6 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write2 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd7 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 4d0, 1 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 484 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write2 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.peek_484();
  return value_dark_weights_normed_dark_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd8 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 4d0, 2 + d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write2 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd9_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd9 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 4d0, d1] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> 967 : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd1_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd2_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd2 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write2 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write2_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_0_rd3_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd3 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: { fused_level_0_update_0[d0, d1] -> 967 : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write3 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write3_merged_banks_10.peek_967();
  return value_dark_weights_normed_dark_weights_normed_update_0_write3;
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
//	dark_weights_normed_gauss_blur_1_rd9
//	dark_weights_normed_gauss_blur_1_rd10
//	dark_weights_normed_gauss_blur_1_rd11
//	dark_weights_normed_gauss_blur_1_rd12
//	dark_weights_normed_gauss_blur_1_rd13
//	dark_weights_normed_gauss_blur_1_rd14
//	dark_weights_normed_gauss_blur_1_rd15
//	dark_weights_normed_gauss_blur_1_rd16
//	dark_weights_normed_gauss_blur_1_rd17
//	dark_weights_normed_gauss_blur_1_rd18
//	dark_weights_normed_gauss_blur_1_rd19
//	dark_weights_normed_gauss_blur_1_rd20
//	dark_weights_normed_gauss_blur_1_rd21
//	dark_weights_normed_gauss_blur_1_rd22
//	dark_weights_normed_gauss_blur_1_rd23
//	dark_weights_normed_gauss_blur_1_rd24
//	dark_weights_normed_gauss_blur_1_rd25
//	dark_weights_normed_gauss_blur_1_rd26
//	dark_weights_normed_gauss_blur_1_rd27
//	dark_weights_normed_gauss_blur_1_rd28
//	dark_weights_normed_gauss_blur_1_rd29
//	dark_weights_normed_gauss_blur_1_rd30
//	dark_weights_normed_gauss_blur_1_rd31
//	dark_weights_normed_gauss_blur_1_rd32
//	dark_weights_normed_gauss_blur_1_rd33
//	dark_weights_normed_gauss_blur_1_rd34
//	dark_weights_normed_gauss_blur_1_rd35
inline hw_uint<576> dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // # of ports in bundle: 36
    // dark_weights_normed_gauss_blur_1_rd0
    // dark_weights_normed_gauss_blur_1_rd1
    // dark_weights_normed_gauss_blur_1_rd2
    // dark_weights_normed_gauss_blur_1_rd3
    // dark_weights_normed_gauss_blur_1_rd4
    // dark_weights_normed_gauss_blur_1_rd5
    // dark_weights_normed_gauss_blur_1_rd6
    // dark_weights_normed_gauss_blur_1_rd7
    // dark_weights_normed_gauss_blur_1_rd8
    // dark_weights_normed_gauss_blur_1_rd9
    // dark_weights_normed_gauss_blur_1_rd10
    // dark_weights_normed_gauss_blur_1_rd11
    // dark_weights_normed_gauss_blur_1_rd12
    // dark_weights_normed_gauss_blur_1_rd13
    // dark_weights_normed_gauss_blur_1_rd14
    // dark_weights_normed_gauss_blur_1_rd15
    // dark_weights_normed_gauss_blur_1_rd16
    // dark_weights_normed_gauss_blur_1_rd17
    // dark_weights_normed_gauss_blur_1_rd18
    // dark_weights_normed_gauss_blur_1_rd19
    // dark_weights_normed_gauss_blur_1_rd20
    // dark_weights_normed_gauss_blur_1_rd21
    // dark_weights_normed_gauss_blur_1_rd22
    // dark_weights_normed_gauss_blur_1_rd23
    // dark_weights_normed_gauss_blur_1_rd24
    // dark_weights_normed_gauss_blur_1_rd25
    // dark_weights_normed_gauss_blur_1_rd26
    // dark_weights_normed_gauss_blur_1_rd27
    // dark_weights_normed_gauss_blur_1_rd28
    // dark_weights_normed_gauss_blur_1_rd29
    // dark_weights_normed_gauss_blur_1_rd30
    // dark_weights_normed_gauss_blur_1_rd31
    // dark_weights_normed_gauss_blur_1_rd32
    // dark_weights_normed_gauss_blur_1_rd33
    // dark_weights_normed_gauss_blur_1_rd34
    // dark_weights_normed_gauss_blur_1_rd35

	hw_uint<576> result;
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_res = dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed, d0, d1);
	set_at<0, 576>(result, dark_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd1_res = dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed, d0, d1);
	set_at<16, 576>(result, dark_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd2_res = dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed, d0, d1);
	set_at<32, 576>(result, dark_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd3_res = dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed, d0, d1);
	set_at<48, 576>(result, dark_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd4_res = dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed, d0, d1);
	set_at<64, 576>(result, dark_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd5_res = dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed, d0, d1);
	set_at<80, 576>(result, dark_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd6_res = dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed, d0, d1);
	set_at<96, 576>(result, dark_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd7_res = dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed, d0, d1);
	set_at<112, 576>(result, dark_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd8_res = dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed, d0, d1);
	set_at<128, 576>(result, dark_weights_normed_gauss_blur_1_rd8_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd9_res = dark_weights_normed_gauss_blur_1_rd9_select(dark_weights_normed, d0, d1);
	set_at<144, 576>(result, dark_weights_normed_gauss_blur_1_rd9_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd10_res = dark_weights_normed_gauss_blur_1_rd10_select(dark_weights_normed, d0, d1);
	set_at<160, 576>(result, dark_weights_normed_gauss_blur_1_rd10_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd11_res = dark_weights_normed_gauss_blur_1_rd11_select(dark_weights_normed, d0, d1);
	set_at<176, 576>(result, dark_weights_normed_gauss_blur_1_rd11_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd12_res = dark_weights_normed_gauss_blur_1_rd12_select(dark_weights_normed, d0, d1);
	set_at<192, 576>(result, dark_weights_normed_gauss_blur_1_rd12_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd13_res = dark_weights_normed_gauss_blur_1_rd13_select(dark_weights_normed, d0, d1);
	set_at<208, 576>(result, dark_weights_normed_gauss_blur_1_rd13_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd14_res = dark_weights_normed_gauss_blur_1_rd14_select(dark_weights_normed, d0, d1);
	set_at<224, 576>(result, dark_weights_normed_gauss_blur_1_rd14_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd15_res = dark_weights_normed_gauss_blur_1_rd15_select(dark_weights_normed, d0, d1);
	set_at<240, 576>(result, dark_weights_normed_gauss_blur_1_rd15_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd16_res = dark_weights_normed_gauss_blur_1_rd16_select(dark_weights_normed, d0, d1);
	set_at<256, 576>(result, dark_weights_normed_gauss_blur_1_rd16_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd17_res = dark_weights_normed_gauss_blur_1_rd17_select(dark_weights_normed, d0, d1);
	set_at<272, 576>(result, dark_weights_normed_gauss_blur_1_rd17_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd18_res = dark_weights_normed_gauss_blur_1_rd18_select(dark_weights_normed, d0, d1);
	set_at<288, 576>(result, dark_weights_normed_gauss_blur_1_rd18_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd19_res = dark_weights_normed_gauss_blur_1_rd19_select(dark_weights_normed, d0, d1);
	set_at<304, 576>(result, dark_weights_normed_gauss_blur_1_rd19_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd20_res = dark_weights_normed_gauss_blur_1_rd20_select(dark_weights_normed, d0, d1);
	set_at<320, 576>(result, dark_weights_normed_gauss_blur_1_rd20_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd21_res = dark_weights_normed_gauss_blur_1_rd21_select(dark_weights_normed, d0, d1);
	set_at<336, 576>(result, dark_weights_normed_gauss_blur_1_rd21_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd22_res = dark_weights_normed_gauss_blur_1_rd22_select(dark_weights_normed, d0, d1);
	set_at<352, 576>(result, dark_weights_normed_gauss_blur_1_rd22_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd23_res = dark_weights_normed_gauss_blur_1_rd23_select(dark_weights_normed, d0, d1);
	set_at<368, 576>(result, dark_weights_normed_gauss_blur_1_rd23_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd24_res = dark_weights_normed_gauss_blur_1_rd24_select(dark_weights_normed, d0, d1);
	set_at<384, 576>(result, dark_weights_normed_gauss_blur_1_rd24_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd25_res = dark_weights_normed_gauss_blur_1_rd25_select(dark_weights_normed, d0, d1);
	set_at<400, 576>(result, dark_weights_normed_gauss_blur_1_rd25_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd26_res = dark_weights_normed_gauss_blur_1_rd26_select(dark_weights_normed, d0, d1);
	set_at<416, 576>(result, dark_weights_normed_gauss_blur_1_rd26_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd27_res = dark_weights_normed_gauss_blur_1_rd27_select(dark_weights_normed, d0, d1);
	set_at<432, 576>(result, dark_weights_normed_gauss_blur_1_rd27_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd28_res = dark_weights_normed_gauss_blur_1_rd28_select(dark_weights_normed, d0, d1);
	set_at<448, 576>(result, dark_weights_normed_gauss_blur_1_rd28_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd29_res = dark_weights_normed_gauss_blur_1_rd29_select(dark_weights_normed, d0, d1);
	set_at<464, 576>(result, dark_weights_normed_gauss_blur_1_rd29_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd30_res = dark_weights_normed_gauss_blur_1_rd30_select(dark_weights_normed, d0, d1);
	set_at<480, 576>(result, dark_weights_normed_gauss_blur_1_rd30_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd31_res = dark_weights_normed_gauss_blur_1_rd31_select(dark_weights_normed, d0, d1);
	set_at<496, 576>(result, dark_weights_normed_gauss_blur_1_rd31_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd32_res = dark_weights_normed_gauss_blur_1_rd32_select(dark_weights_normed, d0, d1);
	set_at<512, 576>(result, dark_weights_normed_gauss_blur_1_rd32_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd33_res = dark_weights_normed_gauss_blur_1_rd33_select(dark_weights_normed, d0, d1);
	set_at<528, 576>(result, dark_weights_normed_gauss_blur_1_rd33_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd34_res = dark_weights_normed_gauss_blur_1_rd34_select(dark_weights_normed, d0, d1);
	set_at<544, 576>(result, dark_weights_normed_gauss_blur_1_rd34_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd35_res = dark_weights_normed_gauss_blur_1_rd35_select(dark_weights_normed, d0, d1);
	set_at<560, 576>(result, dark_weights_normed_gauss_blur_1_rd35_res);
	return result;
}

// dark_weights_normed_update_0_write
//	dark_weights_normed_dark_weights_normed_update_0_write0
//	dark_weights_normed_dark_weights_normed_update_0_write1
//	dark_weights_normed_dark_weights_normed_update_0_write2
//	dark_weights_normed_dark_weights_normed_update_0_write3
inline void dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(hw_uint<64>& dark_weights_normed_update_0_write, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write0_res = dark_weights_normed_update_0_write.extract<0, 15>();
	dark_weights_normed_dark_weights_normed_update_0_write0_write(dark_weights_normed_dark_weights_normed_update_0_write0_res, dark_weights_normed, d0, d1);
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write1_res = dark_weights_normed_update_0_write.extract<16, 31>();
	dark_weights_normed_dark_weights_normed_update_0_write1_write(dark_weights_normed_dark_weights_normed_update_0_write1_res, dark_weights_normed, d0, d1);
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write2_res = dark_weights_normed_update_0_write.extract<32, 47>();
	dark_weights_normed_dark_weights_normed_update_0_write2_write(dark_weights_normed_dark_weights_normed_update_0_write2_res, dark_weights_normed, d0, d1);
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write3_res = dark_weights_normed_update_0_write.extract<48, 63>();
	dark_weights_normed_dark_weights_normed_update_0_write3_write(dark_weights_normed_dark_weights_normed_update_0_write3_res, dark_weights_normed, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
//	fused_level_0_rd2
//	fused_level_0_rd3
inline hw_uint<64> dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // # of ports in bundle: 4
    // fused_level_0_rd0
    // fused_level_0_rd1
    // fused_level_0_rd2
    // fused_level_0_rd3

	hw_uint<64> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_weights_normed, d0, d1);
	set_at<0, 64>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(dark_weights_normed, d0, d1);
	set_at<16, 64>(result, fused_level_0_rd1_res);
	hw_uint<16> fused_level_0_rd2_res = fused_level_0_rd2_select(dark_weights_normed, d0, d1);
	set_at<32, 64>(result, fused_level_0_rd2_res);
	hw_uint<16> fused_level_0_rd3_res = fused_level_0_rd3_select(dark_weights_normed, d0, d1);
	set_at<48, 64>(result, fused_level_0_rd3_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1924], [0, 1924]}
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

struct dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1926], [0, 1924]}
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
  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2_merged_banks_1_cache dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2_merged_banks_1;
};



inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0);
}

inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
}

inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2_merged_banks_1.push(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2);
}

inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write3_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write3, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
}

inline hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_1_rd0 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[4d0, 2d1] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Read schedule : { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Write schedule: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0 = dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_ds_1_rd1_select(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_1_rd1 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2 + 4d0, 2d1] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Read schedule : { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // Write schedule: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 11] : 0 <= d0 <= 481 and 0 <= d1 <= 1924 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2 = dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_1_update_0_write
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write3
inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<64>& dark_weights_normed_gauss_blur_1_update_0_write, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res, dark_weights_normed_gauss_blur_1, d0, d1);
	hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<16, 31>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_res, dark_weights_normed_gauss_blur_1, d0, d1);
	hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<32, 47>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write2_res, dark_weights_normed_gauss_blur_1, d0, d1);
	hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write3_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<48, 63>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write3_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write3_res, dark_weights_normed_gauss_blur_1, d0, d1);
}

// dark_weights_normed_gauss_ds_1_update_0_read
//	dark_weights_normed_gauss_ds_1_rd0
//	dark_weights_normed_gauss_ds_1_rd1
inline hw_uint<32> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  // # of ports in bundle: 2
    // dark_weights_normed_gauss_ds_1_rd0
    // dark_weights_normed_gauss_ds_1_rd1

	hw_uint<32> result;
	hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_res = dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_gauss_ds_1_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_ds_1_rd1_res = dark_weights_normed_gauss_ds_1_rd1_select(dark_weights_normed_gauss_blur_1, d0, d1);
	set_at<16, 32>(result, dark_weights_normed_gauss_ds_1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 960], [0, 960]}
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

inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write1_write(hw_uint<16>& dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write1, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
}

inline hw_uint<16> dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_2_rd0 read pattern: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // Read schedule : { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // Write schedule: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
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
//	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write1
inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_blur_2_update_0_write, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<16> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res = dark_weights_normed_gauss_blur_2_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res, dark_weights_normed_gauss_blur_2, d0, d1);
	hw_uint<16> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write1_res = dark_weights_normed_gauss_blur_2_update_0_write.extract<16, 31>();
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write1_write(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write1_res, dark_weights_normed_gauss_blur_2, d0, d1);
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
	// RAM Box: {[0, 478], [0, 478]}
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
  // dark_weights_normed_gauss_ds_3_rd0 read pattern: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Read schedule : { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 31] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Write schedule: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 26] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
	// RAM Box: {[0, 962], [0, 962]}
	// Capacity: 966
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 480> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 480> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}

	inline hw_uint<16> peek_483() {
		return f6;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10_cache {
	// RAM Box: {[1, 963], [0, 962]}
	// Capacity: 966
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 480> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 480> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}

	inline hw_uint<16> peek_483() {
		return f6;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f3.push(f2);
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
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10;
};



inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
}

inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd0 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
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
  // dark_weights_normed_gauss_blur_2_rd1 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_483();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd10_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd10 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_483();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd11_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd11 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_1();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd12_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd12 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd13_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd13 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_482();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd14_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd14 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd15_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd15 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[3 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_964();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd16_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd16 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[3 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_482();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd17_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd17 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[3 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_0();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd2 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
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
  // dark_weights_normed_gauss_blur_2_rd3 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd4 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_483();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd5 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_1();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd6 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
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
  // dark_weights_normed_gauss_blur_2_rd7 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + 2d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 960; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_482();
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
  // dark_weights_normed_gauss_blur_2_rd8 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + 2d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: {  }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd9_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd9 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 18] : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 960 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 47] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { fused_level_1_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> fused_level_1_rd1_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd1 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 47] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 17] : 0 <= d0 <= 481 and 0 <= d1 <= 962 }
  // DD fold: { fused_level_1_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_merged_banks_10.peek_965();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1;
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
//	dark_weights_normed_gauss_blur_2_rd9
//	dark_weights_normed_gauss_blur_2_rd10
//	dark_weights_normed_gauss_blur_2_rd11
//	dark_weights_normed_gauss_blur_2_rd12
//	dark_weights_normed_gauss_blur_2_rd13
//	dark_weights_normed_gauss_blur_2_rd14
//	dark_weights_normed_gauss_blur_2_rd15
//	dark_weights_normed_gauss_blur_2_rd16
//	dark_weights_normed_gauss_blur_2_rd17
inline hw_uint<288> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 18
    // dark_weights_normed_gauss_blur_2_rd0
    // dark_weights_normed_gauss_blur_2_rd1
    // dark_weights_normed_gauss_blur_2_rd2
    // dark_weights_normed_gauss_blur_2_rd3
    // dark_weights_normed_gauss_blur_2_rd4
    // dark_weights_normed_gauss_blur_2_rd5
    // dark_weights_normed_gauss_blur_2_rd6
    // dark_weights_normed_gauss_blur_2_rd7
    // dark_weights_normed_gauss_blur_2_rd8
    // dark_weights_normed_gauss_blur_2_rd9
    // dark_weights_normed_gauss_blur_2_rd10
    // dark_weights_normed_gauss_blur_2_rd11
    // dark_weights_normed_gauss_blur_2_rd12
    // dark_weights_normed_gauss_blur_2_rd13
    // dark_weights_normed_gauss_blur_2_rd14
    // dark_weights_normed_gauss_blur_2_rd15
    // dark_weights_normed_gauss_blur_2_rd16
    // dark_weights_normed_gauss_blur_2_rd17

	hw_uint<288> result;
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_res = dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, dark_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd1_res = dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<16, 288>(result, dark_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd2_res = dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, dark_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd3_res = dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<48, 288>(result, dark_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd4_res = dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, dark_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd5_res = dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<80, 288>(result, dark_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd6_res = dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, dark_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd7_res = dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<112, 288>(result, dark_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd8_res = dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, dark_weights_normed_gauss_blur_2_rd8_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd9_res = dark_weights_normed_gauss_blur_2_rd9_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<144, 288>(result, dark_weights_normed_gauss_blur_2_rd9_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd10_res = dark_weights_normed_gauss_blur_2_rd10_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, dark_weights_normed_gauss_blur_2_rd10_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd11_res = dark_weights_normed_gauss_blur_2_rd11_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<176, 288>(result, dark_weights_normed_gauss_blur_2_rd11_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd12_res = dark_weights_normed_gauss_blur_2_rd12_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, dark_weights_normed_gauss_blur_2_rd12_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd13_res = dark_weights_normed_gauss_blur_2_rd13_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<208, 288>(result, dark_weights_normed_gauss_blur_2_rd13_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd14_res = dark_weights_normed_gauss_blur_2_rd14_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, dark_weights_normed_gauss_blur_2_rd14_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd15_res = dark_weights_normed_gauss_blur_2_rd15_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<240, 288>(result, dark_weights_normed_gauss_blur_2_rd15_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd16_res = dark_weights_normed_gauss_blur_2_rd16_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, dark_weights_normed_gauss_blur_2_rd16_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd17_res = dark_weights_normed_gauss_blur_2_rd17_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<272, 288>(result, dark_weights_normed_gauss_blur_2_rd17_res);
	return result;
}

// dark_weights_normed_gauss_ds_1_update_0_write
//	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0
//	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1
inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_ds_1_update_0_write, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<16> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res = dark_weights_normed_gauss_ds_1_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res, dark_weights_normed_gauss_ds_1, d0, d1);
	hw_uint<16> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_res = dark_weights_normed_gauss_ds_1_update_0_write.extract<16, 31>();
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_write(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write1_res, dark_weights_normed_gauss_ds_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
//	fused_level_1_rd1
inline hw_uint<32> dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // # of ports in bundle: 2
    // fused_level_1_rd0
    // fused_level_1_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	hw_uint<16> fused_level_1_rd1_res = fused_level_1_rd1_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<16, 32>(result, fused_level_1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [0, 480]}
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
	// RAM Box: {[0, 480], [0, 480]}
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
  // dark_weights_normed_gauss_blur_3_rd0 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 26] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_weights_normed_gauss_blur_3_rd1 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 26] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 483 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_weights_normed_gauss_blur_3_rd2 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 26] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_weights_normed_gauss_blur_3_rd3 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 26] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 963 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_weights_normed_gauss_blur_3_rd4 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 26] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 482 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_weights_normed_gauss_blur_3_rd5 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 26] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
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
  // dark_weights_normed_gauss_blur_3_rd6 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 26] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 962 : 0 <= d0 <= 477 and 0 <= d1 <= 478; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (484 + d0) : d0 = 478 and 0 <= d1 <= 478 }
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
  // dark_weights_normed_gauss_blur_3_rd7 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 26] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> 481 : 0 <= d0 <= 477 and 0 <= d1 <= 478; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> (3 + d0) : d0 = 478 and 0 <= d1 <= 478 }
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
  // dark_weights_normed_gauss_blur_3_rd8 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 26] : 0 <= d0 <= 478 and 0 <= d1 <= 478 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
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
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 46] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 25] : 0 <= d0 <= 480 and 0 <= d1 <= 480 }
  // DD fold: { fused_level_2_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 478; fused_level_2_update_0[d0, d1] -> 963 : d0 = 479 and 0 <= d1 <= 478; fused_level_2_update_0[d0, d1] -> (961 - d0) : d1 = 479 and 0 <= d0 <= 479 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (-479 + d0 == 0 && 478 - d1 >= 0) ? (963) : (478 - d1 >= 0 && 478 - d0 >= 0) ? (964) : (-479 + d1 == 0) ? ((961 - d0)) : 0);
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
	// RAM Box: {[0, 239], [0, 239]}
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
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 45] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // Write schedule: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 31] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
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
	// RAM Box: {[0, 1916], [0, 1919]}
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

struct final_merged_0_final_merged_0_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1919]}
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

struct final_merged_0_final_merged_0_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1919]}
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

struct final_merged_0_final_merged_0_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1919]}
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
  final_merged_0_final_merged_0_update_0_write1_merged_banks_1_cache final_merged_0_final_merged_0_update_0_write1_merged_banks_1;
  final_merged_0_final_merged_0_update_0_write2_merged_banks_1_cache final_merged_0_final_merged_0_update_0_write2_merged_banks_1;
  final_merged_0_final_merged_0_update_0_write3_merged_banks_1_cache final_merged_0_final_merged_0_update_0_write3_merged_banks_1;
};



inline void final_merged_0_final_merged_0_update_0_write0_write(hw_uint<16>& final_merged_0_final_merged_0_update_0_write0, final_merged_0_cache& final_merged_0, int d0, int d1) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write0_merged_banks_1.push(final_merged_0_final_merged_0_update_0_write0);
}

inline void final_merged_0_final_merged_0_update_0_write1_write(hw_uint<16>& final_merged_0_final_merged_0_update_0_write1, final_merged_0_cache& final_merged_0, int d0, int d1) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write1_merged_banks_1.push(final_merged_0_final_merged_0_update_0_write1);
}

inline void final_merged_0_final_merged_0_update_0_write2_write(hw_uint<16>& final_merged_0_final_merged_0_update_0_write2, final_merged_0_cache& final_merged_0, int d0, int d1) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write2_merged_banks_1.push(final_merged_0_final_merged_0_update_0_write2);
}

inline void final_merged_0_final_merged_0_update_0_write3_write(hw_uint<16>& final_merged_0_final_merged_0_update_0_write3, final_merged_0_cache& final_merged_0, int d0, int d1) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write3_merged_banks_1.push(final_merged_0_final_merged_0_update_0_write3);
}

inline hw_uint<16> psefn_4_rd0_select(final_merged_0_cache& final_merged_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // psefn_4_rd0 read pattern: { psefn_4_update_0[d0, d1] -> final_merged_0[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { psefn_4_update_0[d0, d1] -> [14 + d1, 4 + d0, 52] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_final_merged_0_final_merged_0_update_0_write0 = final_merged_0.final_merged_0_final_merged_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_final_merged_0_final_merged_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> psefn_4_rd1_select(final_merged_0_cache& final_merged_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // psefn_4_rd1 read pattern: { psefn_4_update_0[d0, d1] -> final_merged_0[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { psefn_4_update_0[d0, d1] -> [14 + d1, 4 + d0, 52] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_final_merged_0_final_merged_0_update_0_write1 = final_merged_0.final_merged_0_final_merged_0_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_final_merged_0_final_merged_0_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> psefn_4_rd2_select(final_merged_0_cache& final_merged_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // psefn_4_rd2 read pattern: { psefn_4_update_0[d0, d1] -> final_merged_0[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { psefn_4_update_0[d0, d1] -> [14 + d1, 4 + d0, 52] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_final_merged_0_final_merged_0_update_0_write2 = final_merged_0.final_merged_0_final_merged_0_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_final_merged_0_final_merged_0_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> psefn_4_rd3_select(final_merged_0_cache& final_merged_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // psefn_4_rd3 read pattern: { psefn_4_update_0[d0, d1] -> final_merged_0[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { psefn_4_update_0[d0, d1] -> [14 + d1, 4 + d0, 52] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: {  }
  auto value_final_merged_0_final_merged_0_update_0_write3 = final_merged_0.final_merged_0_final_merged_0_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_final_merged_0_final_merged_0_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// final_merged_0_update_0_write
//	final_merged_0_final_merged_0_update_0_write0
//	final_merged_0_final_merged_0_update_0_write1
//	final_merged_0_final_merged_0_update_0_write2
//	final_merged_0_final_merged_0_update_0_write3
inline void final_merged_0_final_merged_0_update_0_write_bundle_write(hw_uint<64>& final_merged_0_update_0_write, final_merged_0_cache& final_merged_0, int d0, int d1) {
	hw_uint<16> final_merged_0_final_merged_0_update_0_write0_res = final_merged_0_update_0_write.extract<0, 15>();
	final_merged_0_final_merged_0_update_0_write0_write(final_merged_0_final_merged_0_update_0_write0_res, final_merged_0, d0, d1);
	hw_uint<16> final_merged_0_final_merged_0_update_0_write1_res = final_merged_0_update_0_write.extract<16, 31>();
	final_merged_0_final_merged_0_update_0_write1_write(final_merged_0_final_merged_0_update_0_write1_res, final_merged_0, d0, d1);
	hw_uint<16> final_merged_0_final_merged_0_update_0_write2_res = final_merged_0_update_0_write.extract<32, 47>();
	final_merged_0_final_merged_0_update_0_write2_write(final_merged_0_final_merged_0_update_0_write2_res, final_merged_0, d0, d1);
	hw_uint<16> final_merged_0_final_merged_0_update_0_write3_res = final_merged_0_update_0_write.extract<48, 63>();
	final_merged_0_final_merged_0_update_0_write3_write(final_merged_0_final_merged_0_update_0_write3_res, final_merged_0, d0, d1);
}

// psefn_4_update_0_read
//	psefn_4_rd0
//	psefn_4_rd1
//	psefn_4_rd2
//	psefn_4_rd3
inline hw_uint<64> final_merged_0_psefn_4_update_0_read_bundle_read(final_merged_0_cache& final_merged_0, int d0, int d1) {
  // # of ports in bundle: 4
    // psefn_4_rd0
    // psefn_4_rd1
    // psefn_4_rd2
    // psefn_4_rd3

	hw_uint<64> result;
	hw_uint<16> psefn_4_rd0_res = psefn_4_rd0_select(final_merged_0, d0, d1);
	set_at<0, 64>(result, psefn_4_rd0_res);
	hw_uint<16> psefn_4_rd1_res = psefn_4_rd1_select(final_merged_0, d0, d1);
	set_at<16, 64>(result, psefn_4_rd1_res);
	hw_uint<16> psefn_4_rd2_res = psefn_4_rd2_select(final_merged_0, d0, d1);
	set_at<32, 64>(result, psefn_4_rd2_res);
	hw_uint<16> psefn_4_rd3_res = psefn_4_rd3_select(final_merged_0, d0, d1);
	set_at<48, 64>(result, psefn_4_rd3_res);
	return result;
}

#include "hw_classes.h"

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache {
	// RAM Box: {[0, 958], [0, 959]}
	// Capacity: 480
	// # of read delays: 480
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

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1_cache {
	// RAM Box: {[0, 958], [0, 959]}
	// Capacity: 480
	// # of read delays: 480
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

struct final_merged_1_final_merged_1_update_0_write1_to_final_merged_0_rd2_cache {
	// RAM Box: {[1, 959], [0, 959]}
	// Capacity: 480
	// # of read delays: 480
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

struct final_merged_1_final_merged_1_update_0_write1_to_final_merged_0_rd3_cache {
	// RAM Box: {[1, 959], [0, 959]}
	// Capacity: 480
	// # of read delays: 480
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

struct final_merged_1_cache {
  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0;
  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1_cache final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1;
  final_merged_1_final_merged_1_update_0_write1_to_final_merged_0_rd2_cache final_merged_1_final_merged_1_update_0_write1_to_final_merged_0_rd2;
  final_merged_1_final_merged_1_update_0_write1_to_final_merged_0_rd3_cache final_merged_1_final_merged_1_update_0_write1_to_final_merged_0_rd3;
};



inline void final_merged_1_final_merged_1_update_0_write0_write(hw_uint<16>& final_merged_1_final_merged_1_update_0_write0, final_merged_1_cache& final_merged_1, int d0, int d1) {
  final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.push(final_merged_1_final_merged_1_update_0_write0);
  final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1.push(final_merged_1_final_merged_1_update_0_write0);
}

inline void final_merged_1_final_merged_1_update_0_write1_write(hw_uint<16>& final_merged_1_final_merged_1_update_0_write1, final_merged_1_cache& final_merged_1, int d0, int d1) {
  final_merged_1.final_merged_1_final_merged_1_update_0_write1_to_final_merged_0_rd2.push(final_merged_1_final_merged_1_update_0_write1);
  final_merged_1.final_merged_1_final_merged_1_update_0_write1_to_final_merged_0_rd3.push(final_merged_1_final_merged_1_update_0_write1);
}

inline hw_uint<16> final_merged_0_rd0_select(final_merged_1_cache& final_merged_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 4 + d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> (479 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 478 and 0 < d1 <= 1919 }
  auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : 0);
  return value_final_merged_1_final_merged_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> final_merged_0_rd1_select(final_merged_1_cache& final_merged_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd1 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 4 + d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> (479 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 478 and 0 < d1 <= 1919 }
  auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : 0);
  return value_final_merged_1_final_merged_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> final_merged_0_rd2_select(final_merged_1_cache& final_merged_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd2 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[1 + 2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 4 + d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> (479 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 478 and 0 < d1 <= 1919 }
  auto value_final_merged_1_final_merged_1_update_0_write1 = final_merged_1.final_merged_1_final_merged_1_update_0_write1_to_final_merged_0_rd2.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : 0);
  return value_final_merged_1_final_merged_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> final_merged_0_rd3_select(final_merged_1_cache& final_merged_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd3 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[1 + 2d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 4 + d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> (479 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 478 and 0 < d1 <= 1919 }
  auto value_final_merged_1_final_merged_1_update_0_write1 = final_merged_1.final_merged_1_final_merged_1_update_0_write1_to_final_merged_0_rd3.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : 0);
  return value_final_merged_1_final_merged_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
//	final_merged_0_rd1
//	final_merged_0_rd2
//	final_merged_0_rd3
inline hw_uint<64> final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1_cache& final_merged_1, int d0, int d1) {
  // # of ports in bundle: 4
    // final_merged_0_rd0
    // final_merged_0_rd1
    // final_merged_0_rd2
    // final_merged_0_rd3

	hw_uint<64> result;
	hw_uint<16> final_merged_0_rd0_res = final_merged_0_rd0_select(final_merged_1, d0, d1);
	set_at<0, 64>(result, final_merged_0_rd0_res);
	hw_uint<16> final_merged_0_rd1_res = final_merged_0_rd1_select(final_merged_1, d0, d1);
	set_at<16, 64>(result, final_merged_0_rd1_res);
	hw_uint<16> final_merged_0_rd2_res = final_merged_0_rd2_select(final_merged_1, d0, d1);
	set_at<32, 64>(result, final_merged_0_rd2_res);
	hw_uint<16> final_merged_0_rd3_res = final_merged_0_rd3_select(final_merged_1, d0, d1);
	set_at<48, 64>(result, final_merged_0_rd3_res);
	return result;
}

// final_merged_1_update_0_write
//	final_merged_1_final_merged_1_update_0_write0
//	final_merged_1_final_merged_1_update_0_write1
inline void final_merged_1_final_merged_1_update_0_write_bundle_write(hw_uint<32>& final_merged_1_update_0_write, final_merged_1_cache& final_merged_1, int d0, int d1) {
	hw_uint<16> final_merged_1_final_merged_1_update_0_write0_res = final_merged_1_update_0_write.extract<0, 15>();
	final_merged_1_final_merged_1_update_0_write0_write(final_merged_1_final_merged_1_update_0_write0_res, final_merged_1, d0, d1);
	hw_uint<16> final_merged_1_final_merged_1_update_0_write1_res = final_merged_1_update_0_write.extract<16, 31>();
	final_merged_1_final_merged_1_update_0_write1_write(final_merged_1_final_merged_1_update_0_write1_res, final_merged_1, d0, d1);
}

#include "hw_classes.h"

struct final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache {
	// RAM Box: {[0, 479], [0, 479]}
	// Capacity: 480
	// # of read delays: 480
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

struct final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd1_cache {
	// RAM Box: {[0, 479], [0, 479]}
	// Capacity: 480
	// # of read delays: 480
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
  final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd1_cache final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd1;
};



inline void final_merged_2_final_merged_2_update_0_write0_write(hw_uint<16>& final_merged_2_final_merged_2_update_0_write0, final_merged_2_cache& final_merged_2, int d0, int d1) {
  final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.push(final_merged_2_final_merged_2_update_0_write0);
  final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd1.push(final_merged_2_final_merged_2_update_0_write0);
}

inline hw_uint<16> final_merged_1_rd0_select(final_merged_2_cache& final_merged_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 4 + d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 49] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // DD fold: { final_merged_1_update_0[d0, d1] -> (479 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 478 and 0 < d1 <= 959 }
  auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : 0);
  return value_final_merged_2_final_merged_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> final_merged_1_rd1_select(final_merged_2_cache& final_merged_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd1 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[d0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 4 + d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 49] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // DD fold: { final_merged_1_update_0[d0, d1] -> (479 - d0) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 478 and 0 < d1 <= 959 }
  auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : 0);
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
//	final_merged_1_rd1
inline hw_uint<32> final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2_cache& final_merged_2, int d0, int d1) {
  // # of ports in bundle: 2
    // final_merged_1_rd0
    // final_merged_1_rd1

	hw_uint<32> result;
	hw_uint<16> final_merged_1_rd0_res = final_merged_1_rd0_select(final_merged_2, d0, d1);
	set_at<0, 32>(result, final_merged_1_rd0_res);
	hw_uint<16> final_merged_1_rd1_res = final_merged_1_rd1_select(final_merged_2, d0, d1);
	set_at<16, 32>(result, final_merged_1_rd1_res);
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
	// RAM Box: {[0, 1916], [0, 1919]}
	// Capacity: 5764
	// # of read delays: 5764
	fifo<hw_uint<16>, 5764> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(5763 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1_cache {
	// RAM Box: {[1, 1917], [0, 1919]}
	// Capacity: 5764
	// # of read delays: 5764
	fifo<hw_uint<16>, 5764> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(5763 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_fused_level_0_update_0_write2_to_final_merged_0_rd2_cache {
	// RAM Box: {[2, 1918], [0, 1919]}
	// Capacity: 5764
	// # of read delays: 5764
	fifo<hw_uint<16>, 5764> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(5763 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_fused_level_0_update_0_write3_to_final_merged_0_rd3_cache {
	// RAM Box: {[3, 1919], [0, 1919]}
	// Capacity: 5764
	// # of read delays: 5764
	fifo<hw_uint<16>, 5764> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(5763 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_cache {
  fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0_cache fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0;
  fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1_cache fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1;
  fused_level_0_fused_level_0_update_0_write2_to_final_merged_0_rd2_cache fused_level_0_fused_level_0_update_0_write2_to_final_merged_0_rd2;
  fused_level_0_fused_level_0_update_0_write3_to_final_merged_0_rd3_cache fused_level_0_fused_level_0_update_0_write3_to_final_merged_0_rd3;
};



inline void fused_level_0_fused_level_0_update_0_write0_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write0, fused_level_0_cache& fused_level_0, int d0, int d1) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.push(fused_level_0_fused_level_0_update_0_write0);
}

inline void fused_level_0_fused_level_0_update_0_write1_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write1, fused_level_0_cache& fused_level_0, int d0, int d1) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1.push(fused_level_0_fused_level_0_update_0_write1);
}

inline void fused_level_0_fused_level_0_update_0_write2_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write2, fused_level_0_cache& fused_level_0, int d0, int d1) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write2_to_final_merged_0_rd2.push(fused_level_0_fused_level_0_update_0_write2);
}

inline void fused_level_0_fused_level_0_update_0_write3_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write3, fused_level_0_cache& fused_level_0, int d0, int d1) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write3_to_final_merged_0_rd3.push(fused_level_0_fused_level_0_update_0_write3);
}

inline hw_uint<16> final_merged_0_rd0_select(fused_level_0_cache& fused_level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> ((921599 - d0) - 480 * d1) : 0 <= d0 <= 478 and 1909 <= d1 <= 1918; final_merged_0_update_0[d0, d1] -> (921120 - 480 * d1) : d0 = 479 and 1909 <= d1 <= 1918; final_merged_0_update_0[d0, d1] -> 5761 : d0 = 478 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5760 : d0 = 479 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5763 : 0 <= d0 <= 476 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5762 : d0 = 477 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> (5759 - d0) : d1 = 1908 and (d0 = 478 or (0 <= d0 <= 477)); final_merged_0_update_0[d0, d1] -> 5280 : d0 = 479 and d1 = 1908; final_merged_0_update_0[d0, d1] -> (479 - d0) : d1 = 1919 and 0 <= d0 <= 478 }
  auto value_fused_level_0_fused_level_0_update_0_write0 = fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ (-1908 + d1 == 0 && -479 + d0 == 0) ? (5280) : (-479 + d0 == 0 && 1907 - d1 >= 0) ? (5760) : (-478 + d0 == 0 && 1907 - d1 >= 0) ? (5761) : (-477 + d0 == 0 && 1907 - d1 >= 0) ? (5762) : (1907 - d1 >= 0 && 476 - d0 >= 0) ? (5763) : (-1919 + d1 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : (-1908 + d1 == 0 && 478 - d0 >= 0) ? ((5759 - d0)) : (-479 + d0 == 0 && -1909 + d1 >= 0 && 1918 - d1 >= 0) ? ((921120 - 480 * d1)) : (1918 - d1 >= 0 && 478 - d0 >= 0 && -1909 + d1 >= 0) ? (((921599 - d0) - 480 * d1)) : 0);
  return value_fused_level_0_fused_level_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> final_merged_0_rd1_select(fused_level_0_cache& fused_level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd1 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> ((921599 - d0) - 480 * d1) : 0 <= d0 <= 478 and 1909 <= d1 <= 1918; final_merged_0_update_0[d0, d1] -> (921120 - 480 * d1) : d0 = 479 and 1909 <= d1 <= 1918; final_merged_0_update_0[d0, d1] -> 5761 : d0 = 478 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5760 : d0 = 479 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5763 : 0 <= d0 <= 476 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5762 : d0 = 477 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> (5759 - d0) : d1 = 1908 and (d0 = 478 or (0 <= d0 <= 477)); final_merged_0_update_0[d0, d1] -> 5280 : d0 = 479 and d1 = 1908; final_merged_0_update_0[d0, d1] -> (479 - d0) : d1 = 1919 and 0 <= d0 <= 478 }
  auto value_fused_level_0_fused_level_0_update_0_write1 = fused_level_0.fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1.peek(/* one reader or all rams */ (-1908 + d1 == 0 && -479 + d0 == 0) ? (5280) : (-479 + d0 == 0 && 1907 - d1 >= 0) ? (5760) : (-478 + d0 == 0 && 1907 - d1 >= 0) ? (5761) : (-477 + d0 == 0 && 1907 - d1 >= 0) ? (5762) : (1907 - d1 >= 0 && 476 - d0 >= 0) ? (5763) : (-1919 + d1 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : (-1908 + d1 == 0 && 478 - d0 >= 0) ? ((5759 - d0)) : (-479 + d0 == 0 && -1909 + d1 >= 0 && 1918 - d1 >= 0) ? ((921120 - 480 * d1)) : (1918 - d1 >= 0 && 478 - d0 >= 0 && -1909 + d1 >= 0) ? (((921599 - d0) - 480 * d1)) : 0);
  return value_fused_level_0_fused_level_0_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> final_merged_0_rd2_select(fused_level_0_cache& fused_level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd2 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> ((921599 - d0) - 480 * d1) : 0 <= d0 <= 478 and 1909 <= d1 <= 1918; final_merged_0_update_0[d0, d1] -> (921120 - 480 * d1) : d0 = 479 and 1909 <= d1 <= 1918; final_merged_0_update_0[d0, d1] -> 5761 : d0 = 478 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5760 : d0 = 479 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5763 : 0 <= d0 <= 476 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5762 : d0 = 477 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> (5759 - d0) : d1 = 1908 and (d0 = 478 or (0 <= d0 <= 477)); final_merged_0_update_0[d0, d1] -> 5280 : d0 = 479 and d1 = 1908; final_merged_0_update_0[d0, d1] -> (479 - d0) : d1 = 1919 and 0 <= d0 <= 478 }
  auto value_fused_level_0_fused_level_0_update_0_write2 = fused_level_0.fused_level_0_fused_level_0_update_0_write2_to_final_merged_0_rd2.peek(/* one reader or all rams */ (-1908 + d1 == 0 && -479 + d0 == 0) ? (5280) : (-479 + d0 == 0 && 1907 - d1 >= 0) ? (5760) : (-478 + d0 == 0 && 1907 - d1 >= 0) ? (5761) : (-477 + d0 == 0 && 1907 - d1 >= 0) ? (5762) : (1907 - d1 >= 0 && 476 - d0 >= 0) ? (5763) : (-1919 + d1 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : (-1908 + d1 == 0 && 478 - d0 >= 0) ? ((5759 - d0)) : (-479 + d0 == 0 && -1909 + d1 >= 0 && 1918 - d1 >= 0) ? ((921120 - 480 * d1)) : (1918 - d1 >= 0 && 478 - d0 >= 0 && -1909 + d1 >= 0) ? (((921599 - d0) - 480 * d1)) : 0);
  return value_fused_level_0_fused_level_0_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> final_merged_0_rd3_select(fused_level_0_cache& fused_level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd3 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 4 + d0, 51] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // Write schedule: { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 479 and 0 <= d1 <= 1919 }
  // DD fold: { final_merged_0_update_0[d0, d1] -> ((921599 - d0) - 480 * d1) : 0 <= d0 <= 478 and 1909 <= d1 <= 1918; final_merged_0_update_0[d0, d1] -> (921120 - 480 * d1) : d0 = 479 and 1909 <= d1 <= 1918; final_merged_0_update_0[d0, d1] -> 5761 : d0 = 478 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5760 : d0 = 479 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5763 : 0 <= d0 <= 476 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> 5762 : d0 = 477 and 0 <= d1 <= 1907; final_merged_0_update_0[d0, d1] -> (5759 - d0) : d1 = 1908 and (d0 = 478 or (0 <= d0 <= 477)); final_merged_0_update_0[d0, d1] -> 5280 : d0 = 479 and d1 = 1908; final_merged_0_update_0[d0, d1] -> (479 - d0) : d1 = 1919 and 0 <= d0 <= 478 }
  auto value_fused_level_0_fused_level_0_update_0_write3 = fused_level_0.fused_level_0_fused_level_0_update_0_write3_to_final_merged_0_rd3.peek(/* one reader or all rams */ (-1908 + d1 == 0 && -479 + d0 == 0) ? (5280) : (-479 + d0 == 0 && 1907 - d1 >= 0) ? (5760) : (-478 + d0 == 0 && 1907 - d1 >= 0) ? (5761) : (-477 + d0 == 0 && 1907 - d1 >= 0) ? (5762) : (1907 - d1 >= 0 && 476 - d0 >= 0) ? (5763) : (-1919 + d1 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : (-1908 + d1 == 0 && 478 - d0 >= 0) ? ((5759 - d0)) : (-479 + d0 == 0 && -1909 + d1 >= 0 && 1918 - d1 >= 0) ? ((921120 - 480 * d1)) : (1918 - d1 >= 0 && 478 - d0 >= 0 && -1909 + d1 >= 0) ? (((921599 - d0) - 480 * d1)) : 0);
  return value_fused_level_0_fused_level_0_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
//	final_merged_0_rd1
//	final_merged_0_rd2
//	final_merged_0_rd3
inline hw_uint<64> fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0_cache& fused_level_0, int d0, int d1) {
  // # of ports in bundle: 4
    // final_merged_0_rd0
    // final_merged_0_rd1
    // final_merged_0_rd2
    // final_merged_0_rd3

	hw_uint<64> result;
	hw_uint<16> final_merged_0_rd0_res = final_merged_0_rd0_select(fused_level_0, d0, d1);
	set_at<0, 64>(result, final_merged_0_rd0_res);
	hw_uint<16> final_merged_0_rd1_res = final_merged_0_rd1_select(fused_level_0, d0, d1);
	set_at<16, 64>(result, final_merged_0_rd1_res);
	hw_uint<16> final_merged_0_rd2_res = final_merged_0_rd2_select(fused_level_0, d0, d1);
	set_at<32, 64>(result, final_merged_0_rd2_res);
	hw_uint<16> final_merged_0_rd3_res = final_merged_0_rd3_select(fused_level_0, d0, d1);
	set_at<48, 64>(result, final_merged_0_rd3_res);
	return result;
}

// fused_level_0_update_0_write
//	fused_level_0_fused_level_0_update_0_write0
//	fused_level_0_fused_level_0_update_0_write1
//	fused_level_0_fused_level_0_update_0_write2
//	fused_level_0_fused_level_0_update_0_write3
inline void fused_level_0_fused_level_0_update_0_write_bundle_write(hw_uint<64>& fused_level_0_update_0_write, fused_level_0_cache& fused_level_0, int d0, int d1) {
	hw_uint<16> fused_level_0_fused_level_0_update_0_write0_res = fused_level_0_update_0_write.extract<0, 15>();
	fused_level_0_fused_level_0_update_0_write0_write(fused_level_0_fused_level_0_update_0_write0_res, fused_level_0, d0, d1);
	hw_uint<16> fused_level_0_fused_level_0_update_0_write1_res = fused_level_0_update_0_write.extract<16, 31>();
	fused_level_0_fused_level_0_update_0_write1_write(fused_level_0_fused_level_0_update_0_write1_res, fused_level_0, d0, d1);
	hw_uint<16> fused_level_0_fused_level_0_update_0_write2_res = fused_level_0_update_0_write.extract<32, 47>();
	fused_level_0_fused_level_0_update_0_write2_write(fused_level_0_fused_level_0_update_0_write2_res, fused_level_0, d0, d1);
	hw_uint<16> fused_level_0_fused_level_0_update_0_write3_res = fused_level_0_update_0_write.extract<48, 63>();
	fused_level_0_fused_level_0_update_0_write3_write(fused_level_0_fused_level_0_update_0_write3_res, fused_level_0, d0, d1);
}

#include "hw_classes.h"

struct fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0_cache {
	// RAM Box: {[0, 958], [0, 959]}
	// Capacity: 1923
	// # of read delays: 1923
	fifo<hw_uint<16>, 1923> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1922 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_1_fused_level_1_update_0_write1_to_final_merged_1_rd1_cache {
	// RAM Box: {[1, 959], [0, 959]}
	// Capacity: 1923
	// # of read delays: 1923
	fifo<hw_uint<16>, 1923> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1922 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_1_cache {
  fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0_cache fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0;
  fused_level_1_fused_level_1_update_0_write1_to_final_merged_1_rd1_cache fused_level_1_fused_level_1_update_0_write1_to_final_merged_1_rd1;
};



inline void fused_level_1_fused_level_1_update_0_write0_write(hw_uint<16>& fused_level_1_fused_level_1_update_0_write0, fused_level_1_cache& fused_level_1, int d0, int d1) {
  fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.push(fused_level_1_fused_level_1_update_0_write0);
}

inline void fused_level_1_fused_level_1_update_0_write1_write(hw_uint<16>& fused_level_1_fused_level_1_update_0_write1, fused_level_1_cache& fused_level_1, int d0, int d1) {
  fused_level_1.fused_level_1_fused_level_1_update_0_write1_to_final_merged_1_rd1.push(fused_level_1_fused_level_1_update_0_write1);
}

inline hw_uint<16> final_merged_1_rd0_select(fused_level_1_cache& fused_level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 4 + d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 47] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: { final_merged_1_update_0[d0, d1] -> ((460799 - d0) - 480 * d1) : 0 <= d0 <= 478 and 957 <= d1 <= 958; final_merged_1_update_0[d0, d1] -> (460320 - 480 * d1) : d0 = 479 and 957 <= d1 <= 958; final_merged_1_update_0[d0, d1] -> 1920 : d0 = 479 and 0 <= d1 <= 955; final_merged_1_update_0[d0, d1] -> 1922 : 0 <= d0 <= 477 and 0 <= d1 <= 955; final_merged_1_update_0[d0, d1] -> 1921 : d0 = 478 and 0 <= d1 <= 955; final_merged_1_update_0[d0, d1] -> (1919 - d0) : d1 = 956 and 0 <= d0 <= 478; final_merged_1_update_0[d0, d1] -> 1440 : d0 = 479 and d1 = 956; final_merged_1_update_0[d0, d1] -> (479 - d0) : d1 = 959 and 0 <= d0 <= 478 }
  auto value_fused_level_1_fused_level_1_update_0_write0 = fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ (-956 + d1 == 0 && -479 + d0 == 0) ? (1440) : (-479 + d0 == 0 && 955 - d1 >= 0) ? (1920) : (-478 + d0 == 0 && 955 - d1 >= 0) ? (1921) : (955 - d1 >= 0 && 477 - d0 >= 0) ? (1922) : (-959 + d1 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : (-956 + d1 == 0 && 478 - d0 >= 0) ? ((1919 - d0)) : (-479 + d0 == 0 && -957 + d1 >= 0 && 958 - d1 >= 0) ? ((460320 - 480 * d1)) : (958 - d1 >= 0 && 478 - d0 >= 0 && -957 + d1 >= 0) ? (((460799 - d0) - 480 * d1)) : 0);
  return value_fused_level_1_fused_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> final_merged_1_rd1_select(fused_level_1_cache& fused_level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd1 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Read schedule : { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 4 + d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // Write schedule: { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 2 + d0, 47] : 0 <= d0 <= 479 and 0 <= d1 <= 959 }
  // DD fold: { final_merged_1_update_0[d0, d1] -> ((460799 - d0) - 480 * d1) : 0 <= d0 <= 478 and 957 <= d1 <= 958; final_merged_1_update_0[d0, d1] -> (460320 - 480 * d1) : d0 = 479 and 957 <= d1 <= 958; final_merged_1_update_0[d0, d1] -> 1920 : d0 = 479 and 0 <= d1 <= 955; final_merged_1_update_0[d0, d1] -> 1922 : 0 <= d0 <= 477 and 0 <= d1 <= 955; final_merged_1_update_0[d0, d1] -> 1921 : d0 = 478 and 0 <= d1 <= 955; final_merged_1_update_0[d0, d1] -> (1919 - d0) : d1 = 956 and 0 <= d0 <= 478; final_merged_1_update_0[d0, d1] -> 1440 : d0 = 479 and d1 = 956; final_merged_1_update_0[d0, d1] -> (479 - d0) : d1 = 959 and 0 <= d0 <= 478 }
  auto value_fused_level_1_fused_level_1_update_0_write1 = fused_level_1.fused_level_1_fused_level_1_update_0_write1_to_final_merged_1_rd1.peek(/* one reader or all rams */ (-956 + d1 == 0 && -479 + d0 == 0) ? (1440) : (-479 + d0 == 0 && 955 - d1 >= 0) ? (1920) : (-478 + d0 == 0 && 955 - d1 >= 0) ? (1921) : (955 - d1 >= 0 && 477 - d0 >= 0) ? (1922) : (-959 + d1 == 0 && 478 - d0 >= 0) ? ((479 - d0)) : (-956 + d1 == 0 && 478 - d0 >= 0) ? ((1919 - d0)) : (-479 + d0 == 0 && -957 + d1 >= 0 && 958 - d1 >= 0) ? ((460320 - 480 * d1)) : (958 - d1 >= 0 && 478 - d0 >= 0 && -957 + d1 >= 0) ? (((460799 - d0) - 480 * d1)) : 0);
  return value_fused_level_1_fused_level_1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
//	final_merged_1_rd1
inline hw_uint<32> fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1_cache& fused_level_1, int d0, int d1) {
  // # of ports in bundle: 2
    // final_merged_1_rd0
    // final_merged_1_rd1

	hw_uint<32> result;
	hw_uint<16> final_merged_1_rd0_res = final_merged_1_rd0_select(fused_level_1, d0, d1);
	set_at<0, 32>(result, final_merged_1_rd0_res);
	hw_uint<16> final_merged_1_rd1_res = final_merged_1_rd1_select(fused_level_1, d0, d1);
	set_at<16, 32>(result, final_merged_1_rd1_res);
	return result;
}

// fused_level_1_update_0_write
//	fused_level_1_fused_level_1_update_0_write0
//	fused_level_1_fused_level_1_update_0_write1
inline void fused_level_1_fused_level_1_update_0_write_bundle_write(hw_uint<32>& fused_level_1_update_0_write, fused_level_1_cache& fused_level_1, int d0, int d1) {
	hw_uint<16> fused_level_1_fused_level_1_update_0_write0_res = fused_level_1_update_0_write.extract<0, 15>();
	fused_level_1_fused_level_1_update_0_write0_write(fused_level_1_fused_level_1_update_0_write0_res, fused_level_1, d0, d1);
	hw_uint<16> fused_level_1_fused_level_1_update_0_write1_res = fused_level_1_update_0_write.extract<16, 31>();
	fused_level_1_fused_level_1_update_0_write1_write(fused_level_1_fused_level_1_update_0_write1_res, fused_level_1, d0, d1);
}

#include "hw_classes.h"

struct fused_level_2_fused_level_2_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 479], [0, 479]}
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
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Read schedule : { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 49] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 46] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
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
	// RAM Box: {[0, 239], [0, 239]}
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
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 479 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 4 + d0, 49] : 0 <= d0 <= 479 and 0 <= d1 <= 479 }
  // Write schedule: { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 45] : 0 <= d0 <= 239 and 0 <= d1 <= 239 }
  // DD fold: { final_merged_2_update_0[d0, d1] -> (239 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 477 and 0 < d1 <= 479 }
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
	// RAM Box: {[0, 1928], [0, 1926]}
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

struct in_in_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1929], [0, 1926]}
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

struct in_in_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 1930], [0, 1926]}
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

struct in_in_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 1931], [0, 1926]}
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
  in_in_update_0_write1_merged_banks_2_cache in_in_update_0_write1_merged_banks_2;
  in_in_update_0_write2_merged_banks_2_cache in_in_update_0_write2_merged_banks_2;
  in_in_update_0_write3_merged_banks_2_cache in_in_update_0_write3_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write1_merged_banks_2.push(in_in_update_0_write1);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write2_merged_banks_2.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write3_merged_banks_2.push(in_in_update_0_write3);
}

inline hw_uint<16> bright_rd0_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_rd1_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd1 read pattern: { bright_update_0[d0, d1] -> in[1 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_rd2_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd2 read pattern: { bright_update_0[d0, d1] -> in[2 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_0();
  return value_in_in_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_rd3_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd3 read pattern: { bright_update_0[d0, d1] -> in[3 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_0();
  return value_in_in_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_rd0_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_rd1_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd1 read pattern: { dark_update_0[d0, d1] -> in[1 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_rd2_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd2 read pattern: { dark_update_0[d0, d1] -> in[2 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_0();
  return value_in_in_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_rd3_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd3 read pattern: { dark_update_0[d0, d1] -> in[3 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_0();
  return value_in_in_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// bright_update_0_read
//	bright_rd0
//	bright_rd1
//	bright_rd2
//	bright_rd3
inline hw_uint<64> in_bright_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
  // # of ports in bundle: 4
    // bright_rd0
    // bright_rd1
    // bright_rd2
    // bright_rd3

	hw_uint<64> result;
	hw_uint<16> bright_rd0_res = bright_rd0_select(in, d0, d1);
	set_at<0, 64>(result, bright_rd0_res);
	hw_uint<16> bright_rd1_res = bright_rd1_select(in, d0, d1);
	set_at<16, 64>(result, bright_rd1_res);
	hw_uint<16> bright_rd2_res = bright_rd2_select(in, d0, d1);
	set_at<32, 64>(result, bright_rd2_res);
	hw_uint<16> bright_rd3_res = bright_rd3_select(in, d0, d1);
	set_at<48, 64>(result, bright_rd3_res);
	return result;
}

// dark_update_0_read
//	dark_rd0
//	dark_rd1
//	dark_rd2
//	dark_rd3
inline hw_uint<64> in_dark_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
  // # of ports in bundle: 4
    // dark_rd0
    // dark_rd1
    // dark_rd2
    // dark_rd3

	hw_uint<64> result;
	hw_uint<16> dark_rd0_res = dark_rd0_select(in, d0, d1);
	set_at<0, 64>(result, dark_rd0_res);
	hw_uint<16> dark_rd1_res = dark_rd1_select(in, d0, d1);
	set_at<16, 64>(result, dark_rd1_res);
	hw_uint<16> dark_rd2_res = dark_rd2_select(in, d0, d1);
	set_at<32, 64>(result, dark_rd2_res);
	hw_uint<16> dark_rd3_res = dark_rd3_select(in, d0, d1);
	set_at<48, 64>(result, dark_rd3_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
//	in_in_update_0_write2
//	in_in_update_0_write3
inline void in_in_update_0_write_bundle_write(hw_uint<64>& in_update_0_write, in_cache& in, int d0, int d1) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1);
	hw_uint<16> in_in_update_0_write1_res = in_update_0_write.extract<16, 31>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1);
	hw_uint<16> in_in_update_0_write2_res = in_update_0_write.extract<32, 47>();
	in_in_update_0_write2_write(in_in_update_0_write2_res, in, d0, d1);
	hw_uint<16> in_in_update_0_write3_res = in_update_0_write.extract<48, 63>();
	in_in_update_0_write3_write(in_in_update_0_write3_res, in, d0, d1);
}

#include "hw_classes.h"

struct weight_sums_weight_sums_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1928], [0, 1926]}
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

struct weight_sums_weight_sums_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1929], [0, 1926]}
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

struct weight_sums_weight_sums_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 1930], [0, 1926]}
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

struct weight_sums_weight_sums_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 1931], [0, 1926]}
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
  weight_sums_weight_sums_update_0_write1_merged_banks_2_cache weight_sums_weight_sums_update_0_write1_merged_banks_2;
  weight_sums_weight_sums_update_0_write2_merged_banks_2_cache weight_sums_weight_sums_update_0_write2_merged_banks_2;
  weight_sums_weight_sums_update_0_write3_merged_banks_2_cache weight_sums_weight_sums_update_0_write3_merged_banks_2;
};



inline void weight_sums_weight_sums_update_0_write0_write(hw_uint<16>& weight_sums_weight_sums_update_0_write0, weight_sums_cache& weight_sums, int d0, int d1) {
  weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.push(weight_sums_weight_sums_update_0_write0);
}

inline void weight_sums_weight_sums_update_0_write1_write(hw_uint<16>& weight_sums_weight_sums_update_0_write1, weight_sums_cache& weight_sums, int d0, int d1) {
  weight_sums.weight_sums_weight_sums_update_0_write1_merged_banks_2.push(weight_sums_weight_sums_update_0_write1);
}

inline void weight_sums_weight_sums_update_0_write2_write(hw_uint<16>& weight_sums_weight_sums_update_0_write2, weight_sums_cache& weight_sums, int d0, int d1) {
  weight_sums.weight_sums_weight_sums_update_0_write2_merged_banks_2.push(weight_sums_weight_sums_update_0_write2);
}

inline void weight_sums_weight_sums_update_0_write3_write(hw_uint<16>& weight_sums_weight_sums_update_0_write3, weight_sums_cache& weight_sums, int d0, int d1) {
  weight_sums.weight_sums_weight_sums_update_0_write3_merged_banks_2.push(weight_sums_weight_sums_update_0_write3);
}

inline hw_uint<16> bright_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_rd1_select(weight_sums_cache& weight_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd1 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[1 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_weight_sums_weight_sums_update_0_write1 = weight_sums.weight_sums_weight_sums_update_0_write1_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_rd2_select(weight_sums_cache& weight_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd2 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[2 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_weight_sums_weight_sums_update_0_write2 = weight_sums.weight_sums_weight_sums_update_0_write2_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> bright_weights_normed_rd3_select(weight_sums_cache& weight_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd3 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[3 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_weight_sums_weight_sums_update_0_write3 = weight_sums.weight_sums_weight_sums_update_0_write3_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_rd1_select(weight_sums_cache& weight_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd1 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[1 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_weight_sums_weight_sums_update_0_write1 = weight_sums.weight_sums_weight_sums_update_0_write1_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_rd2_select(weight_sums_cache& weight_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd2 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[2 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_weight_sums_weight_sums_update_0_write2 = weight_sums.weight_sums_weight_sums_update_0_write2_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> dark_weights_normed_rd3_select(weight_sums_cache& weight_sums, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd3 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[3 + 4d0, d1] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 482 and 0 <= d1 <= 1926 }
  // DD fold: {  }
  auto value_weight_sums_weight_sums_update_0_write3 = weight_sums.weight_sums_weight_sums_update_0_write3_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
//	bright_weights_normed_rd1
//	bright_weights_normed_rd2
//	bright_weights_normed_rd3
inline hw_uint<64> weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1) {
  // # of ports in bundle: 4
    // bright_weights_normed_rd0
    // bright_weights_normed_rd1
    // bright_weights_normed_rd2
    // bright_weights_normed_rd3

	hw_uint<64> result;
	hw_uint<16> bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(weight_sums, d0, d1);
	set_at<0, 64>(result, bright_weights_normed_rd0_res);
	hw_uint<16> bright_weights_normed_rd1_res = bright_weights_normed_rd1_select(weight_sums, d0, d1);
	set_at<16, 64>(result, bright_weights_normed_rd1_res);
	hw_uint<16> bright_weights_normed_rd2_res = bright_weights_normed_rd2_select(weight_sums, d0, d1);
	set_at<32, 64>(result, bright_weights_normed_rd2_res);
	hw_uint<16> bright_weights_normed_rd3_res = bright_weights_normed_rd3_select(weight_sums, d0, d1);
	set_at<48, 64>(result, bright_weights_normed_rd3_res);
	return result;
}

// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
//	dark_weights_normed_rd1
//	dark_weights_normed_rd2
//	dark_weights_normed_rd3
inline hw_uint<64> weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1) {
  // # of ports in bundle: 4
    // dark_weights_normed_rd0
    // dark_weights_normed_rd1
    // dark_weights_normed_rd2
    // dark_weights_normed_rd3

	hw_uint<64> result;
	hw_uint<16> dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(weight_sums, d0, d1);
	set_at<0, 64>(result, dark_weights_normed_rd0_res);
	hw_uint<16> dark_weights_normed_rd1_res = dark_weights_normed_rd1_select(weight_sums, d0, d1);
	set_at<16, 64>(result, dark_weights_normed_rd1_res);
	hw_uint<16> dark_weights_normed_rd2_res = dark_weights_normed_rd2_select(weight_sums, d0, d1);
	set_at<32, 64>(result, dark_weights_normed_rd2_res);
	hw_uint<16> dark_weights_normed_rd3_res = dark_weights_normed_rd3_select(weight_sums, d0, d1);
	set_at<48, 64>(result, dark_weights_normed_rd3_res);
	return result;
}

// weight_sums_update_0_write
//	weight_sums_weight_sums_update_0_write0
//	weight_sums_weight_sums_update_0_write1
//	weight_sums_weight_sums_update_0_write2
//	weight_sums_weight_sums_update_0_write3
inline void weight_sums_weight_sums_update_0_write_bundle_write(hw_uint<64>& weight_sums_update_0_write, weight_sums_cache& weight_sums, int d0, int d1) {
	hw_uint<16> weight_sums_weight_sums_update_0_write0_res = weight_sums_update_0_write.extract<0, 15>();
	weight_sums_weight_sums_update_0_write0_write(weight_sums_weight_sums_update_0_write0_res, weight_sums, d0, d1);
	hw_uint<16> weight_sums_weight_sums_update_0_write1_res = weight_sums_update_0_write.extract<16, 31>();
	weight_sums_weight_sums_update_0_write1_write(weight_sums_weight_sums_update_0_write1_res, weight_sums, d0, d1);
	hw_uint<16> weight_sums_weight_sums_update_0_write2_res = weight_sums_update_0_write.extract<32, 47>();
	weight_sums_weight_sums_update_0_write2_write(weight_sums_weight_sums_update_0_write2_res, weight_sums, d0, d1);
	hw_uint<16> weight_sums_weight_sums_update_0_write3_res = weight_sums_update_0_write.extract<48, 63>();
	weight_sums_weight_sums_update_0_write3_write(weight_sums_weight_sums_update_0_write3_res, weight_sums, d0, d1);
}



// Operation logic
inline void dark_update_0(in_cache& in, dark_cache& dark, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_dark_update_0_read_bundle_read(in/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_update_0_in," << d0<< "," << d1<< "," <<  in_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = scale_exposure_unrolled_4(in_0_c__0_value);
	// Produce: dark
	dark_dark_update_0_write_bundle_write(compute_result, dark, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "dark_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "dark_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "dark_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_update_0(in_cache& in, bright_cache& bright, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_bright_update_0_read_bundle_read(in/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_update_0_in," << d0<< "," << d1<< "," <<  in_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_4(in_0_c__0_value);
	// Produce: bright
	bright_bright_update_0_write_bundle_write(compute_result, bright, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "bright_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "bright_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "bright_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_2_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_blur_2_update_0_dark_gauss_ds_1," << d0<< "," << d1<< "," <<  dark_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_gauss_blur_2
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(compute_result, dark_gauss_blur_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "dark_gauss_blur_2_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_gauss_blur_2_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_1
	auto dark_weights_normed_gauss_blur_1_0_c__0_value = dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_ds_1_update_0_dark_weights_normed_gauss_blur_1," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_blur_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(dark_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_1
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "dark_weights_normed_gauss_ds_1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_weights_normed_gauss_ds_1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_2_update_0(bright_gauss_blur_2_cache& bright_gauss_blur_2, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// Consume: bright_gauss_blur_2
	auto bright_gauss_blur_2_0_c__0_value = bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_ds_2_update_0_bright_gauss_blur_2," << d0<< "," << d1<< "," <<  bright_gauss_blur_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_2_0_c__0_value);
	// Produce: bright_gauss_ds_2
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(compute_result, bright_gauss_ds_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "bright_gauss_ds_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_3
	auto dark_weights_normed_gauss_blur_3_0_c__0_value = dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_ds_3_update_0_dark_weights_normed_gauss_blur_3," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_blur_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_3
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_3, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "dark_weights_normed_gauss_ds_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_2_update_0(dark_gauss_ds_3_cache& dark_gauss_ds_3, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_us_2_update_0_dark_gauss_ds_3," << d0<< "," << d1<< "," <<  dark_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_3_0_c__0_value);
	// Produce: dark_laplace_us_2
	dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(compute_result, dark_laplace_us_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "dark_laplace_us_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_0_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_us_0_update_0_dark_gauss_ds_1," << d0<< "," << d1<< "," <<  dark_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_4(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_laplace_us_0
	dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(compute_result, dark_laplace_us_0, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "dark_laplace_us_0_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_laplace_us_0_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "dark_laplace_us_0_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "dark_laplace_us_0_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_update_0(dark_weights_cache& dark_weights, weight_sums_cache& weight_sums, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_update_0_dark_weights," << d0<< "," << d1<< "," <<  dark_weights_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_update_0_weight_sums," << d0<< "," << d1<< "," <<  weight_sums_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = f_divide_unrolled_4(dark_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: dark_weights_normed
	dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(compute_result, dark_weights_normed, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "dark_weights_normed_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_weights_normed_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "dark_weights_normed_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "dark_weights_normed_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_1_update_0(dark_cache& dark, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_gauss_blur_1_update_0_read_bundle_read(dark/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_blur_1_update_0_dark," << d0<< "," << d1<< "," <<  dark_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_4(dark_0_c__0_value);
	// Produce: dark_gauss_blur_1
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(compute_result, dark_gauss_blur_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "dark_gauss_blur_1_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_gauss_blur_1_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "dark_gauss_blur_1_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "dark_gauss_blur_1_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_update_0(bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_update_0_bright_weights," << d0<< "," << d1<< "," <<  bright_weights_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_update_0_weight_sums," << d0<< "," << d1<< "," <<  weight_sums_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = f_divide_unrolled_4(bright_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: bright_weights_normed
	bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(compute_result, bright_weights_normed, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "bright_weights_normed_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_weights_normed_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "bright_weights_normed_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "bright_weights_normed_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_1_update_0(bright_cache& bright, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_gauss_blur_1_update_0_read_bundle_read(bright/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_blur_1_update_0_bright," << d0<< "," << d1<< "," <<  bright_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_4(bright_0_c__0_value);
	// Produce: bright_gauss_blur_1
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(compute_result, bright_gauss_blur_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "bright_gauss_blur_1_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_gauss_blur_1_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "bright_gauss_blur_1_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "bright_gauss_blur_1_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_1_update_0(dark_gauss_blur_1_cache& dark_gauss_blur_1, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// Consume: dark_gauss_blur_1
	auto dark_gauss_blur_1_0_c__0_value = dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_ds_1_update_0_dark_gauss_blur_1," << d0<< "," << d1<< "," <<  dark_gauss_blur_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(dark_gauss_blur_1_0_c__0_value);
	// Produce: dark_gauss_ds_1
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(compute_result, dark_gauss_ds_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "dark_gauss_ds_1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_gauss_ds_1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_blur_2_update_0_dark_weights_normed_gauss_ds_1," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_2
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "dark_weights_normed_gauss_blur_2_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_weights_normed_gauss_blur_2_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_2
	auto dark_weights_normed_gauss_blur_2_0_c__0_value = dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_ds_2_update_0_dark_weights_normed_gauss_blur_2," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_blur_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_2
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "dark_weights_normed_gauss_ds_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_2
	auto bright_weights_normed_gauss_blur_2_0_c__0_value = bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_ds_2_update_0_bright_weights_normed_gauss_blur_2," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_blur_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_2
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "bright_weights_normed_gauss_ds_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_2_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_2_cache& dark_laplace_us_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_2_update_0_dark_gauss_ds_2," << d0<< "," << d1<< "," <<  dark_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_2
	auto dark_laplace_us_2_0_c__0_value = dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_2_update_0_dark_laplace_us_2," << d0<< "," << d1<< "," <<  dark_laplace_us_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_gauss_ds_2_0_c__0_value, dark_laplace_us_2_0_c__0_value);
	// Produce: dark_laplace_diff_2
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(compute_result, dark_laplace_diff_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "dark_laplace_diff_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_blur_3_update_0_bright_weights_normed_gauss_ds_2," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_3
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_3, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "bright_weights_normed_gauss_blur_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_1_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_1_cache& dark_laplace_us_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_1_update_0_dark_gauss_ds_1," << d0<< "," << d1<< "," <<  dark_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_1
	auto dark_laplace_us_1_0_c__0_value = dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_1_update_0_dark_laplace_us_1," << d0<< "," << d1<< "," <<  dark_laplace_us_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_2(dark_gauss_ds_1_0_c__0_value, dark_laplace_us_1_0_c__0_value);
	// Produce: dark_laplace_diff_1
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(compute_result, dark_laplace_diff_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "dark_laplace_diff_1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_laplace_diff_1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_1_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_us_1_update_0_bright_gauss_ds_2," << d0<< "," << d1<< "," <<  bright_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_laplace_us_1
	bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(compute_result, bright_laplace_us_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "bright_laplace_us_1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_laplace_us_1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_0_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_us_0_update_0_bright_gauss_ds_1," << d0<< "," << d1<< "," <<  bright_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_4(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_laplace_us_0
	bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(compute_result, bright_laplace_us_0, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "bright_laplace_us_0_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_laplace_us_0_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "bright_laplace_us_0_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "bright_laplace_us_0_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_2_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_2_cache& bright_laplace_us_2, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_2_update_0_bright_gauss_ds_2," << d0<< "," << d1<< "," <<  bright_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_2
	auto bright_laplace_us_2_0_c__0_value = bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_2_update_0_bright_laplace_us_2," << d0<< "," << d1<< "," <<  bright_laplace_us_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_gauss_ds_2_0_c__0_value, bright_laplace_us_2_0_c__0_value);
	// Produce: bright_laplace_diff_2
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(compute_result, bright_laplace_diff_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "bright_laplace_diff_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_1_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_1_cache& bright_laplace_us_1, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_1_update_0_bright_gauss_ds_1," << d0<< "," << d1<< "," <<  bright_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_1
	auto bright_laplace_us_1_0_c__0_value = bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_1_update_0_bright_laplace_us_1," << d0<< "," << d1<< "," <<  bright_laplace_us_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_2(bright_gauss_ds_1_0_c__0_value, bright_laplace_us_1_0_c__0_value);
	// Produce: bright_laplace_diff_1
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(compute_result, bright_laplace_diff_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "bright_laplace_diff_1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_laplace_diff_1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_0_update_0(bright_cache& bright, bright_laplace_us_0_cache& bright_laplace_us_0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_laplace_diff_0_update_0_read_bundle_read(bright/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_0_update_0_bright," << d0<< "," << d1<< "," <<  bright_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_0
	auto bright_laplace_us_0_0_c__0_value = bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_0_update_0_bright_laplace_us_0," << d0<< "," << d1<< "," <<  bright_laplace_us_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_4(bright_0_c__0_value, bright_laplace_us_0_0_c__0_value);
	// Produce: bright_laplace_diff_0
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(compute_result, bright_laplace_diff_0, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "bright_laplace_diff_0_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_laplace_diff_0_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "bright_laplace_diff_0_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "bright_laplace_diff_0_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void fused_level_3_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, fused_level_3_cache& fused_level_3, int d0, int d1) {
	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_3_update_0_bright_gauss_ds_3," << d0<< "," << d1<< "," <<  bright_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_3_update_0_dark_gauss_ds_3," << d0<< "," << d1<< "," <<  dark_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_3
	auto bright_weights_normed_gauss_ds_3_0_c__0_value = bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_3_update_0_bright_weights_normed_gauss_ds_3," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_3
	auto dark_weights_normed_gauss_ds_3_0_c__0_value = dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_3_update_0_dark_weights_normed_gauss_ds_3," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_gauss_ds_3_0_c__0_value, dark_gauss_ds_3_0_c__0_value, bright_weights_normed_gauss_ds_3_0_c__0_value, dark_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: fused_level_3
	fused_level_3_fused_level_3_update_0_write_bundle_write(compute_result, fused_level_3, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "fused_level_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void fused_level_2_update_0(bright_laplace_diff_2_cache& bright_laplace_diff_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, fused_level_2_cache& fused_level_2, int d0, int d1) {
	// Consume: bright_laplace_diff_2
	auto bright_laplace_diff_2_0_c__0_value = bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_2_update_0_bright_laplace_diff_2," << d0<< "," << d1<< "," <<  bright_laplace_diff_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_2
	auto dark_laplace_diff_2_0_c__0_value = dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_2_update_0_dark_laplace_diff_2," << d0<< "," << d1<< "," <<  dark_laplace_diff_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_2_update_0_bright_weights_normed_gauss_ds_2," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_2_update_0_dark_weights_normed_gauss_ds_2," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_laplace_diff_2_0_c__0_value, dark_laplace_diff_2_0_c__0_value, bright_weights_normed_gauss_ds_2_0_c__0_value, dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: fused_level_2
	fused_level_2_fused_level_2_update_0_write_bundle_write(compute_result, fused_level_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "fused_level_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void fused_level_1_update_0(bright_laplace_diff_1_cache& bright_laplace_diff_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, fused_level_1_cache& fused_level_1, int d0, int d1) {
	// Consume: bright_laplace_diff_1
	auto bright_laplace_diff_1_0_c__0_value = bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_1_update_0_bright_laplace_diff_1," << d0<< "," << d1<< "," <<  bright_laplace_diff_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_1
	auto dark_laplace_diff_1_0_c__0_value = dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_1_update_0_dark_laplace_diff_1," << d0<< "," << d1<< "," <<  dark_laplace_diff_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_1_update_0_bright_weights_normed_gauss_ds_1," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_1_update_0_dark_weights_normed_gauss_ds_1," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_2(bright_laplace_diff_1_0_c__0_value, dark_laplace_diff_1_0_c__0_value, bright_weights_normed_gauss_ds_1_0_c__0_value, dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: fused_level_1
	fused_level_1_fused_level_1_update_0_write_bundle_write(compute_result, fused_level_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "fused_level_1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "fused_level_1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void fused_level_0_update_0(bright_laplace_diff_0_cache& bright_laplace_diff_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, bright_weights_normed_cache& bright_weights_normed, dark_weights_normed_cache& dark_weights_normed, fused_level_0_cache& fused_level_0, int d0, int d1) {
	// Consume: bright_laplace_diff_0
	auto bright_laplace_diff_0_0_c__0_value = bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_0_update_0_bright_laplace_diff_0," << d0<< "," << d1<< "," <<  bright_laplace_diff_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_0
	auto dark_laplace_diff_0_0_c__0_value = dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_0_update_0_dark_laplace_diff_0," << d0<< "," << d1<< "," <<  dark_laplace_diff_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_0_update_0_bright_weights_normed," << d0<< "," << d1<< "," <<  bright_weights_normed_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_0_update_0_dark_weights_normed," << d0<< "," << d1<< "," <<  dark_weights_normed_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_4(bright_laplace_diff_0_0_c__0_value, dark_laplace_diff_0_0_c__0_value, bright_weights_normed_0_c__0_value, dark_weights_normed_0_c__0_value);
	// Produce: fused_level_0
	fused_level_0_fused_level_0_update_0_write_bundle_write(compute_result, fused_level_0, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "fused_level_0_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "fused_level_0_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "fused_level_0_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "fused_level_0_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void final_merged_0_update_0(final_merged_1_cache& final_merged_1, fused_level_0_cache& fused_level_0, final_merged_0_cache& final_merged_0, int d0, int d1) {
	// Consume: final_merged_1
	auto final_merged_1_0_c__0_value = final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_0_update_0_final_merged_1," << d0<< "," << d1<< "," <<  final_merged_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_0
	auto fused_level_0_0_c__0_value = fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_0_update_0_fused_level_0," << d0<< "," << d1<< "," <<  fused_level_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_4(final_merged_1_0_c__0_value, fused_level_0_0_c__0_value);
	// Produce: final_merged_0
	final_merged_0_final_merged_0_update_0_write_bundle_write(compute_result, final_merged_0, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "final_merged_0_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "final_merged_0_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "final_merged_0_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "final_merged_0_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed_cache& dark_weights_normed, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_blur_1_update_0_dark_weights_normed," << d0<< "," << d1<< "," <<  dark_weights_normed_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_4(dark_weights_normed_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_1
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "dark_weights_normed_gauss_blur_1_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_weights_normed_gauss_blur_1_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "dark_weights_normed_gauss_blur_1_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "dark_weights_normed_gauss_blur_1_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_2_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_blur_2_update_0_bright_gauss_ds_1," << d0<< "," << d1<< "," <<  bright_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_gauss_blur_2
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(compute_result, bright_gauss_blur_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "bright_gauss_blur_2_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_gauss_blur_2_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_3_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_blur_3_update_0_bright_gauss_ds_2," << d0<< "," << d1<< "," <<  bright_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_gauss_blur_3
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(compute_result, bright_gauss_blur_3, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "bright_gauss_blur_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_3_update_0(dark_gauss_blur_3_cache& dark_gauss_blur_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	// Consume: dark_gauss_blur_3
	auto dark_gauss_blur_3_0_c__0_value = dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_ds_3_update_0_dark_gauss_blur_3," << d0<< "," << d1<< "," <<  dark_gauss_blur_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_3_0_c__0_value);
	// Produce: dark_gauss_ds_3
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(compute_result, dark_gauss_ds_3, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "dark_gauss_ds_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void final_merged_2_update_0(fused_level_3_cache& fused_level_3, fused_level_2_cache& fused_level_2, final_merged_2_cache& final_merged_2, int d0, int d1) {
	// Consume: fused_level_3
	auto fused_level_3_0_c__0_value = fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_2_update_0_fused_level_3," << d0<< "," << d1<< "," <<  fused_level_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_2
	auto fused_level_2_0_c__0_value = fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_2_update_0_fused_level_2," << d0<< "," << d1<< "," <<  fused_level_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_1(fused_level_3_0_c__0_value, fused_level_2_0_c__0_value);
	// Produce: final_merged_2
	final_merged_2_final_merged_2_update_0_write_bundle_write(compute_result, final_merged_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "final_merged_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void final_merged_1_update_0(final_merged_2_cache& final_merged_2, fused_level_1_cache& fused_level_1, final_merged_1_cache& final_merged_1, int d0, int d1) {
	// Consume: final_merged_2
	auto final_merged_2_0_c__0_value = final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_1_update_0_final_merged_2," << d0<< "," << d1<< "," <<  final_merged_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_1
	auto fused_level_1_0_c__0_value = fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_1_update_0_fused_level_1," << d0<< "," << d1<< "," <<  fused_level_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_2(final_merged_2_0_c__0_value, fused_level_1_0_c__0_value);
	// Produce: final_merged_1
	final_merged_1_final_merged_1_update_0_write_bundle_write(compute_result, final_merged_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "final_merged_1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "final_merged_1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */in_off_chip, in_cache& in, int d0, int d1) {
	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_4(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "in_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "in_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "in_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "in_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_update_0(dark_cache& dark, dark_weights_cache& dark_weights, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_weights_update_0_read_bundle_read(dark/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_update_0_dark," << d0<< "," << d1<< "," <<  dark_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = exposure_weight_unrolled_4(dark_0_c__0_value);
	// Produce: dark_weights
	dark_weights_dark_weights_update_0_write_bundle_write(compute_result, dark_weights, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "dark_weights_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_weights_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "dark_weights_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "dark_weights_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_update_0(bright_cache& bright, bright_weights_cache& bright_weights, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_weights_update_0_read_bundle_read(bright/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_update_0_bright," << d0<< "," << d1<< "," <<  bright_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = exposure_weight_unrolled_4(bright_0_c__0_value);
	// Produce: bright_weights
	bright_weights_bright_weights_update_0_write_bundle_write(compute_result, bright_weights, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "bright_weights_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_weights_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "bright_weights_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "bright_weights_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void weight_sums_update_0(dark_weights_cache& dark_weights, bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_weight_sums_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "weight_sums_update_0_dark_weights," << d0<< "," << d1<< "," <<  dark_weights_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_weight_sums_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "weight_sums_update_0_bright_weights," << d0<< "," << d1<< "," <<  bright_weights_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_4(dark_weights_0_c__0_value, bright_weights_0_c__0_value);
	// Produce: weight_sums
	weight_sums_weight_sums_update_0_write_bundle_write(compute_result, weight_sums, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "weight_sums_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "weight_sums_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "weight_sums_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "weight_sums_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed_cache& bright_weights_normed, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_blur_1_update_0_bright_weights_normed," << d0<< "," << d1<< "," <<  bright_weights_normed_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_4(bright_weights_normed_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_1
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "bright_weights_normed_gauss_blur_1_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_weights_normed_gauss_blur_1_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "bright_weights_normed_gauss_blur_1_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "bright_weights_normed_gauss_blur_1_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_1_update_0(bright_gauss_blur_1_cache& bright_gauss_blur_1, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// Consume: bright_gauss_blur_1
	auto bright_gauss_blur_1_0_c__0_value = bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_ds_1_update_0_bright_gauss_blur_1," << d0<< "," << d1<< "," <<  bright_gauss_blur_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(bright_gauss_blur_1_0_c__0_value);
	// Produce: bright_gauss_ds_1
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(compute_result, bright_gauss_ds_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "bright_gauss_ds_1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_gauss_ds_1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_2_update_0(dark_gauss_blur_2_cache& dark_gauss_blur_2, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// Consume: dark_gauss_blur_2
	auto dark_gauss_blur_2_0_c__0_value = dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_ds_2_update_0_dark_gauss_blur_2," << d0<< "," << d1<< "," <<  dark_gauss_blur_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_2_0_c__0_value);
	// Produce: dark_gauss_ds_2
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(compute_result, dark_gauss_ds_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "dark_gauss_ds_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_3_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_blur_3_update_0_dark_gauss_ds_2," << d0<< "," << d1<< "," <<  dark_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_gauss_blur_3
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(compute_result, dark_gauss_blur_3, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "dark_gauss_blur_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_blur_3_update_0_dark_weights_normed_gauss_ds_2," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_3
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_3, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "dark_weights_normed_gauss_blur_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_1
	auto bright_weights_normed_gauss_blur_1_0_c__0_value = bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_ds_1_update_0_bright_weights_normed_gauss_blur_1," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_blur_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(bright_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_1
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "bright_weights_normed_gauss_ds_1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_weights_normed_gauss_ds_1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_blur_2_update_0_bright_weights_normed_gauss_ds_1," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(bright_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_2
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "bright_weights_normed_gauss_blur_2_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "bright_weights_normed_gauss_blur_2_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_3_update_0(bright_gauss_blur_3_cache& bright_gauss_blur_3, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	// Consume: bright_gauss_blur_3
	auto bright_gauss_blur_3_0_c__0_value = bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_ds_3_update_0_bright_gauss_blur_3," << d0<< "," << d1<< "," <<  bright_gauss_blur_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_3_0_c__0_value);
	// Produce: bright_gauss_ds_3
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(compute_result, bright_gauss_ds_3, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "bright_gauss_ds_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_1_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_us_1_update_0_dark_gauss_ds_2," << d0<< "," << d1<< "," <<  dark_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_laplace_us_1
	dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(compute_result, dark_laplace_us_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "dark_laplace_us_1_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_laplace_us_1_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_0_update_0(dark_cache& dark, dark_laplace_us_0_cache& dark_laplace_us_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_laplace_diff_0_update_0_read_bundle_read(dark/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_0_update_0_dark," << d0<< "," << d1<< "," <<  dark_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_0
	auto dark_laplace_us_0_0_c__0_value = dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_0_update_0_dark_laplace_us_0," << d0<< "," << d1<< "," <<  dark_laplace_us_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_4(dark_0_c__0_value, dark_laplace_us_0_0_c__0_value);
	// Produce: dark_laplace_diff_0
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(compute_result, dark_laplace_diff_0, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "dark_laplace_diff_0_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "dark_laplace_diff_0_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "dark_laplace_diff_0_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "dark_laplace_diff_0_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_3
	auto bright_weights_normed_gauss_blur_3_0_c__0_value = bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_ds_3_update_0_bright_weights_normed_gauss_blur_3," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_blur_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_3
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_3, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "bright_weights_normed_gauss_ds_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_2_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_us_2_update_0_bright_gauss_ds_3," << d0<< "," << d1<< "," <<  bright_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_3_0_c__0_value);
	// Produce: bright_laplace_us_2
	bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(compute_result, bright_laplace_us_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "bright_laplace_us_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void psefn_4_update_0(final_merged_0_cache& final_merged_0, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */psefn_4, int d0, int d1) {
	// Consume: final_merged_0
	auto final_merged_0_0_c__0_value = final_merged_0_psefn_4_update_0_read_bundle_read(final_merged_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "psefn_4_update_0_final_merged_0," << d0<< "," << d1<< "," <<  final_merged_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_4(final_merged_0_0_c__0_value);
	// Produce: psefn_4
	psefn_4.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "psefn_4_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "psefn_4_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "psefn_4_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "psefn_4_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void psefn_4_opt(HWStream<hw_uint<64> >& /* get_args num ports = 4 */in_off_chip, HWStream<hw_uint<64> >& /* get_args num ports = 4 */psefn_4, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("psefn_4_opt_debug.csv");
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

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // bright_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*10]
	    // bright_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*16]
	    // bright_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*4,1*24]
	    // bright_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*15]
	    // bright_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*23]
	    // bright_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*2 + 1*4,1*30]
	    // bright_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*44]
	    // bright_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*43]
	    // bright_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*4,1*42]
	    // bright_laplace_us_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*41]
	    // bright_laplace_us_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*40]
	    // bright_laplace_us_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*4,1*39]
	    // bright_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
	    // bright_weights_normed_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*14]
	    // bright_weights_normed_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*22]
	    // bright_weights_normed_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*4,1*29]
	    // bright_weights_normed_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*21]
	    // bright_weights_normed_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*28]
	    // bright_weights_normed_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*2 + 1*4,1*38]
	    // bright_weights_normed_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*9]
	    // bright_weights_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*5]
	    // dark_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*8]
	    // dark_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*13]
	    // dark_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*4,1*20]
	    // dark_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*12]
	    // dark_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*19]
	    // dark_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*2 + 1*4,1*27]
	    // dark_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*37]
	    // dark_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*36]
	    // dark_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*4,1*35]
	    // dark_laplace_us_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*34]
	    // dark_laplace_us_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*33]
	    // dark_laplace_us_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*4,1*32]
	    // dark_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // dark_weights_normed_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*11]
	    // dark_weights_normed_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*18]
	    // dark_weights_normed_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*4,1*26]
	    // dark_weights_normed_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*17]
	    // dark_weights_normed_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*25]
	    // dark_weights_normed_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*2 + 1*4,1*31]
	    // dark_weights_normed_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*7]
	    // dark_weights_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*4]
	    // final_merged_0_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*4,1*51]
	    // final_merged_1_update_0 -> [1*d1*1*2 + 1*14,1*d0*1*1 + 1*4,1*50]
	    // final_merged_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*4,1*49]
	    // fused_level_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*48]
	    // fused_level_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*2,1*47]
	    // fused_level_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*1 + 1*4,1*46]
	    // fused_level_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*2 + 1*4,1*45]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // psefn_4_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*4,1*52]
	    // weight_sums_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*6]
	for (int c0 = 0; c0 <= 1933; c0++) {
	  for (int c1 = 0; c1 <= 483; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 482) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1926) && ((c0 - 0) % 1 == 0)) {
	in_update_0(in_off_chip, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 482) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1926) && ((c0 - 0) % 1 == 0)) {
	dark_update_0(in, dark, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 482) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1926) && ((c0 - 0) % 1 == 0)) {
	bright_update_0(in, bright, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 482) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1926) && ((c0 - 0) % 1 == 0)) {
	dark_weights_update_0(dark, dark_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 482) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1926) && ((c0 - 0) % 1 == 0)) {
	bright_weights_update_0(bright, bright_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 482) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1926) && ((c0 - 0) % 1 == 0)) {
	weight_sums_update_0(dark_weights, bright_weights, weight_sums, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 482) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1926) && ((c0 - 0) % 1 == 0)) {
	dark_weights_normed_update_0(dark_weights, weight_sums, dark_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 482) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1926) && ((c0 - 2) % 1 == 0)) {
	dark_gauss_blur_1_update_0(dark, dark_gauss_blur_1, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 482) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1926) && ((c0 - 0) % 1 == 0)) {
	bright_weights_normed_update_0(bright_weights, weight_sums, bright_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 482) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1926) && ((c0 - 2) % 1 == 0)) {
	bright_gauss_blur_1_update_0(bright, bright_gauss_blur_1, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 482) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1926) && ((c0 - 2) % 1 == 0)) {
	dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed, dark_weights_normed_gauss_blur_1, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 482) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1926) && ((c0 - 2) % 2 == 0)) {
	dark_gauss_ds_1_update_0(dark_gauss_blur_1, dark_gauss_ds_1, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 482) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1926) && ((c0 - 6) % 2 == 0)) {
	dark_gauss_blur_2_update_0(dark_gauss_ds_1, dark_gauss_blur_2, (c1 - 2) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 482) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1926) && ((c0 - 2) % 1 == 0)) {
	bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed, bright_weights_normed_gauss_blur_1, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 482) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1926) && ((c0 - 2) % 2 == 0)) {
	bright_gauss_ds_1_update_0(bright_gauss_blur_1, bright_gauss_ds_1, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 482) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1926) && ((c0 - 6) % 2 == 0)) {
	bright_gauss_blur_2_update_0(bright_gauss_ds_1, bright_gauss_blur_2, (c1 - 2) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 482) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1926) && ((c0 - 2) % 2 == 0)) {
	dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 482) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1926) && ((c0 - 6) % 2 == 0)) {
	dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2, (c1 - 2) / 1, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 482) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1926) && ((c0 - 6) % 4 == 0)) {
	dark_gauss_ds_2_update_0(dark_gauss_blur_2, dark_gauss_ds_2, (c1 - 2) / 1, (c0 - 6) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 482) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1926) && ((c0 - 14) % 4 == 0)) {
	dark_gauss_blur_3_update_0(dark_gauss_ds_2, dark_gauss_blur_3, (c1 - 4) / 1, (c0 - 14) / 4);
	    }
	
	    if ((1 <= c1 && c1 <= 482) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1926) && ((c0 - 2) % 2 == 0)) {
	bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 482) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1926) && ((c0 - 6) % 2 == 0)) {
	bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2, (c1 - 2) / 1, (c0 - 6) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 482) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1926) && ((c0 - 6) % 4 == 0)) {
	bright_gauss_ds_2_update_0(bright_gauss_blur_2, bright_gauss_ds_2, (c1 - 2) / 1, (c0 - 6) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 482) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1926) && ((c0 - 14) % 4 == 0)) {
	bright_gauss_blur_3_update_0(bright_gauss_ds_2, bright_gauss_blur_3, (c1 - 4) / 1, (c0 - 14) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 482) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1926) && ((c0 - 6) % 4 == 0)) {
	dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2, (c1 - 2) / 1, (c0 - 6) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 482) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1926) && ((c0 - 14) % 4 == 0)) {
	dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3, (c1 - 4) / 1, (c0 - 14) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 482) && ((c1 - 4) % 2 == 0) && (14 <= c0 && c0 <= 1926) && ((c0 - 14) % 8 == 0)) {
	dark_gauss_ds_3_update_0(dark_gauss_blur_3, dark_gauss_ds_3, (c1 - 4) / 2, (c0 - 14) / 8);
	    }
	
	    if ((2 <= c1 && c1 <= 482) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1926) && ((c0 - 6) % 4 == 0)) {
	bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2, (c1 - 2) / 1, (c0 - 6) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 482) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1926) && ((c0 - 14) % 4 == 0)) {
	bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3, (c1 - 4) / 1, (c0 - 14) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 482) && ((c1 - 4) % 2 == 0) && (14 <= c0 && c0 <= 1926) && ((c0 - 14) % 8 == 0)) {
	bright_gauss_ds_3_update_0(bright_gauss_blur_3, bright_gauss_ds_3, (c1 - 4) / 2, (c0 - 14) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 482) && ((c1 - 4) % 2 == 0) && (14 <= c0 && c0 <= 1926) && ((c0 - 14) % 8 == 0)) {
	dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3, (c1 - 4) / 2, (c0 - 14) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 483) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1930) && ((c0 - 14) % 4 == 0)) {
	dark_laplace_us_2_update_0(dark_gauss_ds_3, dark_laplace_us_2, (c1 - 4) / 1, (c0 - 14) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1924) && ((c0 - 6) % 2 == 0)) {
	dark_laplace_us_1_update_0(dark_gauss_ds_2, dark_laplace_us_1, (c1 - 2) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 480) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1921) && ((c0 - 2) % 1 == 0)) {
	dark_laplace_us_0_update_0(dark_gauss_ds_1, dark_laplace_us_0, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 483) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1930) && ((c0 - 14) % 4 == 0)) {
	dark_laplace_diff_2_update_0(dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2, (c1 - 4) / 1, (c0 - 14) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1924) && ((c0 - 6) % 2 == 0)) {
	dark_laplace_diff_1_update_0(dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1, (c1 - 2) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 480) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1921) && ((c0 - 2) % 1 == 0)) {
	dark_laplace_diff_0_update_0(dark, dark_laplace_us_0, dark_laplace_diff_0, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 482) && ((c1 - 4) % 2 == 0) && (14 <= c0 && c0 <= 1926) && ((c0 - 14) % 8 == 0)) {
	bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3, (c1 - 4) / 2, (c0 - 14) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 483) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1930) && ((c0 - 14) % 4 == 0)) {
	bright_laplace_us_2_update_0(bright_gauss_ds_3, bright_laplace_us_2, (c1 - 4) / 1, (c0 - 14) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1924) && ((c0 - 6) % 2 == 0)) {
	bright_laplace_us_1_update_0(bright_gauss_ds_2, bright_laplace_us_1, (c1 - 2) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 480) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1921) && ((c0 - 2) % 1 == 0)) {
	bright_laplace_us_0_update_0(bright_gauss_ds_1, bright_laplace_us_0, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 483) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1930) && ((c0 - 14) % 4 == 0)) {
	bright_laplace_diff_2_update_0(bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2, (c1 - 4) / 1, (c0 - 14) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1924) && ((c0 - 6) % 2 == 0)) {
	bright_laplace_diff_1_update_0(bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1, (c1 - 2) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 480) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1921) && ((c0 - 2) % 1 == 0)) {
	bright_laplace_diff_0_update_0(bright, bright_laplace_us_0, bright_laplace_diff_0, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 482) && ((c1 - 4) % 2 == 0) && (14 <= c0 && c0 <= 1926) && ((c0 - 14) % 8 == 0)) {
	fused_level_3_update_0(bright_gauss_ds_3, dark_gauss_ds_3, bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3, fused_level_3, (c1 - 4) / 2, (c0 - 14) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 483) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1930) && ((c0 - 14) % 4 == 0)) {
	fused_level_2_update_0(bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2, fused_level_2, (c1 - 4) / 1, (c0 - 14) / 4);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1924) && ((c0 - 6) % 2 == 0)) {
	fused_level_1_update_0(bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1, fused_level_1, (c1 - 2) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 480) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1921) && ((c0 - 2) % 1 == 0)) {
	fused_level_0_update_0(bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed, dark_weights_normed, fused_level_0, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 483) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1930) && ((c0 - 14) % 4 == 0)) {
	final_merged_2_update_0(fused_level_3, fused_level_2, final_merged_2, (c1 - 4) / 1, (c0 - 14) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 483) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1932) && ((c0 - 14) % 2 == 0)) {
	final_merged_1_update_0(final_merged_2, fused_level_1, final_merged_1, (c1 - 4) / 1, (c0 - 14) / 2);
	    }
	
	    if ((4 <= c1 && c1 <= 483) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1933) && ((c0 - 14) % 1 == 0)) {
	final_merged_0_update_0(final_merged_1, fused_level_0, final_merged_0, (c1 - 4) / 1, (c0 - 14) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 483) && ((c1 - 4) % 1 == 0) && (14 <= c0 && c0 <= 1933) && ((c0 - 14) % 1 == 0)) {
	psefn_4_update_0(final_merged_0, psefn_4, (c1 - 4) / 1, (c0 - 14) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void psefn_4_opt(HWStream<hw_uint<64> >& /* get_args num ports = 4 */in_off_chip, HWStream<hw_uint<64> >& /* get_args num ports = 4 */psefn_4) {

  psefn_4_opt(in_off_chip, psefn_4, 1);
}
#ifdef __VIVADO_SYNTH__
#include "psefn_4_opt.h"

const int in_update_0_read_num_transfers = 930741;
const int psefn_4_update_0_write_num_transfers = 921600;


extern "C" {

static void read_in_update_0_read(hw_uint<64>* input, HWStream<hw_uint<64> >& v, const int size) {
  hw_uint<64> burst_reg;
  int num_transfers = in_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_psefn_4_update_0_write(hw_uint<64>* output, HWStream<hw_uint<64> >& v, const int size) {
  hw_uint<64> burst_reg;
  int num_transfers = psefn_4_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void psefn_4_opt_accel(hw_uint<64>* in_update_0_read, hw_uint<64>* psefn_4_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = psefn_4_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = psefn_4_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<64> > in_update_0_read_channel;
  static HWStream<hw_uint<64> > psefn_4_update_0_write_channel;

  read_in_update_0_read(in_update_0_read, in_update_0_read_channel, size);

  psefn_4_opt(in_update_0_read_channel, psefn_4_update_0_write_channel, size);

  write_psefn_4_update_0_write(psefn_4_update_0_write, psefn_4_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

