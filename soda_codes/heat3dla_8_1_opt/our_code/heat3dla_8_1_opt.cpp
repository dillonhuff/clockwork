#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: heat3dla_8_1_opt_compute_units.h
#include "heat3dla_8_1_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-7, 134], [-6, 133], [-6, 37]}
	// Capacity: 40472
	// # of read delays: 8
  // 0, 143, 20165, 20306, 20307, 20308, 20449, 40471
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 142> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 20021> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 140> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 140> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 20021> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_143() {
		return f2;
	}

	inline hw_uint<32>  peek_20164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_20165() {
		return f4;
	}

	inline hw_uint<32>  peek_20305() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_20306() {
		return f6;
	}

	inline hw_uint<32>  peek_20307() {
		return f8;
	}

	inline hw_uint<32>  peek_20308() {
		return f10;
	}

	inline hw_uint<32>  peek_20448() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_20449() {
		return f12;
	}

	inline hw_uint<32>  peek_40470() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_40471() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20021
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20021 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 140
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 140 reading from capacity: 1
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
    // cap: 1 reading from capacity: 140
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 140 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20021
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20021 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 142
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 142 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_cache {
  // # of banks: 1
  h3_0_h3_0_update_0_write0_merged_banks_7_cache h3_0_h3_0_update_0_write0_merged_banks_7;
};



inline void h3_0_h3_0_update_0_write0_write(hw_uint<32> & h3_0_h3_0_update_0_write0, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.push(h3_0_h3_0_update_0_write0);
}

inline hw_uint<32>  h3_1_rd0_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd0 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[-1 + d0, d1, d2] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_20308();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd1_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd1 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[d0, -1 + d1, d2] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_20449();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd2_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd2 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[d0, d1, -1 + d2] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_40471();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd3_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd3 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[d0, d1, d2] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_20307();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd4_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd4 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[d0, d1, 1 + d2] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_143();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd5_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd5 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[d0, 1 + d1, d2] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_20165();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd6_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd6 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + d0, d1, d2] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_20306();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_write
//	h3_0_h3_0_update_0_write0
inline void h3_0_h3_0_update_0_write_bundle_write(hw_uint<32>& h3_0_update_0_write, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_0_h3_0_update_0_write0_res = h3_0_update_0_write.extract<0, 31>();
	h3_0_h3_0_update_0_write0_write(h3_0_h3_0_update_0_write0_res, h3_0, d0, d1, d2, dynamic_address);
}

// h3_1_update_0_read
//	h3_1_rd0
//	h3_1_rd1
//	h3_1_rd2
//	h3_1_rd3
//	h3_1_rd4
//	h3_1_rd5
//	h3_1_rd6
inline hw_uint<224> h3_0_h3_1_update_0_read_bundle_read(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_1_rd0
    // h3_1_rd1
    // h3_1_rd2
    // h3_1_rd3
    // h3_1_rd4
    // h3_1_rd5
    // h3_1_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_1_rd0_res = h3_1_rd0_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_1_rd0_res);
	hw_uint<32>  h3_1_rd1_res = h3_1_rd1_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_1_rd1_res);
	hw_uint<32>  h3_1_rd2_res = h3_1_rd2_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_1_rd2_res);
	hw_uint<32>  h3_1_rd3_res = h3_1_rd3_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_1_rd3_res);
	hw_uint<32>  h3_1_rd4_res = h3_1_rd4_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_1_rd4_res);
	hw_uint<32>  h3_1_rd5_res = h3_1_rd5_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_1_rd5_res);
	hw_uint<32>  h3_1_rd6_res = h3_1_rd6_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_1_rd6_res);
	return result;
}

struct h3_1_h3_1_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-6, 133], [-5, 132], [-5, 36]}
	// Capacity: 39342
	// # of read delays: 8
  // 0, 141, 19601, 19740, 19741, 19742, 19881, 39341
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 140> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 19459> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 138> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 138> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 19459> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_141() {
		return f2;
	}

	inline hw_uint<32>  peek_19600() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_19601() {
		return f4;
	}

	inline hw_uint<32>  peek_19739() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_19740() {
		return f6;
	}

	inline hw_uint<32>  peek_19741() {
		return f8;
	}

	inline hw_uint<32>  peek_19742() {
		return f10;
	}

	inline hw_uint<32>  peek_19880() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_19881() {
		return f12;
	}

	inline hw_uint<32>  peek_39340() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_39341() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19459
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19459 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 138
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 138 reading from capacity: 1
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
    // cap: 1 reading from capacity: 138
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 138 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19459
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19459 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 140
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 140 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_cache {
  // # of banks: 1
  h3_1_h3_1_update_0_write0_merged_banks_7_cache h3_1_h3_1_update_0_write0_merged_banks_7;
};



inline void h3_1_h3_1_update_0_write0_write(hw_uint<32> & h3_1_h3_1_update_0_write0, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.push(h3_1_h3_1_update_0_write0);
}

inline hw_uint<32>  h3_2_rd0_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd0 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[-1 + d0, d1, d2] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_19742();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd1_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd1 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[d0, -1 + d1, d2] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_19881();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd2_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd2 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[d0, d1, -1 + d2] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_39341();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd3_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd3 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[d0, d1, d2] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_19741();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd4_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd4 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[d0, d1, 1 + d2] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_141();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd5_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd5 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[d0, 1 + d1, d2] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_19601();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd6_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd6 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + d0, d1, d2] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_19740();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_1_update_0_write
//	h3_1_h3_1_update_0_write0
inline void h3_1_h3_1_update_0_write_bundle_write(hw_uint<32>& h3_1_update_0_write, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_1_h3_1_update_0_write0_res = h3_1_update_0_write.extract<0, 31>();
	h3_1_h3_1_update_0_write0_write(h3_1_h3_1_update_0_write0_res, h3_1, d0, d1, d2, dynamic_address);
}

// h3_2_update_0_read
//	h3_2_rd0
//	h3_2_rd1
//	h3_2_rd2
//	h3_2_rd3
//	h3_2_rd4
//	h3_2_rd5
//	h3_2_rd6
inline hw_uint<224> h3_1_h3_2_update_0_read_bundle_read(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_2_rd0
    // h3_2_rd1
    // h3_2_rd2
    // h3_2_rd3
    // h3_2_rd4
    // h3_2_rd5
    // h3_2_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_2_rd0_res = h3_2_rd0_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_2_rd0_res);
	hw_uint<32>  h3_2_rd1_res = h3_2_rd1_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_2_rd1_res);
	hw_uint<32>  h3_2_rd2_res = h3_2_rd2_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_2_rd2_res);
	hw_uint<32>  h3_2_rd3_res = h3_2_rd3_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_2_rd3_res);
	hw_uint<32>  h3_2_rd4_res = h3_2_rd4_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_2_rd4_res);
	hw_uint<32>  h3_2_rd5_res = h3_2_rd5_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_2_rd5_res);
	hw_uint<32>  h3_2_rd6_res = h3_2_rd6_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_2_rd6_res);
	return result;
}

struct h3_2_h3_2_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-5, 132], [-4, 131], [-4, 35]}
	// Capacity: 38228
	// # of read delays: 8
  // 0, 139, 19045, 19182, 19183, 19184, 19321, 38227
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 138> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 18905> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 136> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 136> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 18905> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_139() {
		return f2;
	}

	inline hw_uint<32>  peek_19044() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_19045() {
		return f4;
	}

	inline hw_uint<32>  peek_19181() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_19182() {
		return f6;
	}

	inline hw_uint<32>  peek_19183() {
		return f8;
	}

	inline hw_uint<32>  peek_19184() {
		return f10;
	}

	inline hw_uint<32>  peek_19320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_19321() {
		return f12;
	}

	inline hw_uint<32>  peek_38226() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_38227() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18905
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18905 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 136
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 136 reading from capacity: 1
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
    // cap: 1 reading from capacity: 136
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 136 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18905
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18905 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 138
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 138 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_cache {
  // # of banks: 1
  h3_2_h3_2_update_0_write0_merged_banks_7_cache h3_2_h3_2_update_0_write0_merged_banks_7;
};



inline void h3_2_h3_2_update_0_write0_write(hw_uint<32> & h3_2_h3_2_update_0_write0, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.push(h3_2_h3_2_update_0_write0);
}

inline hw_uint<32>  h3_3_rd0_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd0 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[-1 + d0, d1, d2] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_19184();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd1_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd1 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[d0, -1 + d1, d2] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_19321();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd2_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd2 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[d0, d1, -1 + d2] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_38227();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd3_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd3 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[d0, d1, d2] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_19183();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd4_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd4 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[d0, d1, 1 + d2] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_139();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd5_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd5 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[d0, 1 + d1, d2] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_19045();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd6_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd6 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + d0, d1, d2] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_19182();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_2_update_0_write
//	h3_2_h3_2_update_0_write0
inline void h3_2_h3_2_update_0_write_bundle_write(hw_uint<32>& h3_2_update_0_write, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_2_h3_2_update_0_write0_res = h3_2_update_0_write.extract<0, 31>();
	h3_2_h3_2_update_0_write0_write(h3_2_h3_2_update_0_write0_res, h3_2, d0, d1, d2, dynamic_address);
}

// h3_3_update_0_read
//	h3_3_rd0
//	h3_3_rd1
//	h3_3_rd2
//	h3_3_rd3
//	h3_3_rd4
//	h3_3_rd5
//	h3_3_rd6
inline hw_uint<224> h3_2_h3_3_update_0_read_bundle_read(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_3_rd0
    // h3_3_rd1
    // h3_3_rd2
    // h3_3_rd3
    // h3_3_rd4
    // h3_3_rd5
    // h3_3_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_3_rd0_res = h3_3_rd0_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_3_rd0_res);
	hw_uint<32>  h3_3_rd1_res = h3_3_rd1_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_3_rd1_res);
	hw_uint<32>  h3_3_rd2_res = h3_3_rd2_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_3_rd2_res);
	hw_uint<32>  h3_3_rd3_res = h3_3_rd3_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_3_rd3_res);
	hw_uint<32>  h3_3_rd4_res = h3_3_rd4_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_3_rd4_res);
	hw_uint<32>  h3_3_rd5_res = h3_3_rd5_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_3_rd5_res);
	hw_uint<32>  h3_3_rd6_res = h3_3_rd6_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_3_rd6_res);
	return result;
}

struct h3_3_h3_3_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-4, 131], [-3, 130], [-3, 34]}
	// Capacity: 37130
	// # of read delays: 8
  // 0, 137, 18497, 18632, 18633, 18634, 18769, 37129
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 136> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 18359> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 134> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 134> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 18359> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_137() {
		return f2;
	}

	inline hw_uint<32>  peek_18496() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_18497() {
		return f4;
	}

	inline hw_uint<32>  peek_18631() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_18632() {
		return f6;
	}

	inline hw_uint<32>  peek_18633() {
		return f8;
	}

	inline hw_uint<32>  peek_18634() {
		return f10;
	}

	inline hw_uint<32>  peek_18768() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_18769() {
		return f12;
	}

	inline hw_uint<32>  peek_37128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_37129() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18359
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18359 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 134
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 134 reading from capacity: 1
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
    // cap: 1 reading from capacity: 134
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 134 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18359
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18359 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 136
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 136 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_cache {
  // # of banks: 1
  h3_3_h3_3_update_0_write0_merged_banks_7_cache h3_3_h3_3_update_0_write0_merged_banks_7;
};



inline void h3_3_h3_3_update_0_write0_write(hw_uint<32> & h3_3_h3_3_update_0_write0, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.push(h3_3_h3_3_update_0_write0);
}

inline hw_uint<32>  h3_4_rd0_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd0 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[-1 + d0, d1, d2] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_18634();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd1_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd1 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[d0, -1 + d1, d2] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_18769();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd2_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd2 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[d0, d1, -1 + d2] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_37129();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd3_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd3 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[d0, d1, d2] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_18633();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd4_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd4 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[d0, d1, 1 + d2] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_137();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd5_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd5 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[d0, 1 + d1, d2] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_18497();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd6_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd6 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + d0, d1, d2] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_18632();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_3_update_0_write
//	h3_3_h3_3_update_0_write0
inline void h3_3_h3_3_update_0_write_bundle_write(hw_uint<32>& h3_3_update_0_write, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_3_h3_3_update_0_write0_res = h3_3_update_0_write.extract<0, 31>();
	h3_3_h3_3_update_0_write0_write(h3_3_h3_3_update_0_write0_res, h3_3, d0, d1, d2, dynamic_address);
}

// h3_4_update_0_read
//	h3_4_rd0
//	h3_4_rd1
//	h3_4_rd2
//	h3_4_rd3
//	h3_4_rd4
//	h3_4_rd5
//	h3_4_rd6
inline hw_uint<224> h3_3_h3_4_update_0_read_bundle_read(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_4_rd0
    // h3_4_rd1
    // h3_4_rd2
    // h3_4_rd3
    // h3_4_rd4
    // h3_4_rd5
    // h3_4_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_4_rd0_res = h3_4_rd0_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_4_rd0_res);
	hw_uint<32>  h3_4_rd1_res = h3_4_rd1_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_4_rd1_res);
	hw_uint<32>  h3_4_rd2_res = h3_4_rd2_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_4_rd2_res);
	hw_uint<32>  h3_4_rd3_res = h3_4_rd3_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_4_rd3_res);
	hw_uint<32>  h3_4_rd4_res = h3_4_rd4_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_4_rd4_res);
	hw_uint<32>  h3_4_rd5_res = h3_4_rd5_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_4_rd5_res);
	hw_uint<32>  h3_4_rd6_res = h3_4_rd6_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_4_rd6_res);
	return result;
}

struct h3_4_h3_4_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-3, 130], [-2, 129], [-2, 33]}
	// Capacity: 36048
	// # of read delays: 8
  // 0, 135, 17957, 18090, 18091, 18092, 18225, 36047
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 134> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 17821> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 132> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 132> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 17821> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_135() {
		return f2;
	}

	inline hw_uint<32>  peek_17956() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_17957() {
		return f4;
	}

	inline hw_uint<32>  peek_18089() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_18090() {
		return f6;
	}

	inline hw_uint<32>  peek_18091() {
		return f8;
	}

	inline hw_uint<32>  peek_18092() {
		return f10;
	}

	inline hw_uint<32>  peek_18224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_18225() {
		return f12;
	}

	inline hw_uint<32>  peek_36046() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_36047() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17821
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17821 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 132
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 132 reading from capacity: 1
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
    // cap: 1 reading from capacity: 132
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 132 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17821
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17821 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 134
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 134 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_cache {
  // # of banks: 1
  h3_4_h3_4_update_0_write0_merged_banks_7_cache h3_4_h3_4_update_0_write0_merged_banks_7;
};



inline void h3_4_h3_4_update_0_write0_write(hw_uint<32> & h3_4_h3_4_update_0_write0, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.push(h3_4_h3_4_update_0_write0);
}

inline hw_uint<32>  h3_5_rd0_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd0 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[-1 + d0, d1, d2] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_18092();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd1_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd1 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[d0, -1 + d1, d2] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_18225();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd2_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd2 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[d0, d1, -1 + d2] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_36047();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd3_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd3 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[d0, d1, d2] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_18091();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd4_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd4 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[d0, d1, 1 + d2] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_135();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd5_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd5 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[d0, 1 + d1, d2] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_17957();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd6_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd6 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + d0, d1, d2] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_18090();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_4_update_0_write
//	h3_4_h3_4_update_0_write0
inline void h3_4_h3_4_update_0_write_bundle_write(hw_uint<32>& h3_4_update_0_write, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_4_h3_4_update_0_write0_res = h3_4_update_0_write.extract<0, 31>();
	h3_4_h3_4_update_0_write0_write(h3_4_h3_4_update_0_write0_res, h3_4, d0, d1, d2, dynamic_address);
}

// h3_5_update_0_read
//	h3_5_rd0
//	h3_5_rd1
//	h3_5_rd2
//	h3_5_rd3
//	h3_5_rd4
//	h3_5_rd5
//	h3_5_rd6
inline hw_uint<224> h3_4_h3_5_update_0_read_bundle_read(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_5_rd0
    // h3_5_rd1
    // h3_5_rd2
    // h3_5_rd3
    // h3_5_rd4
    // h3_5_rd5
    // h3_5_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_5_rd0_res = h3_5_rd0_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_5_rd0_res);
	hw_uint<32>  h3_5_rd1_res = h3_5_rd1_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_5_rd1_res);
	hw_uint<32>  h3_5_rd2_res = h3_5_rd2_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_5_rd2_res);
	hw_uint<32>  h3_5_rd3_res = h3_5_rd3_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_5_rd3_res);
	hw_uint<32>  h3_5_rd4_res = h3_5_rd4_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_5_rd4_res);
	hw_uint<32>  h3_5_rd5_res = h3_5_rd5_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_5_rd5_res);
	hw_uint<32>  h3_5_rd6_res = h3_5_rd6_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_5_rd6_res);
	return result;
}

struct h3_5_h3_5_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-2, 129], [-1, 128], [-1, 32]}
	// Capacity: 34982
	// # of read delays: 8
  // 0, 133, 17425, 17556, 17557, 17558, 17689, 34981
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 132> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 17291> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 130> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 130> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 17291> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_133() {
		return f2;
	}

	inline hw_uint<32>  peek_17424() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_17425() {
		return f4;
	}

	inline hw_uint<32>  peek_17555() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_17556() {
		return f6;
	}

	inline hw_uint<32>  peek_17557() {
		return f8;
	}

	inline hw_uint<32>  peek_17558() {
		return f10;
	}

	inline hw_uint<32>  peek_17688() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_17689() {
		return f12;
	}

	inline hw_uint<32>  peek_34980() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_34981() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17291
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17291 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 130
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 130 reading from capacity: 1
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
    // cap: 1 reading from capacity: 130
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 130 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17291
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17291 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 132
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 132 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_cache {
  // # of banks: 1
  h3_5_h3_5_update_0_write0_merged_banks_7_cache h3_5_h3_5_update_0_write0_merged_banks_7;
};



inline void h3_5_h3_5_update_0_write0_write(hw_uint<32> & h3_5_h3_5_update_0_write0, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.push(h3_5_h3_5_update_0_write0);
}

inline hw_uint<32>  h3_6_rd0_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd0 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[-1 + d0, d1, d2] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_17558();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd1_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd1 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[d0, -1 + d1, d2] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_17689();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd2_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd2 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[d0, d1, -1 + d2] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_34981();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd3_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd3 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[d0, d1, d2] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_17557();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd4_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd4 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[d0, d1, 1 + d2] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_133();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd5_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd5 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[d0, 1 + d1, d2] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_17425();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd6_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd6 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + d0, d1, d2] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_17556();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_5_update_0_write
//	h3_5_h3_5_update_0_write0
inline void h3_5_h3_5_update_0_write_bundle_write(hw_uint<32>& h3_5_update_0_write, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_5_h3_5_update_0_write0_res = h3_5_update_0_write.extract<0, 31>();
	h3_5_h3_5_update_0_write0_write(h3_5_h3_5_update_0_write0_res, h3_5, d0, d1, d2, dynamic_address);
}

// h3_6_update_0_read
//	h3_6_rd0
//	h3_6_rd1
//	h3_6_rd2
//	h3_6_rd3
//	h3_6_rd4
//	h3_6_rd5
//	h3_6_rd6
inline hw_uint<224> h3_5_h3_6_update_0_read_bundle_read(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_6_rd0
    // h3_6_rd1
    // h3_6_rd2
    // h3_6_rd3
    // h3_6_rd4
    // h3_6_rd5
    // h3_6_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_6_rd0_res = h3_6_rd0_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_6_rd0_res);
	hw_uint<32>  h3_6_rd1_res = h3_6_rd1_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_6_rd1_res);
	hw_uint<32>  h3_6_rd2_res = h3_6_rd2_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_6_rd2_res);
	hw_uint<32>  h3_6_rd3_res = h3_6_rd3_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_6_rd3_res);
	hw_uint<32>  h3_6_rd4_res = h3_6_rd4_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_6_rd4_res);
	hw_uint<32>  h3_6_rd5_res = h3_6_rd5_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_6_rd5_res);
	hw_uint<32>  h3_6_rd6_res = h3_6_rd6_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_6_rd6_res);
	return result;
}

struct h3_6_h3_6_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-1, 128], [0, 127], [0, 31]}
	// Capacity: 33932
	// # of read delays: 8
  // 0, 131, 16901, 17030, 17031, 17032, 17161, 33931
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 130> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 16769> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 128> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 128> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 16769> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_131() {
		return f2;
	}

	inline hw_uint<32>  peek_16900() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_16901() {
		return f4;
	}

	inline hw_uint<32>  peek_17029() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_17030() {
		return f6;
	}

	inline hw_uint<32>  peek_17031() {
		return f8;
	}

	inline hw_uint<32>  peek_17032() {
		return f10;
	}

	inline hw_uint<32>  peek_17160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_17161() {
		return f12;
	}

	inline hw_uint<32>  peek_33930() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_33931() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 16769
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 16769 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 128
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 128 reading from capacity: 1
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
    // cap: 1 reading from capacity: 128
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 128 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 16769
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 16769 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 130
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 130 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_cache {
  // # of banks: 1
  h3_6_h3_6_update_0_write0_merged_banks_7_cache h3_6_h3_6_update_0_write0_merged_banks_7;
};



inline void h3_6_h3_6_update_0_write0_write(hw_uint<32> & h3_6_h3_6_update_0_write0, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.push(h3_6_h3_6_update_0_write0);
}

inline hw_uint<32>  h3_7_rd0_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd0 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[-1 + d0, d1, d2] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_17032();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd1_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd1 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[d0, -1 + d1, d2] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_17161();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd2_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd2 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[d0, d1, -1 + d2] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_33931();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd3_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd3 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[d0, d1, d2] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_17031();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd4_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd4 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[d0, d1, 1 + d2] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_131();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd5_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd5 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[d0, 1 + d1, d2] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_16901();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd6_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd6 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + d0, d1, d2] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_17030();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_6_update_0_write
//	h3_6_h3_6_update_0_write0
inline void h3_6_h3_6_update_0_write_bundle_write(hw_uint<32>& h3_6_update_0_write, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_6_h3_6_update_0_write0_res = h3_6_update_0_write.extract<0, 31>();
	h3_6_h3_6_update_0_write0_write(h3_6_h3_6_update_0_write0_res, h3_6, d0, d1, d2, dynamic_address);
}

// h3_7_update_0_read
//	h3_7_rd0
//	h3_7_rd1
//	h3_7_rd2
//	h3_7_rd3
//	h3_7_rd4
//	h3_7_rd5
//	h3_7_rd6
inline hw_uint<224> h3_6_h3_7_update_0_read_bundle_read(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_7_rd0
    // h3_7_rd1
    // h3_7_rd2
    // h3_7_rd3
    // h3_7_rd4
    // h3_7_rd5
    // h3_7_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_7_rd0_res = h3_7_rd0_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_7_rd0_res);
	hw_uint<32>  h3_7_rd1_res = h3_7_rd1_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_7_rd1_res);
	hw_uint<32>  h3_7_rd2_res = h3_7_rd2_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_7_rd2_res);
	hw_uint<32>  h3_7_rd3_res = h3_7_rd3_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_7_rd3_res);
	hw_uint<32>  h3_7_rd4_res = h3_7_rd4_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_7_rd4_res);
	hw_uint<32>  h3_7_rd5_res = h3_7_rd5_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_7_rd5_res);
	hw_uint<32>  h3_7_rd6_res = h3_7_rd6_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_7_rd6_res);
	return result;
}

struct h3_7_h3_7_update_0_write0_to_heat3dla_8_1_rd0_cache {
	// RAM Box: {[0, 127], [0, 127], [0, 31]}
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

struct h3_7_cache {
  // # of banks: 1
  h3_7_h3_7_update_0_write0_to_heat3dla_8_1_rd0_cache h3_7_h3_7_update_0_write0_to_heat3dla_8_1_rd0;
};



inline void h3_7_h3_7_update_0_write0_write(hw_uint<32> & h3_7_h3_7_update_0_write0, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write0_to_heat3dla_8_1_rd0.push(h3_7_h3_7_update_0_write0);
}

inline hw_uint<32>  heat3dla_8_1_rd0_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dla_8_1_rd0 read pattern: { heat3dla_8_1_update_0[d0, d1, d2] -> h3_7[d0, d1, d2] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Read schedule : { heat3dla_8_1_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_to_heat3dla_8_1_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_7_update_0_write
//	h3_7_h3_7_update_0_write0
inline void h3_7_h3_7_update_0_write_bundle_write(hw_uint<32>& h3_7_update_0_write, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_7_h3_7_update_0_write0_res = h3_7_update_0_write.extract<0, 31>();
	h3_7_h3_7_update_0_write0_write(h3_7_h3_7_update_0_write0_res, h3_7, d0, d1, d2, dynamic_address);
}

// heat3dla_8_1_update_0_read
//	heat3dla_8_1_rd0
inline hw_uint<32> h3_7_heat3dla_8_1_update_0_read_bundle_read(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 1
    // heat3dla_8_1_rd0

	hw_uint<32> result;
	hw_uint<32>  heat3dla_8_1_rd0_res = heat3dla_8_1_rd0_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<0, 32>(result, heat3dla_8_1_rd0_res);
	return result;
}

struct in_cc_in_cc_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-8, 135], [-7, 134], [-7, 38]}
	// Capacity: 41618
	// # of read delays: 8
  // 0, 145, 20737, 20880, 20881, 20882, 21025, 41617
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 144> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 20591> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 142> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 142> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 20591> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_145() {
		return f2;
	}

	inline hw_uint<32>  peek_20736() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_20737() {
		return f4;
	}

	inline hw_uint<32>  peek_20879() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_20880() {
		return f6;
	}

	inline hw_uint<32>  peek_20881() {
		return f8;
	}

	inline hw_uint<32>  peek_20882() {
		return f10;
	}

	inline hw_uint<32>  peek_21024() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_21025() {
		return f12;
	}

	inline hw_uint<32>  peek_41616() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_41617() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20591
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20591 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 142
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 142 reading from capacity: 1
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
    // cap: 1 reading from capacity: 142
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 142 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20591
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20591 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 144
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 144 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_cache {
  // # of banks: 1
  in_cc_in_cc_update_0_write0_merged_banks_7_cache in_cc_in_cc_update_0_write0_merged_banks_7;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.push(in_cc_in_cc_update_0_write0);
}

inline hw_uint<32>  h3_0_rd0_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[-1 + d0, d1, d2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 135 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_20882();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, -1 + d1, d2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 135 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_21025();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, d1, -1 + d2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 135 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_41617();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, d1, d2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 135 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_20881();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, d1, 1 + d2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 135 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_145();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd5_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd5 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, 1 + d1, d2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 135 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_20737();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd6_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd6 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + d0, d1, d2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 135 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_20880();
  return value_in_cc_in_cc_update_0_write0;
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
inline hw_uint<224> in_cc_h3_0_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_0_rd0
    // h3_0_rd1
    // h3_0_rd2
    // h3_0_rd3
    // h3_0_rd4
    // h3_0_rd5
    // h3_0_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_0_rd0_res = h3_0_rd0_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_0_rd0_res);
	hw_uint<32>  h3_0_rd1_res = h3_0_rd1_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_0_rd1_res);
	hw_uint<32>  h3_0_rd2_res = h3_0_rd2_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_0_rd2_res);
	hw_uint<32>  h3_0_rd3_res = h3_0_rd3_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_0_rd3_res);
	hw_uint<32>  h3_0_rd4_res = h3_0_rd4_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_0_rd4_res);
	hw_uint<32>  h3_0_rd5_res = h3_0_rd5_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_0_rd5_res);
	hw_uint<32>  h3_0_rd6_res = h3_0_rd6_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_0_rd6_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<32>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, d2, dynamic_address);
}

// Total re-use buffer capacity: 9655808 bits


// Operation logic
inline void in_cc_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, in_cc_cache& in_cc, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_1(in_0_c__0_value);
	// Produce: in_cc
	in_cc_in_cc_update_0_write_bundle_write(/* arg names */compute_result, in_cc, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_0_update_0(in_cc_cache& in_cc, h3_0_cache& h3_0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_h3_0_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_0_generated_compute_unrolled_1(in_cc_0_c__0_value);
	// Produce: h3_0
	h3_0_h3_0_update_0_write_bundle_write(/* arg names */compute_result, h3_0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_1_update_0(h3_0_cache& h3_0, h3_1_cache& h3_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_0
	auto h3_0_0_c__0_value = h3_0_h3_1_update_0_read_bundle_read(h3_0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_1_generated_compute_unrolled_1(h3_0_0_c__0_value);
	// Produce: h3_1
	h3_1_h3_1_update_0_write_bundle_write(/* arg names */compute_result, h3_1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_2_update_0(h3_1_cache& h3_1, h3_2_cache& h3_2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_1
	auto h3_1_0_c__0_value = h3_1_h3_2_update_0_read_bundle_read(h3_1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_2_generated_compute_unrolled_1(h3_1_0_c__0_value);
	// Produce: h3_2
	h3_2_h3_2_update_0_write_bundle_write(/* arg names */compute_result, h3_2, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_3_update_0(h3_2_cache& h3_2, h3_3_cache& h3_3, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_2
	auto h3_2_0_c__0_value = h3_2_h3_3_update_0_read_bundle_read(h3_2/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_3_generated_compute_unrolled_1(h3_2_0_c__0_value);
	// Produce: h3_3
	h3_3_h3_3_update_0_write_bundle_write(/* arg names */compute_result, h3_3, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_4_update_0(h3_3_cache& h3_3, h3_4_cache& h3_4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_3
	auto h3_3_0_c__0_value = h3_3_h3_4_update_0_read_bundle_read(h3_3/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_4_generated_compute_unrolled_1(h3_3_0_c__0_value);
	// Produce: h3_4
	h3_4_h3_4_update_0_write_bundle_write(/* arg names */compute_result, h3_4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_5_update_0(h3_4_cache& h3_4, h3_5_cache& h3_5, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_4
	auto h3_4_0_c__0_value = h3_4_h3_5_update_0_read_bundle_read(h3_4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_5_generated_compute_unrolled_1(h3_4_0_c__0_value);
	// Produce: h3_5
	h3_5_h3_5_update_0_write_bundle_write(/* arg names */compute_result, h3_5, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_6_update_0(h3_5_cache& h3_5, h3_6_cache& h3_6, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_5
	auto h3_5_0_c__0_value = h3_5_h3_6_update_0_read_bundle_read(h3_5/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_6_generated_compute_unrolled_1(h3_5_0_c__0_value);
	// Produce: h3_6
	h3_6_h3_6_update_0_write_bundle_write(/* arg names */compute_result, h3_6, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_7_update_0(h3_6_cache& h3_6, h3_7_cache& h3_7, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_6
	auto h3_6_0_c__0_value = h3_6_h3_7_update_0_read_bundle_read(h3_6/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_7_generated_compute_unrolled_1(h3_6_0_c__0_value);
	// Produce: h3_7
	h3_7_h3_7_update_0_write_bundle_write(/* arg names */compute_result, h3_7, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void heat3dla_8_1_update_0(h3_7_cache& h3_7, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */heat3dla_8_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_7
	auto h3_7_0_c__0_value = h3_7_heat3dla_8_1_update_0_read_bundle_read(h3_7/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = heat3dla_8_1_generated_compute_unrolled_1(h3_7_0_c__0_value);
	// Produce: heat3dla_8_1
	heat3dla_8_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void heat3dla_8_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */heat3dla_8_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("heat3dla_8_1_opt_debug.csv");
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
  in_cc_cache in_cc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 135 and -8 <= d1 <= 135 and -8 <= d2 <= 39; h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36; h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34; h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37; h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35; h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33; h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31; h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38; h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32; heat3dla_8_1_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
//   { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -8 <= d0 <= 135 and -8 <= d1 <= 135 and -8 <= d2 <= 39 }
// Condition for in_cc_update_0(((-1 + i3 == 0) && (8 + i2 >= 0) && (135 - i2 >= 0) && (8 + i1 >= 0) && (135 - i1 >= 0) && (8 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -5 <= d0 <= 132 and -5 <= d1 <= 132 and -5 <= d2 <= 36 }
// Condition for h3_2_update_0(((-4 + i3 == 0) && (2 + i2 >= 0) && (135 - i2 >= 0) && (2 + i1 >= 0) && (135 - i1 >= 0) && (2 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -3 <= d0 <= 130 and -3 <= d1 <= 130 and -3 <= d2 <= 34 }
// Condition for h3_4_update_0(((-6 + i3 == 0) && (-2 + i2 >= 0) && (135 - i2 >= 0) && (-2 + i1 >= 0) && (135 - i1 >= 0) && (-2 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -6 <= d0 <= 133 and -6 <= d1 <= 133 and -6 <= d2 <= 37 }
// Condition for h3_1_update_0(((-3 + i3 == 0) && (4 + i2 >= 0) && (135 - i2 >= 0) && (4 + i1 >= 0) && (135 - i1 >= 0) && (4 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -4 <= d0 <= 131 and -4 <= d1 <= 131 and -4 <= d2 <= 35 }
// Condition for h3_3_update_0(((-5 + i3 == 0) && (i2 >= 0) && (135 - i2 >= 0) && (i1 >= 0) && (135 - i1 >= 0) && (i0 >= 0) && (39 - i0 >= 0)))
//   { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -2 <= d0 <= 129 and -2 <= d1 <= 129 and -2 <= d2 <= 33 }
// Condition for h3_5_update_0(((-7 + i3 == 0) && (-4 + i2 >= 0) && (135 - i2 >= 0) && (-4 + i1 >= 0) && (135 - i1 >= 0) && (-4 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
// Condition for h3_7_update_0(((-9 + i3 == 0) && (-8 + i2 >= 0) && (135 - i2 >= 0) && (-8 + i1 >= 0) && (135 - i1 >= 0) && (-8 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -7 <= d0 <= 134 and -7 <= d1 <= 134 and -7 <= d2 <= 38 }
// Condition for h3_0_update_0(((-2 + i3 == 0) && (6 + i2 >= 0) && (135 - i2 >= 0) && (6 + i1 >= 0) && (135 - i1 >= 0) && (6 + i0 >= 0) && (39 - i0 >= 0)))
//   { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -1 <= d0 <= 128 and -1 <= d1 <= 128 and -1 <= d2 <= 32 }
// Condition for h3_6_update_0(((-8 + i3 == 0) && (-6 + i2 >= 0) && (135 - i2 >= 0) && (-6 + i1 >= 0) && (135 - i1 >= 0) && (-6 + i0 >= 0) && (39 - i0 >= 0)))
//   { heat3dla_8_1_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 10] : 0 <= d0 <= 127 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
// Condition for heat3dla_8_1_update_0(((-10 + i3 == 0) && (-8 + i2 >= 0) && (135 - i2 >= 0) && (-8 + i1 >= 0) && (135 - i1 >= 0) && (-8 + i0 >= 0) && (39 - i0 >= 0)))

  /*
  // Schedules...
    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // h3_1_update_0 -> [1*d2*1*1 + 1*2,1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // h3_2_update_0 -> [1*d2*1*1 + 1*3,1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // h3_3_update_0 -> [1*d2*1*1 + 1*4,1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // h3_4_update_0 -> [1*d2*1*1 + 1*5,1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
    // h3_5_update_0 -> [1*d2*1*1 + 1*6,1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
    // h3_6_update_0 -> [1*d2*1*1 + 1*7,1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
    // h3_7_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
    // heat3dla_8_1_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*10]
    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = -8; c0 <= 39; c0++) {
  for (int c1 = -8; c1 <= 135; c1++) {
    for (int c2 = -8; c2 <= 135; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((-8 <= c2 && c2 <= 135) && ((c2 - 0) % 1 == 0) && (-8 <= c1 && c1 <= 135) && ((c1 - 0) % 1 == 0) && (-8 <= c0 && c0 <= 39) && ((c0 - 0) % 1 == 0)) {
        in_cc_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((-6 <= c2 && c2 <= 135) && ((c2 - 1) % 1 == 0) && (-6 <= c1 && c1 <= 135) && ((c1 - 1) % 1 == 0) && (-6 <= c0 && c0 <= 39) && ((c0 - 1) % 1 == 0)) {
        h3_0_update_0((c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
      }

      if ((-4 <= c2 && c2 <= 135) && ((c2 - 2) % 1 == 0) && (-4 <= c1 && c1 <= 135) && ((c1 - 2) % 1 == 0) && (-4 <= c0 && c0 <= 39) && ((c0 - 2) % 1 == 0)) {
        h3_1_update_0((c2 - 2) / 1, (c1 - 2) / 1, (c0 - 2) / 1);
      }

      if ((-2 <= c2 && c2 <= 135) && ((c2 - 3) % 1 == 0) && (-2 <= c1 && c1 <= 135) && ((c1 - 3) % 1 == 0) && (-2 <= c0 && c0 <= 39) && ((c0 - 3) % 1 == 0)) {
        h3_2_update_0((c2 - 3) / 1, (c1 - 3) / 1, (c0 - 3) / 1);
      }

      if ((0 <= c2 && c2 <= 135) && ((c2 - 4) % 1 == 0) && (0 <= c1 && c1 <= 135) && ((c1 - 4) % 1 == 0) && (0 <= c0 && c0 <= 39) && ((c0 - 4) % 1 == 0)) {
        h3_3_update_0((c2 - 4) / 1, (c1 - 4) / 1, (c0 - 4) / 1);
      }

      if ((2 <= c2 && c2 <= 135) && ((c2 - 5) % 1 == 0) && (2 <= c1 && c1 <= 135) && ((c1 - 5) % 1 == 0) && (2 <= c0 && c0 <= 39) && ((c0 - 5) % 1 == 0)) {
        h3_4_update_0((c2 - 5) / 1, (c1 - 5) / 1, (c0 - 5) / 1);
      }

      if ((4 <= c2 && c2 <= 135) && ((c2 - 6) % 1 == 0) && (4 <= c1 && c1 <= 135) && ((c1 - 6) % 1 == 0) && (4 <= c0 && c0 <= 39) && ((c0 - 6) % 1 == 0)) {
        h3_5_update_0((c2 - 6) / 1, (c1 - 6) / 1, (c0 - 6) / 1);
      }

      if ((6 <= c2 && c2 <= 135) && ((c2 - 7) % 1 == 0) && (6 <= c1 && c1 <= 135) && ((c1 - 7) % 1 == 0) && (6 <= c0 && c0 <= 39) && ((c0 - 7) % 1 == 0)) {
        h3_6_update_0((c2 - 7) / 1, (c1 - 7) / 1, (c0 - 7) / 1);
      }

      if ((8 <= c2 && c2 <= 135) && ((c2 - 8) % 1 == 0) && (8 <= c1 && c1 <= 135) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 39) && ((c0 - 8) % 1 == 0)) {
        h3_7_update_0((c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
      }

      if ((8 <= c2 && c2 <= 135) && ((c2 - 8) % 1 == 0) && (8 <= c1 && c1 <= 135) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 39) && ((c0 - 8) % 1 == 0)) {
        heat3dla_8_1_update_0((c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // h3_1_update_0 -> [1*d2*1*1 + 1*2,1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // h3_2_update_0 -> [1*d2*1*1 + 1*3,1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // h3_3_update_0 -> [1*d2*1*1 + 1*4,1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // h3_4_update_0 -> [1*d2*1*1 + 1*5,1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // h3_5_update_0 -> [1*d2*1*1 + 1*6,1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
	    // h3_6_update_0 -> [1*d2*1*1 + 1*7,1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
	    // h3_7_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
	    // heat3dla_8_1_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*10]
	    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = -8; c0 <= 39; c0++) {
	  for (int c1 = -8; c1 <= 135; c1++) {
	    for (int c2 = -8; c2 <= 135; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((-8 <= c2 && c2 <= 135) && ((c2 - 0) % 1 == 0) && (-8 <= c1 && c1 <= 135) && ((c1 - 0) % 1 == 0) && (-8 <= c0 && c0 <= 39) && ((c0 - 0) % 1 == 0)) {
	        in_cc_update_0(in /* buf name */, in_cc, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((-6 <= c2 && c2 <= 135) && ((c2 - 1) % 1 == 0) && (-6 <= c1 && c1 <= 135) && ((c1 - 1) % 1 == 0) && (-6 <= c0 && c0 <= 39) && ((c0 - 1) % 1 == 0)) {
	        h3_0_update_0(in_cc /* buf name */, h3_0, (c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
	      }
	
	      if ((-4 <= c2 && c2 <= 135) && ((c2 - 2) % 1 == 0) && (-4 <= c1 && c1 <= 135) && ((c1 - 2) % 1 == 0) && (-4 <= c0 && c0 <= 39) && ((c0 - 2) % 1 == 0)) {
	        h3_1_update_0(h3_0 /* buf name */, h3_1, (c2 - 2) / 1, (c1 - 2) / 1, (c0 - 2) / 1);
	      }
	
	      if ((-2 <= c2 && c2 <= 135) && ((c2 - 3) % 1 == 0) && (-2 <= c1 && c1 <= 135) && ((c1 - 3) % 1 == 0) && (-2 <= c0 && c0 <= 39) && ((c0 - 3) % 1 == 0)) {
	        h3_2_update_0(h3_1 /* buf name */, h3_2, (c2 - 3) / 1, (c1 - 3) / 1, (c0 - 3) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 135) && ((c2 - 4) % 1 == 0) && (0 <= c1 && c1 <= 135) && ((c1 - 4) % 1 == 0) && (0 <= c0 && c0 <= 39) && ((c0 - 4) % 1 == 0)) {
	        h3_3_update_0(h3_2 /* buf name */, h3_3, (c2 - 4) / 1, (c1 - 4) / 1, (c0 - 4) / 1);
	      }
	
	      if ((2 <= c2 && c2 <= 135) && ((c2 - 5) % 1 == 0) && (2 <= c1 && c1 <= 135) && ((c1 - 5) % 1 == 0) && (2 <= c0 && c0 <= 39) && ((c0 - 5) % 1 == 0)) {
	        h3_4_update_0(h3_3 /* buf name */, h3_4, (c2 - 5) / 1, (c1 - 5) / 1, (c0 - 5) / 1);
	      }
	
	      if ((4 <= c2 && c2 <= 135) && ((c2 - 6) % 1 == 0) && (4 <= c1 && c1 <= 135) && ((c1 - 6) % 1 == 0) && (4 <= c0 && c0 <= 39) && ((c0 - 6) % 1 == 0)) {
	        h3_5_update_0(h3_4 /* buf name */, h3_5, (c2 - 6) / 1, (c1 - 6) / 1, (c0 - 6) / 1);
	      }
	
	      if ((6 <= c2 && c2 <= 135) && ((c2 - 7) % 1 == 0) && (6 <= c1 && c1 <= 135) && ((c1 - 7) % 1 == 0) && (6 <= c0 && c0 <= 39) && ((c0 - 7) % 1 == 0)) {
	        h3_6_update_0(h3_5 /* buf name */, h3_6, (c2 - 7) / 1, (c1 - 7) / 1, (c0 - 7) / 1);
	      }
	
	      if ((8 <= c2 && c2 <= 135) && ((c2 - 8) % 1 == 0) && (8 <= c1 && c1 <= 135) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 39) && ((c0 - 8) % 1 == 0)) {
	        h3_7_update_0(h3_6 /* buf name */, h3_7, (c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
	      }
	
	      if ((8 <= c2 && c2 <= 135) && ((c2 - 8) % 1 == 0) && (8 <= c1 && c1 <= 135) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 39) && ((c0 - 8) % 1 == 0)) {
	        heat3dla_8_1_update_0(h3_7 /* buf name */, heat3dla_8_1, (c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void heat3dla_8_1_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */heat3dla_8_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    heat3dla_8_1_opt(in, heat3dla_8_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { heat3dla_8_1_update_0[root = 0, heat3dla_8_1_0, heat3dla_8_1_1, heat3dla_8_1_2] -> heat3dla_8_1[0, 0] : 0 <= heat3dla_8_1_0 <= 127 and 0 <= heat3dla_8_1_1 <= 127 and 0 <= heat3dla_8_1_2 <= 31 }
const int heat3dla_8_1_update_0_write_pipe0_num_transfers = 524288;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] -> in[0, 0] : -8 <= in_cc_0 <= 135 and -8 <= in_cc_1 <= 135 and -8 <= in_cc_2 <= 39 }
const int in_cc_update_0_read_pipe0_num_transfers = 995328;


extern "C" {

void heat3dla_8_1_opt_accel(hw_uint<32>* in_cc_update_0_read_pipe0, hw_uint<32>* heat3dla_8_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = heat3dla_8_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = heat3dla_8_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > heat3dla_8_1_update_0_write_pipe0_channel;

  burst_read<32>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  heat3dla_8_1_opt_wrapper(in_cc_update_0_read_pipe0_channel, heat3dla_8_1_update_0_write_pipe0_channel, size);

  burst_write<32>(heat3dla_8_1_update_0_write_pipe0, heat3dla_8_1_update_0_write_pipe0_channel, heat3dla_8_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void heat3dla_8_1_opt_rdai(HWStream<hw_uint<32> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<32> >&  heat3dla_8_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = heat3dla_8_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  heat3dla_8_1_opt(in_cc_update_0_read_pipe0, heat3dla_8_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

