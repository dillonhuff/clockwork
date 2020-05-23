#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "cp_noinit_20_2_opt_compute_units.h"

#include "hw_classes.h"

struct demosaic_demosaic_update_0_write0_merged_banks_4_cache {
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

struct demosaic_demosaic_update_0_write1_merged_banks_4_cache {
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

struct demosaic_cache {
  demosaic_demosaic_update_0_write0_merged_banks_4_cache demosaic_demosaic_update_0_write0_merged_banks_4;
  demosaic_demosaic_update_0_write1_merged_banks_4_cache demosaic_demosaic_update_0_write1_merged_banks_4;
};



inline void demosaic_demosaic_update_0_write0_write(hw_uint<16>& demosaic_demosaic_update_0_write0, demosaic_cache& demosaic, int d0, int d1) {
  demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.push(demosaic_demosaic_update_0_write0);
}

inline void demosaic_demosaic_update_0_write1_write(hw_uint<16>& demosaic_demosaic_update_0_write1, demosaic_cache& demosaic, int d0, int d1) {
  demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.push(demosaic_demosaic_update_0_write1);
}

inline hw_uint<16> demosaic_bxb_rd0_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd0 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { demosaic_bxb_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_bxb_rd1_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd1 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { demosaic_bxb_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_bxb_rd2_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd2 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_bxb_rd3_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd3 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { demosaic_bxb_update_0[d0, d1] -> 1 : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_bxb_rd4_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd4 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_bxb_rd5_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_rd5 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_diff_rd0_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd0 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { demosaic_diff_update_0[d0, d1] -> 1923 : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_1923();
  return value_demosaic_demosaic_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_diff_rd1_select(demosaic_cache& demosaic, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd1 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: { demosaic_diff_update_0[d0, d1] -> 1923 : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_1923();
  return value_demosaic_demosaic_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// demosaic_bxb_update_0_read
//	demosaic_bxb_rd0
//	demosaic_bxb_rd1
//	demosaic_bxb_rd2
//	demosaic_bxb_rd3
//	demosaic_bxb_rd4
//	demosaic_bxb_rd5
inline hw_uint<96> demosaic_demosaic_bxb_update_0_read_bundle_read(demosaic_cache& demosaic, int d0, int d1) {
  // # of ports in bundle: 6
    // demosaic_bxb_rd0
    // demosaic_bxb_rd1
    // demosaic_bxb_rd2
    // demosaic_bxb_rd3
    // demosaic_bxb_rd4
    // demosaic_bxb_rd5

	hw_uint<96> result;
	hw_uint<16> demosaic_bxb_rd0_res = demosaic_bxb_rd0_select(demosaic, d0, d1);
	set_at<0, 96>(result, demosaic_bxb_rd0_res);
	hw_uint<16> demosaic_bxb_rd1_res = demosaic_bxb_rd1_select(demosaic, d0, d1);
	set_at<16, 96>(result, demosaic_bxb_rd1_res);
	hw_uint<16> demosaic_bxb_rd2_res = demosaic_bxb_rd2_select(demosaic, d0, d1);
	set_at<32, 96>(result, demosaic_bxb_rd2_res);
	hw_uint<16> demosaic_bxb_rd3_res = demosaic_bxb_rd3_select(demosaic, d0, d1);
	set_at<48, 96>(result, demosaic_bxb_rd3_res);
	hw_uint<16> demosaic_bxb_rd4_res = demosaic_bxb_rd4_select(demosaic, d0, d1);
	set_at<64, 96>(result, demosaic_bxb_rd4_res);
	hw_uint<16> demosaic_bxb_rd5_res = demosaic_bxb_rd5_select(demosaic, d0, d1);
	set_at<80, 96>(result, demosaic_bxb_rd5_res);
	return result;
}

// demosaic_diff_update_0_read
//	demosaic_diff_rd0
//	demosaic_diff_rd1
inline hw_uint<32> demosaic_demosaic_diff_update_0_read_bundle_read(demosaic_cache& demosaic, int d0, int d1) {
  // # of ports in bundle: 2
    // demosaic_diff_rd0
    // demosaic_diff_rd1

	hw_uint<32> result;
	hw_uint<16> demosaic_diff_rd0_res = demosaic_diff_rd0_select(demosaic, d0, d1);
	set_at<0, 32>(result, demosaic_diff_rd0_res);
	hw_uint<16> demosaic_diff_rd1_res = demosaic_diff_rd1_select(demosaic, d0, d1);
	set_at<16, 32>(result, demosaic_diff_rd1_res);
	return result;
}

// demosaic_update_0_write
//	demosaic_demosaic_update_0_write0
//	demosaic_demosaic_update_0_write1
inline void demosaic_demosaic_update_0_write_bundle_write(hw_uint<32>& demosaic_update_0_write, demosaic_cache& demosaic, int d0, int d1) {
	hw_uint<16> demosaic_demosaic_update_0_write0_res = demosaic_update_0_write.extract<0, 15>();
	demosaic_demosaic_update_0_write0_write(demosaic_demosaic_update_0_write0_res, demosaic, d0, d1);
	hw_uint<16> demosaic_demosaic_update_0_write1_res = demosaic_update_0_write.extract<16, 31>();
	demosaic_demosaic_update_0_write1_write(demosaic_demosaic_update_0_write1_res, demosaic, d0, d1);
}

#include "hw_classes.h"

struct demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3_cache {
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

struct demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3_cache {
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

struct demosaic_bx_cache {
  demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3;
};



inline void demosaic_bx_demosaic_bx_update_0_write0_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write0, demosaic_bx_cache& demosaic_bx, int d0, int d1) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write0);
}

inline void demosaic_bx_demosaic_bx_update_0_write1_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write1, demosaic_bx_cache& demosaic_bx, int d0, int d1) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write1);
}

inline hw_uint<16> demosaic_byb_rd0_select(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd0 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { demosaic_byb_update_0[d0, d1] -> 1920 : 0 < d0 <= 958 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> (961 + d0) : d0 = 959 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> 1920 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_1920();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_byb_rd1_select(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd1 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { demosaic_byb_update_0[d0, d1] -> 960 : 0 < d0 <= 958 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> (1 + d0) : d0 = 959 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_960();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_byb_rd2_select(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd2 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2d0, 2 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_byb_rd3_select(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd3 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { demosaic_byb_update_0[d0, d1] -> 1920 : 0 < d0 <= 958 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> (961 + d0) : d0 = 959 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> 1920 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_demosaic_bx_demosaic_bx_update_0_write1 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.peek_1920();
  return value_demosaic_bx_demosaic_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_byb_rd4_select(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd4 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: { demosaic_byb_update_0[d0, d1] -> 960 : 0 < d0 <= 958 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> (1 + d0) : d0 = 959 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> 960 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_demosaic_bx_demosaic_bx_update_0_write1 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.peek_960();
  return value_demosaic_bx_demosaic_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_byb_rd5_select(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_rd5 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 2d0, 2 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_demosaic_bx_demosaic_bx_update_0_write1 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// demosaic_bx_update_0_write
//	demosaic_bx_demosaic_bx_update_0_write0
//	demosaic_bx_demosaic_bx_update_0_write1
inline void demosaic_bx_demosaic_bx_update_0_write_bundle_write(hw_uint<32>& demosaic_bx_update_0_write, demosaic_bx_cache& demosaic_bx, int d0, int d1) {
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write0_res = demosaic_bx_update_0_write.extract<0, 15>();
	demosaic_bx_demosaic_bx_update_0_write0_write(demosaic_bx_demosaic_bx_update_0_write0_res, demosaic_bx, d0, d1);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write1_res = demosaic_bx_update_0_write.extract<16, 31>();
	demosaic_bx_demosaic_bx_update_0_write1_write(demosaic_bx_demosaic_bx_update_0_write1_res, demosaic_bx, d0, d1);
}

// demosaic_byb_update_0_read
//	demosaic_byb_rd0
//	demosaic_byb_rd1
//	demosaic_byb_rd2
//	demosaic_byb_rd3
//	demosaic_byb_rd4
//	demosaic_byb_rd5
inline hw_uint<96> demosaic_bx_demosaic_byb_update_0_read_bundle_read(demosaic_bx_cache& demosaic_bx, int d0, int d1) {
  // # of ports in bundle: 6
    // demosaic_byb_rd0
    // demosaic_byb_rd1
    // demosaic_byb_rd2
    // demosaic_byb_rd3
    // demosaic_byb_rd4
    // demosaic_byb_rd5

	hw_uint<96> result;
	hw_uint<16> demosaic_byb_rd0_res = demosaic_byb_rd0_select(demosaic_bx, d0, d1);
	set_at<0, 96>(result, demosaic_byb_rd0_res);
	hw_uint<16> demosaic_byb_rd1_res = demosaic_byb_rd1_select(demosaic_bx, d0, d1);
	set_at<16, 96>(result, demosaic_byb_rd1_res);
	hw_uint<16> demosaic_byb_rd2_res = demosaic_byb_rd2_select(demosaic_bx, d0, d1);
	set_at<32, 96>(result, demosaic_byb_rd2_res);
	hw_uint<16> demosaic_byb_rd3_res = demosaic_byb_rd3_select(demosaic_bx, d0, d1);
	set_at<48, 96>(result, demosaic_byb_rd3_res);
	hw_uint<16> demosaic_byb_rd4_res = demosaic_byb_rd4_select(demosaic_bx, d0, d1);
	set_at<64, 96>(result, demosaic_byb_rd4_res);
	hw_uint<16> demosaic_byb_rd5_res = demosaic_byb_rd5_select(demosaic_bx, d0, d1);
	set_at<80, 96>(result, demosaic_byb_rd5_res);
	return result;
}

#include "hw_classes.h"

struct demosaic_bxb_demosaic_bxb_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1918], [0, 1081]}
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

struct demosaic_bxb_demosaic_bxb_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1919], [0, 1081]}
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

struct demosaic_bxb_cache {
  demosaic_bxb_demosaic_bxb_update_0_write0_merged_banks_1_cache demosaic_bxb_demosaic_bxb_update_0_write0_merged_banks_1;
  demosaic_bxb_demosaic_bxb_update_0_write1_merged_banks_1_cache demosaic_bxb_demosaic_bxb_update_0_write1_merged_banks_1;
};



inline void demosaic_bxb_demosaic_bxb_update_0_write0_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write0, demosaic_bxb_cache& demosaic_bxb, int d0, int d1) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write0_merged_banks_1.push(demosaic_bxb_demosaic_bxb_update_0_write0);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write1_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write1, demosaic_bxb_cache& demosaic_bxb, int d0, int d1) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write1_merged_banks_1.push(demosaic_bxb_demosaic_bxb_update_0_write1);
}

inline hw_uint<16> demosaic_bx_rd0_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd0 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write0 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_bx_rd1_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_rd1 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 959 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write1 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// demosaic_bx_update_0_read
//	demosaic_bx_rd0
//	demosaic_bx_rd1
inline hw_uint<32> demosaic_bxb_demosaic_bx_update_0_read_bundle_read(demosaic_bxb_cache& demosaic_bxb, int d0, int d1) {
  // # of ports in bundle: 2
    // demosaic_bx_rd0
    // demosaic_bx_rd1

	hw_uint<32> result;
	hw_uint<16> demosaic_bx_rd0_res = demosaic_bx_rd0_select(demosaic_bxb, d0, d1);
	set_at<0, 32>(result, demosaic_bx_rd0_res);
	hw_uint<16> demosaic_bx_rd1_res = demosaic_bx_rd1_select(demosaic_bxb, d0, d1);
	set_at<16, 32>(result, demosaic_bx_rd1_res);
	return result;
}

// demosaic_bxb_update_0_write
//	demosaic_bxb_demosaic_bxb_update_0_write0
//	demosaic_bxb_demosaic_bxb_update_0_write1
inline void demosaic_bxb_demosaic_bxb_update_0_write_bundle_write(hw_uint<32>& demosaic_bxb_update_0_write, demosaic_bxb_cache& demosaic_bxb, int d0, int d1) {
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write0_res = demosaic_bxb_update_0_write.extract<0, 15>();
	demosaic_bxb_demosaic_bxb_update_0_write0_write(demosaic_bxb_demosaic_bxb_update_0_write0_res, demosaic_bxb, d0, d1);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write1_res = demosaic_bxb_update_0_write.extract<16, 31>();
	demosaic_bxb_demosaic_bxb_update_0_write1_write(demosaic_bxb_demosaic_bxb_update_0_write1_res, demosaic_bxb, d0, d1);
}

#include "hw_classes.h"

struct demosaic_by_demosaic_by_update_0_write0_merged_banks_1_cache {
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

struct demosaic_by_demosaic_by_update_0_write1_merged_banks_1_cache {
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

struct demosaic_by_cache {
  demosaic_by_demosaic_by_update_0_write0_merged_banks_1_cache demosaic_by_demosaic_by_update_0_write0_merged_banks_1;
  demosaic_by_demosaic_by_update_0_write1_merged_banks_1_cache demosaic_by_demosaic_by_update_0_write1_merged_banks_1;
};



inline void demosaic_by_demosaic_by_update_0_write0_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write0, demosaic_by_cache& demosaic_by, int d0, int d1) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write0_merged_banks_1.push(demosaic_by_demosaic_by_update_0_write0);
}

inline void demosaic_by_demosaic_by_update_0_write1_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write1, demosaic_by_cache& demosaic_by, int d0, int d1) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write1_merged_banks_1.push(demosaic_by_demosaic_by_update_0_write1);
}

inline hw_uint<16> demosaic_diff_rd0_select(demosaic_by_cache& demosaic_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd0 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_demosaic_by_demosaic_by_update_0_write0 = demosaic_by.demosaic_by_demosaic_by_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_diff_rd1_select(demosaic_by_cache& demosaic_by, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_rd1 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_demosaic_by_demosaic_by_update_0_write1 = demosaic_by.demosaic_by_demosaic_by_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// demosaic_by_update_0_write
//	demosaic_by_demosaic_by_update_0_write0
//	demosaic_by_demosaic_by_update_0_write1
inline void demosaic_by_demosaic_by_update_0_write_bundle_write(hw_uint<32>& demosaic_by_update_0_write, demosaic_by_cache& demosaic_by, int d0, int d1) {
	hw_uint<16> demosaic_by_demosaic_by_update_0_write0_res = demosaic_by_update_0_write.extract<0, 15>();
	demosaic_by_demosaic_by_update_0_write0_write(demosaic_by_demosaic_by_update_0_write0_res, demosaic_by, d0, d1);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write1_res = demosaic_by_update_0_write.extract<16, 31>();
	demosaic_by_demosaic_by_update_0_write1_write(demosaic_by_demosaic_by_update_0_write1_res, demosaic_by, d0, d1);
}

// demosaic_diff_update_0_read
//	demosaic_diff_rd0
//	demosaic_diff_rd1
inline hw_uint<32> demosaic_by_demosaic_diff_update_0_read_bundle_read(demosaic_by_cache& demosaic_by, int d0, int d1) {
  // # of ports in bundle: 2
    // demosaic_diff_rd0
    // demosaic_diff_rd1

	hw_uint<32> result;
	hw_uint<16> demosaic_diff_rd0_res = demosaic_diff_rd0_select(demosaic_by, d0, d1);
	set_at<0, 32>(result, demosaic_diff_rd0_res);
	hw_uint<16> demosaic_diff_rd1_res = demosaic_diff_rd1_select(demosaic_by, d0, d1);
	set_at<16, 32>(result, demosaic_diff_rd1_res);
	return result;
}

#include "hw_classes.h"

struct demosaic_byb_demosaic_byb_update_0_write0_merged_banks_1_cache {
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

struct demosaic_byb_demosaic_byb_update_0_write1_merged_banks_1_cache {
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

struct demosaic_byb_cache {
  demosaic_byb_demosaic_byb_update_0_write0_merged_banks_1_cache demosaic_byb_demosaic_byb_update_0_write0_merged_banks_1;
  demosaic_byb_demosaic_byb_update_0_write1_merged_banks_1_cache demosaic_byb_demosaic_byb_update_0_write1_merged_banks_1;
};



inline void demosaic_byb_demosaic_byb_update_0_write0_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write0, demosaic_byb_cache& demosaic_byb, int d0, int d1) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write0_merged_banks_1.push(demosaic_byb_demosaic_byb_update_0_write0);
}

inline void demosaic_byb_demosaic_byb_update_0_write1_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write1, demosaic_byb_cache& demosaic_byb, int d0, int d1) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write1_merged_banks_1.push(demosaic_byb_demosaic_byb_update_0_write1);
}

inline hw_uint<16> demosaic_by_rd0_select(demosaic_byb_cache& demosaic_byb, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd0 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_demosaic_byb_demosaic_byb_update_0_write0 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_by_rd1_select(demosaic_byb_cache& demosaic_byb, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_rd1 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_demosaic_byb_demosaic_byb_update_0_write1 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// demosaic_by_update_0_read
//	demosaic_by_rd0
//	demosaic_by_rd1
inline hw_uint<32> demosaic_byb_demosaic_by_update_0_read_bundle_read(demosaic_byb_cache& demosaic_byb, int d0, int d1) {
  // # of ports in bundle: 2
    // demosaic_by_rd0
    // demosaic_by_rd1

	hw_uint<32> result;
	hw_uint<16> demosaic_by_rd0_res = demosaic_by_rd0_select(demosaic_byb, d0, d1);
	set_at<0, 32>(result, demosaic_by_rd0_res);
	hw_uint<16> demosaic_by_rd1_res = demosaic_by_rd1_select(demosaic_byb, d0, d1);
	set_at<16, 32>(result, demosaic_by_rd1_res);
	return result;
}

// demosaic_byb_update_0_write
//	demosaic_byb_demosaic_byb_update_0_write0
//	demosaic_byb_demosaic_byb_update_0_write1
inline void demosaic_byb_demosaic_byb_update_0_write_bundle_write(hw_uint<32>& demosaic_byb_update_0_write, demosaic_byb_cache& demosaic_byb, int d0, int d1) {
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write0_res = demosaic_byb_update_0_write.extract<0, 15>();
	demosaic_byb_demosaic_byb_update_0_write0_write(demosaic_byb_demosaic_byb_update_0_write0_res, demosaic_byb, d0, d1);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write1_res = demosaic_byb_update_0_write.extract<16, 31>();
	demosaic_byb_demosaic_byb_update_0_write1_write(demosaic_byb_demosaic_byb_update_0_write1_res, demosaic_byb, d0, d1);
}

#include "hw_classes.h"

struct demosaic_diff_demosaic_diff_update_0_write0_merged_banks_1_cache {
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

struct demosaic_diff_demosaic_diff_update_0_write1_merged_banks_1_cache {
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

struct demosaic_diff_cache {
  demosaic_diff_demosaic_diff_update_0_write0_merged_banks_1_cache demosaic_diff_demosaic_diff_update_0_write0_merged_banks_1;
  demosaic_diff_demosaic_diff_update_0_write1_merged_banks_1_cache demosaic_diff_demosaic_diff_update_0_write1_merged_banks_1;
};



inline void demosaic_diff_demosaic_diff_update_0_write0_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write0, demosaic_diff_cache& demosaic_diff, int d0, int d1) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write0_merged_banks_1.push(demosaic_diff_demosaic_diff_update_0_write0);
}

inline void demosaic_diff_demosaic_diff_update_0_write1_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write1, demosaic_diff_cache& demosaic_diff, int d0, int d1) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write1_merged_banks_1.push(demosaic_diff_demosaic_diff_update_0_write1);
}

inline hw_uint<16> cp_noinit_20_2_rd0_select(demosaic_diff_cache& demosaic_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_20_2_rd0 read pattern: { cp_noinit_20_2_update_0[d0, d1] -> demosaic_diff[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_20_2_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_demosaic_diff_demosaic_diff_update_0_write0 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> cp_noinit_20_2_rd1_select(demosaic_diff_cache& demosaic_diff, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cp_noinit_20_2_rd1 read pattern: { cp_noinit_20_2_update_0[d0, d1] -> demosaic_diff[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_20_2_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_demosaic_diff_demosaic_diff_update_0_write1 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// cp_noinit_20_2_update_0_read
//	cp_noinit_20_2_rd0
//	cp_noinit_20_2_rd1
inline hw_uint<32> demosaic_diff_cp_noinit_20_2_update_0_read_bundle_read(demosaic_diff_cache& demosaic_diff, int d0, int d1) {
  // # of ports in bundle: 2
    // cp_noinit_20_2_rd0
    // cp_noinit_20_2_rd1

	hw_uint<32> result;
	hw_uint<16> cp_noinit_20_2_rd0_res = cp_noinit_20_2_rd0_select(demosaic_diff, d0, d1);
	set_at<0, 32>(result, cp_noinit_20_2_rd0_res);
	hw_uint<16> cp_noinit_20_2_rd1_res = cp_noinit_20_2_rd1_select(demosaic_diff, d0, d1);
	set_at<16, 32>(result, cp_noinit_20_2_rd1_res);
	return result;
}

// demosaic_diff_update_0_write
//	demosaic_diff_demosaic_diff_update_0_write0
//	demosaic_diff_demosaic_diff_update_0_write1
inline void demosaic_diff_demosaic_diff_update_0_write_bundle_write(hw_uint<32>& demosaic_diff_update_0_write, demosaic_diff_cache& demosaic_diff, int d0, int d1) {
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write0_res = demosaic_diff_update_0_write.extract<0, 15>();
	demosaic_diff_demosaic_diff_update_0_write0_write(demosaic_diff_demosaic_diff_update_0_write0_res, demosaic_diff, d0, d1);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write1_res = demosaic_diff_update_0_write.extract<16, 31>();
	demosaic_diff_demosaic_diff_update_0_write1_write(demosaic_diff_demosaic_diff_update_0_write1_res, demosaic_diff, d0, d1);
}

#include "hw_classes.h"

struct demosaicb_demosaicb_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
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

struct demosaicb_demosaicb_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
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

struct demosaicb_cache {
  demosaicb_demosaicb_update_0_write0_merged_banks_1_cache demosaicb_demosaicb_update_0_write0_merged_banks_1;
  demosaicb_demosaicb_update_0_write1_merged_banks_1_cache demosaicb_demosaicb_update_0_write1_merged_banks_1;
};



inline void demosaicb_demosaicb_update_0_write0_write(hw_uint<16>& demosaicb_demosaicb_update_0_write0, demosaicb_cache& demosaicb, int d0, int d1) {
  demosaicb.demosaicb_demosaicb_update_0_write0_merged_banks_1.push(demosaicb_demosaicb_update_0_write0);
}

inline void demosaicb_demosaicb_update_0_write1_write(hw_uint<16>& demosaicb_demosaicb_update_0_write1, demosaicb_cache& demosaicb, int d0, int d1) {
  demosaicb.demosaicb_demosaicb_update_0_write1_merged_banks_1.push(demosaicb_demosaicb_update_0_write1);
}

inline hw_uint<16> demosaic_rd0_select(demosaicb_cache& demosaicb, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd0 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_demosaicb_demosaicb_update_0_write0 = demosaicb.demosaicb_demosaicb_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaic_rd1_select(demosaicb_cache& demosaicb, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_rd1 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_demosaicb_demosaicb_update_0_write1 = demosaicb.demosaicb_demosaicb_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write1;
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
inline hw_uint<32> demosaicb_demosaic_update_0_read_bundle_read(demosaicb_cache& demosaicb, int d0, int d1) {
  // # of ports in bundle: 2
    // demosaic_rd0
    // demosaic_rd1

	hw_uint<32> result;
	hw_uint<16> demosaic_rd0_res = demosaic_rd0_select(demosaicb, d0, d1);
	set_at<0, 32>(result, demosaic_rd0_res);
	hw_uint<16> demosaic_rd1_res = demosaic_rd1_select(demosaicb, d0, d1);
	set_at<16, 32>(result, demosaic_rd1_res);
	return result;
}

// demosaicb_update_0_write
//	demosaicb_demosaicb_update_0_write0
//	demosaicb_demosaicb_update_0_write1
inline void demosaicb_demosaicb_update_0_write_bundle_write(hw_uint<32>& demosaicb_update_0_write, demosaicb_cache& demosaicb, int d0, int d1) {
	hw_uint<16> demosaicb_demosaicb_update_0_write0_res = demosaicb_update_0_write.extract<0, 15>();
	demosaicb_demosaicb_update_0_write0_write(demosaicb_demosaicb_update_0_write0_res, demosaicb, d0, d1);
	hw_uint<16> demosaicb_demosaicb_update_0_write1_res = demosaicb_update_0_write.extract<16, 31>();
	demosaicb_demosaicb_update_0_write1_write(demosaicb_demosaicb_update_0_write1_res, demosaicb, d0, d1);
}

#include "hw_classes.h"

struct denoise_denoise_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-2, 1922], [-1, 1082]}
	// Capacity: 1928
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 961> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 961> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_964() {
		return f6;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1926() {
		return f8;
	}

	inline hw_uint<16> peek_1927() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct denoise_denoise_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-1, 1923], [-1, 1082]}
	// Capacity: 1929
	// # of read delays: 7
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 961> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 961> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_964() {
		return f6;
	}

	inline hw_uint<16> peek_965() {
		return f8;
	}

	inline hw_uint<16> peek_1926() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_1927() {
		return f10;
	}

	inline hw_uint<16> peek_1928() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 961
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 961 reading from capacity: 1
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

struct denoise_cache {
  denoise_denoise_update_0_write0_merged_banks_9_cache denoise_denoise_update_0_write0_merged_banks_9;
  denoise_denoise_update_0_write1_merged_banks_9_cache denoise_denoise_update_0_write1_merged_banks_9;
};



inline void denoise_denoise_update_0_write0_write(hw_uint<16>& denoise_denoise_update_0_write0, denoise_cache& denoise, int d0, int d1) {
  denoise.denoise_denoise_update_0_write0_merged_banks_9.push(denoise_denoise_update_0_write0);
}

inline void denoise_denoise_update_0_write1_write(hw_uint<16>& denoise_denoise_update_0_write1, denoise_cache& denoise, int d0, int d1) {
  denoise.denoise_denoise_update_0_write1_merged_banks_9.push(denoise_denoise_update_0_write1);
}

inline hw_uint<16> demosaicb_rd0_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd0 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + 2d0, -1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 1928 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1928();
  return value_denoise_denoise_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd1_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd1 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 965 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_965();
  return value_denoise_denoise_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd10_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd10 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 964 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_964();
  return value_denoise_denoise_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd11_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd11 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd12_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd12 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 2d0, -1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 1927 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1927();
  return value_denoise_denoise_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd13_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd13 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 964 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_964();
  return value_denoise_denoise_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd14_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd14 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd15_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd15 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 2d0, -1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 1926 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; demosaicb_update_0[d0, d1] -> (966 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1926();
  return value_denoise_denoise_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd16_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd16 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 963 : 0 <= d0 <= 959 and 0 <= d1 <= 1081; demosaicb_update_0[d0, d1] -> (3 + d0) : d0 = 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_963();
  return value_denoise_denoise_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd17_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd17 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: {  }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_0();
  return value_denoise_denoise_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd2_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd2 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 2 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_2();
  return value_denoise_denoise_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd3_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd3 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2d0, -1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 1927 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1927();
  return value_denoise_denoise_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd4_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd4 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 964 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_964();
  return value_denoise_denoise_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd5_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd5 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd6_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd6 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 2d0, -1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 1927 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1927();
  return value_denoise_denoise_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd7_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd7 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 2d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 964 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_964();
  return value_denoise_denoise_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd8_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd8 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 2d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 1 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> demosaicb_rd9_select(denoise_cache& denoise, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_rd9 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2d0, -1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: { demosaicb_update_0[d0, d1] -> 1927 : 0 <= d0 <= 960 and 0 <= d1 <= 1081 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1927();
  return value_denoise_denoise_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// demosaicb_update_0_read
//	demosaicb_rd0
//	demosaicb_rd1
//	demosaicb_rd2
//	demosaicb_rd3
//	demosaicb_rd4
//	demosaicb_rd5
//	demosaicb_rd6
//	demosaicb_rd7
//	demosaicb_rd8
//	demosaicb_rd9
//	demosaicb_rd10
//	demosaicb_rd11
//	demosaicb_rd12
//	demosaicb_rd13
//	demosaicb_rd14
//	demosaicb_rd15
//	demosaicb_rd16
//	demosaicb_rd17
inline hw_uint<288> denoise_demosaicb_update_0_read_bundle_read(denoise_cache& denoise, int d0, int d1) {
  // # of ports in bundle: 18
    // demosaicb_rd0
    // demosaicb_rd1
    // demosaicb_rd2
    // demosaicb_rd3
    // demosaicb_rd4
    // demosaicb_rd5
    // demosaicb_rd6
    // demosaicb_rd7
    // demosaicb_rd8
    // demosaicb_rd9
    // demosaicb_rd10
    // demosaicb_rd11
    // demosaicb_rd12
    // demosaicb_rd13
    // demosaicb_rd14
    // demosaicb_rd15
    // demosaicb_rd16
    // demosaicb_rd17

	hw_uint<288> result;
	hw_uint<16> demosaicb_rd0_res = demosaicb_rd0_select(denoise, d0, d1);
	set_at<0, 288>(result, demosaicb_rd0_res);
	hw_uint<16> demosaicb_rd1_res = demosaicb_rd1_select(denoise, d0, d1);
	set_at<16, 288>(result, demosaicb_rd1_res);
	hw_uint<16> demosaicb_rd2_res = demosaicb_rd2_select(denoise, d0, d1);
	set_at<32, 288>(result, demosaicb_rd2_res);
	hw_uint<16> demosaicb_rd3_res = demosaicb_rd3_select(denoise, d0, d1);
	set_at<48, 288>(result, demosaicb_rd3_res);
	hw_uint<16> demosaicb_rd4_res = demosaicb_rd4_select(denoise, d0, d1);
	set_at<64, 288>(result, demosaicb_rd4_res);
	hw_uint<16> demosaicb_rd5_res = demosaicb_rd5_select(denoise, d0, d1);
	set_at<80, 288>(result, demosaicb_rd5_res);
	hw_uint<16> demosaicb_rd6_res = demosaicb_rd6_select(denoise, d0, d1);
	set_at<96, 288>(result, demosaicb_rd6_res);
	hw_uint<16> demosaicb_rd7_res = demosaicb_rd7_select(denoise, d0, d1);
	set_at<112, 288>(result, demosaicb_rd7_res);
	hw_uint<16> demosaicb_rd8_res = demosaicb_rd8_select(denoise, d0, d1);
	set_at<128, 288>(result, demosaicb_rd8_res);
	hw_uint<16> demosaicb_rd9_res = demosaicb_rd9_select(denoise, d0, d1);
	set_at<144, 288>(result, demosaicb_rd9_res);
	hw_uint<16> demosaicb_rd10_res = demosaicb_rd10_select(denoise, d0, d1);
	set_at<160, 288>(result, demosaicb_rd10_res);
	hw_uint<16> demosaicb_rd11_res = demosaicb_rd11_select(denoise, d0, d1);
	set_at<176, 288>(result, demosaicb_rd11_res);
	hw_uint<16> demosaicb_rd12_res = demosaicb_rd12_select(denoise, d0, d1);
	set_at<192, 288>(result, demosaicb_rd12_res);
	hw_uint<16> demosaicb_rd13_res = demosaicb_rd13_select(denoise, d0, d1);
	set_at<208, 288>(result, demosaicb_rd13_res);
	hw_uint<16> demosaicb_rd14_res = demosaicb_rd14_select(denoise, d0, d1);
	set_at<224, 288>(result, demosaicb_rd14_res);
	hw_uint<16> demosaicb_rd15_res = demosaicb_rd15_select(denoise, d0, d1);
	set_at<240, 288>(result, demosaicb_rd15_res);
	hw_uint<16> demosaicb_rd16_res = demosaicb_rd16_select(denoise, d0, d1);
	set_at<256, 288>(result, demosaicb_rd16_res);
	hw_uint<16> demosaicb_rd17_res = demosaicb_rd17_select(denoise, d0, d1);
	set_at<272, 288>(result, demosaicb_rd17_res);
	return result;
}

// denoise_update_0_write
//	denoise_denoise_update_0_write0
//	denoise_denoise_update_0_write1
inline void denoise_denoise_update_0_write_bundle_write(hw_uint<32>& denoise_update_0_write, denoise_cache& denoise, int d0, int d1) {
	hw_uint<16> denoise_denoise_update_0_write0_res = denoise_update_0_write.extract<0, 15>();
	denoise_denoise_update_0_write0_write(denoise_denoise_update_0_write0_res, denoise, d0, d1);
	hw_uint<16> denoise_denoise_update_0_write1_res = denoise_update_0_write.extract<16, 31>();
	denoise_denoise_update_0_write1_write(denoise_denoise_update_0_write1_res, denoise, d0, d1);
}

#include "hw_classes.h"

struct denoiseb_denoiseb_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[-2, 1922], [-1, 1082]}
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

struct denoiseb_denoiseb_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[-1, 1923], [-1, 1082]}
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

struct denoiseb_cache {
  denoiseb_denoiseb_update_0_write0_merged_banks_1_cache denoiseb_denoiseb_update_0_write0_merged_banks_1;
  denoiseb_denoiseb_update_0_write1_merged_banks_1_cache denoiseb_denoiseb_update_0_write1_merged_banks_1;
};



inline void denoiseb_denoiseb_update_0_write0_write(hw_uint<16>& denoiseb_denoiseb_update_0_write0, denoiseb_cache& denoiseb, int d0, int d1) {
  denoiseb.denoiseb_denoiseb_update_0_write0_merged_banks_1.push(denoiseb_denoiseb_update_0_write0);
}

inline void denoiseb_denoiseb_update_0_write1_write(hw_uint<16>& denoiseb_denoiseb_update_0_write1, denoiseb_cache& denoiseb, int d0, int d1) {
  denoiseb.denoiseb_denoiseb_update_0_write1_merged_banks_1.push(denoiseb_denoiseb_update_0_write1);
}

inline hw_uint<16> denoise_rd0_select(denoiseb_cache& denoiseb, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd0 read pattern: { denoise_update_0[d0, d1] -> denoiseb[2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: {  }
  auto value_denoiseb_denoiseb_update_0_write0 = denoiseb.denoiseb_denoiseb_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoise_rd1_select(denoiseb_cache& denoiseb, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_rd1 read pattern: { denoise_update_0[d0, d1] -> denoiseb[1 + 2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // DD fold: {  }
  auto value_denoiseb_denoiseb_update_0_write1 = denoiseb.denoiseb_denoiseb_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// denoise_update_0_read
//	denoise_rd0
//	denoise_rd1
inline hw_uint<32> denoiseb_denoise_update_0_read_bundle_read(denoiseb_cache& denoiseb, int d0, int d1) {
  // # of ports in bundle: 2
    // denoise_rd0
    // denoise_rd1

	hw_uint<32> result;
	hw_uint<16> denoise_rd0_res = denoise_rd0_select(denoiseb, d0, d1);
	set_at<0, 32>(result, denoise_rd0_res);
	hw_uint<16> denoise_rd1_res = denoise_rd1_select(denoiseb, d0, d1);
	set_at<16, 32>(result, denoise_rd1_res);
	return result;
}

// denoiseb_update_0_write
//	denoiseb_denoiseb_update_0_write0
//	denoiseb_denoiseb_update_0_write1
inline void denoiseb_denoiseb_update_0_write_bundle_write(hw_uint<32>& denoiseb_update_0_write, denoiseb_cache& denoiseb, int d0, int d1) {
	hw_uint<16> denoiseb_denoiseb_update_0_write0_res = denoiseb_update_0_write.extract<0, 15>();
	denoiseb_denoiseb_update_0_write0_write(denoiseb_denoiseb_update_0_write0_res, denoiseb, d0, d1);
	hw_uint<16> denoiseb_denoiseb_update_0_write1_res = denoiseb_update_0_write.extract<16, 31>();
	denoiseb_denoiseb_update_0_write1_write(denoiseb_denoiseb_update_0_write1_res, denoiseb, d0, d1);
}

#include "hw_classes.h"

struct raw_raw_update_0_write0_merged_banks_25_cache {
	// RAM Box: {[-4, 1924], [-3, 1084]}
	// Capacity: 3863
	// # of read delays: 15
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 962> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 962> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	fifo<hw_uint<16>, 962> f17;
	hw_uint<16> f18;
	hw_uint<16> f20;
	hw_uint<16> f22;
	fifo<hw_uint<16>, 962> f23;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
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

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}

	inline hw_uint<16> peek_1929() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1930() {
		return f12;
	}

	inline hw_uint<16> peek_1931() {
		return f14;
	}

	inline hw_uint<16> peek_1932() {
		return f16;
	}

	inline hw_uint<16> peek_2894() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f17.back();
	}

	inline hw_uint<16> peek_2895() {
		return f18;
	}

	inline hw_uint<16> peek_2896() {
		return f20;
	}

	inline hw_uint<16> peek_2897() {
		return f22;
	}

	inline hw_uint<16> peek_3859() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f23.back();
	}

	inline hw_uint<16> peek_3860() {
		return f24;
	}

	inline hw_uint<16> peek_3861() {
		return f26;
	}

	inline hw_uint<16> peek_3862() {
		return f28;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 962
    f24 = f23.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f23.push(f22);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f18 = f17.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f17.push(f16);
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
    // cap: 1 reading from capacity: 962
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
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
    // cap: 1 reading from capacity: 962
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
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

struct raw_raw_update_0_write1_merged_banks_25_cache {
	// RAM Box: {[-3, 1925], [-3, 1084]}
	// Capacity: 3863
	// # of read delays: 15
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 962> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 962> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	fifo<hw_uint<16>, 962> f17;
	hw_uint<16> f18;
	hw_uint<16> f20;
	hw_uint<16> f22;
	fifo<hw_uint<16>, 962> f23;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
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

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}

	inline hw_uint<16> peek_1929() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1930() {
		return f12;
	}

	inline hw_uint<16> peek_1931() {
		return f14;
	}

	inline hw_uint<16> peek_1932() {
		return f16;
	}

	inline hw_uint<16> peek_2894() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f17.back();
	}

	inline hw_uint<16> peek_2895() {
		return f18;
	}

	inline hw_uint<16> peek_2896() {
		return f20;
	}

	inline hw_uint<16> peek_2897() {
		return f22;
	}

	inline hw_uint<16> peek_3859() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f23.back();
	}

	inline hw_uint<16> peek_3860() {
		return f24;
	}

	inline hw_uint<16> peek_3861() {
		return f26;
	}

	inline hw_uint<16> peek_3862() {
		return f28;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 962
    f24 = f23.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f23.push(f22);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f18 = f17.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f17.push(f16);
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
    // cap: 1 reading from capacity: 962
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
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
    // cap: 1 reading from capacity: 962
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
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
  raw_raw_update_0_write0_merged_banks_25_cache raw_raw_update_0_write0_merged_banks_25;
  raw_raw_update_0_write1_merged_banks_25_cache raw_raw_update_0_write1_merged_banks_25;
};



inline void raw_raw_update_0_write0_write(hw_uint<16>& raw_raw_update_0_write0, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write0_merged_banks_25.push(raw_raw_update_0_write0);
}

inline void raw_raw_update_0_write1_write(hw_uint<16>& raw_raw_update_0_write1, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write1_merged_banks_25.push(raw_raw_update_0_write1);
}

inline hw_uint<16> denoiseb_rd0_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd0 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 2d0, -2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 3862 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3862();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd1_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd1 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 2d0, -1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2897 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_2897();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd10_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd10 read pattern: { denoiseb_update_0[d0, d1] -> raw[2d0, -2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 3861 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3861();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd11_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd11 read pattern: { denoiseb_update_0[d0, d1] -> raw[2d0, -1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2896 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_2896();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd12_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd12 read pattern: { denoiseb_update_0[d0, d1] -> raw[2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1931 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1931();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd13_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd13 read pattern: { denoiseb_update_0[d0, d1] -> raw[2d0, 1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 966 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_966();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd14_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd14 read pattern: { denoiseb_update_0[d0, d1] -> raw[2d0, 2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd15_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd15 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 2d0, -2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 3861 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_3861();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd16_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd16 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 2d0, -1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2896 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_2896();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd17_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd17 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1931 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1931();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd18_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd18 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 2d0, 1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 966 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_966();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd19_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd19 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 2d0, 2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd2 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1932 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1932();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd20_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd20 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 2d0, -2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 3860 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (2899 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3860();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd21_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd21 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 2d0, -1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2895 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (1934 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_2895();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd22_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd22 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1930 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (969 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1930();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd23_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd23 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 2d0, 1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 965 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (4 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_965();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd24_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd24 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 2d0, 2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd25_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd25 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 2d0, -2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 3862 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_3862();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd26_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd26 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 2d0, -1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2897 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_2897();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd27_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd27 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1932 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1932();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd28_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd28 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 2d0, 1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 967 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_967();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd29_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd29 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 2d0, 2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd3_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd3 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 2d0, 1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 967 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_967();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd30_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd30 read pattern: { denoiseb_update_0[d0, d1] -> raw[2d0, -2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 3861 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3861();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd31_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd31 read pattern: { denoiseb_update_0[d0, d1] -> raw[2d0, -1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2896 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_2896();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd32_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd32 read pattern: { denoiseb_update_0[d0, d1] -> raw[2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1931 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1931();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd33_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd33 read pattern: { denoiseb_update_0[d0, d1] -> raw[2d0, 1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 966 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_966();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd34_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd34 read pattern: { denoiseb_update_0[d0, d1] -> raw[2d0, 2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd35_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd35 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 2d0, -2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 3861 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_3861();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd36_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd36 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 2d0, -1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2896 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_2896();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd37_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd37 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1931 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1931();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd38_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd38 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 2d0, 1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 966 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_966();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd39_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd39 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 2d0, 2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd4_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd4 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 2d0, 2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd40_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd40 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 2d0, -2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 3860 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (2899 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3860();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd41_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd41 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 2d0, -1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2895 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (1934 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_2895();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd42_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd42 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1930 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (969 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1930();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd43_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd43 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 2d0, 1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 965 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (4 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_965();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd44_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd44 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 2d0, 2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd45_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd45 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 2d0, -2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 3860 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (2899 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_3860();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd46_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd46 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 2d0, -1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2895 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (1934 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_2895();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd47_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd47 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1930 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (969 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1930();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd48_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd48 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 2d0, 1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 965 : -1 <= d0 <= 960 and -1 <= d1 <= 1082; denoiseb_update_0[d0, d1] -> (4 + d0) : d0 = 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_965();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd49_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd49 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 2d0, 2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd5_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd5 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 2d0, -2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 3862 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_3862();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd6_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd6 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 2d0, -1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2897 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_2897();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd7_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd7 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 2d0, d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 1932 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1932();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd8_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd8 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 2d0, 1 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 967 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_967();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoiseb_rd9_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_rd9 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 2d0, 2 + d1] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 962 and -3 <= d1 <= 1084 }
  // DD fold: { denoiseb_update_0[d0, d1] -> 2 : -1 <= d0 <= 961 and -1 <= d1 <= 1082 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// denoiseb_update_0_read
//	denoiseb_rd0
//	denoiseb_rd1
//	denoiseb_rd2
//	denoiseb_rd3
//	denoiseb_rd4
//	denoiseb_rd5
//	denoiseb_rd6
//	denoiseb_rd7
//	denoiseb_rd8
//	denoiseb_rd9
//	denoiseb_rd10
//	denoiseb_rd11
//	denoiseb_rd12
//	denoiseb_rd13
//	denoiseb_rd14
//	denoiseb_rd15
//	denoiseb_rd16
//	denoiseb_rd17
//	denoiseb_rd18
//	denoiseb_rd19
//	denoiseb_rd20
//	denoiseb_rd21
//	denoiseb_rd22
//	denoiseb_rd23
//	denoiseb_rd24
//	denoiseb_rd25
//	denoiseb_rd26
//	denoiseb_rd27
//	denoiseb_rd28
//	denoiseb_rd29
//	denoiseb_rd30
//	denoiseb_rd31
//	denoiseb_rd32
//	denoiseb_rd33
//	denoiseb_rd34
//	denoiseb_rd35
//	denoiseb_rd36
//	denoiseb_rd37
//	denoiseb_rd38
//	denoiseb_rd39
//	denoiseb_rd40
//	denoiseb_rd41
//	denoiseb_rd42
//	denoiseb_rd43
//	denoiseb_rd44
//	denoiseb_rd45
//	denoiseb_rd46
//	denoiseb_rd47
//	denoiseb_rd48
//	denoiseb_rd49
inline hw_uint<800> raw_denoiseb_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 50
    // denoiseb_rd0
    // denoiseb_rd1
    // denoiseb_rd2
    // denoiseb_rd3
    // denoiseb_rd4
    // denoiseb_rd5
    // denoiseb_rd6
    // denoiseb_rd7
    // denoiseb_rd8
    // denoiseb_rd9
    // denoiseb_rd10
    // denoiseb_rd11
    // denoiseb_rd12
    // denoiseb_rd13
    // denoiseb_rd14
    // denoiseb_rd15
    // denoiseb_rd16
    // denoiseb_rd17
    // denoiseb_rd18
    // denoiseb_rd19
    // denoiseb_rd20
    // denoiseb_rd21
    // denoiseb_rd22
    // denoiseb_rd23
    // denoiseb_rd24
    // denoiseb_rd25
    // denoiseb_rd26
    // denoiseb_rd27
    // denoiseb_rd28
    // denoiseb_rd29
    // denoiseb_rd30
    // denoiseb_rd31
    // denoiseb_rd32
    // denoiseb_rd33
    // denoiseb_rd34
    // denoiseb_rd35
    // denoiseb_rd36
    // denoiseb_rd37
    // denoiseb_rd38
    // denoiseb_rd39
    // denoiseb_rd40
    // denoiseb_rd41
    // denoiseb_rd42
    // denoiseb_rd43
    // denoiseb_rd44
    // denoiseb_rd45
    // denoiseb_rd46
    // denoiseb_rd47
    // denoiseb_rd48
    // denoiseb_rd49

	hw_uint<800> result;
	hw_uint<16> denoiseb_rd0_res = denoiseb_rd0_select(raw, d0, d1);
	set_at<0, 800>(result, denoiseb_rd0_res);
	hw_uint<16> denoiseb_rd1_res = denoiseb_rd1_select(raw, d0, d1);
	set_at<16, 800>(result, denoiseb_rd1_res);
	hw_uint<16> denoiseb_rd2_res = denoiseb_rd2_select(raw, d0, d1);
	set_at<32, 800>(result, denoiseb_rd2_res);
	hw_uint<16> denoiseb_rd3_res = denoiseb_rd3_select(raw, d0, d1);
	set_at<48, 800>(result, denoiseb_rd3_res);
	hw_uint<16> denoiseb_rd4_res = denoiseb_rd4_select(raw, d0, d1);
	set_at<64, 800>(result, denoiseb_rd4_res);
	hw_uint<16> denoiseb_rd5_res = denoiseb_rd5_select(raw, d0, d1);
	set_at<80, 800>(result, denoiseb_rd5_res);
	hw_uint<16> denoiseb_rd6_res = denoiseb_rd6_select(raw, d0, d1);
	set_at<96, 800>(result, denoiseb_rd6_res);
	hw_uint<16> denoiseb_rd7_res = denoiseb_rd7_select(raw, d0, d1);
	set_at<112, 800>(result, denoiseb_rd7_res);
	hw_uint<16> denoiseb_rd8_res = denoiseb_rd8_select(raw, d0, d1);
	set_at<128, 800>(result, denoiseb_rd8_res);
	hw_uint<16> denoiseb_rd9_res = denoiseb_rd9_select(raw, d0, d1);
	set_at<144, 800>(result, denoiseb_rd9_res);
	hw_uint<16> denoiseb_rd10_res = denoiseb_rd10_select(raw, d0, d1);
	set_at<160, 800>(result, denoiseb_rd10_res);
	hw_uint<16> denoiseb_rd11_res = denoiseb_rd11_select(raw, d0, d1);
	set_at<176, 800>(result, denoiseb_rd11_res);
	hw_uint<16> denoiseb_rd12_res = denoiseb_rd12_select(raw, d0, d1);
	set_at<192, 800>(result, denoiseb_rd12_res);
	hw_uint<16> denoiseb_rd13_res = denoiseb_rd13_select(raw, d0, d1);
	set_at<208, 800>(result, denoiseb_rd13_res);
	hw_uint<16> denoiseb_rd14_res = denoiseb_rd14_select(raw, d0, d1);
	set_at<224, 800>(result, denoiseb_rd14_res);
	hw_uint<16> denoiseb_rd15_res = denoiseb_rd15_select(raw, d0, d1);
	set_at<240, 800>(result, denoiseb_rd15_res);
	hw_uint<16> denoiseb_rd16_res = denoiseb_rd16_select(raw, d0, d1);
	set_at<256, 800>(result, denoiseb_rd16_res);
	hw_uint<16> denoiseb_rd17_res = denoiseb_rd17_select(raw, d0, d1);
	set_at<272, 800>(result, denoiseb_rd17_res);
	hw_uint<16> denoiseb_rd18_res = denoiseb_rd18_select(raw, d0, d1);
	set_at<288, 800>(result, denoiseb_rd18_res);
	hw_uint<16> denoiseb_rd19_res = denoiseb_rd19_select(raw, d0, d1);
	set_at<304, 800>(result, denoiseb_rd19_res);
	hw_uint<16> denoiseb_rd20_res = denoiseb_rd20_select(raw, d0, d1);
	set_at<320, 800>(result, denoiseb_rd20_res);
	hw_uint<16> denoiseb_rd21_res = denoiseb_rd21_select(raw, d0, d1);
	set_at<336, 800>(result, denoiseb_rd21_res);
	hw_uint<16> denoiseb_rd22_res = denoiseb_rd22_select(raw, d0, d1);
	set_at<352, 800>(result, denoiseb_rd22_res);
	hw_uint<16> denoiseb_rd23_res = denoiseb_rd23_select(raw, d0, d1);
	set_at<368, 800>(result, denoiseb_rd23_res);
	hw_uint<16> denoiseb_rd24_res = denoiseb_rd24_select(raw, d0, d1);
	set_at<384, 800>(result, denoiseb_rd24_res);
	hw_uint<16> denoiseb_rd25_res = denoiseb_rd25_select(raw, d0, d1);
	set_at<400, 800>(result, denoiseb_rd25_res);
	hw_uint<16> denoiseb_rd26_res = denoiseb_rd26_select(raw, d0, d1);
	set_at<416, 800>(result, denoiseb_rd26_res);
	hw_uint<16> denoiseb_rd27_res = denoiseb_rd27_select(raw, d0, d1);
	set_at<432, 800>(result, denoiseb_rd27_res);
	hw_uint<16> denoiseb_rd28_res = denoiseb_rd28_select(raw, d0, d1);
	set_at<448, 800>(result, denoiseb_rd28_res);
	hw_uint<16> denoiseb_rd29_res = denoiseb_rd29_select(raw, d0, d1);
	set_at<464, 800>(result, denoiseb_rd29_res);
	hw_uint<16> denoiseb_rd30_res = denoiseb_rd30_select(raw, d0, d1);
	set_at<480, 800>(result, denoiseb_rd30_res);
	hw_uint<16> denoiseb_rd31_res = denoiseb_rd31_select(raw, d0, d1);
	set_at<496, 800>(result, denoiseb_rd31_res);
	hw_uint<16> denoiseb_rd32_res = denoiseb_rd32_select(raw, d0, d1);
	set_at<512, 800>(result, denoiseb_rd32_res);
	hw_uint<16> denoiseb_rd33_res = denoiseb_rd33_select(raw, d0, d1);
	set_at<528, 800>(result, denoiseb_rd33_res);
	hw_uint<16> denoiseb_rd34_res = denoiseb_rd34_select(raw, d0, d1);
	set_at<544, 800>(result, denoiseb_rd34_res);
	hw_uint<16> denoiseb_rd35_res = denoiseb_rd35_select(raw, d0, d1);
	set_at<560, 800>(result, denoiseb_rd35_res);
	hw_uint<16> denoiseb_rd36_res = denoiseb_rd36_select(raw, d0, d1);
	set_at<576, 800>(result, denoiseb_rd36_res);
	hw_uint<16> denoiseb_rd37_res = denoiseb_rd37_select(raw, d0, d1);
	set_at<592, 800>(result, denoiseb_rd37_res);
	hw_uint<16> denoiseb_rd38_res = denoiseb_rd38_select(raw, d0, d1);
	set_at<608, 800>(result, denoiseb_rd38_res);
	hw_uint<16> denoiseb_rd39_res = denoiseb_rd39_select(raw, d0, d1);
	set_at<624, 800>(result, denoiseb_rd39_res);
	hw_uint<16> denoiseb_rd40_res = denoiseb_rd40_select(raw, d0, d1);
	set_at<640, 800>(result, denoiseb_rd40_res);
	hw_uint<16> denoiseb_rd41_res = denoiseb_rd41_select(raw, d0, d1);
	set_at<656, 800>(result, denoiseb_rd41_res);
	hw_uint<16> denoiseb_rd42_res = denoiseb_rd42_select(raw, d0, d1);
	set_at<672, 800>(result, denoiseb_rd42_res);
	hw_uint<16> denoiseb_rd43_res = denoiseb_rd43_select(raw, d0, d1);
	set_at<688, 800>(result, denoiseb_rd43_res);
	hw_uint<16> denoiseb_rd44_res = denoiseb_rd44_select(raw, d0, d1);
	set_at<704, 800>(result, denoiseb_rd44_res);
	hw_uint<16> denoiseb_rd45_res = denoiseb_rd45_select(raw, d0, d1);
	set_at<720, 800>(result, denoiseb_rd45_res);
	hw_uint<16> denoiseb_rd46_res = denoiseb_rd46_select(raw, d0, d1);
	set_at<736, 800>(result, denoiseb_rd46_res);
	hw_uint<16> denoiseb_rd47_res = denoiseb_rd47_select(raw, d0, d1);
	set_at<752, 800>(result, denoiseb_rd47_res);
	hw_uint<16> denoiseb_rd48_res = denoiseb_rd48_select(raw, d0, d1);
	set_at<768, 800>(result, denoiseb_rd48_res);
	hw_uint<16> denoiseb_rd49_res = denoiseb_rd49_select(raw, d0, d1);
	set_at<784, 800>(result, denoiseb_rd49_res);
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



// Operation logic
inline void denoiseb_update_0(raw_cache& raw, denoiseb_cache& denoiseb, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_denoiseb_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoiseb_generated_compute_unrolled_2(raw_0_c__0_value);
	// Produce: denoiseb
	denoiseb_denoiseb_update_0_write_bundle_write(compute_result, denoiseb, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bxb_update_0(demosaic_cache& demosaic, demosaic_bxb_cache& demosaic_bxb, int d0, int d1) {
	// Consume: demosaic
	auto demosaic_0_c__0_value = demosaic_demosaic_bxb_update_0_read_bundle_read(demosaic/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bxb_generated_compute_unrolled_2(demosaic_0_c__0_value);
	// Produce: demosaic_bxb
	demosaic_bxb_demosaic_bxb_update_0_write_bundle_write(compute_result, demosaic_bxb, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bx_update_0(demosaic_bxb_cache& demosaic_bxb, demosaic_bx_cache& demosaic_bx, int d0, int d1) {
	// Consume: demosaic_bxb
	auto demosaic_bxb_0_c__0_value = demosaic_bxb_demosaic_bx_update_0_read_bundle_read(demosaic_bxb/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bx_generated_compute_unrolled_2(demosaic_bxb_0_c__0_value);
	// Produce: demosaic_bx
	demosaic_bx_demosaic_bx_update_0_write_bundle_write(compute_result, demosaic_bx, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_byb_update_0(demosaic_bx_cache& demosaic_bx, demosaic_byb_cache& demosaic_byb, int d0, int d1) {
	// Consume: demosaic_bx
	auto demosaic_bx_0_c__0_value = demosaic_bx_demosaic_byb_update_0_read_bundle_read(demosaic_bx/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_byb_generated_compute_unrolled_2(demosaic_bx_0_c__0_value);
	// Produce: demosaic_byb
	demosaic_byb_demosaic_byb_update_0_write_bundle_write(compute_result, demosaic_byb, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_by_update_0(demosaic_byb_cache& demosaic_byb, demosaic_by_cache& demosaic_by, int d0, int d1) {
	// Consume: demosaic_byb
	auto demosaic_byb_0_c__0_value = demosaic_byb_demosaic_by_update_0_read_bundle_read(demosaic_byb/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_by_generated_compute_unrolled_2(demosaic_byb_0_c__0_value);
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

	auto compute_result = demosaic_diff_generated_compute_unrolled_2(demosaic_0_c__0_value, demosaic_by_0_c__0_value);
	// Produce: demosaic_diff
	demosaic_diff_demosaic_diff_update_0_write_bundle_write(compute_result, demosaic_diff, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void cp_noinit_20_2_update_0(demosaic_diff_cache& demosaic_diff, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */cp_noinit_20_2, int d0, int d1) {
	// Consume: demosaic_diff
	auto demosaic_diff_0_c__0_value = demosaic_diff_cp_noinit_20_2_update_0_read_bundle_read(demosaic_diff/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = cp_noinit_20_2_generated_compute_unrolled_2(demosaic_diff_0_c__0_value);
	// Produce: cp_noinit_20_2
	cp_noinit_20_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoise_update_0(denoiseb_cache& denoiseb, denoise_cache& denoise, int d0, int d1) {
	// Consume: denoiseb
	auto denoiseb_0_c__0_value = denoiseb_denoise_update_0_read_bundle_read(denoiseb/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoise_generated_compute_unrolled_2(denoiseb_0_c__0_value);
	// Produce: denoise
	denoise_denoise_update_0_write_bundle_write(compute_result, denoise, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void raw_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */raw_oc, raw_cache& raw, int d0, int d1) {
	// Consume: raw_oc
	auto raw_oc_0_c__0_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_2(raw_oc_0_c__0_value);
	// Produce: raw
	raw_raw_update_0_write_bundle_write(compute_result, raw, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaicb_update_0(denoise_cache& denoise, demosaicb_cache& demosaicb, int d0, int d1) {
	// Consume: denoise
	auto denoise_0_c__0_value = denoise_demosaicb_update_0_read_bundle_read(denoise/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaicb_generated_compute_unrolled_2(denoise_0_c__0_value);
	// Produce: demosaicb
	demosaicb_demosaicb_update_0_write_bundle_write(compute_result, demosaicb, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_update_0(demosaicb_cache& demosaicb, demosaic_cache& demosaic, int d0, int d1) {
	// Consume: demosaicb
	auto demosaicb_0_c__0_value = demosaicb_demosaic_update_0_read_bundle_read(demosaicb/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_generated_compute_unrolled_2(demosaicb_0_c__0_value);
	// Produce: demosaic
	demosaic_demosaic_update_0_write_bundle_write(compute_result, demosaic, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void cp_noinit_20_2_opt(HWStream<hw_uint<32> >& /* get_args num ports = 2 */raw_oc, HWStream<hw_uint<32> >& /* get_args num ports = 2 */cp_noinit_20_2, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("cp_noinit_20_2_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_cache demosaic;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bx_cache demosaic_bx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bxb_cache demosaic_bxb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_by_cache demosaic_by;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_byb_cache demosaic_byb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_diff_cache demosaic_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaicb_cache demosaicb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoise_cache denoise;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoiseb_cache denoiseb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  raw_cache raw;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < 30; epoch++) {
	  // Schedules...
	    // cp_noinit_20_2_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*3,1*11]
	    // demosaic_bx_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*7]
	    // demosaic_bxb_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*6]
	    // demosaic_by_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*3,1*9]
	    // demosaic_byb_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*3,1*8]
	    // demosaic_diff_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*3,1*10]
	    // demosaic_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*2,1*5]
	    // demosaicb_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*2,1*4]
	    // denoise_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*3]
	    // denoiseb_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*2]
	    // raw_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // raw_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -3; c0 <= 1084; c0++) {
	  for (int c1 = -2; c1 <= 962; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-2 <= c1 && c1 <= 962) && ((c1 - 0) % 1 == 0) && (-3 <= c0 && c0 <= 1084) && ((c0 - 0) % 1 == 0)) {
	raw_update_0(raw_oc, raw, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 962) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	denoiseb_update_0(raw, denoiseb, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 962) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	denoise_update_0(denoiseb, denoise, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 962) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	demosaicb_update_0(denoise, demosaicb, (c1 - 2) / 1, (c0 - 3) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 962) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	demosaic_update_0(demosaicb, demosaic, (c1 - 2) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	demosaic_bxb_update_0(demosaic, demosaic_bxb, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	demosaic_bx_update_0(demosaic_bxb, demosaic_bx, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	demosaic_byb_update_0(demosaic_bx, demosaic_byb, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	demosaic_by_update_0(demosaic_byb, demosaic_by, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	demosaic_diff_update_0(demosaic, demosaic_by, demosaic_diff, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	cp_noinit_20_2_update_0(demosaic_diff, cp_noinit_20_2, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void cp_noinit_20_2_opt(HWStream<hw_uint<32> >& /* get_args num ports = 2 */raw_oc, HWStream<hw_uint<32> >& /* get_args num ports = 2 */cp_noinit_20_2) {

  cp_noinit_20_2_opt(raw_oc, cp_noinit_20_2, 1);
}
#ifdef __VIVADO_SYNTH__
#include "cp_noinit_20_2_opt.h"

const int cp_noinit_20_2_update_0_write_num_transfers = 1036800;
const int raw_update_0_read_num_transfers = 1049920;


extern "C" {

static void read_raw_update_0_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = raw_update_0_read_num_transfers*30;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_cp_noinit_20_2_update_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = cp_noinit_20_2_update_0_write_num_transfers*30;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void cp_noinit_20_2_opt_accel(hw_uint<32>* raw_update_0_read, hw_uint<32>* cp_noinit_20_2_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp_noinit_20_2_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = cp_noinit_20_2_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > raw_update_0_read_channel;
  static HWStream<hw_uint<32> > cp_noinit_20_2_update_0_write_channel;

  read_raw_update_0_read(raw_update_0_read, raw_update_0_read_channel, size);

  cp_noinit_20_2_opt(raw_update_0_read_channel, cp_noinit_20_2_update_0_write_channel, size);

  write_cp_noinit_20_2_update_0_write(cp_noinit_20_2_update_0_write, cp_noinit_20_2_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

