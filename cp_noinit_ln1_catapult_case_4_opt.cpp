#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: cp_noinit_ln1_catapult_case_4_opt_compute_units.h
#include "cp_noinit_ln1_catapult_case_4_opt_compute_units.h"

struct demosaic_demosaic_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
  // 0, 1, 963
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
  // 0, 1, 963
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[2, 1918], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
  // 0, 1, 963
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_demosaic_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[3, 1919], [0, 1081]}
	// Capacity: 964
	// # of read delays: 3
  // 0, 1, 963
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_963() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 961
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 961 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_cache {
  // Reader addrs...
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[5 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // # of banks: 4
  demosaic_demosaic_update_0_write0_merged_banks_4_cache demosaic_demosaic_update_0_write0_merged_banks_4;
  demosaic_demosaic_update_0_write1_merged_banks_4_cache demosaic_demosaic_update_0_write1_merged_banks_4;
  demosaic_demosaic_update_0_write2_merged_banks_4_cache demosaic_demosaic_update_0_write2_merged_banks_4;
  demosaic_demosaic_update_0_write3_merged_banks_4_cache demosaic_demosaic_update_0_write3_merged_banks_4;
};



inline void demosaic_demosaic_update_0_write0_write(hw_uint<16>& demosaic_demosaic_update_0_write0, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.push(demosaic_demosaic_update_0_write0);
}

inline void demosaic_demosaic_update_0_write1_write(hw_uint<16>& demosaic_demosaic_update_0_write1, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.push(demosaic_demosaic_update_0_write1);
}

inline void demosaic_demosaic_update_0_write2_write(hw_uint<16>& demosaic_demosaic_update_0_write2, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write2_merged_banks_4.push(demosaic_demosaic_update_0_write2);
}

inline void demosaic_demosaic_update_0_write3_write(hw_uint<16>& demosaic_demosaic_update_0_write3, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write3_merged_banks_4.push(demosaic_demosaic_update_0_write3);
}

inline hw_uint<16> demosaic_bxb_rd0_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd0 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd1_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd1 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd10_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd10 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd11_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd11 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[5 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd2_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd2 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write2 = demosaic.demosaic_demosaic_update_0_write2_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd3_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd3 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd4_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd4 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write2 = demosaic.demosaic_demosaic_update_0_write2_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd5_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd5 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write3 = demosaic.demosaic_demosaic_update_0_write3_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd6_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd6 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write2 = demosaic.demosaic_demosaic_update_0_write2_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd7_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd7 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write3 = demosaic.demosaic_demosaic_update_0_write3_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd8_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd8 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd9_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd9 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write3 = demosaic.demosaic_demosaic_update_0_write3_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd0_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_diff_rd0 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_963();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd1_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_diff_rd1 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write1 = demosaic.demosaic_demosaic_update_0_write1_merged_banks_4.peek_963();
  return value_demosaic_demosaic_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd2_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_diff_rd2 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write2 = demosaic.demosaic_demosaic_update_0_write2_merged_banks_4.peek_963();
  return value_demosaic_demosaic_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd3_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_diff_rd3 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write3 = demosaic.demosaic_demosaic_update_0_write3_merged_banks_4.peek_963();
  return value_demosaic_demosaic_update_0_write3;
  return 0;
}

// # of bundles = 3
// demosaic_bxb_update_0_read
//	demosaic_bxb_rd0
//	demosaic_bxb_rd1
//	demosaic_bxb_rd2
//	demosaic_bxb_rd3
//	demosaic_bxb_rd4
//	demosaic_bxb_rd5
//	demosaic_bxb_rd6
//	demosaic_bxb_rd7
//	demosaic_bxb_rd8
//	demosaic_bxb_rd9
//	demosaic_bxb_rd10
//	demosaic_bxb_rd11
inline hw_uint<192> demosaic_demosaic_bxb_update_0_read_bundle_read(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 12
    // demosaic_bxb_rd0
    // demosaic_bxb_rd1
    // demosaic_bxb_rd2
    // demosaic_bxb_rd3
    // demosaic_bxb_rd4
    // demosaic_bxb_rd5
    // demosaic_bxb_rd6
    // demosaic_bxb_rd7
    // demosaic_bxb_rd8
    // demosaic_bxb_rd9
    // demosaic_bxb_rd10
    // demosaic_bxb_rd11

	hw_uint<192> result;
	hw_uint<16> demosaic_bxb_rd0_res = demosaic_bxb_rd0_select(demosaic, d0, d1, dynamic_address);
	set_at<0, 192>(result, demosaic_bxb_rd0_res);
	hw_uint<16> demosaic_bxb_rd1_res = demosaic_bxb_rd1_select(demosaic, d0, d1, dynamic_address);
	set_at<16, 192>(result, demosaic_bxb_rd1_res);
	hw_uint<16> demosaic_bxb_rd2_res = demosaic_bxb_rd2_select(demosaic, d0, d1, dynamic_address);
	set_at<32, 192>(result, demosaic_bxb_rd2_res);
	hw_uint<16> demosaic_bxb_rd3_res = demosaic_bxb_rd3_select(demosaic, d0, d1, dynamic_address);
	set_at<48, 192>(result, demosaic_bxb_rd3_res);
	hw_uint<16> demosaic_bxb_rd4_res = demosaic_bxb_rd4_select(demosaic, d0, d1, dynamic_address);
	set_at<64, 192>(result, demosaic_bxb_rd4_res);
	hw_uint<16> demosaic_bxb_rd5_res = demosaic_bxb_rd5_select(demosaic, d0, d1, dynamic_address);
	set_at<80, 192>(result, demosaic_bxb_rd5_res);
	hw_uint<16> demosaic_bxb_rd6_res = demosaic_bxb_rd6_select(demosaic, d0, d1, dynamic_address);
	set_at<96, 192>(result, demosaic_bxb_rd6_res);
	hw_uint<16> demosaic_bxb_rd7_res = demosaic_bxb_rd7_select(demosaic, d0, d1, dynamic_address);
	set_at<112, 192>(result, demosaic_bxb_rd7_res);
	hw_uint<16> demosaic_bxb_rd8_res = demosaic_bxb_rd8_select(demosaic, d0, d1, dynamic_address);
	set_at<128, 192>(result, demosaic_bxb_rd8_res);
	hw_uint<16> demosaic_bxb_rd9_res = demosaic_bxb_rd9_select(demosaic, d0, d1, dynamic_address);
	set_at<144, 192>(result, demosaic_bxb_rd9_res);
	hw_uint<16> demosaic_bxb_rd10_res = demosaic_bxb_rd10_select(demosaic, d0, d1, dynamic_address);
	set_at<160, 192>(result, demosaic_bxb_rd10_res);
	hw_uint<16> demosaic_bxb_rd11_res = demosaic_bxb_rd11_select(demosaic, d0, d1, dynamic_address);
	set_at<176, 192>(result, demosaic_bxb_rd11_res);
	return result;
}

// demosaic_diff_update_0_read
//	demosaic_diff_rd0
//	demosaic_diff_rd1
//	demosaic_diff_rd2
//	demosaic_diff_rd3
inline hw_uint<64> demosaic_demosaic_diff_update_0_read_bundle_read(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // demosaic_diff_rd0
    // demosaic_diff_rd1
    // demosaic_diff_rd2
    // demosaic_diff_rd3

	hw_uint<64> result;
	hw_uint<16> demosaic_diff_rd0_res = demosaic_diff_rd0_select(demosaic, d0, d1, dynamic_address);
	set_at<0, 64>(result, demosaic_diff_rd0_res);
	hw_uint<16> demosaic_diff_rd1_res = demosaic_diff_rd1_select(demosaic, d0, d1, dynamic_address);
	set_at<16, 64>(result, demosaic_diff_rd1_res);
	hw_uint<16> demosaic_diff_rd2_res = demosaic_diff_rd2_select(demosaic, d0, d1, dynamic_address);
	set_at<32, 64>(result, demosaic_diff_rd2_res);
	hw_uint<16> demosaic_diff_rd3_res = demosaic_diff_rd3_select(demosaic, d0, d1, dynamic_address);
	set_at<48, 64>(result, demosaic_diff_rd3_res);
	return result;
}

// demosaic_update_0_write
//	demosaic_demosaic_update_0_write0
//	demosaic_demosaic_update_0_write1
//	demosaic_demosaic_update_0_write2
//	demosaic_demosaic_update_0_write3
inline void demosaic_demosaic_update_0_write_bundle_write(hw_uint<64>& demosaic_update_0_write, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_demosaic_update_0_write0_res = demosaic_update_0_write.extract<0, 15>();
	demosaic_demosaic_update_0_write0_write(demosaic_demosaic_update_0_write0_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write1_res = demosaic_update_0_write.extract<16, 31>();
	demosaic_demosaic_update_0_write1_write(demosaic_demosaic_update_0_write1_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write2_res = demosaic_update_0_write.extract<32, 47>();
	demosaic_demosaic_update_0_write2_write(demosaic_demosaic_update_0_write2_res, demosaic, d0, d1, dynamic_address);
	hw_uint<16> demosaic_demosaic_update_0_write3_res = demosaic_update_0_write.extract<48, 63>();
	demosaic_demosaic_update_0_write3_write(demosaic_demosaic_update_0_write3_res, demosaic, d0, d1, dynamic_address);
}

struct demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1916], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
  // 0, 480, 960
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1917], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
  // 0, 480, 960
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3_cache {
	// RAM Box: {[2, 1918], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
  // 0, 480, 960
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 1919], [0, 1081]}
	// Capacity: 961
	// # of read delays: 3
  // 0, 480, 960
	hw_uint<16> f0;
	fifo<hw_uint<16>, 479> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 479> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_479() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_480() {
		return f2;
	}

	inline hw_uint<16> peek_959() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_960() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 479
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 479 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 479
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 479 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_cache {
  // Reader addrs...
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // # of banks: 4
  demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3;
  demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3;
};



inline void demosaic_bx_demosaic_bx_update_0_write0_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write0, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write0);
}

inline void demosaic_bx_demosaic_bx_update_0_write1_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write1, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write1);
}

inline void demosaic_bx_demosaic_bx_update_0_write2_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write2, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write2);
}

inline void demosaic_bx_demosaic_bx_update_0_write3_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write3, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write3);
}

inline hw_uint<16> demosaic_byb_rd0_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd0 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_960();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd1_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd1 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_480();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd10_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd10 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write3 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3.peek_480();
  return value_demosaic_bx_demosaic_bx_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd11_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd11 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write3 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd2_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd2 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd3_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd3 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write1 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.peek_960();
  return value_demosaic_bx_demosaic_bx_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd4_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd4 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write1 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.peek_480();
  return value_demosaic_bx_demosaic_bx_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd5_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd5 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[1 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write1 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write1_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd6_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd6 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write2 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3.peek_960();
  return value_demosaic_bx_demosaic_bx_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd7_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd7 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write2 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3.peek_480();
  return value_demosaic_bx_demosaic_bx_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd8_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd8 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[2 + 4d0, 2 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write2 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write2_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd9_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd9 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write3 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write3_merged_banks_3.peek_960();
  return value_demosaic_bx_demosaic_bx_update_0_write3;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_write
//	demosaic_bx_demosaic_bx_update_0_write0
//	demosaic_bx_demosaic_bx_update_0_write1
//	demosaic_bx_demosaic_bx_update_0_write2
//	demosaic_bx_demosaic_bx_update_0_write3
inline void demosaic_bx_demosaic_bx_update_0_write_bundle_write(hw_uint<64>& demosaic_bx_update_0_write, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write0_res = demosaic_bx_update_0_write.extract<0, 15>();
	demosaic_bx_demosaic_bx_update_0_write0_write(demosaic_bx_demosaic_bx_update_0_write0_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write1_res = demosaic_bx_update_0_write.extract<16, 31>();
	demosaic_bx_demosaic_bx_update_0_write1_write(demosaic_bx_demosaic_bx_update_0_write1_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write2_res = demosaic_bx_update_0_write.extract<32, 47>();
	demosaic_bx_demosaic_bx_update_0_write2_write(demosaic_bx_demosaic_bx_update_0_write2_res, demosaic_bx, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write3_res = demosaic_bx_update_0_write.extract<48, 63>();
	demosaic_bx_demosaic_bx_update_0_write3_write(demosaic_bx_demosaic_bx_update_0_write3_res, demosaic_bx, d0, d1, dynamic_address);
}

// demosaic_byb_update_0_read
//	demosaic_byb_rd0
//	demosaic_byb_rd1
//	demosaic_byb_rd2
//	demosaic_byb_rd3
//	demosaic_byb_rd4
//	demosaic_byb_rd5
//	demosaic_byb_rd6
//	demosaic_byb_rd7
//	demosaic_byb_rd8
//	demosaic_byb_rd9
//	demosaic_byb_rd10
//	demosaic_byb_rd11
inline hw_uint<192> demosaic_bx_demosaic_byb_update_0_read_bundle_read(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 12
    // demosaic_byb_rd0
    // demosaic_byb_rd1
    // demosaic_byb_rd2
    // demosaic_byb_rd3
    // demosaic_byb_rd4
    // demosaic_byb_rd5
    // demosaic_byb_rd6
    // demosaic_byb_rd7
    // demosaic_byb_rd8
    // demosaic_byb_rd9
    // demosaic_byb_rd10
    // demosaic_byb_rd11

	hw_uint<192> result;
	hw_uint<16> demosaic_byb_rd0_res = demosaic_byb_rd0_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<0, 192>(result, demosaic_byb_rd0_res);
	hw_uint<16> demosaic_byb_rd1_res = demosaic_byb_rd1_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<16, 192>(result, demosaic_byb_rd1_res);
	hw_uint<16> demosaic_byb_rd2_res = demosaic_byb_rd2_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<32, 192>(result, demosaic_byb_rd2_res);
	hw_uint<16> demosaic_byb_rd3_res = demosaic_byb_rd3_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<48, 192>(result, demosaic_byb_rd3_res);
	hw_uint<16> demosaic_byb_rd4_res = demosaic_byb_rd4_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<64, 192>(result, demosaic_byb_rd4_res);
	hw_uint<16> demosaic_byb_rd5_res = demosaic_byb_rd5_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<80, 192>(result, demosaic_byb_rd5_res);
	hw_uint<16> demosaic_byb_rd6_res = demosaic_byb_rd6_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<96, 192>(result, demosaic_byb_rd6_res);
	hw_uint<16> demosaic_byb_rd7_res = demosaic_byb_rd7_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<112, 192>(result, demosaic_byb_rd7_res);
	hw_uint<16> demosaic_byb_rd8_res = demosaic_byb_rd8_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<128, 192>(result, demosaic_byb_rd8_res);
	hw_uint<16> demosaic_byb_rd9_res = demosaic_byb_rd9_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<144, 192>(result, demosaic_byb_rd9_res);
	hw_uint<16> demosaic_byb_rd10_res = demosaic_byb_rd10_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<160, 192>(result, demosaic_byb_rd10_res);
	hw_uint<16> demosaic_byb_rd11_res = demosaic_byb_rd11_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<176, 192>(result, demosaic_byb_rd11_res);
	return result;
}

struct demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0_cache {
	// RAM Box: {[0, 1916], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_bxb_demosaic_bxb_update_0_write1_to_demosaic_bx_rd1_cache {
	// RAM Box: {[1, 1917], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_bxb_demosaic_bxb_update_0_write2_to_demosaic_bx_rd2_cache {
	// RAM Box: {[2, 1918], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_bxb_demosaic_bxb_update_0_write3_to_demosaic_bx_rd3_cache {
	// RAM Box: {[3, 1919], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_bxb_cache {
  // Reader addrs...
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // # of banks: 4
  demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0_cache demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0;
  demosaic_bxb_demosaic_bxb_update_0_write1_to_demosaic_bx_rd1_cache demosaic_bxb_demosaic_bxb_update_0_write1_to_demosaic_bx_rd1;
  demosaic_bxb_demosaic_bxb_update_0_write2_to_demosaic_bx_rd2_cache demosaic_bxb_demosaic_bxb_update_0_write2_to_demosaic_bx_rd2;
  demosaic_bxb_demosaic_bxb_update_0_write3_to_demosaic_bx_rd3_cache demosaic_bxb_demosaic_bxb_update_0_write3_to_demosaic_bx_rd3;
};



inline void demosaic_bxb_demosaic_bxb_update_0_write0_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write0, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0.push(demosaic_bxb_demosaic_bxb_update_0_write0);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write1_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write1, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write1_to_demosaic_bx_rd1.push(demosaic_bxb_demosaic_bxb_update_0_write1);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write2_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write2, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write2_to_demosaic_bx_rd2.push(demosaic_bxb_demosaic_bxb_update_0_write2);
}

inline void demosaic_bxb_demosaic_bxb_update_0_write3_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write3, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write3_to_demosaic_bx_rd3.push(demosaic_bxb_demosaic_bxb_update_0_write3);
}

inline hw_uint<16> demosaic_bx_rd0_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bx_rd0 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write0 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd1_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bx_rd1 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write1 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write1_to_demosaic_bx_rd1.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd2_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bx_rd2 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write2 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write2_to_demosaic_bx_rd2.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_bx_rd3_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bx_rd3 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write3 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write3_to_demosaic_bx_rd3.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write3;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_read
//	demosaic_bx_rd0
//	demosaic_bx_rd1
//	demosaic_bx_rd2
//	demosaic_bx_rd3
inline hw_uint<64> demosaic_bxb_demosaic_bx_update_0_read_bundle_read(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // demosaic_bx_rd0
    // demosaic_bx_rd1
    // demosaic_bx_rd2
    // demosaic_bx_rd3

	hw_uint<64> result;
	hw_uint<16> demosaic_bx_rd0_res = demosaic_bx_rd0_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<0, 64>(result, demosaic_bx_rd0_res);
	hw_uint<16> demosaic_bx_rd1_res = demosaic_bx_rd1_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<16, 64>(result, demosaic_bx_rd1_res);
	hw_uint<16> demosaic_bx_rd2_res = demosaic_bx_rd2_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<32, 64>(result, demosaic_bx_rd2_res);
	hw_uint<16> demosaic_bx_rd3_res = demosaic_bx_rd3_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<48, 64>(result, demosaic_bx_rd3_res);
	return result;
}

// demosaic_bxb_update_0_write
//	demosaic_bxb_demosaic_bxb_update_0_write0
//	demosaic_bxb_demosaic_bxb_update_0_write1
//	demosaic_bxb_demosaic_bxb_update_0_write2
//	demosaic_bxb_demosaic_bxb_update_0_write3
inline void demosaic_bxb_demosaic_bxb_update_0_write_bundle_write(hw_uint<64>& demosaic_bxb_update_0_write, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write0_res = demosaic_bxb_update_0_write.extract<0, 15>();
	demosaic_bxb_demosaic_bxb_update_0_write0_write(demosaic_bxb_demosaic_bxb_update_0_write0_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write1_res = demosaic_bxb_update_0_write.extract<16, 31>();
	demosaic_bxb_demosaic_bxb_update_0_write1_write(demosaic_bxb_demosaic_bxb_update_0_write1_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write2_res = demosaic_bxb_update_0_write.extract<32, 47>();
	demosaic_bxb_demosaic_bxb_update_0_write2_write(demosaic_bxb_demosaic_bxb_update_0_write2_res, demosaic_bxb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write3_res = demosaic_bxb_update_0_write.extract<48, 63>();
	demosaic_bxb_demosaic_bxb_update_0_write3_write(demosaic_bxb_demosaic_bxb_update_0_write3_res, demosaic_bxb, d0, d1, dynamic_address);
}

struct demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_by_demosaic_by_update_0_write1_to_demosaic_diff_rd1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_by_demosaic_by_update_0_write2_to_demosaic_diff_rd2_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_by_demosaic_by_update_0_write3_to_demosaic_diff_rd3_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_by_cache {
  // Reader addrs...
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // # of banks: 4
  demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0_cache demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0;
  demosaic_by_demosaic_by_update_0_write1_to_demosaic_diff_rd1_cache demosaic_by_demosaic_by_update_0_write1_to_demosaic_diff_rd1;
  demosaic_by_demosaic_by_update_0_write2_to_demosaic_diff_rd2_cache demosaic_by_demosaic_by_update_0_write2_to_demosaic_diff_rd2;
  demosaic_by_demosaic_by_update_0_write3_to_demosaic_diff_rd3_cache demosaic_by_demosaic_by_update_0_write3_to_demosaic_diff_rd3;
};



inline void demosaic_by_demosaic_by_update_0_write0_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write0, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0.push(demosaic_by_demosaic_by_update_0_write0);
}

inline void demosaic_by_demosaic_by_update_0_write1_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write1, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write1_to_demosaic_diff_rd1.push(demosaic_by_demosaic_by_update_0_write1);
}

inline void demosaic_by_demosaic_by_update_0_write2_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write2, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write2_to_demosaic_diff_rd2.push(demosaic_by_demosaic_by_update_0_write2);
}

inline void demosaic_by_demosaic_by_update_0_write3_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write3, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write3_to_demosaic_diff_rd3.push(demosaic_by_demosaic_by_update_0_write3);
}

inline hw_uint<16> demosaic_diff_rd0_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_diff_rd0 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write0 = demosaic_by.demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd1_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_diff_rd1 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write1 = demosaic_by.demosaic_by_demosaic_by_update_0_write1_to_demosaic_diff_rd1.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd2_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_diff_rd2 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write2 = demosaic_by.demosaic_by_demosaic_by_update_0_write2_to_demosaic_diff_rd2.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd3_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_diff_rd3 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write3 = demosaic_by.demosaic_by_demosaic_by_update_0_write3_to_demosaic_diff_rd3.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write3;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_write
//	demosaic_by_demosaic_by_update_0_write0
//	demosaic_by_demosaic_by_update_0_write1
//	demosaic_by_demosaic_by_update_0_write2
//	demosaic_by_demosaic_by_update_0_write3
inline void demosaic_by_demosaic_by_update_0_write_bundle_write(hw_uint<64>& demosaic_by_update_0_write, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_by_demosaic_by_update_0_write0_res = demosaic_by_update_0_write.extract<0, 15>();
	demosaic_by_demosaic_by_update_0_write0_write(demosaic_by_demosaic_by_update_0_write0_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write1_res = demosaic_by_update_0_write.extract<16, 31>();
	demosaic_by_demosaic_by_update_0_write1_write(demosaic_by_demosaic_by_update_0_write1_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write2_res = demosaic_by_update_0_write.extract<32, 47>();
	demosaic_by_demosaic_by_update_0_write2_write(demosaic_by_demosaic_by_update_0_write2_res, demosaic_by, d0, d1, dynamic_address);
	hw_uint<16> demosaic_by_demosaic_by_update_0_write3_res = demosaic_by_update_0_write.extract<48, 63>();
	demosaic_by_demosaic_by_update_0_write3_write(demosaic_by_demosaic_by_update_0_write3_res, demosaic_by, d0, d1, dynamic_address);
}

// demosaic_diff_update_0_read
//	demosaic_diff_rd0
//	demosaic_diff_rd1
//	demosaic_diff_rd2
//	demosaic_diff_rd3
inline hw_uint<64> demosaic_by_demosaic_diff_update_0_read_bundle_read(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // demosaic_diff_rd0
    // demosaic_diff_rd1
    // demosaic_diff_rd2
    // demosaic_diff_rd3

	hw_uint<64> result;
	hw_uint<16> demosaic_diff_rd0_res = demosaic_diff_rd0_select(demosaic_by, d0, d1, dynamic_address);
	set_at<0, 64>(result, demosaic_diff_rd0_res);
	hw_uint<16> demosaic_diff_rd1_res = demosaic_diff_rd1_select(demosaic_by, d0, d1, dynamic_address);
	set_at<16, 64>(result, demosaic_diff_rd1_res);
	hw_uint<16> demosaic_diff_rd2_res = demosaic_diff_rd2_select(demosaic_by, d0, d1, dynamic_address);
	set_at<32, 64>(result, demosaic_diff_rd2_res);
	hw_uint<16> demosaic_diff_rd3_res = demosaic_diff_rd3_select(demosaic_by, d0, d1, dynamic_address);
	set_at<48, 64>(result, demosaic_diff_rd3_res);
	return result;
}

struct demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_byb_demosaic_byb_update_0_write1_to_demosaic_by_rd1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_byb_demosaic_byb_update_0_write2_to_demosaic_by_rd2_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_byb_demosaic_byb_update_0_write3_to_demosaic_by_rd3_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_byb_cache {
  // Reader addrs...
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // # of banks: 4
  demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0_cache demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0;
  demosaic_byb_demosaic_byb_update_0_write1_to_demosaic_by_rd1_cache demosaic_byb_demosaic_byb_update_0_write1_to_demosaic_by_rd1;
  demosaic_byb_demosaic_byb_update_0_write2_to_demosaic_by_rd2_cache demosaic_byb_demosaic_byb_update_0_write2_to_demosaic_by_rd2;
  demosaic_byb_demosaic_byb_update_0_write3_to_demosaic_by_rd3_cache demosaic_byb_demosaic_byb_update_0_write3_to_demosaic_by_rd3;
};



inline void demosaic_byb_demosaic_byb_update_0_write0_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write0, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0.push(demosaic_byb_demosaic_byb_update_0_write0);
}

inline void demosaic_byb_demosaic_byb_update_0_write1_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write1, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write1_to_demosaic_by_rd1.push(demosaic_byb_demosaic_byb_update_0_write1);
}

inline void demosaic_byb_demosaic_byb_update_0_write2_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write2, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write2_to_demosaic_by_rd2.push(demosaic_byb_demosaic_byb_update_0_write2);
}

inline void demosaic_byb_demosaic_byb_update_0_write3_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write3, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write3_to_demosaic_by_rd3.push(demosaic_byb_demosaic_byb_update_0_write3);
}

inline hw_uint<16> demosaic_by_rd0_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_by_rd0 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write0 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_by_rd1_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_by_rd1 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write1 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write1_to_demosaic_by_rd1.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_by_rd2_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_by_rd2 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write2 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write2_to_demosaic_by_rd2.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_by_rd3_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_by_rd3 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write3 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write3_to_demosaic_by_rd3.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write3;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_read
//	demosaic_by_rd0
//	demosaic_by_rd1
//	demosaic_by_rd2
//	demosaic_by_rd3
inline hw_uint<64> demosaic_byb_demosaic_by_update_0_read_bundle_read(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // demosaic_by_rd0
    // demosaic_by_rd1
    // demosaic_by_rd2
    // demosaic_by_rd3

	hw_uint<64> result;
	hw_uint<16> demosaic_by_rd0_res = demosaic_by_rd0_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<0, 64>(result, demosaic_by_rd0_res);
	hw_uint<16> demosaic_by_rd1_res = demosaic_by_rd1_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<16, 64>(result, demosaic_by_rd1_res);
	hw_uint<16> demosaic_by_rd2_res = demosaic_by_rd2_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<32, 64>(result, demosaic_by_rd2_res);
	hw_uint<16> demosaic_by_rd3_res = demosaic_by_rd3_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<48, 64>(result, demosaic_by_rd3_res);
	return result;
}

// demosaic_byb_update_0_write
//	demosaic_byb_demosaic_byb_update_0_write0
//	demosaic_byb_demosaic_byb_update_0_write1
//	demosaic_byb_demosaic_byb_update_0_write2
//	demosaic_byb_demosaic_byb_update_0_write3
inline void demosaic_byb_demosaic_byb_update_0_write_bundle_write(hw_uint<64>& demosaic_byb_update_0_write, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write0_res = demosaic_byb_update_0_write.extract<0, 15>();
	demosaic_byb_demosaic_byb_update_0_write0_write(demosaic_byb_demosaic_byb_update_0_write0_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write1_res = demosaic_byb_update_0_write.extract<16, 31>();
	demosaic_byb_demosaic_byb_update_0_write1_write(demosaic_byb_demosaic_byb_update_0_write1_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write2_res = demosaic_byb_update_0_write.extract<32, 47>();
	demosaic_byb_demosaic_byb_update_0_write2_write(demosaic_byb_demosaic_byb_update_0_write2_res, demosaic_byb, d0, d1, dynamic_address);
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write3_res = demosaic_byb_update_0_write.extract<48, 63>();
	demosaic_byb_demosaic_byb_update_0_write3_write(demosaic_byb_demosaic_byb_update_0_write3_res, demosaic_byb, d0, d1, dynamic_address);
}

struct demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_catapult_case_4_rd0_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_diff_demosaic_diff_update_0_write1_to_cp_noinit_ln1_catapult_case_4_rd1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_diff_demosaic_diff_update_0_write2_to_cp_noinit_ln1_catapult_case_4_rd2_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_diff_demosaic_diff_update_0_write3_to_cp_noinit_ln1_catapult_case_4_rd3_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_diff_cache {
  // Reader addrs...
    // { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> demosaic_diff[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> demosaic_diff[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> demosaic_diff[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
    // { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> demosaic_diff[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // # of banks: 4
  demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_catapult_case_4_rd0_cache demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_catapult_case_4_rd0;
  demosaic_diff_demosaic_diff_update_0_write1_to_cp_noinit_ln1_catapult_case_4_rd1_cache demosaic_diff_demosaic_diff_update_0_write1_to_cp_noinit_ln1_catapult_case_4_rd1;
  demosaic_diff_demosaic_diff_update_0_write2_to_cp_noinit_ln1_catapult_case_4_rd2_cache demosaic_diff_demosaic_diff_update_0_write2_to_cp_noinit_ln1_catapult_case_4_rd2;
  demosaic_diff_demosaic_diff_update_0_write3_to_cp_noinit_ln1_catapult_case_4_rd3_cache demosaic_diff_demosaic_diff_update_0_write3_to_cp_noinit_ln1_catapult_case_4_rd3;
};



inline void demosaic_diff_demosaic_diff_update_0_write0_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write0, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_catapult_case_4_rd0.push(demosaic_diff_demosaic_diff_update_0_write0);
}

inline void demosaic_diff_demosaic_diff_update_0_write1_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write1, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write1_to_cp_noinit_ln1_catapult_case_4_rd1.push(demosaic_diff_demosaic_diff_update_0_write1);
}

inline void demosaic_diff_demosaic_diff_update_0_write2_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write2, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write2_to_cp_noinit_ln1_catapult_case_4_rd2.push(demosaic_diff_demosaic_diff_update_0_write2);
}

inline void demosaic_diff_demosaic_diff_update_0_write3_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write3, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write3_to_cp_noinit_ln1_catapult_case_4_rd3.push(demosaic_diff_demosaic_diff_update_0_write3);
}

inline hw_uint<16> cp_noinit_ln1_catapult_case_4_rd0_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cp_noinit_ln1_catapult_case_4_rd0 read pattern: { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> demosaic_diff[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write0 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_catapult_case_4_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write0;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_catapult_case_4_rd1_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cp_noinit_ln1_catapult_case_4_rd1 read pattern: { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> demosaic_diff[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write1 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write1_to_cp_noinit_ln1_catapult_case_4_rd1.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write1;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_catapult_case_4_rd2_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cp_noinit_ln1_catapult_case_4_rd2 read pattern: { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> demosaic_diff[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write2 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write2_to_cp_noinit_ln1_catapult_case_4_rd2.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write2;
  return 0;
}

inline hw_uint<16> cp_noinit_ln1_catapult_case_4_rd3_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cp_noinit_ln1_catapult_case_4_rd3 read pattern: { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> demosaic_diff[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write3 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write3_to_cp_noinit_ln1_catapult_case_4_rd3.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write3;
  return 0;
}

// # of bundles = 2
// cp_noinit_ln1_catapult_case_4_update_0_read
//	cp_noinit_ln1_catapult_case_4_rd0
//	cp_noinit_ln1_catapult_case_4_rd1
//	cp_noinit_ln1_catapult_case_4_rd2
//	cp_noinit_ln1_catapult_case_4_rd3
inline hw_uint<64> demosaic_diff_cp_noinit_ln1_catapult_case_4_update_0_read_bundle_read(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // cp_noinit_ln1_catapult_case_4_rd0
    // cp_noinit_ln1_catapult_case_4_rd1
    // cp_noinit_ln1_catapult_case_4_rd2
    // cp_noinit_ln1_catapult_case_4_rd3

	hw_uint<64> result;
	hw_uint<16> cp_noinit_ln1_catapult_case_4_rd0_res = cp_noinit_ln1_catapult_case_4_rd0_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<0, 64>(result, cp_noinit_ln1_catapult_case_4_rd0_res);
	hw_uint<16> cp_noinit_ln1_catapult_case_4_rd1_res = cp_noinit_ln1_catapult_case_4_rd1_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<16, 64>(result, cp_noinit_ln1_catapult_case_4_rd1_res);
	hw_uint<16> cp_noinit_ln1_catapult_case_4_rd2_res = cp_noinit_ln1_catapult_case_4_rd2_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<32, 64>(result, cp_noinit_ln1_catapult_case_4_rd2_res);
	hw_uint<16> cp_noinit_ln1_catapult_case_4_rd3_res = cp_noinit_ln1_catapult_case_4_rd3_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<48, 64>(result, cp_noinit_ln1_catapult_case_4_rd3_res);
	return result;
}

// demosaic_diff_update_0_write
//	demosaic_diff_demosaic_diff_update_0_write0
//	demosaic_diff_demosaic_diff_update_0_write1
//	demosaic_diff_demosaic_diff_update_0_write2
//	demosaic_diff_demosaic_diff_update_0_write3
inline void demosaic_diff_demosaic_diff_update_0_write_bundle_write(hw_uint<64>& demosaic_diff_update_0_write, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write0_res = demosaic_diff_update_0_write.extract<0, 15>();
	demosaic_diff_demosaic_diff_update_0_write0_write(demosaic_diff_demosaic_diff_update_0_write0_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write1_res = demosaic_diff_update_0_write.extract<16, 31>();
	demosaic_diff_demosaic_diff_update_0_write1_write(demosaic_diff_demosaic_diff_update_0_write1_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write2_res = demosaic_diff_update_0_write.extract<32, 47>();
	demosaic_diff_demosaic_diff_update_0_write2_write(demosaic_diff_demosaic_diff_update_0_write2_res, demosaic_diff, d0, d1, dynamic_address);
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write3_res = demosaic_diff_update_0_write.extract<48, 63>();
	demosaic_diff_demosaic_diff_update_0_write3_write(demosaic_diff_demosaic_diff_update_0_write3_res, demosaic_diff, d0, d1, dynamic_address);
}

struct demosaicb_demosaicb_update_0_write0_to_demosaic_rd0_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicb_demosaicb_update_0_write1_to_demosaic_rd1_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicb_demosaicb_update_0_write2_to_demosaic_rd2_cache {
	// RAM Box: {[2, 1922], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicb_demosaicb_update_0_write3_to_demosaic_rd3_cache {
	// RAM Box: {[3, 1923], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicb_cache {
  // Reader addrs...
    // { demosaic_update_0[d0, d1] -> demosaicb[4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaic_update_0[d0, d1] -> demosaicb[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // # of banks: 4
  demosaicb_demosaicb_update_0_write0_to_demosaic_rd0_cache demosaicb_demosaicb_update_0_write0_to_demosaic_rd0;
  demosaicb_demosaicb_update_0_write1_to_demosaic_rd1_cache demosaicb_demosaicb_update_0_write1_to_demosaic_rd1;
  demosaicb_demosaicb_update_0_write2_to_demosaic_rd2_cache demosaicb_demosaicb_update_0_write2_to_demosaic_rd2;
  demosaicb_demosaicb_update_0_write3_to_demosaic_rd3_cache demosaicb_demosaicb_update_0_write3_to_demosaic_rd3;
};



inline void demosaicb_demosaicb_update_0_write0_write(hw_uint<16>& demosaicb_demosaicb_update_0_write0, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write0_to_demosaic_rd0.push(demosaicb_demosaicb_update_0_write0);
}

inline void demosaicb_demosaicb_update_0_write1_write(hw_uint<16>& demosaicb_demosaicb_update_0_write1, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write1_to_demosaic_rd1.push(demosaicb_demosaicb_update_0_write1);
}

inline void demosaicb_demosaicb_update_0_write2_write(hw_uint<16>& demosaicb_demosaicb_update_0_write2, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write2_to_demosaic_rd2.push(demosaicb_demosaicb_update_0_write2);
}

inline void demosaicb_demosaicb_update_0_write3_write(hw_uint<16>& demosaicb_demosaicb_update_0_write3, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write3_to_demosaic_rd3.push(demosaicb_demosaicb_update_0_write3);
}

inline hw_uint<16> demosaic_rd0_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_rd0 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write0 = demosaicb.demosaicb_demosaicb_update_0_write0_to_demosaic_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_rd1_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_rd1 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write1 = demosaicb.demosaicb_demosaicb_update_0_write1_to_demosaic_rd1.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaic_rd2_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_rd2 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write2 = demosaicb.demosaicb_demosaicb_update_0_write2_to_demosaic_rd2.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaic_rd3_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_rd3 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write3 = demosaicb.demosaicb_demosaicb_update_0_write3_to_demosaic_rd3.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write3;
  return 0;
}

// # of bundles = 2
// demosaic_update_0_read
//	demosaic_rd0
//	demosaic_rd1
//	demosaic_rd2
//	demosaic_rd3
inline hw_uint<64> demosaicb_demosaic_update_0_read_bundle_read(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // demosaic_rd0
    // demosaic_rd1
    // demosaic_rd2
    // demosaic_rd3

	hw_uint<64> result;
	hw_uint<16> demosaic_rd0_res = demosaic_rd0_select(demosaicb, d0, d1, dynamic_address);
	set_at<0, 64>(result, demosaic_rd0_res);
	hw_uint<16> demosaic_rd1_res = demosaic_rd1_select(demosaicb, d0, d1, dynamic_address);
	set_at<16, 64>(result, demosaic_rd1_res);
	hw_uint<16> demosaic_rd2_res = demosaic_rd2_select(demosaicb, d0, d1, dynamic_address);
	set_at<32, 64>(result, demosaic_rd2_res);
	hw_uint<16> demosaic_rd3_res = demosaic_rd3_select(demosaicb, d0, d1, dynamic_address);
	set_at<48, 64>(result, demosaic_rd3_res);
	return result;
}

// demosaicb_update_0_write
//	demosaicb_demosaicb_update_0_write0
//	demosaicb_demosaicb_update_0_write1
//	demosaicb_demosaicb_update_0_write2
//	demosaicb_demosaicb_update_0_write3
inline void demosaicb_demosaicb_update_0_write_bundle_write(hw_uint<64>& demosaicb_update_0_write, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaicb_demosaicb_update_0_write0_res = demosaicb_update_0_write.extract<0, 15>();
	demosaicb_demosaicb_update_0_write0_write(demosaicb_demosaicb_update_0_write0_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write1_res = demosaicb_update_0_write.extract<16, 31>();
	demosaicb_demosaicb_update_0_write1_write(demosaicb_demosaicb_update_0_write1_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write2_res = demosaicb_update_0_write.extract<32, 47>();
	demosaicb_demosaicb_update_0_write2_write(demosaicb_demosaicb_update_0_write2_res, demosaicb, d0, d1, dynamic_address);
	hw_uint<16> demosaicb_demosaicb_update_0_write3_res = demosaicb_update_0_write.extract<48, 63>();
	demosaicb_demosaicb_update_0_write3_write(demosaicb_demosaicb_update_0_write3_res, demosaicb, d0, d1, dynamic_address);
}

struct denoise_denoise_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 1924], [-1, 1082]}
	// Capacity: 968
	// # of read delays: 6
  // 0, 1, 483, 484, 966, 967
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
		return f6;
	}

	inline hw_uint<16> peek_965() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_966() {
		return f8;
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 481
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 481 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct denoise_denoise_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[1, 1921], [-1, 1082]}
	// Capacity: 968
	// # of read delays: 4
  // 0, 1, 484, 967
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_484() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_967() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 482
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 482 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 482
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 482 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct denoise_denoise_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[2, 1922], [-1, 1082]}
	// Capacity: 968
	// # of read delays: 4
  // 0, 1, 484, 967
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_484() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_967() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 482
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 482 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 482
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 482 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct denoise_denoise_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[-1, 1923], [-1, 1082]}
	// Capacity: 969
	// # of read delays: 7
  // 0, 1, 2, 484, 485, 967, 968
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 481> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 481> f9;
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

	inline hw_uint<16> peek_483() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_484() {
		return f6;
	}

	inline hw_uint<16> peek_485() {
		return f8;
	}

	inline hw_uint<16> peek_966() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f9.back();
	}

	inline hw_uint<16> peek_967() {
		return f10;
	}

	inline hw_uint<16> peek_968() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 481
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 481 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 481
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 481 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct denoise_cache {
  // Reader addrs...
    // { demosaicb_update_0[d0, d1] -> denoise[-1 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[-1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[-1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // # of banks: 4
  denoise_denoise_update_0_write0_merged_banks_9_cache denoise_denoise_update_0_write0_merged_banks_9;
  denoise_denoise_update_0_write1_merged_banks_9_cache denoise_denoise_update_0_write1_merged_banks_9;
  denoise_denoise_update_0_write2_merged_banks_9_cache denoise_denoise_update_0_write2_merged_banks_9;
  denoise_denoise_update_0_write3_merged_banks_9_cache denoise_denoise_update_0_write3_merged_banks_9;
};



inline void denoise_denoise_update_0_write0_write(hw_uint<16>& denoise_denoise_update_0_write0, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write0_merged_banks_9.push(denoise_denoise_update_0_write0);
}

inline void denoise_denoise_update_0_write1_write(hw_uint<16>& denoise_denoise_update_0_write1, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write1_merged_banks_9.push(denoise_denoise_update_0_write1);
}

inline void denoise_denoise_update_0_write2_write(hw_uint<16>& denoise_denoise_update_0_write2, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write2_merged_banks_9.push(denoise_denoise_update_0_write2);
}

inline void denoise_denoise_update_0_write3_write(hw_uint<16>& denoise_denoise_update_0_write3, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write3_merged_banks_9.push(denoise_denoise_update_0_write3);
}

inline hw_uint<16> demosaicb_rd0_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd0 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_968();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd1_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd1 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_485();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd10_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd10 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_484();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd11_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd11 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd12_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd12 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_967();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd13_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd13 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_484();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd14_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd14 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd15_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd15 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_967();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd16_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd16 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_484();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd17_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd17 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd18_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd18 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_967();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd19_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd19 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_484();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd2_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd2 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_2();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd20_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd20 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd21_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd21 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_967();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd22_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd22 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_484();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd23_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd23 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd24_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd24 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_967();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd25_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd25 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_484();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd26_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd26 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd27_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd27 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_967();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd28_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd28 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_484();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd29_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd29 read pattern: { demosaicb_update_0[d0, d1] -> denoise[2 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write2 = denoise.denoise_denoise_update_0_write2_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write2;
  return 0;
}

inline hw_uint<16> demosaicb_rd3_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd3 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_967();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd30_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd30 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_967();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd31_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd31 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_484();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd32_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd32 read pattern: { demosaicb_update_0[d0, d1] -> denoise[3 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write3 = denoise.denoise_denoise_update_0_write3_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write3;
  return 0;
}

inline hw_uint<16> demosaicb_rd33_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd33 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_966();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd34_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd34 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_483();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd35_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd35 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_0();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd4_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd4 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_484();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd5_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd5 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd6_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd6 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_967();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd7_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd7 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_484();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd8_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd8 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + 4d0, 1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write1 = denoise.denoise_denoise_update_0_write1_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write1;
  return 0;
}

inline hw_uint<16> demosaicb_rd9_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd9 read pattern: { demosaicb_update_0[d0, d1] -> denoise[4d0, -1 + d1] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_967();
  return value_denoise_denoise_update_0_write0;
  return 0;
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
//	demosaicb_rd18
//	demosaicb_rd19
//	demosaicb_rd20
//	demosaicb_rd21
//	demosaicb_rd22
//	demosaicb_rd23
//	demosaicb_rd24
//	demosaicb_rd25
//	demosaicb_rd26
//	demosaicb_rd27
//	demosaicb_rd28
//	demosaicb_rd29
//	demosaicb_rd30
//	demosaicb_rd31
//	demosaicb_rd32
//	demosaicb_rd33
//	demosaicb_rd34
//	demosaicb_rd35
inline hw_uint<576> denoise_demosaicb_update_0_read_bundle_read(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 36
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
    // demosaicb_rd18
    // demosaicb_rd19
    // demosaicb_rd20
    // demosaicb_rd21
    // demosaicb_rd22
    // demosaicb_rd23
    // demosaicb_rd24
    // demosaicb_rd25
    // demosaicb_rd26
    // demosaicb_rd27
    // demosaicb_rd28
    // demosaicb_rd29
    // demosaicb_rd30
    // demosaicb_rd31
    // demosaicb_rd32
    // demosaicb_rd33
    // demosaicb_rd34
    // demosaicb_rd35

	hw_uint<576> result;
	hw_uint<16> demosaicb_rd0_res = demosaicb_rd0_select(denoise, d0, d1, dynamic_address);
	set_at<0, 576>(result, demosaicb_rd0_res);
	hw_uint<16> demosaicb_rd1_res = demosaicb_rd1_select(denoise, d0, d1, dynamic_address);
	set_at<16, 576>(result, demosaicb_rd1_res);
	hw_uint<16> demosaicb_rd2_res = demosaicb_rd2_select(denoise, d0, d1, dynamic_address);
	set_at<32, 576>(result, demosaicb_rd2_res);
	hw_uint<16> demosaicb_rd3_res = demosaicb_rd3_select(denoise, d0, d1, dynamic_address);
	set_at<48, 576>(result, demosaicb_rd3_res);
	hw_uint<16> demosaicb_rd4_res = demosaicb_rd4_select(denoise, d0, d1, dynamic_address);
	set_at<64, 576>(result, demosaicb_rd4_res);
	hw_uint<16> demosaicb_rd5_res = demosaicb_rd5_select(denoise, d0, d1, dynamic_address);
	set_at<80, 576>(result, demosaicb_rd5_res);
	hw_uint<16> demosaicb_rd6_res = demosaicb_rd6_select(denoise, d0, d1, dynamic_address);
	set_at<96, 576>(result, demosaicb_rd6_res);
	hw_uint<16> demosaicb_rd7_res = demosaicb_rd7_select(denoise, d0, d1, dynamic_address);
	set_at<112, 576>(result, demosaicb_rd7_res);
	hw_uint<16> demosaicb_rd8_res = demosaicb_rd8_select(denoise, d0, d1, dynamic_address);
	set_at<128, 576>(result, demosaicb_rd8_res);
	hw_uint<16> demosaicb_rd9_res = demosaicb_rd9_select(denoise, d0, d1, dynamic_address);
	set_at<144, 576>(result, demosaicb_rd9_res);
	hw_uint<16> demosaicb_rd10_res = demosaicb_rd10_select(denoise, d0, d1, dynamic_address);
	set_at<160, 576>(result, demosaicb_rd10_res);
	hw_uint<16> demosaicb_rd11_res = demosaicb_rd11_select(denoise, d0, d1, dynamic_address);
	set_at<176, 576>(result, demosaicb_rd11_res);
	hw_uint<16> demosaicb_rd12_res = demosaicb_rd12_select(denoise, d0, d1, dynamic_address);
	set_at<192, 576>(result, demosaicb_rd12_res);
	hw_uint<16> demosaicb_rd13_res = demosaicb_rd13_select(denoise, d0, d1, dynamic_address);
	set_at<208, 576>(result, demosaicb_rd13_res);
	hw_uint<16> demosaicb_rd14_res = demosaicb_rd14_select(denoise, d0, d1, dynamic_address);
	set_at<224, 576>(result, demosaicb_rd14_res);
	hw_uint<16> demosaicb_rd15_res = demosaicb_rd15_select(denoise, d0, d1, dynamic_address);
	set_at<240, 576>(result, demosaicb_rd15_res);
	hw_uint<16> demosaicb_rd16_res = demosaicb_rd16_select(denoise, d0, d1, dynamic_address);
	set_at<256, 576>(result, demosaicb_rd16_res);
	hw_uint<16> demosaicb_rd17_res = demosaicb_rd17_select(denoise, d0, d1, dynamic_address);
	set_at<272, 576>(result, demosaicb_rd17_res);
	hw_uint<16> demosaicb_rd18_res = demosaicb_rd18_select(denoise, d0, d1, dynamic_address);
	set_at<288, 576>(result, demosaicb_rd18_res);
	hw_uint<16> demosaicb_rd19_res = demosaicb_rd19_select(denoise, d0, d1, dynamic_address);
	set_at<304, 576>(result, demosaicb_rd19_res);
	hw_uint<16> demosaicb_rd20_res = demosaicb_rd20_select(denoise, d0, d1, dynamic_address);
	set_at<320, 576>(result, demosaicb_rd20_res);
	hw_uint<16> demosaicb_rd21_res = demosaicb_rd21_select(denoise, d0, d1, dynamic_address);
	set_at<336, 576>(result, demosaicb_rd21_res);
	hw_uint<16> demosaicb_rd22_res = demosaicb_rd22_select(denoise, d0, d1, dynamic_address);
	set_at<352, 576>(result, demosaicb_rd22_res);
	hw_uint<16> demosaicb_rd23_res = demosaicb_rd23_select(denoise, d0, d1, dynamic_address);
	set_at<368, 576>(result, demosaicb_rd23_res);
	hw_uint<16> demosaicb_rd24_res = demosaicb_rd24_select(denoise, d0, d1, dynamic_address);
	set_at<384, 576>(result, demosaicb_rd24_res);
	hw_uint<16> demosaicb_rd25_res = demosaicb_rd25_select(denoise, d0, d1, dynamic_address);
	set_at<400, 576>(result, demosaicb_rd25_res);
	hw_uint<16> demosaicb_rd26_res = demosaicb_rd26_select(denoise, d0, d1, dynamic_address);
	set_at<416, 576>(result, demosaicb_rd26_res);
	hw_uint<16> demosaicb_rd27_res = demosaicb_rd27_select(denoise, d0, d1, dynamic_address);
	set_at<432, 576>(result, demosaicb_rd27_res);
	hw_uint<16> demosaicb_rd28_res = demosaicb_rd28_select(denoise, d0, d1, dynamic_address);
	set_at<448, 576>(result, demosaicb_rd28_res);
	hw_uint<16> demosaicb_rd29_res = demosaicb_rd29_select(denoise, d0, d1, dynamic_address);
	set_at<464, 576>(result, demosaicb_rd29_res);
	hw_uint<16> demosaicb_rd30_res = demosaicb_rd30_select(denoise, d0, d1, dynamic_address);
	set_at<480, 576>(result, demosaicb_rd30_res);
	hw_uint<16> demosaicb_rd31_res = demosaicb_rd31_select(denoise, d0, d1, dynamic_address);
	set_at<496, 576>(result, demosaicb_rd31_res);
	hw_uint<16> demosaicb_rd32_res = demosaicb_rd32_select(denoise, d0, d1, dynamic_address);
	set_at<512, 576>(result, demosaicb_rd32_res);
	hw_uint<16> demosaicb_rd33_res = demosaicb_rd33_select(denoise, d0, d1, dynamic_address);
	set_at<528, 576>(result, demosaicb_rd33_res);
	hw_uint<16> demosaicb_rd34_res = demosaicb_rd34_select(denoise, d0, d1, dynamic_address);
	set_at<544, 576>(result, demosaicb_rd34_res);
	hw_uint<16> demosaicb_rd35_res = demosaicb_rd35_select(denoise, d0, d1, dynamic_address);
	set_at<560, 576>(result, demosaicb_rd35_res);
	return result;
}

// denoise_update_0_write
//	denoise_denoise_update_0_write0
//	denoise_denoise_update_0_write1
//	denoise_denoise_update_0_write2
//	denoise_denoise_update_0_write3
inline void denoise_denoise_update_0_write_bundle_write(hw_uint<64>& denoise_update_0_write, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
	hw_uint<16> denoise_denoise_update_0_write0_res = denoise_update_0_write.extract<0, 15>();
	denoise_denoise_update_0_write0_write(denoise_denoise_update_0_write0_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write1_res = denoise_update_0_write.extract<16, 31>();
	denoise_denoise_update_0_write1_write(denoise_denoise_update_0_write1_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write2_res = denoise_update_0_write.extract<32, 47>();
	denoise_denoise_update_0_write2_write(denoise_denoise_update_0_write2_res, denoise, d0, d1, dynamic_address);
	hw_uint<16> denoise_denoise_update_0_write3_res = denoise_update_0_write.extract<48, 63>();
	denoise_denoise_update_0_write3_write(denoise_denoise_update_0_write3_res, denoise, d0, d1, dynamic_address);
}

struct denoiseb_denoiseb_update_0_write0_to_denoise_rd0_cache {
	// RAM Box: {[-4, 1924], [-1, 1082]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct denoiseb_denoiseb_update_0_write1_to_denoise_rd1_cache {
	// RAM Box: {[-3, 1925], [-1, 1082]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct denoiseb_denoiseb_update_0_write2_to_denoise_rd2_cache {
	// RAM Box: {[-2, 1926], [-1, 1082]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct denoiseb_denoiseb_update_0_write3_to_denoise_rd3_cache {
	// RAM Box: {[-1, 1927], [-1, 1082]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct denoiseb_cache {
  // Reader addrs...
    // { denoise_update_0[d0, d1] -> denoiseb[4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoise_update_0[d0, d1] -> denoiseb[3 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // # of banks: 4
  denoiseb_denoiseb_update_0_write0_to_denoise_rd0_cache denoiseb_denoiseb_update_0_write0_to_denoise_rd0;
  denoiseb_denoiseb_update_0_write1_to_denoise_rd1_cache denoiseb_denoiseb_update_0_write1_to_denoise_rd1;
  denoiseb_denoiseb_update_0_write2_to_denoise_rd2_cache denoiseb_denoiseb_update_0_write2_to_denoise_rd2;
  denoiseb_denoiseb_update_0_write3_to_denoise_rd3_cache denoiseb_denoiseb_update_0_write3_to_denoise_rd3;
};



inline void denoiseb_denoiseb_update_0_write0_write(hw_uint<16>& denoiseb_denoiseb_update_0_write0, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write0_to_denoise_rd0.push(denoiseb_denoiseb_update_0_write0);
}

inline void denoiseb_denoiseb_update_0_write1_write(hw_uint<16>& denoiseb_denoiseb_update_0_write1, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write1_to_denoise_rd1.push(denoiseb_denoiseb_update_0_write1);
}

inline void denoiseb_denoiseb_update_0_write2_write(hw_uint<16>& denoiseb_denoiseb_update_0_write2, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write2_to_denoise_rd2.push(denoiseb_denoiseb_update_0_write2);
}

inline void denoiseb_denoiseb_update_0_write3_write(hw_uint<16>& denoiseb_denoiseb_update_0_write3, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write3_to_denoise_rd3.push(denoiseb_denoiseb_update_0_write3);
}

inline hw_uint<16> denoise_rd0_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoise_rd0 read pattern: { denoise_update_0[d0, d1] -> denoiseb[4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write0 = denoiseb.denoiseb_denoiseb_update_0_write0_to_denoise_rd0.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write0;
  return 0;
}

inline hw_uint<16> denoise_rd1_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoise_rd1 read pattern: { denoise_update_0[d0, d1] -> denoiseb[1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write1 = denoiseb.denoiseb_denoiseb_update_0_write1_to_denoise_rd1.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write1;
  return 0;
}

inline hw_uint<16> denoise_rd2_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoise_rd2 read pattern: { denoise_update_0[d0, d1] -> denoiseb[2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write2 = denoiseb.denoiseb_denoiseb_update_0_write2_to_denoise_rd2.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write2;
  return 0;
}

inline hw_uint<16> denoise_rd3_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoise_rd3 read pattern: { denoise_update_0[d0, d1] -> denoiseb[3 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write3 = denoiseb.denoiseb_denoiseb_update_0_write3_to_denoise_rd3.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write3;
  return 0;
}

// # of bundles = 2
// denoise_update_0_read
//	denoise_rd0
//	denoise_rd1
//	denoise_rd2
//	denoise_rd3
inline hw_uint<64> denoiseb_denoise_update_0_read_bundle_read(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // denoise_rd0
    // denoise_rd1
    // denoise_rd2
    // denoise_rd3

	hw_uint<64> result;
	hw_uint<16> denoise_rd0_res = denoise_rd0_select(denoiseb, d0, d1, dynamic_address);
	set_at<0, 64>(result, denoise_rd0_res);
	hw_uint<16> denoise_rd1_res = denoise_rd1_select(denoiseb, d0, d1, dynamic_address);
	set_at<16, 64>(result, denoise_rd1_res);
	hw_uint<16> denoise_rd2_res = denoise_rd2_select(denoiseb, d0, d1, dynamic_address);
	set_at<32, 64>(result, denoise_rd2_res);
	hw_uint<16> denoise_rd3_res = denoise_rd3_select(denoiseb, d0, d1, dynamic_address);
	set_at<48, 64>(result, denoise_rd3_res);
	return result;
}

// denoiseb_update_0_write
//	denoiseb_denoiseb_update_0_write0
//	denoiseb_denoiseb_update_0_write1
//	denoiseb_denoiseb_update_0_write2
//	denoiseb_denoiseb_update_0_write3
inline void denoiseb_denoiseb_update_0_write_bundle_write(hw_uint<64>& denoiseb_update_0_write, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
	hw_uint<16> denoiseb_denoiseb_update_0_write0_res = denoiseb_update_0_write.extract<0, 15>();
	denoiseb_denoiseb_update_0_write0_write(denoiseb_denoiseb_update_0_write0_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write1_res = denoiseb_update_0_write.extract<16, 31>();
	denoiseb_denoiseb_update_0_write1_write(denoiseb_denoiseb_update_0_write1_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write2_res = denoiseb_update_0_write.extract<32, 47>();
	denoiseb_denoiseb_update_0_write2_write(denoiseb_denoiseb_update_0_write2_res, denoiseb, d0, d1, dynamic_address);
	hw_uint<16> denoiseb_denoiseb_update_0_write3_res = denoiseb_update_0_write.extract<48, 63>();
	denoiseb_denoiseb_update_0_write3_write(denoiseb_denoiseb_update_0_write3_res, denoiseb, d0, d1, dynamic_address);
}

struct raw_raw_update_0_write0_merged_banks_25_cache {
	// RAM Box: {[-4, 1928], [-3, 1084]}
	// Capacity: 1942
	// # of read delays: 10
  // 0, 1, 485, 486, 970, 971, 1455, 1456, 1940, 1941
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 483> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 483> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 483> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	fifo<hw_uint<16>, 483> f15;
	hw_uint<16> f16;
	hw_uint<16> f18;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_484() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_485() {
		return f4;
	}

	inline hw_uint<16> peek_486() {
		return f6;
	}

	inline hw_uint<16> peek_969() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_970() {
		return f8;
	}

	inline hw_uint<16> peek_971() {
		return f10;
	}

	inline hw_uint<16> peek_1454() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_1455() {
		return f12;
	}

	inline hw_uint<16> peek_1456() {
		return f14;
	}

	inline hw_uint<16> peek_1939() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f15.back();
	}

	inline hw_uint<16> peek_1940() {
		return f16;
	}

	inline hw_uint<16> peek_1941() {
		return f18;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f16 = f15.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f15.push(f14);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct raw_raw_update_0_write1_merged_banks_25_cache {
	// RAM Box: {[-3, 1929], [-3, 1084]}
	// Capacity: 1942
	// # of read delays: 10
  // 0, 1, 485, 486, 970, 971, 1455, 1456, 1940, 1941
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 483> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 483> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 483> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	fifo<hw_uint<16>, 483> f15;
	hw_uint<16> f16;
	hw_uint<16> f18;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_484() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_485() {
		return f4;
	}

	inline hw_uint<16> peek_486() {
		return f6;
	}

	inline hw_uint<16> peek_969() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_970() {
		return f8;
	}

	inline hw_uint<16> peek_971() {
		return f10;
	}

	inline hw_uint<16> peek_1454() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_1455() {
		return f12;
	}

	inline hw_uint<16> peek_1456() {
		return f14;
	}

	inline hw_uint<16> peek_1939() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f15.back();
	}

	inline hw_uint<16> peek_1940() {
		return f16;
	}

	inline hw_uint<16> peek_1941() {
		return f18;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f16 = f15.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f15.push(f14);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct raw_raw_update_0_write2_merged_banks_25_cache {
	// RAM Box: {[-6, 1926], [-3, 1084]}
	// Capacity: 1943
	// # of read delays: 11
  // 0, 1, 2, 486, 487, 971, 972, 1456, 1457, 1941, 1942
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 483> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 483> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	fifo<hw_uint<16>, 483> f13;
	hw_uint<16> f14;
	hw_uint<16> f16;
	fifo<hw_uint<16>, 483> f17;
	hw_uint<16> f18;
	hw_uint<16> f20;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_485() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_486() {
		return f6;
	}

	inline hw_uint<16> peek_487() {
		return f8;
	}

	inline hw_uint<16> peek_970() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f9.back();
	}

	inline hw_uint<16> peek_971() {
		return f10;
	}

	inline hw_uint<16> peek_972() {
		return f12;
	}

	inline hw_uint<16> peek_1455() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f13.back();
	}

	inline hw_uint<16> peek_1456() {
		return f14;
	}

	inline hw_uint<16> peek_1457() {
		return f16;
	}

	inline hw_uint<16> peek_1940() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f17.back();
	}

	inline hw_uint<16> peek_1941() {
		return f18;
	}

	inline hw_uint<16> peek_1942() {
		return f20;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f18 = f17.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f17.push(f16);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f14 = f13.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f13.push(f12);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct raw_raw_update_0_write3_merged_banks_25_cache {
	// RAM Box: {[-5, 1927], [-3, 1084]}
	// Capacity: 1943
	// # of read delays: 11
  // 0, 1, 2, 486, 487, 971, 972, 1456, 1457, 1941, 1942
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 483> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 483> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	fifo<hw_uint<16>, 483> f13;
	hw_uint<16> f14;
	hw_uint<16> f16;
	fifo<hw_uint<16>, 483> f17;
	hw_uint<16> f18;
	hw_uint<16> f20;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_485() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_486() {
		return f6;
	}

	inline hw_uint<16> peek_487() {
		return f8;
	}

	inline hw_uint<16> peek_970() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f9.back();
	}

	inline hw_uint<16> peek_971() {
		return f10;
	}

	inline hw_uint<16> peek_972() {
		return f12;
	}

	inline hw_uint<16> peek_1455() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f13.back();
	}

	inline hw_uint<16> peek_1456() {
		return f14;
	}

	inline hw_uint<16> peek_1457() {
		return f16;
	}

	inline hw_uint<16> peek_1940() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f17.back();
	}

	inline hw_uint<16> peek_1941() {
		return f18;
	}

	inline hw_uint<16> peek_1942() {
		return f20;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f18 = f17.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f17.push(f16);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f14 = f13.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f13.push(f12);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 483
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 483 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct raw_cache {
  // Reader addrs...
    // { denoiseb_update_0[d0, d1] -> raw[-2 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[5 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // # of banks: 4
  raw_raw_update_0_write0_merged_banks_25_cache raw_raw_update_0_write0_merged_banks_25;
  raw_raw_update_0_write1_merged_banks_25_cache raw_raw_update_0_write1_merged_banks_25;
  raw_raw_update_0_write2_merged_banks_25_cache raw_raw_update_0_write2_merged_banks_25;
  raw_raw_update_0_write3_merged_banks_25_cache raw_raw_update_0_write3_merged_banks_25;
};



inline void raw_raw_update_0_write0_write(hw_uint<16>& raw_raw_update_0_write0, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write0_merged_banks_25.push(raw_raw_update_0_write0);
}

inline void raw_raw_update_0_write1_write(hw_uint<16>& raw_raw_update_0_write1, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write1_merged_banks_25.push(raw_raw_update_0_write1);
}

inline void raw_raw_update_0_write2_write(hw_uint<16>& raw_raw_update_0_write2, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write2_merged_banks_25.push(raw_raw_update_0_write2);
}

inline void raw_raw_update_0_write3_write(hw_uint<16>& raw_raw_update_0_write3, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write3_merged_banks_25.push(raw_raw_update_0_write3);
}

inline hw_uint<16> denoiseb_rd0_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd0 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1942();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd1_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd1 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1457();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd10_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd10 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd11_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd11 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd12_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd12 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd13_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd13 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd14_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd14 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd15_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd15 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd16_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd16 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd17_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd17 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd18_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd18 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd19_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd19 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd2_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd2 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_972();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd20_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd20 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd21_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd21 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd22_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd22 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd23_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd23 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd24_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd24 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd25_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd25 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1942();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd26_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd26 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1457();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd27_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd27 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_972();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd28_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd28 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_487();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd29_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd29 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd3_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd3 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_487();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd30_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd30 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd31_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd31 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd32_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd32 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd33_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd33 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd34_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd34 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd35_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd35 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd36_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd36 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd37_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd37 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd38_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd38 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd39_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd39 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd4_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd4 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd40_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd40 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd41_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd41 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd42_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd42 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd43_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd43 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd44_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd44 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd45_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd45 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd46_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd46 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd47_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd47 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd48_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd48 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd49_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd49 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd5_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd5 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1942();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd50_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd50 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd51_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd51 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd52_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd52 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd53_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd53 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd54_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd54 read pattern: { denoiseb_update_0[d0, d1] -> raw[4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd55_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd55 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd56_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd56 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd57_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd57 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd58_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd58 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd59_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd59 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd6_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd6 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1457();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd60_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd60 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd61_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd61 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd62_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd62 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd63_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd63 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd64_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd64 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd65_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd65 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd66_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd66 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd67_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd67 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd68_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd68 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd69_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd69 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd7_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd7 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_972();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd70_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd70 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1940();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd71_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd71 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1455();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd72_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd72 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_970();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd73_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd73 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_485();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd74_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd74 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd75_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd75 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd76_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd76 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd77_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd77 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd78_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd78 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd79_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd79 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd8_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd8 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_487();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd80_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd80 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd81_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd81 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd82_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd82 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd83_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd83 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd84_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd84 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write2 = raw.raw_raw_update_0_write2_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write2;
  return 0;
}

inline hw_uint<16> denoiseb_rd85_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd85 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1941();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd86_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd86 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1456();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd87_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd87 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_971();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd88_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd88 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_486();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd89_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd89 read pattern: { denoiseb_update_0[d0, d1] -> raw[3 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd9_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd9 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write3 = raw.raw_raw_update_0_write3_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write3;
  return 0;
}

inline hw_uint<16> denoiseb_rd90_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd90 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1940();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd91_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd91 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1455();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd92_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd92 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_970();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd93_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd93 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_485();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd94_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd94 read pattern: { denoiseb_update_0[d0, d1] -> raw[4 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd95_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd95 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 4d0, -2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1940();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd96_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd96 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 4d0, -1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_1455();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd97_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd97 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 4d0, d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_970();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd98_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd98 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 4d0, 1 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_485();
  return value_raw_raw_update_0_write1;
  return 0;
}

inline hw_uint<16> denoiseb_rd99_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd99 read pattern: { denoiseb_update_0[d0, d1] -> raw[5 + 4d0, 2 + d1] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write1 = raw.raw_raw_update_0_write1_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write1;
  return 0;
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
//	denoiseb_rd50
//	denoiseb_rd51
//	denoiseb_rd52
//	denoiseb_rd53
//	denoiseb_rd54
//	denoiseb_rd55
//	denoiseb_rd56
//	denoiseb_rd57
//	denoiseb_rd58
//	denoiseb_rd59
//	denoiseb_rd60
//	denoiseb_rd61
//	denoiseb_rd62
//	denoiseb_rd63
//	denoiseb_rd64
//	denoiseb_rd65
//	denoiseb_rd66
//	denoiseb_rd67
//	denoiseb_rd68
//	denoiseb_rd69
//	denoiseb_rd70
//	denoiseb_rd71
//	denoiseb_rd72
//	denoiseb_rd73
//	denoiseb_rd74
//	denoiseb_rd75
//	denoiseb_rd76
//	denoiseb_rd77
//	denoiseb_rd78
//	denoiseb_rd79
//	denoiseb_rd80
//	denoiseb_rd81
//	denoiseb_rd82
//	denoiseb_rd83
//	denoiseb_rd84
//	denoiseb_rd85
//	denoiseb_rd86
//	denoiseb_rd87
//	denoiseb_rd88
//	denoiseb_rd89
//	denoiseb_rd90
//	denoiseb_rd91
//	denoiseb_rd92
//	denoiseb_rd93
//	denoiseb_rd94
//	denoiseb_rd95
//	denoiseb_rd96
//	denoiseb_rd97
//	denoiseb_rd98
//	denoiseb_rd99
inline hw_uint<1600> raw_denoiseb_update_0_read_bundle_read(raw_cache& raw, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 100
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
    // denoiseb_rd50
    // denoiseb_rd51
    // denoiseb_rd52
    // denoiseb_rd53
    // denoiseb_rd54
    // denoiseb_rd55
    // denoiseb_rd56
    // denoiseb_rd57
    // denoiseb_rd58
    // denoiseb_rd59
    // denoiseb_rd60
    // denoiseb_rd61
    // denoiseb_rd62
    // denoiseb_rd63
    // denoiseb_rd64
    // denoiseb_rd65
    // denoiseb_rd66
    // denoiseb_rd67
    // denoiseb_rd68
    // denoiseb_rd69
    // denoiseb_rd70
    // denoiseb_rd71
    // denoiseb_rd72
    // denoiseb_rd73
    // denoiseb_rd74
    // denoiseb_rd75
    // denoiseb_rd76
    // denoiseb_rd77
    // denoiseb_rd78
    // denoiseb_rd79
    // denoiseb_rd80
    // denoiseb_rd81
    // denoiseb_rd82
    // denoiseb_rd83
    // denoiseb_rd84
    // denoiseb_rd85
    // denoiseb_rd86
    // denoiseb_rd87
    // denoiseb_rd88
    // denoiseb_rd89
    // denoiseb_rd90
    // denoiseb_rd91
    // denoiseb_rd92
    // denoiseb_rd93
    // denoiseb_rd94
    // denoiseb_rd95
    // denoiseb_rd96
    // denoiseb_rd97
    // denoiseb_rd98
    // denoiseb_rd99

	hw_uint<1600> result;
	hw_uint<16> denoiseb_rd0_res = denoiseb_rd0_select(raw, d0, d1, dynamic_address);
	set_at<0, 1600>(result, denoiseb_rd0_res);
	hw_uint<16> denoiseb_rd1_res = denoiseb_rd1_select(raw, d0, d1, dynamic_address);
	set_at<16, 1600>(result, denoiseb_rd1_res);
	hw_uint<16> denoiseb_rd2_res = denoiseb_rd2_select(raw, d0, d1, dynamic_address);
	set_at<32, 1600>(result, denoiseb_rd2_res);
	hw_uint<16> denoiseb_rd3_res = denoiseb_rd3_select(raw, d0, d1, dynamic_address);
	set_at<48, 1600>(result, denoiseb_rd3_res);
	hw_uint<16> denoiseb_rd4_res = denoiseb_rd4_select(raw, d0, d1, dynamic_address);
	set_at<64, 1600>(result, denoiseb_rd4_res);
	hw_uint<16> denoiseb_rd5_res = denoiseb_rd5_select(raw, d0, d1, dynamic_address);
	set_at<80, 1600>(result, denoiseb_rd5_res);
	hw_uint<16> denoiseb_rd6_res = denoiseb_rd6_select(raw, d0, d1, dynamic_address);
	set_at<96, 1600>(result, denoiseb_rd6_res);
	hw_uint<16> denoiseb_rd7_res = denoiseb_rd7_select(raw, d0, d1, dynamic_address);
	set_at<112, 1600>(result, denoiseb_rd7_res);
	hw_uint<16> denoiseb_rd8_res = denoiseb_rd8_select(raw, d0, d1, dynamic_address);
	set_at<128, 1600>(result, denoiseb_rd8_res);
	hw_uint<16> denoiseb_rd9_res = denoiseb_rd9_select(raw, d0, d1, dynamic_address);
	set_at<144, 1600>(result, denoiseb_rd9_res);
	hw_uint<16> denoiseb_rd10_res = denoiseb_rd10_select(raw, d0, d1, dynamic_address);
	set_at<160, 1600>(result, denoiseb_rd10_res);
	hw_uint<16> denoiseb_rd11_res = denoiseb_rd11_select(raw, d0, d1, dynamic_address);
	set_at<176, 1600>(result, denoiseb_rd11_res);
	hw_uint<16> denoiseb_rd12_res = denoiseb_rd12_select(raw, d0, d1, dynamic_address);
	set_at<192, 1600>(result, denoiseb_rd12_res);
	hw_uint<16> denoiseb_rd13_res = denoiseb_rd13_select(raw, d0, d1, dynamic_address);
	set_at<208, 1600>(result, denoiseb_rd13_res);
	hw_uint<16> denoiseb_rd14_res = denoiseb_rd14_select(raw, d0, d1, dynamic_address);
	set_at<224, 1600>(result, denoiseb_rd14_res);
	hw_uint<16> denoiseb_rd15_res = denoiseb_rd15_select(raw, d0, d1, dynamic_address);
	set_at<240, 1600>(result, denoiseb_rd15_res);
	hw_uint<16> denoiseb_rd16_res = denoiseb_rd16_select(raw, d0, d1, dynamic_address);
	set_at<256, 1600>(result, denoiseb_rd16_res);
	hw_uint<16> denoiseb_rd17_res = denoiseb_rd17_select(raw, d0, d1, dynamic_address);
	set_at<272, 1600>(result, denoiseb_rd17_res);
	hw_uint<16> denoiseb_rd18_res = denoiseb_rd18_select(raw, d0, d1, dynamic_address);
	set_at<288, 1600>(result, denoiseb_rd18_res);
	hw_uint<16> denoiseb_rd19_res = denoiseb_rd19_select(raw, d0, d1, dynamic_address);
	set_at<304, 1600>(result, denoiseb_rd19_res);
	hw_uint<16> denoiseb_rd20_res = denoiseb_rd20_select(raw, d0, d1, dynamic_address);
	set_at<320, 1600>(result, denoiseb_rd20_res);
	hw_uint<16> denoiseb_rd21_res = denoiseb_rd21_select(raw, d0, d1, dynamic_address);
	set_at<336, 1600>(result, denoiseb_rd21_res);
	hw_uint<16> denoiseb_rd22_res = denoiseb_rd22_select(raw, d0, d1, dynamic_address);
	set_at<352, 1600>(result, denoiseb_rd22_res);
	hw_uint<16> denoiseb_rd23_res = denoiseb_rd23_select(raw, d0, d1, dynamic_address);
	set_at<368, 1600>(result, denoiseb_rd23_res);
	hw_uint<16> denoiseb_rd24_res = denoiseb_rd24_select(raw, d0, d1, dynamic_address);
	set_at<384, 1600>(result, denoiseb_rd24_res);
	hw_uint<16> denoiseb_rd25_res = denoiseb_rd25_select(raw, d0, d1, dynamic_address);
	set_at<400, 1600>(result, denoiseb_rd25_res);
	hw_uint<16> denoiseb_rd26_res = denoiseb_rd26_select(raw, d0, d1, dynamic_address);
	set_at<416, 1600>(result, denoiseb_rd26_res);
	hw_uint<16> denoiseb_rd27_res = denoiseb_rd27_select(raw, d0, d1, dynamic_address);
	set_at<432, 1600>(result, denoiseb_rd27_res);
	hw_uint<16> denoiseb_rd28_res = denoiseb_rd28_select(raw, d0, d1, dynamic_address);
	set_at<448, 1600>(result, denoiseb_rd28_res);
	hw_uint<16> denoiseb_rd29_res = denoiseb_rd29_select(raw, d0, d1, dynamic_address);
	set_at<464, 1600>(result, denoiseb_rd29_res);
	hw_uint<16> denoiseb_rd30_res = denoiseb_rd30_select(raw, d0, d1, dynamic_address);
	set_at<480, 1600>(result, denoiseb_rd30_res);
	hw_uint<16> denoiseb_rd31_res = denoiseb_rd31_select(raw, d0, d1, dynamic_address);
	set_at<496, 1600>(result, denoiseb_rd31_res);
	hw_uint<16> denoiseb_rd32_res = denoiseb_rd32_select(raw, d0, d1, dynamic_address);
	set_at<512, 1600>(result, denoiseb_rd32_res);
	hw_uint<16> denoiseb_rd33_res = denoiseb_rd33_select(raw, d0, d1, dynamic_address);
	set_at<528, 1600>(result, denoiseb_rd33_res);
	hw_uint<16> denoiseb_rd34_res = denoiseb_rd34_select(raw, d0, d1, dynamic_address);
	set_at<544, 1600>(result, denoiseb_rd34_res);
	hw_uint<16> denoiseb_rd35_res = denoiseb_rd35_select(raw, d0, d1, dynamic_address);
	set_at<560, 1600>(result, denoiseb_rd35_res);
	hw_uint<16> denoiseb_rd36_res = denoiseb_rd36_select(raw, d0, d1, dynamic_address);
	set_at<576, 1600>(result, denoiseb_rd36_res);
	hw_uint<16> denoiseb_rd37_res = denoiseb_rd37_select(raw, d0, d1, dynamic_address);
	set_at<592, 1600>(result, denoiseb_rd37_res);
	hw_uint<16> denoiseb_rd38_res = denoiseb_rd38_select(raw, d0, d1, dynamic_address);
	set_at<608, 1600>(result, denoiseb_rd38_res);
	hw_uint<16> denoiseb_rd39_res = denoiseb_rd39_select(raw, d0, d1, dynamic_address);
	set_at<624, 1600>(result, denoiseb_rd39_res);
	hw_uint<16> denoiseb_rd40_res = denoiseb_rd40_select(raw, d0, d1, dynamic_address);
	set_at<640, 1600>(result, denoiseb_rd40_res);
	hw_uint<16> denoiseb_rd41_res = denoiseb_rd41_select(raw, d0, d1, dynamic_address);
	set_at<656, 1600>(result, denoiseb_rd41_res);
	hw_uint<16> denoiseb_rd42_res = denoiseb_rd42_select(raw, d0, d1, dynamic_address);
	set_at<672, 1600>(result, denoiseb_rd42_res);
	hw_uint<16> denoiseb_rd43_res = denoiseb_rd43_select(raw, d0, d1, dynamic_address);
	set_at<688, 1600>(result, denoiseb_rd43_res);
	hw_uint<16> denoiseb_rd44_res = denoiseb_rd44_select(raw, d0, d1, dynamic_address);
	set_at<704, 1600>(result, denoiseb_rd44_res);
	hw_uint<16> denoiseb_rd45_res = denoiseb_rd45_select(raw, d0, d1, dynamic_address);
	set_at<720, 1600>(result, denoiseb_rd45_res);
	hw_uint<16> denoiseb_rd46_res = denoiseb_rd46_select(raw, d0, d1, dynamic_address);
	set_at<736, 1600>(result, denoiseb_rd46_res);
	hw_uint<16> denoiseb_rd47_res = denoiseb_rd47_select(raw, d0, d1, dynamic_address);
	set_at<752, 1600>(result, denoiseb_rd47_res);
	hw_uint<16> denoiseb_rd48_res = denoiseb_rd48_select(raw, d0, d1, dynamic_address);
	set_at<768, 1600>(result, denoiseb_rd48_res);
	hw_uint<16> denoiseb_rd49_res = denoiseb_rd49_select(raw, d0, d1, dynamic_address);
	set_at<784, 1600>(result, denoiseb_rd49_res);
	hw_uint<16> denoiseb_rd50_res = denoiseb_rd50_select(raw, d0, d1, dynamic_address);
	set_at<800, 1600>(result, denoiseb_rd50_res);
	hw_uint<16> denoiseb_rd51_res = denoiseb_rd51_select(raw, d0, d1, dynamic_address);
	set_at<816, 1600>(result, denoiseb_rd51_res);
	hw_uint<16> denoiseb_rd52_res = denoiseb_rd52_select(raw, d0, d1, dynamic_address);
	set_at<832, 1600>(result, denoiseb_rd52_res);
	hw_uint<16> denoiseb_rd53_res = denoiseb_rd53_select(raw, d0, d1, dynamic_address);
	set_at<848, 1600>(result, denoiseb_rd53_res);
	hw_uint<16> denoiseb_rd54_res = denoiseb_rd54_select(raw, d0, d1, dynamic_address);
	set_at<864, 1600>(result, denoiseb_rd54_res);
	hw_uint<16> denoiseb_rd55_res = denoiseb_rd55_select(raw, d0, d1, dynamic_address);
	set_at<880, 1600>(result, denoiseb_rd55_res);
	hw_uint<16> denoiseb_rd56_res = denoiseb_rd56_select(raw, d0, d1, dynamic_address);
	set_at<896, 1600>(result, denoiseb_rd56_res);
	hw_uint<16> denoiseb_rd57_res = denoiseb_rd57_select(raw, d0, d1, dynamic_address);
	set_at<912, 1600>(result, denoiseb_rd57_res);
	hw_uint<16> denoiseb_rd58_res = denoiseb_rd58_select(raw, d0, d1, dynamic_address);
	set_at<928, 1600>(result, denoiseb_rd58_res);
	hw_uint<16> denoiseb_rd59_res = denoiseb_rd59_select(raw, d0, d1, dynamic_address);
	set_at<944, 1600>(result, denoiseb_rd59_res);
	hw_uint<16> denoiseb_rd60_res = denoiseb_rd60_select(raw, d0, d1, dynamic_address);
	set_at<960, 1600>(result, denoiseb_rd60_res);
	hw_uint<16> denoiseb_rd61_res = denoiseb_rd61_select(raw, d0, d1, dynamic_address);
	set_at<976, 1600>(result, denoiseb_rd61_res);
	hw_uint<16> denoiseb_rd62_res = denoiseb_rd62_select(raw, d0, d1, dynamic_address);
	set_at<992, 1600>(result, denoiseb_rd62_res);
	hw_uint<16> denoiseb_rd63_res = denoiseb_rd63_select(raw, d0, d1, dynamic_address);
	set_at<1008, 1600>(result, denoiseb_rd63_res);
	hw_uint<16> denoiseb_rd64_res = denoiseb_rd64_select(raw, d0, d1, dynamic_address);
	set_at<1024, 1600>(result, denoiseb_rd64_res);
	hw_uint<16> denoiseb_rd65_res = denoiseb_rd65_select(raw, d0, d1, dynamic_address);
	set_at<1040, 1600>(result, denoiseb_rd65_res);
	hw_uint<16> denoiseb_rd66_res = denoiseb_rd66_select(raw, d0, d1, dynamic_address);
	set_at<1056, 1600>(result, denoiseb_rd66_res);
	hw_uint<16> denoiseb_rd67_res = denoiseb_rd67_select(raw, d0, d1, dynamic_address);
	set_at<1072, 1600>(result, denoiseb_rd67_res);
	hw_uint<16> denoiseb_rd68_res = denoiseb_rd68_select(raw, d0, d1, dynamic_address);
	set_at<1088, 1600>(result, denoiseb_rd68_res);
	hw_uint<16> denoiseb_rd69_res = denoiseb_rd69_select(raw, d0, d1, dynamic_address);
	set_at<1104, 1600>(result, denoiseb_rd69_res);
	hw_uint<16> denoiseb_rd70_res = denoiseb_rd70_select(raw, d0, d1, dynamic_address);
	set_at<1120, 1600>(result, denoiseb_rd70_res);
	hw_uint<16> denoiseb_rd71_res = denoiseb_rd71_select(raw, d0, d1, dynamic_address);
	set_at<1136, 1600>(result, denoiseb_rd71_res);
	hw_uint<16> denoiseb_rd72_res = denoiseb_rd72_select(raw, d0, d1, dynamic_address);
	set_at<1152, 1600>(result, denoiseb_rd72_res);
	hw_uint<16> denoiseb_rd73_res = denoiseb_rd73_select(raw, d0, d1, dynamic_address);
	set_at<1168, 1600>(result, denoiseb_rd73_res);
	hw_uint<16> denoiseb_rd74_res = denoiseb_rd74_select(raw, d0, d1, dynamic_address);
	set_at<1184, 1600>(result, denoiseb_rd74_res);
	hw_uint<16> denoiseb_rd75_res = denoiseb_rd75_select(raw, d0, d1, dynamic_address);
	set_at<1200, 1600>(result, denoiseb_rd75_res);
	hw_uint<16> denoiseb_rd76_res = denoiseb_rd76_select(raw, d0, d1, dynamic_address);
	set_at<1216, 1600>(result, denoiseb_rd76_res);
	hw_uint<16> denoiseb_rd77_res = denoiseb_rd77_select(raw, d0, d1, dynamic_address);
	set_at<1232, 1600>(result, denoiseb_rd77_res);
	hw_uint<16> denoiseb_rd78_res = denoiseb_rd78_select(raw, d0, d1, dynamic_address);
	set_at<1248, 1600>(result, denoiseb_rd78_res);
	hw_uint<16> denoiseb_rd79_res = denoiseb_rd79_select(raw, d0, d1, dynamic_address);
	set_at<1264, 1600>(result, denoiseb_rd79_res);
	hw_uint<16> denoiseb_rd80_res = denoiseb_rd80_select(raw, d0, d1, dynamic_address);
	set_at<1280, 1600>(result, denoiseb_rd80_res);
	hw_uint<16> denoiseb_rd81_res = denoiseb_rd81_select(raw, d0, d1, dynamic_address);
	set_at<1296, 1600>(result, denoiseb_rd81_res);
	hw_uint<16> denoiseb_rd82_res = denoiseb_rd82_select(raw, d0, d1, dynamic_address);
	set_at<1312, 1600>(result, denoiseb_rd82_res);
	hw_uint<16> denoiseb_rd83_res = denoiseb_rd83_select(raw, d0, d1, dynamic_address);
	set_at<1328, 1600>(result, denoiseb_rd83_res);
	hw_uint<16> denoiseb_rd84_res = denoiseb_rd84_select(raw, d0, d1, dynamic_address);
	set_at<1344, 1600>(result, denoiseb_rd84_res);
	hw_uint<16> denoiseb_rd85_res = denoiseb_rd85_select(raw, d0, d1, dynamic_address);
	set_at<1360, 1600>(result, denoiseb_rd85_res);
	hw_uint<16> denoiseb_rd86_res = denoiseb_rd86_select(raw, d0, d1, dynamic_address);
	set_at<1376, 1600>(result, denoiseb_rd86_res);
	hw_uint<16> denoiseb_rd87_res = denoiseb_rd87_select(raw, d0, d1, dynamic_address);
	set_at<1392, 1600>(result, denoiseb_rd87_res);
	hw_uint<16> denoiseb_rd88_res = denoiseb_rd88_select(raw, d0, d1, dynamic_address);
	set_at<1408, 1600>(result, denoiseb_rd88_res);
	hw_uint<16> denoiseb_rd89_res = denoiseb_rd89_select(raw, d0, d1, dynamic_address);
	set_at<1424, 1600>(result, denoiseb_rd89_res);
	hw_uint<16> denoiseb_rd90_res = denoiseb_rd90_select(raw, d0, d1, dynamic_address);
	set_at<1440, 1600>(result, denoiseb_rd90_res);
	hw_uint<16> denoiseb_rd91_res = denoiseb_rd91_select(raw, d0, d1, dynamic_address);
	set_at<1456, 1600>(result, denoiseb_rd91_res);
	hw_uint<16> denoiseb_rd92_res = denoiseb_rd92_select(raw, d0, d1, dynamic_address);
	set_at<1472, 1600>(result, denoiseb_rd92_res);
	hw_uint<16> denoiseb_rd93_res = denoiseb_rd93_select(raw, d0, d1, dynamic_address);
	set_at<1488, 1600>(result, denoiseb_rd93_res);
	hw_uint<16> denoiseb_rd94_res = denoiseb_rd94_select(raw, d0, d1, dynamic_address);
	set_at<1504, 1600>(result, denoiseb_rd94_res);
	hw_uint<16> denoiseb_rd95_res = denoiseb_rd95_select(raw, d0, d1, dynamic_address);
	set_at<1520, 1600>(result, denoiseb_rd95_res);
	hw_uint<16> denoiseb_rd96_res = denoiseb_rd96_select(raw, d0, d1, dynamic_address);
	set_at<1536, 1600>(result, denoiseb_rd96_res);
	hw_uint<16> denoiseb_rd97_res = denoiseb_rd97_select(raw, d0, d1, dynamic_address);
	set_at<1552, 1600>(result, denoiseb_rd97_res);
	hw_uint<16> denoiseb_rd98_res = denoiseb_rd98_select(raw, d0, d1, dynamic_address);
	set_at<1568, 1600>(result, denoiseb_rd98_res);
	hw_uint<16> denoiseb_rd99_res = denoiseb_rd99_select(raw, d0, d1, dynamic_address);
	set_at<1584, 1600>(result, denoiseb_rd99_res);
	return result;
}

// raw_update_0_write
//	raw_raw_update_0_write0
//	raw_raw_update_0_write1
//	raw_raw_update_0_write2
//	raw_raw_update_0_write3
inline void raw_raw_update_0_write_bundle_write(hw_uint<64>& raw_update_0_write, raw_cache& raw, int d0, int d1, int dynamic_address) {
	hw_uint<16> raw_raw_update_0_write0_res = raw_update_0_write.extract<0, 15>();
	raw_raw_update_0_write0_write(raw_raw_update_0_write0_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write1_res = raw_update_0_write.extract<16, 31>();
	raw_raw_update_0_write1_write(raw_raw_update_0_write1_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write2_res = raw_update_0_write.extract<32, 47>();
	raw_raw_update_0_write2_write(raw_raw_update_0_write2_res, raw, d0, d1, dynamic_address);
	hw_uint<16> raw_raw_update_0_write3_res = raw_update_0_write.extract<48, 63>();
	raw_raw_update_0_write3_write(raw_raw_update_0_write3_res, raw, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 309232 bits


// Operation logic
inline void raw_update_0(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */raw_oc, raw_cache& raw, int d0, int d1) {
  // Dynamic address computation

	// Consume: raw_oc
	auto raw_oc_1_m_raw_1__p__0_c__1_m_raw_0__p__0_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_4(raw_oc_1_m_raw_1__p__0_c__1_m_raw_0__p__0_value);
	// Produce: raw
	raw_raw_update_0_write_bundle_write(/* arg names */compute_result, raw, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void denoiseb_update_0(raw_cache& raw, denoiseb_cache& denoiseb, int d0, int d1) {
  // Dynamic address computation

	// Consume: raw
	auto raw_1_m_denoiseb_1__p___m_2_c__1_m_denoiseb_0__p___m_2_value = raw_denoiseb_update_0_read_bundle_read(raw/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = denoiseb_generated_compute_unrolled_4(raw_1_m_denoiseb_1__p___m_2_c__1_m_denoiseb_0__p___m_2_value);
	// Produce: denoiseb
	denoiseb_denoiseb_update_0_write_bundle_write(/* arg names */compute_result, denoiseb, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void denoise_update_0(denoiseb_cache& denoiseb, denoise_cache& denoise, int d0, int d1) {
  // Dynamic address computation

	// Consume: denoiseb
	auto denoiseb_1_m_denoise_1__p__0_c__1_m_denoise_0__p__0_value = denoiseb_denoise_update_0_read_bundle_read(denoiseb/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = denoise_generated_compute_unrolled_4(denoiseb_1_m_denoise_1__p__0_c__1_m_denoise_0__p__0_value);
	// Produce: denoise
	denoise_denoise_update_0_write_bundle_write(/* arg names */compute_result, denoise, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaicb_update_0(denoise_cache& denoise, demosaicb_cache& demosaicb, int d0, int d1) {
  // Dynamic address computation

	// Consume: denoise
	auto denoise_1_m_demosaicb_1__p___m_1_c__1_m_demosaicb_0__p___m_1_value = denoise_demosaicb_update_0_read_bundle_read(denoise/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaicb_generated_compute_unrolled_4(denoise_1_m_demosaicb_1__p___m_1_c__1_m_demosaicb_0__p___m_1_value);
	// Produce: demosaicb
	demosaicb_demosaicb_update_0_write_bundle_write(/* arg names */compute_result, demosaicb, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_update_0(demosaicb_cache& demosaicb, demosaic_cache& demosaic, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaicb
	auto demosaicb_1_m_demosaic_1__p__0_c__1_m_demosaic_0__p__0_value = demosaicb_demosaic_update_0_read_bundle_read(demosaicb/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_generated_compute_unrolled_4(demosaicb_1_m_demosaic_1__p__0_c__1_m_demosaic_0__p__0_value);
	// Produce: demosaic
	demosaic_demosaic_update_0_write_bundle_write(/* arg names */compute_result, demosaic, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_bxb_update_0(demosaic_cache& demosaic, demosaic_bxb_cache& demosaic_bxb, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic_1_m_demosaic_bxb_1__p__0_c__1_m_demosaic_bxb_0__p__0_value = demosaic_demosaic_bxb_update_0_read_bundle_read(demosaic/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_bxb_generated_compute_unrolled_4(demosaic_1_m_demosaic_bxb_1__p__0_c__1_m_demosaic_bxb_0__p__0_value);
	// Produce: demosaic_bxb
	demosaic_bxb_demosaic_bxb_update_0_write_bundle_write(/* arg names */compute_result, demosaic_bxb, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_bx_update_0(demosaic_bxb_cache& demosaic_bxb, demosaic_bx_cache& demosaic_bx, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_bxb
	auto demosaic_bxb_1_m_demosaic_bx_1__p__0_c__1_m_demosaic_bx_0__p__0_value = demosaic_bxb_demosaic_bx_update_0_read_bundle_read(demosaic_bxb/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_bx_generated_compute_unrolled_4(demosaic_bxb_1_m_demosaic_bx_1__p__0_c__1_m_demosaic_bx_0__p__0_value);
	// Produce: demosaic_bx
	demosaic_bx_demosaic_bx_update_0_write_bundle_write(/* arg names */compute_result, demosaic_bx, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_byb_update_0(demosaic_bx_cache& demosaic_bx, demosaic_byb_cache& demosaic_byb, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_bx
	auto demosaic_bx_1_m_demosaic_byb_1__p__0_c__1_m_demosaic_byb_0__p__0_value = demosaic_bx_demosaic_byb_update_0_read_bundle_read(demosaic_bx/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_byb_generated_compute_unrolled_4(demosaic_bx_1_m_demosaic_byb_1__p__0_c__1_m_demosaic_byb_0__p__0_value);
	// Produce: demosaic_byb
	demosaic_byb_demosaic_byb_update_0_write_bundle_write(/* arg names */compute_result, demosaic_byb, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_by_update_0(demosaic_byb_cache& demosaic_byb, demosaic_by_cache& demosaic_by, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_byb
	auto demosaic_byb_1_m_demosaic_by_1__p__0_c__1_m_demosaic_by_0__p__0_value = demosaic_byb_demosaic_by_update_0_read_bundle_read(demosaic_byb/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_by_generated_compute_unrolled_4(demosaic_byb_1_m_demosaic_by_1__p__0_c__1_m_demosaic_by_0__p__0_value);
	// Produce: demosaic_by
	demosaic_by_demosaic_by_update_0_write_bundle_write(/* arg names */compute_result, demosaic_by, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_diff_update_0(demosaic_cache& demosaic, demosaic_by_cache& demosaic_by, demosaic_diff_cache& demosaic_diff, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value = demosaic_demosaic_diff_update_0_read_bundle_read(demosaic/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: demosaic_by
	auto demosaic_by_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value = demosaic_by_demosaic_diff_update_0_read_bundle_read(demosaic_by/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_diff_generated_compute_unrolled_4(demosaic_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value, demosaic_by_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value);
	// Produce: demosaic_diff
	demosaic_diff_demosaic_diff_update_0_write_bundle_write(/* arg names */compute_result, demosaic_diff, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void cp_noinit_ln1_catapult_case_4_update_0(demosaic_diff_cache& demosaic_diff, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */cp_noinit_ln1_catapult_case_4, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_diff
	auto demosaic_diff_1_m_cp_noinit_ln1_catapult_case_4_1__p__0_c__1_m_cp_noinit_ln1_catapult_case_4_0__p__0_value = demosaic_diff_cp_noinit_ln1_catapult_case_4_update_0_read_bundle_read(demosaic_diff/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = cp_noinit_ln1_catapult_case_4_generated_compute_unrolled_4(demosaic_diff_1_m_cp_noinit_ln1_catapult_case_4_1__p__0_c__1_m_cp_noinit_ln1_catapult_case_4_0__p__0_value);
	// Produce: cp_noinit_ln1_catapult_case_4
	cp_noinit_ln1_catapult_case_4.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void cp_noinit_ln1_catapult_case_4_opt(HWStream<hw_uint<64> >& /* get_args num ports = 4 */raw_oc, HWStream<hw_uint<64> >& /* get_args num ports = 4 */cp_noinit_ln1_catapult_case_4) {

#ifndef __SYNTHESIS__
  ofstream debug_file("cp_noinit_ln1_catapult_case_4_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  demosaic_cache demosaic;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaic_bx_cache demosaic_bx;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaic_bxb_cache demosaic_bxb;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaic_by_cache demosaic_by;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaic_byb_cache demosaic_byb;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaic_diff_cache demosaic_diff;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaicb_cache demosaicb;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  denoise_cache denoise;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  denoiseb_cache denoiseb;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  raw_cache raw;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081; denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082; raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084; demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081; cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081; demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081; demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
//   { demosaic_update_0[d0, d1] -> [3 + d1, 2 + d0, 5] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
// Condition for demosaic_update_0(((((-5 + 1*i2)) == 0) && (((-2 + 1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { denoise_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
// Condition for denoise_update_0(((((-3 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { raw_update_0[d0, d1] -> [d1, d0, 1] : -2 <= d0 <= 482 and -3 <= d1 <= 1084 }
// Condition for raw_update_0(((((-1 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 3 + d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
// Condition for demosaic_bxb_update_0(((((-6 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { cp_noinit_ln1_catapult_case_4_update_0[d0, d1] -> [5 + d1, 3 + d0, 11] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for cp_noinit_ln1_catapult_case_4_update_0(((((-11 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_bx_update_0[d0, d1] -> [3 + d1, 3 + d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1081 }
// Condition for demosaic_bx_update_0(((((-7 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaicb_update_0[d0, d1] -> [3 + d1, 2 + d0, 4] : 0 <= d0 <= 480 and 0 <= d1 <= 1081 }
// Condition for demosaicb_update_0(((((-4 + 1*i2)) == 0) && (((-2 + 1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_by_update_0[d0, d1] -> [5 + d1, 3 + d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for demosaic_by_update_0(((((-9 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_byb_update_0[d0, d1] -> [5 + d1, 3 + d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for demosaic_byb_update_0(((((-8 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_diff_update_0[d0, d1] -> [5 + d1, 3 + d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for demosaic_diff_update_0(((((-10 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { denoiseb_update_0[d0, d1] -> [2 + d1, 1 + d0, 2] : -1 <= d0 <= 481 and -1 <= d1 <= 1082 }
// Condition for denoiseb_update_0(((((-2 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((482 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))

	  // Schedules...
	    // cp_noinit_ln1_catapult_case_4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*3,1*11]
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
	  #pragma hls_pipeline_init_interval 1
	  for (int c1 = -2; c1 <= 482; c1++) {
	
	    if ((-2 <= c1 && c1 <= 482) && ((c1 - 0) % 1 == 0) && (-3 <= c0 && c0 <= 1084) && ((c0 - 0) % 1 == 0)) {
	      raw_update_0(raw_oc /* buf name */, raw, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 482) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      denoiseb_update_0(raw /* buf name */, denoiseb, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 482) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      denoise_update_0(denoiseb /* buf name */, denoise, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 482) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaicb_update_0(denoise /* buf name */, demosaicb, (c1 - 2) / 1, (c0 - 3) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 482) && ((c1 - 2) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaic_update_0(demosaicb /* buf name */, demosaic, (c1 - 2) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 482) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaic_bxb_update_0(demosaic /* buf name */, demosaic_bxb, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 482) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaic_bx_update_0(demosaic_bxb /* buf name */, demosaic_bx, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 482) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      demosaic_byb_update_0(demosaic_bx /* buf name */, demosaic_byb, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 482) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      demosaic_by_update_0(demosaic_byb /* buf name */, demosaic_by, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 482) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      demosaic_diff_update_0(demosaic /* buf name */, demosaic_by /* buf name */, demosaic_diff, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 482) && ((c1 - 3) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      cp_noinit_ln1_catapult_case_4_update_0(demosaic_diff /* buf name */, cp_noinit_ln1_catapult_case_4, (c1 - 3) / 1, (c0 - 5) / 1);
	    }
	
	  }
	}
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void cp_noinit_ln1_catapult_case_4_opt_wrapper(HWStream<hw_uint<64> >& /* get_args num ports = 4 */raw_oc, HWStream<hw_uint<64> >& /* get_args num ports = 4 */cp_noinit_ln1_catapult_case_4, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    cp_noinit_ln1_catapult_case_4_opt(raw_oc, cp_noinit_ln1_catapult_case_4);
  }
}
#ifdef __SYNTHESIS__
  // { cp_noinit_ln1_catapult_case_4_update_0[root = 0, cp_noinit_ln1_catapult_case_4_0, cp_noinit_ln1_catapult_case_4_1] -> cp_noinit_ln1_catapult_case_4[cp_noinit_ln1_catapult_case_4_1, cp_noinit_ln1_catapult_case_4_0] : 0 <= cp_noinit_ln1_catapult_case_4_0 <= 1079 and 0 <= cp_noinit_ln1_catapult_case_4_1 <= 479 }
const int cp_noinit_ln1_catapult_case_4_update_0_write_pipe0_num_transfers = 518400;
  // { raw_update_0[root = 0, raw_0, raw_1] -> raw_oc[raw_1, raw_0] : -3 <= raw_0 <= 1084 and -2 <= raw_1 <= 482 }
const int raw_update_0_read_pipe0_num_transfers = 527680;


extern "C" {

void cp_noinit_ln1_catapult_case_4_opt_accel(hw_uint<64>* raw_update_0_read_pipe0, hw_uint<64>* cp_noinit_ln1_catapult_case_4_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp_noinit_ln1_catapult_case_4_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = cp_noinit_ln1_catapult_case_4_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<64> > raw_update_0_read_pipe0_channel;
  static HWStream<hw_uint<64> > cp_noinit_ln1_catapult_case_4_update_0_write_pipe0_channel;

  burst_read<64>(raw_update_0_read_pipe0, raw_update_0_read_pipe0_channel, raw_update_0_read_pipe0_num_transfers*30);

  cp_noinit_ln1_catapult_case_4_opt_wrapper(raw_update_0_read_pipe0_channel, cp_noinit_ln1_catapult_case_4_update_0_write_pipe0_channel, size);

  burst_write<64>(cp_noinit_ln1_catapult_case_4_update_0_write_pipe0, cp_noinit_ln1_catapult_case_4_update_0_write_pipe0_channel, cp_noinit_ln1_catapult_case_4_update_0_write_pipe0_num_transfers*30);
}

}
extern "C" {

void cp_noinit_ln1_catapult_case_4_opt_rdai(HWStream<hw_uint<64> >& raw_update_0_read_pipe0, HWStream<hw_uint<64> >&  cp_noinit_ln1_catapult_case_4_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = raw_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = cp_noinit_ln1_catapult_case_4_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  cp_noinit_ln1_catapult_case_4_opt(raw_update_0_read_pipe0, cp_noinit_ln1_catapult_case_4_update_0_write_pipe0);

}

}
#endif //__SYNTHESIS__

