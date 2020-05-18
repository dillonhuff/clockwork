#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "cp_2_opt_compute_units.h"

#include "hw_classes.h"

struct blue_blue_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 1924
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1921> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1922() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1923() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
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
	// Capacity: 1924
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1921> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1922() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1923() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
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
};



inline void blue_blue_update_0_write0_write(hw_uint<16>& blue_blue_update_0_write0, blue_cache& blue, int d0, int d1) {
  blue.blue_blue_update_0_write0_merged_banks_4.push(blue_blue_update_0_write0);
}

inline void blue_blue_update_0_write1_write(hw_uint<16>& blue_blue_update_0_write1, blue_cache& blue, int d0, int d1) {
  blue.blue_blue_update_0_write1_merged_banks_4.push(blue_blue_update_0_write1);
}

inline hw_uint<16> blue_bx_rd0_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd0 read pattern: { blue_bx_update_0[d0, d1] -> blue[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
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
  // blue_bx_rd1 read pattern: { blue_bx_update_0[d0, d1] -> blue[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  auto value_blue_blue_update_0_write1 = blue.blue_blue_update_0_write1_merged_banks_4.peek_1();
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
  // blue_bx_rd2 read pattern: { blue_bx_update_0[d0, d1] -> blue[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_0();
  return value_blue_blue_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd3_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd3 read pattern: { blue_bx_update_0[d0, d1] -> blue[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
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
  // blue_bx_rd4 read pattern: { blue_bx_update_0[d0, d1] -> blue[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_0();
  return value_blue_blue_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd5_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd5 read pattern: { blue_bx_update_0[d0, d1] -> blue[3 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_blue_update_0_write1 = blue.blue_blue_update_0_write1_merged_banks_4.peek_0();
  return value_blue_blue_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_diff_rd0_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd0 read pattern: { blue_diff_update_0[d0, d1] -> blue[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { blue_diff_update_0[d0, d1] -> 1923 : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_1923();
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
  // blue_diff_rd1 read pattern: { blue_diff_update_0[d0, d1] -> blue[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { blue_diff_update_0[d0, d1] -> 1923 : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_blue_blue_update_0_write1 = blue.blue_blue_update_0_write1_merged_banks_4.peek_1923();
  return value_blue_blue_update_0_write1;
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
inline hw_uint<96> blue_blue_bx_update_0_read_bundle_read(blue_cache& blue, int d0, int d1) {
  // # of ports in bundle: 6
    // blue_bx_rd0
    // blue_bx_rd1
    // blue_bx_rd2
    // blue_bx_rd3
    // blue_bx_rd4
    // blue_bx_rd5

	hw_uint<96> result;
	hw_uint<16> blue_bx_rd0_res = blue_bx_rd0_select(blue, d0, d1);
	set_at<0, 96>(result, blue_bx_rd0_res);
	hw_uint<16> blue_bx_rd1_res = blue_bx_rd1_select(blue, d0, d1);
	set_at<16, 96>(result, blue_bx_rd1_res);
	hw_uint<16> blue_bx_rd2_res = blue_bx_rd2_select(blue, d0, d1);
	set_at<32, 96>(result, blue_bx_rd2_res);
	hw_uint<16> blue_bx_rd3_res = blue_bx_rd3_select(blue, d0, d1);
	set_at<48, 96>(result, blue_bx_rd3_res);
	hw_uint<16> blue_bx_rd4_res = blue_bx_rd4_select(blue, d0, d1);
	set_at<64, 96>(result, blue_bx_rd4_res);
	hw_uint<16> blue_bx_rd5_res = blue_bx_rd5_select(blue, d0, d1);
	set_at<80, 96>(result, blue_bx_rd5_res);
	return result;
}

// blue_diff_update_0_read
//	blue_diff_rd0
//	blue_diff_rd1
inline hw_uint<32> blue_blue_diff_update_0_read_bundle_read(blue_cache& blue, int d0, int d1) {
  // # of ports in bundle: 2
    // blue_diff_rd0
    // blue_diff_rd1

	hw_uint<32> result;
	hw_uint<16> blue_diff_rd0_res = blue_diff_rd0_select(blue, d0, d1);
	set_at<0, 32>(result, blue_diff_rd0_res);
	hw_uint<16> blue_diff_rd1_res = blue_diff_rd1_select(blue, d0, d1);
	set_at<16, 32>(result, blue_diff_rd1_res);
	return result;
}

// blue_update_0_write
//	blue_blue_update_0_write0
//	blue_blue_update_0_write1
inline void blue_blue_update_0_write_bundle_write(hw_uint<32>& blue_update_0_write, blue_cache& blue, int d0, int d1) {
	hw_uint<16> blue_blue_update_0_write0_res = blue_update_0_write.extract<0, 15>();
	blue_blue_update_0_write0_write(blue_blue_update_0_write0_res, blue, d0, d1);
	hw_uint<16> blue_blue_update_0_write1_res = blue_update_0_write.extract<16, 31>();
	blue_blue_update_0_write1_write(blue_blue_update_0_write1_res, blue, d0, d1);
}

#include "hw_classes.h"

struct blue_bx_blue_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1918], [0, 1081]}
	// Capacity: 1921
	// # of read delays: 3
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

struct blue_bx_blue_bx_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1919], [0, 1081]}
	// Capacity: 1921
	// # of read delays: 3
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

struct blue_bx_cache {
  blue_bx_blue_bx_update_0_write0_merged_banks_3_cache blue_bx_blue_bx_update_0_write0_merged_banks_3;
  blue_bx_blue_bx_update_0_write1_merged_banks_3_cache blue_bx_blue_bx_update_0_write1_merged_banks_3;
};



inline void blue_bx_blue_bx_update_0_write0_write(hw_uint<16>& blue_bx_blue_bx_update_0_write0, blue_bx_cache& blue_bx, int d0, int d1) {
  blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.push(blue_bx_blue_bx_update_0_write0);
}

inline void blue_bx_blue_bx_update_0_write1_write(hw_uint<16>& blue_bx_blue_bx_update_0_write1, blue_bx_cache& blue_bx, int d0, int d1) {
  blue_bx.blue_bx_blue_bx_update_0_write1_merged_banks_3.push(blue_bx_blue_bx_update_0_write1);
}

inline hw_uint<16> blue_by_rd0_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd0 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 1920 : 0 < d0 <= 958 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (961 + d0) : d0 = 959 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 1920 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write0 = blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.peek_1920();
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
  // blue_by_rd1 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 960 : 0 < d0 <= 958 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (1 + d0) : d0 = 959 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write0 = blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.peek_960();
  return value_blue_bx_blue_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_by_rd2_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd2 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[2d0, 2 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
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
  // blue_by_rd3 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 1920 : 0 < d0 <= 958 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (961 + d0) : d0 = 959 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 1920 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write1 = blue_bx.blue_bx_blue_bx_update_0_write1_merged_banks_3.peek_1920();
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
  // blue_by_rd4 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[1 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { blue_by_update_0[d0, d1] -> 960 : 0 < d0 <= 958 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> (1 + d0) : d0 = 959 and 0 <= d1 <= 1079; blue_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_blue_bx_blue_bx_update_0_write1 = blue_bx.blue_bx_blue_bx_update_0_write1_merged_banks_3.peek_960();
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
  // blue_by_rd5 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[1 + 2d0, 2 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 5] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_blue_bx_blue_bx_update_0_write1 = blue_bx.blue_bx_blue_bx_update_0_write1_merged_banks_3.peek_0();
  return value_blue_bx_blue_bx_update_0_write1;
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
inline void blue_bx_blue_bx_update_0_write_bundle_write(hw_uint<32>& blue_bx_update_0_write, blue_bx_cache& blue_bx, int d0, int d1) {
	hw_uint<16> blue_bx_blue_bx_update_0_write0_res = blue_bx_update_0_write.extract<0, 15>();
	blue_bx_blue_bx_update_0_write0_write(blue_bx_blue_bx_update_0_write0_res, blue_bx, d0, d1);
	hw_uint<16> blue_bx_blue_bx_update_0_write1_res = blue_bx_update_0_write.extract<16, 31>();
	blue_bx_blue_bx_update_0_write1_write(blue_bx_blue_bx_update_0_write1_res, blue_bx, d0, d1);
}

// blue_by_update_0_read
//	blue_by_rd0
//	blue_by_rd1
//	blue_by_rd2
//	blue_by_rd3
//	blue_by_rd4
//	blue_by_rd5
inline hw_uint<96> blue_bx_blue_by_update_0_read_bundle_read(blue_bx_cache& blue_bx, int d0, int d1) {
  // # of ports in bundle: 6
    // blue_by_rd0
    // blue_by_rd1
    // blue_by_rd2
    // blue_by_rd3
    // blue_by_rd4
    // blue_by_rd5

	hw_uint<96> result;
	hw_uint<16> blue_by_rd0_res = blue_by_rd0_select(blue_bx, d0, d1);
	set_at<0, 96>(result, blue_by_rd0_res);
	hw_uint<16> blue_by_rd1_res = blue_by_rd1_select(blue_bx, d0, d1);
	set_at<16, 96>(result, blue_by_rd1_res);
	hw_uint<16> blue_by_rd2_res = blue_by_rd2_select(blue_bx, d0, d1);
	set_at<32, 96>(result, blue_by_rd2_res);
	hw_uint<16> blue_by_rd3_res = blue_by_rd3_select(blue_bx, d0, d1);
	set_at<48, 96>(result, blue_by_rd3_res);
	hw_uint<16> blue_by_rd4_res = blue_by_rd4_select(blue_bx, d0, d1);
	set_at<64, 96>(result, blue_by_rd4_res);
	hw_uint<16> blue_by_rd5_res = blue_by_rd5_select(blue_bx, d0, d1);
	set_at<80, 96>(result, blue_by_rd5_res);
	return result;
}

#include "hw_classes.h"

struct blue_by_blue_by_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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
	// RAM Box: {[1, 1919], [0, 1079]}
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
};



inline void blue_by_blue_by_update_0_write0_write(hw_uint<16>& blue_by_blue_by_update_0_write0, blue_by_cache& blue_by, int d0, int d1) {
  blue_by.blue_by_blue_by_update_0_write0_merged_banks_1.push(blue_by_blue_by_update_0_write0);
}

inline void blue_by_blue_by_update_0_write1_write(hw_uint<16>& blue_by_blue_by_update_0_write1, blue_by_cache& blue_by, int d0, int d1) {
  blue_by.blue_by_blue_by_update_0_write1_merged_banks_1.push(blue_by_blue_by_update_0_write1);
}

inline hw_uint<16> blue_diff_rd0_select(blue_by_cache& blue_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd0 read pattern: { blue_diff_update_0[d0, d1] -> blue_by[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
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
  // blue_diff_rd1 read pattern: { blue_diff_update_0[d0, d1] -> blue_by[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_by_blue_by_update_0_write1 = blue_by.blue_by_blue_by_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_by_blue_by_update_0_write1;
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
inline void blue_by_blue_by_update_0_write_bundle_write(hw_uint<32>& blue_by_update_0_write, blue_by_cache& blue_by, int d0, int d1) {
	hw_uint<16> blue_by_blue_by_update_0_write0_res = blue_by_update_0_write.extract<0, 15>();
	blue_by_blue_by_update_0_write0_write(blue_by_blue_by_update_0_write0_res, blue_by, d0, d1);
	hw_uint<16> blue_by_blue_by_update_0_write1_res = blue_by_update_0_write.extract<16, 31>();
	blue_by_blue_by_update_0_write1_write(blue_by_blue_by_update_0_write1_res, blue_by, d0, d1);
}

// blue_diff_update_0_read
//	blue_diff_rd0
//	blue_diff_rd1
inline hw_uint<32> blue_by_blue_diff_update_0_read_bundle_read(blue_by_cache& blue_by, int d0, int d1) {
  // # of ports in bundle: 2
    // blue_diff_rd0
    // blue_diff_rd1

	hw_uint<32> result;
	hw_uint<16> blue_diff_rd0_res = blue_diff_rd0_select(blue_by, d0, d1);
	set_at<0, 32>(result, blue_diff_rd0_res);
	hw_uint<16> blue_diff_rd1_res = blue_diff_rd1_select(blue_by, d0, d1);
	set_at<16, 32>(result, blue_diff_rd1_res);
	return result;
}

#include "hw_classes.h"

struct blue_diff_blue_diff_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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
	// RAM Box: {[1, 1919], [0, 1079]}
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
};



inline void blue_diff_blue_diff_update_0_write0_write(hw_uint<16>& blue_diff_blue_diff_update_0_write0, blue_diff_cache& blue_diff, int d0, int d1) {
  blue_diff.blue_diff_blue_diff_update_0_write0_merged_banks_1.push(blue_diff_blue_diff_update_0_write0);
}

inline void blue_diff_blue_diff_update_0_write1_write(hw_uint<16>& blue_diff_blue_diff_update_0_write1, blue_diff_cache& blue_diff, int d0, int d1) {
  blue_diff.blue_diff_blue_diff_update_0_write1_merged_banks_1.push(blue_diff_blue_diff_update_0_write1);
}

inline hw_uint<16> cp_2_rd0_select(blue_diff_cache& blue_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_2_rd0 read pattern: { cp_2_update_0[d0, d1] -> blue_diff[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_2_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_diff_blue_diff_update_0_write0 = blue_diff.blue_diff_blue_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_diff_blue_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_2_rd1_select(blue_diff_cache& blue_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_2_rd1 read pattern: { cp_2_update_0[d0, d1] -> blue_diff[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_2_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { blue_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 11] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blue_diff_blue_diff_update_0_write1 = blue_diff.blue_diff_blue_diff_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_diff_blue_diff_update_0_write1;
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
inline void blue_diff_blue_diff_update_0_write_bundle_write(hw_uint<32>& blue_diff_update_0_write, blue_diff_cache& blue_diff, int d0, int d1) {
	hw_uint<16> blue_diff_blue_diff_update_0_write0_res = blue_diff_update_0_write.extract<0, 15>();
	blue_diff_blue_diff_update_0_write0_write(blue_diff_blue_diff_update_0_write0_res, blue_diff, d0, d1);
	hw_uint<16> blue_diff_blue_diff_update_0_write1_res = blue_diff_update_0_write.extract<16, 31>();
	blue_diff_blue_diff_update_0_write1_write(blue_diff_blue_diff_update_0_write1_res, blue_diff, d0, d1);
}

// cp_2_update_0_read
//	cp_2_rd0
//	cp_2_rd1
inline hw_uint<32> blue_diff_cp_2_update_0_read_bundle_read(blue_diff_cache& blue_diff, int d0, int d1) {
  // # of ports in bundle: 2
    // cp_2_rd0
    // cp_2_rd1

	hw_uint<32> result;
	hw_uint<16> cp_2_rd0_res = cp_2_rd0_select(blue_diff, d0, d1);
	set_at<0, 32>(result, cp_2_rd0_res);
	hw_uint<16> cp_2_rd1_res = cp_2_rd1_select(blue_diff, d0, d1);
	set_at<16, 32>(result, cp_2_rd1_res);
	return result;
}

#include "hw_classes.h"

struct green_green_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 1924
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1921> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1922() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1923() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
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
	// Capacity: 1924
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1921> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1922() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1923() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
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
};



inline void green_green_update_0_write0_write(hw_uint<16>& green_green_update_0_write0, green_cache& green, int d0, int d1) {
  green.green_green_update_0_write0_merged_banks_4.push(green_green_update_0_write0);
}

inline void green_green_update_0_write1_write(hw_uint<16>& green_green_update_0_write1, green_cache& green, int d0, int d1) {
  green.green_green_update_0_write1_merged_banks_4.push(green_green_update_0_write1);
}

inline hw_uint<16> green_bx_rd0_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd0 read pattern: { green_bx_update_0[d0, d1] -> green[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
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
  // green_bx_rd1 read pattern: { green_bx_update_0[d0, d1] -> green[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  auto value_green_green_update_0_write1 = green.green_green_update_0_write1_merged_banks_4.peek_1();
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
  // green_bx_rd2 read pattern: { green_bx_update_0[d0, d1] -> green[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_0();
  return value_green_green_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd3_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd3 read pattern: { green_bx_update_0[d0, d1] -> green[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
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
  // green_bx_rd4 read pattern: { green_bx_update_0[d0, d1] -> green[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_0();
  return value_green_green_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd5_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd5 read pattern: { green_bx_update_0[d0, d1] -> green[3 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_green_update_0_write1 = green.green_green_update_0_write1_merged_banks_4.peek_0();
  return value_green_green_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_diff_rd0_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd0 read pattern: { green_diff_update_0[d0, d1] -> green[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { green_diff_update_0[d0, d1] -> 1923 : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_1923();
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
  // green_diff_rd1 read pattern: { green_diff_update_0[d0, d1] -> green[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { green_diff_update_0[d0, d1] -> 1923 : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_green_green_update_0_write1 = green.green_green_update_0_write1_merged_banks_4.peek_1923();
  return value_green_green_update_0_write1;
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
inline hw_uint<96> green_green_bx_update_0_read_bundle_read(green_cache& green, int d0, int d1) {
  // # of ports in bundle: 6
    // green_bx_rd0
    // green_bx_rd1
    // green_bx_rd2
    // green_bx_rd3
    // green_bx_rd4
    // green_bx_rd5

	hw_uint<96> result;
	hw_uint<16> green_bx_rd0_res = green_bx_rd0_select(green, d0, d1);
	set_at<0, 96>(result, green_bx_rd0_res);
	hw_uint<16> green_bx_rd1_res = green_bx_rd1_select(green, d0, d1);
	set_at<16, 96>(result, green_bx_rd1_res);
	hw_uint<16> green_bx_rd2_res = green_bx_rd2_select(green, d0, d1);
	set_at<32, 96>(result, green_bx_rd2_res);
	hw_uint<16> green_bx_rd3_res = green_bx_rd3_select(green, d0, d1);
	set_at<48, 96>(result, green_bx_rd3_res);
	hw_uint<16> green_bx_rd4_res = green_bx_rd4_select(green, d0, d1);
	set_at<64, 96>(result, green_bx_rd4_res);
	hw_uint<16> green_bx_rd5_res = green_bx_rd5_select(green, d0, d1);
	set_at<80, 96>(result, green_bx_rd5_res);
	return result;
}

// green_diff_update_0_read
//	green_diff_rd0
//	green_diff_rd1
inline hw_uint<32> green_green_diff_update_0_read_bundle_read(green_cache& green, int d0, int d1) {
  // # of ports in bundle: 2
    // green_diff_rd0
    // green_diff_rd1

	hw_uint<32> result;
	hw_uint<16> green_diff_rd0_res = green_diff_rd0_select(green, d0, d1);
	set_at<0, 32>(result, green_diff_rd0_res);
	hw_uint<16> green_diff_rd1_res = green_diff_rd1_select(green, d0, d1);
	set_at<16, 32>(result, green_diff_rd1_res);
	return result;
}

// green_update_0_write
//	green_green_update_0_write0
//	green_green_update_0_write1
inline void green_green_update_0_write_bundle_write(hw_uint<32>& green_update_0_write, green_cache& green, int d0, int d1) {
	hw_uint<16> green_green_update_0_write0_res = green_update_0_write.extract<0, 15>();
	green_green_update_0_write0_write(green_green_update_0_write0_res, green, d0, d1);
	hw_uint<16> green_green_update_0_write1_res = green_update_0_write.extract<16, 31>();
	green_green_update_0_write1_write(green_green_update_0_write1_res, green, d0, d1);
}

#include "hw_classes.h"

struct green_bx_green_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1918], [0, 1081]}
	// Capacity: 1921
	// # of read delays: 3
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

struct green_bx_green_bx_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1919], [0, 1081]}
	// Capacity: 1921
	// # of read delays: 3
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

struct green_bx_cache {
  green_bx_green_bx_update_0_write0_merged_banks_3_cache green_bx_green_bx_update_0_write0_merged_banks_3;
  green_bx_green_bx_update_0_write1_merged_banks_3_cache green_bx_green_bx_update_0_write1_merged_banks_3;
};



inline void green_bx_green_bx_update_0_write0_write(hw_uint<16>& green_bx_green_bx_update_0_write0, green_bx_cache& green_bx, int d0, int d1) {
  green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.push(green_bx_green_bx_update_0_write0);
}

inline void green_bx_green_bx_update_0_write1_write(hw_uint<16>& green_bx_green_bx_update_0_write1, green_bx_cache& green_bx, int d0, int d1) {
  green_bx.green_bx_green_bx_update_0_write1_merged_banks_3.push(green_bx_green_bx_update_0_write1);
}

inline hw_uint<16> green_by_rd0_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd0 read pattern: { green_by_update_0[d0, d1] -> green_bx[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 1920 : 0 < d0 <= 958 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (961 + d0) : d0 = 959 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 1920 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write0 = green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.peek_1920();
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
  // green_by_rd1 read pattern: { green_by_update_0[d0, d1] -> green_bx[2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 960 : 0 < d0 <= 958 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (1 + d0) : d0 = 959 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write0 = green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.peek_960();
  return value_green_bx_green_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_by_rd2_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd2 read pattern: { green_by_update_0[d0, d1] -> green_bx[2d0, 2 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
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
  // green_by_rd3 read pattern: { green_by_update_0[d0, d1] -> green_bx[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 1920 : 0 < d0 <= 958 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (961 + d0) : d0 = 959 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 1920 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write1 = green_bx.green_bx_green_bx_update_0_write1_merged_banks_3.peek_1920();
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
  // green_by_rd4 read pattern: { green_by_update_0[d0, d1] -> green_bx[1 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { green_by_update_0[d0, d1] -> 960 : 0 < d0 <= 958 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> (1 + d0) : d0 = 959 and 0 <= d1 <= 1079; green_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_green_bx_green_bx_update_0_write1 = green_bx.green_bx_green_bx_update_0_write1_merged_banks_3.peek_960();
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
  // green_by_rd5 read pattern: { green_by_update_0[d0, d1] -> green_bx[1 + 2d0, 2 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_green_bx_green_bx_update_0_write1 = green_bx.green_bx_green_bx_update_0_write1_merged_banks_3.peek_0();
  return value_green_bx_green_bx_update_0_write1;
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
inline void green_bx_green_bx_update_0_write_bundle_write(hw_uint<32>& green_bx_update_0_write, green_bx_cache& green_bx, int d0, int d1) {
	hw_uint<16> green_bx_green_bx_update_0_write0_res = green_bx_update_0_write.extract<0, 15>();
	green_bx_green_bx_update_0_write0_write(green_bx_green_bx_update_0_write0_res, green_bx, d0, d1);
	hw_uint<16> green_bx_green_bx_update_0_write1_res = green_bx_update_0_write.extract<16, 31>();
	green_bx_green_bx_update_0_write1_write(green_bx_green_bx_update_0_write1_res, green_bx, d0, d1);
}

// green_by_update_0_read
//	green_by_rd0
//	green_by_rd1
//	green_by_rd2
//	green_by_rd3
//	green_by_rd4
//	green_by_rd5
inline hw_uint<96> green_bx_green_by_update_0_read_bundle_read(green_bx_cache& green_bx, int d0, int d1) {
  // # of ports in bundle: 6
    // green_by_rd0
    // green_by_rd1
    // green_by_rd2
    // green_by_rd3
    // green_by_rd4
    // green_by_rd5

	hw_uint<96> result;
	hw_uint<16> green_by_rd0_res = green_by_rd0_select(green_bx, d0, d1);
	set_at<0, 96>(result, green_by_rd0_res);
	hw_uint<16> green_by_rd1_res = green_by_rd1_select(green_bx, d0, d1);
	set_at<16, 96>(result, green_by_rd1_res);
	hw_uint<16> green_by_rd2_res = green_by_rd2_select(green_bx, d0, d1);
	set_at<32, 96>(result, green_by_rd2_res);
	hw_uint<16> green_by_rd3_res = green_by_rd3_select(green_bx, d0, d1);
	set_at<48, 96>(result, green_by_rd3_res);
	hw_uint<16> green_by_rd4_res = green_by_rd4_select(green_bx, d0, d1);
	set_at<64, 96>(result, green_by_rd4_res);
	hw_uint<16> green_by_rd5_res = green_by_rd5_select(green_bx, d0, d1);
	set_at<80, 96>(result, green_by_rd5_res);
	return result;
}

#include "hw_classes.h"

struct green_by_green_by_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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
	// RAM Box: {[1, 1919], [0, 1079]}
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
};



inline void green_by_green_by_update_0_write0_write(hw_uint<16>& green_by_green_by_update_0_write0, green_by_cache& green_by, int d0, int d1) {
  green_by.green_by_green_by_update_0_write0_merged_banks_1.push(green_by_green_by_update_0_write0);
}

inline void green_by_green_by_update_0_write1_write(hw_uint<16>& green_by_green_by_update_0_write1, green_by_cache& green_by, int d0, int d1) {
  green_by.green_by_green_by_update_0_write1_merged_banks_1.push(green_by_green_by_update_0_write1);
}

inline hw_uint<16> green_diff_rd0_select(green_by_cache& green_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd0 read pattern: { green_diff_update_0[d0, d1] -> green_by[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
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
  // green_diff_rd1 read pattern: { green_diff_update_0[d0, d1] -> green_by[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_by_green_by_update_0_write1 = green_by.green_by_green_by_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_by_green_by_update_0_write1;
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
inline void green_by_green_by_update_0_write_bundle_write(hw_uint<32>& green_by_update_0_write, green_by_cache& green_by, int d0, int d1) {
	hw_uint<16> green_by_green_by_update_0_write0_res = green_by_update_0_write.extract<0, 15>();
	green_by_green_by_update_0_write0_write(green_by_green_by_update_0_write0_res, green_by, d0, d1);
	hw_uint<16> green_by_green_by_update_0_write1_res = green_by_update_0_write.extract<16, 31>();
	green_by_green_by_update_0_write1_write(green_by_green_by_update_0_write1_res, green_by, d0, d1);
}

// green_diff_update_0_read
//	green_diff_rd0
//	green_diff_rd1
inline hw_uint<32> green_by_green_diff_update_0_read_bundle_read(green_by_cache& green_by, int d0, int d1) {
  // # of ports in bundle: 2
    // green_diff_rd0
    // green_diff_rd1

	hw_uint<32> result;
	hw_uint<16> green_diff_rd0_res = green_diff_rd0_select(green_by, d0, d1);
	set_at<0, 32>(result, green_diff_rd0_res);
	hw_uint<16> green_diff_rd1_res = green_diff_rd1_select(green_by, d0, d1);
	set_at<16, 32>(result, green_diff_rd1_res);
	return result;
}

#include "hw_classes.h"

struct green_diff_green_diff_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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
	// RAM Box: {[1, 1919], [0, 1079]}
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
};



inline void green_diff_green_diff_update_0_write0_write(hw_uint<16>& green_diff_green_diff_update_0_write0, green_diff_cache& green_diff, int d0, int d1) {
  green_diff.green_diff_green_diff_update_0_write0_merged_banks_1.push(green_diff_green_diff_update_0_write0);
}

inline void green_diff_green_diff_update_0_write1_write(hw_uint<16>& green_diff_green_diff_update_0_write1, green_diff_cache& green_diff, int d0, int d1) {
  green_diff.green_diff_green_diff_update_0_write1_merged_banks_1.push(green_diff_green_diff_update_0_write1);
}

inline hw_uint<16> cp_2_rd0_select(green_diff_cache& green_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_2_rd0 read pattern: { cp_2_update_0[d0, d1] -> green_diff[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_2_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_diff_green_diff_update_0_write0 = green_diff.green_diff_green_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_diff_green_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_2_rd1_select(green_diff_cache& green_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_2_rd1 read pattern: { cp_2_update_0[d0, d1] -> green_diff[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_2_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { green_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 13] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_green_diff_green_diff_update_0_write1 = green_diff.green_diff_green_diff_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_diff_green_diff_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// cp_2_update_0_read
//	cp_2_rd0
//	cp_2_rd1
inline hw_uint<32> green_diff_cp_2_update_0_read_bundle_read(green_diff_cache& green_diff, int d0, int d1) {
  // # of ports in bundle: 2
    // cp_2_rd0
    // cp_2_rd1

	hw_uint<32> result;
	hw_uint<16> cp_2_rd0_res = cp_2_rd0_select(green_diff, d0, d1);
	set_at<0, 32>(result, cp_2_rd0_res);
	hw_uint<16> cp_2_rd1_res = cp_2_rd1_select(green_diff, d0, d1);
	set_at<16, 32>(result, cp_2_rd1_res);
	return result;
}

// green_diff_update_0_write
//	green_diff_green_diff_update_0_write0
//	green_diff_green_diff_update_0_write1
inline void green_diff_green_diff_update_0_write_bundle_write(hw_uint<32>& green_diff_update_0_write, green_diff_cache& green_diff, int d0, int d1) {
	hw_uint<16> green_diff_green_diff_update_0_write0_res = green_diff_update_0_write.extract<0, 15>();
	green_diff_green_diff_update_0_write0_write(green_diff_green_diff_update_0_write0_res, green_diff, d0, d1);
	hw_uint<16> green_diff_green_diff_update_0_write1_res = green_diff_update_0_write.extract<16, 31>();
	green_diff_green_diff_update_0_write1_write(green_diff_green_diff_update_0_write1_res, green_diff, d0, d1);
}

#include "hw_classes.h"

struct raw_raw_update_0_write0_merged_banks_27_cache {
	// RAM Box: {[0, 1922], [0, 1083]}
	// Capacity: 1926
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 960> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 960> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_962() {
		return f4;
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_1923() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1924() {
		return f8;
	}

	inline hw_uint<16> peek_1925() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 960
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct raw_raw_update_0_write1_merged_banks_27_cache {
	// RAM Box: {[1, 1923], [0, 1083]}
	// Capacity: 1926
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 960> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 960> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_962() {
		return f4;
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_1923() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1924() {
		return f8;
	}

	inline hw_uint<16> peek_1925() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 960
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct raw_cache {
  raw_raw_update_0_write0_merged_banks_27_cache raw_raw_update_0_write0_merged_banks_27;
  raw_raw_update_0_write1_merged_banks_27_cache raw_raw_update_0_write1_merged_banks_27;
};



inline void raw_raw_update_0_write0_write(hw_uint<16>& raw_raw_update_0_write0, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write0_merged_banks_27.push(raw_raw_update_0_write0);
}

inline void raw_raw_update_0_write1_write(hw_uint<16>& raw_raw_update_0_write1, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write1_merged_banks_27.push(raw_raw_update_0_write1);
}

inline hw_uint<16> blue_rd0_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd0 read pattern: { blue_update_0[d0, d1] -> raw[2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1925 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1925();
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
  // blue_rd1 read pattern: { blue_update_0[d0, d1] -> raw[2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 963 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_963();
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
  // blue_rd10 read pattern: { blue_update_0[d0, d1] -> raw[1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 963 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_963();
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
  // blue_rd11 read pattern: { blue_update_0[d0, d1] -> raw[1 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
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
  // blue_rd12 read pattern: { blue_update_0[d0, d1] -> raw[2 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1924 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (964 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1924();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd13_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd13 read pattern: { blue_update_0[d0, d1] -> raw[2 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 962 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (2 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_962();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd14_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd14 read pattern: { blue_update_0[d0, d1] -> raw[2 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd15_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd15 read pattern: { blue_update_0[d0, d1] -> raw[3 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1924 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (964 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1924();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd16_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd16 read pattern: { blue_update_0[d0, d1] -> raw[3 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 962 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (2 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_962();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd17_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd17 read pattern: { blue_update_0[d0, d1] -> raw[3 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd2 read pattern: { blue_update_0[d0, d1] -> raw[2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd3_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd3 read pattern: { blue_update_0[d0, d1] -> raw[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1925 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1925();
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
  // blue_rd4 read pattern: { blue_update_0[d0, d1] -> raw[1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 963 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_963();
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
  // blue_rd5 read pattern: { blue_update_0[d0, d1] -> raw[1 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
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
  // blue_rd6 read pattern: { blue_update_0[d0, d1] -> raw[2 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1924 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (964 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1924();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd7_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd7 read pattern: { blue_update_0[d0, d1] -> raw[2 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 962 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; blue_update_0[d0, d1] -> (2 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_962();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd8_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd8 read pattern: { blue_update_0[d0, d1] -> raw[2 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd9_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd9 read pattern: { blue_update_0[d0, d1] -> raw[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { blue_update_0[d0, d1] -> 1925 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1925();
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
  // green_rd0 read pattern: { green_update_0[d0, d1] -> raw[2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1925 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1925();
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
  // green_rd1 read pattern: { green_update_0[d0, d1] -> raw[2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 963 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_963();
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
  // green_rd10 read pattern: { green_update_0[d0, d1] -> raw[1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 963 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_963();
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
  // green_rd11 read pattern: { green_update_0[d0, d1] -> raw[1 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
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
  // green_rd12 read pattern: { green_update_0[d0, d1] -> raw[2 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1924 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (964 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1924();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd13_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd13 read pattern: { green_update_0[d0, d1] -> raw[2 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 962 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (2 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_962();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd14_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd14 read pattern: { green_update_0[d0, d1] -> raw[2 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd15_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd15 read pattern: { green_update_0[d0, d1] -> raw[3 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1924 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (964 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1924();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd16_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd16 read pattern: { green_update_0[d0, d1] -> raw[3 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 962 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (2 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_962();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd17_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd17 read pattern: { green_update_0[d0, d1] -> raw[3 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd2 read pattern: { green_update_0[d0, d1] -> raw[2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd3_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd3 read pattern: { green_update_0[d0, d1] -> raw[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1925 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1925();
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
  // green_rd4 read pattern: { green_update_0[d0, d1] -> raw[1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 963 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_963();
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
  // green_rd5 read pattern: { green_update_0[d0, d1] -> raw[1 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
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
  // green_rd6 read pattern: { green_update_0[d0, d1] -> raw[2 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1924 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (964 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1924();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd7_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd7 read pattern: { green_update_0[d0, d1] -> raw[2 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 962 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; green_update_0[d0, d1] -> (2 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_962();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd8_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd8 read pattern: { green_update_0[d0, d1] -> raw[2 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd9_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd9 read pattern: { green_update_0[d0, d1] -> raw[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 1 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { green_update_0[d0, d1] -> 1925 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1925();
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
  // red_rd0 read pattern: { red_update_0[d0, d1] -> raw[2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1925 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1925();
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
  // red_rd1 read pattern: { red_update_0[d0, d1] -> raw[2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 963 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_963();
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
  // red_rd10 read pattern: { red_update_0[d0, d1] -> raw[1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 963 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_963();
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
  // red_rd11 read pattern: { red_update_0[d0, d1] -> raw[1 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
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
  // red_rd12 read pattern: { red_update_0[d0, d1] -> raw[2 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1924 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (964 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1924();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd13_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd13 read pattern: { red_update_0[d0, d1] -> raw[2 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 962 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (2 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_962();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd14_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd14 read pattern: { red_update_0[d0, d1] -> raw[2 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd15_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd15 read pattern: { red_update_0[d0, d1] -> raw[3 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1924 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (964 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1924();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd16_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd16 read pattern: { red_update_0[d0, d1] -> raw[3 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 962 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (2 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_962();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd17_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd17 read pattern: { red_update_0[d0, d1] -> raw[3 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd2 read pattern: { red_update_0[d0, d1] -> raw[2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd3_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd3 read pattern: { red_update_0[d0, d1] -> raw[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1925 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1925();
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
  // red_rd4 read pattern: { red_update_0[d0, d1] -> raw[1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 963 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_963();
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
  // red_rd5 read pattern: { red_update_0[d0, d1] -> raw[1 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
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
  // red_rd6 read pattern: { red_update_0[d0, d1] -> raw[2 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1924 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (964 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1924();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd7_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd7 read pattern: { red_update_0[d0, d1] -> raw[2 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 962 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; red_update_0[d0, d1] -> (2 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_962();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd8_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd8 read pattern: { red_update_0[d0, d1] -> raw[2 + 2d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd9_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd9 read pattern: { red_update_0[d0, d1] -> raw[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 961 and 0 <= d1 <= 1083 }
  // DD fold: { red_update_0[d0, d1] -> 1925 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_27.peek_1925();
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
inline hw_uint<288> raw_blue_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 18
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

	hw_uint<288> result;
	hw_uint<16> blue_rd0_res = blue_rd0_select(raw, d0, d1);
	set_at<0, 288>(result, blue_rd0_res);
	hw_uint<16> blue_rd1_res = blue_rd1_select(raw, d0, d1);
	set_at<16, 288>(result, blue_rd1_res);
	hw_uint<16> blue_rd2_res = blue_rd2_select(raw, d0, d1);
	set_at<32, 288>(result, blue_rd2_res);
	hw_uint<16> blue_rd3_res = blue_rd3_select(raw, d0, d1);
	set_at<48, 288>(result, blue_rd3_res);
	hw_uint<16> blue_rd4_res = blue_rd4_select(raw, d0, d1);
	set_at<64, 288>(result, blue_rd4_res);
	hw_uint<16> blue_rd5_res = blue_rd5_select(raw, d0, d1);
	set_at<80, 288>(result, blue_rd5_res);
	hw_uint<16> blue_rd6_res = blue_rd6_select(raw, d0, d1);
	set_at<96, 288>(result, blue_rd6_res);
	hw_uint<16> blue_rd7_res = blue_rd7_select(raw, d0, d1);
	set_at<112, 288>(result, blue_rd7_res);
	hw_uint<16> blue_rd8_res = blue_rd8_select(raw, d0, d1);
	set_at<128, 288>(result, blue_rd8_res);
	hw_uint<16> blue_rd9_res = blue_rd9_select(raw, d0, d1);
	set_at<144, 288>(result, blue_rd9_res);
	hw_uint<16> blue_rd10_res = blue_rd10_select(raw, d0, d1);
	set_at<160, 288>(result, blue_rd10_res);
	hw_uint<16> blue_rd11_res = blue_rd11_select(raw, d0, d1);
	set_at<176, 288>(result, blue_rd11_res);
	hw_uint<16> blue_rd12_res = blue_rd12_select(raw, d0, d1);
	set_at<192, 288>(result, blue_rd12_res);
	hw_uint<16> blue_rd13_res = blue_rd13_select(raw, d0, d1);
	set_at<208, 288>(result, blue_rd13_res);
	hw_uint<16> blue_rd14_res = blue_rd14_select(raw, d0, d1);
	set_at<224, 288>(result, blue_rd14_res);
	hw_uint<16> blue_rd15_res = blue_rd15_select(raw, d0, d1);
	set_at<240, 288>(result, blue_rd15_res);
	hw_uint<16> blue_rd16_res = blue_rd16_select(raw, d0, d1);
	set_at<256, 288>(result, blue_rd16_res);
	hw_uint<16> blue_rd17_res = blue_rd17_select(raw, d0, d1);
	set_at<272, 288>(result, blue_rd17_res);
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
inline hw_uint<288> raw_green_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 18
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

	hw_uint<288> result;
	hw_uint<16> green_rd0_res = green_rd0_select(raw, d0, d1);
	set_at<0, 288>(result, green_rd0_res);
	hw_uint<16> green_rd1_res = green_rd1_select(raw, d0, d1);
	set_at<16, 288>(result, green_rd1_res);
	hw_uint<16> green_rd2_res = green_rd2_select(raw, d0, d1);
	set_at<32, 288>(result, green_rd2_res);
	hw_uint<16> green_rd3_res = green_rd3_select(raw, d0, d1);
	set_at<48, 288>(result, green_rd3_res);
	hw_uint<16> green_rd4_res = green_rd4_select(raw, d0, d1);
	set_at<64, 288>(result, green_rd4_res);
	hw_uint<16> green_rd5_res = green_rd5_select(raw, d0, d1);
	set_at<80, 288>(result, green_rd5_res);
	hw_uint<16> green_rd6_res = green_rd6_select(raw, d0, d1);
	set_at<96, 288>(result, green_rd6_res);
	hw_uint<16> green_rd7_res = green_rd7_select(raw, d0, d1);
	set_at<112, 288>(result, green_rd7_res);
	hw_uint<16> green_rd8_res = green_rd8_select(raw, d0, d1);
	set_at<128, 288>(result, green_rd8_res);
	hw_uint<16> green_rd9_res = green_rd9_select(raw, d0, d1);
	set_at<144, 288>(result, green_rd9_res);
	hw_uint<16> green_rd10_res = green_rd10_select(raw, d0, d1);
	set_at<160, 288>(result, green_rd10_res);
	hw_uint<16> green_rd11_res = green_rd11_select(raw, d0, d1);
	set_at<176, 288>(result, green_rd11_res);
	hw_uint<16> green_rd12_res = green_rd12_select(raw, d0, d1);
	set_at<192, 288>(result, green_rd12_res);
	hw_uint<16> green_rd13_res = green_rd13_select(raw, d0, d1);
	set_at<208, 288>(result, green_rd13_res);
	hw_uint<16> green_rd14_res = green_rd14_select(raw, d0, d1);
	set_at<224, 288>(result, green_rd14_res);
	hw_uint<16> green_rd15_res = green_rd15_select(raw, d0, d1);
	set_at<240, 288>(result, green_rd15_res);
	hw_uint<16> green_rd16_res = green_rd16_select(raw, d0, d1);
	set_at<256, 288>(result, green_rd16_res);
	hw_uint<16> green_rd17_res = green_rd17_select(raw, d0, d1);
	set_at<272, 288>(result, green_rd17_res);
	return result;
}

// raw_update_0_write
//	raw_raw_update_0_write0
//	raw_raw_update_0_write1
inline void raw_raw_update_0_write_bundle_write(hw_uint<32>& raw_update_0_write, raw_cache& raw, int d0, int d1) {
	hw_uint<16> raw_raw_update_0_write0_res = raw_update_0_write.extract<0, 15>();
	raw_raw_update_0_write0_write(raw_raw_update_0_write0_res, raw, d0, d1);
	hw_uint<16> raw_raw_update_0_write1_res = raw_update_0_write.extract<16, 31>();
	raw_raw_update_0_write1_write(raw_raw_update_0_write1_res, raw, d0, d1);
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
inline hw_uint<288> raw_red_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 18
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

	hw_uint<288> result;
	hw_uint<16> red_rd0_res = red_rd0_select(raw, d0, d1);
	set_at<0, 288>(result, red_rd0_res);
	hw_uint<16> red_rd1_res = red_rd1_select(raw, d0, d1);
	set_at<16, 288>(result, red_rd1_res);
	hw_uint<16> red_rd2_res = red_rd2_select(raw, d0, d1);
	set_at<32, 288>(result, red_rd2_res);
	hw_uint<16> red_rd3_res = red_rd3_select(raw, d0, d1);
	set_at<48, 288>(result, red_rd3_res);
	hw_uint<16> red_rd4_res = red_rd4_select(raw, d0, d1);
	set_at<64, 288>(result, red_rd4_res);
	hw_uint<16> red_rd5_res = red_rd5_select(raw, d0, d1);
	set_at<80, 288>(result, red_rd5_res);
	hw_uint<16> red_rd6_res = red_rd6_select(raw, d0, d1);
	set_at<96, 288>(result, red_rd6_res);
	hw_uint<16> red_rd7_res = red_rd7_select(raw, d0, d1);
	set_at<112, 288>(result, red_rd7_res);
	hw_uint<16> red_rd8_res = red_rd8_select(raw, d0, d1);
	set_at<128, 288>(result, red_rd8_res);
	hw_uint<16> red_rd9_res = red_rd9_select(raw, d0, d1);
	set_at<144, 288>(result, red_rd9_res);
	hw_uint<16> red_rd10_res = red_rd10_select(raw, d0, d1);
	set_at<160, 288>(result, red_rd10_res);
	hw_uint<16> red_rd11_res = red_rd11_select(raw, d0, d1);
	set_at<176, 288>(result, red_rd11_res);
	hw_uint<16> red_rd12_res = red_rd12_select(raw, d0, d1);
	set_at<192, 288>(result, red_rd12_res);
	hw_uint<16> red_rd13_res = red_rd13_select(raw, d0, d1);
	set_at<208, 288>(result, red_rd13_res);
	hw_uint<16> red_rd14_res = red_rd14_select(raw, d0, d1);
	set_at<224, 288>(result, red_rd14_res);
	hw_uint<16> red_rd15_res = red_rd15_select(raw, d0, d1);
	set_at<240, 288>(result, red_rd15_res);
	hw_uint<16> red_rd16_res = red_rd16_select(raw, d0, d1);
	set_at<256, 288>(result, red_rd16_res);
	hw_uint<16> red_rd17_res = red_rd17_select(raw, d0, d1);
	set_at<272, 288>(result, red_rd17_res);
	return result;
}

#include "hw_classes.h"

struct red_red_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 1924
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1921> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1922() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1923() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
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
	// Capacity: 1924
	// # of read delays: 3
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1921> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1922() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1923() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
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
};



inline void red_red_update_0_write0_write(hw_uint<16>& red_red_update_0_write0, red_cache& red, int d0, int d1) {
  red.red_red_update_0_write0_merged_banks_4.push(red_red_update_0_write0);
}

inline void red_red_update_0_write1_write(hw_uint<16>& red_red_update_0_write1, red_cache& red, int d0, int d1) {
  red.red_red_update_0_write1_merged_banks_4.push(red_red_update_0_write1);
}

inline hw_uint<16> red_bx_rd0_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd0 read pattern: { red_bx_update_0[d0, d1] -> red[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
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
  // red_bx_rd1 read pattern: { red_bx_update_0[d0, d1] -> red[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  auto value_red_red_update_0_write1 = red.red_red_update_0_write1_merged_banks_4.peek_1();
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
  // red_bx_rd2 read pattern: { red_bx_update_0[d0, d1] -> red[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_0();
  return value_red_red_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd3_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd3 read pattern: { red_bx_update_0[d0, d1] -> red[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
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
  // red_bx_rd4 read pattern: { red_bx_update_0[d0, d1] -> red[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_0();
  return value_red_red_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd5_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd5 read pattern: { red_bx_update_0[d0, d1] -> red[3 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_red_update_0_write1 = red.red_red_update_0_write1_merged_banks_4.peek_0();
  return value_red_red_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_diff_rd0_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd0 read pattern: { red_diff_update_0[d0, d1] -> red[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { red_diff_update_0[d0, d1] -> 1923 : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_1923();
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
  // red_diff_rd1 read pattern: { red_diff_update_0[d0, d1] -> red[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { red_diff_update_0[d0, d1] -> 1923 : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_red_red_update_0_write1 = red.red_red_update_0_write1_merged_banks_4.peek_1923();
  return value_red_red_update_0_write1;
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
inline hw_uint<96> red_red_bx_update_0_read_bundle_read(red_cache& red, int d0, int d1) {
  // # of ports in bundle: 6
    // red_bx_rd0
    // red_bx_rd1
    // red_bx_rd2
    // red_bx_rd3
    // red_bx_rd4
    // red_bx_rd5

	hw_uint<96> result;
	hw_uint<16> red_bx_rd0_res = red_bx_rd0_select(red, d0, d1);
	set_at<0, 96>(result, red_bx_rd0_res);
	hw_uint<16> red_bx_rd1_res = red_bx_rd1_select(red, d0, d1);
	set_at<16, 96>(result, red_bx_rd1_res);
	hw_uint<16> red_bx_rd2_res = red_bx_rd2_select(red, d0, d1);
	set_at<32, 96>(result, red_bx_rd2_res);
	hw_uint<16> red_bx_rd3_res = red_bx_rd3_select(red, d0, d1);
	set_at<48, 96>(result, red_bx_rd3_res);
	hw_uint<16> red_bx_rd4_res = red_bx_rd4_select(red, d0, d1);
	set_at<64, 96>(result, red_bx_rd4_res);
	hw_uint<16> red_bx_rd5_res = red_bx_rd5_select(red, d0, d1);
	set_at<80, 96>(result, red_bx_rd5_res);
	return result;
}

// red_diff_update_0_read
//	red_diff_rd0
//	red_diff_rd1
inline hw_uint<32> red_red_diff_update_0_read_bundle_read(red_cache& red, int d0, int d1) {
  // # of ports in bundle: 2
    // red_diff_rd0
    // red_diff_rd1

	hw_uint<32> result;
	hw_uint<16> red_diff_rd0_res = red_diff_rd0_select(red, d0, d1);
	set_at<0, 32>(result, red_diff_rd0_res);
	hw_uint<16> red_diff_rd1_res = red_diff_rd1_select(red, d0, d1);
	set_at<16, 32>(result, red_diff_rd1_res);
	return result;
}

// red_update_0_write
//	red_red_update_0_write0
//	red_red_update_0_write1
inline void red_red_update_0_write_bundle_write(hw_uint<32>& red_update_0_write, red_cache& red, int d0, int d1) {
	hw_uint<16> red_red_update_0_write0_res = red_update_0_write.extract<0, 15>();
	red_red_update_0_write0_write(red_red_update_0_write0_res, red, d0, d1);
	hw_uint<16> red_red_update_0_write1_res = red_update_0_write.extract<16, 31>();
	red_red_update_0_write1_write(red_red_update_0_write1_res, red, d0, d1);
}

#include "hw_classes.h"

struct red_bx_red_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1918], [0, 1081]}
	// Capacity: 1921
	// # of read delays: 3
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

struct red_bx_red_bx_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1919], [0, 1081]}
	// Capacity: 1921
	// # of read delays: 3
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

struct red_bx_cache {
  red_bx_red_bx_update_0_write0_merged_banks_3_cache red_bx_red_bx_update_0_write0_merged_banks_3;
  red_bx_red_bx_update_0_write1_merged_banks_3_cache red_bx_red_bx_update_0_write1_merged_banks_3;
};



inline void red_bx_red_bx_update_0_write0_write(hw_uint<16>& red_bx_red_bx_update_0_write0, red_bx_cache& red_bx, int d0, int d1) {
  red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.push(red_bx_red_bx_update_0_write0);
}

inline void red_bx_red_bx_update_0_write1_write(hw_uint<16>& red_bx_red_bx_update_0_write1, red_bx_cache& red_bx, int d0, int d1) {
  red_bx.red_bx_red_bx_update_0_write1_merged_banks_3.push(red_bx_red_bx_update_0_write1);
}

inline hw_uint<16> red_by_rd0_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd0 read pattern: { red_by_update_0[d0, d1] -> red_bx[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 1920 : 0 < d0 <= 958 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (961 + d0) : d0 = 959 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 1920 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write0 = red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.peek_1920();
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
  // red_by_rd1 read pattern: { red_by_update_0[d0, d1] -> red_bx[2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 960 : 0 < d0 <= 958 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (1 + d0) : d0 = 959 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write0 = red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.peek_960();
  return value_red_bx_red_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_by_rd2_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd2 read pattern: { red_by_update_0[d0, d1] -> red_bx[2d0, 2 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
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
  // red_by_rd3 read pattern: { red_by_update_0[d0, d1] -> red_bx[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 1920 : 0 < d0 <= 958 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (961 + d0) : d0 = 959 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 1920 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write1 = red_bx.red_bx_red_bx_update_0_write1_merged_banks_3.peek_1920();
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
  // red_by_rd4 read pattern: { red_by_update_0[d0, d1] -> red_bx[1 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { red_by_update_0[d0, d1] -> 960 : 0 < d0 <= 958 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> (1 + d0) : d0 = 959 and 0 <= d1 <= 1079; red_by_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_red_bx_red_bx_update_0_write1 = red_bx.red_bx_red_bx_update_0_write1_merged_banks_3.peek_960();
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
  // red_by_rd5 read pattern: { red_by_update_0[d0, d1] -> red_bx[1 + 2d0, 2 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 2 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_red_bx_red_bx_update_0_write1 = red_bx.red_bx_red_bx_update_0_write1_merged_banks_3.peek_0();
  return value_red_bx_red_bx_update_0_write1;
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
inline void red_bx_red_bx_update_0_write_bundle_write(hw_uint<32>& red_bx_update_0_write, red_bx_cache& red_bx, int d0, int d1) {
	hw_uint<16> red_bx_red_bx_update_0_write0_res = red_bx_update_0_write.extract<0, 15>();
	red_bx_red_bx_update_0_write0_write(red_bx_red_bx_update_0_write0_res, red_bx, d0, d1);
	hw_uint<16> red_bx_red_bx_update_0_write1_res = red_bx_update_0_write.extract<16, 31>();
	red_bx_red_bx_update_0_write1_write(red_bx_red_bx_update_0_write1_res, red_bx, d0, d1);
}

// red_by_update_0_read
//	red_by_rd0
//	red_by_rd1
//	red_by_rd2
//	red_by_rd3
//	red_by_rd4
//	red_by_rd5
inline hw_uint<96> red_bx_red_by_update_0_read_bundle_read(red_bx_cache& red_bx, int d0, int d1) {
  // # of ports in bundle: 6
    // red_by_rd0
    // red_by_rd1
    // red_by_rd2
    // red_by_rd3
    // red_by_rd4
    // red_by_rd5

	hw_uint<96> result;
	hw_uint<16> red_by_rd0_res = red_by_rd0_select(red_bx, d0, d1);
	set_at<0, 96>(result, red_by_rd0_res);
	hw_uint<16> red_by_rd1_res = red_by_rd1_select(red_bx, d0, d1);
	set_at<16, 96>(result, red_by_rd1_res);
	hw_uint<16> red_by_rd2_res = red_by_rd2_select(red_bx, d0, d1);
	set_at<32, 96>(result, red_by_rd2_res);
	hw_uint<16> red_by_rd3_res = red_by_rd3_select(red_bx, d0, d1);
	set_at<48, 96>(result, red_by_rd3_res);
	hw_uint<16> red_by_rd4_res = red_by_rd4_select(red_bx, d0, d1);
	set_at<64, 96>(result, red_by_rd4_res);
	hw_uint<16> red_by_rd5_res = red_by_rd5_select(red_bx, d0, d1);
	set_at<80, 96>(result, red_by_rd5_res);
	return result;
}

#include "hw_classes.h"

struct red_by_red_by_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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
	// RAM Box: {[1, 1919], [0, 1079]}
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
};



inline void red_by_red_by_update_0_write0_write(hw_uint<16>& red_by_red_by_update_0_write0, red_by_cache& red_by, int d0, int d1) {
  red_by.red_by_red_by_update_0_write0_merged_banks_1.push(red_by_red_by_update_0_write0);
}

inline void red_by_red_by_update_0_write1_write(hw_uint<16>& red_by_red_by_update_0_write1, red_by_cache& red_by, int d0, int d1) {
  red_by.red_by_red_by_update_0_write1_merged_banks_1.push(red_by_red_by_update_0_write1);
}

inline hw_uint<16> red_diff_rd0_select(red_by_cache& red_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd0 read pattern: { red_diff_update_0[d0, d1] -> red_by[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
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
  // red_diff_rd1 read pattern: { red_diff_update_0[d0, d1] -> red_by[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_by_update_0[d0, d1] -> [4 + d1, 2 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_by_red_by_update_0_write1 = red_by.red_by_red_by_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_by_red_by_update_0_write1;
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
inline void red_by_red_by_update_0_write_bundle_write(hw_uint<32>& red_by_update_0_write, red_by_cache& red_by, int d0, int d1) {
	hw_uint<16> red_by_red_by_update_0_write0_res = red_by_update_0_write.extract<0, 15>();
	red_by_red_by_update_0_write0_write(red_by_red_by_update_0_write0_res, red_by, d0, d1);
	hw_uint<16> red_by_red_by_update_0_write1_res = red_by_update_0_write.extract<16, 31>();
	red_by_red_by_update_0_write1_write(red_by_red_by_update_0_write1_res, red_by, d0, d1);
}

// red_diff_update_0_read
//	red_diff_rd0
//	red_diff_rd1
inline hw_uint<32> red_by_red_diff_update_0_read_bundle_read(red_by_cache& red_by, int d0, int d1) {
  // # of ports in bundle: 2
    // red_diff_rd0
    // red_diff_rd1

	hw_uint<32> result;
	hw_uint<16> red_diff_rd0_res = red_diff_rd0_select(red_by, d0, d1);
	set_at<0, 32>(result, red_diff_rd0_res);
	hw_uint<16> red_diff_rd1_res = red_diff_rd1_select(red_by, d0, d1);
	set_at<16, 32>(result, red_diff_rd1_res);
	return result;
}

#include "hw_classes.h"

struct red_diff_red_diff_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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
	// RAM Box: {[1, 1919], [0, 1079]}
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
};



inline void red_diff_red_diff_update_0_write0_write(hw_uint<16>& red_diff_red_diff_update_0_write0, red_diff_cache& red_diff, int d0, int d1) {
  red_diff.red_diff_red_diff_update_0_write0_merged_banks_1.push(red_diff_red_diff_update_0_write0);
}

inline void red_diff_red_diff_update_0_write1_write(hw_uint<16>& red_diff_red_diff_update_0_write1, red_diff_cache& red_diff, int d0, int d1) {
  red_diff.red_diff_red_diff_update_0_write1_merged_banks_1.push(red_diff_red_diff_update_0_write1);
}

inline hw_uint<16> cp_2_rd0_select(red_diff_cache& red_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_2_rd0 read pattern: { cp_2_update_0[d0, d1] -> red_diff[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_2_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_diff_red_diff_update_0_write0 = red_diff.red_diff_red_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_diff_red_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_2_rd1_select(red_diff_cache& red_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_2_rd1 read pattern: { cp_2_update_0[d0, d1] -> red_diff[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_2_update_0[d0, d1] -> [4 + d1, 2 + d0, 14] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { red_diff_update_0[d0, d1] -> [4 + d1, 2 + d0, 12] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_red_diff_red_diff_update_0_write1 = red_diff.red_diff_red_diff_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_diff_red_diff_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// cp_2_update_0_read
//	cp_2_rd0
//	cp_2_rd1
inline hw_uint<32> red_diff_cp_2_update_0_read_bundle_read(red_diff_cache& red_diff, int d0, int d1) {
  // # of ports in bundle: 2
    // cp_2_rd0
    // cp_2_rd1

	hw_uint<32> result;
	hw_uint<16> cp_2_rd0_res = cp_2_rd0_select(red_diff, d0, d1);
	set_at<0, 32>(result, cp_2_rd0_res);
	hw_uint<16> cp_2_rd1_res = cp_2_rd1_select(red_diff, d0, d1);
	set_at<16, 32>(result, cp_2_rd1_res);
	return result;
}

// red_diff_update_0_write
//	red_diff_red_diff_update_0_write0
//	red_diff_red_diff_update_0_write1
inline void red_diff_red_diff_update_0_write_bundle_write(hw_uint<32>& red_diff_update_0_write, red_diff_cache& red_diff, int d0, int d1) {
	hw_uint<16> red_diff_red_diff_update_0_write0_res = red_diff_update_0_write.extract<0, 15>();
	red_diff_red_diff_update_0_write0_write(red_diff_red_diff_update_0_write0_res, red_diff, d0, d1);
	hw_uint<16> red_diff_red_diff_update_0_write1_res = red_diff_update_0_write.extract<16, 31>();
	red_diff_red_diff_update_0_write1_write(red_diff_red_diff_update_0_write1_res, red_diff, d0, d1);
}



// Operation logic
inline void raw_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */raw_oc, raw_cache& raw, int d0, int d1) {
	// Consume: raw_oc
	auto raw_oc_0_c__0_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_2(raw_oc_0_c__0_value);
	// Produce: raw
	raw_raw_update_0_write_bundle_write(compute_result, raw, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "raw_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "raw_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void blue_update_0(raw_cache& raw, blue_cache& blue, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_blue_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blue_update_0_raw," << d0<< "," << d1<< "," <<  raw_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_generated_compute_unrolled_2(raw_0_c__0_value);
	// Produce: blue
	blue_blue_update_0_write_bundle_write(compute_result, blue, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "blue_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blue_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void red_update_0(raw_cache& raw, red_cache& red, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_red_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "red_update_0_raw," << d0<< "," << d1<< "," <<  raw_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = red_generated_compute_unrolled_2(raw_0_c__0_value);
	// Produce: red
	red_red_update_0_write_bundle_write(compute_result, red, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "red_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "red_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void green_update_0(raw_cache& raw, green_cache& green, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_green_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "green_update_0_raw," << d0<< "," << d1<< "," <<  raw_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = green_generated_compute_unrolled_2(raw_0_c__0_value);
	// Produce: green
	green_green_update_0_write_bundle_write(compute_result, green, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "green_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "green_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void blue_bx_update_0(blue_cache& blue, blue_bx_cache& blue_bx, int d0, int d1) {
	// Consume: blue
	auto blue_0_c__0_value = blue_blue_bx_update_0_read_bundle_read(blue/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blue_bx_update_0_blue," << d0<< "," << d1<< "," <<  blue_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_bx_generated_compute_unrolled_2(blue_0_c__0_value);
	// Produce: blue_bx
	blue_bx_blue_bx_update_0_write_bundle_write(compute_result, blue_bx, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "blue_bx_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blue_bx_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void red_bx_update_0(red_cache& red, red_bx_cache& red_bx, int d0, int d1) {
	// Consume: red
	auto red_0_c__0_value = red_red_bx_update_0_read_bundle_read(red/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "red_bx_update_0_red," << d0<< "," << d1<< "," <<  red_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = red_bx_generated_compute_unrolled_2(red_0_c__0_value);
	// Produce: red_bx
	red_bx_red_bx_update_0_write_bundle_write(compute_result, red_bx, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "red_bx_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "red_bx_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void green_bx_update_0(green_cache& green, green_bx_cache& green_bx, int d0, int d1) {
	// Consume: green
	auto green_0_c__0_value = green_green_bx_update_0_read_bundle_read(green/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "green_bx_update_0_green," << d0<< "," << d1<< "," <<  green_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = green_bx_generated_compute_unrolled_2(green_0_c__0_value);
	// Produce: green_bx
	green_bx_green_bx_update_0_write_bundle_write(compute_result, green_bx, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "green_bx_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "green_bx_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void blue_by_update_0(blue_bx_cache& blue_bx, blue_by_cache& blue_by, int d0, int d1) {
	// Consume: blue_bx
	auto blue_bx_0_c__0_value = blue_bx_blue_by_update_0_read_bundle_read(blue_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "blue_by_update_0_blue_bx," << d0<< "," << d1<< "," <<  blue_bx_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_by_generated_compute_unrolled_2(blue_bx_0_c__0_value);
	// Produce: blue_by
	blue_by_blue_by_update_0_write_bundle_write(compute_result, blue_by, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "blue_by_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blue_by_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void red_by_update_0(red_bx_cache& red_bx, red_by_cache& red_by, int d0, int d1) {
	// Consume: red_bx
	auto red_bx_0_c__0_value = red_bx_red_by_update_0_read_bundle_read(red_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "red_by_update_0_red_bx," << d0<< "," << d1<< "," <<  red_bx_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = red_by_generated_compute_unrolled_2(red_bx_0_c__0_value);
	// Produce: red_by
	red_by_red_by_update_0_write_bundle_write(compute_result, red_by, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "red_by_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "red_by_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void green_by_update_0(green_bx_cache& green_bx, green_by_cache& green_by, int d0, int d1) {
	// Consume: green_bx
	auto green_bx_0_c__0_value = green_bx_green_by_update_0_read_bundle_read(green_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "green_by_update_0_green_bx," << d0<< "," << d1<< "," <<  green_bx_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = green_by_generated_compute_unrolled_2(green_bx_0_c__0_value);
	// Produce: green_by
	green_by_green_by_update_0_write_bundle_write(compute_result, green_by, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "green_by_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "green_by_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
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

	auto compute_result = blue_diff_generated_compute_unrolled_2(blue_0_c__0_value, blue_by_0_c__0_value);
	// Produce: blue_diff
	blue_diff_blue_diff_update_0_write_bundle_write(compute_result, blue_diff, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "blue_diff_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "blue_diff_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
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

	auto compute_result = red_diff_generated_compute_unrolled_2(red_0_c__0_value, red_by_0_c__0_value);
	// Produce: red_diff
	red_diff_red_diff_update_0_write_bundle_write(compute_result, red_diff, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "red_diff_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "red_diff_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
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

	auto compute_result = green_diff_generated_compute_unrolled_2(green_0_c__0_value, green_by_0_c__0_value);
	// Produce: green_diff
	green_diff_green_diff_update_0_write_bundle_write(compute_result, green_diff, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "green_diff_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "green_diff_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void cp_2_update_0(blue_diff_cache& blue_diff, green_diff_cache& green_diff, red_diff_cache& red_diff, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */cp_2, int d0, int d1) {
	// Consume: blue_diff
	auto blue_diff_0_c__0_value = blue_diff_cp_2_update_0_read_bundle_read(blue_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "cp_2_update_0_blue_diff," << d0<< "," << d1<< "," <<  blue_diff_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: green_diff
	auto green_diff_0_c__0_value = green_diff_cp_2_update_0_read_bundle_read(green_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "cp_2_update_0_green_diff," << d0<< "," << d1<< "," <<  green_diff_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: red_diff
	auto red_diff_0_c__0_value = red_diff_cp_2_update_0_read_bundle_read(red_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "cp_2_update_0_red_diff," << d0<< "," << d1<< "," <<  red_diff_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = cp_2_generated_compute_unrolled_2(blue_diff_0_c__0_value, green_diff_0_c__0_value, red_diff_0_c__0_value);
	// Produce: cp_2
	cp_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "cp_2_update_0," << (2*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "cp_2_update_0," << (2*d0 + 1) << "," << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void cp_2_opt(HWStream<hw_uint<32> >& /* get_args num ports = 2 */raw_oc, HWStream<hw_uint<32> >& /* get_args num ports = 2 */cp_2, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("cp_2_opt_debug.csv");
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
	    // cp_2_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*2,1*14]
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
	  for (int c1 = 0; c1 <= 961; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 961) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1083) && ((c0 - 0) % 1 == 0)) {
	raw_update_0(raw_oc, raw, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 961) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	blue_update_0(raw, blue, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 961) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	red_update_0(raw, red, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 961) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	green_update_0(raw, green, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 961) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	blue_bx_update_0(blue, blue_bx, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 961) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	red_bx_update_0(red, red_bx, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 961) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1083) && ((c0 - 2) % 1 == 0)) {
	green_bx_update_0(green, green_bx, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 961) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	blue_by_update_0(blue_bx, blue_by, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 961) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	red_by_update_0(red_bx, red_by, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 961) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	green_by_update_0(green_bx, green_by, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 961) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	blue_diff_update_0(blue, blue_by, blue_diff, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 961) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	red_diff_update_0(red, red_by, red_diff, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 961) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	green_diff_update_0(green, green_by, green_diff, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 961) && ((c1 - 2) % 1 == 0) && (4 <= c0 && c0 <= 1083) && ((c0 - 4) % 1 == 0)) {
	cp_2_update_0(blue_diff, green_diff, red_diff, cp_2, (c1 - 2) / 1, (c0 - 4) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void cp_2_opt(HWStream<hw_uint<32> >& /* get_args num ports = 2 */raw_oc, HWStream<hw_uint<32> >& /* get_args num ports = 2 */cp_2) {

  cp_2_opt(raw_oc, cp_2, 1);
}
#ifdef __VIVADO_SYNTH__
#include "cp_2_opt.h"

const int cp_2_update_0_write_num_transfers = 1036800;
const int raw_update_0_read_num_transfers = 1042808;


extern "C" {

static void read_raw_update_0_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = raw_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_cp_2_update_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = cp_2_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void cp_2_opt_accel(hw_uint<32>* raw_update_0_read, hw_uint<32>* cp_2_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp_2_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = cp_2_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > raw_update_0_read_channel;
  static HWStream<hw_uint<32> > cp_2_update_0_write_channel;

  read_raw_update_0_read(raw_update_0_read, raw_update_0_read_channel, size);

  cp_2_opt(raw_update_0_read_channel, cp_2_update_0_write_channel, size);

  write_cp_2_update_0_write(cp_2_update_0_write, cp_2_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

