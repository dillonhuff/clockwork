#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "camera_mini_opt_compute_units.h"

#include "hw_classes.h"

struct demosaic_demosaic_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 101], [0, 101]}
	// Capacity: 207
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 203> f5;
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

	inline hw_uint<16> peek_205() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_206() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 203
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 203 reading from capacity: 1
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

struct demosaic_cache {
  demosaic_demosaic_update_0_write0_merged_banks_4_cache demosaic_demosaic_update_0_write0_merged_banks_4;
};



inline void demosaic_demosaic_update_0_write0_write(hw_uint<16>& demosaic_demosaic_update_0_write0, demosaic_cache& demosaic, int d0, int d1) {
  demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.push(demosaic_demosaic_update_0_write0);
}

inline hw_uint<16> demosaic_bx_rd0_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd0 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 4] : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // DD fold: { demosaic_bx_update_0[d0, d1] -> 2 : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_2();
  return value_demosaic_demosaic_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_bx_rd1_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd1 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic[1 + d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 4] : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // DD fold: { demosaic_bx_update_0[d0, d1] -> 1 : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_bx_rd2_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd2 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic[2 + d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 4] : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // DD fold: {  }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_diff_rd0_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd0 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // DD fold: { demosaic_diff_update_0[d0, d1] -> 206 : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_206();
  return value_demosaic_demosaic_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// demosaic_bx_update_0_read
//	demosaic_bx_rd0
//	demosaic_bx_rd1
//	demosaic_bx_rd2
inline hw_uint<48> demosaic_demosaic_bx_update_0_read_bundle_read(demosaic_cache& demosaic, int d0, int d1) {
  // # of ports in bundle: 3
    // demosaic_bx_rd0
    // demosaic_bx_rd1
    // demosaic_bx_rd2

	hw_uint<48> result;
	hw_uint<16> demosaic_bx_rd0_res = demosaic_bx_rd0_select(demosaic, d0, d1);
	set_at<0, 48>(result, demosaic_bx_rd0_res);
	hw_uint<16> demosaic_bx_rd1_res = demosaic_bx_rd1_select(demosaic, d0, d1);
	set_at<16, 48>(result, demosaic_bx_rd1_res);
	hw_uint<16> demosaic_bx_rd2_res = demosaic_bx_rd2_select(demosaic, d0, d1);
	set_at<32, 48>(result, demosaic_bx_rd2_res);
	return result;
}

// demosaic_diff_update_0_read
//	demosaic_diff_rd0
inline hw_uint<16> demosaic_demosaic_diff_update_0_read_bundle_read(demosaic_cache& demosaic, int d0, int d1) {
  // # of ports in bundle: 1
    // demosaic_diff_rd0

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_rd0_res = demosaic_diff_rd0_select(demosaic, d0, d1);
	set_at<0, 16>(result, demosaic_diff_rd0_res);
	return result;
}

// demosaic_update_0_write
//	demosaic_demosaic_update_0_write0
inline void demosaic_demosaic_update_0_write_bundle_write(hw_uint<16>& demosaic_update_0_write, demosaic_cache& demosaic, int d0, int d1) {
	hw_uint<16> demosaic_demosaic_update_0_write0_res = demosaic_update_0_write.extract<0, 15>();
	demosaic_demosaic_update_0_write0_write(demosaic_demosaic_update_0_write0_res, demosaic, d0, d1);
}

#include "hw_classes.h"

struct demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 99], [0, 101]}
	// Capacity: 201
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 99> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 99> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_99() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_100() {
		return f2;
	}

	inline hw_uint<16> peek_199() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_200() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 99
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 99 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 99
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 99 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_cache {
  demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3;
};



inline void demosaic_bx_demosaic_bx_update_0_write0_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write0, demosaic_bx_cache& demosaic_bx, int d0, int d1) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write0);
}

inline hw_uint<16> demosaic_by_rd0_select(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd0 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_bx[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 5 + d0, 5] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 4] : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  // DD fold: { demosaic_by_update_0[d0, d1] -> 200 : 0 < d0 <= 98 and 0 <= d1 <= 99; demosaic_by_update_0[d0, d1] -> (101 + d0) : d0 = 99 and 0 <= d1 <= 99; demosaic_by_update_0[d0, d1] -> 200 : d0 = 0 and 0 <= d1 <= 99 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_200();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_by_rd1_select(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd1 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_bx[d0, 1 + d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 5 + d0, 5] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 4] : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  // DD fold: { demosaic_by_update_0[d0, d1] -> 100 : 0 < d0 <= 98 and 0 <= d1 <= 99; demosaic_by_update_0[d0, d1] -> (1 + d0) : d0 = 99 and 0 <= d1 <= 99; demosaic_by_update_0[d0, d1] -> 100 : d0 = 0 and 0 <= d1 <= 99 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_100();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_by_rd2_select(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd2 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_bx[d0, 2 + d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 5 + d0, 5] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 4] : 0 <= d0 <= 99 and 0 <= d1 <= 101 }
  // DD fold: {  }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// demosaic_bx_update_0_write
//	demosaic_bx_demosaic_bx_update_0_write0
inline void demosaic_bx_demosaic_bx_update_0_write_bundle_write(hw_uint<16>& demosaic_bx_update_0_write, demosaic_bx_cache& demosaic_bx, int d0, int d1) {
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write0_res = demosaic_bx_update_0_write.extract<0, 15>();
	demosaic_bx_demosaic_bx_update_0_write0_write(demosaic_bx_demosaic_bx_update_0_write0_res, demosaic_bx, d0, d1);
}

// demosaic_by_update_0_read
//	demosaic_by_rd0
//	demosaic_by_rd1
//	demosaic_by_rd2
inline hw_uint<48> demosaic_bx_demosaic_by_update_0_read_bundle_read(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
  // # of ports in bundle: 3
    // demosaic_by_rd0
    // demosaic_by_rd1
    // demosaic_by_rd2

	hw_uint<48> result;
	hw_uint<16> demosaic_by_rd0_res = demosaic_by_rd0_select(demosaic_bx, d0, d1);
	set_at<0, 48>(result, demosaic_by_rd0_res);
	hw_uint<16> demosaic_by_rd1_res = demosaic_by_rd1_select(demosaic_bx, d0, d1);
	set_at<16, 48>(result, demosaic_by_rd1_res);
	hw_uint<16> demosaic_by_rd2_res = demosaic_by_rd2_select(demosaic_bx, d0, d1);
	set_at<32, 48>(result, demosaic_by_rd2_res);
	return result;
}

#include "hw_classes.h"

struct demosaic_by_demosaic_by_update_0_write0_merged_banks_1_cache {
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

struct demosaic_by_cache {
  demosaic_by_demosaic_by_update_0_write0_merged_banks_1_cache demosaic_by_demosaic_by_update_0_write0_merged_banks_1;
};



inline void demosaic_by_demosaic_by_update_0_write0_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write0, demosaic_by_cache& demosaic_by, int d0, int d1) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write0_merged_banks_1.push(demosaic_by_demosaic_by_update_0_write0);
}

inline hw_uint<16> demosaic_diff_rd0_select(demosaic_by_cache& demosaic_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd0 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 5 + d0, 5] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: {  }
  auto value_demosaic_by_demosaic_by_update_0_write0 = demosaic_by.demosaic_by_demosaic_by_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// demosaic_by_update_0_write
//	demosaic_by_demosaic_by_update_0_write0
inline void demosaic_by_demosaic_by_update_0_write_bundle_write(hw_uint<16>& demosaic_by_update_0_write, demosaic_by_cache& demosaic_by, int d0, int d1) {
	hw_uint<16> demosaic_by_demosaic_by_update_0_write0_res = demosaic_by_update_0_write.extract<0, 15>();
	demosaic_by_demosaic_by_update_0_write0_write(demosaic_by_demosaic_by_update_0_write0_res, demosaic_by, d0, d1);
}

// demosaic_diff_update_0_read
//	demosaic_diff_rd0
inline hw_uint<16> demosaic_by_demosaic_diff_update_0_read_bundle_read(demosaic_by_cache& demosaic_by, int d0, int d1) {
  // # of ports in bundle: 1
    // demosaic_diff_rd0

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_rd0_res = demosaic_diff_rd0_select(demosaic_by, d0, d1);
	set_at<0, 16>(result, demosaic_diff_rd0_res);
	return result;
}

#include "hw_classes.h"

struct demosaic_diff_demosaic_diff_update_0_write0_merged_banks_1_cache {
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

struct demosaic_diff_cache {
  demosaic_diff_demosaic_diff_update_0_write0_merged_banks_1_cache demosaic_diff_demosaic_diff_update_0_write0_merged_banks_1;
};



inline void demosaic_diff_demosaic_diff_update_0_write0_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write0, demosaic_diff_cache& demosaic_diff, int d0, int d1) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write0_merged_banks_1.push(demosaic_diff_demosaic_diff_update_0_write0);
}

inline hw_uint<16> camera_mini_rd0_select(demosaic_diff_cache& demosaic_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // camera_mini_rd0 read pattern: { camera_mini_update_0[d0, d1] -> demosaic_diff[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Read schedule : { camera_mini_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
  // DD fold: {  }
  auto value_demosaic_diff_demosaic_diff_update_0_write0 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// camera_mini_update_0_read
//	camera_mini_rd0
inline hw_uint<16> demosaic_diff_camera_mini_update_0_read_bundle_read(demosaic_diff_cache& demosaic_diff, int d0, int d1) {
  // # of ports in bundle: 1
    // camera_mini_rd0

	hw_uint<16> result;
	hw_uint<16> camera_mini_rd0_res = camera_mini_rd0_select(demosaic_diff, d0, d1);
	set_at<0, 16>(result, camera_mini_rd0_res);
	return result;
}

// demosaic_diff_update_0_write
//	demosaic_diff_demosaic_diff_update_0_write0
inline void demosaic_diff_demosaic_diff_update_0_write_bundle_write(hw_uint<16>& demosaic_diff_update_0_write, demosaic_diff_cache& demosaic_diff, int d0, int d1) {
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write0_res = demosaic_diff_update_0_write.extract<0, 15>();
	demosaic_diff_demosaic_diff_update_0_write0_write(demosaic_diff_demosaic_diff_update_0_write0_res, demosaic_diff, d0, d1);
}

#include "hw_classes.h"

struct denoised_denoised_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-1, 102], [-1, 102]}
	// Capacity: 211
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 101> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 101> f11;
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

	inline hw_uint<16> peek_103() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_104() {
		return f6;
	}

	inline hw_uint<16> peek_105() {
		return f8;
	}

	inline hw_uint<16> peek_106() {
		return f10;
	}

	inline hw_uint<16> peek_207() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_208() {
		return f12;
	}

	inline hw_uint<16> peek_209() {
		return f14;
	}

	inline hw_uint<16> peek_210() {
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
    // cap: 1 reading from capacity: 101
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 101 reading from capacity: 1
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
    // cap: 1 reading from capacity: 101
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 101 reading from capacity: 1
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

struct denoised_cache {
  denoised_denoised_update_0_write0_merged_banks_9_cache denoised_denoised_update_0_write0_merged_banks_9;
};



inline void denoised_denoised_update_0_write0_write(hw_uint<16>& denoised_denoised_update_0_write0, denoised_cache& denoised, int d0, int d1) {
  denoised.denoised_denoised_update_0_write0_merged_banks_9.push(denoised_denoised_update_0_write0);
}

inline hw_uint<16> demosaic_rd0_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd0 read pattern: { demosaic_update_0[d0, d1] -> denoised[-1 + d0, -1 + d1] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // DD fold: { demosaic_update_0[d0, d1] -> 210 : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_210();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_rd1_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd1 read pattern: { demosaic_update_0[d0, d1] -> denoised[-1 + d0, d1] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // DD fold: { demosaic_update_0[d0, d1] -> 106 : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_106();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_rd2_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd2 read pattern: { demosaic_update_0[d0, d1] -> denoised[-1 + d0, 1 + d1] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // DD fold: { demosaic_update_0[d0, d1] -> 2 : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_2();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_rd3_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd3 read pattern: { demosaic_update_0[d0, d1] -> denoised[d0, -1 + d1] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // DD fold: { demosaic_update_0[d0, d1] -> 209 : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_209();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_rd4_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd4 read pattern: { demosaic_update_0[d0, d1] -> denoised[d0, d1] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // DD fold: { demosaic_update_0[d0, d1] -> 105 : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_105();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_rd5_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd5 read pattern: { demosaic_update_0[d0, d1] -> denoised[d0, 1 + d1] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // DD fold: { demosaic_update_0[d0, d1] -> 1 : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_1();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_rd6_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd6 read pattern: { demosaic_update_0[d0, d1] -> denoised[1 + d0, -1 + d1] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // DD fold: { demosaic_update_0[d0, d1] -> 208 : 0 <= d0 <= 100 and 0 <= d1 <= 101; demosaic_update_0[d0, d1] -> (107 + d0) : d0 = 101 and 0 <= d1 <= 101 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_208();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_rd7_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd7 read pattern: { demosaic_update_0[d0, d1] -> denoised[1 + d0, d1] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // DD fold: { demosaic_update_0[d0, d1] -> 104 : 0 <= d0 <= 100 and 0 <= d1 <= 101; demosaic_update_0[d0, d1] -> (3 + d0) : d0 = 101 and 0 <= d1 <= 101 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_104();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_rd8_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd8 read pattern: { demosaic_update_0[d0, d1] -> denoised[1 + d0, 1 + d1] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 101 and 0 <= d1 <= 101 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // DD fold: {  }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_0();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// demosaic_update_0_read
//	demosaic_rd0
//	demosaic_rd1
//	demosaic_rd2
//	demosaic_rd3
//	demosaic_rd4
//	demosaic_rd5
//	demosaic_rd6
//	demosaic_rd7
//	demosaic_rd8
inline hw_uint<144> denoised_demosaic_update_0_read_bundle_read(denoised_cache& denoised, int d0, int d1) {
  // # of ports in bundle: 9
    // demosaic_rd0
    // demosaic_rd1
    // demosaic_rd2
    // demosaic_rd3
    // demosaic_rd4
    // demosaic_rd5
    // demosaic_rd6
    // demosaic_rd7
    // demosaic_rd8

	hw_uint<144> result;
	hw_uint<16> demosaic_rd0_res = demosaic_rd0_select(denoised, d0, d1);
	set_at<0, 144>(result, demosaic_rd0_res);
	hw_uint<16> demosaic_rd1_res = demosaic_rd1_select(denoised, d0, d1);
	set_at<16, 144>(result, demosaic_rd1_res);
	hw_uint<16> demosaic_rd2_res = demosaic_rd2_select(denoised, d0, d1);
	set_at<32, 144>(result, demosaic_rd2_res);
	hw_uint<16> demosaic_rd3_res = demosaic_rd3_select(denoised, d0, d1);
	set_at<48, 144>(result, demosaic_rd3_res);
	hw_uint<16> demosaic_rd4_res = demosaic_rd4_select(denoised, d0, d1);
	set_at<64, 144>(result, demosaic_rd4_res);
	hw_uint<16> demosaic_rd5_res = demosaic_rd5_select(denoised, d0, d1);
	set_at<80, 144>(result, demosaic_rd5_res);
	hw_uint<16> demosaic_rd6_res = demosaic_rd6_select(denoised, d0, d1);
	set_at<96, 144>(result, demosaic_rd6_res);
	hw_uint<16> demosaic_rd7_res = demosaic_rd7_select(denoised, d0, d1);
	set_at<112, 144>(result, demosaic_rd7_res);
	hw_uint<16> demosaic_rd8_res = demosaic_rd8_select(denoised, d0, d1);
	set_at<128, 144>(result, demosaic_rd8_res);
	return result;
}

// denoised_update_0_write
//	denoised_denoised_update_0_write0
inline void denoised_denoised_update_0_write_bundle_write(hw_uint<16>& denoised_update_0_write, denoised_cache& denoised, int d0, int d1) {
	hw_uint<16> denoised_denoised_update_0_write0_res = denoised_update_0_write.extract<0, 15>();
	denoised_denoised_update_0_write0_write(denoised_denoised_update_0_write0_res, denoised, d0, d1);
}

#include "hw_classes.h"

struct raw_raw_update_0_write0_merged_banks_25_cache {
	// RAM Box: {[-3, 104], [-3, 104]}
	// Capacity: 437
	// # of read delays: 25
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 103> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	hw_uint<16> f18;
	fifo<hw_uint<16>, 103> f19;
	hw_uint<16> f20;
	hw_uint<16> f22;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;
	fifo<hw_uint<16>, 103> f29;
	hw_uint<16> f30;
	hw_uint<16> f32;
	hw_uint<16> f34;
	hw_uint<16> f36;
	hw_uint<16> f38;
	fifo<hw_uint<16>, 103> f39;
	hw_uint<16> f40;
	hw_uint<16> f42;
	hw_uint<16> f44;
	hw_uint<16> f46;
	hw_uint<16> f48;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_3() {
		return f6;
	}

	inline hw_uint<16> peek_4() {
		return f8;
	}

	inline hw_uint<16> peek_107() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_108() {
		return f10;
	}

	inline hw_uint<16> peek_109() {
		return f12;
	}

	inline hw_uint<16> peek_110() {
		return f14;
	}

	inline hw_uint<16> peek_111() {
		return f16;
	}

	inline hw_uint<16> peek_112() {
		return f18;
	}

	inline hw_uint<16> peek_215() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f19.back();
	}

	inline hw_uint<16> peek_216() {
		return f20;
	}

	inline hw_uint<16> peek_217() {
		return f22;
	}

	inline hw_uint<16> peek_218() {
		return f24;
	}

	inline hw_uint<16> peek_219() {
		return f26;
	}

	inline hw_uint<16> peek_220() {
		return f28;
	}

	inline hw_uint<16> peek_323() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f29.back();
	}

	inline hw_uint<16> peek_324() {
		return f30;
	}

	inline hw_uint<16> peek_325() {
		return f32;
	}

	inline hw_uint<16> peek_326() {
		return f34;
	}

	inline hw_uint<16> peek_327() {
		return f36;
	}

	inline hw_uint<16> peek_328() {
		return f38;
	}

	inline hw_uint<16> peek_431() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f39.back();
	}

	inline hw_uint<16> peek_432() {
		return f40;
	}

	inline hw_uint<16> peek_433() {
		return f42;
	}

	inline hw_uint<16> peek_434() {
		return f44;
	}

	inline hw_uint<16> peek_435() {
		return f46;
	}

	inline hw_uint<16> peek_436() {
		return f48;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f48 = f46;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f46 = f44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f44 = f42;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f42 = f40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 103
    f40 = f39.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 103 reading from capacity: 1
    f39.push(f38);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f38 = f36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f36 = f34;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 103
    f30 = f29.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 103 reading from capacity: 1
    f29.push(f28);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f24 = f22;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 103
    f20 = f19.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 103 reading from capacity: 1
    f19.push(f18);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
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
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 103
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 103 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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
  raw_raw_update_0_write0_merged_banks_25_cache raw_raw_update_0_write0_merged_banks_25;
};



inline void raw_raw_update_0_write0_write(hw_uint<16>& raw_raw_update_0_write0, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write0_merged_banks_25.push(raw_raw_update_0_write0);
}

inline hw_uint<16> denoised_rd0_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd0 read pattern: { denoised_update_0[d0, d1] -> raw[-2 + d0, -2 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 436 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_436();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd1_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd1 read pattern: { denoised_update_0[d0, d1] -> raw[-2 + d0, -1 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 328 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_328();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd10_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd10 read pattern: { denoised_update_0[d0, d1] -> raw[d0, -2 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 434 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_434();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd11_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd11 read pattern: { denoised_update_0[d0, d1] -> raw[d0, -1 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 326 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_326();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd12_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd12 read pattern: { denoised_update_0[d0, d1] -> raw[d0, d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 218 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_218();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd13_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd13 read pattern: { denoised_update_0[d0, d1] -> raw[d0, 1 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 110 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_110();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd14_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd14 read pattern: { denoised_update_0[d0, d1] -> raw[d0, 2 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 2 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd15_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd15 read pattern: { denoised_update_0[d0, d1] -> raw[1 + d0, -2 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 433 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_433();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd16_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd16 read pattern: { denoised_update_0[d0, d1] -> raw[1 + d0, -1 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 325 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_325();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd17_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd17 read pattern: { denoised_update_0[d0, d1] -> raw[1 + d0, d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 217 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_217();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd18_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd18 read pattern: { denoised_update_0[d0, d1] -> raw[1 + d0, 1 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 109 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_109();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd19_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd19 read pattern: { denoised_update_0[d0, d1] -> raw[1 + d0, 2 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 1 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd2 read pattern: { denoised_update_0[d0, d1] -> raw[-2 + d0, d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 220 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_220();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd20_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd20 read pattern: { denoised_update_0[d0, d1] -> raw[2 + d0, -2 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 432 : -1 <= d0 <= 101 and -1 <= d1 <= 102; denoised_update_0[d0, d1] -> (330 + d0) : d0 = 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_432();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd21_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd21 read pattern: { denoised_update_0[d0, d1] -> raw[2 + d0, -1 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 324 : -1 <= d0 <= 101 and -1 <= d1 <= 102; denoised_update_0[d0, d1] -> (222 + d0) : d0 = 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_324();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd22_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd22 read pattern: { denoised_update_0[d0, d1] -> raw[2 + d0, d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 216 : -1 <= d0 <= 101 and -1 <= d1 <= 102; denoised_update_0[d0, d1] -> (114 + d0) : d0 = 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_216();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd23_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd23 read pattern: { denoised_update_0[d0, d1] -> raw[2 + d0, 1 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 108 : -1 <= d0 <= 101 and -1 <= d1 <= 102; denoised_update_0[d0, d1] -> (6 + d0) : d0 = 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_108();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd24_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd24 read pattern: { denoised_update_0[d0, d1] -> raw[2 + d0, 2 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd3_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd3 read pattern: { denoised_update_0[d0, d1] -> raw[-2 + d0, 1 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 112 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_112();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd4_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd4 read pattern: { denoised_update_0[d0, d1] -> raw[-2 + d0, 2 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 4 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_4();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd5_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd5 read pattern: { denoised_update_0[d0, d1] -> raw[-1 + d0, -2 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 435 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_435();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd6_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd6 read pattern: { denoised_update_0[d0, d1] -> raw[-1 + d0, -1 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 327 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_327();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd7_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd7 read pattern: { denoised_update_0[d0, d1] -> raw[-1 + d0, d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 219 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_219();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd8_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd8 read pattern: { denoised_update_0[d0, d1] -> raw[-1 + d0, 1 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 111 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_111();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd9_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd9 read pattern: { denoised_update_0[d0, d1] -> raw[-1 + d0, 2 + d1] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 104 and -3 <= d1 <= 104 }
  // DD fold: { denoised_update_0[d0, d1] -> 3 : -1 <= d0 <= 102 and -1 <= d1 <= 102 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// denoised_update_0_read
//	denoised_rd0
//	denoised_rd1
//	denoised_rd2
//	denoised_rd3
//	denoised_rd4
//	denoised_rd5
//	denoised_rd6
//	denoised_rd7
//	denoised_rd8
//	denoised_rd9
//	denoised_rd10
//	denoised_rd11
//	denoised_rd12
//	denoised_rd13
//	denoised_rd14
//	denoised_rd15
//	denoised_rd16
//	denoised_rd17
//	denoised_rd18
//	denoised_rd19
//	denoised_rd20
//	denoised_rd21
//	denoised_rd22
//	denoised_rd23
//	denoised_rd24
inline hw_uint<400> raw_denoised_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 25
    // denoised_rd0
    // denoised_rd1
    // denoised_rd2
    // denoised_rd3
    // denoised_rd4
    // denoised_rd5
    // denoised_rd6
    // denoised_rd7
    // denoised_rd8
    // denoised_rd9
    // denoised_rd10
    // denoised_rd11
    // denoised_rd12
    // denoised_rd13
    // denoised_rd14
    // denoised_rd15
    // denoised_rd16
    // denoised_rd17
    // denoised_rd18
    // denoised_rd19
    // denoised_rd20
    // denoised_rd21
    // denoised_rd22
    // denoised_rd23
    // denoised_rd24

	hw_uint<400> result;
	hw_uint<16> denoised_rd0_res = denoised_rd0_select(raw, d0, d1);
	set_at<0, 400>(result, denoised_rd0_res);
	hw_uint<16> denoised_rd1_res = denoised_rd1_select(raw, d0, d1);
	set_at<16, 400>(result, denoised_rd1_res);
	hw_uint<16> denoised_rd2_res = denoised_rd2_select(raw, d0, d1);
	set_at<32, 400>(result, denoised_rd2_res);
	hw_uint<16> denoised_rd3_res = denoised_rd3_select(raw, d0, d1);
	set_at<48, 400>(result, denoised_rd3_res);
	hw_uint<16> denoised_rd4_res = denoised_rd4_select(raw, d0, d1);
	set_at<64, 400>(result, denoised_rd4_res);
	hw_uint<16> denoised_rd5_res = denoised_rd5_select(raw, d0, d1);
	set_at<80, 400>(result, denoised_rd5_res);
	hw_uint<16> denoised_rd6_res = denoised_rd6_select(raw, d0, d1);
	set_at<96, 400>(result, denoised_rd6_res);
	hw_uint<16> denoised_rd7_res = denoised_rd7_select(raw, d0, d1);
	set_at<112, 400>(result, denoised_rd7_res);
	hw_uint<16> denoised_rd8_res = denoised_rd8_select(raw, d0, d1);
	set_at<128, 400>(result, denoised_rd8_res);
	hw_uint<16> denoised_rd9_res = denoised_rd9_select(raw, d0, d1);
	set_at<144, 400>(result, denoised_rd9_res);
	hw_uint<16> denoised_rd10_res = denoised_rd10_select(raw, d0, d1);
	set_at<160, 400>(result, denoised_rd10_res);
	hw_uint<16> denoised_rd11_res = denoised_rd11_select(raw, d0, d1);
	set_at<176, 400>(result, denoised_rd11_res);
	hw_uint<16> denoised_rd12_res = denoised_rd12_select(raw, d0, d1);
	set_at<192, 400>(result, denoised_rd12_res);
	hw_uint<16> denoised_rd13_res = denoised_rd13_select(raw, d0, d1);
	set_at<208, 400>(result, denoised_rd13_res);
	hw_uint<16> denoised_rd14_res = denoised_rd14_select(raw, d0, d1);
	set_at<224, 400>(result, denoised_rd14_res);
	hw_uint<16> denoised_rd15_res = denoised_rd15_select(raw, d0, d1);
	set_at<240, 400>(result, denoised_rd15_res);
	hw_uint<16> denoised_rd16_res = denoised_rd16_select(raw, d0, d1);
	set_at<256, 400>(result, denoised_rd16_res);
	hw_uint<16> denoised_rd17_res = denoised_rd17_select(raw, d0, d1);
	set_at<272, 400>(result, denoised_rd17_res);
	hw_uint<16> denoised_rd18_res = denoised_rd18_select(raw, d0, d1);
	set_at<288, 400>(result, denoised_rd18_res);
	hw_uint<16> denoised_rd19_res = denoised_rd19_select(raw, d0, d1);
	set_at<304, 400>(result, denoised_rd19_res);
	hw_uint<16> denoised_rd20_res = denoised_rd20_select(raw, d0, d1);
	set_at<320, 400>(result, denoised_rd20_res);
	hw_uint<16> denoised_rd21_res = denoised_rd21_select(raw, d0, d1);
	set_at<336, 400>(result, denoised_rd21_res);
	hw_uint<16> denoised_rd22_res = denoised_rd22_select(raw, d0, d1);
	set_at<352, 400>(result, denoised_rd22_res);
	hw_uint<16> denoised_rd23_res = denoised_rd23_select(raw, d0, d1);
	set_at<368, 400>(result, denoised_rd23_res);
	hw_uint<16> denoised_rd24_res = denoised_rd24_select(raw, d0, d1);
	set_at<384, 400>(result, denoised_rd24_res);
	return result;
}

// raw_update_0_write
//	raw_raw_update_0_write0
inline void raw_raw_update_0_write_bundle_write(hw_uint<16>& raw_update_0_write, raw_cache& raw, int d0, int d1) {
	hw_uint<16> raw_raw_update_0_write0_res = raw_update_0_write.extract<0, 15>();
	raw_raw_update_0_write0_write(raw_raw_update_0_write0_res, raw, d0, d1);
}



// Operation logic
inline void raw_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_oc, raw_cache& raw, int d0, int d1) {
	// Consume: raw_oc
	auto raw_oc_0_c__0_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_1(raw_oc_0_c__0_value);
	// Produce: raw
	raw_raw_update_0_write_bundle_write(compute_result, raw, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoised_update_0(raw_cache& raw, denoised_cache& denoised, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_denoised_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoised_generated_compute_unrolled_1(raw_0_c__0_value);
	// Produce: denoised
	denoised_denoised_update_0_write_bundle_write(compute_result, denoised, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_update_0(denoised_cache& denoised, demosaic_cache& demosaic, int d0, int d1) {
	// Consume: denoised
	auto denoised_0_c__0_value = denoised_demosaic_update_0_read_bundle_read(denoised/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_generated_compute_unrolled_1(denoised_0_c__0_value);
	// Produce: demosaic
	demosaic_demosaic_update_0_write_bundle_write(compute_result, demosaic, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bx_update_0(demosaic_cache& demosaic, demosaic_bx_cache& demosaic_bx, int d0, int d1) {
	// Consume: demosaic
	auto demosaic_0_c__0_value = demosaic_demosaic_bx_update_0_read_bundle_read(demosaic/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bx_generated_compute_unrolled_1(demosaic_0_c__0_value);
	// Produce: demosaic_bx
	demosaic_bx_demosaic_bx_update_0_write_bundle_write(compute_result, demosaic_bx, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_by_update_0(demosaic_bx_cache& demosaic_bx, demosaic_by_cache& demosaic_by, int d0, int d1) {
	// Consume: demosaic_bx
	auto demosaic_bx_0_c__0_value = demosaic_bx_demosaic_by_update_0_read_bundle_read(demosaic_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_by_generated_compute_unrolled_1(demosaic_bx_0_c__0_value);
	// Produce: demosaic_by
	demosaic_by_demosaic_by_update_0_write_bundle_write(compute_result, demosaic_by, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_diff_update_0(demosaic_cache& demosaic, demosaic_by_cache& demosaic_by, demosaic_diff_cache& demosaic_diff, int d0, int d1) {
	// Consume: demosaic
	auto demosaic_0_c__0_value = demosaic_demosaic_diff_update_0_read_bundle_read(demosaic/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: demosaic_by
	auto demosaic_by_0_c__0_value = demosaic_by_demosaic_diff_update_0_read_bundle_read(demosaic_by/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_diff_generated_compute_unrolled_1(demosaic_0_c__0_value, demosaic_by_0_c__0_value);
	// Produce: demosaic_diff
	demosaic_diff_demosaic_diff_update_0_write_bundle_write(compute_result, demosaic_diff, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void camera_mini_update_0(demosaic_diff_cache& demosaic_diff, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */camera_mini, int d0, int d1) {
	// Consume: demosaic_diff
	auto demosaic_diff_0_c__0_value = demosaic_diff_camera_mini_update_0_read_bundle_read(demosaic_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = camera_mini_generated_compute_unrolled_1(demosaic_diff_0_c__0_value);
	// Produce: camera_mini
	camera_mini.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void camera_mini_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */camera_mini, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("camera_mini_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_cache demosaic;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bx_cache demosaic_bx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_by_cache demosaic_by;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_diff_cache demosaic_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoised_cache denoised;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  raw_cache raw;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // camera_mini_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*7]
	    // demosaic_bx_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*5,1*4]
	    // demosaic_by_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*5]
	    // demosaic_diff_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // demosaic_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*3]
	    // denoised_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*2]
	    // raw_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // raw_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -3; c0 <= 104; c0++) {
	  for (int c1 = -3; c1 <= 104; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-3 <= c1 && c1 <= 104) && ((c1 - 0) % 1 == 0) && (-3 <= c0 && c0 <= 104) && ((c0 - 0) % 1 == 0)) {
	raw_update_0(raw_oc, raw, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 104) && ((c1 - 2) % 1 == 0) && (1 <= c0 && c0 <= 104) && ((c0 - 2) % 1 == 0)) {
	denoised_update_0(raw, denoised, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 104) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 104) && ((c0 - 3) % 1 == 0)) {
	demosaic_update_0(denoised, demosaic, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 104) && ((c1 - 5) % 1 == 0) && (3 <= c0 && c0 <= 104) && ((c0 - 3) % 1 == 0)) {
	demosaic_bx_update_0(demosaic, demosaic_bx, (c1 - 5) / 1, (c0 - 3) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 104) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 104) && ((c0 - 5) % 1 == 0)) {
	demosaic_by_update_0(demosaic_bx, demosaic_by, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 104) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 104) && ((c0 - 5) % 1 == 0)) {
	demosaic_diff_update_0(demosaic, demosaic_by, demosaic_diff, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 104) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 104) && ((c0 - 5) % 1 == 0)) {
	camera_mini_update_0(demosaic_diff, camera_mini, (c1 - 5) / 1, (c0 - 5) / 1);
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

const int camera_mini_update_0_write_num_transfers = 10000;
const int raw_update_0_read_num_transfers = 11664;


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

