#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "camera_mini_opt_compute_units.h"

#include "hw_classes.h"

struct blue_blue_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 33], [0, 33]}
	// Capacity: 71
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_69() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_70() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
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

struct blue_cache {
  blue_blue_update_0_write0_merged_banks_4_cache blue_blue_update_0_write0_merged_banks_4;
};



inline void blue_blue_update_0_write0_write(hw_uint<16>& blue_blue_update_0_write0, blue_cache& blue, int d0, int d1) {
  blue.blue_blue_update_0_write0_merged_banks_4.push(blue_blue_update_0_write0);
}

inline hw_uint<16> blue_bx_rd0_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd0 read pattern: { blue_bx_update_0[d0, d1] -> blue[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 2 : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_2();
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
  // blue_bx_rd1 read pattern: { blue_bx_update_0[d0, d1] -> blue[1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: { blue_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_1();
  return value_blue_blue_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_bx_rd2_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_bx_rd2 read pattern: { blue_bx_update_0[d0, d1] -> blue[2 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Read schedule : { blue_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: {  }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_0();
  return value_blue_blue_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_diff_rd0_select(blue_cache& blue, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd0 read pattern: { blue_diff_update_0[d0, d1] -> blue[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: { blue_diff_update_0[d0, d1] -> 70 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_blue_blue_update_0_write0 = blue.blue_blue_update_0_write0_merged_banks_4.peek_70();
  return value_blue_blue_update_0_write0;
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
inline hw_uint<48> blue_blue_bx_update_0_read_bundle_read(blue_cache& blue, int d0, int d1) {
  // # of ports in bundle: 3
    // blue_bx_rd0
    // blue_bx_rd1
    // blue_bx_rd2

	hw_uint<48> result;
	hw_uint<16> blue_bx_rd0_res = blue_bx_rd0_select(blue, d0, d1);
	set_at<0, 48>(result, blue_bx_rd0_res);
	hw_uint<16> blue_bx_rd1_res = blue_bx_rd1_select(blue, d0, d1);
	set_at<16, 48>(result, blue_bx_rd1_res);
	hw_uint<16> blue_bx_rd2_res = blue_bx_rd2_select(blue, d0, d1);
	set_at<32, 48>(result, blue_bx_rd2_res);
	return result;
}

// blue_diff_update_0_read
//	blue_diff_rd0
inline hw_uint<16> blue_blue_diff_update_0_read_bundle_read(blue_cache& blue, int d0, int d1) {
  // # of ports in bundle: 1
    // blue_diff_rd0

	hw_uint<16> result;
	hw_uint<16> blue_diff_rd0_res = blue_diff_rd0_select(blue, d0, d1);
	set_at<0, 16>(result, blue_diff_rd0_res);
	return result;
}

// blue_update_0_write
//	blue_blue_update_0_write0
inline void blue_blue_update_0_write_bundle_write(hw_uint<16>& blue_update_0_write, blue_cache& blue, int d0, int d1) {
	hw_uint<16> blue_blue_update_0_write0_res = blue_update_0_write.extract<0, 15>();
	blue_blue_update_0_write0_write(blue_blue_update_0_write0_res, blue, d0, d1);
}

#include "hw_classes.h"

struct blue_bx_blue_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 31], [0, 33]}
	// Capacity: 65
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 31> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 31> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_31() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_32() {
		return f2;
	}

	inline hw_uint<16> peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_64() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct blue_bx_cache {
  blue_bx_blue_bx_update_0_write0_merged_banks_3_cache blue_bx_blue_bx_update_0_write0_merged_banks_3;
};



inline void blue_bx_blue_bx_update_0_write0_write(hw_uint<16>& blue_bx_blue_bx_update_0_write0, blue_bx_cache& blue_bx, int d0, int d1) {
  blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.push(blue_bx_blue_bx_update_0_write0);
}

inline hw_uint<16> blue_by_rd0_select(blue_bx_cache& blue_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_by_rd0 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 8] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // DD fold: { blue_by_update_0[d0, d1] -> 64 : 0 < d0 <= 30 and 0 <= d1 <= 31; blue_by_update_0[d0, d1] -> (33 + d0) : d0 = 31 and 0 <= d1 <= 31; blue_by_update_0[d0, d1] -> 64 : d0 = 0 and 0 <= d1 <= 31 }
  auto value_blue_bx_blue_bx_update_0_write0 = blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.peek_64();
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
  // blue_by_rd1 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 8] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // DD fold: { blue_by_update_0[d0, d1] -> 32 : 0 < d0 <= 30 and 0 <= d1 <= 31; blue_by_update_0[d0, d1] -> (1 + d0) : d0 = 31 and 0 <= d1 <= 31; blue_by_update_0[d0, d1] -> 32 : d0 = 0 and 0 <= d1 <= 31 }
  auto value_blue_bx_blue_bx_update_0_write0 = blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.peek_32();
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
  // blue_by_rd2 read pattern: { blue_by_update_0[d0, d1] -> blue_bx[d0, 2 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blue_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 8] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { blue_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // DD fold: {  }
  auto value_blue_bx_blue_bx_update_0_write0 = blue_bx.blue_bx_blue_bx_update_0_write0_merged_banks_3.peek_0();
  return value_blue_bx_blue_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blue_bx_update_0_write
//	blue_bx_blue_bx_update_0_write0
inline void blue_bx_blue_bx_update_0_write_bundle_write(hw_uint<16>& blue_bx_update_0_write, blue_bx_cache& blue_bx, int d0, int d1) {
	hw_uint<16> blue_bx_blue_bx_update_0_write0_res = blue_bx_update_0_write.extract<0, 15>();
	blue_bx_blue_bx_update_0_write0_write(blue_bx_blue_bx_update_0_write0_res, blue_bx, d0, d1);
}

// blue_by_update_0_read
//	blue_by_rd0
//	blue_by_rd1
//	blue_by_rd2
inline hw_uint<48> blue_bx_blue_by_update_0_read_bundle_read(blue_bx_cache& blue_bx, int d0, int d1) {
  // # of ports in bundle: 3
    // blue_by_rd0
    // blue_by_rd1
    // blue_by_rd2

	hw_uint<48> result;
	hw_uint<16> blue_by_rd0_res = blue_by_rd0_select(blue_bx, d0, d1);
	set_at<0, 48>(result, blue_by_rd0_res);
	hw_uint<16> blue_by_rd1_res = blue_by_rd1_select(blue_bx, d0, d1);
	set_at<16, 48>(result, blue_by_rd1_res);
	hw_uint<16> blue_by_rd2_res = blue_by_rd2_select(blue_bx, d0, d1);
	set_at<32, 48>(result, blue_by_rd2_res);
	return result;
}

#include "hw_classes.h"

struct blue_by_blue_by_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
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
};



inline void blue_by_blue_by_update_0_write0_write(hw_uint<16>& blue_by_blue_by_update_0_write0, blue_by_cache& blue_by, int d0, int d1) {
  blue_by.blue_by_blue_by_update_0_write0_merged_banks_1.push(blue_by_blue_by_update_0_write0);
}

inline hw_uint<16> blue_diff_rd0_select(blue_by_cache& blue_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_diff_rd0 read pattern: { blue_diff_update_0[d0, d1] -> blue_by[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { blue_diff_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { blue_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 8] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_blue_by_blue_by_update_0_write0 = blue_by.blue_by_blue_by_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_by_blue_by_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blue_by_update_0_write
//	blue_by_blue_by_update_0_write0
inline void blue_by_blue_by_update_0_write_bundle_write(hw_uint<16>& blue_by_update_0_write, blue_by_cache& blue_by, int d0, int d1) {
	hw_uint<16> blue_by_blue_by_update_0_write0_res = blue_by_update_0_write.extract<0, 15>();
	blue_by_blue_by_update_0_write0_write(blue_by_blue_by_update_0_write0_res, blue_by, d0, d1);
}

// blue_diff_update_0_read
//	blue_diff_rd0
inline hw_uint<16> blue_by_blue_diff_update_0_read_bundle_read(blue_by_cache& blue_by, int d0, int d1) {
  // # of ports in bundle: 1
    // blue_diff_rd0

	hw_uint<16> result;
	hw_uint<16> blue_diff_rd0_res = blue_diff_rd0_select(blue_by, d0, d1);
	set_at<0, 16>(result, blue_diff_rd0_res);
	return result;
}

#include "hw_classes.h"

struct blue_diff_blue_diff_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
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
};



inline void blue_diff_blue_diff_update_0_write0_write(hw_uint<16>& blue_diff_blue_diff_update_0_write0, blue_diff_cache& blue_diff, int d0, int d1) {
  blue_diff.blue_diff_blue_diff_update_0_write0_merged_banks_1.push(blue_diff_blue_diff_update_0_write0);
}

inline hw_uint<16> camera_mini_rd0_select(blue_diff_cache& blue_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // camera_mini_rd0 read pattern: { camera_mini_update_0[d0, d1] -> blue_diff[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { camera_mini_update_0[d0, d1] -> [4 + d1, 4 + d0, 14] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { blue_diff_update_0[d0, d1] -> [4 + d1, 4 + d0, 11] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_blue_diff_blue_diff_update_0_write0 = blue_diff.blue_diff_blue_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_blue_diff_blue_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blue_diff_update_0_write
//	blue_diff_blue_diff_update_0_write0
inline void blue_diff_blue_diff_update_0_write_bundle_write(hw_uint<16>& blue_diff_update_0_write, blue_diff_cache& blue_diff, int d0, int d1) {
	hw_uint<16> blue_diff_blue_diff_update_0_write0_res = blue_diff_update_0_write.extract<0, 15>();
	blue_diff_blue_diff_update_0_write0_write(blue_diff_blue_diff_update_0_write0_res, blue_diff, d0, d1);
}

// camera_mini_update_0_read
//	camera_mini_rd0
inline hw_uint<16> blue_diff_camera_mini_update_0_read_bundle_read(blue_diff_cache& blue_diff, int d0, int d1) {
  // # of ports in bundle: 1
    // camera_mini_rd0

	hw_uint<16> result;
	hw_uint<16> camera_mini_rd0_res = camera_mini_rd0_select(blue_diff, d0, d1);
	set_at<0, 16>(result, camera_mini_rd0_res);
	return result;
}

#include "hw_classes.h"

struct green_green_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 33], [0, 33]}
	// Capacity: 71
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_69() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_70() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
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

struct green_cache {
  green_green_update_0_write0_merged_banks_4_cache green_green_update_0_write0_merged_banks_4;
};



inline void green_green_update_0_write0_write(hw_uint<16>& green_green_update_0_write0, green_cache& green, int d0, int d1) {
  green.green_green_update_0_write0_merged_banks_4.push(green_green_update_0_write0);
}

inline hw_uint<16> green_bx_rd0_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd0 read pattern: { green_bx_update_0[d0, d1] -> green[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 7] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: { green_bx_update_0[d0, d1] -> 2 : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_2();
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
  // green_bx_rd1 read pattern: { green_bx_update_0[d0, d1] -> green[1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 7] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: { green_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_1();
  return value_green_green_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_bx_rd2_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_bx_rd2 read pattern: { green_bx_update_0[d0, d1] -> green[2 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Read schedule : { green_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 7] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: {  }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_0();
  return value_green_green_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_diff_rd0_select(green_cache& green, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd0 read pattern: { green_diff_update_0[d0, d1] -> green[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: { green_diff_update_0[d0, d1] -> 70 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_green_green_update_0_write0 = green.green_green_update_0_write0_merged_banks_4.peek_70();
  return value_green_green_update_0_write0;
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
inline hw_uint<48> green_green_bx_update_0_read_bundle_read(green_cache& green, int d0, int d1) {
  // # of ports in bundle: 3
    // green_bx_rd0
    // green_bx_rd1
    // green_bx_rd2

	hw_uint<48> result;
	hw_uint<16> green_bx_rd0_res = green_bx_rd0_select(green, d0, d1);
	set_at<0, 48>(result, green_bx_rd0_res);
	hw_uint<16> green_bx_rd1_res = green_bx_rd1_select(green, d0, d1);
	set_at<16, 48>(result, green_bx_rd1_res);
	hw_uint<16> green_bx_rd2_res = green_bx_rd2_select(green, d0, d1);
	set_at<32, 48>(result, green_bx_rd2_res);
	return result;
}

// green_diff_update_0_read
//	green_diff_rd0
inline hw_uint<16> green_green_diff_update_0_read_bundle_read(green_cache& green, int d0, int d1) {
  // # of ports in bundle: 1
    // green_diff_rd0

	hw_uint<16> result;
	hw_uint<16> green_diff_rd0_res = green_diff_rd0_select(green, d0, d1);
	set_at<0, 16>(result, green_diff_rd0_res);
	return result;
}

// green_update_0_write
//	green_green_update_0_write0
inline void green_green_update_0_write_bundle_write(hw_uint<16>& green_update_0_write, green_cache& green, int d0, int d1) {
	hw_uint<16> green_green_update_0_write0_res = green_update_0_write.extract<0, 15>();
	green_green_update_0_write0_write(green_green_update_0_write0_res, green, d0, d1);
}

#include "hw_classes.h"

struct green_bx_green_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 31], [0, 33]}
	// Capacity: 65
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 31> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 31> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_31() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_32() {
		return f2;
	}

	inline hw_uint<16> peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_64() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct green_bx_cache {
  green_bx_green_bx_update_0_write0_merged_banks_3_cache green_bx_green_bx_update_0_write0_merged_banks_3;
};



inline void green_bx_green_bx_update_0_write0_write(hw_uint<16>& green_bx_green_bx_update_0_write0, green_bx_cache& green_bx, int d0, int d1) {
  green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.push(green_bx_green_bx_update_0_write0);
}

inline hw_uint<16> green_by_rd0_select(green_bx_cache& green_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_by_rd0 read pattern: { green_by_update_0[d0, d1] -> green_bx[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 10] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 7] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // DD fold: { green_by_update_0[d0, d1] -> 64 : 0 < d0 <= 30 and 0 <= d1 <= 31; green_by_update_0[d0, d1] -> (33 + d0) : d0 = 31 and 0 <= d1 <= 31; green_by_update_0[d0, d1] -> 64 : d0 = 0 and 0 <= d1 <= 31 }
  auto value_green_bx_green_bx_update_0_write0 = green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.peek_64();
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
  // green_by_rd1 read pattern: { green_by_update_0[d0, d1] -> green_bx[d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 10] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 7] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // DD fold: { green_by_update_0[d0, d1] -> 32 : 0 < d0 <= 30 and 0 <= d1 <= 31; green_by_update_0[d0, d1] -> (1 + d0) : d0 = 31 and 0 <= d1 <= 31; green_by_update_0[d0, d1] -> 32 : d0 = 0 and 0 <= d1 <= 31 }
  auto value_green_bx_green_bx_update_0_write0 = green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.peek_32();
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
  // green_by_rd2 read pattern: { green_by_update_0[d0, d1] -> green_bx[d0, 2 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { green_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 10] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { green_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 7] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // DD fold: {  }
  auto value_green_bx_green_bx_update_0_write0 = green_bx.green_bx_green_bx_update_0_write0_merged_banks_3.peek_0();
  return value_green_bx_green_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// green_bx_update_0_write
//	green_bx_green_bx_update_0_write0
inline void green_bx_green_bx_update_0_write_bundle_write(hw_uint<16>& green_bx_update_0_write, green_bx_cache& green_bx, int d0, int d1) {
	hw_uint<16> green_bx_green_bx_update_0_write0_res = green_bx_update_0_write.extract<0, 15>();
	green_bx_green_bx_update_0_write0_write(green_bx_green_bx_update_0_write0_res, green_bx, d0, d1);
}

// green_by_update_0_read
//	green_by_rd0
//	green_by_rd1
//	green_by_rd2
inline hw_uint<48> green_bx_green_by_update_0_read_bundle_read(green_bx_cache& green_bx, int d0, int d1) {
  // # of ports in bundle: 3
    // green_by_rd0
    // green_by_rd1
    // green_by_rd2

	hw_uint<48> result;
	hw_uint<16> green_by_rd0_res = green_by_rd0_select(green_bx, d0, d1);
	set_at<0, 48>(result, green_by_rd0_res);
	hw_uint<16> green_by_rd1_res = green_by_rd1_select(green_bx, d0, d1);
	set_at<16, 48>(result, green_by_rd1_res);
	hw_uint<16> green_by_rd2_res = green_by_rd2_select(green_bx, d0, d1);
	set_at<32, 48>(result, green_by_rd2_res);
	return result;
}

#include "hw_classes.h"

struct green_by_green_by_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
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
};



inline void green_by_green_by_update_0_write0_write(hw_uint<16>& green_by_green_by_update_0_write0, green_by_cache& green_by, int d0, int d1) {
  green_by.green_by_green_by_update_0_write0_merged_banks_1.push(green_by_green_by_update_0_write0);
}

inline hw_uint<16> green_diff_rd0_select(green_by_cache& green_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_diff_rd0 read pattern: { green_diff_update_0[d0, d1] -> green_by[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { green_diff_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { green_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 10] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_green_by_green_by_update_0_write0 = green_by.green_by_green_by_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_by_green_by_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// green_by_update_0_write
//	green_by_green_by_update_0_write0
inline void green_by_green_by_update_0_write_bundle_write(hw_uint<16>& green_by_update_0_write, green_by_cache& green_by, int d0, int d1) {
	hw_uint<16> green_by_green_by_update_0_write0_res = green_by_update_0_write.extract<0, 15>();
	green_by_green_by_update_0_write0_write(green_by_green_by_update_0_write0_res, green_by, d0, d1);
}

// green_diff_update_0_read
//	green_diff_rd0
inline hw_uint<16> green_by_green_diff_update_0_read_bundle_read(green_by_cache& green_by, int d0, int d1) {
  // # of ports in bundle: 1
    // green_diff_rd0

	hw_uint<16> result;
	hw_uint<16> green_diff_rd0_res = green_diff_rd0_select(green_by, d0, d1);
	set_at<0, 16>(result, green_diff_rd0_res);
	return result;
}

#include "hw_classes.h"

struct green_diff_green_diff_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
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
};



inline void green_diff_green_diff_update_0_write0_write(hw_uint<16>& green_diff_green_diff_update_0_write0, green_diff_cache& green_diff, int d0, int d1) {
  green_diff.green_diff_green_diff_update_0_write0_merged_banks_1.push(green_diff_green_diff_update_0_write0);
}

inline hw_uint<16> camera_mini_rd0_select(green_diff_cache& green_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // camera_mini_rd0 read pattern: { camera_mini_update_0[d0, d1] -> green_diff[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { camera_mini_update_0[d0, d1] -> [4 + d1, 4 + d0, 14] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { green_diff_update_0[d0, d1] -> [4 + d1, 4 + d0, 13] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_green_diff_green_diff_update_0_write0 = green_diff.green_diff_green_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_green_diff_green_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// camera_mini_update_0_read
//	camera_mini_rd0
inline hw_uint<16> green_diff_camera_mini_update_0_read_bundle_read(green_diff_cache& green_diff, int d0, int d1) {
  // # of ports in bundle: 1
    // camera_mini_rd0

	hw_uint<16> result;
	hw_uint<16> camera_mini_rd0_res = camera_mini_rd0_select(green_diff, d0, d1);
	set_at<0, 16>(result, camera_mini_rd0_res);
	return result;
}

// green_diff_update_0_write
//	green_diff_green_diff_update_0_write0
inline void green_diff_green_diff_update_0_write_bundle_write(hw_uint<16>& green_diff_update_0_write, green_diff_cache& green_diff, int d0, int d1) {
	hw_uint<16> green_diff_green_diff_update_0_write0_res = green_diff_update_0_write.extract<0, 15>();
	green_diff_green_diff_update_0_write0_write(green_diff_green_diff_update_0_write0_res, green_diff, d0, d1);
}

#include "hw_classes.h"

struct raw_raw_update_0_write0_merged_banks_27_cache {
	// RAM Box: {[0, 35], [0, 35]}
	// Capacity: 75
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 33> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 33> f11;
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

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_36() {
		return f6;
	}

	inline hw_uint<16> peek_37() {
		return f8;
	}

	inline hw_uint<16> peek_38() {
		return f10;
	}

	inline hw_uint<16> peek_71() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_72() {
		return f12;
	}

	inline hw_uint<16> peek_73() {
		return f14;
	}

	inline hw_uint<16> peek_74() {
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
    // cap: 1 reading from capacity: 33
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
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
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
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

struct raw_cache {
  raw_raw_update_0_write0_merged_banks_27_cache raw_raw_update_0_write0_merged_banks_27;
};



inline void raw_raw_update_0_write0_write(hw_uint<16>& raw_raw_update_0_write0, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write0_merged_banks_27.push(raw_raw_update_0_write0);
}

inline hw_uint<16> blue_rd0_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd0 read pattern: { blue_update_0[d0, d1] -> raw[d0, d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { blue_update_0[d0, d1] -> 74 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_74();
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
  // blue_rd1 read pattern: { blue_update_0[d0, d1] -> raw[d0, 1 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { blue_update_0[d0, d1] -> 38 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_38();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd2 read pattern: { blue_update_0[d0, d1] -> raw[d0, 2 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { blue_update_0[d0, d1] -> 2 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_2();
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
  // blue_rd3 read pattern: { blue_update_0[d0, d1] -> raw[1 + d0, d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { blue_update_0[d0, d1] -> 73 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_73();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd4_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd4 read pattern: { blue_update_0[d0, d1] -> raw[1 + d0, 1 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { blue_update_0[d0, d1] -> 37 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_37();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd5_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd5 read pattern: { blue_update_0[d0, d1] -> raw[1 + d0, 2 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { blue_update_0[d0, d1] -> 1 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blue_rd6_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blue_rd6 read pattern: { blue_update_0[d0, d1] -> raw[2 + d0, d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { blue_update_0[d0, d1] -> 72 : 0 <= d0 <= 32 and 0 <= d1 <= 33; blue_update_0[d0, d1] -> (39 + d0) : d0 = 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_72();
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
  // blue_rd7 read pattern: { blue_update_0[d0, d1] -> raw[2 + d0, 1 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { blue_update_0[d0, d1] -> 36 : 0 <= d0 <= 32 and 0 <= d1 <= 33; blue_update_0[d0, d1] -> (3 + d0) : d0 = 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_36();
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
  // blue_rd8 read pattern: { blue_update_0[d0, d1] -> raw[2 + d0, 2 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { blue_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd0_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd0 read pattern: { green_update_0[d0, d1] -> raw[d0, d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { green_update_0[d0, d1] -> 74 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_74();
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
  // green_rd1 read pattern: { green_update_0[d0, d1] -> raw[d0, 1 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { green_update_0[d0, d1] -> 38 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_38();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd2 read pattern: { green_update_0[d0, d1] -> raw[d0, 2 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { green_update_0[d0, d1] -> 2 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_2();
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
  // green_rd3 read pattern: { green_update_0[d0, d1] -> raw[1 + d0, d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { green_update_0[d0, d1] -> 73 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_73();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd4_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd4 read pattern: { green_update_0[d0, d1] -> raw[1 + d0, 1 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { green_update_0[d0, d1] -> 37 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_37();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd5_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd5 read pattern: { green_update_0[d0, d1] -> raw[1 + d0, 2 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { green_update_0[d0, d1] -> 1 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> green_rd6_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // green_rd6 read pattern: { green_update_0[d0, d1] -> raw[2 + d0, d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { green_update_0[d0, d1] -> 72 : 0 <= d0 <= 32 and 0 <= d1 <= 33; green_update_0[d0, d1] -> (39 + d0) : d0 = 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_72();
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
  // green_rd7 read pattern: { green_update_0[d0, d1] -> raw[2 + d0, 1 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { green_update_0[d0, d1] -> 36 : 0 <= d0 <= 32 and 0 <= d1 <= 33; green_update_0[d0, d1] -> (3 + d0) : d0 = 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_36();
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
  // green_rd8 read pattern: { green_update_0[d0, d1] -> raw[2 + d0, 2 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { green_update_0[d0, d1] -> [2 + d1, 2 + d0, 4] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd0_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd0 read pattern: { red_update_0[d0, d1] -> raw[d0, d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { red_update_0[d0, d1] -> 74 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_74();
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
  // red_rd1 read pattern: { red_update_0[d0, d1] -> raw[d0, 1 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { red_update_0[d0, d1] -> 38 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_38();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd2 read pattern: { red_update_0[d0, d1] -> raw[d0, 2 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { red_update_0[d0, d1] -> 2 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_2();
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
  // red_rd3 read pattern: { red_update_0[d0, d1] -> raw[1 + d0, d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { red_update_0[d0, d1] -> 73 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_73();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd4_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd4 read pattern: { red_update_0[d0, d1] -> raw[1 + d0, 1 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { red_update_0[d0, d1] -> 37 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_37();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd5_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd5 read pattern: { red_update_0[d0, d1] -> raw[1 + d0, 2 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { red_update_0[d0, d1] -> 1 : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_rd6_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_rd6 read pattern: { red_update_0[d0, d1] -> raw[2 + d0, d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { red_update_0[d0, d1] -> 72 : 0 <= d0 <= 32 and 0 <= d1 <= 33; red_update_0[d0, d1] -> (39 + d0) : d0 = 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_72();
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
  // red_rd7 read pattern: { red_update_0[d0, d1] -> raw[2 + d0, 1 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: { red_update_0[d0, d1] -> 36 : 0 <= d0 <= 32 and 0 <= d1 <= 33; red_update_0[d0, d1] -> (3 + d0) : d0 = 33 and 0 <= d1 <= 33 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_36();
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
  // red_rd8 read pattern: { red_update_0[d0, d1] -> raw[2 + d0, 2 + d1] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Read schedule : { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 35 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_27.peek_0();
  return value_raw_raw_update_0_write0;
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
inline hw_uint<144> raw_blue_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 9
    // blue_rd0
    // blue_rd1
    // blue_rd2
    // blue_rd3
    // blue_rd4
    // blue_rd5
    // blue_rd6
    // blue_rd7
    // blue_rd8

	hw_uint<144> result;
	hw_uint<16> blue_rd0_res = blue_rd0_select(raw, d0, d1);
	set_at<0, 144>(result, blue_rd0_res);
	hw_uint<16> blue_rd1_res = blue_rd1_select(raw, d0, d1);
	set_at<16, 144>(result, blue_rd1_res);
	hw_uint<16> blue_rd2_res = blue_rd2_select(raw, d0, d1);
	set_at<32, 144>(result, blue_rd2_res);
	hw_uint<16> blue_rd3_res = blue_rd3_select(raw, d0, d1);
	set_at<48, 144>(result, blue_rd3_res);
	hw_uint<16> blue_rd4_res = blue_rd4_select(raw, d0, d1);
	set_at<64, 144>(result, blue_rd4_res);
	hw_uint<16> blue_rd5_res = blue_rd5_select(raw, d0, d1);
	set_at<80, 144>(result, blue_rd5_res);
	hw_uint<16> blue_rd6_res = blue_rd6_select(raw, d0, d1);
	set_at<96, 144>(result, blue_rd6_res);
	hw_uint<16> blue_rd7_res = blue_rd7_select(raw, d0, d1);
	set_at<112, 144>(result, blue_rd7_res);
	hw_uint<16> blue_rd8_res = blue_rd8_select(raw, d0, d1);
	set_at<128, 144>(result, blue_rd8_res);
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
inline hw_uint<144> raw_green_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 9
    // green_rd0
    // green_rd1
    // green_rd2
    // green_rd3
    // green_rd4
    // green_rd5
    // green_rd6
    // green_rd7
    // green_rd8

	hw_uint<144> result;
	hw_uint<16> green_rd0_res = green_rd0_select(raw, d0, d1);
	set_at<0, 144>(result, green_rd0_res);
	hw_uint<16> green_rd1_res = green_rd1_select(raw, d0, d1);
	set_at<16, 144>(result, green_rd1_res);
	hw_uint<16> green_rd2_res = green_rd2_select(raw, d0, d1);
	set_at<32, 144>(result, green_rd2_res);
	hw_uint<16> green_rd3_res = green_rd3_select(raw, d0, d1);
	set_at<48, 144>(result, green_rd3_res);
	hw_uint<16> green_rd4_res = green_rd4_select(raw, d0, d1);
	set_at<64, 144>(result, green_rd4_res);
	hw_uint<16> green_rd5_res = green_rd5_select(raw, d0, d1);
	set_at<80, 144>(result, green_rd5_res);
	hw_uint<16> green_rd6_res = green_rd6_select(raw, d0, d1);
	set_at<96, 144>(result, green_rd6_res);
	hw_uint<16> green_rd7_res = green_rd7_select(raw, d0, d1);
	set_at<112, 144>(result, green_rd7_res);
	hw_uint<16> green_rd8_res = green_rd8_select(raw, d0, d1);
	set_at<128, 144>(result, green_rd8_res);
	return result;
}

// raw_update_0_write
//	raw_raw_update_0_write0
inline void raw_raw_update_0_write_bundle_write(hw_uint<16>& raw_update_0_write, raw_cache& raw, int d0, int d1) {
	hw_uint<16> raw_raw_update_0_write0_res = raw_update_0_write.extract<0, 15>();
	raw_raw_update_0_write0_write(raw_raw_update_0_write0_res, raw, d0, d1);
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
inline hw_uint<144> raw_red_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 9
    // red_rd0
    // red_rd1
    // red_rd2
    // red_rd3
    // red_rd4
    // red_rd5
    // red_rd6
    // red_rd7
    // red_rd8

	hw_uint<144> result;
	hw_uint<16> red_rd0_res = red_rd0_select(raw, d0, d1);
	set_at<0, 144>(result, red_rd0_res);
	hw_uint<16> red_rd1_res = red_rd1_select(raw, d0, d1);
	set_at<16, 144>(result, red_rd1_res);
	hw_uint<16> red_rd2_res = red_rd2_select(raw, d0, d1);
	set_at<32, 144>(result, red_rd2_res);
	hw_uint<16> red_rd3_res = red_rd3_select(raw, d0, d1);
	set_at<48, 144>(result, red_rd3_res);
	hw_uint<16> red_rd4_res = red_rd4_select(raw, d0, d1);
	set_at<64, 144>(result, red_rd4_res);
	hw_uint<16> red_rd5_res = red_rd5_select(raw, d0, d1);
	set_at<80, 144>(result, red_rd5_res);
	hw_uint<16> red_rd6_res = red_rd6_select(raw, d0, d1);
	set_at<96, 144>(result, red_rd6_res);
	hw_uint<16> red_rd7_res = red_rd7_select(raw, d0, d1);
	set_at<112, 144>(result, red_rd7_res);
	hw_uint<16> red_rd8_res = red_rd8_select(raw, d0, d1);
	set_at<128, 144>(result, red_rd8_res);
	return result;
}

#include "hw_classes.h"

struct red_red_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 33], [0, 33]}
	// Capacity: 71
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 67> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_69() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_70() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
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

struct red_cache {
  red_red_update_0_write0_merged_banks_4_cache red_red_update_0_write0_merged_banks_4;
};



inline void red_red_update_0_write0_write(hw_uint<16>& red_red_update_0_write0, red_cache& red, int d0, int d1) {
  red.red_red_update_0_write0_merged_banks_4.push(red_red_update_0_write0);
}

inline hw_uint<16> red_bx_rd0_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd0 read pattern: { red_bx_update_0[d0, d1] -> red[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 6] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: { red_bx_update_0[d0, d1] -> 2 : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_2();
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
  // red_bx_rd1 read pattern: { red_bx_update_0[d0, d1] -> red[1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 6] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: { red_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_1();
  return value_red_red_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_bx_rd2_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_bx_rd2 read pattern: { red_bx_update_0[d0, d1] -> red[2 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Read schedule : { red_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 6] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: {  }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_0();
  return value_red_red_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> red_diff_rd0_select(red_cache& red, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd0 read pattern: { red_diff_update_0[d0, d1] -> red[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { red_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 33 }
  // DD fold: { red_diff_update_0[d0, d1] -> 70 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_red_red_update_0_write0 = red.red_red_update_0_write0_merged_banks_4.peek_70();
  return value_red_red_update_0_write0;
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
inline hw_uint<48> red_red_bx_update_0_read_bundle_read(red_cache& red, int d0, int d1) {
  // # of ports in bundle: 3
    // red_bx_rd0
    // red_bx_rd1
    // red_bx_rd2

	hw_uint<48> result;
	hw_uint<16> red_bx_rd0_res = red_bx_rd0_select(red, d0, d1);
	set_at<0, 48>(result, red_bx_rd0_res);
	hw_uint<16> red_bx_rd1_res = red_bx_rd1_select(red, d0, d1);
	set_at<16, 48>(result, red_bx_rd1_res);
	hw_uint<16> red_bx_rd2_res = red_bx_rd2_select(red, d0, d1);
	set_at<32, 48>(result, red_bx_rd2_res);
	return result;
}

// red_diff_update_0_read
//	red_diff_rd0
inline hw_uint<16> red_red_diff_update_0_read_bundle_read(red_cache& red, int d0, int d1) {
  // # of ports in bundle: 1
    // red_diff_rd0

	hw_uint<16> result;
	hw_uint<16> red_diff_rd0_res = red_diff_rd0_select(red, d0, d1);
	set_at<0, 16>(result, red_diff_rd0_res);
	return result;
}

// red_update_0_write
//	red_red_update_0_write0
inline void red_red_update_0_write_bundle_write(hw_uint<16>& red_update_0_write, red_cache& red, int d0, int d1) {
	hw_uint<16> red_red_update_0_write0_res = red_update_0_write.extract<0, 15>();
	red_red_update_0_write0_write(red_red_update_0_write0_res, red, d0, d1);
}

#include "hw_classes.h"

struct red_bx_red_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 31], [0, 33]}
	// Capacity: 65
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 31> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 31> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_31() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_32() {
		return f2;
	}

	inline hw_uint<16> peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_64() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct red_bx_cache {
  red_bx_red_bx_update_0_write0_merged_banks_3_cache red_bx_red_bx_update_0_write0_merged_banks_3;
};



inline void red_bx_red_bx_update_0_write0_write(hw_uint<16>& red_bx_red_bx_update_0_write0, red_bx_cache& red_bx, int d0, int d1) {
  red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.push(red_bx_red_bx_update_0_write0);
}

inline hw_uint<16> red_by_rd0_select(red_bx_cache& red_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_by_rd0 read pattern: { red_by_update_0[d0, d1] -> red_bx[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 9] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 6] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // DD fold: { red_by_update_0[d0, d1] -> 64 : 0 < d0 <= 30 and 0 <= d1 <= 31; red_by_update_0[d0, d1] -> (33 + d0) : d0 = 31 and 0 <= d1 <= 31; red_by_update_0[d0, d1] -> 64 : d0 = 0 and 0 <= d1 <= 31 }
  auto value_red_bx_red_bx_update_0_write0 = red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.peek_64();
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
  // red_by_rd1 read pattern: { red_by_update_0[d0, d1] -> red_bx[d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 9] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 6] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // DD fold: { red_by_update_0[d0, d1] -> 32 : 0 < d0 <= 30 and 0 <= d1 <= 31; red_by_update_0[d0, d1] -> (1 + d0) : d0 = 31 and 0 <= d1 <= 31; red_by_update_0[d0, d1] -> 32 : d0 = 0 and 0 <= d1 <= 31 }
  auto value_red_bx_red_bx_update_0_write0 = red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.peek_32();
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
  // red_by_rd2 read pattern: { red_by_update_0[d0, d1] -> red_bx[d0, 2 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { red_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 9] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { red_bx_update_0[d0, d1] -> [2 + d1, 4 + d0, 6] : 0 <= d0 <= 31 and 0 <= d1 <= 33 }
  // DD fold: {  }
  auto value_red_bx_red_bx_update_0_write0 = red_bx.red_bx_red_bx_update_0_write0_merged_banks_3.peek_0();
  return value_red_bx_red_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// red_bx_update_0_write
//	red_bx_red_bx_update_0_write0
inline void red_bx_red_bx_update_0_write_bundle_write(hw_uint<16>& red_bx_update_0_write, red_bx_cache& red_bx, int d0, int d1) {
	hw_uint<16> red_bx_red_bx_update_0_write0_res = red_bx_update_0_write.extract<0, 15>();
	red_bx_red_bx_update_0_write0_write(red_bx_red_bx_update_0_write0_res, red_bx, d0, d1);
}

// red_by_update_0_read
//	red_by_rd0
//	red_by_rd1
//	red_by_rd2
inline hw_uint<48> red_bx_red_by_update_0_read_bundle_read(red_bx_cache& red_bx, int d0, int d1) {
  // # of ports in bundle: 3
    // red_by_rd0
    // red_by_rd1
    // red_by_rd2

	hw_uint<48> result;
	hw_uint<16> red_by_rd0_res = red_by_rd0_select(red_bx, d0, d1);
	set_at<0, 48>(result, red_by_rd0_res);
	hw_uint<16> red_by_rd1_res = red_by_rd1_select(red_bx, d0, d1);
	set_at<16, 48>(result, red_by_rd1_res);
	hw_uint<16> red_by_rd2_res = red_by_rd2_select(red_bx, d0, d1);
	set_at<32, 48>(result, red_by_rd2_res);
	return result;
}

#include "hw_classes.h"

struct red_by_red_by_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
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
};



inline void red_by_red_by_update_0_write0_write(hw_uint<16>& red_by_red_by_update_0_write0, red_by_cache& red_by, int d0, int d1) {
  red_by.red_by_red_by_update_0_write0_merged_banks_1.push(red_by_red_by_update_0_write0);
}

inline hw_uint<16> red_diff_rd0_select(red_by_cache& red_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // red_diff_rd0 read pattern: { red_diff_update_0[d0, d1] -> red_by[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { red_diff_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { red_by_update_0[d0, d1] -> [4 + d1, 4 + d0, 9] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_red_by_red_by_update_0_write0 = red_by.red_by_red_by_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_by_red_by_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// red_by_update_0_write
//	red_by_red_by_update_0_write0
inline void red_by_red_by_update_0_write_bundle_write(hw_uint<16>& red_by_update_0_write, red_by_cache& red_by, int d0, int d1) {
	hw_uint<16> red_by_red_by_update_0_write0_res = red_by_update_0_write.extract<0, 15>();
	red_by_red_by_update_0_write0_write(red_by_red_by_update_0_write0_res, red_by, d0, d1);
}

// red_diff_update_0_read
//	red_diff_rd0
inline hw_uint<16> red_by_red_diff_update_0_read_bundle_read(red_by_cache& red_by, int d0, int d1) {
  // # of ports in bundle: 1
    // red_diff_rd0

	hw_uint<16> result;
	hw_uint<16> red_diff_rd0_res = red_diff_rd0_select(red_by, d0, d1);
	set_at<0, 16>(result, red_diff_rd0_res);
	return result;
}

#include "hw_classes.h"

struct red_diff_red_diff_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
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
};



inline void red_diff_red_diff_update_0_write0_write(hw_uint<16>& red_diff_red_diff_update_0_write0, red_diff_cache& red_diff, int d0, int d1) {
  red_diff.red_diff_red_diff_update_0_write0_merged_banks_1.push(red_diff_red_diff_update_0_write0);
}

inline hw_uint<16> camera_mini_rd0_select(red_diff_cache& red_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // camera_mini_rd0 read pattern: { camera_mini_update_0[d0, d1] -> red_diff[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { camera_mini_update_0[d0, d1] -> [4 + d1, 4 + d0, 14] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { red_diff_update_0[d0, d1] -> [4 + d1, 4 + d0, 12] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // DD fold: {  }
  auto value_red_diff_red_diff_update_0_write0 = red_diff.red_diff_red_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_red_diff_red_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// camera_mini_update_0_read
//	camera_mini_rd0
inline hw_uint<16> red_diff_camera_mini_update_0_read_bundle_read(red_diff_cache& red_diff, int d0, int d1) {
  // # of ports in bundle: 1
    // camera_mini_rd0

	hw_uint<16> result;
	hw_uint<16> camera_mini_rd0_res = camera_mini_rd0_select(red_diff, d0, d1);
	set_at<0, 16>(result, camera_mini_rd0_res);
	return result;
}

// red_diff_update_0_write
//	red_diff_red_diff_update_0_write0
inline void red_diff_red_diff_update_0_write_bundle_write(hw_uint<16>& red_diff_update_0_write, red_diff_cache& red_diff, int d0, int d1) {
	hw_uint<16> red_diff_red_diff_update_0_write0_res = red_diff_update_0_write.extract<0, 15>();
	red_diff_red_diff_update_0_write0_write(red_diff_red_diff_update_0_write0_res, red_diff, d0, d1);
}



// Operation logic
inline void blue_update_0(raw_cache& raw, blue_cache& blue, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_blue_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_generated_compute_unrolled_1(raw_0_c__0_value);
	// Produce: blue
	blue_blue_update_0_write_bundle_write(compute_result, blue, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void red_update_0(raw_cache& raw, red_cache& red, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_red_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = red_generated_compute_unrolled_1(raw_0_c__0_value);
	// Produce: red
	red_red_update_0_write_bundle_write(compute_result, red, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void green_update_0(raw_cache& raw, green_cache& green, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_green_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = green_generated_compute_unrolled_1(raw_0_c__0_value);
	// Produce: green
	green_green_update_0_write_bundle_write(compute_result, green, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blue_bx_update_0(blue_cache& blue, blue_bx_cache& blue_bx, int d0, int d1) {
	// Consume: blue
	auto blue_0_c__0_value = blue_blue_bx_update_0_read_bundle_read(blue/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_bx_generated_compute_unrolled_1(blue_0_c__0_value);
	// Produce: blue_bx
	blue_bx_blue_bx_update_0_write_bundle_write(compute_result, blue_bx, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void red_bx_update_0(red_cache& red, red_bx_cache& red_bx, int d0, int d1) {
	// Consume: red
	auto red_0_c__0_value = red_red_bx_update_0_read_bundle_read(red/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = red_bx_generated_compute_unrolled_1(red_0_c__0_value);
	// Produce: red_bx
	red_bx_red_bx_update_0_write_bundle_write(compute_result, red_bx, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blue_by_update_0(blue_bx_cache& blue_bx, blue_by_cache& blue_by, int d0, int d1) {
	// Consume: blue_bx
	auto blue_bx_0_c__0_value = blue_bx_blue_by_update_0_read_bundle_read(blue_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_by_generated_compute_unrolled_1(blue_bx_0_c__0_value);
	// Produce: blue_by
	blue_by_blue_by_update_0_write_bundle_write(compute_result, blue_by, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void green_bx_update_0(green_cache& green, green_bx_cache& green_bx, int d0, int d1) {
	// Consume: green
	auto green_0_c__0_value = green_green_bx_update_0_read_bundle_read(green/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = green_bx_generated_compute_unrolled_1(green_0_c__0_value);
	// Produce: green_bx
	green_bx_green_bx_update_0_write_bundle_write(compute_result, green_bx, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void red_by_update_0(red_bx_cache& red_bx, red_by_cache& red_by, int d0, int d1) {
	// Consume: red_bx
	auto red_bx_0_c__0_value = red_bx_red_by_update_0_read_bundle_read(red_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = red_by_generated_compute_unrolled_1(red_bx_0_c__0_value);
	// Produce: red_by
	red_by_red_by_update_0_write_bundle_write(compute_result, red_by, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void green_by_update_0(green_bx_cache& green_bx, green_by_cache& green_by, int d0, int d1) {
	// Consume: green_bx
	auto green_bx_0_c__0_value = green_bx_green_by_update_0_read_bundle_read(green_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = green_by_generated_compute_unrolled_1(green_bx_0_c__0_value);
	// Produce: green_by
	green_by_green_by_update_0_write_bundle_write(compute_result, green_by, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blue_diff_update_0(blue_cache& blue, blue_by_cache& blue_by, blue_diff_cache& blue_diff, int d0, int d1) {
	// Consume: blue
	auto blue_0_c__0_value = blue_blue_diff_update_0_read_bundle_read(blue/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: blue_by
	auto blue_by_0_c__0_value = blue_by_blue_diff_update_0_read_bundle_read(blue_by/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blue_diff_generated_compute_unrolled_1(blue_0_c__0_value, blue_by_0_c__0_value);
	// Produce: blue_diff
	blue_diff_blue_diff_update_0_write_bundle_write(compute_result, blue_diff, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void red_diff_update_0(red_cache& red, red_by_cache& red_by, red_diff_cache& red_diff, int d0, int d1) {
	// Consume: red
	auto red_0_c__0_value = red_red_diff_update_0_read_bundle_read(red/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: red_by
	auto red_by_0_c__0_value = red_by_red_diff_update_0_read_bundle_read(red_by/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = red_diff_generated_compute_unrolled_1(red_0_c__0_value, red_by_0_c__0_value);
	// Produce: red_diff
	red_diff_red_diff_update_0_write_bundle_write(compute_result, red_diff, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void green_diff_update_0(green_cache& green, green_by_cache& green_by, green_diff_cache& green_diff, int d0, int d1) {
	// Consume: green
	auto green_0_c__0_value = green_green_diff_update_0_read_bundle_read(green/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: green_by
	auto green_by_0_c__0_value = green_by_green_diff_update_0_read_bundle_read(green_by/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = green_diff_generated_compute_unrolled_1(green_0_c__0_value, green_by_0_c__0_value);
	// Produce: green_diff
	green_diff_green_diff_update_0_write_bundle_write(compute_result, green_diff, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void camera_mini_update_0(blue_diff_cache& blue_diff, green_diff_cache& green_diff, red_diff_cache& red_diff, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */camera_mini, int d0, int d1) {
	// Consume: blue_diff
	auto blue_diff_0_c__0_value = blue_diff_camera_mini_update_0_read_bundle_read(blue_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: green_diff
	auto green_diff_0_c__0_value = green_diff_camera_mini_update_0_read_bundle_read(green_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: red_diff
	auto red_diff_0_c__0_value = red_diff_camera_mini_update_0_read_bundle_read(red_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = camera_mini_generated_compute_unrolled_1(blue_diff_0_c__0_value, green_diff_0_c__0_value, red_diff_0_c__0_value);
	// Produce: camera_mini
	camera_mini.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void raw_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_oc, raw_cache& raw, int d0, int d1) {
	// Consume: raw_oc
	auto raw_oc_0_c__0_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_1(raw_oc_0_c__0_value);
	// Produce: raw
	raw_raw_update_0_write_bundle_write(compute_result, raw, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void camera_mini_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */camera_mini, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("camera_mini_opt_debug.csv");
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
	    // blue_bx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*4,1*5]
	    // blue_by_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*8]
	    // blue_diff_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*11]
	    // blue_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*2]
	    // camera_mini_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*14]
	    // green_bx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*4,1*7]
	    // green_by_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*10]
	    // green_diff_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*13]
	    // green_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*4]
	    // raw_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // raw_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // red_bx_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*4,1*6]
	    // red_by_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*9]
	    // red_diff_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*12]
	    // red_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	for (int c0 = 0; c0 <= 35; c0++) {
	  for (int c1 = 0; c1 <= 35; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 35) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 35) && ((c0 - 0) % 1 == 0)) {
	raw_update_0(raw_oc, raw, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 35) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 35) && ((c0 - 2) % 1 == 0)) {
	blue_update_0(raw, blue, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 35) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 35) && ((c0 - 2) % 1 == 0)) {
	red_update_0(raw, red, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 35) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 35) && ((c0 - 2) % 1 == 0)) {
	green_update_0(raw, green, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (2 <= c0 && c0 <= 35) && ((c0 - 2) % 1 == 0)) {
	blue_bx_update_0(blue, blue_bx, (c1 - 4) / 1, (c0 - 2) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (2 <= c0 && c0 <= 35) && ((c0 - 2) % 1 == 0)) {
	red_bx_update_0(red, red_bx, (c1 - 4) / 1, (c0 - 2) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (2 <= c0 && c0 <= 35) && ((c0 - 2) % 1 == 0)) {
	green_bx_update_0(green, green_bx, (c1 - 4) / 1, (c0 - 2) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 35) && ((c0 - 4) % 1 == 0)) {
	blue_by_update_0(blue_bx, blue_by, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 35) && ((c0 - 4) % 1 == 0)) {
	red_by_update_0(red_bx, red_by, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 35) && ((c0 - 4) % 1 == 0)) {
	green_by_update_0(green_bx, green_by, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 35) && ((c0 - 4) % 1 == 0)) {
	blue_diff_update_0(blue, blue_by, blue_diff, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 35) && ((c0 - 4) % 1 == 0)) {
	red_diff_update_0(red, red_by, red_diff, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 35) && ((c0 - 4) % 1 == 0)) {
	green_diff_update_0(green, green_by, green_diff, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 35) && ((c0 - 4) % 1 == 0)) {
	camera_mini_update_0(blue_diff, green_diff, red_diff, camera_mini, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void camera_mini_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */camera_mini) {

  camera_mini_opt(raw_oc, camera_mini, 1);
}
#ifdef __VIVADO_SYNTH__
#include "camera_mini_opt.h"

const int camera_mini_update_0_write_num_transfers = 1024;
const int raw_update_0_read_num_transfers = 1296;


extern "C" {

static void read_raw_update_0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = raw_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_camera_mini_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = camera_mini_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void camera_mini_opt_accel(hw_uint<16>* raw_update_0_read, hw_uint<16>* camera_mini_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = camera_mini_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = camera_mini_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > raw_update_0_read_channel;
  static HWStream<hw_uint<16> > camera_mini_update_0_write_channel;

  read_raw_update_0_read(raw_update_0_read, raw_update_0_read_channel, size);

  camera_mini_opt(raw_update_0_read_channel, camera_mini_update_0_write_channel, size);

  write_camera_mini_update_0_write(camera_mini_update_0_write, camera_mini_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

