#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: h10_1_300MHz_4_opt_compute_units.h
#include "h10_1_300MHz_4_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-32, 1056], [-9, 1031]}
	// Capacity: 550
	// # of read delays: 5
  // 0, 1, 274, 275, 549
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 272> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 273> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_273() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_274() {
		return f4;
	}

	inline hw_uint<32>  peek_275() {
		return f6;
	}

	inline hw_uint<32>  peek_548() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_549() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 272
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 272 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-31, 1053], [-9, 1032]}
	// Capacity: 550
	// # of read delays: 4
  // 0, 1, 275, 549
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 273> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 273> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_274() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_275() {
		return f4;
	}

	inline hw_uint<32>  peek_548() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_549() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[-30, 1054], [-9, 1032]}
	// Capacity: 550
	// # of read delays: 4
  // 0, 1, 275, 549
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 273> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 273> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_274() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_275() {
		return f4;
	}

	inline hw_uint<32>  peek_548() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_549() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-33, 1055], [-8, 1032]}
	// Capacity: 550
	// # of read delays: 5
  // 0, 1, 275, 276, 549
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 273> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 272> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_274() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_275() {
		return f4;
	}

	inline hw_uint<32>  peek_276() {
		return f6;
	}

	inline hw_uint<32>  peek_548() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_549() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 272
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 272 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_cache {
  // # of banks: 4
  h3_0_h3_0_update_0_write0_merged_banks_5_cache h3_0_h3_0_update_0_write0_merged_banks_5;
  h3_0_h3_0_update_0_write1_merged_banks_5_cache h3_0_h3_0_update_0_write1_merged_banks_5;
  h3_0_h3_0_update_0_write2_merged_banks_5_cache h3_0_h3_0_update_0_write2_merged_banks_5;
  h3_0_h3_0_update_0_write3_merged_banks_5_cache h3_0_h3_0_update_0_write3_merged_banks_5;
};



inline void h3_0_h3_0_update_0_write0_write(hw_uint<32> & h3_0_h3_0_update_0_write0, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.push(h3_0_h3_0_update_0_write0);
}

inline void h3_0_h3_0_update_0_write1_write(hw_uint<32> & h3_0_h3_0_update_0_write1, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.push(h3_0_h3_0_update_0_write1);
}

inline void h3_0_h3_0_update_0_write2_write(hw_uint<32> & h3_0_h3_0_update_0_write2, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.push(h3_0_h3_0_update_0_write2);
}

inline void h3_0_h3_0_update_0_write3_write(hw_uint<32> & h3_0_h3_0_update_0_write3, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.push(h3_0_h3_0_update_0_write3);
}

inline hw_uint<32>  h3_1_rd0_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd0 read pattern: { h3_1_update_0[d0, d1] -> h3_0[-1 + 4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_276();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd1_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd1 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4d0, -1 + d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_549();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd10_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd10 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_275();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd11_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd11 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 4d0, -1 + d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_549();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd12_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd12 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_275();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd13_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd13 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 4d0, 1 + d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd14_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd14 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_275();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd15_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd15 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_275();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd16_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd16 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 4d0, -1 + d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_549();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd17_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd17 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_275();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd18_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd18 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 4d0, 1 + d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd19_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd19 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_274();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd2_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd2 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_275();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd3_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd3 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4d0, 1 + d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd4_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd4 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_275();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd5_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd5 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_275();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd6_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd6 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 4d0, -1 + d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_549();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd7_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd7 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_275();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd8_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd8 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 4d0, 1 + d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd9_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd9 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 4d0, d1] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_275();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_write
//	h3_0_h3_0_update_0_write0
//	h3_0_h3_0_update_0_write1
//	h3_0_h3_0_update_0_write2
//	h3_0_h3_0_update_0_write3
inline void h3_0_h3_0_update_0_write_bundle_write(hw_uint<128>& h3_0_update_0_write, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_0_h3_0_update_0_write0_res = h3_0_update_0_write.extract<0, 31>();
	h3_0_h3_0_update_0_write0_write(h3_0_h3_0_update_0_write0_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write1_res = h3_0_update_0_write.extract<32, 63>();
	h3_0_h3_0_update_0_write1_write(h3_0_h3_0_update_0_write1_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write2_res = h3_0_update_0_write.extract<64, 95>();
	h3_0_h3_0_update_0_write2_write(h3_0_h3_0_update_0_write2_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write3_res = h3_0_update_0_write.extract<96, 127>();
	h3_0_h3_0_update_0_write3_write(h3_0_h3_0_update_0_write3_res, h3_0, d0, d1, dynamic_address);
}

// h3_1_update_0_read
//	h3_1_rd0
//	h3_1_rd1
//	h3_1_rd2
//	h3_1_rd3
//	h3_1_rd4
//	h3_1_rd5
//	h3_1_rd6
//	h3_1_rd7
//	h3_1_rd8
//	h3_1_rd9
//	h3_1_rd10
//	h3_1_rd11
//	h3_1_rd12
//	h3_1_rd13
//	h3_1_rd14
//	h3_1_rd15
//	h3_1_rd16
//	h3_1_rd17
//	h3_1_rd18
//	h3_1_rd19
inline hw_uint<640> h3_0_h3_1_update_0_read_bundle_read(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 20
    // h3_1_rd0
    // h3_1_rd1
    // h3_1_rd2
    // h3_1_rd3
    // h3_1_rd4
    // h3_1_rd5
    // h3_1_rd6
    // h3_1_rd7
    // h3_1_rd8
    // h3_1_rd9
    // h3_1_rd10
    // h3_1_rd11
    // h3_1_rd12
    // h3_1_rd13
    // h3_1_rd14
    // h3_1_rd15
    // h3_1_rd16
    // h3_1_rd17
    // h3_1_rd18
    // h3_1_rd19

	hw_uint<640> result;
	hw_uint<32>  h3_1_rd0_res = h3_1_rd0_select(h3_0, d0, d1, dynamic_address);
	set_at<0, 640>(result, h3_1_rd0_res);
	hw_uint<32>  h3_1_rd1_res = h3_1_rd1_select(h3_0, d0, d1, dynamic_address);
	set_at<32, 640>(result, h3_1_rd1_res);
	hw_uint<32>  h3_1_rd2_res = h3_1_rd2_select(h3_0, d0, d1, dynamic_address);
	set_at<64, 640>(result, h3_1_rd2_res);
	hw_uint<32>  h3_1_rd3_res = h3_1_rd3_select(h3_0, d0, d1, dynamic_address);
	set_at<96, 640>(result, h3_1_rd3_res);
	hw_uint<32>  h3_1_rd4_res = h3_1_rd4_select(h3_0, d0, d1, dynamic_address);
	set_at<128, 640>(result, h3_1_rd4_res);
	hw_uint<32>  h3_1_rd5_res = h3_1_rd5_select(h3_0, d0, d1, dynamic_address);
	set_at<160, 640>(result, h3_1_rd5_res);
	hw_uint<32>  h3_1_rd6_res = h3_1_rd6_select(h3_0, d0, d1, dynamic_address);
	set_at<192, 640>(result, h3_1_rd6_res);
	hw_uint<32>  h3_1_rd7_res = h3_1_rd7_select(h3_0, d0, d1, dynamic_address);
	set_at<224, 640>(result, h3_1_rd7_res);
	hw_uint<32>  h3_1_rd8_res = h3_1_rd8_select(h3_0, d0, d1, dynamic_address);
	set_at<256, 640>(result, h3_1_rd8_res);
	hw_uint<32>  h3_1_rd9_res = h3_1_rd9_select(h3_0, d0, d1, dynamic_address);
	set_at<288, 640>(result, h3_1_rd9_res);
	hw_uint<32>  h3_1_rd10_res = h3_1_rd10_select(h3_0, d0, d1, dynamic_address);
	set_at<320, 640>(result, h3_1_rd10_res);
	hw_uint<32>  h3_1_rd11_res = h3_1_rd11_select(h3_0, d0, d1, dynamic_address);
	set_at<352, 640>(result, h3_1_rd11_res);
	hw_uint<32>  h3_1_rd12_res = h3_1_rd12_select(h3_0, d0, d1, dynamic_address);
	set_at<384, 640>(result, h3_1_rd12_res);
	hw_uint<32>  h3_1_rd13_res = h3_1_rd13_select(h3_0, d0, d1, dynamic_address);
	set_at<416, 640>(result, h3_1_rd13_res);
	hw_uint<32>  h3_1_rd14_res = h3_1_rd14_select(h3_0, d0, d1, dynamic_address);
	set_at<448, 640>(result, h3_1_rd14_res);
	hw_uint<32>  h3_1_rd15_res = h3_1_rd15_select(h3_0, d0, d1, dynamic_address);
	set_at<480, 640>(result, h3_1_rd15_res);
	hw_uint<32>  h3_1_rd16_res = h3_1_rd16_select(h3_0, d0, d1, dynamic_address);
	set_at<512, 640>(result, h3_1_rd16_res);
	hw_uint<32>  h3_1_rd17_res = h3_1_rd17_select(h3_0, d0, d1, dynamic_address);
	set_at<544, 640>(result, h3_1_rd17_res);
	hw_uint<32>  h3_1_rd18_res = h3_1_rd18_select(h3_0, d0, d1, dynamic_address);
	set_at<576, 640>(result, h3_1_rd18_res);
	hw_uint<32>  h3_1_rd19_res = h3_1_rd19_select(h3_0, d0, d1, dynamic_address);
	set_at<608, 640>(result, h3_1_rd19_res);
	return result;
}

struct h3_1_h3_1_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-28, 1052], [-8, 1030]}
	// Capacity: 546
	// # of read delays: 5
  // 0, 1, 272, 273, 545
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 270> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 271> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_271() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_272() {
		return f4;
	}

	inline hw_uint<32>  peek_273() {
		return f6;
	}

	inline hw_uint<32>  peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_545() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 270
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 270 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-27, 1049], [-8, 1031]}
	// Capacity: 546
	// # of read delays: 4
  // 0, 1, 273, 545
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 271> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 271> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_273() {
		return f4;
	}

	inline hw_uint<32>  peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_545() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[-26, 1050], [-8, 1031]}
	// Capacity: 546
	// # of read delays: 4
  // 0, 1, 273, 545
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 271> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 271> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_273() {
		return f4;
	}

	inline hw_uint<32>  peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_545() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-29, 1051], [-7, 1031]}
	// Capacity: 546
	// # of read delays: 5
  // 0, 1, 273, 274, 545
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 271> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 270> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_273() {
		return f4;
	}

	inline hw_uint<32>  peek_274() {
		return f6;
	}

	inline hw_uint<32>  peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_545() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 270
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 270 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_cache {
  // # of banks: 4
  h3_1_h3_1_update_0_write0_merged_banks_5_cache h3_1_h3_1_update_0_write0_merged_banks_5;
  h3_1_h3_1_update_0_write1_merged_banks_5_cache h3_1_h3_1_update_0_write1_merged_banks_5;
  h3_1_h3_1_update_0_write2_merged_banks_5_cache h3_1_h3_1_update_0_write2_merged_banks_5;
  h3_1_h3_1_update_0_write3_merged_banks_5_cache h3_1_h3_1_update_0_write3_merged_banks_5;
};



inline void h3_1_h3_1_update_0_write0_write(hw_uint<32> & h3_1_h3_1_update_0_write0, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.push(h3_1_h3_1_update_0_write0);
}

inline void h3_1_h3_1_update_0_write1_write(hw_uint<32> & h3_1_h3_1_update_0_write1, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.push(h3_1_h3_1_update_0_write1);
}

inline void h3_1_h3_1_update_0_write2_write(hw_uint<32> & h3_1_h3_1_update_0_write2, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.push(h3_1_h3_1_update_0_write2);
}

inline void h3_1_h3_1_update_0_write3_write(hw_uint<32> & h3_1_h3_1_update_0_write3, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.push(h3_1_h3_1_update_0_write3);
}

inline hw_uint<32>  h3_2_rd0_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd0 read pattern: { h3_2_update_0[d0, d1] -> h3_1[-1 + 4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_274();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd1_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd1 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4d0, -1 + d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_545();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd10_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd10 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_273();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd11_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd11 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 4d0, -1 + d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_545();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd12_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd12 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_273();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd13_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd13 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 4d0, 1 + d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd14_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd14 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_273();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd15_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd15 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_273();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd16_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd16 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 4d0, -1 + d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_545();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd17_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd17 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_273();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd18_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd18 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 4d0, 1 + d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd19_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd19 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_272();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd2_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd2 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_273();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd3_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd3 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4d0, 1 + d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd4_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd4 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_273();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd5_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd5 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_273();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd6_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd6 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 4d0, -1 + d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_545();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd7_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd7 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_273();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd8_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd8 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 4d0, 1 + d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd9_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd9 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 4d0, d1] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_273();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_1_update_0_write
//	h3_1_h3_1_update_0_write0
//	h3_1_h3_1_update_0_write1
//	h3_1_h3_1_update_0_write2
//	h3_1_h3_1_update_0_write3
inline void h3_1_h3_1_update_0_write_bundle_write(hw_uint<128>& h3_1_update_0_write, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_1_h3_1_update_0_write0_res = h3_1_update_0_write.extract<0, 31>();
	h3_1_h3_1_update_0_write0_write(h3_1_h3_1_update_0_write0_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write1_res = h3_1_update_0_write.extract<32, 63>();
	h3_1_h3_1_update_0_write1_write(h3_1_h3_1_update_0_write1_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write2_res = h3_1_update_0_write.extract<64, 95>();
	h3_1_h3_1_update_0_write2_write(h3_1_h3_1_update_0_write2_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write3_res = h3_1_update_0_write.extract<96, 127>();
	h3_1_h3_1_update_0_write3_write(h3_1_h3_1_update_0_write3_res, h3_1, d0, d1, dynamic_address);
}

// h3_2_update_0_read
//	h3_2_rd0
//	h3_2_rd1
//	h3_2_rd2
//	h3_2_rd3
//	h3_2_rd4
//	h3_2_rd5
//	h3_2_rd6
//	h3_2_rd7
//	h3_2_rd8
//	h3_2_rd9
//	h3_2_rd10
//	h3_2_rd11
//	h3_2_rd12
//	h3_2_rd13
//	h3_2_rd14
//	h3_2_rd15
//	h3_2_rd16
//	h3_2_rd17
//	h3_2_rd18
//	h3_2_rd19
inline hw_uint<640> h3_1_h3_2_update_0_read_bundle_read(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 20
    // h3_2_rd0
    // h3_2_rd1
    // h3_2_rd2
    // h3_2_rd3
    // h3_2_rd4
    // h3_2_rd5
    // h3_2_rd6
    // h3_2_rd7
    // h3_2_rd8
    // h3_2_rd9
    // h3_2_rd10
    // h3_2_rd11
    // h3_2_rd12
    // h3_2_rd13
    // h3_2_rd14
    // h3_2_rd15
    // h3_2_rd16
    // h3_2_rd17
    // h3_2_rd18
    // h3_2_rd19

	hw_uint<640> result;
	hw_uint<32>  h3_2_rd0_res = h3_2_rd0_select(h3_1, d0, d1, dynamic_address);
	set_at<0, 640>(result, h3_2_rd0_res);
	hw_uint<32>  h3_2_rd1_res = h3_2_rd1_select(h3_1, d0, d1, dynamic_address);
	set_at<32, 640>(result, h3_2_rd1_res);
	hw_uint<32>  h3_2_rd2_res = h3_2_rd2_select(h3_1, d0, d1, dynamic_address);
	set_at<64, 640>(result, h3_2_rd2_res);
	hw_uint<32>  h3_2_rd3_res = h3_2_rd3_select(h3_1, d0, d1, dynamic_address);
	set_at<96, 640>(result, h3_2_rd3_res);
	hw_uint<32>  h3_2_rd4_res = h3_2_rd4_select(h3_1, d0, d1, dynamic_address);
	set_at<128, 640>(result, h3_2_rd4_res);
	hw_uint<32>  h3_2_rd5_res = h3_2_rd5_select(h3_1, d0, d1, dynamic_address);
	set_at<160, 640>(result, h3_2_rd5_res);
	hw_uint<32>  h3_2_rd6_res = h3_2_rd6_select(h3_1, d0, d1, dynamic_address);
	set_at<192, 640>(result, h3_2_rd6_res);
	hw_uint<32>  h3_2_rd7_res = h3_2_rd7_select(h3_1, d0, d1, dynamic_address);
	set_at<224, 640>(result, h3_2_rd7_res);
	hw_uint<32>  h3_2_rd8_res = h3_2_rd8_select(h3_1, d0, d1, dynamic_address);
	set_at<256, 640>(result, h3_2_rd8_res);
	hw_uint<32>  h3_2_rd9_res = h3_2_rd9_select(h3_1, d0, d1, dynamic_address);
	set_at<288, 640>(result, h3_2_rd9_res);
	hw_uint<32>  h3_2_rd10_res = h3_2_rd10_select(h3_1, d0, d1, dynamic_address);
	set_at<320, 640>(result, h3_2_rd10_res);
	hw_uint<32>  h3_2_rd11_res = h3_2_rd11_select(h3_1, d0, d1, dynamic_address);
	set_at<352, 640>(result, h3_2_rd11_res);
	hw_uint<32>  h3_2_rd12_res = h3_2_rd12_select(h3_1, d0, d1, dynamic_address);
	set_at<384, 640>(result, h3_2_rd12_res);
	hw_uint<32>  h3_2_rd13_res = h3_2_rd13_select(h3_1, d0, d1, dynamic_address);
	set_at<416, 640>(result, h3_2_rd13_res);
	hw_uint<32>  h3_2_rd14_res = h3_2_rd14_select(h3_1, d0, d1, dynamic_address);
	set_at<448, 640>(result, h3_2_rd14_res);
	hw_uint<32>  h3_2_rd15_res = h3_2_rd15_select(h3_1, d0, d1, dynamic_address);
	set_at<480, 640>(result, h3_2_rd15_res);
	hw_uint<32>  h3_2_rd16_res = h3_2_rd16_select(h3_1, d0, d1, dynamic_address);
	set_at<512, 640>(result, h3_2_rd16_res);
	hw_uint<32>  h3_2_rd17_res = h3_2_rd17_select(h3_1, d0, d1, dynamic_address);
	set_at<544, 640>(result, h3_2_rd17_res);
	hw_uint<32>  h3_2_rd18_res = h3_2_rd18_select(h3_1, d0, d1, dynamic_address);
	set_at<576, 640>(result, h3_2_rd18_res);
	hw_uint<32>  h3_2_rd19_res = h3_2_rd19_select(h3_1, d0, d1, dynamic_address);
	set_at<608, 640>(result, h3_2_rd19_res);
	return result;
}

struct h3_2_h3_2_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-24, 1048], [-7, 1029]}
	// Capacity: 542
	// # of read delays: 5
  // 0, 1, 270, 271, 541
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 268> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 269> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_269() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_270() {
		return f4;
	}

	inline hw_uint<32>  peek_271() {
		return f6;
	}

	inline hw_uint<32>  peek_540() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_541() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 269
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 269 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 268
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 268 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-23, 1045], [-7, 1030]}
	// Capacity: 542
	// # of read delays: 4
  // 0, 1, 271, 541
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 269> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 269> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_270() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_271() {
		return f4;
	}

	inline hw_uint<32>  peek_540() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_541() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 269
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 269 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 269
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 269 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[-22, 1046], [-7, 1030]}
	// Capacity: 542
	// # of read delays: 4
  // 0, 1, 271, 541
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 269> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 269> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_270() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_271() {
		return f4;
	}

	inline hw_uint<32>  peek_540() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_541() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 269
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 269 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 269
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 269 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-25, 1047], [-6, 1030]}
	// Capacity: 542
	// # of read delays: 5
  // 0, 1, 271, 272, 541
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 269> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 268> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_270() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_271() {
		return f4;
	}

	inline hw_uint<32>  peek_272() {
		return f6;
	}

	inline hw_uint<32>  peek_540() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_541() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 268
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 268 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 269
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 269 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_cache {
  // # of banks: 4
  h3_2_h3_2_update_0_write0_merged_banks_5_cache h3_2_h3_2_update_0_write0_merged_banks_5;
  h3_2_h3_2_update_0_write1_merged_banks_5_cache h3_2_h3_2_update_0_write1_merged_banks_5;
  h3_2_h3_2_update_0_write2_merged_banks_5_cache h3_2_h3_2_update_0_write2_merged_banks_5;
  h3_2_h3_2_update_0_write3_merged_banks_5_cache h3_2_h3_2_update_0_write3_merged_banks_5;
};



inline void h3_2_h3_2_update_0_write0_write(hw_uint<32> & h3_2_h3_2_update_0_write0, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.push(h3_2_h3_2_update_0_write0);
}

inline void h3_2_h3_2_update_0_write1_write(hw_uint<32> & h3_2_h3_2_update_0_write1, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.push(h3_2_h3_2_update_0_write1);
}

inline void h3_2_h3_2_update_0_write2_write(hw_uint<32> & h3_2_h3_2_update_0_write2, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.push(h3_2_h3_2_update_0_write2);
}

inline void h3_2_h3_2_update_0_write3_write(hw_uint<32> & h3_2_h3_2_update_0_write3, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.push(h3_2_h3_2_update_0_write3);
}

inline hw_uint<32>  h3_3_rd0_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd0 read pattern: { h3_3_update_0[d0, d1] -> h3_2[-1 + 4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_272();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd1_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd1 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4d0, -1 + d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_541();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd10_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd10 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_271();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd11_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd11 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 4d0, -1 + d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_541();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd12_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd12 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_271();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd13_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd13 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 4d0, 1 + d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd14_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd14 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_271();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd15_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd15 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_271();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd16_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd16 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 4d0, -1 + d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_541();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd17_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd17 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_271();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd18_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd18 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 4d0, 1 + d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd19_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd19 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_270();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd2_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd2 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_271();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd3_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd3 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4d0, 1 + d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd4_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd4 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_271();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd5_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd5 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_271();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd6_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd6 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 4d0, -1 + d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_541();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd7_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd7 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_271();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd8_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd8 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 4d0, 1 + d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd9_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd9 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 4d0, d1] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_271();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_2_update_0_write
//	h3_2_h3_2_update_0_write0
//	h3_2_h3_2_update_0_write1
//	h3_2_h3_2_update_0_write2
//	h3_2_h3_2_update_0_write3
inline void h3_2_h3_2_update_0_write_bundle_write(hw_uint<128>& h3_2_update_0_write, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_2_h3_2_update_0_write0_res = h3_2_update_0_write.extract<0, 31>();
	h3_2_h3_2_update_0_write0_write(h3_2_h3_2_update_0_write0_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write1_res = h3_2_update_0_write.extract<32, 63>();
	h3_2_h3_2_update_0_write1_write(h3_2_h3_2_update_0_write1_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write2_res = h3_2_update_0_write.extract<64, 95>();
	h3_2_h3_2_update_0_write2_write(h3_2_h3_2_update_0_write2_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write3_res = h3_2_update_0_write.extract<96, 127>();
	h3_2_h3_2_update_0_write3_write(h3_2_h3_2_update_0_write3_res, h3_2, d0, d1, dynamic_address);
}

// h3_3_update_0_read
//	h3_3_rd0
//	h3_3_rd1
//	h3_3_rd2
//	h3_3_rd3
//	h3_3_rd4
//	h3_3_rd5
//	h3_3_rd6
//	h3_3_rd7
//	h3_3_rd8
//	h3_3_rd9
//	h3_3_rd10
//	h3_3_rd11
//	h3_3_rd12
//	h3_3_rd13
//	h3_3_rd14
//	h3_3_rd15
//	h3_3_rd16
//	h3_3_rd17
//	h3_3_rd18
//	h3_3_rd19
inline hw_uint<640> h3_2_h3_3_update_0_read_bundle_read(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 20
    // h3_3_rd0
    // h3_3_rd1
    // h3_3_rd2
    // h3_3_rd3
    // h3_3_rd4
    // h3_3_rd5
    // h3_3_rd6
    // h3_3_rd7
    // h3_3_rd8
    // h3_3_rd9
    // h3_3_rd10
    // h3_3_rd11
    // h3_3_rd12
    // h3_3_rd13
    // h3_3_rd14
    // h3_3_rd15
    // h3_3_rd16
    // h3_3_rd17
    // h3_3_rd18
    // h3_3_rd19

	hw_uint<640> result;
	hw_uint<32>  h3_3_rd0_res = h3_3_rd0_select(h3_2, d0, d1, dynamic_address);
	set_at<0, 640>(result, h3_3_rd0_res);
	hw_uint<32>  h3_3_rd1_res = h3_3_rd1_select(h3_2, d0, d1, dynamic_address);
	set_at<32, 640>(result, h3_3_rd1_res);
	hw_uint<32>  h3_3_rd2_res = h3_3_rd2_select(h3_2, d0, d1, dynamic_address);
	set_at<64, 640>(result, h3_3_rd2_res);
	hw_uint<32>  h3_3_rd3_res = h3_3_rd3_select(h3_2, d0, d1, dynamic_address);
	set_at<96, 640>(result, h3_3_rd3_res);
	hw_uint<32>  h3_3_rd4_res = h3_3_rd4_select(h3_2, d0, d1, dynamic_address);
	set_at<128, 640>(result, h3_3_rd4_res);
	hw_uint<32>  h3_3_rd5_res = h3_3_rd5_select(h3_2, d0, d1, dynamic_address);
	set_at<160, 640>(result, h3_3_rd5_res);
	hw_uint<32>  h3_3_rd6_res = h3_3_rd6_select(h3_2, d0, d1, dynamic_address);
	set_at<192, 640>(result, h3_3_rd6_res);
	hw_uint<32>  h3_3_rd7_res = h3_3_rd7_select(h3_2, d0, d1, dynamic_address);
	set_at<224, 640>(result, h3_3_rd7_res);
	hw_uint<32>  h3_3_rd8_res = h3_3_rd8_select(h3_2, d0, d1, dynamic_address);
	set_at<256, 640>(result, h3_3_rd8_res);
	hw_uint<32>  h3_3_rd9_res = h3_3_rd9_select(h3_2, d0, d1, dynamic_address);
	set_at<288, 640>(result, h3_3_rd9_res);
	hw_uint<32>  h3_3_rd10_res = h3_3_rd10_select(h3_2, d0, d1, dynamic_address);
	set_at<320, 640>(result, h3_3_rd10_res);
	hw_uint<32>  h3_3_rd11_res = h3_3_rd11_select(h3_2, d0, d1, dynamic_address);
	set_at<352, 640>(result, h3_3_rd11_res);
	hw_uint<32>  h3_3_rd12_res = h3_3_rd12_select(h3_2, d0, d1, dynamic_address);
	set_at<384, 640>(result, h3_3_rd12_res);
	hw_uint<32>  h3_3_rd13_res = h3_3_rd13_select(h3_2, d0, d1, dynamic_address);
	set_at<416, 640>(result, h3_3_rd13_res);
	hw_uint<32>  h3_3_rd14_res = h3_3_rd14_select(h3_2, d0, d1, dynamic_address);
	set_at<448, 640>(result, h3_3_rd14_res);
	hw_uint<32>  h3_3_rd15_res = h3_3_rd15_select(h3_2, d0, d1, dynamic_address);
	set_at<480, 640>(result, h3_3_rd15_res);
	hw_uint<32>  h3_3_rd16_res = h3_3_rd16_select(h3_2, d0, d1, dynamic_address);
	set_at<512, 640>(result, h3_3_rd16_res);
	hw_uint<32>  h3_3_rd17_res = h3_3_rd17_select(h3_2, d0, d1, dynamic_address);
	set_at<544, 640>(result, h3_3_rd17_res);
	hw_uint<32>  h3_3_rd18_res = h3_3_rd18_select(h3_2, d0, d1, dynamic_address);
	set_at<576, 640>(result, h3_3_rd18_res);
	hw_uint<32>  h3_3_rd19_res = h3_3_rd19_select(h3_2, d0, d1, dynamic_address);
	set_at<608, 640>(result, h3_3_rd19_res);
	return result;
}

struct h3_3_h3_3_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-20, 1044], [-6, 1028]}
	// Capacity: 538
	// # of read delays: 5
  // 0, 1, 268, 269, 537
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 266> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 267> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_267() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_268() {
		return f4;
	}

	inline hw_uint<32>  peek_269() {
		return f6;
	}

	inline hw_uint<32>  peek_536() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_537() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 267
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 267 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 266
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 266 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-19, 1041], [-6, 1029]}
	// Capacity: 538
	// # of read delays: 4
  // 0, 1, 269, 537
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 267> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 267> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_269() {
		return f4;
	}

	inline hw_uint<32>  peek_536() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_537() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 267
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 267 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 267
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 267 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[-18, 1042], [-6, 1029]}
	// Capacity: 538
	// # of read delays: 4
  // 0, 1, 269, 537
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 267> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 267> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_269() {
		return f4;
	}

	inline hw_uint<32>  peek_536() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_537() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 267
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 267 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 267
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 267 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-21, 1043], [-5, 1029]}
	// Capacity: 538
	// # of read delays: 5
  // 0, 1, 269, 270, 537
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 267> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 266> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_269() {
		return f4;
	}

	inline hw_uint<32>  peek_270() {
		return f6;
	}

	inline hw_uint<32>  peek_536() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_537() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 266
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 266 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 267
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 267 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_cache {
  // # of banks: 4
  h3_3_h3_3_update_0_write0_merged_banks_5_cache h3_3_h3_3_update_0_write0_merged_banks_5;
  h3_3_h3_3_update_0_write1_merged_banks_5_cache h3_3_h3_3_update_0_write1_merged_banks_5;
  h3_3_h3_3_update_0_write2_merged_banks_5_cache h3_3_h3_3_update_0_write2_merged_banks_5;
  h3_3_h3_3_update_0_write3_merged_banks_5_cache h3_3_h3_3_update_0_write3_merged_banks_5;
};



inline void h3_3_h3_3_update_0_write0_write(hw_uint<32> & h3_3_h3_3_update_0_write0, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.push(h3_3_h3_3_update_0_write0);
}

inline void h3_3_h3_3_update_0_write1_write(hw_uint<32> & h3_3_h3_3_update_0_write1, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.push(h3_3_h3_3_update_0_write1);
}

inline void h3_3_h3_3_update_0_write2_write(hw_uint<32> & h3_3_h3_3_update_0_write2, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.push(h3_3_h3_3_update_0_write2);
}

inline void h3_3_h3_3_update_0_write3_write(hw_uint<32> & h3_3_h3_3_update_0_write3, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.push(h3_3_h3_3_update_0_write3);
}

inline hw_uint<32>  h3_4_rd0_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd0 read pattern: { h3_4_update_0[d0, d1] -> h3_3[-1 + 4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_270();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd1_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd1 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4d0, -1 + d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_537();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd10_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd10 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_269();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd11_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd11 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 4d0, -1 + d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_537();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd12_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd12 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_269();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd13_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd13 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 4d0, 1 + d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd14_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd14 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_269();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd15_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd15 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_269();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd16_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd16 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 4d0, -1 + d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_537();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd17_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd17 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_269();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd18_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd18 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 4d0, 1 + d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd19_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd19 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_268();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd2_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd2 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_269();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd3_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd3 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4d0, 1 + d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd4_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd4 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_269();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd5_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd5 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_269();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd6_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd6 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 4d0, -1 + d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_537();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd7_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd7 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_269();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd8_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd8 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 4d0, 1 + d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd9_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd9 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 4d0, d1] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_269();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_3_update_0_write
//	h3_3_h3_3_update_0_write0
//	h3_3_h3_3_update_0_write1
//	h3_3_h3_3_update_0_write2
//	h3_3_h3_3_update_0_write3
inline void h3_3_h3_3_update_0_write_bundle_write(hw_uint<128>& h3_3_update_0_write, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_3_h3_3_update_0_write0_res = h3_3_update_0_write.extract<0, 31>();
	h3_3_h3_3_update_0_write0_write(h3_3_h3_3_update_0_write0_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write1_res = h3_3_update_0_write.extract<32, 63>();
	h3_3_h3_3_update_0_write1_write(h3_3_h3_3_update_0_write1_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write2_res = h3_3_update_0_write.extract<64, 95>();
	h3_3_h3_3_update_0_write2_write(h3_3_h3_3_update_0_write2_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write3_res = h3_3_update_0_write.extract<96, 127>();
	h3_3_h3_3_update_0_write3_write(h3_3_h3_3_update_0_write3_res, h3_3, d0, d1, dynamic_address);
}

// h3_4_update_0_read
//	h3_4_rd0
//	h3_4_rd1
//	h3_4_rd2
//	h3_4_rd3
//	h3_4_rd4
//	h3_4_rd5
//	h3_4_rd6
//	h3_4_rd7
//	h3_4_rd8
//	h3_4_rd9
//	h3_4_rd10
//	h3_4_rd11
//	h3_4_rd12
//	h3_4_rd13
//	h3_4_rd14
//	h3_4_rd15
//	h3_4_rd16
//	h3_4_rd17
//	h3_4_rd18
//	h3_4_rd19
inline hw_uint<640> h3_3_h3_4_update_0_read_bundle_read(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 20
    // h3_4_rd0
    // h3_4_rd1
    // h3_4_rd2
    // h3_4_rd3
    // h3_4_rd4
    // h3_4_rd5
    // h3_4_rd6
    // h3_4_rd7
    // h3_4_rd8
    // h3_4_rd9
    // h3_4_rd10
    // h3_4_rd11
    // h3_4_rd12
    // h3_4_rd13
    // h3_4_rd14
    // h3_4_rd15
    // h3_4_rd16
    // h3_4_rd17
    // h3_4_rd18
    // h3_4_rd19

	hw_uint<640> result;
	hw_uint<32>  h3_4_rd0_res = h3_4_rd0_select(h3_3, d0, d1, dynamic_address);
	set_at<0, 640>(result, h3_4_rd0_res);
	hw_uint<32>  h3_4_rd1_res = h3_4_rd1_select(h3_3, d0, d1, dynamic_address);
	set_at<32, 640>(result, h3_4_rd1_res);
	hw_uint<32>  h3_4_rd2_res = h3_4_rd2_select(h3_3, d0, d1, dynamic_address);
	set_at<64, 640>(result, h3_4_rd2_res);
	hw_uint<32>  h3_4_rd3_res = h3_4_rd3_select(h3_3, d0, d1, dynamic_address);
	set_at<96, 640>(result, h3_4_rd3_res);
	hw_uint<32>  h3_4_rd4_res = h3_4_rd4_select(h3_3, d0, d1, dynamic_address);
	set_at<128, 640>(result, h3_4_rd4_res);
	hw_uint<32>  h3_4_rd5_res = h3_4_rd5_select(h3_3, d0, d1, dynamic_address);
	set_at<160, 640>(result, h3_4_rd5_res);
	hw_uint<32>  h3_4_rd6_res = h3_4_rd6_select(h3_3, d0, d1, dynamic_address);
	set_at<192, 640>(result, h3_4_rd6_res);
	hw_uint<32>  h3_4_rd7_res = h3_4_rd7_select(h3_3, d0, d1, dynamic_address);
	set_at<224, 640>(result, h3_4_rd7_res);
	hw_uint<32>  h3_4_rd8_res = h3_4_rd8_select(h3_3, d0, d1, dynamic_address);
	set_at<256, 640>(result, h3_4_rd8_res);
	hw_uint<32>  h3_4_rd9_res = h3_4_rd9_select(h3_3, d0, d1, dynamic_address);
	set_at<288, 640>(result, h3_4_rd9_res);
	hw_uint<32>  h3_4_rd10_res = h3_4_rd10_select(h3_3, d0, d1, dynamic_address);
	set_at<320, 640>(result, h3_4_rd10_res);
	hw_uint<32>  h3_4_rd11_res = h3_4_rd11_select(h3_3, d0, d1, dynamic_address);
	set_at<352, 640>(result, h3_4_rd11_res);
	hw_uint<32>  h3_4_rd12_res = h3_4_rd12_select(h3_3, d0, d1, dynamic_address);
	set_at<384, 640>(result, h3_4_rd12_res);
	hw_uint<32>  h3_4_rd13_res = h3_4_rd13_select(h3_3, d0, d1, dynamic_address);
	set_at<416, 640>(result, h3_4_rd13_res);
	hw_uint<32>  h3_4_rd14_res = h3_4_rd14_select(h3_3, d0, d1, dynamic_address);
	set_at<448, 640>(result, h3_4_rd14_res);
	hw_uint<32>  h3_4_rd15_res = h3_4_rd15_select(h3_3, d0, d1, dynamic_address);
	set_at<480, 640>(result, h3_4_rd15_res);
	hw_uint<32>  h3_4_rd16_res = h3_4_rd16_select(h3_3, d0, d1, dynamic_address);
	set_at<512, 640>(result, h3_4_rd16_res);
	hw_uint<32>  h3_4_rd17_res = h3_4_rd17_select(h3_3, d0, d1, dynamic_address);
	set_at<544, 640>(result, h3_4_rd17_res);
	hw_uint<32>  h3_4_rd18_res = h3_4_rd18_select(h3_3, d0, d1, dynamic_address);
	set_at<576, 640>(result, h3_4_rd18_res);
	hw_uint<32>  h3_4_rd19_res = h3_4_rd19_select(h3_3, d0, d1, dynamic_address);
	set_at<608, 640>(result, h3_4_rd19_res);
	return result;
}

struct h3_4_h3_4_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-16, 1040], [-5, 1027]}
	// Capacity: 534
	// # of read delays: 5
  // 0, 1, 266, 267, 533
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 264> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 265> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_265() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_266() {
		return f4;
	}

	inline hw_uint<32>  peek_267() {
		return f6;
	}

	inline hw_uint<32>  peek_532() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_533() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 265
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 265 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 264
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 264 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-15, 1037], [-5, 1028]}
	// Capacity: 534
	// # of read delays: 4
  // 0, 1, 267, 533
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 265> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 265> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_266() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_267() {
		return f4;
	}

	inline hw_uint<32>  peek_532() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_533() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 265
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 265 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 265
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 265 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[-14, 1038], [-5, 1028]}
	// Capacity: 534
	// # of read delays: 4
  // 0, 1, 267, 533
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 265> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 265> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_266() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_267() {
		return f4;
	}

	inline hw_uint<32>  peek_532() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_533() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 265
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 265 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 265
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 265 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-17, 1039], [-4, 1028]}
	// Capacity: 534
	// # of read delays: 5
  // 0, 1, 267, 268, 533
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 265> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 264> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_266() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_267() {
		return f4;
	}

	inline hw_uint<32>  peek_268() {
		return f6;
	}

	inline hw_uint<32>  peek_532() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_533() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 264
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 264 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 265
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 265 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_cache {
  // # of banks: 4
  h3_4_h3_4_update_0_write0_merged_banks_5_cache h3_4_h3_4_update_0_write0_merged_banks_5;
  h3_4_h3_4_update_0_write1_merged_banks_5_cache h3_4_h3_4_update_0_write1_merged_banks_5;
  h3_4_h3_4_update_0_write2_merged_banks_5_cache h3_4_h3_4_update_0_write2_merged_banks_5;
  h3_4_h3_4_update_0_write3_merged_banks_5_cache h3_4_h3_4_update_0_write3_merged_banks_5;
};



inline void h3_4_h3_4_update_0_write0_write(hw_uint<32> & h3_4_h3_4_update_0_write0, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.push(h3_4_h3_4_update_0_write0);
}

inline void h3_4_h3_4_update_0_write1_write(hw_uint<32> & h3_4_h3_4_update_0_write1, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.push(h3_4_h3_4_update_0_write1);
}

inline void h3_4_h3_4_update_0_write2_write(hw_uint<32> & h3_4_h3_4_update_0_write2, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.push(h3_4_h3_4_update_0_write2);
}

inline void h3_4_h3_4_update_0_write3_write(hw_uint<32> & h3_4_h3_4_update_0_write3, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.push(h3_4_h3_4_update_0_write3);
}

inline hw_uint<32>  h3_5_rd0_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd0 read pattern: { h3_5_update_0[d0, d1] -> h3_4[-1 + 4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_268();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd1_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd1 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4d0, -1 + d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_533();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd10_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd10 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_267();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd11_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd11 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 4d0, -1 + d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_533();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd12_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd12 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_267();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd13_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd13 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 4d0, 1 + d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd14_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd14 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_267();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd15_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd15 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_267();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd16_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd16 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 4d0, -1 + d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_533();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd17_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd17 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_267();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd18_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd18 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 4d0, 1 + d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd19_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd19 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_266();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd2_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd2 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_267();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd3_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd3 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4d0, 1 + d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd4_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd4 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_267();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd5_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd5 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_267();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd6_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd6 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 4d0, -1 + d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_533();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd7_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd7 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_267();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd8_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd8 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 4d0, 1 + d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd9_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd9 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 4d0, d1] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_267();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_4_update_0_write
//	h3_4_h3_4_update_0_write0
//	h3_4_h3_4_update_0_write1
//	h3_4_h3_4_update_0_write2
//	h3_4_h3_4_update_0_write3
inline void h3_4_h3_4_update_0_write_bundle_write(hw_uint<128>& h3_4_update_0_write, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_4_h3_4_update_0_write0_res = h3_4_update_0_write.extract<0, 31>();
	h3_4_h3_4_update_0_write0_write(h3_4_h3_4_update_0_write0_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write1_res = h3_4_update_0_write.extract<32, 63>();
	h3_4_h3_4_update_0_write1_write(h3_4_h3_4_update_0_write1_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write2_res = h3_4_update_0_write.extract<64, 95>();
	h3_4_h3_4_update_0_write2_write(h3_4_h3_4_update_0_write2_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write3_res = h3_4_update_0_write.extract<96, 127>();
	h3_4_h3_4_update_0_write3_write(h3_4_h3_4_update_0_write3_res, h3_4, d0, d1, dynamic_address);
}

// h3_5_update_0_read
//	h3_5_rd0
//	h3_5_rd1
//	h3_5_rd2
//	h3_5_rd3
//	h3_5_rd4
//	h3_5_rd5
//	h3_5_rd6
//	h3_5_rd7
//	h3_5_rd8
//	h3_5_rd9
//	h3_5_rd10
//	h3_5_rd11
//	h3_5_rd12
//	h3_5_rd13
//	h3_5_rd14
//	h3_5_rd15
//	h3_5_rd16
//	h3_5_rd17
//	h3_5_rd18
//	h3_5_rd19
inline hw_uint<640> h3_4_h3_5_update_0_read_bundle_read(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 20
    // h3_5_rd0
    // h3_5_rd1
    // h3_5_rd2
    // h3_5_rd3
    // h3_5_rd4
    // h3_5_rd5
    // h3_5_rd6
    // h3_5_rd7
    // h3_5_rd8
    // h3_5_rd9
    // h3_5_rd10
    // h3_5_rd11
    // h3_5_rd12
    // h3_5_rd13
    // h3_5_rd14
    // h3_5_rd15
    // h3_5_rd16
    // h3_5_rd17
    // h3_5_rd18
    // h3_5_rd19

	hw_uint<640> result;
	hw_uint<32>  h3_5_rd0_res = h3_5_rd0_select(h3_4, d0, d1, dynamic_address);
	set_at<0, 640>(result, h3_5_rd0_res);
	hw_uint<32>  h3_5_rd1_res = h3_5_rd1_select(h3_4, d0, d1, dynamic_address);
	set_at<32, 640>(result, h3_5_rd1_res);
	hw_uint<32>  h3_5_rd2_res = h3_5_rd2_select(h3_4, d0, d1, dynamic_address);
	set_at<64, 640>(result, h3_5_rd2_res);
	hw_uint<32>  h3_5_rd3_res = h3_5_rd3_select(h3_4, d0, d1, dynamic_address);
	set_at<96, 640>(result, h3_5_rd3_res);
	hw_uint<32>  h3_5_rd4_res = h3_5_rd4_select(h3_4, d0, d1, dynamic_address);
	set_at<128, 640>(result, h3_5_rd4_res);
	hw_uint<32>  h3_5_rd5_res = h3_5_rd5_select(h3_4, d0, d1, dynamic_address);
	set_at<160, 640>(result, h3_5_rd5_res);
	hw_uint<32>  h3_5_rd6_res = h3_5_rd6_select(h3_4, d0, d1, dynamic_address);
	set_at<192, 640>(result, h3_5_rd6_res);
	hw_uint<32>  h3_5_rd7_res = h3_5_rd7_select(h3_4, d0, d1, dynamic_address);
	set_at<224, 640>(result, h3_5_rd7_res);
	hw_uint<32>  h3_5_rd8_res = h3_5_rd8_select(h3_4, d0, d1, dynamic_address);
	set_at<256, 640>(result, h3_5_rd8_res);
	hw_uint<32>  h3_5_rd9_res = h3_5_rd9_select(h3_4, d0, d1, dynamic_address);
	set_at<288, 640>(result, h3_5_rd9_res);
	hw_uint<32>  h3_5_rd10_res = h3_5_rd10_select(h3_4, d0, d1, dynamic_address);
	set_at<320, 640>(result, h3_5_rd10_res);
	hw_uint<32>  h3_5_rd11_res = h3_5_rd11_select(h3_4, d0, d1, dynamic_address);
	set_at<352, 640>(result, h3_5_rd11_res);
	hw_uint<32>  h3_5_rd12_res = h3_5_rd12_select(h3_4, d0, d1, dynamic_address);
	set_at<384, 640>(result, h3_5_rd12_res);
	hw_uint<32>  h3_5_rd13_res = h3_5_rd13_select(h3_4, d0, d1, dynamic_address);
	set_at<416, 640>(result, h3_5_rd13_res);
	hw_uint<32>  h3_5_rd14_res = h3_5_rd14_select(h3_4, d0, d1, dynamic_address);
	set_at<448, 640>(result, h3_5_rd14_res);
	hw_uint<32>  h3_5_rd15_res = h3_5_rd15_select(h3_4, d0, d1, dynamic_address);
	set_at<480, 640>(result, h3_5_rd15_res);
	hw_uint<32>  h3_5_rd16_res = h3_5_rd16_select(h3_4, d0, d1, dynamic_address);
	set_at<512, 640>(result, h3_5_rd16_res);
	hw_uint<32>  h3_5_rd17_res = h3_5_rd17_select(h3_4, d0, d1, dynamic_address);
	set_at<544, 640>(result, h3_5_rd17_res);
	hw_uint<32>  h3_5_rd18_res = h3_5_rd18_select(h3_4, d0, d1, dynamic_address);
	set_at<576, 640>(result, h3_5_rd18_res);
	hw_uint<32>  h3_5_rd19_res = h3_5_rd19_select(h3_4, d0, d1, dynamic_address);
	set_at<608, 640>(result, h3_5_rd19_res);
	return result;
}

struct h3_5_h3_5_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-12, 1036], [-4, 1026]}
	// Capacity: 530
	// # of read delays: 5
  // 0, 1, 264, 265, 529
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 262> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 263> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_263() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_264() {
		return f4;
	}

	inline hw_uint<32>  peek_265() {
		return f6;
	}

	inline hw_uint<32>  peek_528() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_529() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 263
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 263 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 262
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 262 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-11, 1033], [-4, 1027]}
	// Capacity: 530
	// # of read delays: 4
  // 0, 1, 265, 529
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 263> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 263> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_265() {
		return f4;
	}

	inline hw_uint<32>  peek_528() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_529() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 263
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 263 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 263
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 263 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[-10, 1034], [-4, 1027]}
	// Capacity: 530
	// # of read delays: 4
  // 0, 1, 265, 529
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 263> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 263> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_265() {
		return f4;
	}

	inline hw_uint<32>  peek_528() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_529() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 263
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 263 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 263
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 263 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-13, 1035], [-3, 1027]}
	// Capacity: 530
	// # of read delays: 5
  // 0, 1, 265, 266, 529
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 263> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 262> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_265() {
		return f4;
	}

	inline hw_uint<32>  peek_266() {
		return f6;
	}

	inline hw_uint<32>  peek_528() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_529() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 262
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 262 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 263
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 263 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_cache {
  // # of banks: 4
  h3_5_h3_5_update_0_write0_merged_banks_5_cache h3_5_h3_5_update_0_write0_merged_banks_5;
  h3_5_h3_5_update_0_write1_merged_banks_5_cache h3_5_h3_5_update_0_write1_merged_banks_5;
  h3_5_h3_5_update_0_write2_merged_banks_5_cache h3_5_h3_5_update_0_write2_merged_banks_5;
  h3_5_h3_5_update_0_write3_merged_banks_5_cache h3_5_h3_5_update_0_write3_merged_banks_5;
};



inline void h3_5_h3_5_update_0_write0_write(hw_uint<32> & h3_5_h3_5_update_0_write0, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.push(h3_5_h3_5_update_0_write0);
}

inline void h3_5_h3_5_update_0_write1_write(hw_uint<32> & h3_5_h3_5_update_0_write1, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.push(h3_5_h3_5_update_0_write1);
}

inline void h3_5_h3_5_update_0_write2_write(hw_uint<32> & h3_5_h3_5_update_0_write2, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.push(h3_5_h3_5_update_0_write2);
}

inline void h3_5_h3_5_update_0_write3_write(hw_uint<32> & h3_5_h3_5_update_0_write3, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.push(h3_5_h3_5_update_0_write3);
}

inline hw_uint<32>  h3_6_rd0_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd0 read pattern: { h3_6_update_0[d0, d1] -> h3_5[-1 + 4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_266();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd1_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd1 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4d0, -1 + d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_529();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd10_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd10 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_265();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd11_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd11 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 4d0, -1 + d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_529();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd12_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd12 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_265();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd13_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd13 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 4d0, 1 + d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd14_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd14 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_265();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd15_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd15 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_265();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd16_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd16 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 4d0, -1 + d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_529();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd17_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd17 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_265();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd18_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd18 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 4d0, 1 + d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd19_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd19 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_264();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd2_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd2 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_265();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd3_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd3 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4d0, 1 + d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd4_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd4 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_265();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd5_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd5 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_265();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd6_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd6 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 4d0, -1 + d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_529();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd7_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd7 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_265();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd8_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd8 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 4d0, 1 + d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd9_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd9 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 4d0, d1] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_265();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_5_update_0_write
//	h3_5_h3_5_update_0_write0
//	h3_5_h3_5_update_0_write1
//	h3_5_h3_5_update_0_write2
//	h3_5_h3_5_update_0_write3
inline void h3_5_h3_5_update_0_write_bundle_write(hw_uint<128>& h3_5_update_0_write, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_5_h3_5_update_0_write0_res = h3_5_update_0_write.extract<0, 31>();
	h3_5_h3_5_update_0_write0_write(h3_5_h3_5_update_0_write0_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write1_res = h3_5_update_0_write.extract<32, 63>();
	h3_5_h3_5_update_0_write1_write(h3_5_h3_5_update_0_write1_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write2_res = h3_5_update_0_write.extract<64, 95>();
	h3_5_h3_5_update_0_write2_write(h3_5_h3_5_update_0_write2_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write3_res = h3_5_update_0_write.extract<96, 127>();
	h3_5_h3_5_update_0_write3_write(h3_5_h3_5_update_0_write3_res, h3_5, d0, d1, dynamic_address);
}

// h3_6_update_0_read
//	h3_6_rd0
//	h3_6_rd1
//	h3_6_rd2
//	h3_6_rd3
//	h3_6_rd4
//	h3_6_rd5
//	h3_6_rd6
//	h3_6_rd7
//	h3_6_rd8
//	h3_6_rd9
//	h3_6_rd10
//	h3_6_rd11
//	h3_6_rd12
//	h3_6_rd13
//	h3_6_rd14
//	h3_6_rd15
//	h3_6_rd16
//	h3_6_rd17
//	h3_6_rd18
//	h3_6_rd19
inline hw_uint<640> h3_5_h3_6_update_0_read_bundle_read(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 20
    // h3_6_rd0
    // h3_6_rd1
    // h3_6_rd2
    // h3_6_rd3
    // h3_6_rd4
    // h3_6_rd5
    // h3_6_rd6
    // h3_6_rd7
    // h3_6_rd8
    // h3_6_rd9
    // h3_6_rd10
    // h3_6_rd11
    // h3_6_rd12
    // h3_6_rd13
    // h3_6_rd14
    // h3_6_rd15
    // h3_6_rd16
    // h3_6_rd17
    // h3_6_rd18
    // h3_6_rd19

	hw_uint<640> result;
	hw_uint<32>  h3_6_rd0_res = h3_6_rd0_select(h3_5, d0, d1, dynamic_address);
	set_at<0, 640>(result, h3_6_rd0_res);
	hw_uint<32>  h3_6_rd1_res = h3_6_rd1_select(h3_5, d0, d1, dynamic_address);
	set_at<32, 640>(result, h3_6_rd1_res);
	hw_uint<32>  h3_6_rd2_res = h3_6_rd2_select(h3_5, d0, d1, dynamic_address);
	set_at<64, 640>(result, h3_6_rd2_res);
	hw_uint<32>  h3_6_rd3_res = h3_6_rd3_select(h3_5, d0, d1, dynamic_address);
	set_at<96, 640>(result, h3_6_rd3_res);
	hw_uint<32>  h3_6_rd4_res = h3_6_rd4_select(h3_5, d0, d1, dynamic_address);
	set_at<128, 640>(result, h3_6_rd4_res);
	hw_uint<32>  h3_6_rd5_res = h3_6_rd5_select(h3_5, d0, d1, dynamic_address);
	set_at<160, 640>(result, h3_6_rd5_res);
	hw_uint<32>  h3_6_rd6_res = h3_6_rd6_select(h3_5, d0, d1, dynamic_address);
	set_at<192, 640>(result, h3_6_rd6_res);
	hw_uint<32>  h3_6_rd7_res = h3_6_rd7_select(h3_5, d0, d1, dynamic_address);
	set_at<224, 640>(result, h3_6_rd7_res);
	hw_uint<32>  h3_6_rd8_res = h3_6_rd8_select(h3_5, d0, d1, dynamic_address);
	set_at<256, 640>(result, h3_6_rd8_res);
	hw_uint<32>  h3_6_rd9_res = h3_6_rd9_select(h3_5, d0, d1, dynamic_address);
	set_at<288, 640>(result, h3_6_rd9_res);
	hw_uint<32>  h3_6_rd10_res = h3_6_rd10_select(h3_5, d0, d1, dynamic_address);
	set_at<320, 640>(result, h3_6_rd10_res);
	hw_uint<32>  h3_6_rd11_res = h3_6_rd11_select(h3_5, d0, d1, dynamic_address);
	set_at<352, 640>(result, h3_6_rd11_res);
	hw_uint<32>  h3_6_rd12_res = h3_6_rd12_select(h3_5, d0, d1, dynamic_address);
	set_at<384, 640>(result, h3_6_rd12_res);
	hw_uint<32>  h3_6_rd13_res = h3_6_rd13_select(h3_5, d0, d1, dynamic_address);
	set_at<416, 640>(result, h3_6_rd13_res);
	hw_uint<32>  h3_6_rd14_res = h3_6_rd14_select(h3_5, d0, d1, dynamic_address);
	set_at<448, 640>(result, h3_6_rd14_res);
	hw_uint<32>  h3_6_rd15_res = h3_6_rd15_select(h3_5, d0, d1, dynamic_address);
	set_at<480, 640>(result, h3_6_rd15_res);
	hw_uint<32>  h3_6_rd16_res = h3_6_rd16_select(h3_5, d0, d1, dynamic_address);
	set_at<512, 640>(result, h3_6_rd16_res);
	hw_uint<32>  h3_6_rd17_res = h3_6_rd17_select(h3_5, d0, d1, dynamic_address);
	set_at<544, 640>(result, h3_6_rd17_res);
	hw_uint<32>  h3_6_rd18_res = h3_6_rd18_select(h3_5, d0, d1, dynamic_address);
	set_at<576, 640>(result, h3_6_rd18_res);
	hw_uint<32>  h3_6_rd19_res = h3_6_rd19_select(h3_5, d0, d1, dynamic_address);
	set_at<608, 640>(result, h3_6_rd19_res);
	return result;
}

struct h3_6_h3_6_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-8, 1032], [-3, 1025]}
	// Capacity: 526
	// # of read delays: 5
  // 0, 1, 262, 263, 525
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 260> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 261> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_261() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_262() {
		return f4;
	}

	inline hw_uint<32>  peek_263() {
		return f6;
	}

	inline hw_uint<32>  peek_524() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_525() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 261
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 261 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 260
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 260 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-7, 1029], [-3, 1026]}
	// Capacity: 526
	// # of read delays: 4
  // 0, 1, 263, 525
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 261> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 261> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_262() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_263() {
		return f4;
	}

	inline hw_uint<32>  peek_524() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_525() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 261
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 261 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 261
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 261 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[-6, 1030], [-3, 1026]}
	// Capacity: 526
	// # of read delays: 4
  // 0, 1, 263, 525
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 261> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 261> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_262() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_263() {
		return f4;
	}

	inline hw_uint<32>  peek_524() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_525() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 261
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 261 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 261
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 261 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-9, 1031], [-2, 1026]}
	// Capacity: 526
	// # of read delays: 5
  // 0, 1, 263, 264, 525
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 261> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 260> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_262() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_263() {
		return f4;
	}

	inline hw_uint<32>  peek_264() {
		return f6;
	}

	inline hw_uint<32>  peek_524() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_525() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 260
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 260 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 261
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 261 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_cache {
  // # of banks: 4
  h3_6_h3_6_update_0_write0_merged_banks_5_cache h3_6_h3_6_update_0_write0_merged_banks_5;
  h3_6_h3_6_update_0_write1_merged_banks_5_cache h3_6_h3_6_update_0_write1_merged_banks_5;
  h3_6_h3_6_update_0_write2_merged_banks_5_cache h3_6_h3_6_update_0_write2_merged_banks_5;
  h3_6_h3_6_update_0_write3_merged_banks_5_cache h3_6_h3_6_update_0_write3_merged_banks_5;
};



inline void h3_6_h3_6_update_0_write0_write(hw_uint<32> & h3_6_h3_6_update_0_write0, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.push(h3_6_h3_6_update_0_write0);
}

inline void h3_6_h3_6_update_0_write1_write(hw_uint<32> & h3_6_h3_6_update_0_write1, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.push(h3_6_h3_6_update_0_write1);
}

inline void h3_6_h3_6_update_0_write2_write(hw_uint<32> & h3_6_h3_6_update_0_write2, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.push(h3_6_h3_6_update_0_write2);
}

inline void h3_6_h3_6_update_0_write3_write(hw_uint<32> & h3_6_h3_6_update_0_write3, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.push(h3_6_h3_6_update_0_write3);
}

inline hw_uint<32>  h3_7_rd0_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd0 read pattern: { h3_7_update_0[d0, d1] -> h3_6[-1 + 4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_264();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd1_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd1 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4d0, -1 + d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_525();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd10_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd10 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_263();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd11_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd11 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 4d0, -1 + d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_525();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd12_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd12 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_263();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd13_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd13 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 4d0, 1 + d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd14_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd14 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_263();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd15_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd15 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_263();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd16_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd16 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 4d0, -1 + d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_525();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd17_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd17 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_263();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd18_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd18 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 4d0, 1 + d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd19_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd19 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_262();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd2_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd2 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_263();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd3_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd3 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4d0, 1 + d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd4_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd4 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_263();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd5_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd5 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_263();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd6_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd6 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 4d0, -1 + d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_525();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd7_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd7 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_263();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd8_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd8 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 4d0, 1 + d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd9_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd9 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 4d0, d1] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_263();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_6_update_0_write
//	h3_6_h3_6_update_0_write0
//	h3_6_h3_6_update_0_write1
//	h3_6_h3_6_update_0_write2
//	h3_6_h3_6_update_0_write3
inline void h3_6_h3_6_update_0_write_bundle_write(hw_uint<128>& h3_6_update_0_write, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_6_h3_6_update_0_write0_res = h3_6_update_0_write.extract<0, 31>();
	h3_6_h3_6_update_0_write0_write(h3_6_h3_6_update_0_write0_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write1_res = h3_6_update_0_write.extract<32, 63>();
	h3_6_h3_6_update_0_write1_write(h3_6_h3_6_update_0_write1_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write2_res = h3_6_update_0_write.extract<64, 95>();
	h3_6_h3_6_update_0_write2_write(h3_6_h3_6_update_0_write2_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write3_res = h3_6_update_0_write.extract<96, 127>();
	h3_6_h3_6_update_0_write3_write(h3_6_h3_6_update_0_write3_res, h3_6, d0, d1, dynamic_address);
}

// h3_7_update_0_read
//	h3_7_rd0
//	h3_7_rd1
//	h3_7_rd2
//	h3_7_rd3
//	h3_7_rd4
//	h3_7_rd5
//	h3_7_rd6
//	h3_7_rd7
//	h3_7_rd8
//	h3_7_rd9
//	h3_7_rd10
//	h3_7_rd11
//	h3_7_rd12
//	h3_7_rd13
//	h3_7_rd14
//	h3_7_rd15
//	h3_7_rd16
//	h3_7_rd17
//	h3_7_rd18
//	h3_7_rd19
inline hw_uint<640> h3_6_h3_7_update_0_read_bundle_read(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 20
    // h3_7_rd0
    // h3_7_rd1
    // h3_7_rd2
    // h3_7_rd3
    // h3_7_rd4
    // h3_7_rd5
    // h3_7_rd6
    // h3_7_rd7
    // h3_7_rd8
    // h3_7_rd9
    // h3_7_rd10
    // h3_7_rd11
    // h3_7_rd12
    // h3_7_rd13
    // h3_7_rd14
    // h3_7_rd15
    // h3_7_rd16
    // h3_7_rd17
    // h3_7_rd18
    // h3_7_rd19

	hw_uint<640> result;
	hw_uint<32>  h3_7_rd0_res = h3_7_rd0_select(h3_6, d0, d1, dynamic_address);
	set_at<0, 640>(result, h3_7_rd0_res);
	hw_uint<32>  h3_7_rd1_res = h3_7_rd1_select(h3_6, d0, d1, dynamic_address);
	set_at<32, 640>(result, h3_7_rd1_res);
	hw_uint<32>  h3_7_rd2_res = h3_7_rd2_select(h3_6, d0, d1, dynamic_address);
	set_at<64, 640>(result, h3_7_rd2_res);
	hw_uint<32>  h3_7_rd3_res = h3_7_rd3_select(h3_6, d0, d1, dynamic_address);
	set_at<96, 640>(result, h3_7_rd3_res);
	hw_uint<32>  h3_7_rd4_res = h3_7_rd4_select(h3_6, d0, d1, dynamic_address);
	set_at<128, 640>(result, h3_7_rd4_res);
	hw_uint<32>  h3_7_rd5_res = h3_7_rd5_select(h3_6, d0, d1, dynamic_address);
	set_at<160, 640>(result, h3_7_rd5_res);
	hw_uint<32>  h3_7_rd6_res = h3_7_rd6_select(h3_6, d0, d1, dynamic_address);
	set_at<192, 640>(result, h3_7_rd6_res);
	hw_uint<32>  h3_7_rd7_res = h3_7_rd7_select(h3_6, d0, d1, dynamic_address);
	set_at<224, 640>(result, h3_7_rd7_res);
	hw_uint<32>  h3_7_rd8_res = h3_7_rd8_select(h3_6, d0, d1, dynamic_address);
	set_at<256, 640>(result, h3_7_rd8_res);
	hw_uint<32>  h3_7_rd9_res = h3_7_rd9_select(h3_6, d0, d1, dynamic_address);
	set_at<288, 640>(result, h3_7_rd9_res);
	hw_uint<32>  h3_7_rd10_res = h3_7_rd10_select(h3_6, d0, d1, dynamic_address);
	set_at<320, 640>(result, h3_7_rd10_res);
	hw_uint<32>  h3_7_rd11_res = h3_7_rd11_select(h3_6, d0, d1, dynamic_address);
	set_at<352, 640>(result, h3_7_rd11_res);
	hw_uint<32>  h3_7_rd12_res = h3_7_rd12_select(h3_6, d0, d1, dynamic_address);
	set_at<384, 640>(result, h3_7_rd12_res);
	hw_uint<32>  h3_7_rd13_res = h3_7_rd13_select(h3_6, d0, d1, dynamic_address);
	set_at<416, 640>(result, h3_7_rd13_res);
	hw_uint<32>  h3_7_rd14_res = h3_7_rd14_select(h3_6, d0, d1, dynamic_address);
	set_at<448, 640>(result, h3_7_rd14_res);
	hw_uint<32>  h3_7_rd15_res = h3_7_rd15_select(h3_6, d0, d1, dynamic_address);
	set_at<480, 640>(result, h3_7_rd15_res);
	hw_uint<32>  h3_7_rd16_res = h3_7_rd16_select(h3_6, d0, d1, dynamic_address);
	set_at<512, 640>(result, h3_7_rd16_res);
	hw_uint<32>  h3_7_rd17_res = h3_7_rd17_select(h3_6, d0, d1, dynamic_address);
	set_at<544, 640>(result, h3_7_rd17_res);
	hw_uint<32>  h3_7_rd18_res = h3_7_rd18_select(h3_6, d0, d1, dynamic_address);
	set_at<576, 640>(result, h3_7_rd18_res);
	hw_uint<32>  h3_7_rd19_res = h3_7_rd19_select(h3_6, d0, d1, dynamic_address);
	set_at<608, 640>(result, h3_7_rd19_res);
	return result;
}

struct h3_7_h3_7_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-4, 1028], [-2, 1024]}
	// Capacity: 522
	// # of read delays: 5
  // 0, 1, 260, 261, 521
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 258> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 259> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_259() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_260() {
		return f4;
	}

	inline hw_uint<32>  peek_261() {
		return f6;
	}

	inline hw_uint<32>  peek_520() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_521() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 259
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 259 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 258
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 258 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-3, 1025], [-2, 1025]}
	// Capacity: 522
	// # of read delays: 4
  // 0, 1, 261, 521
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 259> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 259> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_261() {
		return f4;
	}

	inline hw_uint<32>  peek_520() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_521() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 259
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 259 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 259
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 259 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[-2, 1026], [-2, 1025]}
	// Capacity: 522
	// # of read delays: 4
  // 0, 1, 261, 521
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 259> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 259> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_261() {
		return f4;
	}

	inline hw_uint<32>  peek_520() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_521() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 259
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 259 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 259
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 259 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-5, 1027], [-1, 1025]}
	// Capacity: 522
	// # of read delays: 5
  // 0, 1, 261, 262, 521
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 259> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 258> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_261() {
		return f4;
	}

	inline hw_uint<32>  peek_262() {
		return f6;
	}

	inline hw_uint<32>  peek_520() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_521() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 258
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 258 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 259
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 259 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_cache {
  // # of banks: 4
  h3_7_h3_7_update_0_write0_merged_banks_5_cache h3_7_h3_7_update_0_write0_merged_banks_5;
  h3_7_h3_7_update_0_write1_merged_banks_5_cache h3_7_h3_7_update_0_write1_merged_banks_5;
  h3_7_h3_7_update_0_write2_merged_banks_5_cache h3_7_h3_7_update_0_write2_merged_banks_5;
  h3_7_h3_7_update_0_write3_merged_banks_5_cache h3_7_h3_7_update_0_write3_merged_banks_5;
};



inline void h3_7_h3_7_update_0_write0_write(hw_uint<32> & h3_7_h3_7_update_0_write0, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.push(h3_7_h3_7_update_0_write0);
}

inline void h3_7_h3_7_update_0_write1_write(hw_uint<32> & h3_7_h3_7_update_0_write1, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.push(h3_7_h3_7_update_0_write1);
}

inline void h3_7_h3_7_update_0_write2_write(hw_uint<32> & h3_7_h3_7_update_0_write2, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.push(h3_7_h3_7_update_0_write2);
}

inline void h3_7_h3_7_update_0_write3_write(hw_uint<32> & h3_7_h3_7_update_0_write3, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.push(h3_7_h3_7_update_0_write3);
}

inline hw_uint<32>  h3_8_rd0_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd0 read pattern: { h3_8_update_0[d0, d1] -> h3_7[-1 + 4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_262();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd1_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd1 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4d0, -1 + d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_521();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd10_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd10 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_261();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd11_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd11 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 4d0, -1 + d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_521();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd12_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd12 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_261();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd13_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd13 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 4d0, 1 + d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd14_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd14 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_261();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd15_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd15 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_261();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd16_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd16 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 4d0, -1 + d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_521();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd17_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd17 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_261();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd18_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd18 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 4d0, 1 + d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd19_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd19 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_260();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd2_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd2 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_261();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd3_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd3 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4d0, 1 + d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd4_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd4 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_261();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd5_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd5 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_261();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd6_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd6 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 4d0, -1 + d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_521();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd7_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd7 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_261();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd8_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd8 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 4d0, 1 + d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd9_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd9 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 4d0, d1] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_261();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_7_update_0_write
//	h3_7_h3_7_update_0_write0
//	h3_7_h3_7_update_0_write1
//	h3_7_h3_7_update_0_write2
//	h3_7_h3_7_update_0_write3
inline void h3_7_h3_7_update_0_write_bundle_write(hw_uint<128>& h3_7_update_0_write, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_7_h3_7_update_0_write0_res = h3_7_update_0_write.extract<0, 31>();
	h3_7_h3_7_update_0_write0_write(h3_7_h3_7_update_0_write0_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write1_res = h3_7_update_0_write.extract<32, 63>();
	h3_7_h3_7_update_0_write1_write(h3_7_h3_7_update_0_write1_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write2_res = h3_7_update_0_write.extract<64, 95>();
	h3_7_h3_7_update_0_write2_write(h3_7_h3_7_update_0_write2_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write3_res = h3_7_update_0_write.extract<96, 127>();
	h3_7_h3_7_update_0_write3_write(h3_7_h3_7_update_0_write3_res, h3_7, d0, d1, dynamic_address);
}

// h3_8_update_0_read
//	h3_8_rd0
//	h3_8_rd1
//	h3_8_rd2
//	h3_8_rd3
//	h3_8_rd4
//	h3_8_rd5
//	h3_8_rd6
//	h3_8_rd7
//	h3_8_rd8
//	h3_8_rd9
//	h3_8_rd10
//	h3_8_rd11
//	h3_8_rd12
//	h3_8_rd13
//	h3_8_rd14
//	h3_8_rd15
//	h3_8_rd16
//	h3_8_rd17
//	h3_8_rd18
//	h3_8_rd19
inline hw_uint<640> h3_7_h3_8_update_0_read_bundle_read(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 20
    // h3_8_rd0
    // h3_8_rd1
    // h3_8_rd2
    // h3_8_rd3
    // h3_8_rd4
    // h3_8_rd5
    // h3_8_rd6
    // h3_8_rd7
    // h3_8_rd8
    // h3_8_rd9
    // h3_8_rd10
    // h3_8_rd11
    // h3_8_rd12
    // h3_8_rd13
    // h3_8_rd14
    // h3_8_rd15
    // h3_8_rd16
    // h3_8_rd17
    // h3_8_rd18
    // h3_8_rd19

	hw_uint<640> result;
	hw_uint<32>  h3_8_rd0_res = h3_8_rd0_select(h3_7, d0, d1, dynamic_address);
	set_at<0, 640>(result, h3_8_rd0_res);
	hw_uint<32>  h3_8_rd1_res = h3_8_rd1_select(h3_7, d0, d1, dynamic_address);
	set_at<32, 640>(result, h3_8_rd1_res);
	hw_uint<32>  h3_8_rd2_res = h3_8_rd2_select(h3_7, d0, d1, dynamic_address);
	set_at<64, 640>(result, h3_8_rd2_res);
	hw_uint<32>  h3_8_rd3_res = h3_8_rd3_select(h3_7, d0, d1, dynamic_address);
	set_at<96, 640>(result, h3_8_rd3_res);
	hw_uint<32>  h3_8_rd4_res = h3_8_rd4_select(h3_7, d0, d1, dynamic_address);
	set_at<128, 640>(result, h3_8_rd4_res);
	hw_uint<32>  h3_8_rd5_res = h3_8_rd5_select(h3_7, d0, d1, dynamic_address);
	set_at<160, 640>(result, h3_8_rd5_res);
	hw_uint<32>  h3_8_rd6_res = h3_8_rd6_select(h3_7, d0, d1, dynamic_address);
	set_at<192, 640>(result, h3_8_rd6_res);
	hw_uint<32>  h3_8_rd7_res = h3_8_rd7_select(h3_7, d0, d1, dynamic_address);
	set_at<224, 640>(result, h3_8_rd7_res);
	hw_uint<32>  h3_8_rd8_res = h3_8_rd8_select(h3_7, d0, d1, dynamic_address);
	set_at<256, 640>(result, h3_8_rd8_res);
	hw_uint<32>  h3_8_rd9_res = h3_8_rd9_select(h3_7, d0, d1, dynamic_address);
	set_at<288, 640>(result, h3_8_rd9_res);
	hw_uint<32>  h3_8_rd10_res = h3_8_rd10_select(h3_7, d0, d1, dynamic_address);
	set_at<320, 640>(result, h3_8_rd10_res);
	hw_uint<32>  h3_8_rd11_res = h3_8_rd11_select(h3_7, d0, d1, dynamic_address);
	set_at<352, 640>(result, h3_8_rd11_res);
	hw_uint<32>  h3_8_rd12_res = h3_8_rd12_select(h3_7, d0, d1, dynamic_address);
	set_at<384, 640>(result, h3_8_rd12_res);
	hw_uint<32>  h3_8_rd13_res = h3_8_rd13_select(h3_7, d0, d1, dynamic_address);
	set_at<416, 640>(result, h3_8_rd13_res);
	hw_uint<32>  h3_8_rd14_res = h3_8_rd14_select(h3_7, d0, d1, dynamic_address);
	set_at<448, 640>(result, h3_8_rd14_res);
	hw_uint<32>  h3_8_rd15_res = h3_8_rd15_select(h3_7, d0, d1, dynamic_address);
	set_at<480, 640>(result, h3_8_rd15_res);
	hw_uint<32>  h3_8_rd16_res = h3_8_rd16_select(h3_7, d0, d1, dynamic_address);
	set_at<512, 640>(result, h3_8_rd16_res);
	hw_uint<32>  h3_8_rd17_res = h3_8_rd17_select(h3_7, d0, d1, dynamic_address);
	set_at<544, 640>(result, h3_8_rd17_res);
	hw_uint<32>  h3_8_rd18_res = h3_8_rd18_select(h3_7, d0, d1, dynamic_address);
	set_at<576, 640>(result, h3_8_rd18_res);
	hw_uint<32>  h3_8_rd19_res = h3_8_rd19_select(h3_7, d0, d1, dynamic_address);
	set_at<608, 640>(result, h3_8_rd19_res);
	return result;
}

struct h3_8_h3_8_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[0, 1024], [-1, 1023]}
	// Capacity: 518
	// # of read delays: 5
  // 0, 1, 258, 259, 517
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 256> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 257> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_257() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_258() {
		return f4;
	}

	inline hw_uint<32>  peek_259() {
		return f6;
	}

	inline hw_uint<32>  peek_516() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_517() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 257
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 257 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 256
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 256 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[1, 1021], [-1, 1024]}
	// Capacity: 518
	// # of read delays: 4
  // 0, 1, 259, 517
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 257> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 257> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_258() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_259() {
		return f4;
	}

	inline hw_uint<32>  peek_516() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_517() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 257
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 257 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 257
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 257 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[2, 1022], [-1, 1024]}
	// Capacity: 518
	// # of read delays: 4
  // 0, 1, 259, 517
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 257> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 257> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_258() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_259() {
		return f4;
	}

	inline hw_uint<32>  peek_516() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_517() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 257
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 257 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 257
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 257 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-1, 1023], [0, 1024]}
	// Capacity: 518
	// # of read delays: 5
  // 0, 1, 259, 260, 517
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 257> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 256> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_258() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_259() {
		return f4;
	}

	inline hw_uint<32>  peek_260() {
		return f6;
	}

	inline hw_uint<32>  peek_516() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_517() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 256
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 256 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 257
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 257 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_cache {
  // # of banks: 4
  h3_8_h3_8_update_0_write0_merged_banks_5_cache h3_8_h3_8_update_0_write0_merged_banks_5;
  h3_8_h3_8_update_0_write1_merged_banks_5_cache h3_8_h3_8_update_0_write1_merged_banks_5;
  h3_8_h3_8_update_0_write2_merged_banks_5_cache h3_8_h3_8_update_0_write2_merged_banks_5;
  h3_8_h3_8_update_0_write3_merged_banks_5_cache h3_8_h3_8_update_0_write3_merged_banks_5;
};



inline void h3_8_h3_8_update_0_write0_write(hw_uint<32> & h3_8_h3_8_update_0_write0, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.push(h3_8_h3_8_update_0_write0);
}

inline void h3_8_h3_8_update_0_write1_write(hw_uint<32> & h3_8_h3_8_update_0_write1, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.push(h3_8_h3_8_update_0_write1);
}

inline void h3_8_h3_8_update_0_write2_write(hw_uint<32> & h3_8_h3_8_update_0_write2, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.push(h3_8_h3_8_update_0_write2);
}

inline void h3_8_h3_8_update_0_write3_write(hw_uint<32> & h3_8_h3_8_update_0_write3, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.push(h3_8_h3_8_update_0_write3);
}

inline hw_uint<32>  h3_9_rd0_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd0 read pattern: { h3_9_update_0[d0, d1] -> h3_8[-1 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_260();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd1_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd1 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_517();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd10_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd10 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_259();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd11_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd11 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_517();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd12_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd12 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_259();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd13_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd13 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd14_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd14 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_259();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd15_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd15 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_259();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd16_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd16 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_517();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd17_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd17 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_259();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd18_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd18 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd19_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd19 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_258();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd2_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd2 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_259();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd3_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd3 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd4_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd4 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_259();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd5_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd5 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_259();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd6_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd6 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_517();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd7_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd7 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_259();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd8_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd8 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd9_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd9 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_259();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_8_update_0_write
//	h3_8_h3_8_update_0_write0
//	h3_8_h3_8_update_0_write1
//	h3_8_h3_8_update_0_write2
//	h3_8_h3_8_update_0_write3
inline void h3_8_h3_8_update_0_write_bundle_write(hw_uint<128>& h3_8_update_0_write, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_8_h3_8_update_0_write0_res = h3_8_update_0_write.extract<0, 31>();
	h3_8_h3_8_update_0_write0_write(h3_8_h3_8_update_0_write0_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write1_res = h3_8_update_0_write.extract<32, 63>();
	h3_8_h3_8_update_0_write1_write(h3_8_h3_8_update_0_write1_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write2_res = h3_8_update_0_write.extract<64, 95>();
	h3_8_h3_8_update_0_write2_write(h3_8_h3_8_update_0_write2_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write3_res = h3_8_update_0_write.extract<96, 127>();
	h3_8_h3_8_update_0_write3_write(h3_8_h3_8_update_0_write3_res, h3_8, d0, d1, dynamic_address);
}

// h3_9_update_0_read
//	h3_9_rd0
//	h3_9_rd1
//	h3_9_rd2
//	h3_9_rd3
//	h3_9_rd4
//	h3_9_rd5
//	h3_9_rd6
//	h3_9_rd7
//	h3_9_rd8
//	h3_9_rd9
//	h3_9_rd10
//	h3_9_rd11
//	h3_9_rd12
//	h3_9_rd13
//	h3_9_rd14
//	h3_9_rd15
//	h3_9_rd16
//	h3_9_rd17
//	h3_9_rd18
//	h3_9_rd19
inline hw_uint<640> h3_8_h3_9_update_0_read_bundle_read(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 20
    // h3_9_rd0
    // h3_9_rd1
    // h3_9_rd2
    // h3_9_rd3
    // h3_9_rd4
    // h3_9_rd5
    // h3_9_rd6
    // h3_9_rd7
    // h3_9_rd8
    // h3_9_rd9
    // h3_9_rd10
    // h3_9_rd11
    // h3_9_rd12
    // h3_9_rd13
    // h3_9_rd14
    // h3_9_rd15
    // h3_9_rd16
    // h3_9_rd17
    // h3_9_rd18
    // h3_9_rd19

	hw_uint<640> result;
	hw_uint<32>  h3_9_rd0_res = h3_9_rd0_select(h3_8, d0, d1, dynamic_address);
	set_at<0, 640>(result, h3_9_rd0_res);
	hw_uint<32>  h3_9_rd1_res = h3_9_rd1_select(h3_8, d0, d1, dynamic_address);
	set_at<32, 640>(result, h3_9_rd1_res);
	hw_uint<32>  h3_9_rd2_res = h3_9_rd2_select(h3_8, d0, d1, dynamic_address);
	set_at<64, 640>(result, h3_9_rd2_res);
	hw_uint<32>  h3_9_rd3_res = h3_9_rd3_select(h3_8, d0, d1, dynamic_address);
	set_at<96, 640>(result, h3_9_rd3_res);
	hw_uint<32>  h3_9_rd4_res = h3_9_rd4_select(h3_8, d0, d1, dynamic_address);
	set_at<128, 640>(result, h3_9_rd4_res);
	hw_uint<32>  h3_9_rd5_res = h3_9_rd5_select(h3_8, d0, d1, dynamic_address);
	set_at<160, 640>(result, h3_9_rd5_res);
	hw_uint<32>  h3_9_rd6_res = h3_9_rd6_select(h3_8, d0, d1, dynamic_address);
	set_at<192, 640>(result, h3_9_rd6_res);
	hw_uint<32>  h3_9_rd7_res = h3_9_rd7_select(h3_8, d0, d1, dynamic_address);
	set_at<224, 640>(result, h3_9_rd7_res);
	hw_uint<32>  h3_9_rd8_res = h3_9_rd8_select(h3_8, d0, d1, dynamic_address);
	set_at<256, 640>(result, h3_9_rd8_res);
	hw_uint<32>  h3_9_rd9_res = h3_9_rd9_select(h3_8, d0, d1, dynamic_address);
	set_at<288, 640>(result, h3_9_rd9_res);
	hw_uint<32>  h3_9_rd10_res = h3_9_rd10_select(h3_8, d0, d1, dynamic_address);
	set_at<320, 640>(result, h3_9_rd10_res);
	hw_uint<32>  h3_9_rd11_res = h3_9_rd11_select(h3_8, d0, d1, dynamic_address);
	set_at<352, 640>(result, h3_9_rd11_res);
	hw_uint<32>  h3_9_rd12_res = h3_9_rd12_select(h3_8, d0, d1, dynamic_address);
	set_at<384, 640>(result, h3_9_rd12_res);
	hw_uint<32>  h3_9_rd13_res = h3_9_rd13_select(h3_8, d0, d1, dynamic_address);
	set_at<416, 640>(result, h3_9_rd13_res);
	hw_uint<32>  h3_9_rd14_res = h3_9_rd14_select(h3_8, d0, d1, dynamic_address);
	set_at<448, 640>(result, h3_9_rd14_res);
	hw_uint<32>  h3_9_rd15_res = h3_9_rd15_select(h3_8, d0, d1, dynamic_address);
	set_at<480, 640>(result, h3_9_rd15_res);
	hw_uint<32>  h3_9_rd16_res = h3_9_rd16_select(h3_8, d0, d1, dynamic_address);
	set_at<512, 640>(result, h3_9_rd16_res);
	hw_uint<32>  h3_9_rd17_res = h3_9_rd17_select(h3_8, d0, d1, dynamic_address);
	set_at<544, 640>(result, h3_9_rd17_res);
	hw_uint<32>  h3_9_rd18_res = h3_9_rd18_select(h3_8, d0, d1, dynamic_address);
	set_at<576, 640>(result, h3_9_rd18_res);
	hw_uint<32>  h3_9_rd19_res = h3_9_rd19_select(h3_8, d0, d1, dynamic_address);
	set_at<608, 640>(result, h3_9_rd19_res);
	return result;
}

struct h3_9_h3_9_update_0_write0_to_h10_1_300MHz_4_rd0_cache {
	// RAM Box: {[0, 1020], [0, 1023]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_9_h3_9_update_0_write1_to_h10_1_300MHz_4_rd1_cache {
	// RAM Box: {[1, 1021], [0, 1023]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_9_h3_9_update_0_write2_to_h10_1_300MHz_4_rd2_cache {
	// RAM Box: {[2, 1022], [0, 1023]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_9_h3_9_update_0_write3_to_h10_1_300MHz_4_rd3_cache {
	// RAM Box: {[3, 1023], [0, 1023]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_9_cache {
  // # of banks: 4
  h3_9_h3_9_update_0_write0_to_h10_1_300MHz_4_rd0_cache h3_9_h3_9_update_0_write0_to_h10_1_300MHz_4_rd0;
  h3_9_h3_9_update_0_write1_to_h10_1_300MHz_4_rd1_cache h3_9_h3_9_update_0_write1_to_h10_1_300MHz_4_rd1;
  h3_9_h3_9_update_0_write2_to_h10_1_300MHz_4_rd2_cache h3_9_h3_9_update_0_write2_to_h10_1_300MHz_4_rd2;
  h3_9_h3_9_update_0_write3_to_h10_1_300MHz_4_rd3_cache h3_9_h3_9_update_0_write3_to_h10_1_300MHz_4_rd3;
};



inline void h3_9_h3_9_update_0_write0_write(hw_uint<32> & h3_9_h3_9_update_0_write0, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write0_to_h10_1_300MHz_4_rd0.push(h3_9_h3_9_update_0_write0);
}

inline void h3_9_h3_9_update_0_write1_write(hw_uint<32> & h3_9_h3_9_update_0_write1, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write1_to_h10_1_300MHz_4_rd1.push(h3_9_h3_9_update_0_write1);
}

inline void h3_9_h3_9_update_0_write2_write(hw_uint<32> & h3_9_h3_9_update_0_write2, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write2_to_h10_1_300MHz_4_rd2.push(h3_9_h3_9_update_0_write2);
}

inline void h3_9_h3_9_update_0_write3_write(hw_uint<32> & h3_9_h3_9_update_0_write3, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write3_to_h10_1_300MHz_4_rd3.push(h3_9_h3_9_update_0_write3);
}

inline hw_uint<32>  h10_1_300MHz_4_rd0_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_4_rd0 read pattern: { h10_1_300MHz_4_update_0[d0, d1] -> h3_9[4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_4_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_to_h10_1_300MHz_4_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_4_rd1_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_4_rd1 read pattern: { h10_1_300MHz_4_update_0[d0, d1] -> h3_9[1 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_4_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_to_h10_1_300MHz_4_rd1.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_4_rd2_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_4_rd2 read pattern: { h10_1_300MHz_4_update_0[d0, d1] -> h3_9[2 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_4_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write2 = h3_9.h3_9_h3_9_update_0_write2_to_h10_1_300MHz_4_rd2.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write2;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_4_rd3_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_4_rd3 read pattern: { h10_1_300MHz_4_update_0[d0, d1] -> h3_9[3 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_4_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write3 = h3_9.h3_9_h3_9_update_0_write3_to_h10_1_300MHz_4_rd3.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write3;
  return 0;
}

// # of bundles = 2
// h10_1_300MHz_4_update_0_read
//	h10_1_300MHz_4_rd0
//	h10_1_300MHz_4_rd1
//	h10_1_300MHz_4_rd2
//	h10_1_300MHz_4_rd3
inline hw_uint<128> h3_9_h10_1_300MHz_4_update_0_read_bundle_read(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // h10_1_300MHz_4_rd0
    // h10_1_300MHz_4_rd1
    // h10_1_300MHz_4_rd2
    // h10_1_300MHz_4_rd3

	hw_uint<128> result;
	hw_uint<32>  h10_1_300MHz_4_rd0_res = h10_1_300MHz_4_rd0_select(h3_9, d0, d1, dynamic_address);
	set_at<0, 128>(result, h10_1_300MHz_4_rd0_res);
	hw_uint<32>  h10_1_300MHz_4_rd1_res = h10_1_300MHz_4_rd1_select(h3_9, d0, d1, dynamic_address);
	set_at<32, 128>(result, h10_1_300MHz_4_rd1_res);
	hw_uint<32>  h10_1_300MHz_4_rd2_res = h10_1_300MHz_4_rd2_select(h3_9, d0, d1, dynamic_address);
	set_at<64, 128>(result, h10_1_300MHz_4_rd2_res);
	hw_uint<32>  h10_1_300MHz_4_rd3_res = h10_1_300MHz_4_rd3_select(h3_9, d0, d1, dynamic_address);
	set_at<96, 128>(result, h10_1_300MHz_4_rd3_res);
	return result;
}

// h3_9_update_0_write
//	h3_9_h3_9_update_0_write0
//	h3_9_h3_9_update_0_write1
//	h3_9_h3_9_update_0_write2
//	h3_9_h3_9_update_0_write3
inline void h3_9_h3_9_update_0_write_bundle_write(hw_uint<128>& h3_9_update_0_write, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_9_h3_9_update_0_write0_res = h3_9_update_0_write.extract<0, 31>();
	h3_9_h3_9_update_0_write0_write(h3_9_h3_9_update_0_write0_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write1_res = h3_9_update_0_write.extract<32, 63>();
	h3_9_h3_9_update_0_write1_write(h3_9_h3_9_update_0_write1_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write2_res = h3_9_update_0_write.extract<64, 95>();
	h3_9_h3_9_update_0_write2_write(h3_9_h3_9_update_0_write2_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write3_res = h3_9_update_0_write.extract<96, 127>();
	h3_9_h3_9_update_0_write3_write(h3_9_h3_9_update_0_write3_res, h3_9, d0, d1, dynamic_address);
}

struct in_cc_in_cc_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-36, 1060], [-10, 1032]}
	// Capacity: 554
	// # of read delays: 5
  // 0, 1, 276, 277, 553
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 274> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 275> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_275() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_276() {
		return f4;
	}

	inline hw_uint<32>  peek_277() {
		return f6;
	}

	inline hw_uint<32>  peek_552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_553() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-35, 1057], [-10, 1033]}
	// Capacity: 554
	// # of read delays: 4
  // 0, 1, 277, 553
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 275> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 275> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_277() {
		return f4;
	}

	inline hw_uint<32>  peek_552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_553() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[-34, 1058], [-10, 1033]}
	// Capacity: 554
	// # of read delays: 4
  // 0, 1, 277, 553
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 275> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 275> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_277() {
		return f4;
	}

	inline hw_uint<32>  peek_552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_553() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-37, 1059], [-9, 1033]}
	// Capacity: 554
	// # of read delays: 5
  // 0, 1, 277, 278, 553
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 275> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 274> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_277() {
		return f4;
	}

	inline hw_uint<32>  peek_278() {
		return f6;
	}

	inline hw_uint<32>  peek_552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_553() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_cache {
  // # of banks: 4
  in_cc_in_cc_update_0_write0_merged_banks_5_cache in_cc_in_cc_update_0_write0_merged_banks_5;
  in_cc_in_cc_update_0_write1_merged_banks_5_cache in_cc_in_cc_update_0_write1_merged_banks_5;
  in_cc_in_cc_update_0_write2_merged_banks_5_cache in_cc_in_cc_update_0_write2_merged_banks_5;
  in_cc_in_cc_update_0_write3_merged_banks_5_cache in_cc_in_cc_update_0_write3_merged_banks_5;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.push(in_cc_in_cc_update_0_write0);
}

inline void in_cc_in_cc_update_0_write1_write(hw_uint<32> & in_cc_in_cc_update_0_write1, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.push(in_cc_in_cc_update_0_write1);
}

inline void in_cc_in_cc_update_0_write2_write(hw_uint<32> & in_cc_in_cc_update_0_write2, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.push(in_cc_in_cc_update_0_write2);
}

inline void in_cc_in_cc_update_0_write3_write(hw_uint<32> & in_cc_in_cc_update_0_write3, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.push(in_cc_in_cc_update_0_write3);
}

inline hw_uint<32>  h3_0_rd0_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1] -> in_cc[-1 + 4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_278();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4d0, -1 + d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_553();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd10_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd10 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_277();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd11_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd11 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 4d0, -1 + d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_553();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd12_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd12 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_277();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd13_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd13 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 4d0, 1 + d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd14_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd14 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_277();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd15_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd15 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_277();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd16_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd16 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 4d0, -1 + d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_553();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd17_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd17 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_277();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd18_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd18 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 4d0, 1 + d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd19_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd19 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_276();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_277();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4d0, 1 + d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_277();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd5_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd5 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_277();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd6_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd6 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 4d0, -1 + d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_553();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd7_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd7 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_277();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd8_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd8 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 4d0, 1 + d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd9_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd9 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 4d0, d1] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_277();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_read
//	h3_0_rd0
//	h3_0_rd1
//	h3_0_rd2
//	h3_0_rd3
//	h3_0_rd4
//	h3_0_rd5
//	h3_0_rd6
//	h3_0_rd7
//	h3_0_rd8
//	h3_0_rd9
//	h3_0_rd10
//	h3_0_rd11
//	h3_0_rd12
//	h3_0_rd13
//	h3_0_rd14
//	h3_0_rd15
//	h3_0_rd16
//	h3_0_rd17
//	h3_0_rd18
//	h3_0_rd19
inline hw_uint<640> in_cc_h3_0_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 20
    // h3_0_rd0
    // h3_0_rd1
    // h3_0_rd2
    // h3_0_rd3
    // h3_0_rd4
    // h3_0_rd5
    // h3_0_rd6
    // h3_0_rd7
    // h3_0_rd8
    // h3_0_rd9
    // h3_0_rd10
    // h3_0_rd11
    // h3_0_rd12
    // h3_0_rd13
    // h3_0_rd14
    // h3_0_rd15
    // h3_0_rd16
    // h3_0_rd17
    // h3_0_rd18
    // h3_0_rd19

	hw_uint<640> result;
	hw_uint<32>  h3_0_rd0_res = h3_0_rd0_select(in_cc, d0, d1, dynamic_address);
	set_at<0, 640>(result, h3_0_rd0_res);
	hw_uint<32>  h3_0_rd1_res = h3_0_rd1_select(in_cc, d0, d1, dynamic_address);
	set_at<32, 640>(result, h3_0_rd1_res);
	hw_uint<32>  h3_0_rd2_res = h3_0_rd2_select(in_cc, d0, d1, dynamic_address);
	set_at<64, 640>(result, h3_0_rd2_res);
	hw_uint<32>  h3_0_rd3_res = h3_0_rd3_select(in_cc, d0, d1, dynamic_address);
	set_at<96, 640>(result, h3_0_rd3_res);
	hw_uint<32>  h3_0_rd4_res = h3_0_rd4_select(in_cc, d0, d1, dynamic_address);
	set_at<128, 640>(result, h3_0_rd4_res);
	hw_uint<32>  h3_0_rd5_res = h3_0_rd5_select(in_cc, d0, d1, dynamic_address);
	set_at<160, 640>(result, h3_0_rd5_res);
	hw_uint<32>  h3_0_rd6_res = h3_0_rd6_select(in_cc, d0, d1, dynamic_address);
	set_at<192, 640>(result, h3_0_rd6_res);
	hw_uint<32>  h3_0_rd7_res = h3_0_rd7_select(in_cc, d0, d1, dynamic_address);
	set_at<224, 640>(result, h3_0_rd7_res);
	hw_uint<32>  h3_0_rd8_res = h3_0_rd8_select(in_cc, d0, d1, dynamic_address);
	set_at<256, 640>(result, h3_0_rd8_res);
	hw_uint<32>  h3_0_rd9_res = h3_0_rd9_select(in_cc, d0, d1, dynamic_address);
	set_at<288, 640>(result, h3_0_rd9_res);
	hw_uint<32>  h3_0_rd10_res = h3_0_rd10_select(in_cc, d0, d1, dynamic_address);
	set_at<320, 640>(result, h3_0_rd10_res);
	hw_uint<32>  h3_0_rd11_res = h3_0_rd11_select(in_cc, d0, d1, dynamic_address);
	set_at<352, 640>(result, h3_0_rd11_res);
	hw_uint<32>  h3_0_rd12_res = h3_0_rd12_select(in_cc, d0, d1, dynamic_address);
	set_at<384, 640>(result, h3_0_rd12_res);
	hw_uint<32>  h3_0_rd13_res = h3_0_rd13_select(in_cc, d0, d1, dynamic_address);
	set_at<416, 640>(result, h3_0_rd13_res);
	hw_uint<32>  h3_0_rd14_res = h3_0_rd14_select(in_cc, d0, d1, dynamic_address);
	set_at<448, 640>(result, h3_0_rd14_res);
	hw_uint<32>  h3_0_rd15_res = h3_0_rd15_select(in_cc, d0, d1, dynamic_address);
	set_at<480, 640>(result, h3_0_rd15_res);
	hw_uint<32>  h3_0_rd16_res = h3_0_rd16_select(in_cc, d0, d1, dynamic_address);
	set_at<512, 640>(result, h3_0_rd16_res);
	hw_uint<32>  h3_0_rd17_res = h3_0_rd17_select(in_cc, d0, d1, dynamic_address);
	set_at<544, 640>(result, h3_0_rd17_res);
	hw_uint<32>  h3_0_rd18_res = h3_0_rd18_select(in_cc, d0, d1, dynamic_address);
	set_at<576, 640>(result, h3_0_rd18_res);
	hw_uint<32>  h3_0_rd19_res = h3_0_rd19_select(in_cc, d0, d1, dynamic_address);
	set_at<608, 640>(result, h3_0_rd19_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
//	in_cc_in_cc_update_0_write1
//	in_cc_in_cc_update_0_write2
//	in_cc_in_cc_update_0_write3
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<128>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write1_res = in_cc_update_0_write.extract<32, 63>();
	in_cc_in_cc_update_0_write1_write(in_cc_in_cc_update_0_write1_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write2_res = in_cc_update_0_write.extract<64, 95>();
	in_cc_in_cc_update_0_write2_write(in_cc_in_cc_update_0_write2_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write3_res = in_cc_update_0_write.extract<96, 127>();
	in_cc_in_cc_update_0_write3_write(in_cc_in_cc_update_0_write3_res, in_cc, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 684800 bits


// Operation logic
inline void in_cc_update_0(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */in, in_cc_cache& in_cc, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_4(in_0_c__0_value);
	// Produce: in_cc
	in_cc_in_cc_update_0_write_bundle_write(/* arg names */compute_result, in_cc, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_3_update_0(h3_2_cache& h3_2, h3_3_cache& h3_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_2
	auto h3_2_0_c__0_value = h3_2_h3_3_update_0_read_bundle_read(h3_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_3_generated_compute_unrolled_4(h3_2_0_c__0_value);
	// Produce: h3_3
	h3_3_h3_3_update_0_write_bundle_write(/* arg names */compute_result, h3_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_5_update_0(h3_4_cache& h3_4, h3_5_cache& h3_5, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_4
	auto h3_4_0_c__0_value = h3_4_h3_5_update_0_read_bundle_read(h3_4/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_5_generated_compute_unrolled_4(h3_4_0_c__0_value);
	// Produce: h3_5
	h3_5_h3_5_update_0_write_bundle_write(/* arg names */compute_result, h3_5, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_7_update_0(h3_6_cache& h3_6, h3_7_cache& h3_7, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_6
	auto h3_6_0_c__0_value = h3_6_h3_7_update_0_read_bundle_read(h3_6/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_7_generated_compute_unrolled_4(h3_6_0_c__0_value);
	// Produce: h3_7
	h3_7_h3_7_update_0_write_bundle_write(/* arg names */compute_result, h3_7, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_9_update_0(h3_8_cache& h3_8, h3_9_cache& h3_9, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_8
	auto h3_8_0_c__0_value = h3_8_h3_9_update_0_read_bundle_read(h3_8/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_9_generated_compute_unrolled_4(h3_8_0_c__0_value);
	// Produce: h3_9
	h3_9_h3_9_update_0_write_bundle_write(/* arg names */compute_result, h3_9, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_1_update_0(h3_0_cache& h3_0, h3_1_cache& h3_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_0
	auto h3_0_0_c__0_value = h3_0_h3_1_update_0_read_bundle_read(h3_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_1_generated_compute_unrolled_4(h3_0_0_c__0_value);
	// Produce: h3_1
	h3_1_h3_1_update_0_write_bundle_write(/* arg names */compute_result, h3_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_2_update_0(h3_1_cache& h3_1, h3_2_cache& h3_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_1
	auto h3_1_0_c__0_value = h3_1_h3_2_update_0_read_bundle_read(h3_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_2_generated_compute_unrolled_4(h3_1_0_c__0_value);
	// Produce: h3_2
	h3_2_h3_2_update_0_write_bundle_write(/* arg names */compute_result, h3_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_0_update_0(in_cc_cache& in_cc, h3_0_cache& h3_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_h3_0_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_0_generated_compute_unrolled_4(in_cc_0_c__0_value);
	// Produce: h3_0
	h3_0_h3_0_update_0_write_bundle_write(/* arg names */compute_result, h3_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_4_update_0(h3_3_cache& h3_3, h3_4_cache& h3_4, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_3
	auto h3_3_0_c__0_value = h3_3_h3_4_update_0_read_bundle_read(h3_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_4_generated_compute_unrolled_4(h3_3_0_c__0_value);
	// Produce: h3_4
	h3_4_h3_4_update_0_write_bundle_write(/* arg names */compute_result, h3_4, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_6_update_0(h3_5_cache& h3_5, h3_6_cache& h3_6, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_5
	auto h3_5_0_c__0_value = h3_5_h3_6_update_0_read_bundle_read(h3_5/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_6_generated_compute_unrolled_4(h3_5_0_c__0_value);
	// Produce: h3_6
	h3_6_h3_6_update_0_write_bundle_write(/* arg names */compute_result, h3_6, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_8_update_0(h3_7_cache& h3_7, h3_8_cache& h3_8, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_7
	auto h3_7_0_c__0_value = h3_7_h3_8_update_0_read_bundle_read(h3_7/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_8_generated_compute_unrolled_4(h3_7_0_c__0_value);
	// Produce: h3_8
	h3_8_h3_8_update_0_write_bundle_write(/* arg names */compute_result, h3_8, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h10_1_300MHz_4_update_0(h3_9_cache& h3_9, HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */h10_1_300MHz_4, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_9
	auto h3_9_0_c__0_value = h3_9_h10_1_300MHz_4_update_0_read_bundle_read(h3_9/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h10_1_300MHz_4_generated_compute_unrolled_4(h3_9_0_c__0_value);
	// Produce: h10_1_300MHz_4
	h10_1_300MHz_4.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void h10_1_300MHz_4_opt(HWStream<hw_uint<128> >& /* get_args num ports = 4 */in, HWStream<hw_uint<128> >& /* get_args num ports = 4 */h10_1_300MHz_4) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("h10_1_300MHz_4_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  h3_0_cache h3_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_1_cache h3_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_2_cache h3_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_3_cache h3_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_4_cache h3_4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_5_cache h3_5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_6_cache h3_6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_7_cache h3_7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_8_cache h3_8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_9_cache h3_9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cc_cache in_cc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025; in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033; h10_1_300MHz_4_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 255 and 0 <= d1 <= 1023; h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023; h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031; h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029; h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027; h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030; h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028; h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032; h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024; h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
//   { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 257 and -2 <= d1 <= 1025 }
// Condition for h3_7_update_0(((-9 + i2 == 0) && (-6 + i1 >= 0) && (265 - i1 >= 0) && (-6 + i0 >= 0) && (1033 - i0 >= 0)))
//   { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 265 and -10 <= d1 <= 1033 }
// Condition for in_cc_update_0(((-1 + i2 == 0) && (10 + i1 >= 0) && (265 - i1 >= 0) && (10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h10_1_300MHz_4_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
// Condition for h10_1_300MHz_4_update_0(((-12 + i2 == 0) && (-10 + i1 >= 0) && (265 - i1 >= 0) && (-10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
// Condition for h3_9_update_0(((-11 + i2 == 0) && (-10 + i1 >= 0) && (265 - i1 >= 0) && (-10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 263 and -8 <= d1 <= 1031 }
// Condition for h3_1_update_0(((-3 + i2 == 0) && (6 + i1 >= 0) && (265 - i1 >= 0) && (6 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 261 and -6 <= d1 <= 1029 }
// Condition for h3_3_update_0(((-5 + i2 == 0) && (2 + i1 >= 0) && (265 - i1 >= 0) && (2 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 259 and -4 <= d1 <= 1027 }
// Condition for h3_5_update_0(((-7 + i2 == 0) && (-2 + i1 >= 0) && (265 - i1 >= 0) && (-2 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 262 and -7 <= d1 <= 1030 }
// Condition for h3_2_update_0(((-4 + i2 == 0) && (4 + i1 >= 0) && (265 - i1 >= 0) && (4 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 260 and -5 <= d1 <= 1028 }
// Condition for h3_4_update_0(((-6 + i2 == 0) && (i1 >= 0) && (265 - i1 >= 0) && (i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 264 and -9 <= d1 <= 1032 }
// Condition for h3_0_update_0(((-2 + i2 == 0) && (8 + i1 >= 0) && (265 - i1 >= 0) && (8 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 256 and -1 <= d1 <= 1024 }
// Condition for h3_8_update_0(((-10 + i2 == 0) && (-8 + i1 >= 0) && (265 - i1 >= 0) && (-8 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 258 and -3 <= d1 <= 1026 }
// Condition for h3_6_update_0(((-8 + i2 == 0) && (-4 + i1 >= 0) && (265 - i1 >= 0) && (-4 + i0 >= 0) && (1033 - i0 >= 0)))

  /*
  // Schedules...
    // h10_1_300MHz_4_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
    // h3_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // h3_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // h3_2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // h3_3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // h3_4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
    // h3_5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
    // h3_6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
    // h3_7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
    // h3_8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
    // h3_9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
    // in_cc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = -10; c0 <= 1033; c0++) {
  for (int c1 = -10; c1 <= 265; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-10 <= c1 && c1 <= 265) && ((c1 - 0) % 1 == 0) && (-10 <= c0 && c0 <= 1033) && ((c0 - 0) % 1 == 0)) {
      in_cc_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-8 <= c1 && c1 <= 265) && ((c1 - 1) % 1 == 0) && (-8 <= c0 && c0 <= 1033) && ((c0 - 1) % 1 == 0)) {
      h3_0_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-6 <= c1 && c1 <= 265) && ((c1 - 2) % 1 == 0) && (-6 <= c0 && c0 <= 1033) && ((c0 - 2) % 1 == 0)) {
      h3_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-4 <= c1 && c1 <= 265) && ((c1 - 3) % 1 == 0) && (-4 <= c0 && c0 <= 1033) && ((c0 - 3) % 1 == 0)) {
      h3_2_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((-2 <= c1 && c1 <= 265) && ((c1 - 4) % 1 == 0) && (-2 <= c0 && c0 <= 1033) && ((c0 - 4) % 1 == 0)) {
      h3_3_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((0 <= c1 && c1 <= 265) && ((c1 - 5) % 1 == 0) && (0 <= c0 && c0 <= 1033) && ((c0 - 5) % 1 == 0)) {
      h3_4_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((2 <= c1 && c1 <= 265) && ((c1 - 6) % 1 == 0) && (2 <= c0 && c0 <= 1033) && ((c0 - 6) % 1 == 0)) {
      h3_5_update_0((c1 - 6) / 1, (c0 - 6) / 1);
    }

    if ((4 <= c1 && c1 <= 265) && ((c1 - 7) % 1 == 0) && (4 <= c0 && c0 <= 1033) && ((c0 - 7) % 1 == 0)) {
      h3_6_update_0((c1 - 7) / 1, (c0 - 7) / 1);
    }

    if ((6 <= c1 && c1 <= 265) && ((c1 - 8) % 1 == 0) && (6 <= c0 && c0 <= 1033) && ((c0 - 8) % 1 == 0)) {
      h3_7_update_0((c1 - 8) / 1, (c0 - 8) / 1);
    }

    if ((8 <= c1 && c1 <= 265) && ((c1 - 9) % 1 == 0) && (8 <= c0 && c0 <= 1033) && ((c0 - 9) % 1 == 0)) {
      h3_8_update_0((c1 - 9) / 1, (c0 - 9) / 1);
    }

    if ((10 <= c1 && c1 <= 265) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
      h3_9_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

    if ((10 <= c1 && c1 <= 265) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
      h10_1_300MHz_4_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

  }
}

  */
	  // Schedules...
	    // h10_1_300MHz_4_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
	    // h3_0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // h3_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // h3_2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // h3_3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // h3_4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // h3_5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
	    // h3_6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
	    // h3_7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
	    // h3_8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
	    // h3_9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
	    // in_cc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = -10; c0 <= 1033; c0++) {
	  for (int c1 = -10; c1 <= 265; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-10 <= c1 && c1 <= 265) && ((c1 - 0) % 1 == 0) && (-10 <= c0 && c0 <= 1033) && ((c0 - 0) % 1 == 0)) {
	      in_cc_update_0(in /* buf name */, in_cc, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-8 <= c1 && c1 <= 265) && ((c1 - 1) % 1 == 0) && (-8 <= c0 && c0 <= 1033) && ((c0 - 1) % 1 == 0)) {
	      h3_0_update_0(in_cc /* buf name */, h3_0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-6 <= c1 && c1 <= 265) && ((c1 - 2) % 1 == 0) && (-6 <= c0 && c0 <= 1033) && ((c0 - 2) % 1 == 0)) {
	      h3_1_update_0(h3_0 /* buf name */, h3_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 265) && ((c1 - 3) % 1 == 0) && (-4 <= c0 && c0 <= 1033) && ((c0 - 3) % 1 == 0)) {
	      h3_2_update_0(h3_1 /* buf name */, h3_2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 265) && ((c1 - 4) % 1 == 0) && (-2 <= c0 && c0 <= 1033) && ((c0 - 4) % 1 == 0)) {
	      h3_3_update_0(h3_2 /* buf name */, h3_3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 265) && ((c1 - 5) % 1 == 0) && (0 <= c0 && c0 <= 1033) && ((c0 - 5) % 1 == 0)) {
	      h3_4_update_0(h3_3 /* buf name */, h3_4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 265) && ((c1 - 6) % 1 == 0) && (2 <= c0 && c0 <= 1033) && ((c0 - 6) % 1 == 0)) {
	      h3_5_update_0(h3_4 /* buf name */, h3_5, (c1 - 6) / 1, (c0 - 6) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 265) && ((c1 - 7) % 1 == 0) && (4 <= c0 && c0 <= 1033) && ((c0 - 7) % 1 == 0)) {
	      h3_6_update_0(h3_5 /* buf name */, h3_6, (c1 - 7) / 1, (c0 - 7) / 1);
	    }
	
	    if ((6 <= c1 && c1 <= 265) && ((c1 - 8) % 1 == 0) && (6 <= c0 && c0 <= 1033) && ((c0 - 8) % 1 == 0)) {
	      h3_7_update_0(h3_6 /* buf name */, h3_7, (c1 - 8) / 1, (c0 - 8) / 1);
	    }
	
	    if ((8 <= c1 && c1 <= 265) && ((c1 - 9) % 1 == 0) && (8 <= c0 && c0 <= 1033) && ((c0 - 9) % 1 == 0)) {
	      h3_8_update_0(h3_7 /* buf name */, h3_8, (c1 - 9) / 1, (c0 - 9) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 265) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
	      h3_9_update_0(h3_8 /* buf name */, h3_9, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 265) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
	      h10_1_300MHz_4_update_0(h3_9 /* buf name */, h10_1_300MHz_4, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void h10_1_300MHz_4_opt_wrapper(HWStream<hw_uint<128> >& /* get_args num ports = 4 */in, HWStream<hw_uint<128> >& /* get_args num ports = 4 */h10_1_300MHz_4, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    h10_1_300MHz_4_opt(in, h10_1_300MHz_4);
  }
}
#ifdef __VIVADO_SYNTH__
  // { h10_1_300MHz_4_update_0[root = 0, h10_1_300MHz_4_0, h10_1_300MHz_4_1] -> h10_1_300MHz_4[0, 0] : 0 <= h10_1_300MHz_4_0 <= 255 and 0 <= h10_1_300MHz_4_1 <= 1023 }
const int h10_1_300MHz_4_update_0_write_pipe0_num_transfers = 262144;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : -10 <= in_cc_0 <= 265 and -10 <= in_cc_1 <= 1033 }
const int in_cc_update_0_read_pipe0_num_transfers = 288144;


extern "C" {

void h10_1_300MHz_4_opt_accel(hw_uint<128>* in_cc_update_0_read_pipe0, hw_uint<128>* h10_1_300MHz_4_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = h10_1_300MHz_4_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = h10_1_300MHz_4_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<128> > h10_1_300MHz_4_update_0_write_pipe0_channel;

  burst_read<128>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  h10_1_300MHz_4_opt_wrapper(in_cc_update_0_read_pipe0_channel, h10_1_300MHz_4_update_0_write_pipe0_channel, size);

  burst_write<128>(h10_1_300MHz_4_update_0_write_pipe0, h10_1_300MHz_4_update_0_write_pipe0_channel, h10_1_300MHz_4_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void h10_1_300MHz_4_opt_rdai(HWStream<hw_uint<128> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<128> >&  h10_1_300MHz_4_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = h10_1_300MHz_4_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  h10_1_300MHz_4_opt(in_cc_update_0_read_pipe0, h10_1_300MHz_4_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

