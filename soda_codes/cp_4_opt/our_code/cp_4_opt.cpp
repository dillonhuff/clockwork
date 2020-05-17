#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "cp_4_opt_compute_units.h"

#include "hw_classes.h"

struct blue_blue_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blue_blue_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blue_blue_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[2, 1922], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blue_blue_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[3, 1923], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blue_cache {
  blue_blue_update_0_write0_merged_banks_4_cache blue_blue_update_0_write0_merged_banks_4;
  blue_blue_update_0_write1_merged_banks_4_cache blue_blue_update_0_write1_merged_banks_4;
  blue_blue_update_0_write2_merged_banks_4_cache blue_blue_update_0_write2_merged_banks_4;
  blue_blue_update_0_write3_merged_banks_4_cache blue_blue_update_0_write3_merged_banks_4;
};



inline void blue_blue_update_0_write0_write(hw_uint<16>& blue_blue_update_0_write0, blue_cache& blue, int d0, int d1) {
  blue.blue_blue_update_0_write0_merged_banks_4.push(blue_blue_update_0_write0);
}

inline void blue_blue_update_0_write1_write(hw_uint<16>& blue_blue_update_0_write1, blue_cache& blue, int d0, int d1) {
  blue.blue_blue_update_0_write1_merged_banks_4.push(blue_blue_update_0_write1);
}

inline void blue_blue_update_0_write2_write(hw_uint<16>& blue_blue_update_0_write2, blue_cache& blue, int d0, int d1) {
  blue.blue_blue_update_0_write2_merged_banks_4.push(blue_blue_update_0_write2);
}

inline void blue_blue_update_0_write3_write(hw_uint<16>& blue_blue_update_0_write3, blue_cache& blue, int d0, int d1) {
  blue.blue_blue_update_0_write3_merged_banks_4.push(blue_blue_update_0_write3);
}

inline hw_uint<16> blue_bx_rd0_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd0 read pattern: { blue_bx_update_0[d0, d1] -> blue[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_1();
  return value_blue_blue_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd1_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd1 read pattern: { blue_bx_update_0[d0, d1] -> blue[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_blue_blue_update_0_write1 = blue.blue_blue_update_0_write1_merged_banks_4.peek_1();
  return value_blue_blue_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd10_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd10 read pattern: { blue_bx_update_0[d0, d1] -> blue[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_0();
  return value_blue_blue_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd11_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd11 read pattern: { blue_bx_update_0[d0, d1] -> blue[5 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_blue_update_0_write1 = blue.blue_blue_update_0_write1_merged_banks_4.peek_0();
  return value_blue_blue_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd2_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd2 read pattern: { blue_bx_update_0[d0, d1] -> blue[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_blue_blue_update_0_write2 = blue.blue_blue_update_0_write2_merged_banks_4.peek_1();
  return value_blue_blue_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd3_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd3 read pattern: { blue_bx_update_0[d0, d1] -> blue[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_blue_blue_update_0_write1 = blue.blue_blue_update_0_write1_merged_banks_4.peek_1();
  return value_blue_blue_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd4_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd4 read pattern: { blue_bx_update_0[d0, d1] -> blue[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_blue_blue_update_0_write2 = blue.blue_blue_update_0_write2_merged_banks_4.peek_1();
  return value_blue_blue_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd5_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd5 read pattern: { blue_bx_update_0[d0, d1] -> blue[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_blue_blue_update_0_write3 = blue.blue_blue_update_0_write3_merged_banks_4.peek_1();
  return value_blue_blue_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd6_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd6 read pattern: { blue_bx_update_0[d0, d1] -> blue[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_blue_blue_update_0_write2 = blue.blue_blue_update_0_write2_merged_banks_4.peek_1();
  return value_blue_blue_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd7_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd7 read pattern: { blue_bx_update_0[d0, d1] -> blue[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_blue_blue_update_0_write3 = blue.blue_blue_update_0_write3_merged_banks_4.peek_1();
  return value_blue_blue_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd8_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd8 read pattern: { blue_bx_update_0[d0, d1] -> blue[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_0();
  return value_blue_blue_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd9_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd9 read pattern: { blue_bx_update_0[d0, d1] -> blue[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_blue_blue_update_0_write3 = blue.blue_blue_update_0_write3_merged_banks_4.peek_1();
  return value_blue_blue_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_diff_rd0_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd0 read pattern: { blue_diff_update_0[d0, d1] -> blue[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_963();
  return value_blue_blue_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_diff_rd1_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd1 read pattern: { blue_diff_update_0[d0, d1] -> blue[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_blue_blue_update_0_write1 = blue.blue_blue_update_0_write1_merged_banks_4.peek_963();
  return value_blue_blue_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_diff_rd2_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd2 read pattern: { blue_diff_update_0[d0, d1] -> blue[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_blue_blue_update_0_write2 = blue.blue_blue_update_0_write2_merged_banks_4.peek_963();
  return value_blue_blue_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_diff_rd3_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd3 read pattern: { blue_diff_update_0[d0, d1] -> blue[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { blue_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_blue_blue_update_0_write3 = blue.blue_blue_update_0_write3_merged_banks_4.peek_963();
  return value_blue_blue_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// blue_bx_update_0_read
//	blue_bx_rd0
//	blue_bx_rd1
//	blue_bx_rd2
//	blue_bx_rd3
//	blue_bx_rd4
//	blue_bx_rd5
//	blue_bx_rd6
//	blue_bx_rd7
//	blue_bx_rd8
//	blue_bx_rd9
//	blue_bx_rd10
//	blue_bx_rd11
inline hw_uint<192> blue_blue_bx_update_0_read_bundle_read(blue_cache& blue, int d0, int d1) {
  // # of ports in bundle: 12
    // blue_bx_rd0
    // blue_bx_rd1
    // blue_bx_rd2
    // blue_bx_rd3
    // blue_bx_rd4
    // blue_bx_rd5
    // blue_bx_rd6
    // blue_bx_rd7
    // blue_bx_rd8
    // blue_bx_rd9
    // blue_bx_rd10
    // blue_bx_rd11

	hw_uint<192> result;
	hw_uint<16> blue_bx_rd0_res = blue_bx_rd0_select(blue, d0, d1);
	set_at<0, 192>(result, blue_bx_rd0_res);
	hw_uint<16> blue_bx_rd1_res = blue_bx_rd1_select(blue, d0, d1);
	set_at<16, 192>(result, blue_bx_rd1_res);
	hw_uint<16> blue_bx_rd2_res = blue_bx_rd2_select(blue, d0, d1);
	set_at<32, 192>(result, blue_bx_rd2_res);
	hw_uint<16> blue_bx_rd3_res = blue_bx_rd3_select(blue, d0, d1);
	set_at<48, 192>(result, blue_bx_rd3_res);
	hw_uint<16> blue_bx_rd4_res = blue_bx_rd4_select(blue, d0, d1);
	set_at<64, 192>(result, blue_bx_rd4_res);
	hw_uint<16> blue_bx_rd5_res = blue_bx_rd5_select(blue, d0, d1);
	set_at<80, 192>(result, blue_bx_rd5_res);
	hw_uint<16> blue_bx_rd6_res = blue_bx_rd6_select(blue, d0, d1);
	set_at<96, 192>(result, blue_bx_rd6_res);
	hw_uint<16> blue_bx_rd7_res = blue_bx_rd7_select(blue, d0, d1);
	set_at<112, 192>(result, blue_bx_rd7_res);
	hw_uint<16> blue_bx_rd8_res = blue_bx_rd8_select(blue, d0, d1);
	set_at<128, 192>(result, blue_bx_rd8_res);
	hw_uint<16> blue_bx_rd9_res = blue_bx_rd9_select(blue, d0, d1);
	set_at<144, 192>(result, blue_bx_rd9_res);
	hw_uint<16> blue_bx_rd10_res = blue_bx_rd10_select(blue, d0, d1);
	set_at<160, 192>(result, blue_bx_rd10_res);
	hw_uint<16> blue_bx_rd11_res = blue_bx_rd11_select(blue, d0, d1);
	set_at<176, 192>(result, blue_bx_rd11_res);
	return result;
}

// blue_diff_update_0_read
//	blue_diff_rd0
//	blue_diff_rd1
//	blue_diff_rd2
//	blue_diff_rd3
inline hw_uint<64> blue_blue_diff_update_0_read_bundle_read(blue_cache& blue, int d0, int d1) {
  // # of ports in bundle: 4
    // blue_diff_rd0
    // blue_diff_rd1
    // blue_diff_rd2
    // blue_diff_rd3

	hw_uint<64> result;
	hw_uint<16> blue_diff_rd0_res = blue_diff_rd0_select(blue, d0, d1);
	set_at<0, 64>(result, blue_diff_rd0_res);
	hw_uint<16> blue_diff_rd1_res = blue_diff_rd1_select(blue, d0, d1);
	set_at<16, 64>(result, blue_diff_rd1_res);
	hw_uint<16> blue_diff_rd2_res = blue_diff_rd2_select(blue, d0, d1);
	set_at<32, 64>(result, blue_diff_rd2_res);
	hw_uint<16> blue_diff_rd3_res = blue_diff_rd3_select(blue, d0, d1);
	set_at<48, 64>(result, blue_diff_rd3_res);
	return result;
}

// blue_update_0_write
//	blue_blue_update_0_write0
//	blue_blue_update_0_write1
//	blue_blue_update_0_write2
//	blue_blue_update_0_write3
inline void blue_blue_update_0_write_bundle_write(hw_uint<64>& blue_update_0_write, blue_cache& blue, int d0, int d1) {
	hw_uint<16> blue_blue_update_0_write0_res = blue_update_0_write.extract<0, 15>();
	blue_blue_update_0_write0_write(blue_blue_update_0_write0_res, blue, d0, d1);
	hw_uint<16> blue_blue_update_0_write1_res = blue_update_0_write.extract<16, 31>();
	blue_blue_update_0_write1_write(blue_blue_update_0_write1_res, blue, d0, d1);
	hw_uint<16> blue_blue_update_0_write2_res = blue_update_0_write.extract<32, 47>();
	blue_blue_update_0_write2_write(blue_blue_update_0_write2_res, blue, d0, d1);
	hw_uint<16> blue_blue_update_0_write3_res = blue_update_0_write.extract<48, 63>();
	blue_blue_update_0_write3_write(blue_blue_update_0_write3_res, blue, d0, d1);
}

#include "hw_classes.h"

struct blue_bx_blue_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1916], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct blue_bx_blue_bx_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1917], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct blue_bx_blue_bx_update_0_write2_merged_banks_3_cache {
	// RAM Box: {[2, 1918], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct blue_bx_blue_bx_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 1919], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct blue_bx_cache {
  blue_bx_blue_bx_update_0_write0_merged_banks_3_cache blue_bx_blue_bx_update_0_write0_merged_banks_3;
  blue_bx_blue_bx_update_0_write1_merged_banks_3_cache blue_bx_blue_bx_update_0_write1_merged_banks_3;
  blue_bx_blue_bx_update_0_write2_merged_banks_3_cache blue_bx_blue_bx_update_0_write2_merged_banks_3;
  blue_bx_blue_bx_update_0_write3_merged_banks_3_cache blue_bx_blue_bx_update_0_write3_merged_banks_3;
};



inline void blue_bx_blue_bx_update_0_write0_write(hw_uint<16>& blue_bx_blue_bx_update_0_write0, blue_bx_cache& blue_bx, int d0, int d1) {
  blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.push(blue_bx_blue_bx_update_0_write0);
}

inline void blue_bx_blue_bx_update_0_write1_write(hw_uint<16>& blue_bx_blue_bx_update_0_write1, blue_bx_cache& blue_bx, int d0, int d1) {
  blue_bx.blue_bx_blue_bx_update_0_write1_merged_banks_3.push(blue_bx_blue_bx_update_0_write1);
}

inline void blue_bx_blue_bx_update_0_write2_write(hw_uint<16>& blue_bx_blue_bx_update_0_write2, blue_bx_cache& blue_bx, int d0, int d1) {
  blue_bx.blue_bx_blue_bx_update_0_write2_merged_banks_3.push(blue_bx_blue_bx_update_0_write2);
}

inline void blue_bx_blue_bx_update_0_write3_write(hw_uint<16>& blue_bx_blue_bx_update_0_write3, blue_bx_cache& blue_bx, int d0, int d1) {
  blue_bx.blue_bx_blue_bx_update_0_write3_merged_banks_3.push(blue_bx_blue_bx_update_0_write3);
}

inline hw_uint<16> blue_by_rd0_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd0 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write0 = blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.peek_960();
  return value_blue_bx_blue_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd1_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd1 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write0 = blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.peek_480();
  return value_blue_bx_blue_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd10_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd10 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write3 = blue_bx.blue_bx_blue_bx_update_0_write3_merged_banks_3.peek_480();
  return value_blue_bx_blue_bx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd11_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd11 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[3 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_bx_blue_bx_update_0_write3 = blue_bx.blue_bx_blue_bx_update_0_write3_merged_banks_3.peek_0();
  return value_blue_bx_blue_bx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd2_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd2 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_bx_blue_bx_update_0_write0 = blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.peek_0();
  return value_blue_bx_blue_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd3_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd3 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write1 = blue_bx.blue_bx_blue_bx_update_0_write1_merged_banks_3.peek_960();
  return value_blue_bx_blue_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd4_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd4 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write1 = blue_bx.blue_bx_blue_bx_update_0_write1_merged_banks_3.peek_480();
  return value_blue_bx_blue_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd5_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd5 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[1 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_bx_blue_bx_update_0_write1 = blue_bx.blue_bx_blue_bx_update_0_write1_merged_banks_3.peek_0();
  return value_blue_bx_blue_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd6_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd6 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write2 = blue_bx.blue_bx_blue_bx_update_0_write2_merged_banks_3.peek_960();
  return value_blue_bx_blue_bx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd7_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd7 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write2 = blue_bx.blue_bx_blue_bx_update_0_write2_merged_banks_3.peek_480();
  return value_blue_bx_blue_bx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd8_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd8 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[2 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_bx_blue_bx_update_0_write2 = blue_bx.blue_bx_blue_bx_update_0_write2_merged_banks_3.peek_0();
  return value_blue_bx_blue_bx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd9_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd9 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write3 = blue_bx.blue_bx_blue_bx_update_0_write3_merged_banks_3.peek_960();
  return value_blue_bx_blue_bx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blue_bx_update_0_write
//	blue_bx_blue_bx_update_0_write0
//	blue_bx_blue_bx_update_0_write1
//	blue_bx_blue_bx_update_0_write2
//	blue_bx_blue_bx_update_0_write3
inline void blue_bx_blue_bx_update_0_write_bundle_write(hw_uint<64>& blue_bx_update_0_write, blue_bx_cache& blue_bx, int d0, int d1) {
	hw_uint<16> blue_bx_blue_bx_update_0_write0_res = blue_bx_update_0_write.extract<0, 15>();
	blue_bx_blue_bx_update_0_write0_write(blue_bx_blue_bx_update_0_write0_res, blue_bx, d0, d1);
	hw_uint<16> blue_bx_blue_bx_update_0_write1_res = blue_bx_update_0_write.extract<16, 31>();
	blue_bx_blue_bx_update_0_write1_write(blue_bx_blue_bx_update_0_write1_res, blue_bx, d0, d1);
	hw_uint<16> blue_bx_blue_bx_update_0_write2_res = blue_bx_update_0_write.extract<32, 47>();
	blue_bx_blue_bx_update_0_write2_write(blue_bx_blue_bx_update_0_write2_res, blue_bx, d0, d1);
	hw_uint<16> blue_bx_blue_bx_update_0_write3_res = blue_bx_update_0_write.extract<48, 63>();
	blue_bx_blue_bx_update_0_write3_write(blue_bx_blue_bx_update_0_write3_res, blue_bx, d0, d1);
}

// blue_by_update_0_read
//	blue_by_rd0
//	blue_by_rd1
//	blue_by_rd2
//	blue_by_rd3
//	blue_by_rd4
//	blue_by_rd5
//	blue_by_rd6
//	blue_by_rd7
//	blue_by_rd8
//	blue_by_rd9
//	blue_by_rd10
//	blue_by_rd11
inline hw_uint<192> blue_bx_blue_by_update_0_read_bundle_read(blue_bx_cache& blue_bx, int d0, int d1) {
  // # of ports in bundle: 12
    // blue_by_rd0
    // blue_by_rd1
    // blue_by_rd2
    // blue_by_rd3
    // blue_by_rd4
    // blue_by_rd5
    // blue_by_rd6
    // blue_by_rd7
    // blue_by_rd8
    // blue_by_rd9
    // blue_by_rd10
    // blue_by_rd11

	hw_uint<192> result;
	hw_uint<16> blue_by_rd0_res = blue_by_rd0_select(blue_bx, d0, d1);
	set_at<0, 192>(result, blue_by_rd0_res);
	hw_uint<16> blue_by_rd1_res = blue_by_rd1_select(blue_bx, d0, d1);
	set_at<16, 192>(result, blue_by_rd1_res);
	hw_uint<16> blue_by_rd2_res = blue_by_rd2_select(blue_bx, d0, d1);
	set_at<32, 192>(result, blue_by_rd2_res);
	hw_uint<16> blue_by_rd3_res = blue_by_rd3_select(blue_bx, d0, d1);
	set_at<48, 192>(result, blue_by_rd3_res);
	hw_uint<16> blue_by_rd4_res = blue_by_rd4_select(blue_bx, d0, d1);
	set_at<64, 192>(result, blue_by_rd4_res);
	hw_uint<16> blue_by_rd5_res = blue_by_rd5_select(blue_bx, d0, d1);
	set_at<80, 192>(result, blue_by_rd5_res);
	hw_uint<16> blue_by_rd6_res = blue_by_rd6_select(blue_bx, d0, d1);
	set_at<96, 192>(result, blue_by_rd6_res);
	hw_uint<16> blue_by_rd7_res = blue_by_rd7_select(blue_bx, d0, d1);
	set_at<112, 192>(result, blue_by_rd7_res);
	hw_uint<16> blue_by_rd8_res = blue_by_rd8_select(blue_bx, d0, d1);
	set_at<128, 192>(result, blue_by_rd8_res);
	hw_uint<16> blue_by_rd9_res = blue_by_rd9_select(blue_bx, d0, d1);
	set_at<144, 192>(result, blue_by_rd9_res);
	hw_uint<16> blue_by_rd10_res = blue_by_rd10_select(blue_bx, d0, d1);
	set_at<160, 192>(result, blue_by_rd10_res);
	hw_uint<16> blue_by_rd11_res = blue_by_rd11_select(blue_bx, d0, d1);
	set_at<176, 192>(result, blue_by_rd11_res);
	return result;
}

#include "hw_classes.h"

struct blue_by_blue_by_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct blue_by_blue_by_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct blue_by_blue_by_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct blue_by_blue_by_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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

struct blue_by_cache {
  blue_by_blue_by_update_0_write0_merged_banks_1_cache blue_by_blue_by_update_0_write0_merged_banks_1;
  blue_by_blue_by_update_0_write1_merged_banks_1_cache blue_by_blue_by_update_0_write1_merged_banks_1;
  blue_by_blue_by_update_0_write2_merged_banks_1_cache blue_by_blue_by_update_0_write2_merged_banks_1;
  blue_by_blue_by_update_0_write3_merged_banks_1_cache blue_by_blue_by_update_0_write3_merged_banks_1;
};



inline void blue_by_blue_by_update_0_write0_write(hw_uint<16>& blue_by_blue_by_update_0_write0, blue_by_cache& blue_by, int d0, int d1) {
  blue_by.blue_by_blue_by_update_0_write0_merged_banks_1.push(blue_by_blue_by_update_0_write0);
}

inline void blue_by_blue_by_update_0_write1_write(hw_uint<16>& blue_by_blue_by_update_0_write1, blue_by_cache& blue_by, int d0, int d1) {
  blue_by.blue_by_blue_by_update_0_write1_merged_banks_1.push(blue_by_blue_by_update_0_write1);
}

inline void blue_by_blue_by_update_0_write2_write(hw_uint<16>& blue_by_blue_by_update_0_write2, blue_by_cache& blue_by, int d0, int d1) {
  blue_by.blue_by_blue_by_update_0_write2_merged_banks_1.push(blue_by_blue_by_update_0_write2);
}

inline void blue_by_blue_by_update_0_write3_write(hw_uint<16>& blue_by_blue_by_update_0_write3, blue_by_cache& blue_by, int d0, int d1) {
  blue_by.blue_by_blue_by_update_0_write3_merged_banks_1.push(blue_by_blue_by_update_0_write3);
}

inline hw_uint<16> blue_diff_rd0_select(blue_by_cache& blue_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd0 read pattern: { blue_diff_update_0[d0, d1] -> blue_by[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_by_blue_by_update_0_write0 = blue_by.blue_by_blue_by_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_by_blue_by_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_diff_rd1_select(blue_by_cache& blue_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd1 read pattern: { blue_diff_update_0[d0, d1] -> blue_by[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_by_blue_by_update_0_write1 = blue_by.blue_by_blue_by_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_by_blue_by_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_diff_rd2_select(blue_by_cache& blue_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd2 read pattern: { blue_diff_update_0[d0, d1] -> blue_by[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_by_blue_by_update_0_write2 = blue_by.blue_by_blue_by_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_by_blue_by_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_diff_rd3_select(blue_by_cache& blue_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd3 read pattern: { blue_diff_update_0[d0, d1] -> blue_by[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_by_blue_by_update_0_write3 = blue_by.blue_by_blue_by_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_by_blue_by_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blue_by_update_0_write
//	blue_by_blue_by_update_0_write0
//	blue_by_blue_by_update_0_write1
//	blue_by_blue_by_update_0_write2
//	blue_by_blue_by_update_0_write3
inline void blue_by_blue_by_update_0_write_bundle_write(hw_uint<64>& blue_by_update_0_write, blue_by_cache& blue_by, int d0, int d1) {
	hw_uint<16> blue_by_blue_by_update_0_write0_res = blue_by_update_0_write.extract<0, 15>();
	blue_by_blue_by_update_0_write0_write(blue_by_blue_by_update_0_write0_res, blue_by, d0, d1);
	hw_uint<16> blue_by_blue_by_update_0_write1_res = blue_by_update_0_write.extract<16, 31>();
	blue_by_blue_by_update_0_write1_write(blue_by_blue_by_update_0_write1_res, blue_by, d0, d1);
	hw_uint<16> blue_by_blue_by_update_0_write2_res = blue_by_update_0_write.extract<32, 47>();
	blue_by_blue_by_update_0_write2_write(blue_by_blue_by_update_0_write2_res, blue_by, d0, d1);
	hw_uint<16> blue_by_blue_by_update_0_write3_res = blue_by_update_0_write.extract<48, 63>();
	blue_by_blue_by_update_0_write3_write(blue_by_blue_by_update_0_write3_res, blue_by, d0, d1);
}

// blue_diff_update_0_read
//	blue_diff_rd0
//	blue_diff_rd1
//	blue_diff_rd2
//	blue_diff_rd3
inline hw_uint<64> blue_by_blue_diff_update_0_read_bundle_read(blue_by_cache& blue_by, int d0, int d1) {
  // # of ports in bundle: 4
    // blue_diff_rd0
    // blue_diff_rd1
    // blue_diff_rd2
    // blue_diff_rd3

	hw_uint<64> result;
	hw_uint<16> blue_diff_rd0_res = blue_diff_rd0_select(blue_by, d0, d1);
	set_at<0, 64>(result, blue_diff_rd0_res);
	hw_uint<16> blue_diff_rd1_res = blue_diff_rd1_select(blue_by, d0, d1);
	set_at<16, 64>(result, blue_diff_rd1_res);
	hw_uint<16> blue_diff_rd2_res = blue_diff_rd2_select(blue_by, d0, d1);
	set_at<32, 64>(result, blue_diff_rd2_res);
	hw_uint<16> blue_diff_rd3_res = blue_diff_rd3_select(blue_by, d0, d1);
	set_at<48, 64>(result, blue_diff_rd3_res);
	return result;
}

#include "hw_classes.h"

struct blue_diff_blue_diff_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct blue_diff_blue_diff_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct blue_diff_blue_diff_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct blue_diff_blue_diff_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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

struct blue_diff_cache {
  blue_diff_blue_diff_update_0_write0_merged_banks_1_cache blue_diff_blue_diff_update_0_write0_merged_banks_1;
  blue_diff_blue_diff_update_0_write1_merged_banks_1_cache blue_diff_blue_diff_update_0_write1_merged_banks_1;
  blue_diff_blue_diff_update_0_write2_merged_banks_1_cache blue_diff_blue_diff_update_0_write2_merged_banks_1;
  blue_diff_blue_diff_update_0_write3_merged_banks_1_cache blue_diff_blue_diff_update_0_write3_merged_banks_1;
};



inline void blue_diff_blue_diff_update_0_write0_write(hw_uint<16>& blue_diff_blue_diff_update_0_write0, blue_diff_cache& blue_diff, int d0, int d1) {
  blue_diff.blue_diff_blue_diff_update_0_write0_merged_banks_1.push(blue_diff_blue_diff_update_0_write0);
}

inline void blue_diff_blue_diff_update_0_write1_write(hw_uint<16>& blue_diff_blue_diff_update_0_write1, blue_diff_cache& blue_diff, int d0, int d1) {
  blue_diff.blue_diff_blue_diff_update_0_write1_merged_banks_1.push(blue_diff_blue_diff_update_0_write1);
}

inline void blue_diff_blue_diff_update_0_write2_write(hw_uint<16>& blue_diff_blue_diff_update_0_write2, blue_diff_cache& blue_diff, int d0, int d1) {
  blue_diff.blue_diff_blue_diff_update_0_write2_merged_banks_1.push(blue_diff_blue_diff_update_0_write2);
}

inline void blue_diff_blue_diff_update_0_write3_write(hw_uint<16>& blue_diff_blue_diff_update_0_write3, blue_diff_cache& blue_diff, int d0, int d1) {
  blue_diff.blue_diff_blue_diff_update_0_write3_merged_banks_1.push(blue_diff_blue_diff_update_0_write3);
}

inline hw_uint<16> cp_4_rd0_select(blue_diff_cache& blue_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd0 read pattern: { cp_4_update_0[d0, d1] -> blue_diff[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_diff_blue_diff_update_0_write0 = blue_diff.blue_diff_blue_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_diff_blue_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_4_rd1_select(blue_diff_cache& blue_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd1 read pattern: { cp_4_update_0[d0, d1] -> blue_diff[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_diff_blue_diff_update_0_write1 = blue_diff.blue_diff_blue_diff_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_diff_blue_diff_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_4_rd2_select(blue_diff_cache& blue_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd2 read pattern: { cp_4_update_0[d0, d1] -> blue_diff[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_diff_blue_diff_update_0_write2 = blue_diff.blue_diff_blue_diff_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_diff_blue_diff_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_4_rd3_select(blue_diff_cache& blue_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd3 read pattern: { cp_4_update_0[d0, d1] -> blue_diff[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_diff_blue_diff_update_0_write3 = blue_diff.blue_diff_blue_diff_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_diff_blue_diff_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blue_diff_update_0_write
//	blue_diff_blue_diff_update_0_write0
//	blue_diff_blue_diff_update_0_write1
//	blue_diff_blue_diff_update_0_write2
//	blue_diff_blue_diff_update_0_write3
inline void blue_diff_blue_diff_update_0_write_bundle_write(hw_uint<64>& blue_diff_update_0_write, blue_diff_cache& blue_diff, int d0, int d1) {
	hw_uint<16> blue_diff_blue_diff_update_0_write0_res = blue_diff_update_0_write.extract<0, 15>();
	blue_diff_blue_diff_update_0_write0_write(blue_diff_blue_diff_update_0_write0_res, blue_diff, d0, d1);
	hw_uint<16> blue_diff_blue_diff_update_0_write1_res = blue_diff_update_0_write.extract<16, 31>();
	blue_diff_blue_diff_update_0_write1_write(blue_diff_blue_diff_update_0_write1_res, blue_diff, d0, d1);
	hw_uint<16> blue_diff_blue_diff_update_0_write2_res = blue_diff_update_0_write.extract<32, 47>();
	blue_diff_blue_diff_update_0_write2_write(blue_diff_blue_diff_update_0_write2_res, blue_diff, d0, d1);
	hw_uint<16> blue_diff_blue_diff_update_0_write3_res = blue_diff_update_0_write.extract<48, 63>();
	blue_diff_blue_diff_update_0_write3_write(blue_diff_blue_diff_update_0_write3_res, blue_diff, d0, d1);
}

// cp_4_update_0_read
//	cp_4_rd0
//	cp_4_rd1
//	cp_4_rd2
//	cp_4_rd3
inline hw_uint<64> blue_diff_cp_4_update_0_read_bundle_read(blue_diff_cache& blue_diff, int d0, int d1) {
  // # of ports in bundle: 4
    // cp_4_rd0
    // cp_4_rd1
    // cp_4_rd2
    // cp_4_rd3

	hw_uint<64> result;
	hw_uint<16> cp_4_rd0_res = cp_4_rd0_select(blue_diff, d0, d1);
	set_at<0, 64>(result, cp_4_rd0_res);
	hw_uint<16> cp_4_rd1_res = cp_4_rd1_select(blue_diff, d0, d1);
	set_at<16, 64>(result, cp_4_rd1_res);
	hw_uint<16> cp_4_rd2_res = cp_4_rd2_select(blue_diff, d0, d1);
	set_at<32, 64>(result, cp_4_rd2_res);
	hw_uint<16> cp_4_rd3_res = cp_4_rd3_select(blue_diff, d0, d1);
	set_at<48, 64>(result, cp_4_rd3_res);
	return result;
}

#include "hw_classes.h"

struct green_green_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct green_green_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct green_green_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[2, 1922], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct green_green_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[3, 1923], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct green_cache {
  green_green_update_0_write0_merged_banks_4_cache green_green_update_0_write0_merged_banks_4;
  green_green_update_0_write1_merged_banks_4_cache green_green_update_0_write1_merged_banks_4;
  green_green_update_0_write2_merged_banks_4_cache green_green_update_0_write2_merged_banks_4;
  green_green_update_0_write3_merged_banks_4_cache green_green_update_0_write3_merged_banks_4;
};



inline void green_green_update_0_write0_write(hw_uint<16>& green_green_update_0_write0, green_cache& green, int d0, int d1) {
  green.green_green_update_0_write0_merged_banks_4.push(green_green_update_0_write0);
}

inline void green_green_update_0_write1_write(hw_uint<16>& green_green_update_0_write1, green_cache& green, int d0, int d1) {
  green.green_green_update_0_write1_merged_banks_4.push(green_green_update_0_write1);
}

inline void green_green_update_0_write2_write(hw_uint<16>& green_green_update_0_write2, green_cache& green, int d0, int d1) {
  green.green_green_update_0_write2_merged_banks_4.push(green_green_update_0_write2);
}

inline void green_green_update_0_write3_write(hw_uint<16>& green_green_update_0_write3, green_cache& green, int d0, int d1) {
  green.green_green_update_0_write3_merged_banks_4.push(green_green_update_0_write3);
}

inline hw_uint<16> green_bx_rd0_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd0 read pattern: { green_bx_update_0[d0, d1] -> green[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_1();
  return value_green_green_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd1_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd1 read pattern: { green_bx_update_0[d0, d1] -> green[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_green_green_update_0_write1 = green.green_green_update_0_write1_merged_banks_4.peek_1();
  return value_green_green_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd10_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd10 read pattern: { green_bx_update_0[d0, d1] -> green[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_0();
  return value_green_green_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd11_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd11 read pattern: { green_bx_update_0[d0, d1] -> green[5 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_green_update_0_write1 = green.green_green_update_0_write1_merged_banks_4.peek_0();
  return value_green_green_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd2_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd2 read pattern: { green_bx_update_0[d0, d1] -> green[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_green_green_update_0_write2 = green.green_green_update_0_write2_merged_banks_4.peek_1();
  return value_green_green_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd3_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd3 read pattern: { green_bx_update_0[d0, d1] -> green[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_green_green_update_0_write1 = green.green_green_update_0_write1_merged_banks_4.peek_1();
  return value_green_green_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd4_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd4 read pattern: { green_bx_update_0[d0, d1] -> green[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_green_green_update_0_write2 = green.green_green_update_0_write2_merged_banks_4.peek_1();
  return value_green_green_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd5_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd5 read pattern: { green_bx_update_0[d0, d1] -> green[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_green_green_update_0_write3 = green.green_green_update_0_write3_merged_banks_4.peek_1();
  return value_green_green_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd6_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd6 read pattern: { green_bx_update_0[d0, d1] -> green[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_green_green_update_0_write2 = green.green_green_update_0_write2_merged_banks_4.peek_1();
  return value_green_green_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd7_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd7 read pattern: { green_bx_update_0[d0, d1] -> green[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_green_green_update_0_write3 = green.green_green_update_0_write3_merged_banks_4.peek_1();
  return value_green_green_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd8_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd8 read pattern: { green_bx_update_0[d0, d1] -> green[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_0();
  return value_green_green_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd9_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd9 read pattern: { green_bx_update_0[d0, d1] -> green[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_green_green_update_0_write3 = green.green_green_update_0_write3_merged_banks_4.peek_1();
  return value_green_green_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_diff_rd0_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd0 read pattern: { green_diff_update_0[d0, d1] -> green[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_963();
  return value_green_green_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_diff_rd1_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd1 read pattern: { green_diff_update_0[d0, d1] -> green[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_green_green_update_0_write1 = green.green_green_update_0_write1_merged_banks_4.peek_963();
  return value_green_green_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_diff_rd2_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd2 read pattern: { green_diff_update_0[d0, d1] -> green[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_green_green_update_0_write2 = green.green_green_update_0_write2_merged_banks_4.peek_963();
  return value_green_green_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_diff_rd3_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd3 read pattern: { green_diff_update_0[d0, d1] -> green[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { green_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_green_green_update_0_write3 = green.green_green_update_0_write3_merged_banks_4.peek_963();
  return value_green_green_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// green_bx_update_0_read
//	green_bx_rd0
//	green_bx_rd1
//	green_bx_rd2
//	green_bx_rd3
//	green_bx_rd4
//	green_bx_rd5
//	green_bx_rd6
//	green_bx_rd7
//	green_bx_rd8
//	green_bx_rd9
//	green_bx_rd10
//	green_bx_rd11
inline hw_uint<192> green_green_bx_update_0_read_bundle_read(green_cache& green, int d0, int d1) {
  // # of ports in bundle: 12
    // green_bx_rd0
    // green_bx_rd1
    // green_bx_rd2
    // green_bx_rd3
    // green_bx_rd4
    // green_bx_rd5
    // green_bx_rd6
    // green_bx_rd7
    // green_bx_rd8
    // green_bx_rd9
    // green_bx_rd10
    // green_bx_rd11

	hw_uint<192> result;
	hw_uint<16> green_bx_rd0_res = green_bx_rd0_select(green, d0, d1);
	set_at<0, 192>(result, green_bx_rd0_res);
	hw_uint<16> green_bx_rd1_res = green_bx_rd1_select(green, d0, d1);
	set_at<16, 192>(result, green_bx_rd1_res);
	hw_uint<16> green_bx_rd2_res = green_bx_rd2_select(green, d0, d1);
	set_at<32, 192>(result, green_bx_rd2_res);
	hw_uint<16> green_bx_rd3_res = green_bx_rd3_select(green, d0, d1);
	set_at<48, 192>(result, green_bx_rd3_res);
	hw_uint<16> green_bx_rd4_res = green_bx_rd4_select(green, d0, d1);
	set_at<64, 192>(result, green_bx_rd4_res);
	hw_uint<16> green_bx_rd5_res = green_bx_rd5_select(green, d0, d1);
	set_at<80, 192>(result, green_bx_rd5_res);
	hw_uint<16> green_bx_rd6_res = green_bx_rd6_select(green, d0, d1);
	set_at<96, 192>(result, green_bx_rd6_res);
	hw_uint<16> green_bx_rd7_res = green_bx_rd7_select(green, d0, d1);
	set_at<112, 192>(result, green_bx_rd7_res);
	hw_uint<16> green_bx_rd8_res = green_bx_rd8_select(green, d0, d1);
	set_at<128, 192>(result, green_bx_rd8_res);
	hw_uint<16> green_bx_rd9_res = green_bx_rd9_select(green, d0, d1);
	set_at<144, 192>(result, green_bx_rd9_res);
	hw_uint<16> green_bx_rd10_res = green_bx_rd10_select(green, d0, d1);
	set_at<160, 192>(result, green_bx_rd10_res);
	hw_uint<16> green_bx_rd11_res = green_bx_rd11_select(green, d0, d1);
	set_at<176, 192>(result, green_bx_rd11_res);
	return result;
}

// green_diff_update_0_read
//	green_diff_rd0
//	green_diff_rd1
//	green_diff_rd2
//	green_diff_rd3
inline hw_uint<64> green_green_diff_update_0_read_bundle_read(green_cache& green, int d0, int d1) {
  // # of ports in bundle: 4
    // green_diff_rd0
    // green_diff_rd1
    // green_diff_rd2
    // green_diff_rd3

	hw_uint<64> result;
	hw_uint<16> green_diff_rd0_res = green_diff_rd0_select(green, d0, d1);
	set_at<0, 64>(result, green_diff_rd0_res);
	hw_uint<16> green_diff_rd1_res = green_diff_rd1_select(green, d0, d1);
	set_at<16, 64>(result, green_diff_rd1_res);
	hw_uint<16> green_diff_rd2_res = green_diff_rd2_select(green, d0, d1);
	set_at<32, 64>(result, green_diff_rd2_res);
	hw_uint<16> green_diff_rd3_res = green_diff_rd3_select(green, d0, d1);
	set_at<48, 64>(result, green_diff_rd3_res);
	return result;
}

// green_update_0_write
//	green_green_update_0_write0
//	green_green_update_0_write1
//	green_green_update_0_write2
//	green_green_update_0_write3
inline void green_green_update_0_write_bundle_write(hw_uint<64>& green_update_0_write, green_cache& green, int d0, int d1) {
	hw_uint<16> green_green_update_0_write0_res = green_update_0_write.extract<0, 15>();
	green_green_update_0_write0_write(green_green_update_0_write0_res, green, d0, d1);
	hw_uint<16> green_green_update_0_write1_res = green_update_0_write.extract<16, 31>();
	green_green_update_0_write1_write(green_green_update_0_write1_res, green, d0, d1);
	hw_uint<16> green_green_update_0_write2_res = green_update_0_write.extract<32, 47>();
	green_green_update_0_write2_write(green_green_update_0_write2_res, green, d0, d1);
	hw_uint<16> green_green_update_0_write3_res = green_update_0_write.extract<48, 63>();
	green_green_update_0_write3_write(green_green_update_0_write3_res, green, d0, d1);
}

#include "hw_classes.h"

struct green_bx_green_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1916], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct green_bx_green_bx_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1917], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct green_bx_green_bx_update_0_write2_merged_banks_3_cache {
	// RAM Box: {[2, 1918], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct green_bx_green_bx_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 1919], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct green_bx_cache {
  green_bx_green_bx_update_0_write0_merged_banks_3_cache green_bx_green_bx_update_0_write0_merged_banks_3;
  green_bx_green_bx_update_0_write1_merged_banks_3_cache green_bx_green_bx_update_0_write1_merged_banks_3;
  green_bx_green_bx_update_0_write2_merged_banks_3_cache green_bx_green_bx_update_0_write2_merged_banks_3;
  green_bx_green_bx_update_0_write3_merged_banks_3_cache green_bx_green_bx_update_0_write3_merged_banks_3;
};



inline void green_bx_green_bx_update_0_write0_write(hw_uint<16>& green_bx_green_bx_update_0_write0, green_bx_cache& green_bx, int d0, int d1) {
  green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.push(green_bx_green_bx_update_0_write0);
}

inline void green_bx_green_bx_update_0_write1_write(hw_uint<16>& green_bx_green_bx_update_0_write1, green_bx_cache& green_bx, int d0, int d1) {
  green_bx.green_bx_green_bx_update_0_write1_merged_banks_3.push(green_bx_green_bx_update_0_write1);
}

inline void green_bx_green_bx_update_0_write2_write(hw_uint<16>& green_bx_green_bx_update_0_write2, green_bx_cache& green_bx, int d0, int d1) {
  green_bx.green_bx_green_bx_update_0_write2_merged_banks_3.push(green_bx_green_bx_update_0_write2);
}

inline void green_bx_green_bx_update_0_write3_write(hw_uint<16>& green_bx_green_bx_update_0_write3, green_bx_cache& green_bx, int d0, int d1) {
  green_bx.green_bx_green_bx_update_0_write3_merged_banks_3.push(green_bx_green_bx_update_0_write3);
}

inline hw_uint<16> green_by_rd0_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd0 read pattern: { green_by_update_0[d0, d1] -> green_bx[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write0 = green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.peek_960();
  return value_green_bx_green_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd1_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd1 read pattern: { green_by_update_0[d0, d1] -> green_bx[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write0 = green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.peek_480();
  return value_green_bx_green_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd10_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd10 read pattern: { green_by_update_0[d0, d1] -> green_bx[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write3 = green_bx.green_bx_green_bx_update_0_write3_merged_banks_3.peek_480();
  return value_green_bx_green_bx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd11_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd11 read pattern: { green_by_update_0[d0, d1] -> green_bx[3 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_bx_green_bx_update_0_write3 = green_bx.green_bx_green_bx_update_0_write3_merged_banks_3.peek_0();
  return value_green_bx_green_bx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd2_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd2 read pattern: { green_by_update_0[d0, d1] -> green_bx[4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_bx_green_bx_update_0_write0 = green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.peek_0();
  return value_green_bx_green_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd3_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd3 read pattern: { green_by_update_0[d0, d1] -> green_bx[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write1 = green_bx.green_bx_green_bx_update_0_write1_merged_banks_3.peek_960();
  return value_green_bx_green_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd4_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd4 read pattern: { green_by_update_0[d0, d1] -> green_bx[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write1 = green_bx.green_bx_green_bx_update_0_write1_merged_banks_3.peek_480();
  return value_green_bx_green_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd5_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd5 read pattern: { green_by_update_0[d0, d1] -> green_bx[1 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_bx_green_bx_update_0_write1 = green_bx.green_bx_green_bx_update_0_write1_merged_banks_3.peek_0();
  return value_green_bx_green_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd6_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd6 read pattern: { green_by_update_0[d0, d1] -> green_bx[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write2 = green_bx.green_bx_green_bx_update_0_write2_merged_banks_3.peek_960();
  return value_green_bx_green_bx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd7_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd7 read pattern: { green_by_update_0[d0, d1] -> green_bx[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write2 = green_bx.green_bx_green_bx_update_0_write2_merged_banks_3.peek_480();
  return value_green_bx_green_bx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd8_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd8 read pattern: { green_by_update_0[d0, d1] -> green_bx[2 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_bx_green_bx_update_0_write2 = green_bx.green_bx_green_bx_update_0_write2_merged_banks_3.peek_0();
  return value_green_bx_green_bx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd9_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd9 read pattern: { green_by_update_0[d0, d1] -> green_bx[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write3 = green_bx.green_bx_green_bx_update_0_write3_merged_banks_3.peek_960();
  return value_green_bx_green_bx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// green_bx_update_0_write
//	green_bx_green_bx_update_0_write0
//	green_bx_green_bx_update_0_write1
//	green_bx_green_bx_update_0_write2
//	green_bx_green_bx_update_0_write3
inline void green_bx_green_bx_update_0_write_bundle_write(hw_uint<64>& green_bx_update_0_write, green_bx_cache& green_bx, int d0, int d1) {
	hw_uint<16> green_bx_green_bx_update_0_write0_res = green_bx_update_0_write.extract<0, 15>();
	green_bx_green_bx_update_0_write0_write(green_bx_green_bx_update_0_write0_res, green_bx, d0, d1);
	hw_uint<16> green_bx_green_bx_update_0_write1_res = green_bx_update_0_write.extract<16, 31>();
	green_bx_green_bx_update_0_write1_write(green_bx_green_bx_update_0_write1_res, green_bx, d0, d1);
	hw_uint<16> green_bx_green_bx_update_0_write2_res = green_bx_update_0_write.extract<32, 47>();
	green_bx_green_bx_update_0_write2_write(green_bx_green_bx_update_0_write2_res, green_bx, d0, d1);
	hw_uint<16> green_bx_green_bx_update_0_write3_res = green_bx_update_0_write.extract<48, 63>();
	green_bx_green_bx_update_0_write3_write(green_bx_green_bx_update_0_write3_res, green_bx, d0, d1);
}

// green_by_update_0_read
//	green_by_rd0
//	green_by_rd1
//	green_by_rd2
//	green_by_rd3
//	green_by_rd4
//	green_by_rd5
//	green_by_rd6
//	green_by_rd7
//	green_by_rd8
//	green_by_rd9
//	green_by_rd10
//	green_by_rd11
inline hw_uint<192> green_bx_green_by_update_0_read_bundle_read(green_bx_cache& green_bx, int d0, int d1) {
  // # of ports in bundle: 12
    // green_by_rd0
    // green_by_rd1
    // green_by_rd2
    // green_by_rd3
    // green_by_rd4
    // green_by_rd5
    // green_by_rd6
    // green_by_rd7
    // green_by_rd8
    // green_by_rd9
    // green_by_rd10
    // green_by_rd11

	hw_uint<192> result;
	hw_uint<16> green_by_rd0_res = green_by_rd0_select(green_bx, d0, d1);
	set_at<0, 192>(result, green_by_rd0_res);
	hw_uint<16> green_by_rd1_res = green_by_rd1_select(green_bx, d0, d1);
	set_at<16, 192>(result, green_by_rd1_res);
	hw_uint<16> green_by_rd2_res = green_by_rd2_select(green_bx, d0, d1);
	set_at<32, 192>(result, green_by_rd2_res);
	hw_uint<16> green_by_rd3_res = green_by_rd3_select(green_bx, d0, d1);
	set_at<48, 192>(result, green_by_rd3_res);
	hw_uint<16> green_by_rd4_res = green_by_rd4_select(green_bx, d0, d1);
	set_at<64, 192>(result, green_by_rd4_res);
	hw_uint<16> green_by_rd5_res = green_by_rd5_select(green_bx, d0, d1);
	set_at<80, 192>(result, green_by_rd5_res);
	hw_uint<16> green_by_rd6_res = green_by_rd6_select(green_bx, d0, d1);
	set_at<96, 192>(result, green_by_rd6_res);
	hw_uint<16> green_by_rd7_res = green_by_rd7_select(green_bx, d0, d1);
	set_at<112, 192>(result, green_by_rd7_res);
	hw_uint<16> green_by_rd8_res = green_by_rd8_select(green_bx, d0, d1);
	set_at<128, 192>(result, green_by_rd8_res);
	hw_uint<16> green_by_rd9_res = green_by_rd9_select(green_bx, d0, d1);
	set_at<144, 192>(result, green_by_rd9_res);
	hw_uint<16> green_by_rd10_res = green_by_rd10_select(green_bx, d0, d1);
	set_at<160, 192>(result, green_by_rd10_res);
	hw_uint<16> green_by_rd11_res = green_by_rd11_select(green_bx, d0, d1);
	set_at<176, 192>(result, green_by_rd11_res);
	return result;
}

#include "hw_classes.h"

struct green_by_green_by_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct green_by_green_by_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct green_by_green_by_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct green_by_green_by_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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

struct green_by_cache {
  green_by_green_by_update_0_write0_merged_banks_1_cache green_by_green_by_update_0_write0_merged_banks_1;
  green_by_green_by_update_0_write1_merged_banks_1_cache green_by_green_by_update_0_write1_merged_banks_1;
  green_by_green_by_update_0_write2_merged_banks_1_cache green_by_green_by_update_0_write2_merged_banks_1;
  green_by_green_by_update_0_write3_merged_banks_1_cache green_by_green_by_update_0_write3_merged_banks_1;
};



inline void green_by_green_by_update_0_write0_write(hw_uint<16>& green_by_green_by_update_0_write0, green_by_cache& green_by, int d0, int d1) {
  green_by.green_by_green_by_update_0_write0_merged_banks_1.push(green_by_green_by_update_0_write0);
}

inline void green_by_green_by_update_0_write1_write(hw_uint<16>& green_by_green_by_update_0_write1, green_by_cache& green_by, int d0, int d1) {
  green_by.green_by_green_by_update_0_write1_merged_banks_1.push(green_by_green_by_update_0_write1);
}

inline void green_by_green_by_update_0_write2_write(hw_uint<16>& green_by_green_by_update_0_write2, green_by_cache& green_by, int d0, int d1) {
  green_by.green_by_green_by_update_0_write2_merged_banks_1.push(green_by_green_by_update_0_write2);
}

inline void green_by_green_by_update_0_write3_write(hw_uint<16>& green_by_green_by_update_0_write3, green_by_cache& green_by, int d0, int d1) {
  green_by.green_by_green_by_update_0_write3_merged_banks_1.push(green_by_green_by_update_0_write3);
}

inline hw_uint<16> green_diff_rd0_select(green_by_cache& green_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd0 read pattern: { green_diff_update_0[d0, d1] -> green_by[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_by_green_by_update_0_write0 = green_by.green_by_green_by_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_by_green_by_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_diff_rd1_select(green_by_cache& green_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd1 read pattern: { green_diff_update_0[d0, d1] -> green_by[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_by_green_by_update_0_write1 = green_by.green_by_green_by_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_by_green_by_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_diff_rd2_select(green_by_cache& green_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd2 read pattern: { green_diff_update_0[d0, d1] -> green_by[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_by_green_by_update_0_write2 = green_by.green_by_green_by_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_by_green_by_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_diff_rd3_select(green_by_cache& green_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd3 read pattern: { green_diff_update_0[d0, d1] -> green_by[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_by_green_by_update_0_write3 = green_by.green_by_green_by_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_by_green_by_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// green_by_update_0_write
//	green_by_green_by_update_0_write0
//	green_by_green_by_update_0_write1
//	green_by_green_by_update_0_write2
//	green_by_green_by_update_0_write3
inline void green_by_green_by_update_0_write_bundle_write(hw_uint<64>& green_by_update_0_write, green_by_cache& green_by, int d0, int d1) {
	hw_uint<16> green_by_green_by_update_0_write0_res = green_by_update_0_write.extract<0, 15>();
	green_by_green_by_update_0_write0_write(green_by_green_by_update_0_write0_res, green_by, d0, d1);
	hw_uint<16> green_by_green_by_update_0_write1_res = green_by_update_0_write.extract<16, 31>();
	green_by_green_by_update_0_write1_write(green_by_green_by_update_0_write1_res, green_by, d0, d1);
	hw_uint<16> green_by_green_by_update_0_write2_res = green_by_update_0_write.extract<32, 47>();
	green_by_green_by_update_0_write2_write(green_by_green_by_update_0_write2_res, green_by, d0, d1);
	hw_uint<16> green_by_green_by_update_0_write3_res = green_by_update_0_write.extract<48, 63>();
	green_by_green_by_update_0_write3_write(green_by_green_by_update_0_write3_res, green_by, d0, d1);
}

// green_diff_update_0_read
//	green_diff_rd0
//	green_diff_rd1
//	green_diff_rd2
//	green_diff_rd3
inline hw_uint<64> green_by_green_diff_update_0_read_bundle_read(green_by_cache& green_by, int d0, int d1) {
  // # of ports in bundle: 4
    // green_diff_rd0
    // green_diff_rd1
    // green_diff_rd2
    // green_diff_rd3

	hw_uint<64> result;
	hw_uint<16> green_diff_rd0_res = green_diff_rd0_select(green_by, d0, d1);
	set_at<0, 64>(result, green_diff_rd0_res);
	hw_uint<16> green_diff_rd1_res = green_diff_rd1_select(green_by, d0, d1);
	set_at<16, 64>(result, green_diff_rd1_res);
	hw_uint<16> green_diff_rd2_res = green_diff_rd2_select(green_by, d0, d1);
	set_at<32, 64>(result, green_diff_rd2_res);
	hw_uint<16> green_diff_rd3_res = green_diff_rd3_select(green_by, d0, d1);
	set_at<48, 64>(result, green_diff_rd3_res);
	return result;
}

#include "hw_classes.h"

struct green_diff_green_diff_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct green_diff_green_diff_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct green_diff_green_diff_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct green_diff_green_diff_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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

struct green_diff_cache {
  green_diff_green_diff_update_0_write0_merged_banks_1_cache green_diff_green_diff_update_0_write0_merged_banks_1;
  green_diff_green_diff_update_0_write1_merged_banks_1_cache green_diff_green_diff_update_0_write1_merged_banks_1;
  green_diff_green_diff_update_0_write2_merged_banks_1_cache green_diff_green_diff_update_0_write2_merged_banks_1;
  green_diff_green_diff_update_0_write3_merged_banks_1_cache green_diff_green_diff_update_0_write3_merged_banks_1;
};



inline void green_diff_green_diff_update_0_write0_write(hw_uint<16>& green_diff_green_diff_update_0_write0, green_diff_cache& green_diff, int d0, int d1) {
  green_diff.green_diff_green_diff_update_0_write0_merged_banks_1.push(green_diff_green_diff_update_0_write0);
}

inline void green_diff_green_diff_update_0_write1_write(hw_uint<16>& green_diff_green_diff_update_0_write1, green_diff_cache& green_diff, int d0, int d1) {
  green_diff.green_diff_green_diff_update_0_write1_merged_banks_1.push(green_diff_green_diff_update_0_write1);
}

inline void green_diff_green_diff_update_0_write2_write(hw_uint<16>& green_diff_green_diff_update_0_write2, green_diff_cache& green_diff, int d0, int d1) {
  green_diff.green_diff_green_diff_update_0_write2_merged_banks_1.push(green_diff_green_diff_update_0_write2);
}

inline void green_diff_green_diff_update_0_write3_write(hw_uint<16>& green_diff_green_diff_update_0_write3, green_diff_cache& green_diff, int d0, int d1) {
  green_diff.green_diff_green_diff_update_0_write3_merged_banks_1.push(green_diff_green_diff_update_0_write3);
}

inline hw_uint<16> cp_4_rd0_select(green_diff_cache& green_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd0 read pattern: { cp_4_update_0[d0, d1] -> green_diff[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_diff_green_diff_update_0_write0 = green_diff.green_diff_green_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_diff_green_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_4_rd1_select(green_diff_cache& green_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd1 read pattern: { cp_4_update_0[d0, d1] -> green_diff[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_diff_green_diff_update_0_write1 = green_diff.green_diff_green_diff_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_diff_green_diff_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_4_rd2_select(green_diff_cache& green_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd2 read pattern: { cp_4_update_0[d0, d1] -> green_diff[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_diff_green_diff_update_0_write2 = green_diff.green_diff_green_diff_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_diff_green_diff_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_4_rd3_select(green_diff_cache& green_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd3 read pattern: { cp_4_update_0[d0, d1] -> green_diff[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_diff_green_diff_update_0_write3 = green_diff.green_diff_green_diff_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_diff_green_diff_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// cp_4_update_0_read
//	cp_4_rd0
//	cp_4_rd1
//	cp_4_rd2
//	cp_4_rd3
inline hw_uint<64> green_diff_cp_4_update_0_read_bundle_read(green_diff_cache& green_diff, int d0, int d1) {
  // # of ports in bundle: 4
    // cp_4_rd0
    // cp_4_rd1
    // cp_4_rd2
    // cp_4_rd3

	hw_uint<64> result;
	hw_uint<16> cp_4_rd0_res = cp_4_rd0_select(green_diff, d0, d1);
	set_at<0, 64>(result, cp_4_rd0_res);
	hw_uint<16> cp_4_rd1_res = cp_4_rd1_select(green_diff, d0, d1);
	set_at<16, 64>(result, cp_4_rd1_res);
	hw_uint<16> cp_4_rd2_res = cp_4_rd2_select(green_diff, d0, d1);
	set_at<32, 64>(result, cp_4_rd2_res);
	hw_uint<16> cp_4_rd3_res = cp_4_rd3_select(green_diff, d0, d1);
	set_at<48, 64>(result, cp_4_rd3_res);
	return result;
}

// green_diff_update_0_write
//	green_diff_green_diff_update_0_write0
//	green_diff_green_diff_update_0_write1
//	green_diff_green_diff_update_0_write2
//	green_diff_green_diff_update_0_write3
inline void green_diff_green_diff_update_0_write_bundle_write(hw_uint<64>& green_diff_update_0_write, green_diff_cache& green_diff, int d0, int d1) {
	hw_uint<16> green_diff_green_diff_update_0_write0_res = green_diff_update_0_write.extract<0, 15>();
	green_diff_green_diff_update_0_write0_write(green_diff_green_diff_update_0_write0_res, green_diff, d0, d1);
	hw_uint<16> green_diff_green_diff_update_0_write1_res = green_diff_update_0_write.extract<16, 31>();
	green_diff_green_diff_update_0_write1_write(green_diff_green_diff_update_0_write1_res, green_diff, d0, d1);
	hw_uint<16> green_diff_green_diff_update_0_write2_res = green_diff_update_0_write.extract<32, 47>();
	green_diff_green_diff_update_0_write2_write(green_diff_green_diff_update_0_write2_res, green_diff, d0, d1);
	hw_uint<16> green_diff_green_diff_update_0_write3_res = green_diff_update_0_write.extract<48, 63>();
	green_diff_green_diff_update_0_write3_write(green_diff_green_diff_update_0_write3_res, green_diff, d0, d1);
}

#include "hw_classes.h"

struct raw_raw_update_0_write0_merged_banks_27_cache {
	// RAM Box: {[0, 1924], [0, 1083]}
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

struct raw_raw_update_0_write1_merged_banks_27_cache {
	// RAM Box: {[1, 1925], [0, 1083]}
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

struct raw_raw_update_0_write2_merged_banks_27_cache {
	// RAM Box: {[2, 1926], [0, 1083]}
	// Capacity: 966
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 481> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_964() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f5.push(f4);
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

struct raw_raw_update_0_write3_merged_banks_27_cache {
	// RAM Box: {[3, 1927], [0, 1083]}
	// Capacity: 966
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 481> f5;
	hw_uint<16> f6;


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

	inline hw_uint<16> peek_964() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f5.push(f4);
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

struct raw_cache {
  raw_raw_update_0_write0_merged_banks_27_cache raw_raw_update_0_write0_merged_banks_27;
  raw_raw_update_0_write1_merged_banks_27_cache raw_raw_update_0_write1_merged_banks_27;
  raw_raw_update_0_write2_merged_banks_27_cache raw_raw_update_0_write2_merged_banks_27;
  raw_raw_update_0_write3_merged_banks_27_cache raw_raw_update_0_write3_merged_banks_27;
};



inline void raw_raw_update_0_write0_write(hw_uint<16>& raw_raw_update_0_write0, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write0_merged_banks_27.push(raw_raw_update_0_write0);
}

inline void raw_raw_update_0_write1_write(hw_uint<16>& raw_raw_update_0_write1, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write1_merged_banks_27.push(raw_raw_update_0_write1);
}

inline void raw_raw_update_0_write2_write(hw_uint<16>& raw_raw_update_0_write2, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write2_merged_banks_27.push(raw_raw_update_0_write2);
}

inline void raw_raw_update_0_write3_write(hw_uint<16>& raw_raw_update_0_write3, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write3_merged_banks_27.push(raw_raw_update_0_write3);
}

inline hw_uint<16> blue_rd0_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd0 read pattern: { blue_update_0[d0, d1] -> raw[4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd1_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd1 read pattern: { blue_update_0[d0, d1] -> raw[4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd10_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd10 read pattern: { blue_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd11_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd11 read pattern: { blue_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd12_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd12 read pattern: { blue_update_0[d0, d1] -> raw[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd13_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd13 read pattern: { blue_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd14_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd14 read pattern: { blue_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd15_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd15 read pattern: { blue_update_0[d0, d1] -> raw[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd16_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd16 read pattern: { blue_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd17_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd17 read pattern: { blue_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd18_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd18 read pattern: { blue_update_0[d0, d1] -> raw[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd19_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd19 read pattern: { blue_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd2 read pattern: { blue_update_0[d0, d1] -> raw[4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd20_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd20 read pattern: { blue_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd21_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd21 read pattern: { blue_update_0[d0, d1] -> raw[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd22_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd22 read pattern: { blue_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd23_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd23 read pattern: { blue_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd24_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd24 read pattern: { blue_update_0[d0, d1] -> raw[4 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_964();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd25_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd25 read pattern: { blue_update_0[d0, d1] -> raw[4 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_482();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd26_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd26 read pattern: { blue_update_0[d0, d1] -> raw[4 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd27_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd27 read pattern: { blue_update_0[d0, d1] -> raw[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd28_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd28 read pattern: { blue_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd29_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd29 read pattern: { blue_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd3_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd3 read pattern: { blue_update_0[d0, d1] -> raw[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd30_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd30 read pattern: { blue_update_0[d0, d1] -> raw[4 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_964();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd31_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd31 read pattern: { blue_update_0[d0, d1] -> raw[4 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_482();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd32_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd32 read pattern: { blue_update_0[d0, d1] -> raw[4 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd33_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd33 read pattern: { blue_update_0[d0, d1] -> raw[5 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_964();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd34_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd34 read pattern: { blue_update_0[d0, d1] -> raw[5 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_482();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd35_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd35 read pattern: { blue_update_0[d0, d1] -> raw[5 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd4_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd4 read pattern: { blue_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd5_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd5 read pattern: { blue_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd6_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd6 read pattern: { blue_update_0[d0, d1] -> raw[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd7_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd7 read pattern: { blue_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd8_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd8 read pattern: { blue_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd9_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd9 read pattern: { blue_update_0[d0, d1] -> raw[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd0_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd0 read pattern: { green_update_0[d0, d1] -> raw[4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd1_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd1 read pattern: { green_update_0[d0, d1] -> raw[4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd10_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd10 read pattern: { green_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd11_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd11 read pattern: { green_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd12_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd12 read pattern: { green_update_0[d0, d1] -> raw[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd13_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd13 read pattern: { green_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd14_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd14 read pattern: { green_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd15_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd15 read pattern: { green_update_0[d0, d1] -> raw[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd16_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd16 read pattern: { green_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd17_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd17 read pattern: { green_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd18_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd18 read pattern: { green_update_0[d0, d1] -> raw[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd19_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd19 read pattern: { green_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd2 read pattern: { green_update_0[d0, d1] -> raw[4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd20_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd20 read pattern: { green_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd21_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd21 read pattern: { green_update_0[d0, d1] -> raw[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd22_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd22 read pattern: { green_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd23_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd23 read pattern: { green_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd24_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd24 read pattern: { green_update_0[d0, d1] -> raw[4 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_964();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd25_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd25 read pattern: { green_update_0[d0, d1] -> raw[4 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_482();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd26_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd26 read pattern: { green_update_0[d0, d1] -> raw[4 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd27_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd27 read pattern: { green_update_0[d0, d1] -> raw[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd28_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd28 read pattern: { green_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd29_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd29 read pattern: { green_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd3_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd3 read pattern: { green_update_0[d0, d1] -> raw[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd30_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd30 read pattern: { green_update_0[d0, d1] -> raw[4 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_964();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd31_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd31 read pattern: { green_update_0[d0, d1] -> raw[4 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_482();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd32_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd32 read pattern: { green_update_0[d0, d1] -> raw[4 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd33_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd33 read pattern: { green_update_0[d0, d1] -> raw[5 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_964();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd34_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd34 read pattern: { green_update_0[d0, d1] -> raw[5 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_482();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd35_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd35 read pattern: { green_update_0[d0, d1] -> raw[5 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd4_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd4 read pattern: { green_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd5_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd5 read pattern: { green_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd6_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd6 read pattern: { green_update_0[d0, d1] -> raw[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd7_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd7 read pattern: { green_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd8_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd8 read pattern: { green_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd9_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd9 read pattern: { green_update_0[d0, d1] -> raw[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd0_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd0 read pattern: { red_update_0[d0, d1] -> raw[4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd1_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd1 read pattern: { red_update_0[d0, d1] -> raw[4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd10_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd10 read pattern: { red_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd11_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd11 read pattern: { red_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd12_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd12 read pattern: { red_update_0[d0, d1] -> raw[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd13_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd13 read pattern: { red_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd14_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd14 read pattern: { red_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd15_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd15 read pattern: { red_update_0[d0, d1] -> raw[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd16_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd16 read pattern: { red_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd17_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd17 read pattern: { red_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd18_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd18 read pattern: { red_update_0[d0, d1] -> raw[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd19_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd19 read pattern: { red_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd2 read pattern: { red_update_0[d0, d1] -> raw[4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd20_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd20 read pattern: { red_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd21_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd21 read pattern: { red_update_0[d0, d1] -> raw[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd22_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd22 read pattern: { red_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd23_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd23 read pattern: { red_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd24_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd24 read pattern: { red_update_0[d0, d1] -> raw[4 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_964();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd25_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd25 read pattern: { red_update_0[d0, d1] -> raw[4 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_482();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd26_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd26 read pattern: { red_update_0[d0, d1] -> raw[4 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd27_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd27 read pattern: { red_update_0[d0, d1] -> raw[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd28_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd28 read pattern: { red_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd29_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd29 read pattern: { red_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd3_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd3 read pattern: { red_update_0[d0, d1] -> raw[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd30_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd30 read pattern: { red_update_0[d0, d1] -> raw[4 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_964();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd31_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd31 read pattern: { red_update_0[d0, d1] -> raw[4 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_482();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd32_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd32 read pattern: { red_update_0[d0, d1] -> raw[4 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd33_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd33 read pattern: { red_update_0[d0, d1] -> raw[5 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 964 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (484 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_964();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd34_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd34 read pattern: { red_update_0[d0, d1] -> raw[5 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 482 : 0 <= d0 <= 479 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (2 + d0) : d0 = 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_482();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd35_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd35 read pattern: { red_update_0[d0, d1] -> raw[5 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd4_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd4 read pattern: { red_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd5_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd5 read pattern: { red_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd6_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd6 read pattern: { red_update_0[d0, d1] -> raw[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd7_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd7 read pattern: { red_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 483 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_483();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd8_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd8 read pattern: { red_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd9_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd9 read pattern: { red_update_0[d0, d1] -> raw[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 481 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 965 : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_965();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// blue_update_0_read
//	blue_rd0
//	blue_rd1
//	blue_rd2
//	blue_rd3
//	blue_rd4
//	blue_rd5
//	blue_rd6
//	blue_rd7
//	blue_rd8
//	blue_rd9
//	blue_rd10
//	blue_rd11
//	blue_rd12
//	blue_rd13
//	blue_rd14
//	blue_rd15
//	blue_rd16
//	blue_rd17
//	blue_rd18
//	blue_rd19
//	blue_rd20
//	blue_rd21
//	blue_rd22
//	blue_rd23
//	blue_rd24
//	blue_rd25
//	blue_rd26
//	blue_rd27
//	blue_rd28
//	blue_rd29
//	blue_rd30
//	blue_rd31
//	blue_rd32
//	blue_rd33
//	blue_rd34
//	blue_rd35
inline hw_uint<576> raw_blue_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 36
    // blue_rd0
    // blue_rd1
    // blue_rd2
    // blue_rd3
    // blue_rd4
    // blue_rd5
    // blue_rd6
    // blue_rd7
    // blue_rd8
    // blue_rd9
    // blue_rd10
    // blue_rd11
    // blue_rd12
    // blue_rd13
    // blue_rd14
    // blue_rd15
    // blue_rd16
    // blue_rd17
    // blue_rd18
    // blue_rd19
    // blue_rd20
    // blue_rd21
    // blue_rd22
    // blue_rd23
    // blue_rd24
    // blue_rd25
    // blue_rd26
    // blue_rd27
    // blue_rd28
    // blue_rd29
    // blue_rd30
    // blue_rd31
    // blue_rd32
    // blue_rd33
    // blue_rd34
    // blue_rd35

	hw_uint<576> result;
	hw_uint<16> blue_rd0_res = blue_rd0_select(raw, d0, d1);
	set_at<0, 576>(result, blue_rd0_res);
	hw_uint<16> blue_rd1_res = blue_rd1_select(raw, d0, d1);
	set_at<16, 576>(result, blue_rd1_res);
	hw_uint<16> blue_rd2_res = blue_rd2_select(raw, d0, d1);
	set_at<32, 576>(result, blue_rd2_res);
	hw_uint<16> blue_rd3_res = blue_rd3_select(raw, d0, d1);
	set_at<48, 576>(result, blue_rd3_res);
	hw_uint<16> blue_rd4_res = blue_rd4_select(raw, d0, d1);
	set_at<64, 576>(result, blue_rd4_res);
	hw_uint<16> blue_rd5_res = blue_rd5_select(raw, d0, d1);
	set_at<80, 576>(result, blue_rd5_res);
	hw_uint<16> blue_rd6_res = blue_rd6_select(raw, d0, d1);
	set_at<96, 576>(result, blue_rd6_res);
	hw_uint<16> blue_rd7_res = blue_rd7_select(raw, d0, d1);
	set_at<112, 576>(result, blue_rd7_res);
	hw_uint<16> blue_rd8_res = blue_rd8_select(raw, d0, d1);
	set_at<128, 576>(result, blue_rd8_res);
	hw_uint<16> blue_rd9_res = blue_rd9_select(raw, d0, d1);
	set_at<144, 576>(result, blue_rd9_res);
	hw_uint<16> blue_rd10_res = blue_rd10_select(raw, d0, d1);
	set_at<160, 576>(result, blue_rd10_res);
	hw_uint<16> blue_rd11_res = blue_rd11_select(raw, d0, d1);
	set_at<176, 576>(result, blue_rd11_res);
	hw_uint<16> blue_rd12_res = blue_rd12_select(raw, d0, d1);
	set_at<192, 576>(result, blue_rd12_res);
	hw_uint<16> blue_rd13_res = blue_rd13_select(raw, d0, d1);
	set_at<208, 576>(result, blue_rd13_res);
	hw_uint<16> blue_rd14_res = blue_rd14_select(raw, d0, d1);
	set_at<224, 576>(result, blue_rd14_res);
	hw_uint<16> blue_rd15_res = blue_rd15_select(raw, d0, d1);
	set_at<240, 576>(result, blue_rd15_res);
	hw_uint<16> blue_rd16_res = blue_rd16_select(raw, d0, d1);
	set_at<256, 576>(result, blue_rd16_res);
	hw_uint<16> blue_rd17_res = blue_rd17_select(raw, d0, d1);
	set_at<272, 576>(result, blue_rd17_res);
	hw_uint<16> blue_rd18_res = blue_rd18_select(raw, d0, d1);
	set_at<288, 576>(result, blue_rd18_res);
	hw_uint<16> blue_rd19_res = blue_rd19_select(raw, d0, d1);
	set_at<304, 576>(result, blue_rd19_res);
	hw_uint<16> blue_rd20_res = blue_rd20_select(raw, d0, d1);
	set_at<320, 576>(result, blue_rd20_res);
	hw_uint<16> blue_rd21_res = blue_rd21_select(raw, d0, d1);
	set_at<336, 576>(result, blue_rd21_res);
	hw_uint<16> blue_rd22_res = blue_rd22_select(raw, d0, d1);
	set_at<352, 576>(result, blue_rd22_res);
	hw_uint<16> blue_rd23_res = blue_rd23_select(raw, d0, d1);
	set_at<368, 576>(result, blue_rd23_res);
	hw_uint<16> blue_rd24_res = blue_rd24_select(raw, d0, d1);
	set_at<384, 576>(result, blue_rd24_res);
	hw_uint<16> blue_rd25_res = blue_rd25_select(raw, d0, d1);
	set_at<400, 576>(result, blue_rd25_res);
	hw_uint<16> blue_rd26_res = blue_rd26_select(raw, d0, d1);
	set_at<416, 576>(result, blue_rd26_res);
	hw_uint<16> blue_rd27_res = blue_rd27_select(raw, d0, d1);
	set_at<432, 576>(result, blue_rd27_res);
	hw_uint<16> blue_rd28_res = blue_rd28_select(raw, d0, d1);
	set_at<448, 576>(result, blue_rd28_res);
	hw_uint<16> blue_rd29_res = blue_rd29_select(raw, d0, d1);
	set_at<464, 576>(result, blue_rd29_res);
	hw_uint<16> blue_rd30_res = blue_rd30_select(raw, d0, d1);
	set_at<480, 576>(result, blue_rd30_res);
	hw_uint<16> blue_rd31_res = blue_rd31_select(raw, d0, d1);
	set_at<496, 576>(result, blue_rd31_res);
	hw_uint<16> blue_rd32_res = blue_rd32_select(raw, d0, d1);
	set_at<512, 576>(result, blue_rd32_res);
	hw_uint<16> blue_rd33_res = blue_rd33_select(raw, d0, d1);
	set_at<528, 576>(result, blue_rd33_res);
	hw_uint<16> blue_rd34_res = blue_rd34_select(raw, d0, d1);
	set_at<544, 576>(result, blue_rd34_res);
	hw_uint<16> blue_rd35_res = blue_rd35_select(raw, d0, d1);
	set_at<560, 576>(result, blue_rd35_res);
	return result;
}

// green_update_0_read
//	green_rd0
//	green_rd1
//	green_rd2
//	green_rd3
//	green_rd4
//	green_rd5
//	green_rd6
//	green_rd7
//	green_rd8
//	green_rd9
//	green_rd10
//	green_rd11
//	green_rd12
//	green_rd13
//	green_rd14
//	green_rd15
//	green_rd16
//	green_rd17
//	green_rd18
//	green_rd19
//	green_rd20
//	green_rd21
//	green_rd22
//	green_rd23
//	green_rd24
//	green_rd25
//	green_rd26
//	green_rd27
//	green_rd28
//	green_rd29
//	green_rd30
//	green_rd31
//	green_rd32
//	green_rd33
//	green_rd34
//	green_rd35
inline hw_uint<576> raw_green_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 36
    // green_rd0
    // green_rd1
    // green_rd2
    // green_rd3
    // green_rd4
    // green_rd5
    // green_rd6
    // green_rd7
    // green_rd8
    // green_rd9
    // green_rd10
    // green_rd11
    // green_rd12
    // green_rd13
    // green_rd14
    // green_rd15
    // green_rd16
    // green_rd17
    // green_rd18
    // green_rd19
    // green_rd20
    // green_rd21
    // green_rd22
    // green_rd23
    // green_rd24
    // green_rd25
    // green_rd26
    // green_rd27
    // green_rd28
    // green_rd29
    // green_rd30
    // green_rd31
    // green_rd32
    // green_rd33
    // green_rd34
    // green_rd35

	hw_uint<576> result;
	hw_uint<16> green_rd0_res = green_rd0_select(raw, d0, d1);
	set_at<0, 576>(result, green_rd0_res);
	hw_uint<16> green_rd1_res = green_rd1_select(raw, d0, d1);
	set_at<16, 576>(result, green_rd1_res);
	hw_uint<16> green_rd2_res = green_rd2_select(raw, d0, d1);
	set_at<32, 576>(result, green_rd2_res);
	hw_uint<16> green_rd3_res = green_rd3_select(raw, d0, d1);
	set_at<48, 576>(result, green_rd3_res);
	hw_uint<16> green_rd4_res = green_rd4_select(raw, d0, d1);
	set_at<64, 576>(result, green_rd4_res);
	hw_uint<16> green_rd5_res = green_rd5_select(raw, d0, d1);
	set_at<80, 576>(result, green_rd5_res);
	hw_uint<16> green_rd6_res = green_rd6_select(raw, d0, d1);
	set_at<96, 576>(result, green_rd6_res);
	hw_uint<16> green_rd7_res = green_rd7_select(raw, d0, d1);
	set_at<112, 576>(result, green_rd7_res);
	hw_uint<16> green_rd8_res = green_rd8_select(raw, d0, d1);
	set_at<128, 576>(result, green_rd8_res);
	hw_uint<16> green_rd9_res = green_rd9_select(raw, d0, d1);
	set_at<144, 576>(result, green_rd9_res);
	hw_uint<16> green_rd10_res = green_rd10_select(raw, d0, d1);
	set_at<160, 576>(result, green_rd10_res);
	hw_uint<16> green_rd11_res = green_rd11_select(raw, d0, d1);
	set_at<176, 576>(result, green_rd11_res);
	hw_uint<16> green_rd12_res = green_rd12_select(raw, d0, d1);
	set_at<192, 576>(result, green_rd12_res);
	hw_uint<16> green_rd13_res = green_rd13_select(raw, d0, d1);
	set_at<208, 576>(result, green_rd13_res);
	hw_uint<16> green_rd14_res = green_rd14_select(raw, d0, d1);
	set_at<224, 576>(result, green_rd14_res);
	hw_uint<16> green_rd15_res = green_rd15_select(raw, d0, d1);
	set_at<240, 576>(result, green_rd15_res);
	hw_uint<16> green_rd16_res = green_rd16_select(raw, d0, d1);
	set_at<256, 576>(result, green_rd16_res);
	hw_uint<16> green_rd17_res = green_rd17_select(raw, d0, d1);
	set_at<272, 576>(result, green_rd17_res);
	hw_uint<16> green_rd18_res = green_rd18_select(raw, d0, d1);
	set_at<288, 576>(result, green_rd18_res);
	hw_uint<16> green_rd19_res = green_rd19_select(raw, d0, d1);
	set_at<304, 576>(result, green_rd19_res);
	hw_uint<16> green_rd20_res = green_rd20_select(raw, d0, d1);
	set_at<320, 576>(result, green_rd20_res);
	hw_uint<16> green_rd21_res = green_rd21_select(raw, d0, d1);
	set_at<336, 576>(result, green_rd21_res);
	hw_uint<16> green_rd22_res = green_rd22_select(raw, d0, d1);
	set_at<352, 576>(result, green_rd22_res);
	hw_uint<16> green_rd23_res = green_rd23_select(raw, d0, d1);
	set_at<368, 576>(result, green_rd23_res);
	hw_uint<16> green_rd24_res = green_rd24_select(raw, d0, d1);
	set_at<384, 576>(result, green_rd24_res);
	hw_uint<16> green_rd25_res = green_rd25_select(raw, d0, d1);
	set_at<400, 576>(result, green_rd25_res);
	hw_uint<16> green_rd26_res = green_rd26_select(raw, d0, d1);
	set_at<416, 576>(result, green_rd26_res);
	hw_uint<16> green_rd27_res = green_rd27_select(raw, d0, d1);
	set_at<432, 576>(result, green_rd27_res);
	hw_uint<16> green_rd28_res = green_rd28_select(raw, d0, d1);
	set_at<448, 576>(result, green_rd28_res);
	hw_uint<16> green_rd29_res = green_rd29_select(raw, d0, d1);
	set_at<464, 576>(result, green_rd29_res);
	hw_uint<16> green_rd30_res = green_rd30_select(raw, d0, d1);
	set_at<480, 576>(result, green_rd30_res);
	hw_uint<16> green_rd31_res = green_rd31_select(raw, d0, d1);
	set_at<496, 576>(result, green_rd31_res);
	hw_uint<16> green_rd32_res = green_rd32_select(raw, d0, d1);
	set_at<512, 576>(result, green_rd32_res);
	hw_uint<16> green_rd33_res = green_rd33_select(raw, d0, d1);
	set_at<528, 576>(result, green_rd33_res);
	hw_uint<16> green_rd34_res = green_rd34_select(raw, d0, d1);
	set_at<544, 576>(result, green_rd34_res);
	hw_uint<16> green_rd35_res = green_rd35_select(raw, d0, d1);
	set_at<560, 576>(result, green_rd35_res);
	return result;
}

// raw_update_0_write
//	raw_raw_update_0_write0
//	raw_raw_update_0_write1
//	raw_raw_update_0_write2
//	raw_raw_update_0_write3
inline void raw_raw_update_0_write_bundle_write(hw_uint<64>& raw_update_0_write, raw_cache& raw, int d0, int d1) {
	hw_uint<16> raw_raw_update_0_write0_res = raw_update_0_write.extract<0, 15>();
	raw_raw_update_0_write0_write(raw_raw_update_0_write0_res, raw, d0, d1);
	hw_uint<16> raw_raw_update_0_write1_res = raw_update_0_write.extract<16, 31>();
	raw_raw_update_0_write1_write(raw_raw_update_0_write1_res, raw, d0, d1);
	hw_uint<16> raw_raw_update_0_write2_res = raw_update_0_write.extract<32, 47>();
	raw_raw_update_0_write2_write(raw_raw_update_0_write2_res, raw, d0, d1);
	hw_uint<16> raw_raw_update_0_write3_res = raw_update_0_write.extract<48, 63>();
	raw_raw_update_0_write3_write(raw_raw_update_0_write3_res, raw, d0, d1);
}

// red_update_0_read
//	red_rd0
//	red_rd1
//	red_rd2
//	red_rd3
//	red_rd4
//	red_rd5
//	red_rd6
//	red_rd7
//	red_rd8
//	red_rd9
//	red_rd10
//	red_rd11
//	red_rd12
//	red_rd13
//	red_rd14
//	red_rd15
//	red_rd16
//	red_rd17
//	red_rd18
//	red_rd19
//	red_rd20
//	red_rd21
//	red_rd22
//	red_rd23
//	red_rd24
//	red_rd25
//	red_rd26
//	red_rd27
//	red_rd28
//	red_rd29
//	red_rd30
//	red_rd31
//	red_rd32
//	red_rd33
//	red_rd34
//	red_rd35
inline hw_uint<576> raw_red_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 36
    // red_rd0
    // red_rd1
    // red_rd2
    // red_rd3
    // red_rd4
    // red_rd5
    // red_rd6
    // red_rd7
    // red_rd8
    // red_rd9
    // red_rd10
    // red_rd11
    // red_rd12
    // red_rd13
    // red_rd14
    // red_rd15
    // red_rd16
    // red_rd17
    // red_rd18
    // red_rd19
    // red_rd20
    // red_rd21
    // red_rd22
    // red_rd23
    // red_rd24
    // red_rd25
    // red_rd26
    // red_rd27
    // red_rd28
    // red_rd29
    // red_rd30
    // red_rd31
    // red_rd32
    // red_rd33
    // red_rd34
    // red_rd35

	hw_uint<576> result;
	hw_uint<16> red_rd0_res = red_rd0_select(raw, d0, d1);
	set_at<0, 576>(result, red_rd0_res);
	hw_uint<16> red_rd1_res = red_rd1_select(raw, d0, d1);
	set_at<16, 576>(result, red_rd1_res);
	hw_uint<16> red_rd2_res = red_rd2_select(raw, d0, d1);
	set_at<32, 576>(result, red_rd2_res);
	hw_uint<16> red_rd3_res = red_rd3_select(raw, d0, d1);
	set_at<48, 576>(result, red_rd3_res);
	hw_uint<16> red_rd4_res = red_rd4_select(raw, d0, d1);
	set_at<64, 576>(result, red_rd4_res);
	hw_uint<16> red_rd5_res = red_rd5_select(raw, d0, d1);
	set_at<80, 576>(result, red_rd5_res);
	hw_uint<16> red_rd6_res = red_rd6_select(raw, d0, d1);
	set_at<96, 576>(result, red_rd6_res);
	hw_uint<16> red_rd7_res = red_rd7_select(raw, d0, d1);
	set_at<112, 576>(result, red_rd7_res);
	hw_uint<16> red_rd8_res = red_rd8_select(raw, d0, d1);
	set_at<128, 576>(result, red_rd8_res);
	hw_uint<16> red_rd9_res = red_rd9_select(raw, d0, d1);
	set_at<144, 576>(result, red_rd9_res);
	hw_uint<16> red_rd10_res = red_rd10_select(raw, d0, d1);
	set_at<160, 576>(result, red_rd10_res);
	hw_uint<16> red_rd11_res = red_rd11_select(raw, d0, d1);
	set_at<176, 576>(result, red_rd11_res);
	hw_uint<16> red_rd12_res = red_rd12_select(raw, d0, d1);
	set_at<192, 576>(result, red_rd12_res);
	hw_uint<16> red_rd13_res = red_rd13_select(raw, d0, d1);
	set_at<208, 576>(result, red_rd13_res);
	hw_uint<16> red_rd14_res = red_rd14_select(raw, d0, d1);
	set_at<224, 576>(result, red_rd14_res);
	hw_uint<16> red_rd15_res = red_rd15_select(raw, d0, d1);
	set_at<240, 576>(result, red_rd15_res);
	hw_uint<16> red_rd16_res = red_rd16_select(raw, d0, d1);
	set_at<256, 576>(result, red_rd16_res);
	hw_uint<16> red_rd17_res = red_rd17_select(raw, d0, d1);
	set_at<272, 576>(result, red_rd17_res);
	hw_uint<16> red_rd18_res = red_rd18_select(raw, d0, d1);
	set_at<288, 576>(result, red_rd18_res);
	hw_uint<16> red_rd19_res = red_rd19_select(raw, d0, d1);
	set_at<304, 576>(result, red_rd19_res);
	hw_uint<16> red_rd20_res = red_rd20_select(raw, d0, d1);
	set_at<320, 576>(result, red_rd20_res);
	hw_uint<16> red_rd21_res = red_rd21_select(raw, d0, d1);
	set_at<336, 576>(result, red_rd21_res);
	hw_uint<16> red_rd22_res = red_rd22_select(raw, d0, d1);
	set_at<352, 576>(result, red_rd22_res);
	hw_uint<16> red_rd23_res = red_rd23_select(raw, d0, d1);
	set_at<368, 576>(result, red_rd23_res);
	hw_uint<16> red_rd24_res = red_rd24_select(raw, d0, d1);
	set_at<384, 576>(result, red_rd24_res);
	hw_uint<16> red_rd25_res = red_rd25_select(raw, d0, d1);
	set_at<400, 576>(result, red_rd25_res);
	hw_uint<16> red_rd26_res = red_rd26_select(raw, d0, d1);
	set_at<416, 576>(result, red_rd26_res);
	hw_uint<16> red_rd27_res = red_rd27_select(raw, d0, d1);
	set_at<432, 576>(result, red_rd27_res);
	hw_uint<16> red_rd28_res = red_rd28_select(raw, d0, d1);
	set_at<448, 576>(result, red_rd28_res);
	hw_uint<16> red_rd29_res = red_rd29_select(raw, d0, d1);
	set_at<464, 576>(result, red_rd29_res);
	hw_uint<16> red_rd30_res = red_rd30_select(raw, d0, d1);
	set_at<480, 576>(result, red_rd30_res);
	hw_uint<16> red_rd31_res = red_rd31_select(raw, d0, d1);
	set_at<496, 576>(result, red_rd31_res);
	hw_uint<16> red_rd32_res = red_rd32_select(raw, d0, d1);
	set_at<512, 576>(result, red_rd32_res);
	hw_uint<16> red_rd33_res = red_rd33_select(raw, d0, d1);
	set_at<528, 576>(result, red_rd33_res);
	hw_uint<16> red_rd34_res = red_rd34_select(raw, d0, d1);
	set_at<544, 576>(result, red_rd34_res);
	hw_uint<16> red_rd35_res = red_rd35_select(raw, d0, d1);
	set_at<560, 576>(result, red_rd35_res);
	return result;
}

#include "hw_classes.h"

struct red_red_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct red_red_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct red_red_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[2, 1922], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct red_red_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[3, 1923], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct red_cache {
  red_red_update_0_write0_merged_banks_4_cache red_red_update_0_write0_merged_banks_4;
  red_red_update_0_write1_merged_banks_4_cache red_red_update_0_write1_merged_banks_4;
  red_red_update_0_write2_merged_banks_4_cache red_red_update_0_write2_merged_banks_4;
  red_red_update_0_write3_merged_banks_4_cache red_red_update_0_write3_merged_banks_4;
};



inline void red_red_update_0_write0_write(hw_uint<16>& red_red_update_0_write0, red_cache& red, int d0, int d1) {
  red.red_red_update_0_write0_merged_banks_4.push(red_red_update_0_write0);
}

inline void red_red_update_0_write1_write(hw_uint<16>& red_red_update_0_write1, red_cache& red, int d0, int d1) {
  red.red_red_update_0_write1_merged_banks_4.push(red_red_update_0_write1);
}

inline void red_red_update_0_write2_write(hw_uint<16>& red_red_update_0_write2, red_cache& red, int d0, int d1) {
  red.red_red_update_0_write2_merged_banks_4.push(red_red_update_0_write2);
}

inline void red_red_update_0_write3_write(hw_uint<16>& red_red_update_0_write3, red_cache& red, int d0, int d1) {
  red.red_red_update_0_write3_merged_banks_4.push(red_red_update_0_write3);
}

inline hw_uint<16> red_bx_rd0_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd0 read pattern: { red_bx_update_0[d0, d1] -> red[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_1();
  return value_red_red_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd1_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd1 read pattern: { red_bx_update_0[d0, d1] -> red[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_red_red_update_0_write1 = red.red_red_update_0_write1_merged_banks_4.peek_1();
  return value_red_red_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd10_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd10 read pattern: { red_bx_update_0[d0, d1] -> red[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_0();
  return value_red_red_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd11_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd11 read pattern: { red_bx_update_0[d0, d1] -> red[5 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_red_update_0_write1 = red.red_red_update_0_write1_merged_banks_4.peek_0();
  return value_red_red_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd2_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd2 read pattern: { red_bx_update_0[d0, d1] -> red[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_red_red_update_0_write2 = red.red_red_update_0_write2_merged_banks_4.peek_1();
  return value_red_red_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd3_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd3 read pattern: { red_bx_update_0[d0, d1] -> red[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_red_red_update_0_write1 = red.red_red_update_0_write1_merged_banks_4.peek_1();
  return value_red_red_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd4_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd4 read pattern: { red_bx_update_0[d0, d1] -> red[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_red_red_update_0_write2 = red.red_red_update_0_write2_merged_banks_4.peek_1();
  return value_red_red_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd5_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd5 read pattern: { red_bx_update_0[d0, d1] -> red[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_red_red_update_0_write3 = red.red_red_update_0_write3_merged_banks_4.peek_1();
  return value_red_red_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd6_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd6 read pattern: { red_bx_update_0[d0, d1] -> red[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_red_red_update_0_write2 = red.red_red_update_0_write2_merged_banks_4.peek_1();
  return value_red_red_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd7_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd7 read pattern: { red_bx_update_0[d0, d1] -> red[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_red_red_update_0_write3 = red.red_red_update_0_write3_merged_banks_4.peek_1();
  return value_red_red_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd8_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd8 read pattern: { red_bx_update_0[d0, d1] -> red[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_0();
  return value_red_red_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd9_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd9 read pattern: { red_bx_update_0[d0, d1] -> red[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_red_red_update_0_write3 = red.red_red_update_0_write3_merged_banks_4.peek_1();
  return value_red_red_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_diff_rd0_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd0 read pattern: { red_diff_update_0[d0, d1] -> red[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_963();
  return value_red_red_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_diff_rd1_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd1 read pattern: { red_diff_update_0[d0, d1] -> red[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_red_red_update_0_write1 = red.red_red_update_0_write1_merged_banks_4.peek_963();
  return value_red_red_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_diff_rd2_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd2 read pattern: { red_diff_update_0[d0, d1] -> red[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_red_red_update_0_write2 = red.red_red_update_0_write2_merged_banks_4.peek_963();
  return value_red_red_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_diff_rd3_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd3 read pattern: { red_diff_update_0[d0, d1] -> red[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // DD fold: { red_diff_update_0[d0, d1] -> 963 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_red_red_update_0_write3 = red.red_red_update_0_write3_merged_banks_4.peek_963();
  return value_red_red_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// red_bx_update_0_read
//	red_bx_rd0
//	red_bx_rd1
//	red_bx_rd2
//	red_bx_rd3
//	red_bx_rd4
//	red_bx_rd5
//	red_bx_rd6
//	red_bx_rd7
//	red_bx_rd8
//	red_bx_rd9
//	red_bx_rd10
//	red_bx_rd11
inline hw_uint<192> red_red_bx_update_0_read_bundle_read(red_cache& red, int d0, int d1) {
  // # of ports in bundle: 12
    // red_bx_rd0
    // red_bx_rd1
    // red_bx_rd2
    // red_bx_rd3
    // red_bx_rd4
    // red_bx_rd5
    // red_bx_rd6
    // red_bx_rd7
    // red_bx_rd8
    // red_bx_rd9
    // red_bx_rd10
    // red_bx_rd11

	hw_uint<192> result;
	hw_uint<16> red_bx_rd0_res = red_bx_rd0_select(red, d0, d1);
	set_at<0, 192>(result, red_bx_rd0_res);
	hw_uint<16> red_bx_rd1_res = red_bx_rd1_select(red, d0, d1);
	set_at<16, 192>(result, red_bx_rd1_res);
	hw_uint<16> red_bx_rd2_res = red_bx_rd2_select(red, d0, d1);
	set_at<32, 192>(result, red_bx_rd2_res);
	hw_uint<16> red_bx_rd3_res = red_bx_rd3_select(red, d0, d1);
	set_at<48, 192>(result, red_bx_rd3_res);
	hw_uint<16> red_bx_rd4_res = red_bx_rd4_select(red, d0, d1);
	set_at<64, 192>(result, red_bx_rd4_res);
	hw_uint<16> red_bx_rd5_res = red_bx_rd5_select(red, d0, d1);
	set_at<80, 192>(result, red_bx_rd5_res);
	hw_uint<16> red_bx_rd6_res = red_bx_rd6_select(red, d0, d1);
	set_at<96, 192>(result, red_bx_rd6_res);
	hw_uint<16> red_bx_rd7_res = red_bx_rd7_select(red, d0, d1);
	set_at<112, 192>(result, red_bx_rd7_res);
	hw_uint<16> red_bx_rd8_res = red_bx_rd8_select(red, d0, d1);
	set_at<128, 192>(result, red_bx_rd8_res);
	hw_uint<16> red_bx_rd9_res = red_bx_rd9_select(red, d0, d1);
	set_at<144, 192>(result, red_bx_rd9_res);
	hw_uint<16> red_bx_rd10_res = red_bx_rd10_select(red, d0, d1);
	set_at<160, 192>(result, red_bx_rd10_res);
	hw_uint<16> red_bx_rd11_res = red_bx_rd11_select(red, d0, d1);
	set_at<176, 192>(result, red_bx_rd11_res);
	return result;
}

// red_diff_update_0_read
//	red_diff_rd0
//	red_diff_rd1
//	red_diff_rd2
//	red_diff_rd3
inline hw_uint<64> red_red_diff_update_0_read_bundle_read(red_cache& red, int d0, int d1) {
  // # of ports in bundle: 4
    // red_diff_rd0
    // red_diff_rd1
    // red_diff_rd2
    // red_diff_rd3

	hw_uint<64> result;
	hw_uint<16> red_diff_rd0_res = red_diff_rd0_select(red, d0, d1);
	set_at<0, 64>(result, red_diff_rd0_res);
	hw_uint<16> red_diff_rd1_res = red_diff_rd1_select(red, d0, d1);
	set_at<16, 64>(result, red_diff_rd1_res);
	hw_uint<16> red_diff_rd2_res = red_diff_rd2_select(red, d0, d1);
	set_at<32, 64>(result, red_diff_rd2_res);
	hw_uint<16> red_diff_rd3_res = red_diff_rd3_select(red, d0, d1);
	set_at<48, 64>(result, red_diff_rd3_res);
	return result;
}

// red_update_0_write
//	red_red_update_0_write0
//	red_red_update_0_write1
//	red_red_update_0_write2
//	red_red_update_0_write3
inline void red_red_update_0_write_bundle_write(hw_uint<64>& red_update_0_write, red_cache& red, int d0, int d1) {
	hw_uint<16> red_red_update_0_write0_res = red_update_0_write.extract<0, 15>();
	red_red_update_0_write0_write(red_red_update_0_write0_res, red, d0, d1);
	hw_uint<16> red_red_update_0_write1_res = red_update_0_write.extract<16, 31>();
	red_red_update_0_write1_write(red_red_update_0_write1_res, red, d0, d1);
	hw_uint<16> red_red_update_0_write2_res = red_update_0_write.extract<32, 47>();
	red_red_update_0_write2_write(red_red_update_0_write2_res, red, d0, d1);
	hw_uint<16> red_red_update_0_write3_res = red_update_0_write.extract<48, 63>();
	red_red_update_0_write3_write(red_red_update_0_write3_res, red, d0, d1);
}

#include "hw_classes.h"

struct red_bx_red_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1916], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct red_bx_red_bx_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1917], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct red_bx_red_bx_update_0_write2_merged_banks_3_cache {
	// RAM Box: {[2, 1918], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct red_bx_red_bx_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 1919], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct red_bx_cache {
  red_bx_red_bx_update_0_write0_merged_banks_3_cache red_bx_red_bx_update_0_write0_merged_banks_3;
  red_bx_red_bx_update_0_write1_merged_banks_3_cache red_bx_red_bx_update_0_write1_merged_banks_3;
  red_bx_red_bx_update_0_write2_merged_banks_3_cache red_bx_red_bx_update_0_write2_merged_banks_3;
  red_bx_red_bx_update_0_write3_merged_banks_3_cache red_bx_red_bx_update_0_write3_merged_banks_3;
};



inline void red_bx_red_bx_update_0_write0_write(hw_uint<16>& red_bx_red_bx_update_0_write0, red_bx_cache& red_bx, int d0, int d1) {
  red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.push(red_bx_red_bx_update_0_write0);
}

inline void red_bx_red_bx_update_0_write1_write(hw_uint<16>& red_bx_red_bx_update_0_write1, red_bx_cache& red_bx, int d0, int d1) {
  red_bx.red_bx_red_bx_update_0_write1_merged_banks_3.push(red_bx_red_bx_update_0_write1);
}

inline void red_bx_red_bx_update_0_write2_write(hw_uint<16>& red_bx_red_bx_update_0_write2, red_bx_cache& red_bx, int d0, int d1) {
  red_bx.red_bx_red_bx_update_0_write2_merged_banks_3.push(red_bx_red_bx_update_0_write2);
}

inline void red_bx_red_bx_update_0_write3_write(hw_uint<16>& red_bx_red_bx_update_0_write3, red_bx_cache& red_bx, int d0, int d1) {
  red_bx.red_bx_red_bx_update_0_write3_merged_banks_3.push(red_bx_red_bx_update_0_write3);
}

inline hw_uint<16> red_by_rd0_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd0 read pattern: { red_by_update_0[d0, d1] -> red_bx[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write0 = red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.peek_960();
  return value_red_bx_red_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd1_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd1 read pattern: { red_by_update_0[d0, d1] -> red_bx[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write0 = red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.peek_480();
  return value_red_bx_red_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd10_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd10 read pattern: { red_by_update_0[d0, d1] -> red_bx[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write3 = red_bx.red_bx_red_bx_update_0_write3_merged_banks_3.peek_480();
  return value_red_bx_red_bx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd11_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd11 read pattern: { red_by_update_0[d0, d1] -> red_bx[3 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_bx_red_bx_update_0_write3 = red_bx.red_bx_red_bx_update_0_write3_merged_banks_3.peek_0();
  return value_red_bx_red_bx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd2_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd2 read pattern: { red_by_update_0[d0, d1] -> red_bx[4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_bx_red_bx_update_0_write0 = red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.peek_0();
  return value_red_bx_red_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd3_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd3 read pattern: { red_by_update_0[d0, d1] -> red_bx[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write1 = red_bx.red_bx_red_bx_update_0_write1_merged_banks_3.peek_960();
  return value_red_bx_red_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd4_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd4 read pattern: { red_by_update_0[d0, d1] -> red_bx[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write1 = red_bx.red_bx_red_bx_update_0_write1_merged_banks_3.peek_480();
  return value_red_bx_red_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd5_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd5 read pattern: { red_by_update_0[d0, d1] -> red_bx[1 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_bx_red_bx_update_0_write1 = red_bx.red_bx_red_bx_update_0_write1_merged_banks_3.peek_0();
  return value_red_bx_red_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd6_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd6 read pattern: { red_by_update_0[d0, d1] -> red_bx[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write2 = red_bx.red_bx_red_bx_update_0_write2_merged_banks_3.peek_960();
  return value_red_bx_red_bx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd7_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd7 read pattern: { red_by_update_0[d0, d1] -> red_bx[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 480 : 0 < d0 <= 478 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (1 + d0) : d0 = 479 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 480 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write2 = red_bx.red_bx_red_bx_update_0_write2_merged_banks_3.peek_480();
  return value_red_bx_red_bx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd8_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd8 read pattern: { red_by_update_0[d0, d1] -> red_bx[2 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_bx_red_bx_update_0_write2 = red_bx.red_bx_red_bx_update_0_write2_merged_banks_3.peek_0();
  return value_red_bx_red_bx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd9_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd9 read pattern: { red_by_update_0[d0, d1] -> red_bx[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 960 : 0 < d0 <= 478 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (481 + d0) : d0 = 479 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write3 = red_bx.red_bx_red_bx_update_0_write3_merged_banks_3.peek_960();
  return value_red_bx_red_bx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// red_bx_update_0_write
//	red_bx_red_bx_update_0_write0
//	red_bx_red_bx_update_0_write1
//	red_bx_red_bx_update_0_write2
//	red_bx_red_bx_update_0_write3
inline void red_bx_red_bx_update_0_write_bundle_write(hw_uint<64>& red_bx_update_0_write, red_bx_cache& red_bx, int d0, int d1) {
	hw_uint<16> red_bx_red_bx_update_0_write0_res = red_bx_update_0_write.extract<0, 15>();
	red_bx_red_bx_update_0_write0_write(red_bx_red_bx_update_0_write0_res, red_bx, d0, d1);
	hw_uint<16> red_bx_red_bx_update_0_write1_res = red_bx_update_0_write.extract<16, 31>();
	red_bx_red_bx_update_0_write1_write(red_bx_red_bx_update_0_write1_res, red_bx, d0, d1);
	hw_uint<16> red_bx_red_bx_update_0_write2_res = red_bx_update_0_write.extract<32, 47>();
	red_bx_red_bx_update_0_write2_write(red_bx_red_bx_update_0_write2_res, red_bx, d0, d1);
	hw_uint<16> red_bx_red_bx_update_0_write3_res = red_bx_update_0_write.extract<48, 63>();
	red_bx_red_bx_update_0_write3_write(red_bx_red_bx_update_0_write3_res, red_bx, d0, d1);
}

// red_by_update_0_read
//	red_by_rd0
//	red_by_rd1
//	red_by_rd2
//	red_by_rd3
//	red_by_rd4
//	red_by_rd5
//	red_by_rd6
//	red_by_rd7
//	red_by_rd8
//	red_by_rd9
//	red_by_rd10
//	red_by_rd11
inline hw_uint<192> red_bx_red_by_update_0_read_bundle_read(red_bx_cache& red_bx, int d0, int d1) {
  // # of ports in bundle: 12
    // red_by_rd0
    // red_by_rd1
    // red_by_rd2
    // red_by_rd3
    // red_by_rd4
    // red_by_rd5
    // red_by_rd6
    // red_by_rd7
    // red_by_rd8
    // red_by_rd9
    // red_by_rd10
    // red_by_rd11

	hw_uint<192> result;
	hw_uint<16> red_by_rd0_res = red_by_rd0_select(red_bx, d0, d1);
	set_at<0, 192>(result, red_by_rd0_res);
	hw_uint<16> red_by_rd1_res = red_by_rd1_select(red_bx, d0, d1);
	set_at<16, 192>(result, red_by_rd1_res);
	hw_uint<16> red_by_rd2_res = red_by_rd2_select(red_bx, d0, d1);
	set_at<32, 192>(result, red_by_rd2_res);
	hw_uint<16> red_by_rd3_res = red_by_rd3_select(red_bx, d0, d1);
	set_at<48, 192>(result, red_by_rd3_res);
	hw_uint<16> red_by_rd4_res = red_by_rd4_select(red_bx, d0, d1);
	set_at<64, 192>(result, red_by_rd4_res);
	hw_uint<16> red_by_rd5_res = red_by_rd5_select(red_bx, d0, d1);
	set_at<80, 192>(result, red_by_rd5_res);
	hw_uint<16> red_by_rd6_res = red_by_rd6_select(red_bx, d0, d1);
	set_at<96, 192>(result, red_by_rd6_res);
	hw_uint<16> red_by_rd7_res = red_by_rd7_select(red_bx, d0, d1);
	set_at<112, 192>(result, red_by_rd7_res);
	hw_uint<16> red_by_rd8_res = red_by_rd8_select(red_bx, d0, d1);
	set_at<128, 192>(result, red_by_rd8_res);
	hw_uint<16> red_by_rd9_res = red_by_rd9_select(red_bx, d0, d1);
	set_at<144, 192>(result, red_by_rd9_res);
	hw_uint<16> red_by_rd10_res = red_by_rd10_select(red_bx, d0, d1);
	set_at<160, 192>(result, red_by_rd10_res);
	hw_uint<16> red_by_rd11_res = red_by_rd11_select(red_bx, d0, d1);
	set_at<176, 192>(result, red_by_rd11_res);
	return result;
}

#include "hw_classes.h"

struct red_by_red_by_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct red_by_red_by_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct red_by_red_by_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct red_by_red_by_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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

struct red_by_cache {
  red_by_red_by_update_0_write0_merged_banks_1_cache red_by_red_by_update_0_write0_merged_banks_1;
  red_by_red_by_update_0_write1_merged_banks_1_cache red_by_red_by_update_0_write1_merged_banks_1;
  red_by_red_by_update_0_write2_merged_banks_1_cache red_by_red_by_update_0_write2_merged_banks_1;
  red_by_red_by_update_0_write3_merged_banks_1_cache red_by_red_by_update_0_write3_merged_banks_1;
};



inline void red_by_red_by_update_0_write0_write(hw_uint<16>& red_by_red_by_update_0_write0, red_by_cache& red_by, int d0, int d1) {
  red_by.red_by_red_by_update_0_write0_merged_banks_1.push(red_by_red_by_update_0_write0);
}

inline void red_by_red_by_update_0_write1_write(hw_uint<16>& red_by_red_by_update_0_write1, red_by_cache& red_by, int d0, int d1) {
  red_by.red_by_red_by_update_0_write1_merged_banks_1.push(red_by_red_by_update_0_write1);
}

inline void red_by_red_by_update_0_write2_write(hw_uint<16>& red_by_red_by_update_0_write2, red_by_cache& red_by, int d0, int d1) {
  red_by.red_by_red_by_update_0_write2_merged_banks_1.push(red_by_red_by_update_0_write2);
}

inline void red_by_red_by_update_0_write3_write(hw_uint<16>& red_by_red_by_update_0_write3, red_by_cache& red_by, int d0, int d1) {
  red_by.red_by_red_by_update_0_write3_merged_banks_1.push(red_by_red_by_update_0_write3);
}

inline hw_uint<16> red_diff_rd0_select(red_by_cache& red_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd0 read pattern: { red_diff_update_0[d0, d1] -> red_by[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_by_red_by_update_0_write0 = red_by.red_by_red_by_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_by_red_by_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_diff_rd1_select(red_by_cache& red_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd1 read pattern: { red_diff_update_0[d0, d1] -> red_by[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_by_red_by_update_0_write1 = red_by.red_by_red_by_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_by_red_by_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_diff_rd2_select(red_by_cache& red_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd2 read pattern: { red_diff_update_0[d0, d1] -> red_by[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_by_red_by_update_0_write2 = red_by.red_by_red_by_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_by_red_by_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_diff_rd3_select(red_by_cache& red_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd3 read pattern: { red_diff_update_0[d0, d1] -> red_by[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_by_red_by_update_0_write3 = red_by.red_by_red_by_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_by_red_by_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// red_by_update_0_write
//	red_by_red_by_update_0_write0
//	red_by_red_by_update_0_write1
//	red_by_red_by_update_0_write2
//	red_by_red_by_update_0_write3
inline void red_by_red_by_update_0_write_bundle_write(hw_uint<64>& red_by_update_0_write, red_by_cache& red_by, int d0, int d1) {
	hw_uint<16> red_by_red_by_update_0_write0_res = red_by_update_0_write.extract<0, 15>();
	red_by_red_by_update_0_write0_write(red_by_red_by_update_0_write0_res, red_by, d0, d1);
	hw_uint<16> red_by_red_by_update_0_write1_res = red_by_update_0_write.extract<16, 31>();
	red_by_red_by_update_0_write1_write(red_by_red_by_update_0_write1_res, red_by, d0, d1);
	hw_uint<16> red_by_red_by_update_0_write2_res = red_by_update_0_write.extract<32, 47>();
	red_by_red_by_update_0_write2_write(red_by_red_by_update_0_write2_res, red_by, d0, d1);
	hw_uint<16> red_by_red_by_update_0_write3_res = red_by_update_0_write.extract<48, 63>();
	red_by_red_by_update_0_write3_write(red_by_red_by_update_0_write3_res, red_by, d0, d1);
}

// red_diff_update_0_read
//	red_diff_rd0
//	red_diff_rd1
//	red_diff_rd2
//	red_diff_rd3
inline hw_uint<64> red_by_red_diff_update_0_read_bundle_read(red_by_cache& red_by, int d0, int d1) {
  // # of ports in bundle: 4
    // red_diff_rd0
    // red_diff_rd1
    // red_diff_rd2
    // red_diff_rd3

	hw_uint<64> result;
	hw_uint<16> red_diff_rd0_res = red_diff_rd0_select(red_by, d0, d1);
	set_at<0, 64>(result, red_diff_rd0_res);
	hw_uint<16> red_diff_rd1_res = red_diff_rd1_select(red_by, d0, d1);
	set_at<16, 64>(result, red_diff_rd1_res);
	hw_uint<16> red_diff_rd2_res = red_diff_rd2_select(red_by, d0, d1);
	set_at<32, 64>(result, red_diff_rd2_res);
	hw_uint<16> red_diff_rd3_res = red_diff_rd3_select(red_by, d0, d1);
	set_at<48, 64>(result, red_diff_rd3_res);
	return result;
}

#include "hw_classes.h"

struct red_diff_red_diff_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct red_diff_red_diff_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct red_diff_red_diff_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct red_diff_red_diff_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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

struct red_diff_cache {
  red_diff_red_diff_update_0_write0_merged_banks_1_cache red_diff_red_diff_update_0_write0_merged_banks_1;
  red_diff_red_diff_update_0_write1_merged_banks_1_cache red_diff_red_diff_update_0_write1_merged_banks_1;
  red_diff_red_diff_update_0_write2_merged_banks_1_cache red_diff_red_diff_update_0_write2_merged_banks_1;
  red_diff_red_diff_update_0_write3_merged_banks_1_cache red_diff_red_diff_update_0_write3_merged_banks_1;
};



inline void red_diff_red_diff_update_0_write0_write(hw_uint<16>& red_diff_red_diff_update_0_write0, red_diff_cache& red_diff, int d0, int d1) {
  red_diff.red_diff_red_diff_update_0_write0_merged_banks_1.push(red_diff_red_diff_update_0_write0);
}

inline void red_diff_red_diff_update_0_write1_write(hw_uint<16>& red_diff_red_diff_update_0_write1, red_diff_cache& red_diff, int d0, int d1) {
  red_diff.red_diff_red_diff_update_0_write1_merged_banks_1.push(red_diff_red_diff_update_0_write1);
}

inline void red_diff_red_diff_update_0_write2_write(hw_uint<16>& red_diff_red_diff_update_0_write2, red_diff_cache& red_diff, int d0, int d1) {
  red_diff.red_diff_red_diff_update_0_write2_merged_banks_1.push(red_diff_red_diff_update_0_write2);
}

inline void red_diff_red_diff_update_0_write3_write(hw_uint<16>& red_diff_red_diff_update_0_write3, red_diff_cache& red_diff, int d0, int d1) {
  red_diff.red_diff_red_diff_update_0_write3_merged_banks_1.push(red_diff_red_diff_update_0_write3);
}

inline hw_uint<16> cp_4_rd0_select(red_diff_cache& red_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd0 read pattern: { cp_4_update_0[d0, d1] -> red_diff[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_diff_red_diff_update_0_write0 = red_diff.red_diff_red_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_diff_red_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_4_rd1_select(red_diff_cache& red_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd1 read pattern: { cp_4_update_0[d0, d1] -> red_diff[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_diff_red_diff_update_0_write1 = red_diff.red_diff_red_diff_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_diff_red_diff_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_4_rd2_select(red_diff_cache& red_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd2 read pattern: { cp_4_update_0[d0, d1] -> red_diff[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_diff_red_diff_update_0_write2 = red_diff.red_diff_red_diff_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_diff_red_diff_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_4_rd3_select(red_diff_cache& red_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_4_rd3 read pattern: { cp_4_update_0[d0, d1] -> red_diff[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_4_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_diff_red_diff_update_0_write3 = red_diff.red_diff_red_diff_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_diff_red_diff_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// cp_4_update_0_read
//	cp_4_rd0
//	cp_4_rd1
//	cp_4_rd2
//	cp_4_rd3
inline hw_uint<64> red_diff_cp_4_update_0_read_bundle_read(red_diff_cache& red_diff, int d0, int d1) {
  // # of ports in bundle: 4
    // cp_4_rd0
    // cp_4_rd1
    // cp_4_rd2
    // cp_4_rd3

	hw_uint<64> result;
	hw_uint<16> cp_4_rd0_res = cp_4_rd0_select(red_diff, d0, d1);
	set_at<0, 64>(result, cp_4_rd0_res);
	hw_uint<16> cp_4_rd1_res = cp_4_rd1_select(red_diff, d0, d1);
	set_at<16, 64>(result, cp_4_rd1_res);
	hw_uint<16> cp_4_rd2_res = cp_4_rd2_select(red_diff, d0, d1);
	set_at<32, 64>(result, cp_4_rd2_res);
	hw_uint<16> cp_4_rd3_res = cp_4_rd3_select(red_diff, d0, d1);
	set_at<48, 64>(result, cp_4_rd3_res);
	return result;
}

// red_diff_update_0_write
//	red_diff_red_diff_update_0_write0
//	red_diff_red_diff_update_0_write1
//	red_diff_red_diff_update_0_write2
//	red_diff_red_diff_update_0_write3
inline void red_diff_red_diff_update_0_write_bundle_write(hw_uint<64>& red_diff_update_0_write, red_diff_cache& red_diff, int d0, int d1) {
	hw_uint<16> red_diff_red_diff_update_0_write0_res = red_diff_update_0_write.extract<0, 15>();
	red_diff_red_diff_update_0_write0_write(red_diff_red_diff_update_0_write0_res, red_diff, d0, d1);
	hw_uint<16> red_diff_red_diff_update_0_write1_res = red_diff_update_0_write.extract<16, 31>();
	red_diff_red_diff_update_0_write1_write(red_diff_red_diff_update_0_write1_res, red_diff, d0, d1);
	hw_uint<16> red_diff_red_diff_update_0_write2_res = red_diff_update_0_write.extract<32, 47>();
	red_diff_red_diff_update_0_write2_write(red_diff_red_diff_update_0_write2_res, red_diff, d0, d1);
	hw_uint<16> red_diff_red_diff_update_0_write3_res = red_diff_update_0_write.extract<48, 63>();
	red_diff_red_diff_update_0_write3_write(red_diff_red_diff_update_0_write3_res, red_diff, d0, d1);
}



// Operation logic
inline void green_by_update_0(green_bx_cache& green_bx, green_by_cache& green_by, int d0, int d1) {
	// Consume: green_bx
	auto green_bx_0_c__0_value = green_bx_green_by_update_0_read_bundle_read(green_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "green_by_update_0_green_bx," << d0<< "," << d1<< "," <<  green_bx_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = green_by_generated_compute_unrolled_4(green_bx_0_c__0_value);
	// Produce: green_by
	green_by_green_by_update_0_write_bundle_write(compute_result, green_by, d0, d1);

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
  *global_debug_handle << "green_by_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "green_by_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "green_by_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "green_by_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void blue_diff_update_0(blue_cache& blue, blue_by_cache& blue_by, blue_diff_cache& blue_diff, int d0, int d1) {
	// Consume: blue
	auto blue_0_c__0_value = blue_blue_diff_update_0_read_bundle_read(blue/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blue_diff_update_0_blue," << d0<< "," << d1<< "," <<  blue_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: blue_by
	auto blue_by_0_c__0_value = blue_by_blue_diff_update_0_read_bundle_read(blue_by/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blue_diff_update_0_blue_by," << d0<< "," << d1<< "," <<  blue_by_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_diff_generated_compute_unrolled_4(blue_0_c__0_value, blue_by_0_c__0_value);
	// Produce: blue_diff
	blue_diff_blue_diff_update_0_write_bundle_write(compute_result, blue_diff, d0, d1);

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
  *global_debug_handle << "blue_diff_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blue_diff_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "blue_diff_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "blue_diff_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void red_diff_update_0(red_cache& red, red_by_cache& red_by, red_diff_cache& red_diff, int d0, int d1) {
	// Consume: red
	auto red_0_c__0_value = red_red_diff_update_0_read_bundle_read(red/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "red_diff_update_0_red," << d0<< "," << d1<< "," <<  red_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: red_by
	auto red_by_0_c__0_value = red_by_red_diff_update_0_read_bundle_read(red_by/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "red_diff_update_0_red_by," << d0<< "," << d1<< "," <<  red_by_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = red_diff_generated_compute_unrolled_4(red_0_c__0_value, red_by_0_c__0_value);
	// Produce: red_diff
	red_diff_red_diff_update_0_write_bundle_write(compute_result, red_diff, d0, d1);

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
  *global_debug_handle << "red_diff_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "red_diff_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "red_diff_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "red_diff_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void raw_update_0(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */raw_oc, raw_cache& raw, int d0, int d1) {
	// Consume: raw_oc
	auto raw_oc_0_c__0_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_4(raw_oc_0_c__0_value);
	// Produce: raw
	raw_raw_update_0_write_bundle_write(compute_result, raw, d0, d1);

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
  *global_debug_handle << "raw_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "raw_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "raw_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "raw_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void red_by_update_0(red_bx_cache& red_bx, red_by_cache& red_by, int d0, int d1) {
	// Consume: red_bx
	auto red_bx_0_c__0_value = red_bx_red_by_update_0_read_bundle_read(red_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "red_by_update_0_red_bx," << d0<< "," << d1<< "," <<  red_bx_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = red_by_generated_compute_unrolled_4(red_bx_0_c__0_value);
	// Produce: red_by
	red_by_red_by_update_0_write_bundle_write(compute_result, red_by, d0, d1);

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
  *global_debug_handle << "red_by_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "red_by_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "red_by_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "red_by_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void blue_update_0(raw_cache& raw, blue_cache& blue, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_blue_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blue_update_0_raw," << d0<< "," << d1<< "," <<  raw_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_generated_compute_unrolled_4(raw_0_c__0_value);
	// Produce: blue
	blue_blue_update_0_write_bundle_write(compute_result, blue, d0, d1);

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
  *global_debug_handle << "blue_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blue_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "blue_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "blue_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void red_update_0(raw_cache& raw, red_cache& red, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_red_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "red_update_0_raw," << d0<< "," << d1<< "," <<  raw_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = red_generated_compute_unrolled_4(raw_0_c__0_value);
	// Produce: red
	red_red_update_0_write_bundle_write(compute_result, red, d0, d1);

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
  *global_debug_handle << "red_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "red_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "red_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "red_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void green_update_0(raw_cache& raw, green_cache& green, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_green_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "green_update_0_raw," << d0<< "," << d1<< "," <<  raw_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = green_generated_compute_unrolled_4(raw_0_c__0_value);
	// Produce: green
	green_green_update_0_write_bundle_write(compute_result, green, d0, d1);

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
  *global_debug_handle << "green_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "green_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "green_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "green_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void blue_bx_update_0(blue_cache& blue, blue_bx_cache& blue_bx, int d0, int d1) {
	// Consume: blue
	auto blue_0_c__0_value = blue_blue_bx_update_0_read_bundle_read(blue/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blue_bx_update_0_blue," << d0<< "," << d1<< "," <<  blue_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_bx_generated_compute_unrolled_4(blue_0_c__0_value);
	// Produce: blue_bx
	blue_bx_blue_bx_update_0_write_bundle_write(compute_result, blue_bx, d0, d1);

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
  *global_debug_handle << "blue_bx_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blue_bx_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "blue_bx_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "blue_bx_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void red_bx_update_0(red_cache& red, red_bx_cache& red_bx, int d0, int d1) {
	// Consume: red
	auto red_0_c__0_value = red_red_bx_update_0_read_bundle_read(red/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "red_bx_update_0_red," << d0<< "," << d1<< "," <<  red_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = red_bx_generated_compute_unrolled_4(red_0_c__0_value);
	// Produce: red_bx
	red_bx_red_bx_update_0_write_bundle_write(compute_result, red_bx, d0, d1);

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
  *global_debug_handle << "red_bx_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "red_bx_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "red_bx_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "red_bx_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void green_bx_update_0(green_cache& green, green_bx_cache& green_bx, int d0, int d1) {
	// Consume: green
	auto green_0_c__0_value = green_green_bx_update_0_read_bundle_read(green/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "green_bx_update_0_green," << d0<< "," << d1<< "," <<  green_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = green_bx_generated_compute_unrolled_4(green_0_c__0_value);
	// Produce: green_bx
	green_bx_green_bx_update_0_write_bundle_write(compute_result, green_bx, d0, d1);

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
  *global_debug_handle << "green_bx_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "green_bx_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "green_bx_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "green_bx_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void blue_by_update_0(blue_bx_cache& blue_bx, blue_by_cache& blue_by, int d0, int d1) {
	// Consume: blue_bx
	auto blue_bx_0_c__0_value = blue_bx_blue_by_update_0_read_bundle_read(blue_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blue_by_update_0_blue_bx," << d0<< "," << d1<< "," <<  blue_bx_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_by_generated_compute_unrolled_4(blue_bx_0_c__0_value);
	// Produce: blue_by
	blue_by_blue_by_update_0_write_bundle_write(compute_result, blue_by, d0, d1);

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
  *global_debug_handle << "blue_by_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blue_by_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "blue_by_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "blue_by_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void green_diff_update_0(green_cache& green, green_by_cache& green_by, green_diff_cache& green_diff, int d0, int d1) {
	// Consume: green
	auto green_0_c__0_value = green_green_diff_update_0_read_bundle_read(green/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "green_diff_update_0_green," << d0<< "," << d1<< "," <<  green_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: green_by
	auto green_by_0_c__0_value = green_by_green_diff_update_0_read_bundle_read(green_by/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "green_diff_update_0_green_by," << d0<< "," << d1<< "," <<  green_by_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = green_diff_generated_compute_unrolled_4(green_0_c__0_value, green_by_0_c__0_value);
	// Produce: green_diff
	green_diff_green_diff_update_0_write_bundle_write(compute_result, green_diff, d0, d1);

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
  *global_debug_handle << "green_diff_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "green_diff_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "green_diff_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "green_diff_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void cp_4_update_0(blue_diff_cache& blue_diff, green_diff_cache& green_diff, red_diff_cache& red_diff, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */cp_4, int d0, int d1) {
	// Consume: blue_diff
	auto blue_diff_0_c__0_value = blue_diff_cp_4_update_0_read_bundle_read(blue_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "cp_4_update_0_blue_diff," << d0<< "," << d1<< "," <<  blue_diff_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: green_diff
	auto green_diff_0_c__0_value = green_diff_cp_4_update_0_read_bundle_read(green_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "cp_4_update_0_green_diff," << d0<< "," << d1<< "," <<  green_diff_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: red_diff
	auto red_diff_0_c__0_value = red_diff_cp_4_update_0_read_bundle_read(red_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "cp_4_update_0_red_diff," << d0<< "," << d1<< "," <<  red_diff_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = cp_4_generated_compute_unrolled_4(blue_diff_0_c__0_value, green_diff_0_c__0_value, red_diff_0_c__0_value);
	// Produce: cp_4
	cp_4.write(compute_result);

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
  *global_debug_handle << "cp_4_update_0," << (4*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "cp_4_update_0," << (4*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "cp_4_update_0," << (4*d0 + 2) << "," << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "cp_4_update_0," << (4*d0 + 3) << "," << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void cp_4_opt(HWStream<hw_uint<64> >& /* get_args num ports = 4 */raw_oc, HWStream<hw_uint<64> >& /* get_args num ports = 4 */cp_4, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("cp_4_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blue_cache blue;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  blue_bx_cache blue_bx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  blue_by_cache blue_by;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  blue_diff_cache blue_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  green_cache green;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  green_bx_cache green_bx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  green_by_cache green_by;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  green_diff_cache green_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  raw_cache raw;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  red_cache red;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  red_bx_cache red_bx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  red_by_cache red_by;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  red_diff_cache red_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // blue_bx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*5]
	    // blue_by_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*2,1*8]
	    // blue_diff_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*2,1*11]
	    // blue_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*2]
	    // cp_4_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*2,1*14]
	    // green_bx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*7]
	    // green_by_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*2,1*10]
	    // green_diff_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*2,1*13]
	    // green_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*4]
	    // raw_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // raw_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // red_bx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*6]
	    // red_by_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*2,1*9]
	    // red_diff_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*2,1*12]
	    // red_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*3]
	for (int c0 = 0; c0 <= 1083; c0++) {
	  for (int c1 = 0; c1 <= 481; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 481) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1083) && ((c0 - 0) % 1 == 0)) {
	raw_update_0(raw_oc, raw, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 481) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	blue_update_0(raw, blue, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 481) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	red_update_0(raw, red, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 481) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	green_update_0(raw, green, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	blue_bx_update_0(blue, blue_bx, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	red_bx_update_0(red, red_bx, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	green_bx_update_0(green, green_bx, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	blue_by_update_0(blue_bx, blue_by, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	red_by_update_0(red_bx, red_by, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	green_by_update_0(green_bx, green_by, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	blue_diff_update_0(blue, blue_by, blue_diff, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	red_diff_update_0(red, red_by, red_diff, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	green_diff_update_0(green, green_by, green_diff, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 481) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	cp_4_update_0(blue_diff, green_diff, red_diff, cp_4, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void cp_4_opt(HWStream<hw_uint<64> >& /* get_args num ports = 4 */raw_oc, HWStream<hw_uint<64> >& /* get_args num ports = 4 */cp_4) {

  cp_4_opt(raw_oc, cp_4, 1);
}
#ifdef __VIVADO_SYNTH__
#include "cp_4_opt.h"

const int cp_4_update_0_write_num_transfers = 518400;
const int raw_update_0_read_num_transfers = 522488;


extern "C" {

static void read_raw_update_0_read(hw_uint<64>* input, HWStream<hw_uint<64> >& v, const int size) {
  hw_uint<64> burst_reg;
  int num_transfers = raw_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_cp_4_update_0_write(hw_uint<64>* output, HWStream<hw_uint<64> >& v, const int size) {
  hw_uint<64> burst_reg;
  int num_transfers = cp_4_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void cp_4_opt_accel(hw_uint<64>* raw_update_0_read, hw_uint<64>* cp_4_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp_4_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = cp_4_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<64> > raw_update_0_read_channel;
  static HWStream<hw_uint<64> > cp_4_update_0_write_channel;

  read_raw_update_0_read(raw_update_0_read, raw_update_0_read_channel, size);

  cp_4_opt(raw_update_0_read_channel, cp_4_update_0_write_channel, size);

  write_cp_4_update_0_write(cp_4_update_0_write, cp_4_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

